#ifndef SCHOOL_H
#define SCHOOL_H
#include<Student.h>
#include<Teachar.h>
#include<Staff.h>
#include<Course.h>
#include<ClassRoom.h>
#include<iostream>
using namespace std;

class school
{
private:
    string schoolName;
    string address;
    string principalName;
    Student students[1000];
    Teacher teachers[50];
    Staff staffs[50];
    course courses[6];
    ClassRoom rooms[50];
    int studentCounter=0;
    int teacherCounter=0;
    int staffCounter=0;
    int courseCounter=0;
    int roomCounter=0;
public:
    school()
    {

    }
    void addStudent(Student s)
    {
        students[studentCounter]=s;
        studentCounter++;
    }
    void addTeachar(Teacher t)
    {
        teachers[teacherCounter]=t;
        teacherCounter++;
    }
    void addStaff(Staff st)
    {
        staffs[staffCounter]=st;
        staffCounter++;
    }
    void addCourse(course c)
    {
        courses[courseCounter]=c;
        courseCounter++;
    }
    void addClassRoom(ClassRoom r)
    {
        rooms[roomCounter]=r;
        roomCounter++;
    }
    void printStudents()
    {
        for(int i=0; i<studentCounter; i++)
        {
            students[i].print();
            cout<<endl;
        }
    }
    void printTeachers()
    {
        for(int i=0; i<teacherCounter; i++)
        {
            teachers[i].print();
            cout<<endl;
        }
    }
    void printStaffs()
    {
        for(int i=0; i<staffCounter; i++)
        {
            staffs[i].print();
            cout<<endl;
        }
    }
    void printCourses()
    {
        for(int i=0; i<courseCounter; i++)
        {
            courses[i].print();
            cout<<endl;
        }
    }
    void printRooms()
    {
        for(int i=0; i<roomCounter; i++)
        {
            rooms[i].print();
            cout<<endl;
        }
    }

};

#endif // SCHOOL_H
