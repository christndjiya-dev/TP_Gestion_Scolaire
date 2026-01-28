#include <iostream>
using namespace std;

const int MAX_ELEVES = 30;

int main() {
    int nbEleves;
    string noms[MAX_ELEVES];
    float notes[MAX_ELEVES];

    cout << "Nombre d'eleves (max " << MAX_ELEVES << ") : ";
    cin >> nbEleves;

    while (nbEleves < 1 || nbEleves > MAX_ELEVES) {
        cout << "Nombre invalide. Reessayez : ";
        cin >> nbEleves;
    }

    for (int i = 0; i < nbEleves; i++) {
        cout << "Nom de l'eleve " << i + 1 << " : ";
        cin >> noms[i];
    }

    for (int i = 0; i < nbEleves; i++) {
        cout << "Note de " << noms[i] << " : ";
        cin >> notes[i];

        while (notes[i] < 0 || notes[i] > 20) {
            cout << "Note invalide. Reessayez : ";
            cin >> notes[i];
        }
    }

    return 0;
}
