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

void jaki(struct trojkat t)
{
  double max,x,y;
  if (t.a>t.b)
  {
      max=t.a;
      x=t.b;
      y=t.c;
  }
        else
        {
            max=t.b;
            x=t.a;
            y=t.c;
        }
  if (max<t.c)
  {
      max=t.c;
      x=t.a;
      y=t.b;
  }

  double z=x*x+y*y;
  max=max*max;
  if (z>max) printf("ostrokatnty");
  if (z<max) printf("rozwartokatny");
  if (z==max) printf("prostokatny");

}

void przepisz (struct trojkat t1, struct trojkat *t2)
{
    *t2=t1;
}
void wypisz(struct trojkat t)
{
    printf("%f\t%f\t%f\t\n",t.a,t.b,t.c);
}

struct punkt
{
    double a,b,c;
};

double odleglosc(struct punkt p1,struct punkt p2)
{
    double x=(p1.a-p2.a)*(p1.a-p2.a);
    double y=(p1.b-p2.b)*(p1.b-p2.b);
    double z=(p1.c-p2.c)*(p1.c-p2.c);
    return sqrt(x+y+z);
}

double minimum(struct punkt tab[],int n)
{
   double pom,min;
   int i,j;
   min=odleglosc(tab[0],tab[1]);
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
        pom=odleglosc(tab[i],tab[j]);
       }
    if(pom<min)  min=pom;
   }
   return min;
}

struct zespolone
{
    double a,b;
};

void wyswietl(struct zespolone z)
{
    printf("%f+%fi\n",z.a,z.b);
}

struct zespolone dodaj(struct zespolone z1, struct zespolone z2)
{
    struct zespolone suma;
    suma.a=z1.a+z1.a;
    suma.b=z1.b+z1.b;
    return suma;
};
struct zespolone iloczyn(struct zespolone z1, struct zespolone z2)
{
    struct zespolone iloczyn;
    iloczyn.a=z1.a*z2.a-z1.b*z2.b;
    iloczyn.b=z1.a*z2.b+z1.b*z2.a;
    return iloczyn;
}
//zrob iloraz
struct zespolone sprze(struct zespolone z1)
{
  struct zespolone sp;
    sp.a=z1.a;
    sp.b=-z1.b;
  return sp;
}
void modul(struct zespolone z1)
{
    double x=sqrt((z1.a*z1.a)+(z1.b*z1.b));
    printf("%f",x);
}

union superint
{
    int i;
    unsigned int u;
};
struct wieleint
{
    int i;
    unsigned int u;
};
int main()
{

struct trojkat t1;
t1.a=3;
t1.b=5;
t1.c=4;
struct trojkat t2;
t2.a=1;
t2.b=1;
t2.c=1;
struct trojkat *wsk2=&t2;
struct punkt p1;
p1.a=1;
p1.b=7;
p1.c=2;
struct punkt p2;
p2.a=4;
p2.b=9;
p2.c=0;
struct punkt p3;
p3.a=2;
p3.b=5;
p3.c=8;
//struct punkt tab[3]={p1,p2,p3};
struct punkt tab[3];
tab[1]=p1;
tab[2]=p2;
tab[3]=p3;
printf("obwod: %f\n",obwod(t1));
printf("pole: %f\n",pole(t1));
czy_mozna(t1);
printf("\n");
jaki(t1);
printf("\n");
printf("%f\n",odleglosc(p1,p2));
printf("%f\n",minimum(tab,3));
printf("\n");
struct zespolone z1;
z1.a=3;
z1.b=4;
struct zespolone z2;
z2.a=2;
z2.b=1;
wyswietl(z1);
wyswietl(z2);
wyswietl(iloczyn(z1,z2));
printf("\n");
modul(z1);
struct wieleint s;
s.i=1;
s.u=1;
union superint ss;
ss.i=1;
ss.u=1;
printf("%d\n",sizeof(s));
printf("%d\n",sizeof(ss));


return 0;

}
