#include <bits/stdc++.h>

using namespace std;

int main(){

    int rows,cols; 
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of cols"<<endl;
    cin>>cols;
    int arr_2D[rows][cols];

    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            arr_2D[i][j] = (rand() % 100); 

    cout << "Random generated 2D-Array :" << endl;

    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++)
            cout << arr_2D[i][j] << " ";
        cout << endl;
    }

    return 0;   
}