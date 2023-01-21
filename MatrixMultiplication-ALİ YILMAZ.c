#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int result;
    int counter = 0;
    int total = 0;
    int rowCounter = 0;

    int m1[10][10] = {{17, 11, 17, 1, 14, 17, 16, 0, 0, 0}, {19, 20, 3, 17, 4, 14, 16, 0, 0, 0}, {3, 20, 9, 19, 15, 7, 4, 0, 0, 0}, {19, 4, 19, 14, 1, 20, 10, 0, 0, 0}, {13, 20, 16, 16, 6, 1, 9, 0, 0, 0}, {2, 20, 20, 15, 1, 9, 13, 0, 0, 0}, {6, 10, 14, 8, 2, 8, 15, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    int m2[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};

    int i, j, x, y;

    for (x = 0; x < 7; x++)
    {
        for (y = 0; y < 7; y++)
        {
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    result = m1[i + x][j + y] * m2[i][j];
                    total += result;
                    counter = counter + 1;
                    if (counter == 16)
                    {
                        printf("%d ", total);
                        printf(" ");
                        rowCounter = rowCounter + 1;
                        if (rowCounter == 7)
                        {
                            printf("\n");
                            rowCounter = 0;
                        }
                        total = 0;
                        counter = 0;
                    }
                }
            }
        }
    }

    return 0;
}
