/* Willam Chien 02/15/2018
This program has you guess a number and tells you to go higher or lower until you pick the correct one.
*/


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

    cout << "Guess a number between 0-100" << endl;
    cin>>guessNumber;

verify();


        while (guessNumber != x){
        if (guessNumber > x)
        {
        cout<<"Go LOWER!"<<endl;
        cin>>guessNumber;
        verify();
        }
        if (guessNumber < x)
        {
        cout<<"Go HIGHER"<<endl;;
        cin>>guessNumber;
        verify();
        }

        if (guessNumber==x)
            cout<<"Correct!"<<endl;
        }

string answer = "";
                cout<< "Enter y if you would like to play again."<< endl;
                cin>>answer;

                    if (answer == "y")
                        {
                            guess();
                        }
                        else {
                                cout<<"ok, bye"<<endl;
                                }

}




int main()
{

    guess();

    return 0;
}
