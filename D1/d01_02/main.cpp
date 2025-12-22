#include <iostream>
#include <string>
#include <fstream>

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
    void    setLogin(std::string newLogin)
    {
        _login = newLogin;
    }
    void    printLogin(void) const
    {
        std::cout << _login << std::endl;
    }
    static void    modif(std::string &str)
    {
        str += "bou";
    }
    static void    no_modif(std::string str)
    {
        str += "bou";
    }
};

int main()
{
    Student t("test");
    Student *u;
    Student *studs = new Student[20];
    std::string test_str = "t";
    std::ifstream   f("infile.txt");
    if (!f.fail())
    {
        int v1;
        int v2;
        int v3;
        f >> v1 >> v2 >> v3;
        std::cout << v1 << " " << v2 << " " << v3 << std::endl;
        f.close();
    }
	std::ofstream	f2("outfile.txt");
	f2 << "hey" << std::endl;
	f2.close();
    u = new Student("hey");
    Student &uRef = *u;
    u->printLogin();
    for (int i = 0; i < 20; i++)
    {
        studs[i].printLogin();
    }
    uRef.printLogin();
    t.no_modif(test_str);
    uRef.setLogin(test_str);
    uRef.printLogin();
    delete u;
    delete []studs;
    return (0);
}
