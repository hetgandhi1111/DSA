#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> superiorElements(vector<int> &a) {
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();
    
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > maxi) {
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }

    reverse(ans.begin(), ans.end()); // Reverse the elements to maintain the original order
    return ans;
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

    vector<int> result = superiorElements(inputVector);

    cout << "Superior Elements: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
