
//-----------------------------------------------------BRUTE FORCE ----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    
    for (int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }
    
    for (int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }
    
    vector<int> temp;
    for (auto it : st) {
        temp.push_back(it);
    }
    
    return temp;
}

int main() {
    int n1, n2;
    

    cout << "Enter the size of the first vector: ";
    cin >> n1;
    
    vector<int> a;
    cout << "Enter " << n1 << " elements for the first vector: ";
    for (int i = 0; i < n1; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    

    cout << "Enter the size of the second vector: ";
    cin >> n2;
    
    vector<int> b;
    cout << "Enter " << n2 << " elements for the second vector: ";
    for (int i = 0; i < n2; i++) {
        int num;
        cin >> num;
        b.push_back(num);
    }
    
    vector<int> result = sortedArray(a, b);
    
    cout << "Union of two vectors: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}


//--------------------------------OPTIMAL METHOD----------------------------------------
/*#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortedArray(const std::vector<int>& a, const std::vector<int>& b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    std::vector<int> unionArr;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    return unionArr;
}

int main() {
    int n1, n2;

    // Input for the size of the first vector
    std::cout << "Enter the size of the first vector: ";
    std::cin >> n1;

    // Input for the elements of the first vector
    std::vector<int> a(n1);
    std::cout << "Enter " << n1 << " elements for the first vector: ";
    for (int i = 0; i < n1; i++) {
        std::cin >> a[i];
    }

    // Input for the size of the second vector
    std::cout << "Enter the size of the second vector: ";
    std::cin >> n2;

    // Input for the elements of the second vector
    std::vector<int> b(n2);
    std::cout << "Enter " << n2 << " elements for the second vector: ";
    for (int i = 0; i < n2; i++) {
        std::cin >> b[i];
    }

    std::vector<int> result = sortedArray(a, b);

    std::cout << "Merged and sorted vector: ";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}
*/
