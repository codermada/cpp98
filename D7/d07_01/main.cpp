#include <iostream>

template <typename T>
T const &max(T const &x, T const &y)
{
    return (x >= y ? x : y);
}

template <typename T>
class   Number
{
public:
    T   N;
    Number<T>(T const &n): N(n){ std::cout << n << std::endl; }
};

int main()
{
    std::cout << max<int>(1, 2) << std::endl; // explicit
    std::cout << max(1.7f, -2.1f) << std::endl; // implicit

    Number<int> I(3);
    Number<float> F(2.6f);
    return (0);
}