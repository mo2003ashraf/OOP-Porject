#ifndef CLASSROOM_H
#define CLASSROOM_H
#include<person.h>
#include<iostream>

class ClassRoom:public person
{
private:
    int roomNumber;
    int capacity;
public:
    ClassRoom()
    {

    }
    ClassRoom(string name,int age,string gender,string address,string phoneNumber,string email,int id,
              int roomNumber, int capacity)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->roomNumber=roomNumber;
        this->capacity=capacity;
    }
    void setRoomNumber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }
    void setCapacity(int capacity)
    {
        this->capacity=capacity;
    }
    int getRoomNumber()
    {
        return roomNumber;
    }
    int getCapacity()
    {
        return capacity;
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
        cout<<"Please Enter Room Number"<<endl;
        cin>>roomNumber;
        cout<<"Please Enter CapaCity"<<endl;
        cin>>capacity;
    }
    void print()
    {
        person::print();
        cout<<"The RoomNumber Is:"<<roomNumber<<endl;
        cout<<"The Capacity Is:"<<capacity<<endl;
    }

};

#endif // CLASSROOM_H
