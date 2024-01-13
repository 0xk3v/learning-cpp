#include <iostream>
#include <string>
#include <vector>

class Student {
    std::string m_first = "First";
    std::string m_last = "Last";
    int m_id = 0;
    float m_avg = 0;

public:
    Student() { }

    Student(std::string first, std::string last, int id, float avg)
        : m_first(first)
        , m_last(last)
        , m_id(id)
        , m_avg(avg)
    {
    }

    int getAvg() const
    {
        return m_avg;
    }

    int getID() const
    {
        return m_id;
    }

    std::string getFirst() const
    {
        return m_first;
    }

    std::string getLast() const
    {
        return m_last;
    }

    void print() const
    {
        std::cout << this->m_first << " " << this->m_last << " ";
        std::cout << this->m_id << " " << this->m_avg << std::endl;
    }
};

class Course {

    std::string m_name;
    std::vector<Student> m_students;

public:
    Course() { }

    Course(const std::string& name)
        : m_name(name)
    {
    }

    void addStudent(const Student& student)
    {
        m_students.push_back(student);
    }

    const std::vector<Student>& getStudents() const
    {
        return this->m_students;
    }

    void print() const
    {
        for (auto& student : m_students) {

            student.print();
        }
    }
};

int main(int argc, char* argv[])
{
    Student s1;
    Student s2("John", "Doe", 1, 3.14);

    const Student s3("Jane", "Doe", 203920392, 99.9);

    Course eng001("Engineering Lab");

    eng001.addStudent(s2);
    eng001.addStudent(s3);

    std::cout << "----------" << std::endl;
    eng001.print();
    std::cout << "----------" << std::endl;

    return 0;
}
