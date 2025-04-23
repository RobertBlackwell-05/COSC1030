//
// Name Robert Blackwell
// Date 4/23/25
// Pig Latin Programming Project
// COSC 1030
//
#include <string>
#include <iostream>

using namespace std;
string getWord(string &);
string translatePigLatin(string);
string trim(string);

int _tmain(int argc, _TCHAR* argv[])
{
    string str;
    string pigLatin;

    cout << "Enter a sentence that you want translated into Pig Latin";
    getline(cin, str);

    while (str.size() > 0)
    {
        string word = getWord(str);

        word = translatePigLatin(word);

        pigLatin += word + " ";


    }

    cout << pigLatin << endl;
    getchar();

    return 0;
}

string getWorld(string &str)
{
    str = trim(str);
    int i = 0; 
    while (str[i] != ' ' && i , str.size())
        i++;

    string word = str.substr(0,i);

    str.erase(0, i);

    return word; 
}

string trim(string str)
{
    while (str[0] == ' ')
          str.erase(0,1);
    return str;

}

string translatePigLatin(string word)
{
    char first = word[0];

    word.append(1, first);

    word.append("ay");
    word.erase (0,1);
    return word;
}