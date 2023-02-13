#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED
#include <new>
#include <iostream>
#include <time.h>
using namespace std;
/*==================================================================================*/
/*Function declarations*/
/*==================================================================================*/
template <class nT> int BubbleSort2 (nT* tab, int length);
template <class nT> nT* RandomTable(int length, nT data);
template <class nT> void ViewTable(int length, nT* data);
template <class nT> void SwapTable(nT& poprzedni, nT& nastepny, nT* dane);
/*==================================================================================*/
/*Function descriptions*/
/*==================================================================================*/
template <class nT> int BubbleSort2 (nT* tab, int length)
{
    int counter = 0 , ch = 0, p = 0;
    {
        do
        {
            ch = 0;
            for (int i = 0; i<length-1-p;i++)
            {
                counter++;
                if (tab[i]>tab[i+1])
                {
                    SwapTable(tab[i], tab[i+1], tab);
                    ch = 1;
                }
            } p++;
        }   while (ch > 0);
    }
    return counter;
}

template <class nT> void SwapTable (nT& poprzedni, nT& nastepny, nT* dane)
{
    nT tmpWartosc = nastepny;
    nastepny = poprzedni;
    poprzedni = tmpWartosc;
}

template <class nT> void ViewTable (int length, nT* data)
{
    for (int i =0; i < length; i++ )
    {
        cout << "T[" << i << "]= " << *(data+i) << endl;
    }
}

template <class nT> nT RandomTable(int length, nT* data)
{
    nT* tab = new nT [length];
        for (int i = 0; i < length; i++)
        {
            *(tab+i)= rand();
            *(data+i) = *(tab + i);
        }
        return *data;
}

#endif // BUBBLESORT_H_INCLUDED
