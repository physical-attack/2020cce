15-1
```c
void setup()//設定只做1次
{
  size(400,200);
}
void draw()//畫圖，每秒60frame
{
  int s=second();//0~59
  if(s%2==0) background(255,255,255);
  else background(0,0,0);
}
```
![](https://i.imgur.com/i6I2mqn.png)
15-2
```c
void setup()//設定只做1次
{
  size(400,200);
  textSize(40);
}
void draw()//畫圖，每秒60frame
{
  int s=second();//0~59
  background(3,252,234);
  text(10-s%11,100,100);
}      //59~0
```
![](https://i.imgur.com/iRZXbTP.png)
15-3
```c
import processing.sound.*;
SoundFile player;
void setup()
{
  size(400,200);
  player=new SoundFile(this,"tada.mp3");
}
void draw()
{
  background(3,252,234);
}
void mousePressed()
{
  player.play();
}
```
![](https://i.imgur.com/HiBywfe.png)
15-4
```c
import processing.sound.*;
SoundFile player;
void setup()
{
  size(400,200);
  player=new SoundFile(this,"bell.mp3");
}
void draw()
{
  background(3,252,234);
}
void mousePressed()
{
  if(player.isPlaying())
  {
    player.stop();
  }
  else
  {
    player.play();
  }
}
```
![](https://i.imgur.com/zZotzuJ.png)
15-5
```c
import processing.sound.*;
SoundFile player;
void setup()
{
  size(400,200);
  textSize(40);
  player=new SoundFile(this,"tada.mp3");
}              //把 tada.mp3放入
void draw()
{
  int s=second();
  background(3,252,234);
  text(10-s%11,100,100);
  if(10-s%11==0 && !player.isPlaying())
  {
    player.play();
  }
}
```
![](https://i.imgur.com/5HaJBFu.png)
15-6
```c
function setup() {
  createCanvas(400,200);
}


function draw() {
  let s=second();
  if(s%2==0){
    background(255,255,255);
  }
  else{
    background(0,0,0);
  }
}
```
![](https://i.imgur.com/KMHIfqB.png)