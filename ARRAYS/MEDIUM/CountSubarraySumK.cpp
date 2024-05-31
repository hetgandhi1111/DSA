#include <iostream>
#include <vector>
#include <map>

int findAllSubarraysWithGivenSum(std::vector<int> &arr, int k) {
    std::map<int, int> mpp;
    mpp[0] = 1;
    int presum = 0, cnt = 0;

    // User input for the array
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    arr.resize(n);

    std::cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < arr.size(); i++) {
        presum += arr[i];
        int remove = presum - k;
        cnt += mpp[remove];
        mpp[presum] += 1;
    }

    return cnt;
}

int main() {
    int k;

    // User input for the target sum
    std::cout << "Enter the target sum (k): ";
    std::cin >> k;

    // Call the findAllSubarraysWithGivenSum function
    int result = findAllSubarraysWithGivenSum(arr, k);

    // Display the result
    std::cout << "Number of subarrays with the given sum: " << result << std::endl;

    return 0;
}
