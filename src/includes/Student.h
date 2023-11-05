#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Course;

class Student
{
public:
    Student();
    enum Gender
    {
        male,
        female,
    };
    struct ContactInfo
    {
        std::string email{};
        std::string phone{};
    };

    void enrollInCourse(const Course* course);
    void viewTranscript();
private:
    int m_id{};
    std::string m_firstName{};
    std::string m_lastName{};
    std::string m_DateOfBirth{};
    Gender m_gender{};
    ContactInfo m_contactInfo{};
    std::string m_address{};
    std::string m_enrollmentDate{};
    std::vector<Course*> m_coursesEnrolled{};
};
#endif
