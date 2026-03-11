#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <PhoneNumber.h>
using namespace std;

class contact
{
private:
    int id;
    string name;
    string gender;
    string city;
    string note;
    PhoneNumber phones[4];
    int x;
public:
    contact()
    {

    }
    contact(int id,string name,string gender,string city,string note)
    {
        this->id=id;
        this->name=name;
        this->gender=gender;
        this->city=city;
        this->note=note;

    }
    void setId(int id)
    {
        this->id=id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setCity(string city)
    {
        this->city=city;
    }
    void setNote(string note)
    {
        this->note=note;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getGender()
    {
        return gender;
    }
    string getCity()
    {
        return city;
    }
    string getNote()
    {
        return note;
    }
    void information()
    {
        cout<<"Please Enter Your ID:"<<endl;
        cin>>id;
        cout<<"Please Enter Your Name:"<<endl;
        cin>>name;
        cout<<"Please Enter Your Gender:"<<endl;
        cin>>gender;
        cout<<"Please Enter Your City:"<<endl;
        cin>>city;
        cout<<"Please Enter Your Note:"<<endl;
        cin>>note;
        cout<<"Please Enter Number Of phones From(1 - 4) "<<endl;
        cin>>x;
        for(int i=0;i<=x;i++)
        {
          phones[i].information();
        }
    }
    void print()
    {
        cout<<"The Id Is :"<<id<<endl;
        cout<<"The Name Is :"<<name<<endl;
        cout<<"The Gender Is :"<<gender<<endl;
        cout<<"The City Is :"<<city<<endl;
        cout<<"The Note Is :"<<note<<endl;
        for(int i=0;i<=x;i++)
        {
          phones[i].print();
        }
    }



};

#endif // CONTACT_H
