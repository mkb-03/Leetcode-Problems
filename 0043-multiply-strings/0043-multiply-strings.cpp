class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.length();
        int m = num2.length();
        vector<int> result(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int product = (num1[i] - '0') * (num2[j] - '0');
                int sum = product + result[i + j + 1];
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        string finalResult = "";
        for (int digit : result) {
            if (!(finalResult.empty() && digit == 0)) {
                finalResult += to_string(digit);
            }
        }

        return finalResult.empty() ? "0" : finalResult;
    }
};
