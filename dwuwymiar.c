#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdbool.h>
#include <wchar.h>

int** alokuj(unsigned int n, unsigned int m) {
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++) {
        t[i]=malloc(m*sizeof(int));
    }
    return t;
}

int(* alokuj2(unsigned int n, unsigned int m))[]
{
    return malloc(n*sizeof(int[m]));
}

void wypisz(int **t,unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
                printf("%d\t",t[i][j]);
        }
    printf("\n");
    }
}
void wypisz(int **t,unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
                printf("%d\t",t[i][j]);
        }
    printf("\n");
    }
}
void wypisz2(unsigned int n, unsigned int m, int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
                printf("%d\t",t[i][j]);
        }
    printf("\n");
    }
}
void wczytaj(int **t,unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
                scanf("%d",&t[i][j]);
        }
    }
}
void wczytaj2(unsigned int n, unsigned int m,int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
                scanf("%d",&t[i][j]);
        }
    }
}
int main()
{
int **t=alokuj(3,3);
//wczytaj(t,3,3);
//printf("\n");
//wypisz(t,3,3);
int t2[4][4]={{2,1,1,5},{2,1,3,7},{0,4,2,0},{2,1,0,2}};
wypisz2(4,4,t2);

}
