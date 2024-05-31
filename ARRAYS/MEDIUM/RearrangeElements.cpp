#include <iostream>
#include <vector>

using namespace std;

vector<int> alternateNumbers(vector<int>& a) {
    vector<int> pos, neg;
    int n = a.size();
    
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            pos.push_back(a[i]);
        } else {
            neg.push_back(a[i]);
        }
    }

    if (pos.size() > neg.size()) {
        for (int i = 0; i < neg.size(); i++) {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }

        int index = neg.size() * 2;

        for (int i = neg.size(); i < pos.size(); i++) {
            a[index] = pos[i];
            index++;
        }
    } else {
        for (int i = 0; i < pos.size(); i++) {
            a[2 * i] = neg[i];
            a[2 * i + 1] = pos[i];
        }

        int index = pos.size() * 2;

        for (int i = pos.size(); i < neg.size(); i++) {
            a[index] = neg[i];
            index++;
        }
    }

    return a;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> inputArray(size);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> inputArray[i];
    }

    vector<int> result = alternateNumbers(inputArray);

    cout << "Resultant array: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
