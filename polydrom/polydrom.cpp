// polydrom.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

bool isPalindrome(const string& str) 
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int countPalindromes(const string& input) 
{
    int count = 0;
    vector<string> words;
    string word;
    istringstream stream(input);

    while (stream >> word)
    {
        words.push_back(word);
    }

    for (const string& word : words)
    {
        if (isPalindrome(word)) 
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string input;
    cout << "Enter the line: ";
    getline(cin, input);

    int palindromeCount = countPalindromes(input);

    cout << "Number of polidromes in line: " << palindromeCount << endl;

    return 0;
}
