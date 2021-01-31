//aggressive cows

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool check(vector <int> &v,int value,int n){
   // start from 2nd index as we place 1 cow at index 0, so we have to decrease the number of cows by 1 also
   // 'cow' is representing the index where 1st cow is placed & we are in search of the next cow index w.r.t to 
   // current cow index
   int cow = 0, i = 1;
   n--;
   while(i < v.size() && n > 0){
      if(v[i] - v[cow] >= value){
         // place 2nd cow at this index
         cow = i;
         n--;
      }
      i++;
   }
   if(n == 0)
      return true;
   else
      return false;
}
int distance(vector <int> &v,int low, int high,int n){
   int result = -1;
   while(low <= high){
      int mid = (low+high)/2;
      if(check(v,mid,n)){
         result = mid;
         low = mid+1;
      }
      else
         high = mid-1;
   }
   return result;
}
int main(){
   int n; cin >> n;
   vector <int> v = {2,1,8,4,9};
   sort(v.begin(),v.end());

   //we know minimum distance is 1st value and highest is (last value - 'low')
   int low = v[0]; // 1
   int high = v[v.size()-1] - low; // (9-1 => 8)
   int ans = distance(v,low,high,n); // search b/w [1.....8]
   cout << ans;
   return 0;
}