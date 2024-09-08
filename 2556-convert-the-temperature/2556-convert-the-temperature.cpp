class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double kel = (celsius * 1.8) + 32.0;
        double fah = celsius + 273.15;
        ans.push_back(fah);
        ans.push_back(kel);
        return ans;
    }
};