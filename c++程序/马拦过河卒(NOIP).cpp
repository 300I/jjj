#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
const int fx[]={0,-2,-1,1,2,2,1,-1,-2};
const int fy[]={0,1,2,2,1,-1,-2,-2,-1};

int bx,by,mx,my;
long long ans;
long long f[30][30];
bool s[30][30];
int main(){
    scanf("%d%d%d%d",&bx,&by,&mx,&my);
    ++bx; ++by; ++mx; ++my;
    f[1][1]=1;
    s[mx][my]=1;
    for(int i=1;i<=8;i++)
        s[ mx + fx[i] ][ my + fy[i] ]=1;
    for(int i=1;i<=bx;i++){
        for(int j=1;j<=by;j++){
            if(s[i][j])continue;
            f[i][j]=max( f[i][j] , f[i-1][j] + f[i][j-1] ); 
        }
    }
    printf("%lld\n",f[bx][by]);
    return 0;
} 
