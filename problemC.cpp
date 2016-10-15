#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){

    int n,m,k;
    cin>>n>>m>>k;
    int tot=n*m;
    int row[tot],col[tot],ar[tot];
    int num =0;
    for(int i=0;i<tot;i++)
    {
        col[i]=i%m;
        ar[i]=i;
        row[i]=num;
        if(col[i]==m-1)
            num++;
    }

    char arr[tot];
    for(int i=0;i<tot;i++)
    {
        cin>>arr[i];

    }


    int cost;
    int best=12312435;
    bool flag=false;
    for(int i=0;i<tot;i++)
    {
        best=12312435;

        for(int j=0;j<=i;j++)
        {
            if(arr[i]==arr[j] & i!=j)
            {
                flag=true;
                int x=row[j];
                int y=col[j];
                int p=row[i];
                int q=col[i];

                cost=abs(x-p)+abs(y-q);

                if(cost<best)
                    best=cost;
            }
        }
        if(flag)
        {
            if(best>k)
                ar[i]=k;
            else
                ar[i]=best;
        }
        else
            ar[i]=k;
    }
    int sum =0;
    for(int i=0;i<tot;i++)
    {

       sum=sum+ar[i];
    }
    cout<<sum<<endl;


    }

}

