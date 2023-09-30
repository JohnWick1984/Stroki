// Stroki.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{

    string input;
    cout << "Enter your line: ";
    getline(cin, input);

    istringstream stream(input);
    string word, longestWord;
    size_t maxLength = 0;

    while (stream >> word)
    {
        if (word.length() > maxLength)
        {
            maxLength = word.length();
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;
    cout << "Length of longest word: " << maxLength << endl;

    return 0;
}
