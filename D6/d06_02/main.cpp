#include <iostream>

int main()
{
    int n = 42;
    int const   *p;
    int const   *p2;
    p = &n; // implicit type qualifier cast
    p2 = (int const *)&n; // explicit type qualifier cast
    std::cout << "n: " << n << ", p: " << p << std::endl;
    std::cout << "n: " << n << ", p2: " << p2 << std::endl;
    int *p3;
    // p3 = p2; not working
    p3 = (int *)p2;
    std::cout << "n: " << n << ", p3: " << p3 << std::endl;
    return (0);
}