#include<stdio.h>
int main(){
int a;
for(a=1;a<=30;a=a+1){
    if(a%3==0){
    continue;
    }
    printf("%d",a);
}
return 0;
}
