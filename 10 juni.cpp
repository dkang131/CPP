//void function example
#include <iostream>
using namespace std;

void name(string a){
    cout << "Hello " << a;
}

void substraction(int a,int b){
    cout << a-b;
}

int operate(int a,int b){
    return(a*b);
}

float operate(float a,float b){
    return(a/b);
}

long factorial(long a){
    if(a>1)
        return(a*factorial(a-1));
    else
        return(1);
}

float pangkat(float a,float b){
    if(b>0)
        return(a*pangkat(a,b-1));
    else
        return(1);
}

long combination(long n,long k){
    return(factorial(n)/(factorial(k)*factorial(n-k)));
}

long permutation(long n,long k){
    return(factorial(n)/(factorial(n-k)));
}

float binomial(int n,int k,float p){
    float result=1;
    //1*p^k
    for(int i=1; i<=k; i++)
        result = result*p;
    //1*p^k*(1-p)^(n-k)
    for(int i=1;i<=n-k;i++)
        result = result*(1-p);
    //1*p^k*(1-p)^(n-k)*combi(n,k)
    result = result*combination(n,k);
    return result;

}

float binomial2(int n,int k,float p){
    return(combination(n,k)*pangkat(p,k)*pangkat((1-p),(n-k)));
}
/*int main(){
    string a = "Darren";

    name(a);
return 0;
}
*/

/*int main(){
    int a,b;
    substraction(10,1);


    return 0;
}
*/

/*int main(){
    long number;
    cout << "Please type a number: ";
    cin >> number;
    cout << number<<"!= "<<factorial(number);

    return 0;
}
*/

/*int main(){
    long number1,number2;
    cout << "Please type a number: ";
    cin >> number1;
    cout << "What is the power: ";
    cin >> number2;
    cout << "Answer: "<<pangkat(number1,number2);

    return 0;
}
*/

/*
int main(){
    int n=5,k1=1,k2=0;
    float p=0.05,binomial3[4];
    //cout << "binomial= "<<binomial(n,k1,p)<<"\n";
    //cout << "binomial= "<<binomial2(n,k2,p)<<"\n";
    //cout << "binomial= "<<binomial2(n,k2,p)+binomial(n,k1,p)<<"\n";
    cout << "========================================="<<endl;
    float jumlah=0;
    for(int k=0;k<=n;k++){
        jumlah += binomial2(n,k,p);
        binomial3[k]=jumlah;
    }
    for(int k=0;k<=n;k++){
        cout<<binomial3[k]<<endl;
    }

    cout <<"========================================="<<endl;
    return 0;

}
*/

int main(){

    cout << permutation(5,1);
}
