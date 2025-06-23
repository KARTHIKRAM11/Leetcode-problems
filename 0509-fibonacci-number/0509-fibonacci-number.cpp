/*
class Solution {
public:
    int fib(int n) {
        if(n == 1) return 1;
        else if(n==0) return 0;
        int map[n+1];
        map[0]=0;
        map[1]=1;

        for(int i=2 ; i<=n ; i++)
        {
            map[i]=map[i-1] + map[i-2];
        }

        return map[n];
    }
};
*/

class Solution {
public:
    int fib(int n) {
        if(n==1) return 1;
        else if(n==0) return 0;

        return fib(n-1) + fib(n-2);
    }
};