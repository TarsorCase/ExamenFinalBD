#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

struct Fecha{
  int year;
  int month;
  int day;
};

int main () {
  map<Fecha, string> Info; 
  string comandos;
  string prt1;
  string prt2;
  string prt3;
  bool cont = true;
  while(cont){
    getline(cin, comandos);
    if(comandos.empty()) continue;
    stringstream iss(comandos);
    if(iss >> prt1){
      if(prt1 == "Add"){
        if(iss >> prt2 >> prt3){
      
      }
      }else if(prt1 == "Del"){
        if(iss >> prt2){
          if(iss >> prt3){

          }else{

          }
        }
      }else if(prt1 == "Find"){
        if(iss >> prt2){
          
        }
      }else if(prt1 == "Print"){
        
      }
    }
  }
  return 0;
}
