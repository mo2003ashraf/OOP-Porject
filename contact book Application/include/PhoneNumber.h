#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
using namespace std;
class PhoneNumber
{

       private:
        string phone;
        string type;
    public:
        pohaneNumber()
        {

        }
        pohanNumber(string phone,string type)
        {
            this->phone=phone;
            this->type=type;
        }
        void setPhone(string phone)
        {
            this->phone=phone;
        }
        void setType(string type)
        {
            this->type=type;
        }
        string getPhone()
        {
            return phone;
        }
        string getType()
        {
            return type;
        }
        void information()
        {
            cout<<"Please Enter Phone Number "<<endl;
            cin>>phone;
            cout<<"Please Enter Phone Type"<<endl;
            cin>>type;
        }
        void print()
        {
            cout<<"The Phone Number Is :"<<phone<<endl;
            cout<<"The Phone Type Is :"<<type<<endl;
        }
};

#endif // PHONENUMBER_H
