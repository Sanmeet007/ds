#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

#define N 4

void print_board(int board[N][N])
{
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%-2d", board[i][j]);
        printf("\n");
    }
}

bool is_valid()
{
    return false;
}

bool solver(int board[N][N], int column)
{
    board[0][column] = 1;
    for (int row = 0; row < N; row++)
        for (int col = 0; col < N; col++)
            if (is_valid(board, row, col))
                board[row][col] = 1;
    return true;
}

int main()
{
    int board[N][N] = {};
    if (solver(board, 1))
        print_board(board);
    else
        printf("Solution does not exists");
    return 0;
}