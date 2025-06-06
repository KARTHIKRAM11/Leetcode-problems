class Solution {
public:
    bool isHappy(int n) {
    set<int> s;
    while(true)
    {
        int sum=0;
        while(n>0)
        {
            sum+=pow(n%10,2);
            n/=10;
        }
        if(sum==1) return true;        

        n=sum;

        if(s.contains(n)) return false;
        s.insert(n);
    }
    }
};