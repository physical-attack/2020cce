13-1
```c
size(1024,400);
background(110,232,242);
```
![](https://i.imgur.com/2RNR6wn.png)
13-2
```c
void setup()//只做一次的設定
{
  size(1024,400);
}
void draw()//互動版本，每秒畫60次
{
  if(mousePressed) background(255,0,255);
  else background(110,232,242);
}
```
![](https://i.imgur.com/M6o8XJd.png)
13-3
```c
void setup()//只做一次的設定
{
  size(1024,400);
}
void draw()//互動版本，每秒畫60次
{
  if(mousePressed) background(255,0,255);
  else background(110,232,242);
  text(a,512,200);//畫出文字
}
int a=0;
void mousePressed()
{
  a++;///每點一下，a值增加
}
```
![](https://i.imgur.com/80CCURP.png)
13-4
```c
void setup()//只做一次的設定
{
  size(1024,400);
}
void draw()//互動版本，每秒畫60次
{
  if(mousePressed) background(255,0,255);
  else background(110,232,242);
  textSize(72);//文字的大小
  text("Now a is:"+a,512,200);//畫出文字
}
int a=0;
void mousePressed()
{
  a++;//每點一下，a值增加
}
```
![](https://i.imgur.com/w1TnNuV.png)
13-5
```c
void setup()//開新的
{
  size(1024,400);
}
void draw()
{
  background(#92F2FA);//色碼
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23
  textSize(80);
  text( h + " : " + m + " : " + s , 100 , 200);
}    //數字  字串  數字  字串  數字
```
![](https://i.imgur.com/YBZL1ac.png)
13-6
```c
void setup()//開新的
{
  size(1024,400);
}
void draw()
{
  background(#92F2FA);//色碼
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23
  textSize(80);
     //數字  字串  數字  字串  數字
  text( h + " : " + m + " : " + s , 100 , 200);
  int total=s+60*m+60*60*h;//現在總秒數
  int closeH=17,closeM=40,closeS=0;//下課的時間
  int total2=closeS+60*closeM+60*60*closeH;//目標總秒數
  int A=total2-total;
  text("剩下幾秒:" +A,100,100);
}
```
![](https://i.imgur.com/gQSLPDG.png)
13-7
```c
void setup()//開新的
{
  size(1024,400);
  textFont(createFont("標楷體",80));
}
void draw()
{
  background(#92F2FA);//色碼
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23
  textSize(80);
     //數字  字串  數字  字串  數字
  text( h + " : " + m + " : " + s , 100 , 200);
  int total=s+60*m+60*60*h;//現在總秒數
  int closeH=17,closeM=40,closeS=0;//下課的時間
  int total2=closeS+60*closeM+60*60*closeH;//目標總秒數
  int A=total2-total;
  text("剩下幾秒:" +A,100,100);
  int AH=A/60/60%60,AM=A/60%60,AS=A%60;//找零錢
  text(AH+":"+AM+":"+AS,100,300);//剩下時間
}
```
![](https://i.imgur.com/IV1yQOY.png)