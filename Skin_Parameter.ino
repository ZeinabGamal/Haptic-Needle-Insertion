/*
   Input required stiffness and damping co-eff for the selected tissue
*/
void Skin_Parameter() {
  //-----------------------------------------------------------------------------------------------------------
  //************************************** Skin stiffness *******************************************************
  //-----------------------------------------------------------------------------------------------------------
  Serial.println("Enter the required Skin stiffness in N/mm ");
  while (!Serial.available()) ; // Wait until you get the user input.
  k = Serial.readString().toFloat();       // Put First numeric value from buffer in X_req variable.
  Serial.print(" Skin stiffness = ");
  Serial.println(k, 4);
  Serial.flush();
  //-----------------------------------------------------------------------------------------------------------
  //************************************** Skin damping *******************************************************
  //-----------------------------------------------------------------------------------------------------------
  Serial.println("Enter the required Skin damping co-eff in N.s/mm ");
  while (!Serial.available()) ; // Wait until you get the user input.
  b = Serial.readString().toFloat();       // Store Skin damping co-eff
  Serial.print(" Skin damping = ");
  Serial.println(b, 4);
  Serial.flush();
}
