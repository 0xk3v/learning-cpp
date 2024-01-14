#include <iostream>

void pp(int& i)
{
    std::cout << &i << " " << i << " " << sizeof(i) << std::endl;
}

int main(int argc, char* argv[])
{

    int a = 14;
    int b = 29;
    int* pa = &a;
    int* pb = &b;

    *(pb + 1) = 170;

    pp(a);
    pp(b);

    return 0;
}
