#include <stdio.h>

int main(){
    long int i,num,maxstep=0,count,temp;

    long int arr[1000000];

    for(i=0;i<1000000;i++)
        arr[i] = 0;
    arr[2]=1;

    
    

    for(i=2;i<=1000000;i++){
        num = i;
        count = 0;
        while(1){
            
            if(num<1000000 && arr[num] !=0 ){
                arr[i] = arr[num] + count;
                if(arr[i]>maxstep){
                    maxstep = arr[i];
                    temp = i;
                    }
                break;
                
            }
            
            else if(num%2 == 0)
                num = num/2;
                
            else
                num = 3*num+1;
            count++;
            
        }
        
    }

    printf("%d",temp);
}

