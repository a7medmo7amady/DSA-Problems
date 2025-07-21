#include <iostream> 
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if (n==2) return true;
    if (n < 2 || n % 2 == 0) return false;
    for (int i = 3; i< sqrt(n); i+=2){
        if(n % i == 0) 
            return false;

    }
    return true;
}
int fact(int k){
    return (k==1 || k==0) ? 1: k * fact(k - 1); 
}
bool WilsonTheorem(int n){
    //  (p-1)! % p = p-1, only if p is prime number 
    int k = n-1;
    if (fact(k) % n == n-1) return true;
    // else return fasle;
    return false;

}
int main(){
    int n;
    cin>>n;
    if (isPrime(n)) cout<<"Prime";
    else cout<<"NaN";
    std::cout<<endl;
    if (WilsonTheorem(n))cout<<"Prime";
    else cout<<"NaN";
    std::cout<<endl;
    return 0;
}