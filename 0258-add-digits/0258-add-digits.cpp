/*class Solution {
public:
    int addDigits(int num) {
        long long sum=0;
        bool ans=true;
        while(ans)
        {
            sum=0;
            while(num>0)
            {
                sum=sum+(num%10);
                num/=10;
            }

            if(sum<10 && sum>=0)
            {
                ans=false;
            }

            num=sum;
        }
        return sum;
    }
};
*/

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        return (num % 9 == 0) ? 9 : (num % 9);
    }
};
