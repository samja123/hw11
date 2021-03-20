#include <iostream>
using namespace std;
void printTriangle(int n);
void printOpositeTriangles(int n);
void printRuler(int n);

int main() {
    printTriangle(4);
    cout<<endl;
    printOpositeTriangles(4);
    cout<<endl;
    printRuler(4);
    return 0;
}
void printTriangle(int n){
    if(n == 1){
        cout<<"*"<<endl;
    }
    else{
        printTriangle(n - 1);
        for(int i = 0; i < n; i++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void printOpositeTriangles(int n){
    if(n == 1){
        cout<<"*"<<endl;
        cout<<"*"<<endl;
    }
    else{

        for(int i = 0; i < n; i++){
            cout<<"*";
        }
        cout<<endl;
        printOpositeTriangles(n - 1);
        for(int i = 0; i < n; i++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void printRuler(int n){
    if(n <= 0){
        return;
    }
    printRuler(n-1);
    for(int i = 0; i < n; i++){
        cout<<"-";
    }
    cout<<endl;
    printRuler(n-1);
}
