#include <iostream>
#include <vector>
using namespace std;
void mySwap(inta&,int b&){
    int temp=0;
    a=b;
    b=temp;
}
void selectionSort(vector<int>&vec){
    int n=vec.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(vec[j]<vec[minVal]){
                minVal=j;
                }
            }
        if(minVal != i){
            mySwap(vec[i],vec[minVal]);{
        }
    }
}
int main(){
    vector <int> vec={2,18,33,3,10};
    selectionSort(vec);
    return 0;
}
