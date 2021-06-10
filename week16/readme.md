16-1
```c
void setup()
{
  size(400,200);
}
void draw()
{
  background(#0b23b9);
  ellipse(50,50,80,80);
    //   圓心 寬 高
}
```
![](https://i.imgur.com/tVFZP8W.png)
16-2
```c
void setup()
{
  size(400,200);
}
void draw()
{
  background(#cb56b8);
  fill(255);
  ellipse(50,50,80,80);
    //   圓心 寬 高
  fill(255,130,0);
  float stop=mouseX/50.0;
  text(stop,100,100);//畫出字
  arc(50,50,80,80,0,stop);//畫出圓弧
}//   圖心  寬,高 始  終
```
![](https://i.imgur.com/qYXXL4h.png)
16-3
```c
void setup()
{
  size(400,200);
}
void draw()
{
  background(#cb56b8);
  fill(200);
  ellipse(50,50,80,80);
    //   圓心 寬 高
  fill(255,130,120);
  float start=mouseX/50.0;
  textSize(60);
  text(start,100,100);//畫出字
  arc(50,50,80,80,0+start,0.05+start);//畫出圓弧
}//   圖心  寬,高 始  終
```
![](https://i.imgur.com/BjAUUMx.png)
16-4
```c
void setup()
{
  size(300,300);
}
void draw()
{
  background(#cb56b8);
  fill(200);
  ellipse(150,150,180,180);
    //   圓心 寬 高
  fill(255,130,120);
  float start=mouseX/50.0;
  for(int i=0;i<24;i++)
  {
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#fff45e);
    if(i%3==2) fill(255);
    arc(150,150,180,180,shift+0+start,shift+PI/12+start);
    //   圖心 寬,高    始        終
  }
}
```
![](https://i.imgur.com/Xh8b1LC.png)
16-5
```c
void setup()
{
  size(300,300);
}
void draw()
{
  background(#cb56b8);
  fill(200);
  ellipse(150,150,180,180);
    //   圓心 寬 高
  fill(255,130,120);
  for(int i=0;i<24;i++)
  {
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#fff45e);
    if(i%3==2) fill(255);
    if(i==0) fill(#ef650d);
    arc(150,150,180,180,shift+0+start,shift+PI/12+start);
    //   圖心 寬,高    始        終
  }
}
```
![](https://i.imgur.com/0ps0lPW.png)
16-6
```c
void setup()
{
  size(300,300);
}
float start=0;
void draw()
{
  background(#cb56b8);
  fill(200);
  ellipse(150,150,180,180);
    //   圓心 寬 高
  fill(255,130,120);
  textSize(60);
  if(start<10)start+=0.01;
  text(start,10,50);
  for(int i=0;i<24;i++)
  {
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#fff45e);
    if(i%3==2) fill(255);
    if(i==0) fill(#ef650d);
    arc(150,150,180,180,shift+0+start,shift+PI/12+start);
    //   圖心 寬,高    始        終
  }
}
```
![](https://i.imgur.com/q33QNtf.png)
16-7
```c
void setup()
{
  size(300,300);
}
float start=0,v=0.10;//v=旋轉速度
void draw()
{
  background(#cb56b8);
  fill(200);
  fill(255,130,120);
  textSize(60);
  if(v>0.001)//速度很慢時，就停止轉動
  {
    start+=v;//位置 速度 加速度(位置會加上速度)
    v*=0.99;//摩擦力,會讓速度變慢,位置 速度 加速度(位置會加上加速度)
  }
  text(start,10,50);
  text(v,10,300);
  for(int i=0;i<24;i++)
  {
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#fff45e);
    if(i%3==2) fill(255);
    if(i==0) fill(#ef650d);
    arc(150,150,180,180,shift+0+start,shift+PI/12+start);
    //   圖心 寬,高    始        終
  }
}
```
![](https://i.imgur.com/p3eBYyG.png)
16-8
```c
void setup()
{
  size(300,300);
}
float start=0,v;//v=旋轉速度
void mousePressed()
{
  v=random(1);//隨機
}
void draw()
{
  background(#cb56b8);
  fill(200);
  fill(255,130,120);
  textSize(60);
  if(v>0.001)//速度很慢時，就停止轉動
  {
    start+=v;//位置 速度 加速度(位置會加上速度)
    v*=0.99;//摩擦力,會讓速度變慢,位置 速度 加速度(位置會加上加速度)
  }
  text(start,10,50);
  text(v,10,300);
  for(int i=0;i<24;i++)
  {
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#fff45e);
    if(i%3==2) fill(255);
    if(i==0) fill(#ef650d);
    arc(150,150,180,180,shift+0+start,shift+PI/12+start);
    //   圖心 寬,高           始              終
  }
}
```
![](https://i.imgur.com/U2aUF4Q.png)
