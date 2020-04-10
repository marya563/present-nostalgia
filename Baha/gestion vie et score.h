  //Structure pour gérer le niveau (à compléter)

  typedef struct Gestion
  {

    SDL_Surface screen;

  } Gestion;


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