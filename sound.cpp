#include"sound.h"
#include"SDL.h"
sound::sound()
{
    SDL_Init(SDL_INIT_AUDIO);
    int audio_rate = 22050;
    Uint16 audio_format = AUDIO_S16SYS;
    int audio_c = 2;
    int audio_b = 4096;
   if(Mix_OpenAudio(audio_rate,audio_format,audio_c,audio_b)!=0)
   {
       exit(-1);
   }
}
void sound::addsound(char* path)
{

    Mix_Chunk* tmp = Mix_LoadWAV(path);
    if (tmp != nullptr)
    {
        msound.push_back(tmp);
    }
    else{
        std:: cout << "loiiii";
    }
}
void sound::playsound(const int which) const
{
    if(which>msound.size()-1)
    {
        std::cout <<"dfgh";
    }
    Mix_PlayChannel(-1,msound[which],-1);
}
