#include <stdio.h>
int funkcija (int a[], int b, int n)

{
int x=5, i;

for (i=0;i<n;i++)
x+=a[i]+b;
return x;
}

int main ()
{
int x[]={5,10,15,20}, y=3;
printf ("%d\n", funkcija(x,y,4));

}

// Objasnjenje: {5,10,15,20} b=3 n=4, i=o: x= 5+5+3=13, i=1  x=13+10+3=26, i=2  x=26+15+3=44, i=3  x=44+20+3=67, Rezultat= 67//

