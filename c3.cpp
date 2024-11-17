#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

main()
{
    
    Student Rahim(101, 1, 3.5);
    Student Karim(102, 2, 3.8);

    cout << "Rahim " << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;
    cout << "Karim " << Karim.roll << " " << Karim.cls << " " << Karim.gpa << endl;

    return 0;
}
