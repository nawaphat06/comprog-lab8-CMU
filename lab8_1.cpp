#include <iostream>
#include <string>
using namespace std;

void rank_D(){
  cout << "You have received very KAK items.\n";
}

void rank_C(){
  cout << "You have received 2000 coins.\n";
  rank_D();
}

void rank_B(){
  cout << "You have received 1 gems.\n";
  rank_C();
}

void rank_A(){
  cout << "You have received 5 gems.\n";
  rank_B();
}


void rank_S(){
  cout << "You have received Super Ultra Rare Unit!!!\n";
  rank_A();
}


int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if(rank == 'S') rank_S();
  else if(rank == 'A') rank_A();
  else if(rank == 'B') rank_B();
  else if(rank == 'C') rank_C();
  else if(rank == 'D') rank_D();
  else cout << "";
  return 0;
}
