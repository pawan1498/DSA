#include <bits/stdc++.h>
using namespace std;
#define n 8

int isSafe(int x, int y, int sol[n][n])
{
    return (x >= 0 && x <= n && y >= 0 && y <= n && sol[x][y] == -1);
}
void printsol(int sol[n][n])

{
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
            cout << " " << setw(2) << sol[x][y] << " ";
        cout << endl;
    }
}
int kt(int x, int y, int movei, int sol[n][n], int x_move[8], int y_move[8])
{
    int x_next, y_next;
    if (movei == n * n)
    {
        return 1;
    }

    for (int k = 0; k < 8; k++)
    {
        x_next = x + x_move[k];
        y_next = y + y_move[k];

        if (isSafe(x_next, y_next, sol))
        {
            sol[x_next][y_next] = movei;
            if (kt(x_next, y_next, movei + 1, sol, x_move, y_move) == 1)
            {
                return 1;
            }
            else
                sol[x_next][y_next] = -1;
        }
    }
    return 0;
}

int solvekt()
{
    int sol[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sol[i][j] = -1;
        }
    }

    int x_move[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int y_move[8] = {1, 2, 2, -1, 2, -2, -2, -1};

    sol[0][0] = 0;

    if (kt(0, 0, 1, sol, x_move, y_move) == 0)
    {
        cout << "solution does not exist";
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
    solvekt();
}