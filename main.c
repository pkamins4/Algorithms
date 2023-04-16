#include<stdlib.h>
#include<stdio.h>
#include"MergeSort.h"

int main()
{
    int tab[] = {1,4,15,16,2,3,7,8,9};
    merge(tab, 0,8,3);
    for(int i = 0; i<9 ;i++)
    {
        printf("%i ", tab[i]);
    }
    printf("\n");
}
