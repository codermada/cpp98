#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <algorithm>

void    displayInt(int const &n)
{
    std::cout << n << std::endl;
}

int main()
{
    // containers
    std::list<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    for (std::list<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::map<std::string, int> name_to_age;
    name_to_age["Alice"] = 30;
    name_to_age["Bob"] = 25;
    for (std::map<std::string, int>::const_iterator it = name_to_age.begin(); it != name_to_age.end(); ++it)
    {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    std::vector<std::string> fruits;
    fruits.push_back("Apple");
    fruits.push_back("Banana");
    fruits.push_back("Cherry");
    for (std::vector<std::string>::const_iterator it = fruits.begin(); it != fruits.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::vector<int> t(5, 100);
    for (std::vector<int>::const_iterator it = t.begin(); it != t.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    // algorithm
    for_each(numbers.begin(), numbers.end(), displayInt);
    return (0);
}
