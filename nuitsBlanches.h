#ifndef NUITSBLANCHES_H_INCLUDED
#define NUITSBLANCHES_H_INCLUDED

#include<stdio.h>
#include<SDL/SDL.h>
#include<math.h>

#define Min(a,b) a<b?a:b
#define Max(a,b) a>b?a:b
#define NOIR SDL_MapRGB(SDL_GetVideoSurface()->format, 0, 0, 0)

//@ Les structures de donnees de ma boule
//le point
typedef struct{
    int x;
    int y;
}Point;
//le triangle
typedef struct{
    Point s;
    Point b1;
    Point b2;
}Triangle;
//@ Les fonctions se charger de faire le travail demande...ah j'aurais aime dire les methodes(la POO me manque!)
//creation du point
Point point(int,int);

//creation du triangle
Triangle triangle(Point,Point,Point);

//calcul des coordonnees du point milieu entre p1 et p2
Point pointMilieu(Point,Point);

//division primaire du triangle
Triangle* diviser(Triangle);

//desin d'un point
void dpoint(Point,Uint32);

//dessin d'une ligne
void trace(Point,Point,Uint32);

//dessinons un triangle
void dTriangle(Triangle,Uint32);

//Nombre de triangles contenus dans la boule!!!
long nbTriangles(int);

//Verifie si un nombre est une puissance de 4
int powOf4(long);

//Enfin la derniere phase de calcul....et la plus interessante: LE DESSIN DE LA BOULE!
void chaineT(Triangle,int);

#endif // NUITSBLANCHES_H_INCLUDED                                                                                                                                                                                          copyrights 2014 KAMLA Junior; release:06-06-2014
