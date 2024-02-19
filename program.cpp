#include <iostream>
#include <string>

int main() {
    string name;

    std::cout << "What is your name: " << std::endl; std::cin >> name;
    std::cout << "Your name is " << name << std::endl;

    return 0;
}
