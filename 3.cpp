#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<string> q;
    q.push("1");q.push("2");q.push("5");q.push("6");q.push("8");q.push("9");
    string ans;
    for(int i=0;i<n;i++){
        string curr=q.front();
        q.pop();
        ans=curr;
        q.push(curr+"0");
        q.push(curr+"1");
        q.push(curr+"2");
        q.push(curr+"5");
        q.push(curr+"6");
        q.push(curr+"8");
        q.push(curr+"9");
    }
    cout<<ans<<endl;
}