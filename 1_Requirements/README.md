# DENSITY BASED TRAFFIC SIGNAL SYSTEM
# Introduction
The project is creating a density-based dynamic traffic signal system, in which the timing of the signal changes automatically in response to the density of traffic at any given intersection. In most cities throughout the world, traffic congestion is a major issue, and as a result,It's time to move away from manual mode or fixed timer mode and toward an automated system with decision-making capabilities.capabilities. The current traffic signalling system is based on a fixed time schedule, which may cause delays.If one lane is open while the others are closed, it is inefficient.

# Reasearch
Ultrasonic sensors are utilised to assess traffic density in this system. These sensors will always detect traffic on that route. The microcontroller is connected to all of these sensors.The controller detects and regulates the traffic system using these sensors.

# SWOT Analysis
![Density swot](https://user-images.githubusercontent.com/98818208/156871631-79bc2a59-d456-4e63-b0e4-46a54c26d549.jpg)



# 4W's and 1H
### WHY
It is not necessary to wait for the other signal if there will be no traffic.
That signal will be skipped by the system, and it will move on to the next one.
### WHAT
This project will show you how to use density to control traffic.
### WHEN
When there is a lot of traffic.
Areas with a large population.
### WHERE
To control traffic automatically and effectively in high-traffic regions.
### HOW
It uses sensors and a microcontroller to automatically control traffic signals.



# Components Used
## Atmega328p:
The Atmega328P is the 8-bit microprocessor that controls and interacts with sensors, motors, relays, and other electronic devices on every Arduino Uno board. Atmel's megaAVR series includes the ATmega328, a single-chip microcontroller (later Microchip Technology acquired Atmel in 2016).

## Ultrasonic sensor:
An ultrasonic sensor is a device that uses ultrasonic sound waves to determine the distance to an item. A transducer is used in an ultrasonic sensor to emit and receive ultrasonic pulses that relay information about the proximity of an item.

## LED:
When current passes through a light-emitting diode (LED), it produces light. Electrons recombine with electron holes in the semiconductor, producing energy in the form of photons.

## SimulIDE:
SimulIDE is a real-time electronic circuit simulator. It is a simple tool intended for advance learning, and it lets you enjoy the experience as well. SimulIDE is designed to be fast and easy to use, and it works wonders for simple electronics.

## Virtual studio code:
Microsoft's Visual Studio Code is a source-code editor for Windows, Linux, and macOS. Debugging, syntax highlighting, intelligent code completion, snippets, code refactoring, and embedded Git are among the features.

## avr-gcc:
AVR-GCC is a C language high-level code compiler that generates a binary source that can be uploaded to an AVR microcontroller. As a result, AVR-GCC can be thought of as a 'C' cross compiler for AVR code.

## Make:
Make is a tool which controls the generation of executables and other non-source files of a program from the program's source files. Make gets its knowledge of how to build your program from a file called the makefile, which lists each of the non-source files and how to compute it from other files. When you write a program, you should write a makefile for it, so that it is possible to use Make to build and install the program.

# Requirements
### High Level Requirements
| ID | Description | Status |
 |----| ------------------ | ------ |
 | HR01 | Sensors | Implemented |
  | HR02 | Atmega328 | Implemented |
  |HR03|SimulIde| Implemented |
### Low Level Requirements
 | ID | Description | Status |
 | -- | ---------------- |----| 
 | LR01 | Source code | Implemented |
 | LR02 | LED | Implemented |
