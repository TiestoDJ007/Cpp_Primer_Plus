//
// Created by a on 2019/7/25.
//
#include <iostream>

int main() {
    char ch;
    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.') {
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ch+1;
        std::cin.get(ch);
    }
    std::cout << "\nPlease excuse the slight confusion.\n";
    return 0;
}
