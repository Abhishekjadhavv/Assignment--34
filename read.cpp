// Write a C++ program to read a text file and count the number of characters in it.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int characters = 0;
    ifstream fin;
    fin.open("C:/file/file.txt");

    if (!fin)
    {
        cout << "The file is not open" << endl;
        return 0;
    }

    string str;
    while (!fin.eof())
    {
        getline(fin, str);
        cout << str<<endl;
    }

    for(int i = 0;str[i];i++){
        if(str[i]!=' ')
          characters +=1;
    }
  
    cout<<"Number of characters is "<<characters<<endl;
    fin.close();
    return 0;
}