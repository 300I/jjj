#include<stdio.h> 
#include<bits/stdc++.h> 
#define llmax unsigned long long 
using namespace std; 
string str; 
int mark; 
int main(){ 
    getline(cin,str); 
    int len=str.length(); 
    if(str[0]!='A') 
    { 
        printf("WA\n"); 
        return 0; 
    } 
    else 
    { 
        for(int i=2;i<len-1;i++) 
        { 
            if(str[i]=='C') 
            { 
                mark++; 
            } 
        } 
        if(mark!=1) 
        { 
            printf("WA\n"); 
            return 0; 
        } 
        else 
        { 
            for(int i=0;i<len;i++) 
            { 
                if(str[i]<'a'&&str[i]!='A'&&str[i]!='C') 
                { 
                    printf("WA\n"); 
                    return 0; 
                } 
            } 
            printf("AC\n"); 
            return 0; 
        } 
    } 
}
