class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int minSalary = INT_MAX;
        int maxSalary = INT_MIN;
        double sum = 0;

        for (int s : salary) {
            sum += s;
            minSalary = min(minSalary, s);
            maxSalary = max(maxSalary, s);
        }

        sum = sum - minSalary - maxSalary;
        return sum / (n - 2);
    }
};
