#include <iostream>
using namespace std;

//Завдання 1
//Дано текстовий файл. Підрахувати кількість слів, що починаються з символу, який задає користувач.

bool isChar(char c)
{
    return (c == ' ' || c == '\n');
}

int main()
{
    int counter = 0;
    const char PATH[] = "../text.txt";
    char currentChar, previousChar = ' ';
    char userChar;
    cout << "Enter char: " << endl;
    cin >> userChar;

    FILE* file;
    if ((file = fopen(PATH, "r")) != NULL)
    {
        while(!feof(file))
        {
            currentChar = fgetc(file);
            if ((!isChar(currentChar)) && isChar(previousChar) && currentChar == userChar)
            {
                counter++;
            }
            previousChar = currentChar;
        }

        fclose(file);
    }

    cout << counter;

    return 0;
}