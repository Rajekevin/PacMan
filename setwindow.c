#include <windows.h>

//Fonction utilisant les API Windows afin de dimentionner la fen�tre

void SetWindow(int Largeur, int Hauteur)
{
    SMALL_RECT Rect; //On cr�e une variable d�finissant un rectangle puis on l'initialise
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Hauteur - 1;
    Rect.Right = Largeur - 1;

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      //On r�cup�re plusieurs informations sur l'�tat actuel de la fen�tre

    SetConsoleWindowInfo(Handle, TRUE, &Rect);            //On applique la taille du rectangle � la fen�tre
}
