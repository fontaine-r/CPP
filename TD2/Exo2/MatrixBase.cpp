#include "MatrixBase.h"

using namespace std;

template<typename T>
MatrixBase<T>::MatrixBase():rows(0), cols(0){};

template<typename T>
MatrixBase<T>::MatrixBase(int _rows, int _cols)
:rows(_rows), cols(_cols){}

template<typename T>
MatrixBase<T>::MatrixBase(T value, int _rows, int _cols)
:rows(_rows), cols(_cols), data(_rows, vector<T>(_cols, value)){}

template<typename T>
void MatrixBase<T>::addElement(T value, int r, int c){
    data[r][c]=value;
};

template<typename T>
T MatrixBase<T>::getElement(int r, int c){
    return data[r][c];
};

template<typename T>
int MatrixBase<T>::getRows(){
    return rows;
}