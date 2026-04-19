#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int m = 0;
        while (n > 0) {
            m = m * 10 + n % 10;
            n /= 10;
        }
        return m;
    }
    int mirrorDistance(int n) {
        int x = reverseNumber(n);
        return abs(x - n);
    }
};
/*
int main() {
    Solution sol;
    int n = 123;
    cout << sol.mirrorDistance(n) << endl;
    return 0;
}*/