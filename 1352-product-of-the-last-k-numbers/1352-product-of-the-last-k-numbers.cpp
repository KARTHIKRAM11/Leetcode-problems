/*class ProductOfNumbers {
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        
    }
    
    int getProduct(int k) {
        
    }
};
*/
class ProductOfNumbers {
public:
    int run_prod;
    vector<int> prods;
    ProductOfNumbers() {
        run_prod = 1;
    }
    
    void add(int num) {
        if(num == 0)
        {
            run_prod = 1;
            prods.clear();
            return;
        }
        run_prod = run_prod * num;
        prods.push_back(run_prod);
    }
    
    int getProduct(int k) {
        if (k > prods.size())
            return 0;
        if (k == prods.size())
            return run_prod;
        int n = prods.size();
        return run_prod / prods[n - k - 1];
    }
};
/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */