int midaCargol;

//********** Setup ****************************************************************
void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial.println("Quina mida te el cargol en cm?");
  // make the pins outputs:

}

//********** Loop *****************************************************************
void loop() {
    while (Serial.available() > 0) {
    midaCargol = Serial.parseInt(); 
    if (Serial.read() == '\n') {

      
      Serial.print("El cargol amb una mida de ");
      Serial.print(midaCargol);
      Serial.print(" cm es ");

      if (midaCargol >= 1 & midaCargol <= 2){
           Serial.println("petit.");
      }
        else if (midaCargol >= 3 & midaCargol <= 4){
                 Serial.println("mitja.");
        }
        else if (midaCargol >= 5 & midaCargol <= 7){
                 Serial.println("gran.");
        }
        else if (midaCargol >= 8 & midaCargol <= 10);
        {
                  Serial.println("molt gran.");
        
        else
        
       Serial.print("error");
        
    
      Serial.println("");
      Serial.println("Quina mida te el cargol en cm?");
    }
    }
}
