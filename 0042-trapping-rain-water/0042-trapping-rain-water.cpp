class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0) return 0;

        vector<int> l(n),r(n);
        int ml=0,mr=0;

        for(int i=0;i<n;i++)
        {
            ml=max(ml,height[i]);
            l[i]=ml;
        }

        for(int i=n-1;i>=0;i--)
        {
            mr=max(mr,height[i]);
            r[i]=mr;
        }

        int waterUnit=0;
        for(int i=0;i<n;i++)
        {
            waterUnit+=min(l[i],r[i])-height[i];
        }
        return waterUnit;
    }
};