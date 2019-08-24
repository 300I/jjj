#include<stdio.h>
int n,st,ed,p=0;
int step[210],lift[210];
bool pd=true;
int main()
{
    scanf("%d %d %d",&n,&st,&ed);
    for(int i=1;i<=n;i++)
    {
        step[i]=-1;
        scanf("%d",&lift[i]);
    }
    step[st]=0;
    while(step[ed]==-1&&pd)
    {
        pd=false;
        for(int i=1;i<=n;i++)
            if(step[i]==p)
            {
                int j=i+lift[i];
                if(j<=n && step[j]==-1)
                {
                    step[j]=p+1;
                    pd=true;
                }
                j=i-lift[i];
                if(j>0&&step[j]==-1)
                {
                    step[j]=p+1;
                    pd=true;
                }
            }
        p++;
    }
    printf("%d",step[ed]);
    return 0;
}
