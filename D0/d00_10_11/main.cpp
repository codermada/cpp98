#include <iostream>
#include <string>

struct   Test
{
private:
    int _private_number;
    static int  count;
public:
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

    bool    compare(Test *other) const;

    static void testFromClass(void);
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

bool    Test::compare(Test *other) const
{
    if (_private_number == other->getPrivateNumber())
        return (1);
    return (0);
}

void    Test::testFromClass(void)
{
    std::cout << "This is a test from instance."<< std::endl;
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
    Test    A(2, 0.2f, "yo");
    A.setPrivateNumber(12);
    Test    B;
    std::cout << A.compare(&B) << std::endl;
    B.testFromClass();
    return (0);
}