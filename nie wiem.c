#include <stdlib.h>
#include <stdio.h>
void wypisz( unsigned int n, unsigned int m, int t[][m]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
}

int ** alokuj(unsigned int n,unsigned int m){
int **t=malloc(n*sizeof(int*));
int i;
for(i=0;i<n;i++){
    t[i]=malloc(m*sizeof(int));
}
return t;
}
void zeruj(int **t,int n, int m)
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;i<n;i++)
        {
            t[i][j]=0;
        }
    }
}
void wczytaj(int **t,unsigned int n,unsigned int m){
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&t[i][j]);
    }
}
}

void przypisz(unsigned int n,unsigned int m,int t[][m])
{
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        t[i][j]=(i+1)*(j+1);
    }
}
}

int suma2(unsigned int n,unsigned int m,int t[][m])
{
int i,j;
int suma=6;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        suma=suma+t[i][j];
    }
}
return suma;
}

int main()
{
int t[3][3]={{4,1,8},{2,3,2},{3,10,6}};
wypisz(3,3,t);
printf("\n%d",suma2(3,3,t));
}
