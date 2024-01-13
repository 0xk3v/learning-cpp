#include <iostream>
#include <vector>

int main(int argc, char* argv[])
{
    std::vector<int> vec;
    vec.push_back(42);
    vec.push_back(10);
    vec.push_back(42);
    vec.push_back(90);
    vec.push_back(20);
    vec.push_back(70);

    /* std::cout << vec[0] << std::endl; */
    /* std::cout << vec[1] << std::endl; */

    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }

    std::cout << "-------" << std::endl;

    for (int a : vec) {
        std::cout << a << std::endl;
    }

    return 0;
}
