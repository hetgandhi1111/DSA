
//-------------------------------BRUTE FORECE METHOD--------------------------------

#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int>& a) {
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            temp.push_back(a[i]);
        }
    }
    int nz = temp.size();
    for(int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }
    for(int i = nz; i < n; i++) {
        a[i] = 0;
    }
    return a;
}

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result = moveZeros(n, a);

    cout << "Resulting vector: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}



//--------------------------------OPTIMAL METHOD OF SOLVING THE QUESTION------------------------
/*
#include <iostream>
#include <vector>

std::vector<int> moveZeros(int n, std::vector<int> a) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }
    if (j == -1) return a;
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            std::swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main() {
    int n;
    std::cout << "Enter the size of the vector: ";
    std::cin >> n;

    std::vector<int> a(n);
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<int> result = moveZeros(n, a);

    std::cout << "Resulting vector: ";
    for (int i = 0; i < n; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/