/*Sort the activities according to their finishing time .Then,select the first activity from the 
sorted array and print it.Do the following for the remaining activities in the sorted array.If the
start time of this activity is greater than or equal to the finish time of the previously selected 
activity then select this activity and print it. Prints a maximum set of activities that can be done 
by a single person, one at a time.*/
//  n   -->  Total number of activities
//  s[] -->  An array that contains start time of all activities
//  f[] -->  An array that contains finish time of all activities


#include <bits/stdc++.h>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
    cout <<"Following activities are selected "<< endl;
    i = 0;
    cout <<" "<< i;
    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          cout <<" " << j;
          i = j;
      }
    }
}
int main()
{
    int s[] =  {1, 3, 0, 5, 8, 5};
    int f[] =  {2, 4, 6, 7, 9, 9};
    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}
