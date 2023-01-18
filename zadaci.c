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

//Rezultat: TETIVA//
