#include <iostream>
#include <cmath>

using namespace std;

bool checkPentegon(const double& x);

int formula(const int& x);

bool intCheck(const double& x);

int main(){
    
    double result = 99995749;

    for(int i=1;i<10000;i++){
        for(int j=i+1;j<10000+i;j++){

            if(checkPentegon( static_cast<double>(formula(i)+formula(j)) )){
                //cout << endl << "i:" << i << "  j:" << j << endl;
                
                if(checkPentegon( static_cast<double>(formula(j)-formula(i)) )){
                    
                    if(formula(j)-formula(i)<result)
                        result = formula(j)-formula(i);

                }

            }
        }
    }

    

    cout  << "result: " << static_cast<int>(result) << endl;

    

}


bool checkPentegon(const double& x){
    
    //cout << endl << x << "  " << sqrt(x);

    

    if( ((1+sqrt(1 + 24*x))/6) >=0 && intCheck( ((1+sqrt(1 + 24*x))/6) )){

        //cout << endl << x << "  first  " << ((1+sqrt(1*1 + 24*x))/6);

        return true;
    }

    else if( ((1-sqrt(1 + 24*x))/6) >=0 && intCheck( ((1-sqrt(1 + 24*x))/6) )){

        //cout << endl << x << "  second  " << ((1-sqrt(1 + 24*x))/6);

        return true;
    }

    else return false;

    return false;

}


bool intCheck(const double& x){

    //cout << endl << x;

    if((static_cast<int>(x))+0.00001 >= x && (static_cast<int>(x))-0.00001 <=x){
        
        return true;
    }

    else return false;
}


int formula(const int& x){
    return (x*(3*x-1))/2;
}