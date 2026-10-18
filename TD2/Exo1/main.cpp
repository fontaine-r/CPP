#include "SearchingAlgorithm.h"
#include "LinearSearch.h"
#include "BinarySearch.h"
#include"JumpSearch.h"

#include <iostream>
using namespace std;

int main(){
    vector<int> numbers = {2, 5, 8, 12, 16, 23, 38, 56, 72};

    LinearSearch linear;
    JumpSearch jump;
    BinarySearch binary;

    int l_result = linear.search(numbers, 23);

    cout << l_result;
    cout << "\n";

    int j_result = jump.search(numbers, 16);

    cout << j_result;
    cout << "\n";

    int b_result = binary.search(numbers, 38);

    cout << b_result;
    cout << "\n";

    return 0;
}