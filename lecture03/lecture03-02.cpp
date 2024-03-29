#include <cstddef>
#include <iostream>

void pp(int& i)
{
    std::cout << &i << " " << i << " " << sizeof(i) << std::endl;
}

template <typename T>
class DynamicArr {
    size_t m_size;
    T* m_arr;

public:
    DynamicArr(size_t size)
        : m_size(size)
        , m_arr(new T[size])
    {
        std::cout << "Array Contructor\n";
    }

    ~DynamicArr()
    {
        delete[] m_arr;
        std::cout << "Array Destructor\n";
    }

    T get(size_t index) const
    {
        return m_arr[index];
    }

    void set(size_t index, T val)
    {
        m_arr[index] = val;
    }

    void print() const
    {
        for (size_t i = 0; i < m_size; i++) {
            std::cout << i << " " << m_arr[i] << std::endl;
        }
    }

    const T& operator[](size_t index) const
    {
        return m_arr[index];
    }

    T& operator[](size_t index)
    {
        return m_arr[index];
    }
};

int main(int argc, char* argv[])
{

    DynamicArr<int> myArr(10);

    myArr[4] = 30;
    myArr[0] = 10;

    myArr.print();

    return 0;
}
