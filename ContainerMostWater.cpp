//C++ program for Container with Most Water 
#include<iostream>
using namespace std;
int mostwater(int A[], int len)
{
   int r=len-1;           //index of right wall of container
   int l=0;              //index of left wall of container
   int area=0,maxarea=0;
   int minwall,lwall,rwall;
   // int area = 0;
 
   while (l < r)
   {
      // Calculating the max area
      lwall = A[l];          //height of left wall of container
      rwall =A[r];          //height of right wall of container
      minwall=lwall<=rwall?lwall:rwall;    //min. of two walls is height of water
      area=minwall*(r-l);                 // area is min wall* widht(r-l)
      maxarea=area>=maxarea?area:maxarea;
      if (l < r)
         l += 1;
      else
         r -= 1;
   }
   return maxarea;
}

int main()
{
   int walls[] = {4,3,2,1,4};
   int num = sizeof(walls) / sizeof(walls[0]);
   cout << endl <<"Container with Most water has area:"<< mostwater(walls,num);
}

/*OUTPUT
Container with Most water has area:16
*/
