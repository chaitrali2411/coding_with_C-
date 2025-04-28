#include <iostream>
using namespace std;

int main(){
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int nums[]={23,5,3,-6,0,90};

    for (int i=0; i<size; i++){
        if(nums[i]< smallest){
            smallest = min(nums[i], smallest);
            largest = max(nums[i], largest);
        }
    }
   
cout <<" The smallest number is :  " <<smallest <<endl;
cout <<" The largest number is :  " <<largest <<endl;
    return 0;
}
