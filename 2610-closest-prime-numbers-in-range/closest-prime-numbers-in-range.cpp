class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        // Step 1: Sieve of Eratosthenes to find prime numbers up to 'right'
        vector<bool> isPrime(right + 1, true);
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

        for (int i = 2; i * i <= right; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Step 2: Collect prime numbers in the range [left, right]
        vector<int> primes;
        for (int i = left; i <= right; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }

        // Step 3: Find the closest prime pair
        if (primes.size() < 2) return {-1, -1};

        int minDiff = INT_MAX;
        vector<int> result = {-1, -1};

        for (size_t i = 0; i < primes.size() - 1; ++i) {
            int diff = primes[i + 1] - primes[i];
            if (diff < minDiff) {
                minDiff = diff;
                result = {primes[i], primes[i + 1]};
            }
        }

        return result;
    }
};
