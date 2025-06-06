#include <iostream>
#include <string>
using namespace std;
class UniMember {
    string name;
    string gender;
};
 class Student : public UniMember {
    private:
    int rollNumber;
    public:
    void enterDetails(){
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter student gender: ";
        getline(cin, gender);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore(); // To consume the newline character
    }
    void displayDetails() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
void displayDetails() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
void displayDetails() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
void displayDetails() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Faculty : public UniMember {
private:
    int employeeId;

public:
    void enterDetails() {
        cout << "\nEnter faculty name: ";
        getline(cin, name);
        cout << "Enter faculty gender: ";
        getline(cin, gender);
        cout << "Enter employee ID: ";
        cin >> employeeId;
        cin.ignore(); // To consume the newline character
    }

    void displayDetails() {
        cout << "\nFaculty Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Employee ID: " << employeeId << endl;
    }
};

int main() {
    Student student;
    Faculty faculty;

    cout << "Enter Student Details:" << endl;
    student.enterDetails();
    
    cout << "\nEnter Faculty Details:" << endl;
    faculty.enterDetails();

    student.displayDetails();
    faculty.displayDetails();

    return 0;
}



 