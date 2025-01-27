#include<iostream>
#include<vector>
using namespace std;


vector<int> spiralOrder(vector<vector<int>>& matrix) {

         vector<int> ans;
         int row = matrix.size();
         int col = matrix[0].size();
         int count = 0;
         int total = row * col;

         //index initialization
         int startingrow = 0;
         int startingcol = 0;
         int endingrow = row-1;
         int endingcol = col - 1;

         while(count < total){

            //printting start row
            for(int index = startingcol;index <=endingcol && count < total ;index++){
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;

            //printing ending column
            for(int index = startingrow;index<=endingrow && count < total;index++){
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;

            //printing ending row
            for(int index= endingcol;index>=startingcol && count < total;index--){
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;

            //printing statring col
            for(int index = endingrow;index>=startingrow && count < total;index--){
                ans.push_back(matrix[index][startingcol]);
                count++;

            }
            startingcol++;
            }
            return ans;
    }


int main()
{
    int nrows = 3, mcols = 3;
    vector<vector<int>> arr(nrows, vector<int>(mcols));

    // Input values for the 2D vector
    cout << "Enter values for the 3x3 matrix:" << endl;
    for (int row = 0; row < nrows; row++)
    {
        for (int col = 0; col < mcols; col++)
        {
            cin >> arr[row][col];
        }
    }

    // Print the waveprint result
    vector<int> result = spiralOrder(arr);

    // Optional: Print the result vector
    cout << "Spiral Output ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
