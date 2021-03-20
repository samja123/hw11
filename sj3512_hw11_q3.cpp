#include <iostream>
using namespace std;

int minInArray1(int arr[], int arrSize);
int minInArray2(int arr[], int low, int high);

int main() {
    int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
    int res1, res2, res3, res4;
    res1 = minInArray1(arr, 10);
    res2 = minInArray2(arr, 0, 9);
    cout<<res1<<" "<<res2<<endl; //should both be -9
    res3 = minInArray2(arr, 2, 5);
    res4 = minInArray1(arr+2, 4); //arr+2 is equivalent to &(arr[2])
    cout<<res3<<" "<<res4<<endl; //should both be 3

    return 0;
}

int minInArray1(int arr[], int arrSize){
    int temp;
    if(arrSize == 1){
        return arr[0];
    }
    else{
        minInArray1(arr, arrSize - 1);
        temp = arr[0];
        for(int i = 0; i < arrSize - 1; i++){
            if(temp > arr[i]){
                temp = arr[i];
            }
        }
        if(temp < arr[arrSize - 1]){
            return temp;
        }
        else{
            return arr[arrSize - 1];
        }
    }
}

int minInArray2(int arr[], int low, int high){
    if(low == high){
        return arr[low];
    }
    else{
        int temp;
        minInArray2(arr, low, high - 1);
        temp = arr[low];
        for(int i = low; i < (high - 1); i++){
            if(temp > arr[i]){
                temp = arr[i];
            }
        }
        if(temp < arr[high - 1]){
            return temp;
        }
        else{
            return arr[high - 1];
        }
    }
}




