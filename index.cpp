#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int x=3;//кількість рядків
    int arr[3];
    int matOne[x][x];
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cin>>matOne[i][j];
        }
    }
    cout<<"Не сортировані рядки матриці:"<<endl;
    for(int i=0;i<x;i++){ //вивід матриці
        for(int j=0;j<x;j++){
            cout<<matOne[i][j]<<" ";
        }
         cout<<endl;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            arr[j]=matOne[i][j];
        }
         int l = sizeof(arr)/sizeof(arr[0]);
         sort(arr, arr+l);
        for(int j=0;j<x;j++){
            matOne[i][j]=arr[j];
        }
    }
    cout<<"Сортировані рядки матриці:"<<endl;
    for(int i=0;i<x;i++){ //вивід матриці
        for(int j=0;j<x;j++){
            cout<<matOne[i][j]<<" ";
        }
         cout<<endl;
    }
}
