#include <iostream>
#include <cmath>
#include<vector>
using namespace std;
class Solution {
public:
    int binarySearch(vector<int>& arr, int size, int x) {
        int low = 0;
        int high = size - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x)
                return mid;
            if (arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high + 1;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, nums.size(), target);
    }
};
/*
 //35. Search Insert Position
int main() {
   
    Solution sol;
    vector<int> arr = { 1,3,8,9 };
    cout << sol.searchInsert(arr,5) << endl;
    return 0;
}
*/