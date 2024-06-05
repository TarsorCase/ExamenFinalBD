#include <cctype>
#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void ClassNum(string yes);
vector<int> fechas;

int main () {
  map<string, string> Info; 
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
          ClassNum(prt2);
          if(fechas[1] > 0 && fechas[1] < 13){
            if(fechas[2] > 0 && fechas[2] < 32){
              cout << fechas[0] << " " << fechas[1] << " " << fechas[2];
            }else{
              cout << "Day value is invalid: " << fechas[2];
              break;
            }
          }else{
            cout << "Month value is invalid: " << fechas[1];
            break;
          }
        }
      }else if(prt1 == "Del"){
        if(iss >> prt2){
          if(iss >> prt3){
            ClassNum(prt2);
            if(fechas[1] > 0 && fechas[1] < 13){
              if(fechas[2] > 0 && fechas[2] < 32){
               cout << fechas[0] << " " << fechas[1] << " " << fechas[2];
              }else{
                cout << "Day value is invalid: " << fechas[2];
                break;
              }
            }else{
              cout << "Month value is invalid: " << fechas[1];
              break;
            }
          }else{
            if(fechas[1] > 0 && fechas[1] < 13){

            }else{
              cout << "Month value is invalid: " << fechas[1];
              break;
            }
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

void ClassNum(string yes){
  fechas.clear();
  int size = yes.size();
  string num;
  for(int i = 0; i < size; ++i){
    if(isdigit(yes[i])){
      if(yes[i - 2] == '-' && yes[i - 1] == '-' && (i - 1) >= 1){
        num += yes[i-1];
        int iterador = i; 
        while(yes[iterador] != '-'){
          num += yes[iterador];
          ++iterador;
        }
      }        
    }
  }
}
