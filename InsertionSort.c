#include<stdlib.h>
#include <stdio.h>
#include <time.h>

void insertionSort(int* table, size_t size);

int main()
{
    srand(time(NULL));
    int tab[10];
    for(int i=0; i<10; i++)
    {
        tab[i] = (rand()%100);
    }

    for(int i=0; i<10; i++)
    {
        printf("%i, ", tab[i]);
    }
    printf("\n");
    insertionSort(tab, 10);
    for(int i=0; i<10; i++)
    {
        printf("%i, ", tab[i]);
    }
    printf("\n");
    return 0;

}

void insertionSort(int* table, size_t size)
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
}