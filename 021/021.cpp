#include <iostream>
#include <cmath>

using namespace std;


int sumOfDivisor(int x);



int main(){

    // unsigned int arr[10000];
    int temp;
    int result = 0;

   /*  for(int i=0; i<10000; i++){
        arr[i] = 2;
    } */    
    

    for(int i=3; i<10000; i++){
        temp = sumOfDivisor(i);

        if(i == sumOfDivisor(temp) && temp !=i && temp !=1)
            result += i;
    }  
    

    cout  << "result: " << result<< endl;
}


int sumOfDivisor(int x){
    
    int sum = 0;

    for(int i=1;i<x;i++){
        if(x%i == 0)
            sum +=i;
    }

    return sum;

}
