#include <iostream>
#include <cstring>

int main()
{
    char    text[] = "ssss dddd dddddd ddddd";
    char    *token;

    token = std::strtok(text, (const char *)" ");
    while (token)
    {
        std::cout << token << std::endl;
        token = std::strtok(NULL, (const char *)" ");
    }
    float   b;
    float   c = 10.42f;
    int    a = 1000000;
    void    *pa = &a; // implicit reinterpret cast
    void    *pc = (void *) &c; // explicit reinterpret cast
    b = *((int *)pa); 
    std::cout << pa << std::endl;
    std::cout << b << std::endl;
    b = *((float *)pa); 
    std::cout << pa << std::endl;
    std::cout << b << std::endl;
    b = *((char *)pa); 
    std::cout << pa << std::endl;
    std::cout << b << std::endl;
    a = *((int *)pc);
    std::cout << pc << std::endl;
    std::cout << a << std::endl;
    a = *((float *)pc);
    std::cout << pc << std::endl; // 10.42 -> 10 (precision loss)
    std::cout << a << std::endl;
    a = *((int *)pc);
    std::cout << pc << std::endl;
    std::cout << a << std::endl;
    return (0);
}