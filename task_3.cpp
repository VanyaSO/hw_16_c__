#include <iostream>
using namespace std;

//Дано масив рядків. Записати їх у файл, розташувавши кожен елемент масиву на окремому рядку зі збереженням порядку.

int main()
{
    const int N = 4;
    const char* arrayStrings[N] = {"строка 1", "строка 2", "строка 3", "строка 4"};
    const char PATH[] = "../text_task3.txt";

    FILE* file;
    if ((file = fopen(PATH, "w")) != NULL)
    {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < strlen(arrayStrings[i]); ++j) {
                fputc(arrayStrings[i][j], file);
            }
            fputc('\n', file);
        }

        fclose(file);
    }

    return 0;
}