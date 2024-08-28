#include<iostream>
using namespace std;

int main(){
    int i,j,a,b;
    cout<<"Enter the rows and columns matrix for matrix: "; //input dimensions
    cin>>a>>b;
    int arr[a][b],s1=0,s2=0;
    if(a==b){ //checking for the matrix is square or not 
        cout<<"Enter the values of matrix: "<<endl; //input matrix
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                cout << "Enter element [" << i + 1 << "," << j + 1 << "]: ";
                cin>>arr[i][j];
                if(i==j){
                    s1=s1+arr[i][j]; //calculating sum diag 1
                }
            }
        }
        cout<<"The sum of diagnol 1 is: "<<s1<<endl;
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                if((i+j)==(a-1)){ //calculating sum diag 2
                    s2=s2+arr[i][j];
                }
            }
        }
        cout<<"The sum of diagnol 2 is: "<<s2;
    } else{
        cout<<"Error! Not a square matrix";
    }
    return 0;
}