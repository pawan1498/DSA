#include <bits/stdc++.h>
using namespace std;
#define N 4
void printsol(int sol[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", sol[i][j]);
        printf("\n");
    }
}
bool isSafe(int board[N][N], int row, int col)
{
    int i, j;

    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    /* Check upper diagonal on left side */
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

int solve(int sol[N][N], int col)
{

    // base condition
    if (col >= N)
    {

        return 1;
    }
    for (int k = 0; k < N; k++)
    {

        if (isSafe(sol, k, col))
        {
            sol[k][col] = 1;
            if (solve(sol, col + 1))
                return 1;

            sol[k][col] = 0;
        }
    }

    return 0;
}
int solveMaze(int sol[N][N])
{

    if (solve(sol, 0) == 0)
    {
        printf("solution does  not exist");
        return 0;
    }
    else
    {
        printsol(sol);
    }
    return 1;
}
int main()
{
    int sol[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            sol[i][j] = 0;
    }
    solveMaze(sol);
    return 0;
}