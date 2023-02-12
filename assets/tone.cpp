#include "splashkit.h"
void draw_my_creation()
{
    clear_screen(COLOR_WHITE);
    load_bitmap("ember spirit", "ember spirit.png");
    load_sound_effect("call-me-ember-spirit","call-me-ember-spirit.wav");

    draw_bitmap("ember spirit",600, 400);
    refresh_screen(60);
    play_sound_effect("call-me-ember-spirit");
}
void draw_second()
{
    clear_screen(COLOR_BLACK);
    load_bitmap("Team Nigma", "job.png");
    load_sound_effect("intro sound","demon-slayer.wav");
    draw_bitmap("Team Nigma",0,0);
    refresh_screen(60);
    play_sound_effect("intro sound");
}


int main()
{ 
    open_window("For task 1.3 C",1920, 1080);
    draw_my_creation();
    delay(4000);

    draw_second();
    delay(25000);



    return 0;
}