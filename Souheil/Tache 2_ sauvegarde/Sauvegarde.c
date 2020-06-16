#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Sauvegarde.h"

void init_save (save *s)
{
	s->posperso.x=-1;
	s->posperso.y=-1;
	s->posennemi.x=-1;
	s->posennemi.y=-1;
	s->vies=-1;
	s->temps=-1;
	s->score=-1;
	s->fichier=NULL;
}

void update_save (save *s, SDL_Rect perso,SDL_Rect ennemi,SDL_Rect cam, int v , int tps, int sc)
{
	s->posperso=perso; 
	s->posennemi=ennemi;
	s->poscam=cam; 
	s->vies=v; 
	s->temps=tps; 
	s->score=sc; 
}

void enregistrer (save s)
{
	s.fichier=fopen("Sauvegarde","wb");
	if (s.fichier !=NULL)
	{
		fwrite(&s,sizeof(save),1,s.fichier);
		printf("Sauvegarde reussie ! \n");	
		fclose (s.fichier);
	}else 
		printf("Impossible d'ouvrir le fichier !\n");
}

void recuperer (save *s)
{
	s->fichier=fopen("Sauvegarde","rb");
	if (s->fichier !=NULL)
	{
		fread(&s,sizeof(save),1,s->fichier);
		printf("perso.x=%d, perso.y=%d\n", s->posperso.x, s->posperso.y);
		printf("ennemi.x=%d, ennemi.y=%d\n", s->posennemi.x, s->posennemi.y);
		printf("cam.x=%d, cam.y=%d\n", s->poscam.x, s->poscam.y);
		printf("vies=%d, temps=%d, score=%d\n", s->vies, s->temps, s->score);	
		fclose (s->fichier);
	}else 
		printf("Impossible d'ouvrir le fichier !\n");
}

