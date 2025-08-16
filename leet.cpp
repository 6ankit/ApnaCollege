#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;  //Dont take input other than the combination of 9 and 6
    string s="";
    s+=to_string(num);
    int maxi=num;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='6')
      {
        s[i]='9';
        int temp=stoi(s);
        maxi=max(maxi,temp);
        s[i]='6';
      }
    }
    s="";
    s+=to_string(num);
    int maxi2=num;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='9')
      {
        s[i]='6';
        int temp=stoi(s);
        maxi=max(maxi,temp);
        s[i]='9';
      }
    }
    cout<<max(maxi,maxi2);
}