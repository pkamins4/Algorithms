#include<stdlib.h>
#include<stdio.h>
#include"InsertionSort.h"

int main()
{
    int table[]={5,4,3,2,1};
    size_t len = 5;
    printf("before: \t%i, %i, %i, %i, %i\n",table[0],table[1],table[2],table[3],table[4]);
    insertionSort(table,len);
    printf("after: \t%i, %i, %i, %i, %i\n",table[0],table[1],table[2],table[3],table[4]);
}
