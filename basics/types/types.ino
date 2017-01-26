//global variables
int var1 = 10;
int var2 = 20;
  
void setup(){
  var2 = 5; //var2 becomes 5 when arduino boots
}

void loop(){
  if(var2 < var1){
   var2++; 
  }else{
    var2 = 0;
  }
}

