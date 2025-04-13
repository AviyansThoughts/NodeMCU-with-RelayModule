// Welcome to Aviyan's Thoughts

int relayInput = D4; // the input to the relay pin - GPIO2

void setup() {

	pinMode(relayInput, OUTPUT); // initialize pin as OUTPUT

}
void loop() {

	digitalWrite(relayInput, HIGH); // turn relay on
  delay(1000);

	digitalWrite(relayInput, LOW); // turn relay off
  delay(1000);

}