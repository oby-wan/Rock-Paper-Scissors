#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>



using namespace std;
int main()
{



    int rock = 0;
    int scissors = 1;
    int paper = 2;
    srand(time(NULL));
    int cpuChoice = rand() % 3 ;
    int playerChoice;
    int playerWins = 0;
    int cpuWins = 0;



    cout << "Welcome to ROCK, SCISSORS, PAPER! " << endl;
    cout << "Rules:  " << endl;
    cout << "ROCK beats SCISSORS       " << endl;
    cout << "SCISSORS beats PAPER       " << endl;
    cout << "PAPER beats ROCK       " << endl;
    cout << "----Results stored in LOG file--- " << endl;
    cout << "Instructions: " << endl;
    cout << "For ROCK, choose 0 " << endl;
    cout << "For SCISSORS, choose 1 " << endl;
    cout << "For PAPER, choose 2 " << endl;




    while (true) {
        cout << "Enter your choice:  ";
        cin >> playerChoice;

        switch (playerChoice) {
            case 0: // The case for when the PC picks ROCK
                if (cpuChoice == 0) {
                    cout << "You've chosen ROCK, and the PC played ROCK.. " << endl << "YOU TIE! " << endl;
                    break;
                }
                if (cpuChoice == 1) {
                    cout << "You've chosen SCISSORS, and the PC played ROCK.. " << endl << "YOU LOSE! " << endl;
                    cpuWins++;
                    break;
                }
                if (cpuChoice == 2) {
                    cout << "You've chosen PAPER, and the PC played ROCK.. " << endl << "YOU WIN! " << endl;
                    playerWins++;
                    break;
                }

            case 1: // the case for when the PC picks SCISSORS
                if (cpuChoice == 0) {
                    cout << "You've chosen ROCK, and the PC played SCISSORS.. " << endl << "YOU WIN! " << endl;
                    playerWins++;
                    break;
                }
                if (cpuChoice == 1) {
                    cout << "You've chosen SCISSORS, and the PC played SCISSORS.. " << endl << "YOU TIE! " << endl;
                    break;
                }
                if (cpuChoice == 2) {
                    cout << "You've chosen PAPER, and the PC played SCISSORS .. " << endl << "YOU LOSE! " << endl;
                    cpuWins++;
                    break;
                }

            case 2: // the case for when the PC picks PAPER
                if (cpuChoice == 0) {
                    cout << "You've chosen ROCK, and the PC played PAPER.. " << endl << "YOU LOSE! " << endl;
                    cpuWins++;
                    break;
                }
                if (cpuChoice == 1) {
                    cout << "You've chosen SCISSORS, and the PC played PAPER. " << endl << "YOU WIN! " << endl;
                    playerWins++;
                    break;
                }
                if (cpuChoice == 2) {
                    cout << "You've chosen PAPER, and the PC played PAPER .. " << endl << "YOU TIE! " << endl;
                    break;
                }


            default:
                cout << "Please enter a valid value for either ROCK, SCISSORS, or PAPER " << endl;
                break;

        }
    }




        return 0;
}
//
// Created by Toby on 2021-09-27.
//

