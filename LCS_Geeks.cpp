#include <iostream>

int n,m,i,j;
int a[110],b[110];
int L[110][110];
int out[110];

int max(int x,int y)
{
    return x>y?x:y;
}

int printallLcs(int len,int x,int y)
{
    if(x==0 || y==0)
    {
        for(i=0;i<L[n][m];i++)
            std::cout<<out[i]<<" ";
        std::cout<<"\n";
        return 0;
    }    
    if(a[x-1]==b[y-1])
    {
        out[len-1]=a[x-1];
        printallLcs(len-1,x-1,y-1);
    }   
    else
    if(L[x-1][y]>L[x][y-1])
        printallLcs(len,x-1,y);
    else    
    if(L[x-1][y]<L[x][y-1])    
        printallLcs(len,x,y-1);
    else    
    if(L[x-1][y]==L[x][y-1])
    {
        printallLcs(len,x-1,y);
        printallLcs(len,x,y-1);
    }
    return 0;
}

int main() 
{
    std::cout<<"Size of each array: \n";
    std::cin>>n>>m;
    
    std::cout<<"Array 1 values: \n";
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];    
    }
    std::cout<<"Array 2 values: \n";
    for(i=0;i<m;i++)
    {
        std::cin>>b[i];    
    }

    //Constructing DP Table
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                L[i][j]=0;
            else
            if(a[i-1]==b[j-1])
                L[i][j]=L[i-1][j-1]+1;
            else
                L[i][j]=max(L[i-1][j],L[i][j-1]);
        }
    }
    std::cout<<"\nLength of LCS: "<<L[n][m]<<"\n"<<"Possible values: \n";
    printallLcs(L[n][m],n,m);
    return 0;
}
