#include <iostream>

class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    std::string getName() { return this->name; }
};

int main()
{
    std::cout << "Hello world" << std::endl;
    Person per1("John", 90);
    std::cout << per1.getName() << std::endl;

    return 0;
}
