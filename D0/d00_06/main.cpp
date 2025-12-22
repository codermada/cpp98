#include <iostream>
#include <string>

class   Test
{
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
};

int  Test::count = 0;

Test::Test(void): random_const(0.0f)
{
    count++;
    number = count;
    std::cout << "Test instance " << number <<" created." << std::endl;
}

Test::Test(int r_number, float const r_const, std::string r_word): random_number(r_number), random_const(r_const), random_word(r_word)
{
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
}

int main(void)
{
    Test    t;
    Test    e;
    Test    *f;
    std::string str = "hey";
    Test    c(24, 0.2f, str);

    f = new Test();
    t.test();
    e.test();
    t.test();
    f->test();
    delete f;
    return (0);
}