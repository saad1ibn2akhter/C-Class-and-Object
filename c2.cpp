#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    
    int roll;
    int cls;
    double gpa;
};

main()
{
    Student Rahim;

    Rahim.roll =10;
    Rahim.cls =5;
    Rahim.gpa = 5.0;

    Student Karim;

    Karim.roll =1;
    Karim.cls =7;
    Karim.gpa = 5.0;

    cout<<"Rahim "<<Rahim.roll<<" "<<Rahim.cls<<" "<<Rahim.gpa<<endl;
    cout<<"Karim "<<Karim.roll<<" "<<Karim.cls<<" "<<Karim.gpa<<endl;

    return 0;
}
