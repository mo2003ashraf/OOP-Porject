#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;
    int id;
public:
    person(string name,int age,string gender,string address,string phoneNumber,string email,int id)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
    }
    person()
    {
        name="No Name";
        age=-1;
        gender="No Gender";
        address="No Address";
        phoneNumber="No PhoneNumber";
        email="No Email";
        id==1;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    void setId(int id)
    {
        this->id=id;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;
    }
    int getId()
    {
        return id;
    }
    void print()
    {
        cout<<"The Name Is:"<<name<<endl;
        cout<<"The Age Is:"<<age<<endl;
        cout<<"The Gender Is:"<<gender<<endl;
        cout<<"The Address Is:"<<address<<endl;
        cout<<"The PhoneNumber Is:"<<phoneNumber<<endl;
        cout<<"The Email Is:"<<email<<endl;
        cout<<"The Id Is:"<<id<<endl;
    }
};



#endif // PERSON_H
