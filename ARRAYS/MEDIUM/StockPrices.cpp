#include <iostream>
#include <vector>
#include <climits>

int bestTimeToBuyAndSellStock(std::vector<int>& prices) {
    int mini = prices[0], profit = 0;
    for (int i = 1; i < prices.size(); i++) {
        int cost = prices[i] - mini;
        profit = std::max(profit, cost);
        mini = std::min(mini, prices[i]);
    }
    return profit;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> prices(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    int result = bestTimeToBuyAndSellStock(prices);
    std::cout << "The maximum profit is: " << result << std::endl;

    return 0;
}
