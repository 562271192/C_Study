#include <stdio.h>
#include <stdlib.h>

void Show(char szMaze[][17], int nRow)
{
    int i = 0;
    for (i = 0; i < nRow; i++)
    {
        puts(szMaze[i]);
    }
}
void Maze(char szMazee[][17], int x, int y)
{
    system("cls");
    Show(szMazee, 7);
    system("pause");
    if (szMazee[x][y] == '$')
    {
      puts("过关!");
      system("pause");
      exit(0);
    }
    szMazee[x][y] = '4';
    if (szMazee[x+1][y] == '0' || szMazee[x+1][y] == '$')
    {
        Maze(szMazee, x + 1, y);
    }
    if (szMazee[x][y+1] == '0' || szMazee[x][y+1] == '$')
    {
        Maze(szMazee, x, y + 1);
    }
    if (szMazee[x - 1][y] == '0' || szMazee[x - 1][y] == '$')
    {
        Maze(szMazee, x - 1, y);
    }
    if (szMazee[x][y - 1] == '0' || szMazee[x][y - 1] == '$')
    {
        Maze(szMazee, x, y - 1);
    }
    szMazee[x][y] = '3';
    system("cls");
    Show(szMazee, 7);
    system("pause");
    return;
}

int main()
{
    char szMaze[][17] =
    {
        "1111111111111111",
        "10100000100001$1",
        "1000101010101101",
        "1010000010101101",
        "1000101010101101",
        "1000111000000001",
        "1111111111111111",
    };
    Maze(szMaze, 1, 1);
    return 0;
}