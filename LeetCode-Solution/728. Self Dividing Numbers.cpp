#include<vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    bool selfDividing(int n) {
        int temp = n;
        while (temp > 0) {
            int x = temp % 10;
            if (x == 0 || n % x != 0)return false;
            temp /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        for (int i = left; i <= right; i++) {
            if (selfDividing(i))result.push_back(i);
        }
        return result;
    }
};
int main() {
    Solution sol;
    vector<int> arr = sol.selfDividingNumbers(1, 22);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}