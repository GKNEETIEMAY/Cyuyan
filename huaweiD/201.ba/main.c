#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 51

typedef struct
{
    int x, y;
    int steps;
    int candies;
} Node;

int grid[MAXN][MAXN];
int visited[MAXN][MAXN];
int N;

int bfs(int mom_x, int mom_y, int baby_x, int baby_y)
{
    int dx[] = {0, 1, 0, -1}; // 右、下、左、上
    int dy[] = {1, 0, -1, 0};
    Node start = {mom_x, mom_y, 0, 0};
    Node queue[MAXN * MAXN];
    int front = 0, rear = 0;
    int maxCandies = 0;

    memset(visited, 0, sizeof(visited));
    visited[mom_x][mom_y] = 1;
    queue[rear++] = start;

    while (front < rear)
    {
        Node current = queue[front++];

        if (current.x == baby_x && current.y == baby_y)
        {
            maxCandies = current.candies;
            break; // 找到宝宝位置，退出循环
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny] && grid[nx][ny] != -1)
            {
                visited[nx][ny] = 1;
                Node next = {nx, ny, current.steps + 1, current.candies + grid[nx][ny]};
                queue[rear++] = next;

                // 如果找到更短的路径到达宝宝位置，则更新最大糖果数
                if (nx == baby_x && ny == baby_y)
                {
                    maxCandies = next.candies;
                }
            }
        }
    }

    return maxCandies;
}

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }
    int mom_x, mom_y, baby_x, baby_y;
    // 找到妈妈和宝宝的位置
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (grid[i][j] == -3)
            {
                mom_x = i;
                mom_y = j;
            }
            else if (grid[i][j] == -2)
            {
                baby_x = i;
                baby_y = j;
            }
        }
    }

    int maxCandies = bfs(mom_x, mom_y, baby_x, baby_y);
    printf("%d\n", maxCandies);

    return 0;
}