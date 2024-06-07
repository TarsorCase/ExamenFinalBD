#include <cctype>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void ClassNum(string yes);
void AddDateEvent(string &yes, string &event, map<string, set<string>>& Info);
void DelDateEvent(string &yes, string &event, map<string, set<string>>& Info);
void DelDate(string &yes, map<string, set<string>>& Info);
void Print(string &yes,map<string, set<string>>& Info);
void FindDate(string &yes, map<string, set<string>>& Info);

vector<int> fecha;

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
          //cout << fecha[0] << " " << fecha[1] << " " << fecha[2] << "\n";
          if(fecha[1] > 0 && fecha[1] < 13){
            if(fecha[2] > 0 && fecha[2] < 32){
              //cout << fecha[0] << " " << fecha[1] << " " << fecha[2] << "\n";
            }else{
              cout << "\nDay value is invalid: " << fecha[2];
              break;
            }
          }else{
            cout << "\nMonth value is invalid: " << fecha[1];
            break;
          }
          AddDateEvent(prt2, prt3, Info);
        }
      }else if(prt1 == "Del"){
        if(iss >> prt2){
          if(iss >> prt3){
            ClassNum(prt2);
            //cout << fecha[0] << " " << fecha[1] << " " << fecha[2] << "\n";
            if(fecha[1] > 0 && fecha[1] < 13){
              if(fecha[2] > 0 && fecha[2] < 32){
               //cout << fecha[0] << " " << fecha[1] << " " << fecha[2] << "\n";
               DelDateEvent(prt2, prt3, Info); 
              }else{
                cout << "Day value is invalid: " << fecha[2];
                break;
              }
            }else{
              cout << "Month value is invalid: " << fecha[1];
              break;
            }
          }else{
            if(fecha[1] > 0 && fecha[1] < 13){
              DelDate(prt2, Info);

            }else{
              cout << "Month value is invalid: " << fecha[1];
              break;
            }
          }
        }   
        
      }else if(prt1 == "Find"){
        if(iss >> prt2){
            FindDate(prt2, Info);
        }
      }else if(prt1 == "Print"){
            Print(prt1, Info);
      }
    }
  }
  return 0;
  
}

void ClassNum(string yes){
  fecha.clear();
  int size = yes.size();
  string num;
  for(int i = 0; i < size; ++i){
    if(isdigit(yes[i]) && i == 0){
        for(int j = i; j < size; ++j){
          if(isdigit(yes[j])){
            num += yes[j];
          }else if(yes[j] == '-'){
              break;
          }
        }
        fecha.push_back(stoi(num));
        num.clear();
    }else if(isdigit(yes[i]) && 0 < i && yes[i - 1] == '-'){
      if(i > 0 && yes[i-1] == '-'){
        if(i == 1){
          num += yes[i-1];
          if(i>= 3 && yes[i - 3] == '-' && yes[i - 2] == '-'){
            cout << "Doble guion error\n";
            break;
          }
          for(int j = i; j < size; ++j){
            if(isdigit(yes[j])){
             num += yes[j];
            }else if(yes[j] == '-'){
             break;
            }
          }
        fecha.push_back(stoi(num));
        num.clear();
        }else{
          if(i >= 3 && yes[i - 3] == '-' && yes[i-2] == '-'){
            cout << "Doble guion error";
            break;
          }
          if(i >= 2 && yes[i - 2] == '-'){
            num += yes[i-1];  
          }
          for(int j = i; j < size; ++j){
            if(isdigit(yes[j])){
             num += yes[j];
            }else if(yes[j] == '-'){
             break;
            }
          }
        fecha.push_back(stoi(num));
        num.clear();
        }
      }else{
        for(int j = i; j < size; ++j){
          if(isdigit(yes[j])){
            num += yes[j];
          }else if(yes[j] == '-'){
            break;
          }
        }
      fecha.push_back(stoi(num));
      num.clear();
      }
    }
  }
}

void AddDateEvent(string &yes, string &event, map<string, set<string>>& Info){
  Info[yes].insert(event);
}



void DelDateEvent(string &yes, string &event, map<string, set<string>>& Info){
  auto it = Info.find(yes);
    if (it != Info.end()) {
        it->second.erase(event);
        if (it->second.empty()) {
            Info.erase(it);
            cout << "Deleted successfully" << "\n";
        }
    }else{
      cout << "Event not found" << "\n";
  }
}

void DelDate(string &yes, map<string, set<string>>& Info){
  auto it = Info.find(yes);
    if (it != Info.end()) {
        int n = it->second.size();
        Info.erase(it);
        if(n == 1){
          cout << "Deleted " << n << " event" << "\n";
        }else{
          cout << "Deleted " << n << " events" << "\n";
        }
    } else {
        cout << "Date not found" << "\n";
    }
}

void Print(string &yes, map<string, set<string>>& Info) {
    if(yes[0] != '-') {
        for (const auto& BD : Info) {
            string date = BD.first;
            string year, month, day;

            int dashCount = 0;
            for (char c : date) {
                if (c == '-') {
                    dashCount++;
                } else {
                    if (dashCount == 0){
                        year += c;
                    } 
                    else if (dashCount == 1){
                        month += c;
                    } 
                    else if (dashCount == 2){
                        day += c;
                    } 
                }
            }

            while (year.size() < 4){
                year = '0' + year;
            } 
            while (month.size() < 2){
                month = '0' + month;
            } 
            while (day.size() < 2){
                day = '0' + day;
            } 

            cout << year << "-" << month << "-" << day << " ";
            for (const auto& event : BD.second) {
                cout << event << "\n";
            }
        }
    }
}

void FindDate(string &yes,map<string, set<string>>& Info){
  auto it = Info.find(yes);
  if(it != Info.end()){
    for (const auto& eventTemp : it->second) {
            cout << eventTemp << "\n";
        }
    } else {
        cout << "No events found for the date: " << yes << "\n";
    }
}
