#include<iostream>
using namespace std;
int ans,n,i,a,b;
int main(){
    n=8;
    for(i=0;i<7;i++){
        scanf("%d%d",&a,&b);
        if(a+b>n){
            n=a+b;
            ans=i+1;
        }
    }
    printf("%d",ans);
    return 0;
}
