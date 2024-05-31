#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    map<int, int> mpp;
    for (int i = 0; i < v.size(); i++) {
        mpp[v[i]]++;
    }
    for (auto it : mpp) {
        if (it.second > (v.size() / 2)) {
            return it.first;
        }
    }
    return -1;
}

int main() {
    // Taking user input for vector elements
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Calling the majorityElement function and displaying the result
    int result = majorityElement(v);
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "There is no majority element in the vector." << endl;
    }

    return 0;
}
