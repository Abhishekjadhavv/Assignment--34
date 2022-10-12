// Write a program to copy the contents of one text file to another while changing the
// case of every alphabet.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    string str;

    fin.open("C:/file/file.txt", ios::in);
    fout.open("C:/file/newFile.txt", ios::out | ios::app);

    if (!fin.is_open() && !fout.is_open())
    {
        cout << "The file is not open" << endl;
        return 0;
    }

    while (!fin.eof())
    {
        getline(fin, str);
        for (int i = 0; str[i]; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
                fout << str[i];
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
                fout << str[i];
            }
            else if (str[i] == ' ')
            {
                fout << " ";
            }
        }
    }

    cout<<"Data copy successfully"<<endl;
    fin.close();
    fout.close();
    return 0;
}