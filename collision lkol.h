//Header file of the collisions
#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED

#include <SDL/SDL.h>
typedef struct
{
    float x;
    float y;
}
centre;

typedef struct{
centre centre;
    float rayon;
}Cercle;

double carre(float x1, float y1, float x2, float y2);

int collision_rectangle_cercle(Circle a, SDL_Rect b);

int collision_cercle_cercle(Circle a, Circle b);

int collision_rectangle_rectangle(SDL_Rect a, SDL_Rect b);

SDL_Color GetPixel(SDL_Surface *surface, float x, float y);

int collision_Parfaite(SDL_Surface *calque, SDL_Surface *perso, SDL_Rect posperso, float decalage, float direction);

#endif