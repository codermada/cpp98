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

int main()
{
    Test    t;

    t.test();
    t.test('a');
    t.test(23);
    return (0);
}