#include <bits/stdc++.h>
using namespace std;
#define N 4
void printsol(int sol[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			printf(" %d ", sol[i][j]);
		printf("\n");
	}
}
int isSafe(int x, int y, int maze[N][N])
{
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
    {
        return 1;
    }
    return 0;
}

int solve(int x, int y, int sol[N][N], int maze[N][N])
{
    int xnext, ynext;

    // base condition
    if (x == N - 1 && y == N - 1 && maze[x][y] == 1)
    {
        sol[x][y] = 1;
        return 1;
    }

    if (isSafe(x, y, maze) == 1)
    {
        if (sol[x][y] == 1)
            return 0;
        sol[x][y] = 1;

        if (solve(x + 1, y, sol, maze) == 1)
            return 1;

        if (solve(x, y+1, sol, maze) == 1)
           return 1 ;

        // backtrack 
        sol[x][y] =0 ; 
        return 0 ; 

    }
    return 0 ; 
}
int solveMaze(int maze[N][N])
{
    int x = 0, y = 0, sol[N][N];

    //intialise sol as all entries 0
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sol[i][j] = 0;
        }
    }

    if (solve(x, y, sol, maze) == 0)
    {
        printf("solution does  not exist");
    }
    else
    {
        printsol(sol);
    }
    return 1 ; 
}
int main()
{
    int maze[N][N] = {{1, 1, 0, 1},
                      {1, 1, 0, 1},
                      {1, 1, 0, 1},
                      {1, 1, 1, 1}};

    solveMaze(maze);
    return 0;
}