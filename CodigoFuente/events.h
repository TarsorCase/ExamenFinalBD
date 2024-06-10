#ifndef EVENTS_H
#define EVENTS_H

#include <map>
#include <set>
#include <string>

void AddDateEvent(std::string &yes, std::string &event, std::map<std::string, std::set<std::string>>& Info);
void DelDateEvent(std::string &yes, std::string &event, std::map<std::string, std::set<std::string>>& Info);
void DelDate(std::string &yes, std::map<std::string, std::set<std::string>>& Info);
void Print(std::map<std::string, std::set<std::string>>& Info);
void FindDate(std::string &yes, std::map<std::string, std::set<std::string>>& Info);
void Help();

#endif // EVENTS_H

