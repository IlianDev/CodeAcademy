#include<stdio.h>

int main()
{
    int *arr_ptr[3]; // декларира масив от 3 указателя

    int a[10] ={1,2,3,4,5,6,7,8,9,10};
    arr_ptr[0]=a;

    int b[5] ={10 ,20, 30, 40, 50};
    arr_ptr[1]=b;

    int c[3] ={18, 36, 54};
    arr_ptr[2]=c;

    printf("%d", arr_ptr[1][3]); //40
}
// Всеки един от масива от указатели си сочи към съответния масив -> arr_ptr[3] = {a,b,c}