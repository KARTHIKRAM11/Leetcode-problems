class Solution {
public:

    int check(int n) {
        int sum=0;
        while(n) {
            int num = n%10;
            sum+=num*num;
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow=n, fast=n;
        do {
            slow = check(slow);
            fast = check(check(fast));
        } while(slow!=fast);

        return slow==1;
    }
};