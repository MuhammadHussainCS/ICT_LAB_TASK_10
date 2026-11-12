#include<iostream>
using namespace std;

class Student {
    private:
        string name;
        int rollNumber;
        float marks;
    public:
        int semester;
    
    void getData() {
        cout << "Enter Name  : " << endl;
        cin >> name;
        cout << "Enter roll number : " << endl;
        cin >> rollNumber;
        cout << "Enter marks : " << endl;
        cin >> marks;
        cout << "Enter semester : " << endl;
        cin >> semester;
    }

    void displayData();
    void calculateGrade();

};
void Student::displayData() {
    cout << "NAME = " << name << endl;
    cout << "SEMESTER = " << semester << endl;
    cout << "ROLL Number = " << rollNumber << endl;
    cout << "MARKS = " << marks << endl;
}

void Student::calculateGrade() {
    cout << "Grade " << endl;
    if(marks >= 90)
        cout << "A+" << endl;
    else if(marks >= 86) 
        cout << "A" << endl;  
    else if(marks >= 78) 
        cout << "B+" << endl;  
    else if(marks >= 70) 
        cout << "B-" << endl;  
    else if(marks >= 66) 
        cout << "C+" << endl;  
    else if(marks >= 62) 
        cout << "C" << endl;  
    else if(marks >= 58) 
        cout << "C-" << endl;  
    else if(marks >= 54) 
        cout << "D+" << endl;  
    else if(marks >= 50) 
        cout << "D" << endl;  
    else 
        cout << "F" << endl;
}

int main() {
    Student s1;
        cout << "Enter details of Student 1" << endl;
        s1.getData();
    Student s2;
        cout << "Enter details of Student 2" << endl;
        s2.getData();

    cout << "====== Student Details ======" <<endl;
    cout << "*********Student 1 details************" << endl;
    s1.displayData();
    s1.calculateGrade();
    cout << "*********Student 2 details************" << endl;
    s2.displayData();
    s2.calculateGrade();
    
    return 0;
}