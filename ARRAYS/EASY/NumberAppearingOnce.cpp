#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int xorr = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solution;
    int singleNum = solution.singleNumber(nums);

    cout << "The single number in the array is: " << singleNum << endl;

    return 0;
}
