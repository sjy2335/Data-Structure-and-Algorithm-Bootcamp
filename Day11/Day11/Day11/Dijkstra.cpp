#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;

#define INF 10000000
#define N 5

int weight[N][N] = { {0, 10, 5, INF, INF},
                    {INF, 0, 2, 1, INF},
                    {INF, 3, 0, 9, 2},
                    {INF, INF, INF, 0, 4},
                    {7, INF, INF, 6, 0} };
bool visited[N] = { false };
int dist[N] = { 0 };
int min_node = 0;

// 방문하지 않은 노드들 중, 
// 최단 거리가 가장 짧은 노드 인덱스 반환
int get_smallest_node()
{
    int min = INF;
    int node = 0;
    for (int i = 0; i < N; i++) {
        // 구현
    }
    return node;
}

void dijkstra(int start)
{

}

int main(void)
{
    dijkstra(0);
    for (int i = 0; i < N; i++)
        printf("dist[%d]: %d\n", i, dist[i]);

    return 0;
}