#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int graph[5][5];
int visited[5];
int n;
void DFS(int);
void main()
{
int i, j, start;
printf("Enter the number of vertices: ");
scanf("%d", &n);
printf("Enter the adjacency matrix:\n");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
scanf("%d", &graph[i][j]);

94

}
}
for(i = 0; i < n; i++)
{
visited[i] = 0;
}
printf("Enter the starting vertex: ");
scanf("%d", &start);
printf("\nDFS Traversal:\n");
DFS(start);
for(i = 0; i < n; i++)
{
if(visited[i] == 0)
{
DFS(i);
}
}
printf("\n");
getch();
}
void DFS(int vertex)
{
int i;
visited[vertex] = 1;
printf("%d ", vertex);
for(i = 0; i < n; i++)
{
if(graph[vertex][i] == 1 && visited[i] == 0)
{
DFS(i);
}
}
}


OUTPUT

Enter the number of vertices: 5
Enter the adjacency matrix:
0
0
1
0
1
0
0
0
1
0
1
0
0
1
1
0
1
1
0
0
1

96

0
1
0
0
Enter the starting vertex: 3

DFS Traversal:
3 1 2 0 4
