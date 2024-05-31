#include <vector>
#include <climits>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums, int n) {
        long long sum = 0, maxi = LONG_MIN;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (sum > maxi) {
                maxi = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
            if (maxi < 0) {
                return 0;
            }
        }
        return maxi;
    }
};

int main() {
    // Example usage
    std::vector<int> param_1 = { /* your array values here */ };
    int n = param_1.size(); // Assuming 'n' is the size of the array
    int ret = Solution().maxSubArray(param_1, n);
    return ret;
}
