#include "defs.h"
   /* Structure pour gérer notre héros */

    typedef struct Hero
   {
       //Sprite du héros (pas d'animation pour l'instant)
       SDL_Surface sprite;

       / Coordonnées du héros /
       int x, y;

    / Variables utiles pour l'animation /
    int frameNumber, frameTimer;
int etat, direction;
  / Largeur, hauteur du sprite /
    int h, w;

  / Variables utiles pour la gestion des collisions /
    int onGround, timerMort;
    float dirX, dirY;

   } Hero;

  / Structures qui seront utilisées pour gérer le jeu /

  / Structure pour gérer l'input (clavier puis joystick) /

   typedef struct Input
  {

    int left, right, up, down, jump, attack, enter, erase, pause;

  } Input;


  / Structure pour gérer le niveau (à compléter plus tard) */

  typedef struct Gestion
  {

    SDL_Surface screen;

  } Gestion;


  / Structure pour gérer la map à afficher (à compléter plus tard) */

  typedef struct Map
  {

      SDL_Surface *background, *tileSet;
SDL_Surface levelCollision;

    / Coordonnées de début, lorsqu'on doit dessiner la map /
    int startX, startY;

    / Coordonnées max de fin de la map /
    int maxX, maxY;

    / Tableau à double dimension représentant la map de tiles */
    int tile[MAX_MAP_Y][MAX_MAP_X];

  } Map;
typedef struct vie
{
    SDL_Surface *vie[3];
    SDL_Rect pos_vie[1];
    int i;
}Vie;
typedef struct score
{
int score ;
SDL_Rect pos_score ;
}Score ;
typedef struct 
{
           SDL_Rect position;
    int position_actuel;
    SDL_Surface *tab[4];
}OBJET_SECONDAIRE;
typedef struct GAME
{
    SDL_Surface *ecran;
    Heeo perso;
    OBJET_SECONDAIRE montre;
    OBJET_SECONDAIRE pillule;
    Map BG, BGcollision;
    Score score;
    Vie vie;
int *test;
    SDL_Rect position_background;
}GAME;