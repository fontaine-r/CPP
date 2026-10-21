#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

void countFrequencyBruteForce(const vector<int>& numbers){
    int size = numbers.size();
    set<int> checked;
    for (int i = 0 ; i < size ; i++){
        int counter = 0;
        for (int j = 0 ; j < size ; j++){
            if (numbers[i]==numbers[j]) counter +=1;
        };
        if (!checked.count(numbers[i])){
            cout << numbers[i] << " : " << counter << " times" << endl;
            checked.insert(numbers[i]);
        }
    }
}

map<int, int> countFrequencyOptimal(const vector<int>& numbers){
    map<int, int> dic;
    int size = numbers.size();
    for (int i = 0 ; i < size ; i++){
        dic[numbers[i]] += 1;
    }
    return dic;
}

int main(){
    vector<int> numbers = {1, 2, 3, 2, 4, 1, 5, 5, 6};

    //Test countFrequencyBruteForce
    cout << "Frequency (Brute Force) :" << endl;
    countFrequencyBruteForce(numbers);

    //Test countFrequencyOptimal
    cout << "\nFrequency (Optimal) :" << endl;
    map<int, int> frequencyMapOptimal = countFrequencyOptimal(numbers);
    for(const auto& entry : frequencyMapOptimal){
        cout << entry.first << " : " << entry.second << " times" << endl;
    }
}