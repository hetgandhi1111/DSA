#include <iostream>
#include <vector>

std::vector<int> spiralMatrix(std::vector<std::vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    std::vector<int> ans;

    // User input for the matrix
    std::cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        mat[i].resize(m);  // Resize each row to ensure correct size
        for (int j = 0; j < m; j++) {
            std::cin >> mat[i][j];
        }
    }

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            ans.push_back(mat[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            ans.push_back(mat[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main() {
    int n, m;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    std::cout << "Enter the number of columns: ";
    std::cin >> m;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));

    // Call the spiralMatrix function
    std::vector<int> result = spiralMatrix(matrix);

    // Display the result
    std::cout << "Spiral order matrix:\n";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
