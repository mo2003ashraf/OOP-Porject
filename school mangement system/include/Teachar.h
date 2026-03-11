#ifndef TEACHAR_H
#define TEACHAR_H
#include<person.h>
#include<iostream>

class Teacher:public person
{
private:
    string subject;
    float salary;
public:
    Teacher()
    {

    }
    Teacher(string name,int age,string gender,string address,string phoneNumber,string email,int id,
            string subject,float salary)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->subject=subject;
        this->salary=salary;
    }
    void setSubject(string subject)
    {
        this->subject=subject;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getSubject()
    {
        return subject;
    }
    float getSalary()
    {
        return salary;
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
        cout<<"Please Enter Subject"<<endl;
        cin>>subject;
        cout<<"Please Enter Salary"<<endl;
        cin>>salary;
    }
    void print()
    {
        person::print();
        cout<<"The Subject Is:"<<subject<<endl;
        cout<<"The Salary Is:"<<salary<<endl;
    }
};

#endif // TEACHAR_H
