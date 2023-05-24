#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

struct element *utworz()
{
    return NULL;
};

struct element *dodajpoczatek(struct element*Lista,int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
};

struct element *dodajkoniec(struct element*Lista,int a)
{
    struct element *wsk;
    if(Lista==NULL)
    {
        Lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=Lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
    wsk->next=malloc(sizeof(struct element));
    wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;


};

void wyczysc(struct element *Lista)
{
struct element *wsk=Lista;
while(Lista!=NULL)
    {
    Lista=Lista->next;
    free(wsk);
    wsk=Lista;
    }
}
int dlugosc(struct element *Lista)
{
    int dl=0;
    while(Lista!=NULL)
    {
        dl++;
        Lista=Lista->next;

    }
    return dl;
}
int suma(struct element *Lista)
{
    int sum;
    while(Lista!=NULL)
    {
        sum=sum+Lista->i;
        Lista=Lista->next;
    }
    return sum;
}

int mini(struct element *Lista)
{
    int min=Lista->i;
    while(Lista!=NULL)
    {
        if(min>Lista->i) min=Lista->i;
        Lista=Lista->next;
    }
    return min;
}


void wypisz(struct element *Lista)
{
    while(Lista!=NULL)
    {
        printf("%d\t",Lista->i);
        Lista=Lista->next;
    }
printf("\n");
}

struct element* dodajpo()
int main()
{
struct element * lista=utworz();
    lista=dodajkoniec(lista,2);
    lista=dodajkoniec(lista,15);
    lista=dodajkoniec(lista,26);
    lista=dodajkoniec(lista,-2);
    lista=dodajkoniec(lista,0);


wypisz(lista);
printf("%d\n",suma(lista));
printf("%d\n",mini(lista));
printf("%d\n",dlugosc(lista));
return 0;
}
