// Write a C++ program to create a file and print “File created successfully” and throw
// an error if file is not created.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("C:/file/file.txt");
    if (fout)
    {
        fout<<"I'm Abhisek Bhagaji jadhav";
        cout << "File created successfully" << endl;
    }
    else
    {
        cout << "File is not create successfully" << endl;
    }
    fout.close();
    return 0;
}