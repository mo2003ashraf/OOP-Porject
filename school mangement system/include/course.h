#ifndef COURSE_H
#define COURSE_H
#include<person.h>
#include<iostream>

class course:public person
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    course()
    {

    }
    course(string name,int age,string gender,string address,string phoneNumber,string email,int id,
           string courseCode,string courseName,string teacherName)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->teacherName=teacherName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setCourseName(string courseName)
    {
        this->courseName=courseName;
    }
    void setTeacherName(string teacherName)
    {
        this->teacherName=teacherName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getTeacherName()
    {
        return teacherName;
    }
    void inforamtion()
    {
        cout<<"Please Enter Name"<<endl;
        cin>>name;
        cout<<"Please Enter Age"<<endl;
        cin>>age;
        cout<<"Please Enter Gender"<<endl;
        cin>>gender;
        cout<<"Please Enter Address"<<endl;
        cin>>address;
        cout<<"Please Enter Phone Number"<<endl;
        cin>>phoneNumber;
        cout<<"Please Enter Email"<<endl;
        cin>>email;
        cout<<"Please Enter Id"<<endl;
        cin>>id;
        cout<<"Please Enter CourseCode"<<endl;
        cin>>courseCode;
        cout<<"Please Enter CourseName"<<endl;
        cin>>courseName;
        cout<<"Please Enter TeacherName"<<endl;
        cin>>teacherName;
    }
    void print()
    {
        person::print();
        cout<<"The CourseCode Is:"<<courseCode<<endl;
        cout<<"The CourseName Is:"<<courseName<<endl;
        cout<<"The TeacherName Is:"<<teacherName<<endl;
    }


};

#endif // COURSE_H
