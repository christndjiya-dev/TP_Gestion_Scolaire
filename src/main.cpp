#include <iostream>
using namespace std;

const int MAX_ELEVES = 30;

int main() {
    string noms[MAX_ELEVES];
    float notes[MAX_ELEVES];
    int nbEleves = 0;
    int choix;
    float somme = 0, moyenne = 0;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Ajouter des eleves\n";
        cout << "2. Saisir les notes\n";
        cout << "3. Afficher les resultats\n";
        cout << "4. Quitter\n";
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {

        case 1:  // Eleves
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
            break;

        case 2:  // Notes
            if (nbEleves == 0) {
                cout << "Aucun eleve enregistre.\n";
            } else {
                for (int i = 0; i < nbEleves; i++) {
                    cout << "Note de " << noms[i] << " : ";
                    cin >> notes[i];

                    while (notes[i] < 0 || notes[i] > 20) {
                        cout << "Note invalide. Reessayez : ";
                        cin >> notes[i];
                    }
                }
            }
            break;

        case 3:  // Calcul + affichage
            if (nbEleves == 0) {
                cout << "Aucun resultat a afficher.\n";
            } else {
                somme = 0;
                cout << "\n--- Resultats ---\n";
                for (int i = 0; i < nbEleves; i++) {
                    cout << noms[i] << " : " << notes[i] << endl;
                    somme += notes[i];
                }
                moyenne = somme / nbEleves;
                cout << "Moyenne generale : " << moyenne << endl;
            }
            break;

        case 4:  // Quitter
            cout << "Fin du programme.\n";
            break;

        default:
            cout << "Choix invalide.\n";
        }

    } while (choix != 4);

    return 0;
}
