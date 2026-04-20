#include<vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        while (n % 2 == 0) {
            n /= 2;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }
        return n == 1 ? true : false;
    }
};
int main() {

    Solution sol;
    vector<int> arr = { 1,8,3,8,3 };
    cout << sol.isUgly(15);
    return 0;
}