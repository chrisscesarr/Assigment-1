#include <iostream>
#include <stdlib.h>    
#include <time.h>
using namespace std;

int main () {

int lcm;

srand  (time(NULL));

int random = rand() % 30;
int random2 = rand() % 30;
int answer;

string name;

cout <<"What is your name?"<<endl;
cin >> name;

cout << "\nHello " << name << "!  Welcome to the LCM Game. \n" ;

cout << "Call you tell me what is the LCM of " << random << " and " << random2<<"?";

cin >> answer ;

    lcm = (random > random2) ? random : random2;
    while(true) {
        if( lcm%random == 0 && lcm%random2 == 0 ) {
            if (answer == lcm){cout << "That is correct, Congratulations!";
                break;
            }
            else{
            cout << "Incorrect. The LCM is: " << lcm ;
            break;}
        }
        lcm += lcm;
    }

return 0;

}