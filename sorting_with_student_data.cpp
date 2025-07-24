#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

bool cmp(Student l, Student r)
{
    if (l.marks != r.marks)
        return l.marks < r.marks;
    else
        return l.roll > r.roll; 
}

int main()
{
    int n;
    cin >> n;
    vector<Student> students;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student s(name, roll, marks);
        students.push_back(s);
    }

    sort(students.begin(), students.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    return 0;
}
