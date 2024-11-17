#include <bits/stdc++.h>

using namespace std;

class Student

{

public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()

{

   Student rahim(23,12,4.55);
   Student *p = &rahim;
   return p;

}

int main()

{
    Student *ans = fun();
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;
    return 0;
}
