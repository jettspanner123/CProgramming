#include<iostream>
#include<string>
#include <__ranges/split_view.h>


auto main(int argc, char **argv) -> signed {
    std::string temp;
    std::getline(std::cin, temp);

    const int row = std::stoi(&temp[0]), col = std::stoi(&temp[1]);
    std::vector<std::vector<int> > maze(row, std::vector<int>(col, 0));

    for (int i = 0; i < row; i++) for (int j = 0; j < col; j++) maze[i][j] = 0;

    return 0;
}
