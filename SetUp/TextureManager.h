#include "SDL.h"

#ifndef LOG_TEXTUREMANAGER_H
#define LOG_TEXTUREMANAGER_H


class TextureManager {

public:
    static SDL_Texture *LoadTexture(const char *filename);
    static void Draw(SDL_Texture *text, SDL_Rect pos);

};


#endif //LOG_TEXTUREMANAGER_H
