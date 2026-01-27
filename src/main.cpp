#include <iostream>
using namespace std;


int main() {
    int nbEleves;

const int MAX_ELEVES = 5;
    string noms[MAX_ELEVES];

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

    return 0;
}
