// A file 'Employee.txt' contains empno and empname. Write a C++ program to add and
// read contents of this file.

#include <iostream>
#include <fstream>
using namespace std;
int ID;
class Employee
{
private:
    int empno;
    string empname;

public:
    void addData(string empname)
    {
        this->empno = ID+1;
        this->empname = empname;
        ofstream fout,fout1;
        fout.open("C:/file/Employee.txt", ios::app);
        fout1.open("C:/file/EmpId.txt",ios::app);

        if (!fout.is_open() && !fout1.is_open())
        {
            cout << "The file is not open" << endl;
        }
        else
        {
            ID +=1;
            fout << "\n"
                 <<ID;
            fout << "\n"
                 << empname;
            fout1<<"\n"<<ID;     
            cout << "Data successfully Added" << endl;
        }
        fout.close();
        fout1.close();
    }
};
void showAllEmployee()
{
    ifstream fin;
    string str;
    fin.open("C:/file/Employee.txt");
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            getline(fin, str);
            cout << str << endl;
        }
    }
    else
    {
        cout << "The file is not open" << endl;
    }
}

int main()
{
    ifstream fin;
    fin.open("C:/file/EmpId.txt");
    if (fin.is_open())
    {
       while(!fin.eof()){
         fin>>ID;
       }
    }

    Employee E1, E2,E3;
    E1.addData("Abhishek");
    E2.addData("Sagar");
    E3.addData("vicky");
    showAllEmployee();

    return 0;
}