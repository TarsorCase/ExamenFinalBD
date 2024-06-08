#include <iostream>
#include <map>
#include <set>
#include <string>
#include "events.h"
#include "utils.h"

using namespace std;

void AddDateEvent(string &yes, string &event, map<string, set<string>>& Info) {
    Info[yes].insert(event);
}

void DelDateEvent(string &yes, string &event, map<string, set<string>>& Info) {
    auto it = Info.find(yes);
    if (it != Info.end()) {
        it->second.erase(event);
        cout << "Deleted successfully" << "\n";
    } else {
        cout << "Event not found" << "\n";
    }
}

void DelDate(string &yes, map<string, set<string>>& Info) {
    auto it = Info.find(yes);
    if (it != Info.end()) {
        int n = it->second.size();
        Info.erase(it);
        if(n == 0){
            cout << "Deleted " << n << " events" << "\n";
        } else if(n == 1){
            cout << "Deleted " << n << " event" << "\n";
        } else {
            cout << "Deleted " << n << " events" << "\n";
        }
    } else {
        cout << "Date not found" << "\n";
    }
}

void Print(map<string, set<string>>& Info) {
    for (const auto& BD : Info){
        string date = BD.first;
        string year, month, day;
        ClassNum(date);
        if(fecha[0] >= 0){
            year = to_string(fecha[0]);
            month = to_string(fecha[1]);
            day = to_string(fecha[2]);
            while (year.size() < 4){
                year = '0' + year;
            } 
            while (month.size() < 2){
                month = '0' + month;
            } 
            while (day.size() < 2){
                day = '0' + day;
            }  
            cout << "\n" << year << "-" << month << "-" << day << " ";
            for (const auto& event : BD.second) {
                cout << event << " "; 
            }
            cout << "\n";
        }
    }
}

void FindDate(string &yes,map<string, set<string>>& Info) {
    auto it = Info.find(yes);
    if(it != Info.end()){
        for (const auto& eventTemp : it->second) {
            cout << eventTemp << "\n";
        }
    } else {
        cout << "No events found for the date: " << yes << "\n";
    }
}

void Help() {
    cout << "Usage: \n";
    cout << "Add <date> <event>: Add an event to the specified date.\n";
    cout << "Del <date> <event>: Delete the specified event from the date.\n";
    cout << "Del <date>: Delete all events for the specified date.\n";
    cout << "Find <date>: Find all events for the specified date.\n";
    cout << "Print: Print all dates and their associated events.\n";
    cout << "For <date>, use format YYYY-MM-DD.\n";
    cout << "Example: Add 2024-06-07 Meeting\n";
    cout << "         Del 2024-06-07 Meeting\n";
    cout << "         Del 2024-06-07\n";
    cout << "         Find 2024-06-07\n";
    cout << "         Print\n";
}

