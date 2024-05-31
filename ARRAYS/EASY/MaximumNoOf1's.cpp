#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int maxi = 0;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                cnt += 1;
                maxi = max(maxi, cnt);
            }
            else {
                cnt = 0;
            }
        }
        return maxi;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of the array (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solution;
    int maxConsecutiveOnes = solution.findMaxConsecutiveOnes(nums);

    cout << "The maximum consecutive ones in the array are: " << maxConsecutiveOnes << endl;

    return 0;
}
