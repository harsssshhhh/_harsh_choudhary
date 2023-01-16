
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int c;
bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
	
	return v1[c] < v2[c];
}

int main()
{
     int rows,cols; 
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of cols"<<endl;
    cin>>cols;
    vector<vector<int>> arr_2D(rows,vector<int>(cols,0));

    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            arr_2D[i][j] = (rand() % 100); 

    cout << "Random generated 2D-Array :" << endl;

    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++)
            cout << arr_2D[i][j] << " ";
        cout << endl;
    }
    cout<<"Enter cols index ";
    cin>>c;
	sort(arr_2D.begin(), arr_2D.end(), sortcol);
	cout << "The 2D Array after sorting is:\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <cols; j++)
			cout << arr_2D[i][j] << " ";
		cout << endl;
	}
	return 0;
}
