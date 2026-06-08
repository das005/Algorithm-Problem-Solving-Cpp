#include <iostream>

#include <vector>

using namespace std;

int insert_position(vector<int> nums, int target) {

    int n = nums.size();

    int start = 0;

    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (target == nums[mid])

        {

            return mid;
        }

        if (target < nums[mid])

        {

            end = mid - 1;
        }

        else

        {

            start = mid + 1;
        }
    }

    return start;
}

int main()
{
    vector<int> nums = {1, 3, 5, 6};

    int target = 6;

    cout << insert_position(nums, target);


    return 0;
}
