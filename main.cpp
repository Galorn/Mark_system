#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    // INITIALISATION DES VARIABLES
    string subject(""), ligne("");
    string const fichierscore("C:/Users/Alexis-/Documents/GitHub/Mark_system/TEXT.txt");
    vector<int> mark;
    int markNumber(0) , note(0), i(0), taille(0);
    double average(0);

    // INITIALISATION DES POINTEURS A 0
    string *subjecta(0), *lignea(0);
    string const *fichierscorea(0);
    vector<int> *marka;
    int *markNumbera(0), *notea(0), *ia(0), *taillea(0);
    double *averagea(0);


    // ACCUEIL
    cout << "Hello Student!" << endl;
    cout << "Please enter the subject of your notes" << endl;
    cin >> subject ;
    cout << "You chose " << subject << " Good" << endl;
    cout << endl << "Please enter the number of marks" << endl;
    cin >> markNumber ;
    // subjecta POINTE SUR subject
    subjecta = &subject;
    // SUBJECTA - ADRESSE - CASE ADRESSE - VALEUR CASE // ACCES A LA VALEUR SUBJECT SANS APPELER SUBJECT
    // DEFERENCAGE SE FAIT AVEC *subjecta
    cout << *subjecta << endl;

    // DETECTION D'ERREUR
    if (markNumber==0)
    {
        cout << "Wrong key." << endl;
        cout << "Okay ! " << endl;

    }
    else
    {
        cout << "You chose to enter " << markNumber << " marks. " << endl;
        cout << "Enter your mark one by one please" << endl ;
        // REMPLISSAGE DES NOTES DANS UN TABLEAU
        for (i=0; i < markNumber ; i++)
        {
            cin >> note ;
            mark.push_back(note);

        }
        taille = mark.size();
        cout << "You entered " << taille << " marks." << endl;
        // CALCUL DE LA MOYENNE
        for(i=0; i<mark.size(); ++i)
        {
            cout << "You entered " << mark[i] << "." << endl;
            average += mark[i];
        }
    average /= mark.size();

    // ECRITURE DES INFORMATIONS DANS UN FICHIER TEXTE
    ofstream Text(fichierscore.c_str(), ios::app);
    ifstream Textlecture(fichierscore.c_str());
    // VERIFICATION DE L'OUVERTURE DU FICHIER EN ECRITURE
    if (Text)
    {
        Text << subject << " with the average of " << average << " !" << endl;
        // VERIFICATION DE L'OUVERTURE DU FICHIER EN LECTURE
        if (Textlecture)
        {
            // BOUCLE POUR AFFICHEIR TOUTES LES LIGNES D'UN FICHIER
            while(getline(Textlecture,ligne))
            {
                cout << ligne << endl;
            }
        }
        else
        {
            cout << "Cannot open the file" << endl;
        }


    }
    else{
        cout << "Fichier impossible à ouvrir." << endl;
    }

    cout << "Your average mark on " << subject << " is " << average << endl;



    }


    return 0;
}
