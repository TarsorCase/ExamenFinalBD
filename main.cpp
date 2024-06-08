#include <iostream>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include "utils.h"
#include "events.h"

using namespace std;

int main () {
    map<string, set<string>> Info; 
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
                    if(ValidacionNum(fecha[1]) && ValidacionNum(fecha[2])){
                        if(fecha[1] > 0 && fecha[1] < 13){
                            if(fecha[2] > 0 && fecha[2] < 32){
                                AddDateEvent(prt2, prt3, Info);
                            } else {
                                cout << "\nDay value is invalid: " << fecha[2];
                                cout << "\nType \"Help\" to see commands" << "\n";
                            }
                        } else {
                            cout << "\nMonth value is invalid: " << fecha[1];
                            cout << "\nType \"Help\" to see commands" << "\n";
                        }
                    } else {
                        cout << "\nWrong date format: " << prt2 << "\n";
                        cout << "\nType \"Help\" to see commands" << "\n";
                    }
                }      
            } else if(prt1 == "Del"){
                if(iss >> prt2){
                    if(iss >> prt3){
                        ClassNum(prt2);
                        if(fecha[1] > 0 && fecha[1] < 13){
                            if(fecha[2] > 0 && fecha[2] < 32){
                                DelDateEvent(prt2, prt3, Info); 
                            } else {
                                cout << "Day value is invalid: " << fecha[2];
                                cout << "\nType \"Help\" to see commands" << "\n";
                            }
                        } else {
                            cout << "Month value is invalid: " << fecha[1];
                            cout << "\nType \"Help\" to see commands" << "\n";
                        }
                    } else {
                        if(fecha[1] > 0 && fecha[1] < 13){
                            DelDate(prt2, Info);
                        } else {
                            cout << "Month value is invalid: " << fecha[1];
                            cout << "\nType \"Help\" to see commands" << "\n";
                        }
                    }
                }   
            } else if(prt1 == "Find"){
                if(iss >> prt2){
                    FindDate(prt2, Info);
                }
            } else if(prt1 == "Print"){
                Print(Info);
            } else if(prt1 == "Help"){
                Help();
            } else {
                cout << "Unknown command: " << prt1 << "\n";
                cout << "Type \"Help\" to see commands" << "\n";
            }
        }
    }
    return 0;
}

