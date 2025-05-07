#include<iostream>

void backtracking(const std::vector<int>& arr, const int start, std::vector<int>& temp, std::vector<std::vector<int>> & res) {
    res.push_back(temp);

    for (int i = start; i<std::size(arr); i++) {
        temp.push_back(arr[i]);
        backtracking(arr, i+1, temp, res);
        temp.pop_back();
    }
}

std::vector<std::vector<int>> getAllPossibleSubset(const std::vector<int>& vector) {
    std::vector<std::vector<int>> result;
    std::vector<int> temp;

    backtracking(vector, 0, temp, result);
    return result;
}

auto main(int argc, char **argv) -> signed {
    std::string temp;
    std::getline(std::cin, temp);

    const int base_number = std::stoi(temp);

    std::vector<int> vector(base_number);
    for (int i = 0; i<base_number; i++) {
        std::getline(std::cin, temp);
        vector[i] = std::stoi(temp);
    }

    for (const auto allPossibleSubsets = getAllPossibleSubset(vector); const auto& i: allPossibleSubsets) {
        for (const auto j: i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}