#include <iostream>
#include <vector>
using namespace std;
void swapvergas(int& a, int& b){
    int temp=a;
    a=b;
    b=temp;
}
void bubbleSort(vector<int> & vec){
    int n=vec.size();
    for(int i=0; i<n;i++){
        for(int j=0; j<n-1;j++){
            if(vec[j]>vec[j+1]){
                swapvergas(vec[j],vec[j+1]);
            }
        }
    }
}

int main(){
    vector<int> vec={85,70,95,60,90};
    int cali;
    for(int i=0;i<2;i++){
        cout << "Calificacion a agregar: ";
        cin >> cali;
        vec.push_back(cali);
    }
    
     bubbleSort(vec);
     for (int i = 0; i < vec.size(); i++) {
         cout <<vec[i]<<" ";
    }
    int n=vec.size();
    cout<<endl;
    cout << "min: " <<vec[0]<< endl;
    cout << "max: " <<vec[n-1]<< endl;
    return 0;
}
