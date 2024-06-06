#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

// Definición de la estructura Date
struct Date {
    string year;
    string month;
    string day;
};

int main() {
    // Crear un map que asocie fechas (Date) con vectores de cadenas (eventos)
    map<Date, vector<string>> events_map;
    string year, month, day;
    char dash;
    cin >> year >> dash >> month >> dash >> day;

    Date date = {year, month, day};

    string event;
    cout << "Ingrese un evento: ";
    while (cin >> event && event != "fin") {
        events_map[date].push_back(event);
        cout << "Ingrese otro evento (o 'fin' para terminar): ";
    }

    // Acceder a los eventos asociados a la fecha ingresada por el usuario

    while(year.size() < 4){
        string zero_year = "0";
        string year_temp;
        year_temp = year;
        year = zero_year + year_temp;
    }

    while(month.size() < 2 && month.size() != 0){
        string zero_month = "0";
        string month_temp;
        month_temp = month;
        month = zero_month + month_temp;
    }

    while(day.size() < 2){
        string zero_day = "0";
        string day_temp;
        day_temp = day;
        day = zero_day + day_temp;
    }
    cout << "Eventos para la fecha " << year << "-" << month << "-" << day << ":" << endl;
    for (const auto& event : events_map[date]) {
        cout << event << endl;
    }

    return 0;
}

