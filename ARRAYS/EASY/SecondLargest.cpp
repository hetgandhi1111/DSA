#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr, int n) {
    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int secondSmallest(vector<int>& arr, int n) {
    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int secondLargestElement = secondLargest(arr, n);
    int secondSmallestElement = secondSmallest(arr, n);

    cout << "Second largest element: " << secondLargestElement << endl;
    cout << "Second smallest element: " << secondSmallestElement << endl;

    return 0;
}
