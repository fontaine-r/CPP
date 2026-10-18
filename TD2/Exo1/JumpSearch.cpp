#include "JumpSearch.h"

int JumpSearch::search(vector<int> vect, int searched){
    int n = vect.size();
    int gap = floor(sqrt(n));
    int m = gap;

    int prev = 0;

    while (vect[min(m,n)-1] < searched){
        prev = m;
        m += gap;
        if(prev >= n) return -1;
    }
    for (int i = prev; i<=min(m,n); i++){
        if(vect[i] == searched) return i;
    }
    return -1;
}