#include<stdlib.h>
#include<stdio.h>
#include"MergeSort.h"

int main()
{
    int tab[9] = {1,4,15,16,2,3,7,8,9};
    for(int i = 0; i<9 ;i++)
    {
        printf("%i ", tab[i]);
    }
    printf("\n");
    mergeSort(tab, 0, 8);
    printf("\n");

    for(int i = 0; i<9 ;i++)
    {
        printf("%i ", tab[i]);
    }
    printf("\n");
}
