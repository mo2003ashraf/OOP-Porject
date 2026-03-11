#ifndef STUDENT_H
#define STUDENT_H
#include<person.h>
#include<iostream>
using namespace std;

class Student:public person
{
private:
    string gradeLevel;
    float gpa;
public:
    Student()
    {

    }
    Student(string name,int age,string gender,string address,string phoneNumber,string email,int id,
            string gradeLevel,float gpa)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->gradeLevel=gradeLevel;
        this->gpa=gpa;
    }
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGpa(float gpa)
    {
        this->gpa=gpa;
    }
    string getGradelevel()
    {
        return gradeLevel;
    }
    float getGpa()
    {
        return gpa;
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
        cout<<"Please Enter GradeLevel"<<endl;
        cin>>gradeLevel;
        cout<<"Please Enter Gpa"<<endl;
        cin>>gpa;
    }
    void print()
    {
       person::print();
        cout<<"The GradeLevel Is:"<<gradeLevel<<endl;
        cout<<"The Gpa Is:"<<gpa<<endl;
    }
};

#endif // STUDENT_H
