#include <iostream>
using namespace std;

void reachhome(int src, int dest)
{
    cout << "src " << src << " destination  " << dest << endl;
    if (src == dest)
    {
        cout << "reched";
        return;
    }

    src++;
    // recursive call
    reachhome(src, dest);

    // using loop
    //  for (int src = 1; src <= dest; src++)
    //  {
    //      cout << "src " << src << " destination  " << dest << endl;
    //      if (src == dest)
    //      {
    //          cout << "reched";
    //          break;
    //      }
    //  }
}

int main()
{
    int dest = 10;
    int src = 1;
    reachhome(src, dest);
    return 0;
}