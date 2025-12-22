#include <iostream>

class   Test
{
public:
    static int  count;
    int number;

    Test(void);
    ~Test();
    void    test(void) const;
};

int  Test::count = 0;

Test::Test(void)
{
    count++;
    number = count;
    std::cout << "Test instance " << number <<" created." << std::endl;
    std::cout << this->number << std::endl;
}

Test::~Test()
{
    std::cout << "Test instance " << number << " destroyed." << std::endl;
}

void    Test::test(void) const
{
    std::cout << "This is a test from instance " << number << "."<< std::endl;
}

int main(void)
{
    Test    t;
    Test    e;
    Test    *f;

    f = new Test();
    t.test();
    e.test();
    t.test();
    f->test();
    delete f;
    return (0);
}