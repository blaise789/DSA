#include<iostream>
using namespace std;
int main(){
    int target=5;
    int nums[11]={1,2,3,5,4,5,6,7,8,9,10};
    for(int i=0; i<11; i++){
        if (nums[i]==target){
        cout<<"number found at location"<<i<<endl;
        break;
        }
    
    }

    return 0;
}