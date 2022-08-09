#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
void civil();
void semesterlist(int,int);
char name[100],fathername[100],rollnumber[100],serialnumber[10],grades[10],str[10];
int creditmarks[10],i,totalearn=0,earnmarks[10],choicesemester,choicecourse,x,y;
void input()
{
fflush(stdin);
outtextxy(50,20,"1.enter the name of student\n");
gotoxy(7,3);
gets(name);
outtextxy(50,50,"2.enter the student father name\n");
gotoxy(7,5);
gets(fathername);
outtextxy(50,80,"3.enter the student roll_number\n");
gotoxy(7,7);
scanf("%s",&rollnumber);
outtextxy(50,110,"4.enter the collage serial number\n");
gotoxy(7,9);
scanf("%s",&serialnumber);
outtextxy(50,142,"5.enter the student earn marks\n");
for(i=0; i<=7; i++)
{
gotoxy(7,11+i);
scanf("%d",&earnmarks[i]);
totalearn=totalearn+earnmarks[i];
}
outtextxy(50,285,"6.enter the grade");
for(i=0; i<=7; i++)
{
gotoxy(7,19+i);
scanf("\n%c",&grades[i]);
}
}
void rgpvlogo()
{
rectangle(50,300,150,450);
line(150,200,150,450);
line(300,200,300,450);
rectangle(300,300,400,450);
rectangle(40,450,410,460);
line(150,240,60,240);
line(40,300,150,300);
line(60,240,40,300);
//second
line(300,240,390,240);
line(300,300,410,300);
line(390,240,410,300);
//roop
line(150,200,225,150);  ///
line(225,150,300,200);  //\
line(130,200,225,140); ///
line(225,140,320,200); //\
line(150,200,130,200); //-
line(300,200,320,200);
//flag
line(225,140,225,100);
line(225,100,250,100);
line(225,110,250,110);
line(225,120,250,120);
//line(225,130,250,130);
line(250,100,250,120);
circle(225,200,20);
circle(225,200,2);
line(225,200,240,200);
line(225,200,217,190);
rectangle(175,370,280,380);
rectangle(180,385,200,450);
rectangle(205,385,225,450);
rectangle(230,385,250,450);
rectangle(255,385,275,450);
//settextstyle(8,0,2);
setcolor(YELLOW);
outtextxy(200,350,"R.G.P.V");
setcolor(WHITE);
rectangle(170,250,190,270);
rectangle(200,250,220,270);
rectangle(230,250,250,270);
rectangle(260,250,280,270);
//second window
rectangle(170,300,190,320);
rectangle(200,300,220,320);
rectangle(230,300,250,320);
rectangle(260,300,280,320);
//settextstyle(6,0,1);
}
void welcome(int x,int y)
{
//setfillstyle(SOLID_FILL,9);
//floodfill(0,0,WHITE);
rectangle(0,0,x,y);
setcolor(YELLOW);
outtextxy(200,50,"welcome to the RGPV site");
outtextxy(190,70,"pls press Enter for continue");
setcolor(WHITE);
rgpvlogo();
}
void loading()
{
gotoxy(30,10);
printf("please wait a second\n");
gotoxy(15,12);
printf("Loading");
gotoxy(23,12);
for(int i=0; i<50; i++)
{
printf(".");
delay(50);
}
}
void loadingcircle()
{
gotoxy(23,5);
printf("Your marksheet is creating");
for(i=0;i<=360;++i)
{
circle(300,200,80);
pieslice(300,200,0,i,80);
outtextxy(200,320,"Loading.....Please Wait!");
delay(20);
}
}
void subject()
{
//setcolor(RED);
outtextxy(150,275,"Engineering physics");
outtextxy(150,290,"Energy Enviroment");
outtextxy(150,307,"Basic Mechenical");
outtextxy(150,323,"Basic Civil Engg.");
outtextxy(150,340,"Basic Computer Engg.");
outtextxy(150,358,"Engineering Physics");
outtextxy(150,373,"Basic Mechanecial Engg.");
outtextxy(150,387,"Basic Civil Engg.");
setcolor(WHITE);
}
void markcredit()
{
outtextxy(400,275,"4");
outtextxy(400,290,"4");
outtextxy(400,307,"4");
outtextxy(400,323,"4");
outtextxy(400,340,"4");
outtextxy(400,358,"2");
outtextxy(400,373,"2");
outtextxy(400,387,"2");
}
void markearned()
{
sprintf(str,"%d",earnmarks[0]);
outtextxy(500,275,str);
sprintf(str,"%d",earnmarks[1]);
outtextxy(500,290,str);
sprintf(str,"%d",earnmarks[2]);
outtextxy(500,307,str);
sprintf(str,"%d",earnmarks[3]);
outtextxy(500,323,str);
sprintf(str,"%d",earnmarks[4]);
outtextxy(500,340,str);
sprintf(str,"%d",earnmarks[5]);
outtextxy(500,358,str);
sprintf(str,"%d",earnmarks[6]);
outtextxy(500,373,str);
sprintf(str,"%d",earnmarks[7]);
outtextxy(500,387,str);
}
void grade()
{
sprintf(str,"%c",grades[0]);
outtextxy(600,275,strupr(str));
sprintf(str,"%c",grades[1]);
outtextxy(600,290,strupr(str));
sprintf(str,"%c",grades[2]);
outtextxy(600,307,strupr(str));
sprintf(str,"%c",grades[3]);
outtextxy(600,323,strupr(str));
sprintf(str,"%c",grades[4]);
outtextxy(600,340,strupr(str));
sprintf(str,"%c",grades[5]);
outtextxy(600,358,strupr(str));
sprintf(str,"%c",grades[6]);
outtextxy(600,373,strupr(str));
sprintf(str,"%c",grades[7]);
outtextxy(600,388,strupr(str));
}
void courseoffer()
{
outtextxy(160,50,"List of B.Tech course for create the marksheet");
line(150,63,535,63);
outtextxy(100,100,"1.Civil Engineering");
outtextxy(100,120,"2.Computer Scinece and Engineering");
outtextxy(100,140,"3.Electrical and Electronics Engineering");
outtextxy(100,160,"4.Computer Science and Business System");
outtextxy(100,180,"5.Artificial Intelligence and Machine Learning");
outtextxy(100,200,"6.Information Technology");
outtextxy(100,220,"7.Mechanical Engineering");
outtextxy(100,240,"8.Automobile Engineering");
outtextxy(100,260,"9.Computer Science And Engineering(Data Science");
outtextxy(100,280,"10.Syber security");
}
void semesterlist(int x,int y)
{
rectangle(0,0,x,y);
outtextxy(200,30,"List of Semester B-Tech");
rectangle(180,27,400,40);
outtextxy(150,80,"1.First Semester");
outtextxy(150,100,"2.Second Semester");
outtextxy(150,120,"3.Thired Semester");
outtextxy(150,140,"4.Fourth Semester");
outtextxy(150,160,"5.Fifth Semester");
outtextxy(150,180,"6.Six Semester");
outtextxy(150,200,"7.Seventh Semester");
outtextxy(150,220,"8.Eight Semester");
outtextxy(200,250,"Pls enter the choice");
line(180,260,380,260);
}
void createmarksheet(int x,int y)
{
rectangle(0,0,x,y);
rectangle(70,5,x-100,50);
gotoxy(15,2);
printf("RAJIV GANDHI PROUDYOGIKI VISHWAVIDYALYA ,BHOPAL");
gotoxy(17,3);
printf("(UNIVERSITY OF TECHNOLOGY OF MADHYA PREDESH)");
setfillstyle(SOLID_FILL,RED);
rectangle(200,60,370,80);
floodfill(250,70,WHITE);
gotoxy(28,5);
printf("STATEMENT OF GRADE");
gotoxy(27,7);
printf("EXAMINATION DEC-2021");
gotoxy(23,8);
printf("B.E.(Mechanical Engineering)");
gotoxy(60,6);
printf("SR No. %s",serialnumber);
gotoxy(5,10);
printf("ROLL NO   :%s",strupr(rollnumber));
gotoxy(5,11);
printf("NAME      :%s",strupr(name));
gotoxy(5,12);
printf("           S/O/WO %s",strupr(fathername));
gotoxy(5,13);
printf("INSTT.    :ORIENTAL INSTITUDE OF SCIENCE & TECHNOLOGY");
rectangle(x-60,120,x-120,180);
gotoxy(67,10);
printf("PHOTO");
gotoxy(5,14);
printf("SEMESTER  :FIRST");
gotoxy(63,14);
printf("STATUS: REGULAR");
gotoxy(74,16);
printf("GRADE");
outtextxy(x-200,233,"CREDITE");
line(350,y-235,x-60,y-235);
outtextxy(x-280,255,"TOTAL CREDITE");
line(x-174,245,x-174,y-65);
outtextxy(x-170,255,"CREDIT EARNED");
rectangle(10,y-250,x-10,y-5);  //big rectangle
rectangle(10,y-250,x-10,y-210);
line(135,y-250,135,y-65); //frist line
line(x-60,y-250,x-60,y-65); //second line
line(350,y-250,350,y-65);
gotoxy(5,16);
printf("SUBJECT CODE");
for(int i=1; i<10; i++)
{
if(i<=5)
{
gotoxy(6,17+i);
printf("BE20%d[T]",i);
}
else
{
gotoxy(6,16+i);
printf("BE20%d[P]",i);
}
}
//setcolor(BLUE);
gotoxy(25,16);
printf("SUBJECT NAME");
rectangle(10,y-80,x-10,y-2); //small big rectangle
rectangle(10,y-80,x-10,y-65);  //small rectangle
rectangle(10,y-80,x-10,y-50);//small rectangle
//subject();
//markcredit();
//markearned();
outtextxy(200,403,"TOTAL");
outtextxy(400,403,"30");
sprintf(str,"%d",totalearn);
outtextxy(500,403,str);
outtextxy(50,420,"RESULT :");
outtextxy(150,420,"PASS");
outtextxy(250,420,"SGPA :6.89");
outtextxy(400,420,"CGPA(As on Date)  :6.58");
outtextxy(10,433,"issue Date : 5/12/2021");
outtextxy(13,455,"Prepared By");
outtextxy(130,455,"CHECKED By");
outtextxy(240,455,"Signature of principal");
outtextxy(240,465,"and seal of institude");
outtextxy(430,455,"Controller of Examination");
outtextxy(480,465,"(RGPV,Bhopal)");
}


void setcourse()
{
outtextxy(100,300,"....pls enter the choice for create the marksheet...");
gotoxy(15,21);
printf("Enter the choice:-");
gotoxy(34,21);
scanf("%d",&choicecourse);
civil();/*
switch(choicecourse)
{
case 1:
{
civil();
break;
}
case 2:
{
computer_science();
break;
}
case 3:
{
electrical();
break;
}
case 4:
{
business_system();
break;
}
case 5:
{
artificial_intelligence();
break;
}
case 6:
{
information_technology();
break;
}
case 7:
{
mechanical();
break;
}
case 8:
{
automobile();
break;
}
case 9:
{
data_science();
break;
}
case 10:
{
syber_security();
break;
}
default :
{
gotoxy(25,23);
printf("wrong choise");
}
}     */
}


void civil()
{
cleardevice();
semesterlist(x,y);
gotoxy(18,18);
printf("Enter the choice:-");
gotoxy(37,18);
scanf("%d",&choicesemester);
/*
switch(choicesemester)
{
case 1:
{
firstsemester();
}
case 2:
{
secondsemester();
}
case 3:
{
thirdsemester();
}
case 4:
{
fouthsemester();
}
case 5:
{
fifthsemester();
}
case 6:
{
sixthsemester();
}
case 7:
{
seventhsemester();
}
case 8:
{
eightsemester();
}
default :
{
gotxy(25,20);
printf("wrong choice");
}
} */
}


void main()
{
int gm,gd=DETECT,a,i,choice;
initgraph(&gd,&gm,"C:\Program Files\CodeBlocks\MinGW");
cleardevice();
x=getmaxx();
y=getmaxy();
welcome(x,y);
getch();
cleardevice();
loading();
cleardevice();
courseoffer();
setcourse();
cleardevice();
input();
cleardevice();
loadingcircle();
cleardevice();
	   //create marksheet
createmarksheet(x,y);
subject();
markcredit();
markearned();
grade();
getch();
closegraph();
}

