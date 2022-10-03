#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  int sumOfAll(int l, int r){
        // code here
        int arr[r+1];
        for(int i=0;i<r+1;i++){
            arr[i]=0;
        }
        arr[1]=1;
        
        //we will use sieve method for every i from 2 to r
        //  we will traverse from 2 to i
        //       if i%j==0  also j is prime (i.e arr[j]  will be j)
        //           then add j to arr[i]
        //  c bool variable tells if the number is prime or not
        //   if it is prime arrsign it the value of itself eg 3-->3  7-->7
          
        for(int i=2;i<=r;i++){
            
            bool c=false;
            for(int j=2;j<=i/2;j++){
                if(i%j==0&&arr[j]==j){
                    arr[i]+=j;
                    c=true;
                }
            }
            if(!c)
            arr[i]=i;
        
        }
        int sum=0;
        for(int i=l;i<=r;i++){
            sum+=arr[i];
        }
        return sum;
    }
};
int main()
{
  int t;
  cin>>t;
  while(t--) {
    int l,r;
    cin>>l>>r;
    Solution ob;
    cout<<ob.sumOfAll(l,r)<<endl;
}
  return 0;
}
