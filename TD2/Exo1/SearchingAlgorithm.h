#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <vector>
#include <ostream>
using namespace std;

class SearchingAlgorithm{
    public:
        SearchingAlgorithm();
        virtual int search(vector<int>, int) = 0; 
        void displaySearchResults(ostream&, int, int);

    protected:
        int numberComparisons;
        static int totalComparisons;
        static int totalSearch;
        static double averageComparisons;
};

#endif

