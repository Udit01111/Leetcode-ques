class ProductOfNumbers {
public:
    vector<int> prefixProduct;

    ProductOfNumbers() {
        prefixProduct = {1}; // Start with 1 as a neutral product
    }
    
    void add(int num) {
        if (num == 0) {
            prefixProduct = {1}; // Reset on zero
        } else {
            prefixProduct.push_back(prefixProduct.back() * num);
        }
    }
    
    int getProduct(int k) {
        int n = prefixProduct.size();
        if (k >= n) return 0; // If k exceeds available elements, return 0 (due to zero reset)
        return prefixProduct[n - 1] / prefixProduct[n - 1 - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */