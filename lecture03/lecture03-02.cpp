#include <iostream>

void pp(int& i)
{
    std::cout << &i << " " << i << " " << sizeof(i) << std::endl;
}

class IntArr {
    size_t m_size;
    int* m_arr;

public:
    IntArr(size_t size)
        : m_size(size)
        , m_arr(new int[size])
    {

        std::cout << "Array Contructor";
    }
};

int main(int argc, char* argv[])
{

    return 0;
}
