#include <iostream>
#include <string>

class   Student
{
private:
    std::string _login;
public:
    Student(void): _login("default")
    {
        std::cout << "Student: " + _login + " has been created."<< std::endl;
    }
    Student(std::string login): _login(login)
    {
        std::cout << "Student: " + _login + " has been created."<< std::endl;
    }
    ~Student()
    {
        std::cout << "Student: " + _login + " has been destroyed."<< std::endl;
    }
    void    printLogin(void) const
    {
        std::cout << _login << std::endl;
    }
};

int main()
{
    Student t("test");
    Student *u;
    Student *studs = new Student[20];

    u = new Student("hey");
    u->printLogin();
    for (int i = 0; i < 20; i++)
    {
        studs[i].printLogin();
    }
    delete u;
    delete []studs;
    return (0);
}