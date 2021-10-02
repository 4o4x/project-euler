#include <stdio.h>
#include <stdlib.h>

int read_txt(int (*arr)[20]){
    
    int i ,j;

    FILE *fp;

    fp = fopen("input.txt","r");

    for(i=0;i<20;i++){
        for(j=0;j<20;j++)
            fscanf(fp," %d",&arr[i][j]);
    }


}


int main(){
    
    int arr[20][20];

    read_txt(arr);

    int i ,j;

    /*for(i=0;i<20;i++){
        for(j=0;j<20;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }*/

    



}