#include <iostream>
#include <string>
#include <map>
using namespace std;
/*  - Dieser Code ist eine schulaufgabe zur übung von structs.
    - Die aufgabe besteht darin ein Schiff zu recyclen und alle daten in ein struct zu speichern-
    - Das schiff wird in bereiche unterteilt: Rumpf, Motor, Treibstofftank , Nutzfläche, Innenaustattung, Passagierraum
    Aufbau:
    - Antrieb
    - Innenausstattung
    - Rumpf
    - Nutzfläche 
*/

class Schiff {
    protected:
    string name;
    float gesammtGewicht;
    
    // Materialien
    float m_Aluminium;
    float m_Anker;
    float m_Holz;
    float m_Kunststoff;
    float m_Stahl;
    float m_Sonstiges;
};

class Menu:: Schiff {
    private:
    void antrieb() {
        map <string, float> antrieb;
        cout << "Welche materialien wurden verwendet? (mengenangabe in tonnen) \n";
        cout << "Aluminium: ";
        cin >> antrieb["Aluminium"];
        cout << "Anker: ";
        cin >> antrieb["Anker"];
        cout << "Holz: ";
        cin >> antrieb["Holz"];
        cout << "Kunststoff: ";
        cin >> antrieb["Kunststoff"];
        cout << "Stahl: ";
        cin >> antrieb["Stahl"];
        cout << "Sonstiges: ";
        cin >> antrieb["Sonstiges"];
        cout << "Recycling informationen des Antriebes wurden erfolgreich eingetragen! \n";
        eingabe();
    }
    public:
    void eingabe() {
        cout << "Bitte geben sie den Namen des Schiffes ein: ";
        cin >> name;
        cout << "Bitte geben sie das Gesammtgewicht des Schiffes ein: ";
        cin >> gesammtGewicht;
        cout << "Was möchten sie eingeben? \n";
        cout << "1. Antrieb \n";
        cout << "2. Innenausstattung \n";
        cout << "3. Rumpf \n";
        cout << "4. Nutzfläche \n";
        cout << "5. Beenden \n";
        int eingabe;
        cin >> eingabe;
        switch (eingabe) {
            case 1:
                antrieb();
                break;
            case 2:
                innenausstattung();
                break;
            case 3:
                rumpf();
                break;
            case 4:
                nutzflaeche();
                break;
            case 5:
                break;
            default:
                cout << "Falsche Eingabe! \n";
                eingabe();
                break;
        }

    }
}

int main() {
    Menu menu;
    menu.eingabe();

    return 0;
}