#include "BinarySearch.h"

int BinarySearch::search(vector<int> vect, int searched){
    int n = vect.size();
    int low = 0;
    int high = n-1;
    int mid;

    while (low <= high){
        mid= floor((low+high)/2);
        if (vect[mid] == searched) return mid;
        else if (vect[mid] < searched) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}