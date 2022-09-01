#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int playgame(int upper,int lower) {
	int guess = upper/4;
    int round = 0;
    char ans;
    int counter = 0;
    while ((round == 0)) {
        cout << "How about = " << guess <<" (b: bigger, s: smaller c: correct)" << endl;
        
        cin >> ans;

        if ((ans == 's')) {
            upper = guess;
            guess = (upper + lower) / 2;
        }
        else if ((ans == 'b')) {
            lower = guess;
            guess = (upper + lower) / 2;
        }
        else if (ans== 'c')
        {
            round = 1;
            printf("Your number is %d \n", guess);
        } 
        counter++;
        if (counter==20)
        {
            break;
        }
    }
    if (counter == 20)
    {
        cout << "I cant find";
        return 0;
    }
    return guess;
}


	
int main(){
    
    cout << "Let's play a guess game please select a number between 1 and 1000" << endl;
    playgame(1000,1);

}