// Write a C++ program that counts the total number of characters, words and lines in
// the file.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int countsWorld, countsChar, countLines, i;
    countsWorld = countsChar = countLines = 0;
    string str;
    ifstream fin;

    fin.open("C:/file/file.txt");

    if (!fin.is_open())
    {
        cout << "The file is not open" << endl;
        return 0;
    }

    while (!fin.eof())
    {
        getline(fin, str);
        for (i = 0; str[i]; i++)
        {
            if (str[i] != ' ')
                countsChar += 1;
            else
                countsWorld += 1;
        }
        if (str[i - 1] != ' ')
            countsWorld += 1;
        countLines += 1;
    }

    cout << "Number of characters is " << countsChar << endl;
    cout << "Number of worlds is " << countsWorld << endl;
    cout << "Number of lines is " << countLines << endl;
    fin.close();
    return 0;
}