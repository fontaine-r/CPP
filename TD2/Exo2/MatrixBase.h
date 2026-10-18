#ifndef MATRIX_BASE
#define MATRIX_BASE

#include <vector>
using namespace std;

template<typename T>

class MatrixBase{
    private:
        vector<vector<T>> data;
        size_t rows, cols;
    
    public:
        MatrixBase();
        MatrixBase(int, int);
        MatrixBase(T, int, int);
        void addElement(T, int, int);
        T getElement(int, int);
        int getRows();
        int getCols();
};

#endif