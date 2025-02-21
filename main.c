#include <wiringPi.h>
#include <stdio.h>
#include <unistd.h>

#define LED_PIN 0

int main(int argc, char *argv) {
	if (wiringPiSetup() == -1) {
		printf("WiringPi setup failed!\n");
		return 1;
	}

	pinMode(LED_PIN, OUTPUT);

	while (1) {
		digitalWrite(LED_PIN, HIGH);
		printf("LED ON\n");
		sleep(1);

		digitalWrite(LED_PIN, LOW);
		printf("LED OFF\n");
		sleep(1);
	}

	return 0;
}
