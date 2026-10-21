#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSumBruteForce(const vector<int>& nums, int target){
    int size = nums.size();
    for (int i = 0 ; i < size ; i++){
        for (int j = 0 ; j < size ; j++){
            if (i == j) continue;
            if (nums[i] + nums [j] == target){
                return vector<int> {i, j};
            }
        }
    }
    return vector<int> {-1, -1};
}

vector<int> twoSumOptimal(const vector<int>& nums, int target){
    int size = nums.size();
    unordered_map<int, int> m;
    for (int i = 0 ; i < size ; i++){
        int current = nums [i];
        int complement = target-current;
        if (m.count(complement) == 1){
           return vector<int> {m[complement], i}; 
        }
        else {
            m[current] = i;
        }
    }
    return vector<int> {-1, -1};
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> indicesBruteForce = twoSumBruteForce(nums, target);
    cout << "Brute Force Solution : ["
        << indicesBruteForce[0]
        << ", "
        << indicesBruteForce[1]
        << "]"
        << endl;
    
    vector<int> indicesOptimal = twoSumOptimal(nums, target);
    cout << "Optimal Solution : ["
        << indicesOptimal[0]
        << ", "
        << indicesOptimal[1]
        << "]"
        << endl;
    
    return 0;
}