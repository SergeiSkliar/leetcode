class Solution {
public:
    double average(vector<int>& salary) {
        double averageSalary = 0;
        int count = 0;
        auto max = max_element(salary.begin(), salary.end());
        auto min = min_element(salary.begin(), salary.end());
        for (auto it = salary.begin(); it != salary.end(); ++it)
        {
            if (it == max || it == min)
                continue;
            else
            {
                averageSalary += *it;
                ++count;
            }
        }
        averageSalary /= count;
        return averageSalary;
    }
};