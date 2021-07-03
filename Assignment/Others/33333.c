#include <stdio.h>
#include <string.h>

int main()
{
    int i, j = 0, k = 0, m, len;
    char str1[20], str2[10][10], sum;

    printf("Sample Input :");
    gets(str1);

    for (i = 0;str1[i] != '\0'; i++)
    {
        if (str1[i] == ' ')
        {
            str2[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            str2[k][j]=str1[i];
            j++;
        }
    }
    str2[k][j] = '\0';


    for (i = 0;i <= k;i++)
    {
        len = strlen(str2[i]);
        for (j = 0, m = len - 1;j < m;j++,m--)
        {
            sum = str2[i][j];
            str2[i][j] = str2[i][m];
            str2[i][m] = sum;
        }
    }

    for (i = 0;i <= k;i++)
    {
        printf(" %s ", str2[i]);
    }
}
