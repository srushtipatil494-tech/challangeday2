#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    int arr_values[] = {3, 1, 3, 4, 2};
    vector<int> arr(arr_values, arr_values + sizeof(arr_values)/sizeof(int)); // ✅ works in old GCC

    cout << "Duplicate number: " << findDuplicate(arr) << endl;
    return 0;
}
