#include<stdio.h>
#include<stdint.h>

int main(void) {
	int sensor_id = 3;
	float temperature = 23.05824;
	uint8_t battery = 885;
	printf("Sensor - %d\nTemperature - %.2f\nBattery - %d\n", sensor_id, temperature,battery);

	return 0;

}

