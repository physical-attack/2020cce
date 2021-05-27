14-1
```c
//可對有色彩的字點右鍵
void setup()//設定，只做一次
{
  float A=random(60);
  text(A,20,20);
}
void draw()//畫圖，每秒60次
{
  
}
```
![](https://i.imgur.com/ygD1uZF.png)
14-2
```c
int A=0;
void setup()//設定，只做一次
{
  size(1000,500);
  A=(int)random(60);
  textSize(80);
}
void draw()//畫圖，每秒60次
{
  background(#135FF7);
  text(A,200,300);
}
void mousePressed()//按下去，就互動1次
{
  A=(int)random(60);//浮點數不能直接變整數
}
```
![](https://i.imgur.com/hWoef2J.png)
14-3
```c
//int a[]={1,2,3,4,5,6,7,8,9,10};//C
int []a={1,2,3,4,5,6,7,8,9,10};//Java
int i1,i2;
void setup()
{
  size(400,100);
  textSize(30);
}
void draw()
{
  background(#135FF7);
  for(int i=0;i<10;i++)
  {
    text(a[i],i*40,50);
  }
  rect(i1*40,50,40,40);
  rect(i2*40,50,40,40);
}
void mousePressed()
{
  i1=(int)random(10);
  i2=(int)random(10);
  int t=a[i1]; a[i1]=a[i2]; a[i2]=t;//選的兩數做交換
}
```
![](https://i.imgur.com/NizHXjY.jpg)
14-4
```c
int []a=new int [47];//Java的陣列
//int []a={1~46};
void setup()
{
  size(500,200);//大一點
  textSize(30);
  for(int i=0;i<47;i++) a[i]=i;
  //讓 a[i]的陣列裡，要先放整齊對應的數字
  for(int i=0;i<1000;i++)//洗牌1000次
  {
    int i1=(int)random(47);
    int i2=(int)random(47);
    int t=a[i1]; a[i1]=a[i2]; a[i2]=t;
  }//作弊，先洗好牌，先知道得獎號碼，等下再掉出來
}
void draw()
{
  background(#13CBA0);
  for(int i=0;i<5;i++)//亮出前5張牌
  {
    text(a[i],i*80,100);
  }
}
```
![](https://i.imgur.com/Dov84Zq.png)
14-5
```c
int []a=new int [47];//Java的陣列
//int []a={1~46};
void setup()
{
  size(1000,500);//大一點
  textSize(30);
  for(int i=0;i<47;i++) a[i]=i;
  //讓 a[i]的陣列裡，要先放整齊對應的數字
  for(int i=0;i<1000;i++)//洗牌1000次
  {
    int i1=(int)random(47);
    int i2=(int)random(47);
    int t=a[i1]; a[i1]=a[i2]; a[i2]=t;
  }//作弊，先洗好牌，先知道得獎號碼，等下再掉出來
}
int N=0;
void draw()
{
  background(#13CBA0);
  for(int i=0;i<N;i++)
  {
    text(a[i],i*80,100);
  }
}
void mousePressed()//利用mousePressed互動，決定亮幾顆
{
  N++;
}
```
![](https://i.imgur.com/5fZVgaf.png)
14-6
```c
int []a=new int [47];//Java的陣列
//int []a={1~46};
void setup()
{
  size(1000,500);//大一點
  textSize(30);
  for(int i=0;i<47;i++) a[i]=i;
  //讓 a[i]的陣列裡，要先放整齊對應的數字
  for(int i=0;i<1000;i++)//洗牌1000次
  {
    int i1=(int)random(47);
    int i2=(int)random(47);
    int t=a[i1]; a[i1]=a[i2]; a[i2]=t;
  }//作弊，先洗好牌，先知道得獎號碼，等下再掉出來
}
int N=0;
void draw()
{
  textAlign(CENTER,CENTER);//文字對齊:中ˋ中
  background(#13CBA0);
  for(int i=0;i<N;i++)
  {
    fill(255); ellipse( i*80+40,100,55,55);//球
    fill(0);   text(a[i],i*80+40,100);//字
  }
}
void mousePressed()//利用mousePressed互動，決定亮幾顆
{
  N++;
}
```
![](https://i.imgur.com/lYMIkyQ.png)