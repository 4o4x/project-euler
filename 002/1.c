
#include <stdio.h>
#include <math.h>

int main(){
    int i,j,a,m,n,b,c,flag=0;

    for(i=2;i>=0;i++){
        m = i;
        for(j=1;j<i;j++){
         n = j;
         a = (m*m)-(n*n);
         b = 2*m*n;
         c = (m*m)+(n*n);
         if(a+b+c == 1000){
                flag = 1;
                break;
         }
        }
    if(flag ==1){
        printf("a= %d, b= %d c= %d, carp= %d",a,b,c,a*b*c);
        break;
    }


    }
}
