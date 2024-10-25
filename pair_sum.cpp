#include<iostream>
#include<vector>
using namespace std;

void findPair(vector<int> nums,int target){
    
    for (int i = 0; i <nums.size()-1;i++){
       
      for (int j=i+1;j<nums.size();j++){
           if(nums[i]+nums[j]==target){
            cout<<"pair found ["<<nums[i]<<","<<nums[j]<<"]"<<endl;
           }
           
         }
    }
      

    }

int main(){
    vector<int> nums = {2, 7, 11, 15,6,8,3};
    int target = 9;
    findPair(nums, target);  
    // Call the function with the array and target value
    return 0;
}