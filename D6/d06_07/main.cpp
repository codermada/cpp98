#include <iostream>

int main()
{
    int n = 42;
    int const   *p;
    int const   *p2;
    p = &n;
    p2 = const_cast<int const *>(&n);
    std::cout << "n: " << n << ", p: " << p << std::endl;
    std::cout << "n: " << n << ", p2: " << p2 << std::endl;
    int *p3;
    p3 = const_cast<int *>(p2);
    std::cout << "n: " << n << ", p3: " << p3 << std::endl;
    return (0);
}