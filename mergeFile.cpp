// Write a C++ program to merge the two files.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin1, fin2;
    ofstream fout;
    string str;

    fin1.open("C:/file/file.txt");
    fin2.open("C:/file/newFile.txt");

    fout.open("C:/file/mergeFile.txt",ios::app);

    if ((!fin1.is_open() && !fin2.is_open()) && !fout.is_open())
    {
        cout << "The file is not open" << endl;
        return 0;
    }

    while(!fin1.eof()){
        getline(fin1,str);
        fout<<str <<" ";
    }

    while(!fin2.eof()){
        getline(fin2,str);
        fout<<str<<" ";
    }

    cout<<"Data successfully merge"<<endl;
    fin1.close();
    fin2.close();
    fout.close();
    return 0;
}