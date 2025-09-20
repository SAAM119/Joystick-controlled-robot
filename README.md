

# Joystick Controlled Robot (RSLK)

## Table of Contents

* [Overview](#overview)
* [Objective](#objective)
* [Features](#features)
* [Components Required](#components-required)
* [System Architecture](#system-architecture)
* [Working Principle](#working-principle)
* [Circuit](#circuit)
* [Installation & Usage](#installation--usage)
* [Future Enhancements](#future-enhancements)
* [Authors](#authors)
* [License](#license)

---

## Overview

The **Joystick Controlled Robot** is an embedded robotics project using the **Tiva C Series microcontroller** programmed through **Energia IDE**. The robot can be manually controlled using a joystick, allowing motion in multiple directions (forward, backward, left, right). This project is inspired by the **RSLK (Robotics Systems Learning Kit)** platform, which provides a modular approach for learning robotics concepts.

---

## Objective

* To design and implement a joystick-controlled robot using Tiva C Series MCU.
* To provide hands-on experience with embedded programming, motor control, and sensor integration.
* To explore real-time motion control and interfacing with human input devices.

---

## Features

* Real-time manual control using a joystick.
* Forward, backward, left, and right motion.
* Smooth motor control using PWM signals.
* Easy-to-modify code for adding sensors or autonomous features.
* Designed using Energia IDE, compatible with Tiva C Series microcontrollers.

---

## Components Required

**Hardware:**

* Tiva C Series Microcontroller (TM4C123GH6PM)
* Joystick module (2-axis analog joystick)
* Motor driver (L298N or similar)
* DC motors (2-4) with wheels
* Chassis & caster wheel
* Jumper wires & breadboard or PCB
* Power supply (Battery pack)

**Software:**

* Energia IDE (Arduino-like IDE for Tiva C Series)
* Required Energia libraries for PWM and analog reading

---

## System Architecture

The system consists of three main modules:

1. **Input Module:** Joystick provides analog signals for X and Y axes.
2. **Processing Module:** Tiva C MCU reads analog inputs and generates PWM signals for motor control.
3. **Output Module:** Motor driver controls DC motors based on joystick position, allowing smooth robot motion.

---

## Working Principle

1. The **joystick module** outputs two analog voltages corresponding to the X and Y axes.
2. Tiva C reads the analog voltages through ADC pins.
3. Based on the joystick position:

   * **Forward:** Both motors move forward.
   * **Backward:** Both motors move backward.
   * **Left:** Left motor slows/stops, right motor moves forward.
   * **Right:** Right motor slows/stops, left motor moves forward.
4. PWM signals control motor speed for smooth motion.
5. The system provides real-time control of the robot via joystick input.

---

## Circuit


* **Joystick X-axis → ADC Pin (e.g., A0)**
* **Joystick Y-axis → ADC Pin (e.g., A1)**
* **Motor Driver Inputs → Tiva C PWM pins**
* **Motors → Motor Driver Output pins**
* **Power connections → MCU, motors, and joystick module**

---


**Explanation:**

* Reads joystick X and Y analog values.
* Maps values to PWM for left and right motors.
* Controls robot motion in forward, backward, left, and right directions.

---

## Installation & Usage

1. Connect the hardware as per the circuit diagram.
2. Install Energia IDE and required libraries.
3. Upload the provided code to Tiva C Series MCU.
4. Power the robot and joystick module.
5. Move the joystick to control robot movement in real-time.

---

## Future Enhancements

* Add sensors for obstacle avoidance.
* Implement autonomous mode with line-following or path planning.
* Integrate Bluetooth/Wi-Fi for wireless joystick control.
* Add speed control and smoother motion using advanced PWM algorithms.

---

## Authors

* **Aman Vishwash Singh** – Embedded Engineer

---

## License

This project is licensed under the MIT License – see the [LICENSE](LICENSE) file for details.
