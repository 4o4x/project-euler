#include <iostream>
#include <cmath>

using namespace std;



int main(){
    
    int result = 0;
    
    int count;

    int temp;

    for(double n = 1 ; n<=1000 ;n++){

        count = 0;

        for(int i=1;i<n;i++){
            for(int j=i;j<n;j++){

                if( n == (2*i*j)/(2*i + 2*j -n)){
                    count++;
    
                }
                
            }
        }

        if(count>result){
            result = count;
            temp = n;
        }
    
    }
    
    cout  << "result: " << temp << endl;


}


