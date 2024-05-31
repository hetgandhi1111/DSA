#include <iostream>
#include <vector>
#include <algorithm>

void rotateMatrix(std::vector<std::vector<int>> &mat) {
    int n = mat.size();

    // User input for the matrix
    std::cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> mat[i][j];
        }
    }

    // Rotate the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            std::swap(mat[i][j], mat[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        std::reverse(mat[i].begin(), mat[i].end());
    }
}

int main() {
    int n;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    // Call the rotateMatrix function
    rotateMatrix(matrix);

    // Display the rotated matrix
    std::cout << "Rotated matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
