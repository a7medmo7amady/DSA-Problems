#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void MergeSort(vector<int>& arr){

}
int main()
{
    vector<int> arr={5,6,8,1,2,3,4} ;
    MergeSort(arr);
    for(int i=0; i<arr.size(); ++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout << std::endl;
    return 0;
}