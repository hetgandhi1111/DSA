
/*-------------------------------------BETTER SOLUTION --------------------------------------------
*/
#include <iostream>
#include <vector>

std::vector<std::vector<int>> zeroMatrix(const std::vector<std::vector<int>> &matrix, int n, int m) {
    std::vector<int> col(m, 0);
    std::vector<int> row(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    std::vector<std::vector<int>> result(matrix);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                result[i][j] = 0;
            }
        }
    }

    return result;
}

int main() {
    int n, m;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    std::cout << "Enter the number of columns: ";
    std::cin >> m;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));

    std::cout << "Enter the matrix elements:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }

    std::vector<std::vector<int>> result = zeroMatrix(matrix, n, m);

    std::cout << "Resultant matrix after zeroing rows and columns:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

/*----------------------------------------OPTIMAL SOLUTION ----------------------------------------*/
#include <iostream>
#include <vector>

std::vector<std::vector<int>> zeroMatrix(std::vector<std::vector<int>> &matrix, int n, int m) {
    int col0 = 1;

    // User input for the matrix
    std::cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Zero Matrix Transformation
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                if (j != 0) {
                    matrix[0][j] = 0;
                } else {
                    col0 = 0;
                }
            }
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] != 0) {
                if (matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) matrix[0][j] = 0;
    }

    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main() {
    int n, m;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    std::cout << "Enter the number of columns: ";
    std::cin >> m;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));

    // Call the zeroMatrix function
    std::vector<std::vector<int>> result = zeroMatrix(matrix, n, m);

    // Display the result
    std::cout << "Resultant matrix after zeroing rows and columns:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

