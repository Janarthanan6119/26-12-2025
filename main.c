#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
It's play time, and you've accidentally scattered all of your favourite building blocks all over your bedroom floor! Bummer.

Each block is a cube with side length equal to S. All of the blocks have landed at their own unique position on your bedroom floor. Given an N * M map of your floor denoting the position of each block, can you determine the tallest tower you can build if you gather all of the blocks up and play with them?
Input–
The first line of input contains two integers: N and M, representing the number of rows in the map and the number of columns in the map respectively.

The next line contains the integer S, which is the side length of each block.

Each of the next N lines contain M characters: either a . (dot) representing empty floor, or a o (lower case) representing a block.
Output
Output a single integer representing the height of the tallest tower you can make with all of the blocks.
Constraints
1 <= N, M <= 200
1 <= S <= 200
Example
Input
3 3
1
..o
...
.o.
Output
2

 
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

