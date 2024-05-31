#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    int ind = -1;
    int n = A.size();

    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            ind = i;
            break;
        }
    }

    if (ind == -1) {
        reverse(A.begin(), A.end());
        return A;
    }

    for (int i = n - 1; i > ind; i--) {
        if (A[i] > A[ind]) {
            swap(A[i], A[ind]);
            break;
        }
    }

    reverse(A.begin() + ind + 1, A.end());
    return A;
}

int main() {
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    vector<int> inputVector(size);

    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < size; i++) {
        cin >> inputVector[i];
    }

    vector<int> result = nextGreaterPermutation(inputVector);

    cout << "Next Greater Permutation: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
