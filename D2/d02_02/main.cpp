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

class   ThisIsCanonical
{
public:
    ThisIsCanonical(void) : _n(0)
    {}
    ThisIsCanonical(int const n) : _n(n)
    {}
    ThisIsCanonical(ThisIsCanonical const &src)
    {
        *this = src;
    }
    ThisIsCanonical &operator=(ThisIsCanonical const &rhs)
    {
        _n = rhs.getN();
        return (*this);
    }
    virtual ~ThisIsCanonical()
    {}

    void    setN(int const n)
    {
        _n = n;
    }
    int getN(void) const
    {
        return (_n);
    }
private:
    int _n;
};

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

    ThisIsCanonical c1(34);
    ThisIsCanonical c2;
    ThisIsCanonical c3(c1);
    c2 = c1;
    std::cout << c1.getN() << std::endl;
    std::cout << c2.getN() << std::endl;
    std::cout << c3.getN() << std::endl;
    return (0);
}