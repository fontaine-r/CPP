#include "LinearSearch.h"

int LinearSearch::search(vector<int> vect, int searched){
    totalSearch++;
    int i = 0;
    int size = vect.size();
    while (i<size){
        numberComparisons++;
        if(vect[i] == searched) return i;
        i++;
    }
    return -1;
}