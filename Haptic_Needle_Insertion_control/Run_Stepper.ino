void runStepper(delayTime) {
  if (flag){
  digitalWrite(Pulse, HIGH);
  delayMicroseconds(delayTime);
  
  digitalWrite(Pulse, LOW);
  delayMicroseconds(delayTime);
  }
}
