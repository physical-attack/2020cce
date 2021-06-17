17-1
```c
void setup()
{
  size(500,500);
  textSize(60);
}
String line="Hello";//字串
void draw()
{
  background(#5324ac);
  text(line,150,250);//可將字串line畫出來
  text("World",150,320);//也可將字串畫出來
}
```
![](https://i.imgur.com/SM0EtBz.png)

17-2
```c
void setup()
{
  size(500,500);
  textSize(60);
}
String line="Hello";//字串
char c='1';
void draw()
{
  background(#5324ac);
  text(line+c+100,150,250);//可將字串line畫出來
  text("World:"+key,150,320);//也可將字串畫出來
}//key會對應你最後按下鍵盤的鍵(字母 數 符)
```
![](https://i.imgur.com/0hQn1rG.png)

17-3
```c
void setup()
{
  size(500,500);
  textSize(60);
}
char c='5';
int win=0;//0:還沒win, 1:win
void draw()
{
  background(#5324ac);
  text("Press"+c,150,250);//可將字串line畫出來
  text("You :"+key,150,320);//也可將字串畫出來
  //key會對應你最後按下鍵盤的鍵(字母 數 符)
  if(c==key) win=1;
  else win=0;
  
  if(win==1) text("You win!",150,180);
}
```
![](https://i.imgur.com/WODJBCR.png)

17-4
```c
void setup()
{
  size(300,300);
  textSize(60);
}
char c='5';
String A="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";//Java的字串
int win=0;//0:還沒win, 1:win
void draw()
{
  background(#5324ac);
  text("Press"+c,80,120);//可將字串line畫出來
  text("You :"+key,80,200);//也可將字串畫出來
  //key會對應你最後按下鍵盤的鍵(字母 數 符)
  if(c==key) win=1;
  else win=0;
  
  if(win==1)
  {
    text("You win!",150,180);
    int i=int(random(26+26));
    c=A.charAt(i);
  }
}
```
![](https://i.imgur.com/PJjmHvQ.png)

17-5
```c
void setup()
{
  size(300,300);
  textSize(80);
}
int x=100,y=100;
void draw()
{
  background(#5324ad);
  rect(x,y,50,50);//畫方塊
}//Q:需求,左鍵 右鍵

void keyPressed()
{
  if(keyCode==LEFT) x-=10;
  if(keyCode==RIGHT) x+=10;
}
```
![](https://i.imgur.com/z1YL0DJ.png)

17-6
```c
void setup()
{
  size(300,300);
  textSize(80);
}
float x=100,y=100,vx=0,vy=0;
void draw()
{
  background(#5324ad);
  rect(x,y,50,50);//畫方塊
  x+=vx;
  y+=vy;
}//Q:需求,左鍵 右鍵
//last week教過 mousePressed()
void keyPressed()
{
  if(keyCode==LEFT) vx=-1;
  if(keyCode==RIGHT) vx=+1;
  if(keyCode==UP) vy=-1;
  if(keyCode==DOWN) vy=+1;
}
void keyReleased()
{
  vx=0;
  vy=0;
}
```
![](https://i.imgur.com/urL4W3n.png)

17-7
```c
String A="mother";
String line="";

void setup()
{
  size(500,300);
  textSize(60);
}
void draw()
{
  background(0);
  text(A,100,100);
  text(line+"|",100,180);
}
void keyPressed()
{
  line=line+key;
}
```
![](https://i.imgur.com/TQUp1Nl.png)

17-8
```c
String A="mother";
String line="";

void setup()
{
  size(500,300);
  textSize(60);
}
void draw()
{
  background(0);
  text(A,100,100);
  text(line+"|",100,180);
}
void keyPressed()
{
  int len=line.length();//原字的長度
  if(key>='a'&& key<='z') line=line+key;//小寫
  if(key>='A'&& key<='Z') line=line+key;//大寫
  if(key==ENTER){    }//比對字是否正確
  if(key==BACKSPACE && len>0) line=line.substring(0,len-1);//倒退刪掉
}
```
![](https://i.imgur.com/oIdTMEe.png)
