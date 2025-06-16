#include <iostream>
#include <cmath>

int main(){
    double z = 2.17;
    double x = exp(sqrt(z+1))*sin(z)*cos(2.6*z);
    double y;
    
    if (x<=-1){
        y = atan(x+4);
        std::cout<<"y="<<y<<std::endl;
    }
    else if (x>1){
        y = x+4;
        std::cout<<"y="<<y<<std::endl;
    }
    else{
        y=1;
        std::cout<<"y="<<y<<std::endl;
    }
   
    return 0;
        
}
