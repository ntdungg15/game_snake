#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED
#include<bits/stdc++.h>
#include<SDL_mixer.h>
class sound
{
public:
    sound();
    //~sound();

    void addsound(char* path);
    void playsound(const int which) const;
private:

    std::vector<Mix_Chunk*>msound;
};


#endif // SOUND_H_INCLUDED
