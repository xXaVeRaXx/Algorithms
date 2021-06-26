//Word, phrase, or sequence that reads the same backwards as forwards

#include <iostream>
#include <cstring>

using namespace std;

int palindrome(char *word, int indexBeggin, int indexEnd) {

    if (indexBeggin >= indexEnd) return 1;

    if (word[indexBeggin] == word[indexEnd]) {
        return palindrome(word, indexBeggin + 1, indexEnd - 1);
    } else return 0;

}

int main()
{
    char word[20];
    int indexBeggin = 0, indexEnd = 0, result = 0;

    cin >> word;

	indexEnd = strlen(word) - 1;

	result = palindrome(word, indexBeggin, indexEnd);

    cout << result;

    return 0;
}

