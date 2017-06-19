#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello!" << endl;
    string password;
    for(int a=4;a>0;a--){
        cout <<"please enter your password: ";
        cin >>password;
        if(password=="abc"){
            cout <<"Acsses allow!";
            break;
        }
        else
        cout<<"Try again. You have "<<a-1<<" times attempt";
        cout<<'\n';
    }
    return 0;
}
