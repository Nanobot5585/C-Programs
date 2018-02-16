/* Willam Chien 02/15/2018*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void verify(){
    if (cin.fail()){
    cout<<"INVALID ENTRY: You just wasted a pick. "<<endl;
    cin.clear();
    cin.ignore (99999, '\n');
    }

}


void guess(int x){

    int numbers[9];

    int guessNumber = 0;



    cout<<x<<endl;

    cout << "Pick your 1st number:" << endl;
    cin>>numbers[0];
    verify();

    cout << "Pick your 2nd number:" << endl;
    cin>>numbers[1];
    verify();

    cout << "Pick your 3rd number:" << endl;
    cin>>numbers[2];
    verify();

    cout << "Pick your 4th number:" << endl;
    cin>>numbers[3];
    verify();


    cout << "Pick your 5th number:" << endl;
    cin>>numbers[4];
    verify();

    cout << "Pick your 6th number:" << endl;
    cin>>numbers[5];
    verify();

    cout << "Pick your 7th number:" << endl;
    cin>>numbers[6];
    verify();

    cout << "Pick your 8th number:" << endl;
    cin>>numbers[7];
    verify();

    cout << "Pick your 9th number:" << endl;
    cin>>numbers[8];
    verify();

    cout << "Pick your 10th number:" << endl;
    cin>>numbers[9];
    verify();


int i = 0;
bool match = false;
    for (i=0; i<10; i++){
        if (x == numbers[i]){
            match = true;

        if(match){
        std::cout<<"Congrats you picked correctly! The correct number is "<<x<<endl;
        }else{
        std::cout<<"Sorry! you didn't win. The correct number is "<<x<<endl;
        }
        }




        }
    }








int main()
{
    cout<<"You have 10 tries to pick the correct number 1-100"<<endl;
    srand(time(0));
    int x = rand()%100;

    guess(x);

    return 0;
}
