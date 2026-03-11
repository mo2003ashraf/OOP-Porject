#include <iostream>
#include <student.h>
#include <course.h>
#include <school.h>
using namespace std;

int main()
{
    int n;
    school sh;
    do
    {
        cout<<"press 0 To Exit"<<endl;
        cout<<"press 1 To Add Student"<<endl;
        cout<<"press 2 To Add Teacher"<<endl;
        cout<<"press 3 To Add Staff"<<endl;
        cout<<"press 4 To Add Course"<<endl;
        cout<<"press 5 To Add ClassRoom"<<endl;
        cout<<"press 6 To print Student"<<endl;
        cout<<"press 7 To print Teacher"<<endl;
        cout<<"press 8 To print Staff"<<endl;
        cout<<"press 9 To print Course"<<endl;
        cout<<"press 10 To print ClassRoom"<<endl;
        cin>>n;
        switch(n)
        {
        case 0:
            return 0;
        case 1:
        {
            Student s;
            s.inforamtion();
            sh.addStudent(s);
            break;
        }
        case 2:
        {
            Teacher t;
            t.inforamtion();
            sh.addTeachar(t);
            break;
        }
        case 3:
        {
            Staff st;
            st.inforamtion();
            sh.addStaff(st);
            break;
        }
        case 4:
        {
            course c;
            c.inforamtion();
            sh.addCourse(c);
            break;
        }
        case 5:
        {
            ClassRoom cl;
            cl.inforamtion();
            sh.addClassRoom(cl);
            break;
        }

        case 6:
            sh.printStudents();
            break;
        case 7:
            sh.printTeachers();
            break;
        case 8:
            sh.printStaffs();
            break;
        case 9:
            sh.printCourses();
            break;

        }

    }
    while(n!=0);

}





