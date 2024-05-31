
//----------------------------BRUTE FORCE METHOD--------------------------------

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int more = target - nums[i];
            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }
            mpp[a] = i;
        }
        return {-1, -1};
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    int target, n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> result = solution.twoSum(nums, target);

    if (result[0] != -1 && result[1] != -1) {
        cout << "Indices of the two numbers that add up to the target: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}

//-----------------------------OPTIMAL METHOD----------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string read(int n, vector<int>& book, int target) {
    int left = 0, right = n - 1;
    sort(book.begin(), book.end());

    while (left < right) {
        int sum = book[left] + book[right];
        if (sum == target) {
            return "YES";
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return "NO";
}

int main() {
    int n, target;

    cout << "Enter the number of elements in the book: ";
    cin >> n;

    vector<int> book(n);

    cout << "Enter the elements of the book: ";
    for (int i = 0; i < n; i++) {
        cin >> book[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    string result = read(n, book, target);

    cout << "Result: " << result << endl;

    return 0;
}