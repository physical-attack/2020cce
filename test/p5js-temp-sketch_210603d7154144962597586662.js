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
