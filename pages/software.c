/**
 * @file software.c
 * @brief Documentation for Software
 */

/**
 * @page software_page Software Documentation
 * 
 * @section software_intro Introduction
 * The main goal of our code is the process of communication between Bluetooth. More specifically, the communication between our Inertia Measurement Unit (IMU). Therefore, our code reads the values from the IMU and then prints them into a UART through Bluetooth and communicates them to the master. Additionally, our code needed to run in a Finite State Machine (FSM) so it doesn't interrupt our code and gives orders to the other motors and the brushless motors to shoot the ball.
 * 
 * @section FSM Finite State Machine
 * - Here we show our first prototype of the finite state machine and its iterations.
 *
 * @image html fsm_diagram.png "Finite State Machine Diagram"
 * @image latex fsm_diagram.png "Finite State Machine Diagram"
 * 
 * @section software_code Code
 * - It is provided in this manual.
 *
 * @section additional_resources Additional Resources
 *- [ME507MANUAL](ME-507-PortFolio/ME-507-PortFolio/docs/ME507MANUAL.pdf)
 * eh?
 */
