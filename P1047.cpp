#include<iostream>
using namespace std;
int l,m,i,ans,a,b;
bool road[10240];
int main(){
    scanf("%d%d",&l,&m);
    for(i=0;i<m;i++){
        scanf("%d%d",&a,&b);
        for(int j=a;j<=b;j++){
            road[j]=true;
        }
    }
    for(i=0;i<=l;i++){
        if(road[i]==false){
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}