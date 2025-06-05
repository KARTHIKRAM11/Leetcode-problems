class Solution {
public:
    int reverse(int x) {
        bool sign=true;
        long temp = x;
        if(temp<0){
            sign=false;
            temp=abs(temp);
        }
        long rev=0;
        while(temp>0)
        {
            rev=(rev*10)+(temp%10);
            temp=temp/10;

            if(rev>INT_MAX || rev<INT_MIN) rev=0;
        }
        if(sign==false){
            rev=-1*rev;
            return rev;
        }
        return rev;
    }
};