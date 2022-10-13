# Motor Drive Shield Expansion Board L293D

 ![image](https://user-images.githubusercontent.com/44589560/195605842-ca9d39e6-8ad4-4547-8792-30b14334d64d.png)

 L293D is a monolithic integrated, high voltage, high current, 4-channel driver.

Basically this means using this chip you can use DC motors and power supplies of up to 36 Volts (kondensator på modulet er kun på 16V, så max 16V, ellers kan kondensator skiftes) , thats some pretty big motors and the chip can supply a maximum current of 600mA per channel, the L293D chip is also what’s known as a type of H-Bridge.

The H-Bridge is typically an electrical circuit that enables a voltage to be applied across a load in either direction to an output, e.g. motor.
* 2 interface for 5V Servo connected to the high-resolution dedicated timer – no jitter!
* Can drive 4 DC motors or 2 stepper motors or 2 Servo
* Up to 4 bi-directional DC motors with individual 8-bit speed selection
* Up to 2 stepper motors (unipolar or bipolar) with single coil, double coil or interleaved stepping.
* 4 H-Bridges: per bridge provides 0.6A (1.2A peak current) with thermal protection, can run motors on 4.5V to 36V DC

(kondensator på modulet er kun på 16V, så max 16V, ellers kan kondensator skiftes)

* Pull down resistors keep motors disabled during power-up
* reset button
* 2 external terminal power interface, for seperate logic/motor supplies
* Tested compatible for Mega, Diecimila & Duemilanove
