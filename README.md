# Coradicator
<img src="https://raw.githubusercontent.com/PIYSocial-India/Coradicator/master/_img/5.gif" width="600">

A smart robot which is built with UV-C lights to eradicate the corona virus laying around.

## Introduction
Coradicator is a room disinfection device based in Ultraviolet-C radiation. It offers the capacity to be remotely programmed using an Android mobile device and it has an infrared detection security system that turns off the system when triggered.

The system here described is easily scalable to generate higher ultraviolet dosages adding more UV-C lamps. This device has a very high effectiveness to eliminate high bacterial inocula

The sanitizing method employed by this device affects a very wide range of microorganisms and it has several advantages respect to chemical based-sanitizing methods

This device represents a secure, fast and automatized equipment for room disinfecting. The device is configured in less than three minutes and it does not require continuous monitoring.

## Theory
Since the last years, mobiles systems based on UV-C radiation have been used for cleaning and disinfecting hospitals. The contribution of this equipment to the conditioning of hospital areas makes these systems useful for other kinds of spaces that require periodical disinfecting.

``` UV-C radiation inactivates microorganisms causing DNA damage by producing cyclobutane pyrimidine dimers (CPDs), altering DNA structure, and thus interfering with DNA replication. ```

According to the World Health Organization Global Solar UV Index, the UV region covers the wavelength range from 100 to 400 nm and is divided into three bands: 
  - UV-A (315–400 nm) 
  - UV-B (280–315 nm) 
  - UV-C (100–280 nm)

UV-C light, which is absorbed by the atmosphere, represents the most lethal wavelength for a wide spectrum of microorganisms. The maximum germicidal power of the ultraviolet radiation is at wavelengths near 260 nm and it drops dramatically below 230 or above 300 nm.  

## Hardware Description
- We have constructed a UV-C radiator device that includes a microcontroller board, an Arduino UNO board. 
- For controlling the robot and the UV lights we are using the Bluetooth module HC06.
- For live camera feedback to the controller, we are using the ESP32 Camera Board to get the live video feedback so that we can control it outside the room.
- In addition, the equipment can be operated from a wide range of Android mobile devices with suitable screens and processing capacity (tablet, cell phone, etc), taking advantage of the ubiquity of these devices, and lowering the cost of its construction.


<img src="https://raw.githubusercontent.com/PIYSocial-India/Coradicator/master/_img/6.png" width="600">

## Build of the UV-Bot
The construction of the device involved three stages: 
  -	Structural building
  -	Electronic assembling
  -	Programming of the microcontroller and the mobile application
  
The scaffold structure was made by attaching to a central column four holders for UV-C germicide lamps, connected in parallel. The central column was placed on the bot which has four wheels for locomotion.

The control unit is based on an Arduino UNO board; this gives the order to the switch to turn on the UV-C lamps using an electromechanical relay. An HCO6 Bluetooth module is used to communicate with the board using Bluetooth devices.

Three LEDs were installed to indicate it functional estate:
-	Connected to the electric supply (green LED)
-	Bluetooth connection established (blue LED)
-	UV-C lamps activated (red LED)

The red LED is combined with a passive buzzer to start a warning sequence just before the activation of the UV-C lamps. Because the UV-C radiation is harmful to humans, a PIR sensor was added as a security measure. In this way, the device is automatically turned off when a user is near. 

The ESP32 Camera is attached to the front part of the robot which will send the realtime live video to the controlling app so that the person who will be controlling the bot.

Finally, a mobile application was developed to control the disinfecting unit. 
This app was designed using the MIT app inventor 2 tool. 
The interface of this application is used for connection to the device via Bluetooth, and for controlling the robot wirelessly.


<img src="https://raw.githubusercontent.com/PIYSocial-India/Coradicator/master/_img/2.png" width="600">

    The Robot

### Working
The dosage values can be used to estimate the required exposure time according to the following simplified method:

The UV-C dosage received by surface unit (D, expressed in J/cm2) at a given distance (r) from the sanitizer, depends on the power of the emitted UV-C light (P, equal to 48W for our device) according to this equation:

       D = (P.t) / (2π.L.r) 

Where L is the length of the UV-C lamps (89 cm) and t is the exposure time expressed in seconds.

Based on this equation, the exposure time can be calculated as follows:

       t = (2π.L.r.D) / P	

Using this method, a tool to estimate the minimum exposure time to reach the desired dosage for a certain distance from the device was developed and is available in the initial screen of the app controlling the device.

**The Schematics for the UV Light**

<img src="https://raw.githubusercontent.com/PIYSocial-India/Coradicator/master/_img/circuit1.png" width="600">

Now coming to the driving part. 
The driving is done though the mobile app through bluetooth. The realtime video helps the driver to control the bot from another room so that UV rays will not harm him.

Further, we are planning to make the bot completely autonomous using ROS.

**The Schematics of the Bluetooth Control**

<img src="https://raw.githubusercontent.com/PIYSocial-India/Coradicator/master/_img/bluetooth_circuit.PNG" width="600">

**The Controlling App**

<img src="https://raw.githubusercontent.com/PIYSocial-India/Coradicator/master/_img/3.png" width="600">

      
<img src="https://raw.githubusercontent.com/PIYSocial-India/Coradicator/master/_img/4.png" width="600">


## Conclusion
An UV-C room disinfection device was made with similar functions to proprietary commercial systems. The presented model can be easily scaled up, modifying its structure (adding more UV-C lamps) and programming (editing the open source code of the Arduino board and/or of the Android application), achieving savings for more than 80% respect to the price of similar proprietary commercial equipment

## Addition Resources:
Full Video: [Click Here](https://www.youtube.com/watch?v=drwVUMTpzDM)
Short Video: [Click Here](https://www.youtube.com/watch?v=2qDfOr7RtQY)
Documentation: [Click Here](https://bit.ly/2P3bhiR)
Presentation: [Click Here](https://bit.ly/303ivtP)

----
### Contributors:
Saswat Samal | Sanket Sanjeeb Pattanaik | Saswat Mohanty
------------ | ------------- | -------------
Software | Hardware | Hardware
[ Saswat's Website](http://saswatsamal.me/) | [Sanket's Github](https://github.com/Sanket-Pattanaik) |[Saswat's GitHub](https://github.com/Saswat7101)
