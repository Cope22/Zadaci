#include<stdio.h>

int main ()

{

int i;
for (i=0;i<4;i++)

switch (i) {

case 1: putchar ('E'); break;
case 3: putchar ('I');
case 4: putchar ('V'); break;
case 6: putchar ('N'); break;
default: putchar ('T');

}

putchar ('A');


}

//i=0 ispisuje T, i=1 ispisuje E, i=2 ispisuje deafult T,i=3 ispisuje I i V, i=4 ne ispisuje nista jer je i<4, putchar A ispisuje A na kraju, krajnji rezultat: T E T I V A
//


