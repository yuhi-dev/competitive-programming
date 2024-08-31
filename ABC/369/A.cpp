#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    if ((A + B) % 2 == 0) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }

    return 0;
}
