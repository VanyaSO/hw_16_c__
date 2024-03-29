#include <iostream>
using namespace std;

//Дано текстовий файл. Переписати в інший файл усі його рядки із заміною в них символу 0 на символ 1 і навпаки.

int main()
{
    const char PATH[] = "../text.txt";
    const char NEWPATH[] = "../text_task2.txt";
    char currentChar;

    FILE* file;
    FILE* newFile;
    if ((file = fopen(PATH, "r")) != NULL)
    {
        if ((newFile = fopen(NEWPATH, "w")) != NULL)
        {
            while(!feof(file))
            {
                currentChar = fgetc(file);
                if (currentChar == '0')
                    currentChar = '1';
                else if (currentChar == '1')
                    currentChar = '0';

                fputc(currentChar, newFile);
            }
            fclose(newFile);
        }
        fclose(file);
    }

    return 0;
}