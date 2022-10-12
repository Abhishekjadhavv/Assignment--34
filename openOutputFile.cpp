// Write a C++ program to open an output file 'a.txt' and append data to it.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string str;
    fout.open("C:/file/file.txt", ios::app);

    if (!fout)
    {
        cout << "The file is not open" << endl;
        return 0;
    }
    cout<<"Enter data"<<endl;
    getline(cin, str);
    fout <<" "<< str;

    fout.close();
    return 0;
}