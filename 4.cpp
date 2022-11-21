#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=256;
    int a[n][n];
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0) ans.push_back({i,j});
        }
    }
    
}