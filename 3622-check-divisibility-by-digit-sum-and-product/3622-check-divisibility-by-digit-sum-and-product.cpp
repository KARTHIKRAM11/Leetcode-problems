class Solution {
public:
    bool helper(int n){
        int temp = n;
        int sum = 0;
        int prod = 1;

        while(temp){
            int digit = temp%10;
            sum = sum + digit;
            prod = prod*digit;
            temp = temp/10;
        }

        int total = sum + prod;

        return n%total == 0;
    }


public:
    bool checkDivisibility(int n) {
        
        return helper(n);
    }
};