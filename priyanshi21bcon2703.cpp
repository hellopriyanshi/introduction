#include<iostream.h>
#include<conio.h>
#define pi 3.14
void main()
{
  clrscr();
  int r;
  float A , C;
  cout<<"enter the radius(r) of the circle :";
  cin>>r;
  A=pi*r*r;
  C=2*pi*r;
  cout<<"the area A of the circle is :"<<A<<"\n"<<"the circumference C of the circle is :"<<C<<"\n";
  getch();
}
