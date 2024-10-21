// ExoSTL.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>


int main() {
    // 1. VECTEUR
    std::vector<int> vec = { 5, 2, 9, 1, 5, 6 };

    // Insertion
    vec.push_back(3);  // Ajoute 3 à la fin du vecteur

    // Suppression
    vec.erase(vec.begin() + 2);  // Supprime l'élément à l'index 2 (le 9 ici)

    // Tri
    std::sort(vec.begin(), vec.end());

    std::cout << "Vecteur trié : ";
    for (int n : vec) {
        std::cout << n << " ";  // Affiche le vecteur trié
    }
    std::cout << std::endl;

    // 2. LISTE
    std::list<int> lst = { 5, 2, 9, 1, 5, 6 };

    // Insertion
    lst.push_back(3);  // Ajoute 3 à la fin de la liste

    // Suppression
    auto it = lst.begin();
    std::advance(it, 2);  // Avance l'itérateur de 2 positions (vers le 9)
    lst.erase(it);  // Supprime le 9

    // Tri
    lst.sort();  // La liste a sa propre méthode de tri

    std::cout << "Liste triée : ";
    for (int n : lst) {
        std::cout << n << " ";  // Affiche la liste triée
    }
    std::cout << std::endl;

    // 3. SET
    std::set<int> mySet = { 5, 2, 9, 1, 5, 6 };  // Notez que les doublons (5) sont automatiquement éliminés

    // Insertion
    mySet.insert(3);  // Ajoute 3 dans le set

    // Suppression
    mySet.erase(9);  // Supprime l'élément 9

    // Tri : pas besoin de trier car les éléments d'un set sont toujours triés
    std::cout << "Set trié (automatiquement) : ";
    for (int n : mySet) {
        std::cout << n << " ";  // Affiche le set trié
    }
    std::cout << std::endl;

    return 0;
}



/*
int main()
{
    std::vector<int> listeV = { 5, 2, 9, 1, 5, 6 };
    std::list<int> listeL = { 5, 2, 9, 1, 5, 6 };
    std::set<int> listeS = { 5, 2, 9, 1, 5, 6 };

    listeV.push_back(20);
    listeV.erase(listeV.begin() +2, listeV.end()-3);
    std::sort(listeV.begin(), listeV.end());

    std::cout << "listeV" << std::endl;
        for (int i = 0; i < listeV.size(); i++) {

        std::cout << listeV[i] << std::endl;
    }

    listeL.push_front(20);
    auto it = listeL.begin();
    std::advance(it, 2);
    listeL.erase(it);

}
*/
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
