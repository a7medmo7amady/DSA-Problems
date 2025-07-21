#include <iostream> 
#include <cmath>
/*
Problem Link


*/
using namespace std;

int Years(int n, int m){
    int counter = 0;
    while(n <= m){
        n *= 3;
        m *= 2;
        counter++;
    }
    return counter;
}
int main(){
    int n, m;
    cin >> n >> m;
    cout << Years(n, m);
    return 0;
}