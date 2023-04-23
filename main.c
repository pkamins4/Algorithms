#include<stdlib.h>
#include<stdio.h>
#include"MergeSort.h"

int main()
{
    int tab[11] = {1,6,4,15,4,16,2,3,7,8,44};
    for(int i = 0; i<11 ;i++)
    {
        printf("%i ", tab[i]);
    }
    printf("\n");
    mergeSort(tab, 0, 10);
    printf("\n");

    for(int i = 0; i<11 ;i++)
    {
        printf("%i ", tab[i]);
    }
    printf("\n");
}