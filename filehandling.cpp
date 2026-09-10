#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// write to file
void addstudent()
{
    ofstream file("student .txt", ios::app);
    if (!file)
    {
        cout << "error file handling" << endl;
        return;
    }
    int rollno;
    string name;
    string cource;
    cout << "enter the rollno===" << endl;
    cin >> rollno;
    cin.ignore();
    cout << "enter the name====" << endl;
    cin >> name;
    getline(cin, name);
    cout << "enter the cource===" << endl;
    getline(cin, cource);
    file << rollno << "|" << name << "|" << cource << endl;
    file.close();
    cout << "student added successfulluy" << endl;
    void displaystudent()
    {
        ifstream file("student.text");
        if (!file)
        {
            cout << "no record found:" << endl;
            return;
        }
        string line;
        cout << "+++++++++====student record++++++++++========" << endl;
        while (getline(file, line))
        {
            cout << line << end;
            file.close();
        }
        void serachstudent()
        {
            ifstream file("studenr.txt");
            if (!file)
            {
                cout << "file not found" << endl;
                return;
            }
            int searchrollno;
            int rollno;
            string name, courcename;

            bool found = false;
            cout << "enter the rollno to search" << endl;
            cin >> searchrollno;

            while (file >> rollno)
            {
                file.ignore();
                getline(file, name, '|')
            }
        }
    }
}
