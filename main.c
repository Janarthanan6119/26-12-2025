#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N;
    int M;
    scanf("%d%d", &N, &M);
    int S;
    int count=0;
    scanf("%d", &S); fgetc(stdin);
    for (int i = 0; i < N; i++) {
        char row[201] = "";
        scanf("%[^\n]", row); fgetc(stdin);
        for(int i=0;i<strlen(row);i++){
            if(row[i]=='o')
             count++;
        }
    }
    printf("%d",count*S);
    return 0;
}
