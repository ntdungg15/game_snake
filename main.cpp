#include <bits/stdc++.h>
#include "motchut.h"
#include "SDL_image.h"
#include"SDL_mixer.h"
#include"sound.h"
#include"SDL.h"
using namespace std;


int main(int argc, char *argv[])
{

    sound se;
    se.addsound("nhac.mp3");
    int choice = 0;
        se.playsound(choice);
        Game game = Game();
        Game().Run();
        cout << "Game has terminated successfully, score: " << game.GetScore()
        << ", size: " << game.GetSize() << endl;

    return 0;
}
