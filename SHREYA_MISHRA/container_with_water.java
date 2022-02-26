class Solution {
public int maxArea(int[] height) {
int i=0;
int j = height.length-1;
int ans = 0;
while(i<j){
ans = Math.max(ans,(j-i)*(Math.min(height[i],height[j])));
if(height[i]<=height[j]){
i++;
}
else if(height[j]<height[i]){
j--;
}
}
return ans;
}
}
