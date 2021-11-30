/*we will use the approach of greedy algorithm.calculate the ratio value/weight for each item and 
sort the item on basis of this ratio.Then take the item with the highest ratio and add them until we
can't add the next item as a whole and at the end add the next item as much as we can.
->Time complexity - O(n)*/

#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) 
{ 
return (a > b) ? a : b; 
}


int knapSack(int W, int wt[], int val[], int n)
{

    if (n == 0 || W == 0)

        return 0;


    if (wt[n - 1] > W)

        return knapSack(W, wt, val, n - 1);


    else

        return max(

            val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}

int main()
{

    int val[] = { 50, 100, 110 };
    int wt[] = { 15, 30, 45 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
    return 0;
}
