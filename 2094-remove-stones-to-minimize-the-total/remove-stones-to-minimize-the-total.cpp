class Solution {
public:

    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxHeap(piles.begin(), piles.end()); // Max heap

        while (k--) {
            int largest = maxHeap.top();
            maxHeap.pop();
            largest -= largest / 2;  // Remove floor(largest / 2) stones
            maxHeap.push(largest);
        }

        int totalStones = 0;
        while (!maxHeap.empty()) {
            totalStones += maxHeap.top();
            maxHeap.pop();
        }

        return totalStones;

    }
};