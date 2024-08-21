#include <iostream>
#include <fmt/core.h>

int main() {
    int value = 42;
    std::string formatted = std::format("The answer is {}.", value);
    std::cout << formatted << std::endl;
    return 0;
}
