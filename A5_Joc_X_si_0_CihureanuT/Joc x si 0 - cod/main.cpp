#include<graphics.h>
#include<iostream>
#include<stdio.h>
#include<winbgim.h>
#include<stdlib.h>
void meniup(){

setbkcolor(BLACK);

setcolor(LIGHTGREEN);

cleardevice();

settextstyle(3,HORIZ_DIR,5);


outtextxy(265,300,"1. PLAY");

outtextxy(170,350,"2. HOW TO PLAY");

outtextxy(285,390,"3. QUIT");


readimagefile("unnamed.jpg",30,10,660,242);

readimagefile("x.jpg",10,400,250,600);

readimagefile("0.jpg",500,400,700,600);


readimagefile("and.jpg",270,440,450,590);

}

void imaginejoc(){

setcolor(GREEN);

readimagefile("fireworks.jpg",-20,0,150,200);
readimagefile("fireworks.jpg",570,0,750,200);
readimagefile("ribbon1.jpg",-80,165,180,640);
readimagefile("ribbon1.jpg",570,165,750,640);
readimagefile("ribbon.jpg",90,550,630,640);
int i=0;
while(i<5){

line(278+i,75,278+i,525);
line(428+i,75,428+i,525);

line(155,223+i,555,223+i);
line(155,373+i,555,373+i);
i++;
}
}
int nr=0, semn=0, r1=1, r2=1;
int a=1,b=1,c=1,d=1,e=1,f=1,g=1,h=1,i=1;

int v[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};

void castigator(unsigned short k){

if(v[0]==k && v[1]==k && v[2]==k){

semn++;

}

if(v[3]==k && v[4]==k&& v[5]==k){

semn++;
}

if(v[6]==k && v[7]==k&& v[8]==k){

semn++;

}

if(v[0]==k && v[3]==k&& v[6]==k){

semn++;

}

if(v[1]==k && v[4]==k&& v[7]==k){

semn++;

}

if(v[2]==k && v[5]==k && v[8]==k){

semn++;

}

if(v[2]==k && v[4]==k&& v[6]==k){

semn++;

}

if(v[0]==k&& v[4]==k && v[8]==k){

semn++;

}

if(semn>=1){

if(k==1){
cleardevice();
readimagefile("crown.jpg",30,0,710,270);
setcolor(YELLOW);
outtextxy(180,300,"PLAYER 1 WON!");
setcolor(CYAN);
outtextxy(100,500,"Please press escape to");
outtextxy(140,550,"return to main menu.");
}

if(k==0){
cleardevice();
readimagefile("crown.jpg",30,0,710,270);
setcolor(YELLOW);
outtextxy(180,300,"PLAYER 2 WON!");
setcolor(CYAN);
outtextxy(100,500,"Please press escape to");
outtextxy(140,550,"return to main menu.");
}

}else if(semn==0 && k==2){
cleardevice();
readimagefile("emoji.jpg",30,0,710,270);
setcolor(RED);
outtextxy(180,300,"NOBODY WON!");
setcolor(CYAN);
outtextxy(100,500,"Please press escape to");
outtextxy(140,550,"return to main menu.");



}}
void imaginixsio(unsigned short p){

int x1,y1,x2,y2;


if(p==1 && a==1){

x1=155;y1=85;x2=275;y2=215;

a++;

nr++;

}else if(p==2 && b==1){

x1=300;y1=85;x2=410;y2=215;

b++;

nr++;

}else if(p==3 && c==1){

x1=440;y1=85;x2=560;y2=215;

c++;

nr++;

}else if(p==4 && d==1){

x1=155;y1=235;x2=275;y2=365;

d++;

nr++;

}else if(p==5 && e==1){

x1=300;y1=235;x2=410;y2=365;

e++;

nr++;

}else if(p==6 && f==1){

x1=440;y1=235;x2=560;y2=365;

f++;

nr++;

}else if(p==7 && g==1){

x1=155;y1=385;x2=275;y2=515;

g++;

nr++;

}else if(p==8 && h==1){

x1=300;y1=385;x2=410;y2=515;

h++;

nr++;

}else if(p==9 && i==1){

x1=440;y1=385;x2=560;y2=515;

i++;

nr++;

}

if(v[p-1]==-1){

if(nr%2==0){

readimagefile("lettero.jpg",x1,y1,x2,y2);
v[p-1]=0;

castigator(0);

r1++;

}else{

readimagefile("letterx.jpg",x1,y1,x2,y2);
v[p-1]=1;

castigator(1);

r2++;

}

}

if(r1>=5 && r2>=6){

r1=1;

r2=1;

castigator(2);

}

}

void joc(){

int p=0;

while(1){

if(GetAsyncKeyState(VK_RETURN) && mousex()>=150 && mousex()<=270 && mousey()>=50 && mousey()<=200){

p=1;

imaginixsio(p);

}

if(GetAsyncKeyState(VK_RETURN) && mousex()>=290 && mousex()<=425 && mousey()>=50 && mousey()<=200){

p=2;

imaginixsio(p);

}

if(GetAsyncKeyState(VK_RETURN) && mousex()>=420 && mousex()<=750 && mousey()>=50 && mousey()<=200){

p=3;

imaginixsio(p);

}

if(GetAsyncKeyState(VK_RETURN) && mousex()>=150 && mousex()<=270 && mousey()>=230 && mousey()<=380){

p=4;

imaginixsio(p);

}

if(GetAsyncKeyState(VK_RETURN) && mousex()>=290 && mousex()<=425 && mousey()>=230 && mousey()<=380){

p=5;

imaginixsio(p);

}

if(GetAsyncKeyState(VK_RETURN) && mousex()>=420 && mousex()<=750 && mousey()>=230 && mousey()<=380){

p=6;
imaginixsio(p);

}

if(GetAsyncKeyState(VK_RETURN) && mousex()>=150 && mousex()<=270 && mousey()>=385 && mousey()<=560){

p=7;

imaginixsio(p);

}

if(GetAsyncKeyState(VK_RETURN) && mousex()>=290 && mousex()<=425 && mousey()>=385 && mousey()<=560){

p=8;

imaginixsio(p);

}

if(GetAsyncKeyState(VK_RETURN) && mousex()>=420 && mousex()<=750 && mousey()>=385 && mousey()<=560){

p=9;

imaginixsio(p);

}

if(GetAsyncKeyState(VK_ESCAPE)){
nr=0, semn=0, r1=1, r2=1;

a=1,b=1,c=1,d=1,e=1,f=1,g=1,h=1,i=1;

for(int i=0;i<9;i++){

v[i]=-1;
}

meniup();


break;

}
}

}

void marcaj(int a,int b,bool ok){

int p1=0;

int p2=0;


if(a==1){

p1=25;

p2=10;

}

if(a==2){

p1=-80;
p2=-115;

}

if(a==3){

p1=35;
p2=0;

}
if(a==4){

p1=200;
p2=-60;
}
if(a==5){

p1=-90;
p2=230;
}
if(ok==false){

setcolor(0);

}else
   setcolor(14);


char a1[2]={0};
char a2[2]={0};
a1[0]='x';
a2[0]='o';

outtextxy(173+p1,b,a1);
outtextxy(492-p2,b-3,a2);

}
void coordonator(int a);
void optiuni(){

int a=0;

for(unsigned int j=1;j<=INFINITE;j++){


if(ismouseclick(WM_MOUSEMOVE) && mousex()>=256 && mousex()<450 && mousey()>=290 && mousey()<=330){

marcaj(1,300,true);

marcaj(2,350,false);

marcaj(3,400,false);

a=1;

}

if(ismouseclick(WM_MOUSEMOVE) && mousex()>=266 && mousex()<=450 && mousey()>=350 && mousey()<=390){
marcaj(1,300,false);

marcaj(2,350,true);

marcaj(3,400,false);


a=2;

}

if(ismouseclick(WM_MOUSEMOVE) && mousex()>=266 && mousex()<=450 && mousey()>=400 && mousey()<=480){

marcaj(1,300,false);

marcaj(2,350,false);

marcaj(3,390,true);

a=3;
}
if(GetAsyncKeyState(VK_RSHIFT)){

coordonator(a);

}

}
}
void iesire(){

while(1){

if(ismouseclick(WM_MOUSEMOVE) && mousex()>=130 && mousex()<300 && mousey()>=300 && mousey()<=400){

marcaj(5,330,true);
marcaj(4,330,false);

if(GetAsyncKeyState(VK_RETURN)){

closegraph();
exit(0);
}
}

if(ismouseclick(WM_MOUSEMOVE) && mousex()>=400 && mousex()<530 && mousey()>=300 && mousey()<=400){

marcaj(5,330,false);
marcaj(4,330,true);


if(GetAsyncKeyState(VK_RETURN)){

meniup();
optiuni();

}
}


}

}
void coordonator(int a){

if(a==1){

cleardevice();

imaginejoc();

joc();

}
if(a==2){

cleardevice();

for(int i=1;i<=INFINITE;i++){

readimagefile("about.jpg",0,0,720,642);
if(GetAsyncKeyState(VK_ESCAPE)){

break;

}
}

meniup();
optiuni();
}
if(a==3){

cleardevice();

setcolor(CYAN);

settextstyle(3,HORIZ_DIR,5);
outtextxy(30,150,"Are you sure you want to quit?");

outtextxy(140,330,"YES");
outtextxy(440,330,"NO");

iesire();
}
}
int main(){

initwindow(720,642,"X si 0");

readimagefile("load.gif",100,180,600,400);

rectangle(205,330,510,375);

setcolor(4);
short i=0;

for(i=-44;i<=260;i+=2){

rectangle(250+i,332,250+i,374);

delay(20);

}

cleardevice();

meniup();

optiuni();


return 0;
}
