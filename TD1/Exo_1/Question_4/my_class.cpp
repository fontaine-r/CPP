#include "my_class.h"

my_class::my_class(){
    s="salutations";
}

my_class::my_class(string st){
    s=st;
}

void my_class::print_my_element(){
    cout << s+"\n";
}