#include<stdio.h>
int main()
{
    int x =10
    int *p = &x; // в p e  записан адреса на x;

    y = *p + 1      --> y = x + 1;
    *p = *p + 10    --> x = x + 10;
    *p += 2         --> x+=2;
    ++*p            --> ++x;
    (*p)++          --> x ++ 

    //Последния ред за необходими скоби, защото унарните оператори се изчисляват от дясно на ляво
}


