#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct trojkat
{
    double a,b,c;
};
double obwod(struct trojkat t)
{
    return t.a+t.b+t.c;
}
double pole(struct trojkat t)
{
    double p=(t.a+t.b+t.c)/2;
    return sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));
}

void czy_mozna(struct trojkat t)
{
    if(t.a+t.b>t.c&&t.a+t.c>t.b&&t.c+t.b>t.a)
        printf("mozna zbudowac trojakt");
        else printf("nie mozna zbudowac trojakta");
}

int main()
{
struct trojkat t1;
t1.a=8;
t1.b=19;
t1.c=12;
printf("obwod: %f\n",obwod(t1));
printf("pole: %f\n",pole(t1));
czy_mozna(t1);
return 0;
}
