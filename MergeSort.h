#ifndef MERGE_SORT
#define MERGE_SORT
#include <limits.h>
void merge(int tab[static 1], int start, int stop, int div)
{
    int len_L = div - start + 1;
    int len_R = stop - div;
    int L[len_L+1];
    int R[len_R+1];

    for(int i = 0; i < len_L; i++)
    {
        L[i] = tab[start+i];
    }
    for(int i = 0; i < len_R; i++)
    {
        R[i] = tab[div+i+1];
    }

    L[len_L] = INT_MAX;
    R[len_R] = INT_MAX;

    for(int i = start, j=0, k=0; i <= stop; i++)
    {
        if(L[j]<R[k])
        {
            tab[i] = L[j];
            j++;
        }
        else
        {
            tab[i] = R[k];
            k++;
        }
    }
}

void mergeSort(int tab[static 1], int start, int stop)
{
    if(start < stop)
    {
        int div = (stop + start)/2;
        mergeSort(tab, start, div);
        mergeSort(tab, div+1, stop);
        merge(tab, start, stop, div);
    }
    
}


#endif 