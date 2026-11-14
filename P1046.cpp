#include<iostream>
using namespace std;
int num[15];
int Taotao_Hight,i,ans;
int main(){
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    scanf("%d",&Taotao_Hight);
    Taotao_Hight+=30;
    for(i=0;i<10;i++){
        if(num[i]<=Taotao_Hight){
            ans++;
        }
    }
    printf("%d",ans);
}