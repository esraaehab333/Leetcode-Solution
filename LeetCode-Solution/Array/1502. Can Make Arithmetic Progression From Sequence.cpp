#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        // -1 , 1 , 3 , 5 
        int compare = arr[1] - arr[0]; // 1 --1 = 2 
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i + 1] - arr[i] != compare) {
                return false;
            }
        }
        return true;
    }
};