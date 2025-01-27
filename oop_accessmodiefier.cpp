#include <iostream>
using namespace std;

class hero
{
private:
    int health;
    char level;
    public :
    int gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }
    void sethealth(int c)
    {
        health = c;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    hero ramesh;
    ramesh.sethealth(100);
    ramesh.setlevel('H');
    
    cout << "Health " << ramesh.gethealth() << endl;
    cout << "level " << ramesh.getlevel() << endl;

    return 0;
}