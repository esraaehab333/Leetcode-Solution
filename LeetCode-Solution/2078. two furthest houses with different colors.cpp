#include<vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    // 1 2 1 1 1 1
    int maxDistance(vector<int>& colors) {
        int j = colors.size() - 1;
        int i = 0;
        int result = 0;
        int result2 = 0;
        while (i != j) {
            if (colors[i] != colors[j]) {
                result = abs(i - j);
                break;
            }
            j--;
        }
        i = 0;
        j = colors.size() - 1;
        while (i != j) {
            if (colors[j] != colors[i]) {
                result2 = abs(i - j);
                break;
            }
            i++;
        }
        return max(result2, result);
    }
};
