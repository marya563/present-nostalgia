#ifndef FONCTIONS_H_
#define FONCTIONS_H_

typedef struct save
{
	SDL_Rect posperso; 
	SDL_Rect posennemi;
	SDL_Rect poscam; 
	int vies; 
	int temps; 
	int score; 
	FILE *fichier;
}save; 

void init_save (save *s);
void update_save (save *s, SDL_Rect perso,SDL_Rect ennemi,SDL_Rect cam, int v , int tps, int sc);
void enregistrer (save s);
void recuperer (save *s);

#endif
