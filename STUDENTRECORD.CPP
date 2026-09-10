#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Add student
void addStudent()
{
    ofstream file("students.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    int roll;
    string name, course;

    cout << "\nEnter Roll Number: ";
    cin >> roll;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Course: ";
    getline(cin, course);

    file << roll << "|" << name << "|" << course << endl;

    file.close();

    cout << "\nStudent added successfully!\n";
}

// Display students
void displayStudents()
{
    ifstream file("students.txt");

    if (!file)
    {
        cout << "\nNo records found!\n";
        return;
    }

    string line;

    cout << "\n========== STUDENT RECORDS ==========\n";

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

// Search student
void searchStudent()
{
    ifstream file("students.txt");

    if (!file)
    {
        cout << "\nFile not found!\n";
        return;
    }

    int searchRoll;
    int roll;
    string name, course;
    bool found = false;

    cout << "\nEnter Roll Number to search: ";
    cin >> searchRoll;

    while (file >> roll)
    {
        file.ignore();
        getline(file, name, '|');
        getline(file, course);

        if (roll == searchRoll)
        {
            cout << "\nStudent Found!\n";
            cout << "Roll Number: " << roll << endl;
            cout << "Name: " << name << endl;
            cout << "Course: " << course << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nStudent not found!\n";
    }

    file.close();
}

// Delete all records
void deleteRecords()
{
    ofstream file("students.txt", ios::trunc);
    file.close();

    cout << "\nAll records deleted successfully!\n";
}

// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n====================================";
        cout << "\n     STUDENT RECORD MANAGEMENT";
        cout << "\n====================================";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Delete All Records";
        cout << "\n5. Exit";
        cout << "\n====================================";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            deleteRecords();
            break;

        case 5:
            cout << "\nThank you for using the system!\n";
            break;

        default:
            cout << "\nInvalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}