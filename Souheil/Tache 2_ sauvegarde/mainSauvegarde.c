#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Sauvegarde.h"//personnage ennemi scrolling gestion vies temps score

int main(void) 
{
	//SDL_Surface *ecran ; 
	save s;
	SDL_Rect posperso,posennemi,poscam;
	int vies,temps,score;
	//perso p;
	//ennemi e;
	//scroll sc;
	//input inp;
	//int continuer=1;

	//ecran = SDL_SetVideoMode(950,600,32,SDL_HWSURFACE | SDL_DOUBLEBUF) ;

	//Integration
	init_save (&s);
	//if exit
	update_save (&s, posperso, posennemi, poscam, vies, temps, score);//normalement update_save(&s,p.posperso,e.posennemi,sc.poscam,p.vies,p.temps,p.score);
	enregistrer (s);
	//else if continuer partie 
	recuperer (&s);

	//SDL_FreeSurface(ecran);	
	SDL_Quit();
}
