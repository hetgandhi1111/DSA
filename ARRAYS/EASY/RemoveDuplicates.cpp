#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &arr) {
    int n = arr.size();
    
    if (n <= 1) {
        return n; // No duplicates to remove for arrays of size 0 or 1
    }

    int i = 0; // Index for the unique elements

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j]; // Move the unique element to the next position
        }
    }

    // The unique elements are now in the first (i+1) positions of the array
    return i + 1; // Return the length of the new array
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int newLength = removeDuplicates(arr);

    std::cout << "Array with duplicates removed:" << std::endl;
    for (int i = 0; i < newLength; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
