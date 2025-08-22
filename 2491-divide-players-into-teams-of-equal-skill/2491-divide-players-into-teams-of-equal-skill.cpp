class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int target = skill[0] + skill[n-1];
        long long ans = 0;

        int i = 0, j = n - 1;
        while (i < j) {
            if (skill[i] + skill[j] != target) return -1;
            ans += 1LL * skill[i] * skill[j];
            i++;
            j--;
        }
        return ans;
    }
};
