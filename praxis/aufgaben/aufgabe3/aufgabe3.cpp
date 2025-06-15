/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe3.h"

// Liefert einen Vektor mit den Werten der Liste, beginnend mit `this`.
// Falls `this` ein leeres Element ist, wird ein leerer Vektor geliefert.
std::vector<int> Element::values()
{
       std::vector<int> liste;  // Erstelle einen Vektor (der heißt Liste), der die Werte der Liste speichert
    Element* el = this; //element* bedeutet "Ich erstelle mir einen Zeiger" 

    while(!el-> is_empty())       // While schleife bedeutet, so lange das Element noch einen Nachfolger hat rechne ich element +1 und im gleichen schritt ist das element, was jetzt angeguckt wird ist das nächste, das was davor steht
{
        liste.push_back(el->value);                     // füllt die Liste mit den Werten der Elemente -- value weil int wert im Element heißt value
        el = el->next;          // man ändert sein zu betrachtenes Element -> auf das nächste Element in der Liste
    }
    return liste; // gibt die Liste der Werte zurück
}