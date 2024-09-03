#include <iostream>

using namespace std;//for names and objects

int gcd(int a, int b) {//my function
    if (b == 0)//the condition
        return a;
    else
        return gcd(b, a % b);
}

int reduce(int num, int denom) {//second function
    int com_divisor = gcd(num, denom);//variable declaration
    return num / com_divisor;
}

int main()
{
    int num;
    int denom;
    std::cout<<"Enter the numerator: ";
    std::cin>>num;
    std::cout<<"Enter the denominator: ";
    std::cin>>denom;

if(num%denom==0){ std::cout<<1;}
else if(num||denom<=0 && num%denom!=0){
        std::cout<<0;
}
}
