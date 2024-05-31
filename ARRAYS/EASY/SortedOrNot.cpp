#include <iostream>
#include <vector>

using namespace std;

bool isSorted(int n, vector<int> a) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool sorted = isSorted(n, a);

    if (sorted) {
        cout << "The array is sorted in non-decreasing order." << endl;
    } else {
        cout << "The array is not sorted in non-decreasing order." << endl;
    }

    return 0;
}
