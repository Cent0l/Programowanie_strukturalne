#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdbool.h>

void def(unsigned int n, int * tab)
{
tab[0]=2,tab[1]=1,tab[2]=3,tab[3]=7;
}
void wypisz(unsigned int n, int * tab)
{
    for (int i=0;i<n;i++)
        printf("%d\t",tab[i]);
    printf("\n");
}

void wyczysc(char *napis)
{
    napis[0]=0;
}
int dlugosc(char *napis)
{
    int i;
    for(i=0;napis[i]!=0;i++)
    {
    }
    return i;
}

int dlugoscbezspacji(char *napis)
{
    int i;
    int temp=0;
    for(i=0;napis[i]!=0;i++)
    {
    if (napis[i]==32) temp++;
    }
    return i-temp;
}

char* usunspacje(char* napis)
{

}

int porownaj (char* a, char* b)
{
    if(dlugosc(a)!=dlugosc(b)) return 0;
    for(int i=0;(a[i]!=0&&b[i]!=0);i++)
    {
    if(a[i]!=b[i]) return 0;
    }
return 1;
}

int alfabetycznie( char*a, char*b)
{
    for(int i=0;(a[i]!=0&&b[i]!=0);i++)
    {
    if(a[i]!=b[i])
        {
            if (a[i]>b[i]) return 0;
                return 1;
        }
    }
    if(dlugosc(a)>dlugosc(b))
        return 0;
    else return 1;

}
void przepisz(char*a,char*b)
{
    for(int i=0;a[i]!=0;i++)
    {
    b[i]=a[i];
    }
    b[dlugosc(a)]=0;
}
void przepiszn(char*a,char*b,int n)
{
    for(int i=0;i<n;i++)
    {
    b[i]=a[i];
    }
    b[n]=0;
}
void sklej(char*a,char*b,char*c)
{
    int x=dlugosc(a);
    int y=dlugosc(b);
    for(int i=0;i<=x;i++)
    {
    c[i]=a[i];
    }
    for(int i=0;i<=y;i++)
    {
    c[i+x]=b[i];
    }
c[x+y]=0;
}
void zamiana(char*a)
{int i;
    for(i=0;a[i]!=0;i++)
    {
        if (a[i]>=97&&a[i]<=122)
        {
            a[i]=a[i]-32;
        }//97-122
    }
a[i]=0;
}
char* usun( char* a, int m, int n)
{
  char wynik[100];
  int i;
  for(i=n;i<m;i++)
  {
    wynik[i]=a[i];
  }
wynik[i]=0;
}

int main()
{
printf("%d\n",sizeof(wchar_t));
printf("%d\n",'a');///wywolanie numeru w kodzie ascii
printf("%c\n",97);///znaczka pod dana ascii
for (int i=0;i<=15;i++) //377
{
  printf("%d: %c\t\t",i,i);
}
char  *napis="sam";
char  *napisa="sama";
char a[100]="brzeczy";
char b[100]="szczykiewicz";
char c[40]="";
char duze[100]="Duze";
printf("\n");
printf(napis);
//wyczysc(napis);
//printf(napis);
//free(napis);
printf("\n%d",dlugoscbezspacji(napis));
printf("\n%d",dlugosc(napis));
printf("\n%d",porownaj(napis,napisa));
printf("\n%d",alfabetycznie(napis,napisa));
printf("\n");
printf(a);
printf("\t");
printf(b);
//przepisz(a,b);
//przepiszn(a,b,4);
printf("\n");
printf(a);
printf("\t");
printf(b);
sklej(a,b,c);
printf("\n");
printf(c);
printf("\n");
printf(duze);
zamiana(duze);
printf("\n");
printf(duze);
printf("\n");
printf(usun(a,8,3));






}


