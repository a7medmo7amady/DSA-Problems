#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
using namespace std;
int Arthmetic_Modulo(int a,int q, int r, int n){
    // a = q*n + r
    // q = a/n
    // r = a%n
    // n = a/q
    // r = a%q
    // q = a/n
    // r = a%n
    // n = a/q
    // r = a%q
    a = q*n + r;
    return a;
}
int main(){
    int a,q,r,n;
    cin>>a>>q>>r>>n;
    cout<<Arthmetic_Modulo(a,q,r,n);
    cout<<endl;
    int x= a-n * (a/n); // r
    cout<<x;
    cout<<endl;
    int y= a-q * (a%q); //
    cout<<y;
    cout<<endl;
    int z= a-r * (a/r);
    return 0;

}