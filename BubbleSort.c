#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void bubbleSort(int tab[static 1], size_t size);
void swap(int *a, int *b);

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
    bubbleSort(tab, 10);
    for(int i=0; i<10; i++)
    {
        printf("%i, ", tab[i]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int tab[static 1], size_t size)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j<(size-i-1); j++)
        {
            if(tab[j] > tab[j+1])
                swap(&tab[j], &tab[j+1]);            
        }
    }

}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}