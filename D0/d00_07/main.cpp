#include <iostream>
#include <string>

class   Test
{
private:
    int _private_number;
public:
    static int  count;
    int random_number;
    float const random_const;
    std::string random_word;
    int number;

    Test(void);
    Test(int r_number, float const r_const, std::string r_word);
    ~Test();

    void    test(void) const;

    void    setPrivateNumber(int n);
    int getPrivateNumber(void) const;
};

int  Test::count = 0;

Test::Test(void): random_const(0.0f)
{
    _private_number = 0;
    count++;
    number = count;
    std::cout << "Test instance " << number <<" created." << std::endl;
}

Test::Test(int r_number, float const r_const, std::string r_word): random_number(r_number), random_const(r_const), random_word(r_word)
{
    _private_number = 0;
    count++;
    number = count;
    std::cout << "Test instance " << number <<" created." << std::endl;
    std::cout << this->random_number << std::endl;
    std::cout << this->random_const << std::endl;
    std::cout << this->random_word << std::endl;
}

Test::~Test()
{
    std::cout << "Test instance " << number << " destroyed." << std::endl;
}

void    Test::test(void) const
{
    std::cout << "This is a test from instance " << number << "."<< std::endl;
    std::cout << _private_number << std::endl;
}

void    Test::setPrivateNumber(int n)
{
    _private_number = n;
}

int Test::getPrivateNumber(void) const
{
    return (_private_number);
}

int main(void)
{
    Test    t;
    Test    e;
    Test    *f;
    std::string str = "hey";
    Test    c(24, 0.2f, str);

    f = new Test();
    e.setPrivateNumber(42);
    t.test();
    e.test();
    t.test();
    f->test();
    std::cout << e.getPrivateNumber() << std::endl;
    delete f;
    return (0);
}