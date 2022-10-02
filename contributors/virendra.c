#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int commonFactors(int a, int b) {
           int x=0,i;
    if(a>b){
        for(i=1;i<=a;i++){
            if(a%i==0&&b%i==0){
                x++;
            }
        }
    }else
        for(i=1;i<=b;i++){
            if(b%i==0&&a%i==0){
                x++;
            }
        }
        
   return x; }
};
int main(){
    Solution s;
    int a,b;
    cin>>a>>b;

    s.commonFactors(a,b);
    
}

//leetcode question
