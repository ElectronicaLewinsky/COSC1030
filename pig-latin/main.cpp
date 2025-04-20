//
// Alice Black
// 20APR2025
// Pig Latin Programming Project
// COSC 1030
//
#include <iostream>
#include <string>

using namespace std;

// Functions header
void pigLatin();
string plWord(string); 

int main ()

// Display program title
{
        char again = '1';
        cout << "     Pig Latin Generator     " << endl;
        cout << "-----------------------------\n" << endl;
// Prompt user for input 
        while (again=='1')
        {
            pigLatin();
            cout << "\n\nType 1 to do another one: "<< endl;
            cin >> again;
            cin.ignore(90,'\n');
        }
    return 0;
}

// Function header and definitions
   void pigLatin()
{
        string entry= " ", PLatin= " ";
        string entSent= " ";

// Translates the word and adds to phrase
        cout <<" Please enter a sentence below! \n" << "English: " << endl;
        getline(cin, entry);
        long i  = entry.find (' ');
        while ( i < entry.length()-1)
        {
            entSent = entry.substr(0, i);

            entry = entry.substr(i + 1);

            PLatin += plWord(entSent)+ " "; 
            i = entry.find(' '); 
        }
        PLatin+=plWord(entry);
        cout << "\n";
        cout << "Pig Latin: " <<PLatin;
}

// Rewrite in in pig latin and display result
string plWord (string r)
{
    string ans= " ", prefix= " ";
    for (int j=0; j < r.length(); j++)
    {
        ans = r.substr(prefix.length());
        ans+= prefix + "ay";
}
    return ans;
}
