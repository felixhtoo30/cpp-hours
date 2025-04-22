#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    uint8_t a = 255;
    std::cout << "a = " << (int)a << std::endl;

    a += 1;  // Overflow!
    std::cout << "a after +1 = " << (int)a << std::endl;

    int32_t b = INT32_MAX;
    std::cout << "b = " << b << std::endl;

    b += 1;  // Signed overflow (undefined behavior)
    std::cout << "b after +1 = " << b << std::endl;

    return 0;
}