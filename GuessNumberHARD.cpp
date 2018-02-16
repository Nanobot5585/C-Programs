/* Willam Chien 02/15/2018*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void verify(){
    if (cin.fail()){
    cout<<"INVALID ENTRY: Enter a whole number."<<endl;
    cin.clear();
    cin.ignore (99999, '\n');
    }

}


void guess(){

    int guessNumber = 0;
    srand(time(0));
    int x = rand()%100;
    cout<<x<<endl;
    cout << "Guess a number between 0-100" << endl;
    cin>>guessNumber;

    verify();

    while (guessNumber != x)
    {
        cout << "WRONG, guess again!"<<endl;
        cin>>guessNumber;
        verify();
    }

    if (guessNumber==x) {
    cout<<"correct!" << endl;
     string answer = "";
    cout<< "Would you like to play again? y/n"<< endl;
    cin>>answer;

    if (answer == "y")
    {
        guess();
    }
    else {
          cout<<"ok, bye"<<endl;
    }
}
}



int main()
{
    string answer = "";
    guess();

    return 0;
}
