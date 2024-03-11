/*
program:100 game. Two players start from 0 and alternatively add a number from 1 to 10 to the sum. 
The player who reaches 100 wins
name: osamah Abdulfattah(20220778)
date:1/3/2024
*/
#include <iostream>
using namespace std;
 
// fun to confirm the end of the game
bool end_game( int sum ){
 
 return sum>=100;
 
}
int main(){
 
 int sum = 0;
 int current_player = 1;
 // if the game does not end the condition will be met and it will continue in the while loop
 while (!end_game(sum)){
 
  int number ;
  // outputs sum value to players
  cout<<"Current sum: "<< sum <<endl;
  //output from the player who will choose the number
  cout<<"player" <<current_player<<"enter a number (1-10): ";
 
   cin>>number;
  // condition to check the number between 1 and 10  
  if (number < 1 || number > 10){
    cout<<"Invalid number. Please choose a number between 1 and 10.";
    continue;
  }
 
  sum += number;
  // condition to determine the winner  
  if (end_game(sum)){    
    cout<<"Player" <<current_player<<" wins!"<<endl;
  }
 
  else{
 
   current_player = (current_player == 1) ? 2 :1 ;
  }
 
 }
 
 
}




