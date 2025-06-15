/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe4.h"

// Erwartet zwei Vektoren und liefert true, falls diese die gleichen Elemente
// enthalten. Die Reihefolge der Elemente muss dabei nicht gleich sein.
bool same_elements(std::vector<int> a, std::vector<int> b)
{
    if (a.size() ==0&& b.size() ==0){ // Beide Vektoren sind leer
        return true;
    }
    std::sort(a.begin(), a.end());      // Sortiere die Vektoren
    std::sort(b.begin(), b.end());      // Sortiere die Vektoren


    // entfernen von Duplikaten bei a
    auto l1 = unique(a.begin(), a.end());
    a.erase(l1, a.end());

    // entfernen von Duplikaten bei b
    auto l2 = unique(b.begin(), b.end());
    b.erase(l2, b.end());

    if(a.size()==b.size()) { // Wenn die Vektoren die gleiche Länge haben
        for(int i=0; i<a.size();i++) {
            if(a[i] == b[i]) { // Wenn die Elemente an der gleichen Stelle gleich sind
             return true;
            }
        }
    }
    return false;
}
