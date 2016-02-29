#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // INITIALISATION DES VARIABLES
    string subject("");
    vector<int> mark;
    int markNumber(0) , note(0), i(0), taille(0);
    double average(0);


    // ACCUEIL
    cout << "Hello Student!" << endl;
    cout << "Please enter the subject of your notes" << endl;
    cin >> subject ;
    cout << "You chose " << subject << " Good" << endl;
    cout << endl << "Please enter the number of marks" << endl;
    cin >> markNumber ;

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


    cout << "Your average mark on this subject is " << average << endl;

    }


    return 0;
}
