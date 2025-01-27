#include <iostream>
#include <vector>
using namespace std;

vector<int> waveprint(const vector<vector<int>> &arr, int nrows, int mcols)
{
    vector<int> ans;
    for (int col = 0; col < mcols; col++)
    {
        if (col & 1) // If column index is odd
        {
            for (int row = nrows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        else // If column index is even
        {
            for (int row = 0; row < nrows; row++)
            {
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    cout << endl; // For better readability of output
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
    vector<int> result = waveprint(arr, nrows, mcols);

    // Optional: Print the result vector
    cout << "Waveprint output: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
