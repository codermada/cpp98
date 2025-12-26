#include <iostream>

template <typename T>
T const &max(T const &x, T const &y)
{
    return (x >= y ? x : y);
}

template <typename T = int>
class   Number
{
public:
    T   N;
    Number(T const &n): N(n){ std::cout << n << std::endl; }
};

template <>
class   Number<float>
{
public:
    float   N;
    Number(float const &n): N(n){ std::cout << "float: " << n << std::endl; }
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Number<T> const &N)
{
    o << "N: ";
    o << N.N;
    return (o);
}

int main()
{
    std::cout << max<int>(1, 2) << std::endl; // explicit
    std::cout << max(1.7f, -2.1f) << std::endl; // implicit

    Number<> I(3);
    Number<float> F(2.6f);

    std::cout << I << std::endl;
    std::cout << F << std::endl;
    return (0);
}
