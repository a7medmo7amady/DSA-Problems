
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void BubbleSort(vector<int>& arr){
    for(int i=0 ; i<arr.size(); ++i){
        for(int j=i+1; j < arr.size(); ++j ){
            if (arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main()
{
    vector<int> arr={5,6,8,1} ;
//    std::cout<<"Hello World";
    BubbleSort(arr);
    for(int i=0; i<arr.size(); ++i){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}