#ifndef STAFF_H
#define STAFF_H
#include<person.h>
#include<iostream>

class Staff:public person
{
private:
    string role;
    float salary;
public:
    Staff()
    {

    }
    Staff(string name,int age,string gender,string address,string phoneNumber,string email,int id,
          string role,float salary)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->role=role;
        this->salary=salary;
    }
    void setRole(string role)
    {
        this->role=role;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getRole()
    {
        return role;
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
        cout<<"Please Enter Role"<<endl;
        cin>>role;
        cout<<"Please Enter Salary"<<endl;
        cin>>salary;
    }
    void print()
    {
        person::print();
        cout<<"The Role Is:"<<role<<endl;
        cout<<"The Salary Is:"<<salary<<endl;
    }
};

#endif // STAFF_H
