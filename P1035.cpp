#include<iostream>
using namespace std;
double sum;
int num,i;
int main(){
    scanf("%d",&num);
    while(sum<=num){
        i++;
        sum=sum+1.0/i;
    }
    printf("%d",i);
}