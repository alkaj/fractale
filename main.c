//La boule de neige!!!!.....c'est la version AL KAJ bien entendu!

#include "nuitsBlanches.h" //ma super bibliotheque....elle porte bien son nom!
#define W 600 //Largeur de la planche a dessin
#define H 600 //Hauteur de la planche a dessin
#define RANG 2


int main(int argc,char** argv){
    int encorre=1;
    while (encorre){//control de tout le programme!!
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Surface* tableau;
    tableau=SDL_SetVideoMode(W,H,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Ma Super Boule",NULL);
    //les points du triangle initial!!!
        Point p1=point(tableau->w/2,10);
        Point p2=point(10,tableau->h-60);
        Point p3=point(tableau->w-10,tableau->h-60);
    //"instanciation" du triangle initial
        Triangle t=triangle(p1,p2,p3);
        SDL_Surface* maphoto=NULL;
        maphoto=SDL_LoadBMP("images/fond.bmp");
        SDL_Rect pos,execpos,quitpos,attendsp;
        pos.x=1;
        attendsp.x=50;
        pos.y=1;
        attendsp.y=550;
        SDL_WM_SetIcon(SDL_LoadBMP("images/icon.bmp"),NULL);
        SDL_BlitSurface(maphoto,NULL,tableau,&pos);

        SDL_Surface *texte=NULL,*execi=NULL,*quiti=NULL,*dislui=NULL,*vide=NULL,*atends=NULL;
        pos.x=100;
        pos.y=10;

        texte=SDL_LoadBMP("images/bienvenue.bmp");
        quiti=SDL_LoadBMP("images/exit.bmp");
        execi=SDL_LoadBMP("images/go.bmp");
        vide=SDL_LoadBMP("images/vide.bmp");
        dislui=SDL_LoadBMP("images/dislui.bmp");
        atends=SDL_LoadBMP("images/attends.bmp");

        quitpos.x=0;
        execpos.x=0;
        quitpos.y=0;
        execpos.y=0;
        SDL_BlitSurface(texte,NULL,tableau,&pos);
        pos.x=40;
        pos.y=400;
        SDL_BlitSurface(dislui,NULL,tableau,&pos);
        SDL_Flip(tableau);
        pos.x=1;
        pos.y=1;

    SDL_Event e;
    SDL_Delay(250);
    int continu=1;
    while (continu){
        SDL_WaitEvent(&e);
        switch (e.type){
        case SDL_QUIT:
            continu=0;
            encorre=0;
            break;
        case SDL_KEYDOWN:
            switch(e.key.keysym.sym){
                case SDLK_0:
                    SDL_BlitSurface(maphoto,NULL,tableau,&pos);
                    SDL_BlitSurface(atends,NULL,tableau,&attendsp);
                    SDL_Flip(tableau);
                    chaineT(t,0);
                    quitpos.x=100;
                    execpos.x=450;
                    quitpos.y=555;
                    execpos.y=550;
                    SDL_BlitSurface(vide,NULL,tableau,&attendsp);
                    SDL_BlitSurface(quiti,NULL,tableau,&quitpos);
                    SDL_BlitSurface(execi,NULL,tableau,&execpos);
                    SDL_Flip(tableau);
                    break;
                case SDLK_1:
                    SDL_BlitSurface(maphoto,NULL,tableau,&pos);
                    SDL_BlitSurface(atends,NULL,tableau,&attendsp);
                    SDL_Flip(tableau);
                    chaineT(t,1);
                    quitpos.x=100;
                    execpos.x=450;
                    quitpos.y=555;
                    execpos.y=550;
                    SDL_BlitSurface(vide,NULL,tableau,&attendsp);
                    SDL_BlitSurface(quiti,NULL,tableau,&quitpos);
                    SDL_BlitSurface(execi,NULL,tableau,&execpos);
                    SDL_Flip(tableau);
                    break;
                case SDLK_2:
                    SDL_BlitSurface(maphoto,NULL,tableau,&pos);
                    SDL_BlitSurface(atends,NULL,tableau,&attendsp);
                    SDL_Flip(tableau);
                    chaineT(t,2);
                    quitpos.x=100;
                    execpos.x=450;
                    quitpos.y=555;
                    execpos.y=550;
                    SDL_BlitSurface(vide,NULL,tableau,&attendsp);
                    SDL_BlitSurface(quiti,NULL,tableau,&quitpos);
                    SDL_BlitSurface(execi,NULL,tableau,&execpos);
                    SDL_Flip(tableau);
                    break;
                case SDLK_3:
                    SDL_BlitSurface(maphoto,NULL,tableau,&pos);
                    SDL_BlitSurface(atends,NULL,tableau,&attendsp);
                    SDL_Flip(tableau);
                    chaineT(t,3);
                    quitpos.x=100;
                    execpos.x=450;
                    quitpos.y=555;
                    execpos.y=550;
                    SDL_BlitSurface(vide,NULL,tableau,&attendsp);
                    SDL_BlitSurface(quiti,NULL,tableau,&quitpos);
                    SDL_BlitSurface(execi,NULL,tableau,&execpos);
                    SDL_Flip(tableau);
                    break;
                case SDLK_4:
                    SDL_BlitSurface(maphoto,NULL,tableau,&pos);
                    SDL_BlitSurface(atends,NULL,tableau,&attendsp);
                    SDL_Flip(tableau);
                    chaineT(t,4);
                    quitpos.x=100;
                    execpos.x=450;
                    quitpos.y=555;
                    execpos.y=550;
                    SDL_BlitSurface(vide,NULL,tableau,&attendsp);
                    SDL_BlitSurface(quiti,NULL,tableau,&quitpos);
                    SDL_BlitSurface(execi,NULL,tableau,&execpos);
                    SDL_Flip(tableau);
                    break;
                case SDLK_5:
                    SDL_BlitSurface(maphoto,NULL,tableau,&pos);
                    SDL_BlitSurface(atends,NULL,tableau,&attendsp);
                    SDL_Flip(tableau);
                    chaineT(t,5);
                    quitpos.x=100;
                    execpos.x=450;
                    quitpos.y=555;
                    execpos.y=550;
                    SDL_BlitSurface(vide,NULL,tableau,&attendsp);
                    SDL_BlitSurface(quiti,NULL,tableau,&quitpos);
                    SDL_BlitSurface(execi,NULL,tableau,&execpos);
                    SDL_Flip(tableau);
                    break;
                case SDLK_6:
                    SDL_BlitSurface(maphoto,NULL,tableau,&pos);
                    SDL_BlitSurface(atends,NULL,tableau,&attendsp);
                    SDL_Flip(tableau);
                    chaineT(t,6);
                    quitpos.x=100;
                    execpos.x=450;
                    quitpos.y=555;
                    execpos.y=550;
                    SDL_BlitSurface(vide,NULL,tableau,&attendsp);
                    SDL_BlitSurface(quiti,NULL,tableau,&quitpos);
                    SDL_BlitSurface(execi,NULL,tableau,&execpos);
                    SDL_Flip(tableau);
                    break;
                case SDLK_7:
                    SDL_BlitSurface(maphoto,NULL,tableau,&pos);
                    SDL_BlitSurface(atends,NULL,tableau,&attendsp);
                    SDL_Flip(tableau);
                    chaineT(t,7);
                    quitpos.x=100;
                    execpos.x=450;
                    quitpos.y=555;
                    execpos.y=550;
                    SDL_BlitSurface(vide,NULL,tableau,&attendsp);
                    SDL_BlitSurface(quiti,NULL,tableau,&quitpos);
                    SDL_BlitSurface(execi,NULL,tableau,&execpos);
                    SDL_Flip(tableau);
                    break;
                case SDLK_8:
                    SDL_BlitSurface(maphoto,NULL,tableau,&pos);
                    SDL_BlitSurface(atends,NULL,tableau,&attendsp);
                    SDL_Flip(tableau);
                    chaineT(t,8);
                    quitpos.x=100;
                    execpos.x=450;
                    quitpos.y=555;
                    execpos.y=550;
                    SDL_BlitSurface(vide,NULL,tableau,&attendsp);
                    SDL_BlitSurface(quiti,NULL,tableau,&quitpos);
                    SDL_BlitSurface(execi,NULL,tableau,&execpos);
                    SDL_Flip(tableau);
                    break;
                case SDLK_9:
                    SDL_BlitSurface(maphoto,NULL,tableau,&pos);
                    SDL_BlitSurface(atends,NULL,tableau,&attendsp);
                    SDL_Flip(tableau);
                    chaineT(t,9);
                    quitpos.x=100;
                    execpos.x=450;
                    quitpos.y=555;
                    execpos.y=550;
                    SDL_BlitSurface(vide,NULL,tableau,&attendsp);
                    SDL_BlitSurface(quiti,NULL,tableau,&quitpos);
                    SDL_BlitSurface(execi,NULL,tableau,&execpos);
                    SDL_Flip(tableau);
                    break;
                case SDLK_ESCAPE:
                    continu=0;
                    encorre=0;
                    break;
                    case SDLK_BACKSPACE:
                    continu=0;
                    break;
                default:
                    break;
            }
            break;
        case SDL_MOUSEBUTTONUP:
            if (((e.button.x>=quitpos.x+2) && (e.button.x<=quitpos.x+50))&&((e.button.y>=quitpos.y+2) && (e.button.y<=quitpos.y+40))){
                continu=0;
                encorre=0;
            }
            if (((e.button.x>=execpos.x+4) && (e.button.x<=execpos.x+60))&&((e.button.y>=execpos.y+2) && (e.button.y<=execpos.y+40)))continu=0;
            break;
        }
    }//fin de la boucle d'evenement
    SDL_FreeSurface(texte);
    SDL_FreeSurface(maphoto);
    SDL_FreeSurface(quiti);
    SDL_FreeSurface(execi);
    SDL_FreeSurface(vide);
    SDL_FreeSurface(atends);
    SDL_Quit();

    }//fin du while principal
    return EXIT_SUCCESS;
}//fin du programme principal
