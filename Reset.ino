//--------------------------------------------------------------------------------------
//******************************Reset Subroutine **********************************
//--------------------------------------------------------------------------------------
/*

*/
void Reset() {
  digitalWrite(Direction, LOW); //Depend on the chosen driver
  while (digitalRead(Limit_Pin_Up)) { //Wait until you reach end of stroke
    //Normally Closed Limit switch config.
    Runstepper(Reset_Time);
  }
  digitalWrite(Direction, HIGH); // Get ready for the next stroke.
  Skin_Parameter();              //Get the new parameters from the user
}
