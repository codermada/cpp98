#include <iostream>

class   Number
{
public:
    int n;
    operator int();
    operator float();
};

Number::operator int()
{
    return (n);
}

Number::operator float()
{
    return (n);
}

int main()
{
    Number n;
    int i;
    float f;

    n.n = 9;
    i = n;
    f = n;
    std::cout << i <<std::endl;
    std::cout << f <<std::endl;
    return (0);
}