#include <iostream>
#include <cmath>

using namespace std;


int numberOfDigit(int x);
int fact(int x);


int main(){
    
    int result = 0;
    int tempResult;
    int tempI;



    for(int i=1;i<10000000;i++){
        
        tempI = i;

        tempResult = 0;

        for(int j=1;j<pow(10,numberOfDigit(i));j*=10){
            tempI = tempI/j;
            tempResult += fact(tempI % 10);
        }

        if(tempResult == i){
            cout << endl << "result" << i;
            result +=i;
        }

    }

    
    

    cout  << "result: " << result<< endl;
}


int fact(int x){
    
    int result = 1;
    
    for(int i = x; i>=1 ; i--){
        result *=i;
    }

    return result;
}


int numberOfDigit(int x){

    int n=0;

    while(x>=10){
        x = x/10;
        n++;
    }

    return n+1;

}
