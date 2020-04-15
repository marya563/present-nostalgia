#include <string.h>
#include <SDL/SDL.h>
#include <time.h>

struct Enigme{
	char question[256];
	char answer1[256];
	char answer2[256];
	char answer3[256];
	char answer4[256];
	int solution;

	SDL_Surface *Button[2];
	SDL_Surface *Background;
	
	SDL_Surface *Question;
	SDL_Surface *Answer1;
	SDL_Surface *Answer2;
	SDL_Surface *Answer3;
	SDL_Surface *Answer4;
	
	SDL_Rect positionBackground;
	SDL_Rect positionQuestion;
	SDL_Rect positionAnswer1;
	SDL_Rect positionAnswer2;
	SDL_Rect positionAnswer3;
	SDL_Rect positionAnswer4;

	SDL_Rect positionRiddle;
	SDL_Rect positionButton1;
	SDL_Rect positionButton2;
	SDL_Rect positionButton3;
	SDL_Rect positionButton4;
};

typedef struct Enigme enigme;

int findIndex(char string[], char x);

void erase(char string[], int pos);

int riddle(enigme e, hero player, SDL_Surface *screen);
/*
		return 1 if the answer is True
		return 0 if the answer is False
		return -1 if the player did not play
*/

enigme fetchQuestion(char file_q[], char file_a[]);


int getSelection(enigme e, int *answer_selected);
/*
		return -1 if the player wants to quit
		return 0 if the player lock this answer
		return 1 if the player did not choise yet
*/
