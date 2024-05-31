
//----------------------------------------------BRUTE FORCE ----------------------------------------

#include<bits/stdc++.h>
using namespace std;

vector<int> FindArray(vector<int>& A, int n, vector<int>& B, int m) {
    vector<int> ans;
    vector<int> vis(m, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j] && vis[j] == 0) {
                ans.push_back(A[i]);
                vis[j] = 1;
                break;
            }
            if (B[j] > A[i]) break;
        }
    }

    return ans;
}

int main() {
    int n, m;

    cout << "Enter the size of the first vector: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter " << n << " elements for the first vector: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << "Enter the size of the second vector: ";
    cin >> m;

    vector<int> B(m);
    cout << "Enter " << m << " elements for the second vector: ";
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    vector<int> result = FindArray(A, n, B, m);

    cout << "Common elements: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}




//----------------------------------OPTIMAL SOLUTION-----------------------------
/*
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findArrayIntersection(std::vector<int>& arr1, int n, std::vector<int>& arr2, int m) {
    int i = 0;
    int j = 0;
    std::vector<int> ans;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    int n, m;

    // Input for the size of the first vector
    std::cout << "Enter the size of the first vector: ";
    std::cin >> n;

    // Input for the elements of the first vector
    std::vector<int> arr1(n);
    std::cout << "Enter " << n << " elements for the first vector: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }

    // Input for the size of the second vector
    std::cout << "Enter the size of the second vector: ";
    std::cin >> m;

    // Input for the elements of the second vector
    std::vector<int> arr2(m);
    std::cout << "Enter " << m << " elements for the second vector: ";
    for (int i = 0; i < m; i++) {
        std::cin >> arr2[i];
    }

    std::vector<int> result = findArrayIntersection(arr1, n, arr2, m);

    std::cout << "Common elements: ";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}
*/