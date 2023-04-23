#ifndef INSERTION_SORT
#define INSERTION_SORT

#include<stdlib.h>

int insertionSort(int* table, size_t size)
{
    int key;
    for(int i=1; i<size; i++)
    {
        key = table[i];
        int j = i-1;
        while( key<table[j] && (j>=0))
        {
            table[j+1] = table[j];
            j--;
        }
        table[j+1] = key;
    }
 
    return 0;


}
#endif