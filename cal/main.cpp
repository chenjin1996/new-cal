#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<cctype>
#include"scan.h"
#include"print.h"
using namespace std;

             
int main()
{
    
	string s;
    cin>>s;
   int i,a=0;                     
    for(i=1;i<=s.size();i++)
    {
        if(isdigit(s[i]))
        {
            a=a+1;
        }
    }
    if(a>10)
    {
        cout<<"ERROR"<<endl;
        return 0;                  
    }
    else  if(a<=10)                          
    {
        Scan scan;                      
        Print print;                    
        queue<string> b= scan.ToStr(s);        
        print.P(b);                               
        return 0;
    }
}

