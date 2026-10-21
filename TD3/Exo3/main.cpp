#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(const string& input){
    string reversed = input;
    reverse(reversed.begin(), reversed.end());
    return input == reversed;
}

int main(){
    cout << boolalpha;

    cout << "Is 'racecar' a palindrome ? "
        << isPalindrome("racecar") << endl;

    cout << "Is 'hello' a palindrome ? "
        << isPalindrome("hello") << endl;
    
    return 0;
}