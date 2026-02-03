// 9. Unique words from file

#include <iostream>
#include <fstream>
#include <set>
#include <string>
    using namespace std;

int main()
{
    ifstream inFile("input.txt"); // Ensure input.txt exists
    ofstream outFile("unique.txt");
    set<string> words;
    string word;

    if (inFile.is_open())
    {
        while (inFile >> word)
        {
            words.insert(word);
        }
        for (auto w : words)
            outFile << w << endl;
        cout << "Unique words written to unique.txt";
    }
    else
        cout << "File not found.";
    return 0;
}