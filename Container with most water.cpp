/*we will use the concept of two pointers. Keep two index, first = 0 and last = n-1 and a value 
max_area that stores the maximum area.Run a loop until first is less than the last.Update the
max_area with maximum of max_area and min(array[first] , array[last])*(last-first) if the value at 
array[first] is greater the array[last] then update last as last – 1 else update first as first + 1.
Print the maximum area.*/

//Time complexity -O(n);

#include<iostream>
using namespace std;

int maxArea(int A[], int len)
{
    int l = 0;
    int r = len -1;
    int area = 0;

    while (l < r)
    {

        area = max(area, min(A[l],
                        A[r]) * (r - l));

            if (A[l] < A[r])
                l += 1;

            else
                r -= 1;
    }
    return area;
}


int main()
{
    int a[] = {5, 8, 4, 7};
    int b[] = {3, 1, 2, 4, 5};

    int len1 = sizeof(a) / sizeof(a[0]);
    cout << maxArea(a, len1);

    int len2 = sizeof(b) / sizeof(b[0]);
    cout << endl << maxArea(b, len2);
}

