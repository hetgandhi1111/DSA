#include<biits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N;
        
        cout << "Enter the value of N: ";
        cin >> N;

        int xor1 = 0;
        int xor2 = 0;
        int n = N - 1;
        
        cout << "Enter " << n << " elements for the vector: ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ (i + 1);
        }

        xor1 = xor1 ^ N;
        
        return xor1 ^ xor2;
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    int result = solution.missingNumber(nums);
    cout << "The missing number is: " << result << endl;
    return 0;
}
