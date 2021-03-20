#include <iostream>
using namespace std;

int boardGame(int arr[], int arrSize);

int main() {
    int arr[7] = {0, 3, 80, 6, 2, 57, 10};

    //int arr[10] = {0, 98, 7 ,44, 25, 3, 5, 85, 46, 4};
    int lowest_cost = boardGame(arr,7);
    cout<<"min cost is "<<lowest_cost;
    return 0;
}
int boardGame(int arr[], int arrSize){
    int cost;
    int cost1;
    int cost2;
    int min;

    if(arrSize == 1){
        cost = arr[0];
        return cost;
    }
    if(arrSize == 2){
        cost = arr[0] + arr[1];
        return cost;
    }
    if(arrSize == 3){
        cost = arr[0] + arr[2];
        return cost;
    }
    else{
        boardGame(arr, arrSize - 1);
        cost1 = boardGame(arr, arrSize - 1);
        cost2 = boardGame(arr, arrSize - 2);
        if(cost1 < cost2){
            min = cost1;
        }
        else{
            min = cost2;
        }
        cost = arr[arrSize - 1] + min;
        return cost;
    }

}