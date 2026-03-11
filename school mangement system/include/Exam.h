#ifndef EXAM_H
#define EXAM_H
#include<person.h>
#include<iostream>

class Exam:public person
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    Exam()
    {

    }
    Exam(string name,int age,string gender,string address,string phoneNumber,string email,int id,
         string examName,string courseCode,string examDate)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->examName=examName;
        this->courseCode=courseCode;
        this->examDate=examDate;
    }
    void setExamName(string examName)
    {
        this->examName=examName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setExamData(string examDate)
    {
        this->examDate=examDate;
    }
    string getExamName()
    {
        return examName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getExamData()
    {
        return examDate;
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
        cout<<"Please Enter Exam Name"<<endl;
        cin>>examName;
        cout<<"Please Enter CourseCode"<<endl;
        cin>>courseCode;
        cout<<"Please Enter Exam Data"<<endl;
        cin>>examDate;
    }
    void print()
    {
        person::print();
        cout<<"The ExamName Is:"<<examName<<endl;
        cout<<"The CourseCode Is:"<<courseCode<<endl;
        cout<<"The ExamData Is:"<<examDate<<endl;
    }

};

#endif // EXAM_H
