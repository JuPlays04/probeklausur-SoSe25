/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe1.h"

// Prüft, ob die Werte in v in absteigender Reihenfolge sortiert sind.
bool is_sorted_ascending(std::vector<int> const& v)
{
    if (v.size() <= 1) {
        return true;
    
    }
    for (int i = 0; i < v.size()-1; i++) {
        if (v[i] > v[i + 1]) {
            return false;
        }
    }
    return true;
}
