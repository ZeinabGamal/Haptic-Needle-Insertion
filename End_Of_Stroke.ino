// Limit switch down Interrupt subroutine

void End_Of_Stroke () {
  Serial.println("Restart a new run ?")
  while (!Serial.available()) ; // Wait until you get the user input.
  Serial.flush();
  Serial.println("Enter (y) to reassign the skin parameters and ( n ) to continue with the last parameters ")
  while (!Serial.available()) ; // Wait until you get the user input.
  if(Serial.read() == "y"){
    Skin_Parameter()
    Reset();
    }
    else{
      Reset();
      }
}
