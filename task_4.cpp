#include <iostream>
using namespace std;

//Дано текстовий файл. Підрахувати кількість символів у ньому.

int main()
{
    int counter = 0;
    const char PATH[] = "../text.txt";
    char ch;

    FILE* file;
    if ((file = fopen(PATH, "r")) != NULL)
    {

        while(!feof(file))
        {
            ch = fgetc(file);
            if (ispunct(ch))
                counter++;
        }

        fclose(file);
    }

    cout << counter;

    return 0;
}