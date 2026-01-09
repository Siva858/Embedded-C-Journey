#include <stdio.h>
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    
    if(num%2==0){
        printf("yes it is even number");
    }else{
        printf("nope it is odd number");
    }
    return 0;
}
