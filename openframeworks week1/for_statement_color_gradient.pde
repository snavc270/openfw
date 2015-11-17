void setup() {
  size(500, 500); 
}

void draw(){

  background(0);
  for (int i=0; i<10; i++){
     for (int j=0; j<10; j++){
    fill(j*50, i*50, 255);
    ellipse(25+i*50, 25+j*50, 50, 50);
    
   } 
  }
  
  
}
