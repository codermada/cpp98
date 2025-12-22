#include <iostream>

class   Test
{
public:
    void    test(void) const
    {
        std::cout << "1" << std::endl;
    }
    void    test(int n) const
    {
        std::cout << n << std::endl;
    }
    void    test(char c) const
    {
        std::cout << c << std::endl;
    }
};

class   Number
{
public:
    int n;
    void    print(void) const
    {
        std::cout << n << std::endl;
    }
    Number  operator+(Number const &rhs) const
    {
        Number  res;
        res.n = this->n + rhs.n;
        return (res);
    }
};

std::ostream    &operator<<(std::ostream &o, Number const &rhs)
{
    o << rhs.n;
    return (o);
}

int main()
{
    Test    t;

    t.test();
    t.test('a');
    t.test(23);

    Number  A;
    Number  B;
    A.n = 2;
    B.n = 34;
    std::cout << A + B << std::endl;
    return (0);
}