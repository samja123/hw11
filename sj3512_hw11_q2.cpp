#include <iostream>
using namespace std;
int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);
int main() {
    int arr[10] = {-1, 2, 3, 5, 4, 6, 8, 9, 9, 11};
    cout<<sumOfSquares(arr, 10)<<endl;
    if(isSorted(arr, 10) == true){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}
int sumOfSquares(int arr[], int arrSize){
    if(arrSize == 1){
        return arr[0] * arr[0];
    }
    else{
        return sumOfSquares(arr, arrSize - 1) + (arr[arrSize - 1] * arr[arrSize - 1]);
    }
}

bool isSorted(int arr[], int arrSize){
    if(arrSize == 1 || arrSize == 0){
        return true;
    }
    else{
        bool rest;
        rest = isSorted(arr, arrSize - 1);
        if(rest == false){
            return false;
        }
        else{
            int i = 0;
            if(arr[i] <= arr[i + 1] && arr[arrSize - 2] <= arr[arrSize - 1]){
                return true;
            }
            else{
                return false;
            }
        }
    }

}