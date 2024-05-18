/**
 * @file mainpage.c
 * @brief Main Page Documentation for Project
 */

/**
 * @mainpage MAIN PAGE
 *
 * 
 * @section goals Goals
 * - Understand the use of wireless protocols like Bluetooth
 * - Understand electronics considerations and budget management using bill of material
 * - Use SolidWorks to CAD the external components
 * - Use Fusion 360 to draw the hardware schematics and draw the PCB
 * - Use CubeIDE to code in C and understand the different functions of each hardware pin.
 *
 * @section req Requirements
 * This project created in California Polytechnic San Luis Obispo was provided by Professor Charlie Revfrem:
 *
 * @subsection electronics_req The Electronics Requirements:
 * - A custom PCB designed around an STM32F411 MCU (or similar) programmed in either C, C++ (or Rust, with permission).
 * - Two or more actuators, such as motors, driving the machine, actuated by suitable electronics, such as motor drivers.
 * - Two or more unique sensors.
 * - Some sort of closed-loop control loop or similarly complex algorithm.
 * - A wireless controller allowing you to command the bot hands-free or to be used as a wireless e-stop. The controller and receiver will be provided to students for use during ME 507.
 *
 * @subsection manufacturing_req The Manufacturing Requirements:
 * - 3D Printing: All custom non-flat parts should likely be manufactured using FDM 3D printing.
 * - PCB Fabrication: Flat parts can be made to order out of PCB material (fiberglass) along with the PCB controlling your robot. This option provides high precision and rigidity.
 * - Laser-cutting: Flat parts can be made quickly and accurately on the laser cutter if the parts are of a suitable material; many materials are not safe to cut with a laser.
 * - Water-jetting: Flat parts not suitable for the laser cutter can be made accurately and quickly using the water-jet.
 *
 * @subsection safety_req The Safety Requirements:
 * - If you use a battery, you need to communicate with your instructor before plugging it in or charging it in the lab.
 * - Your robot must have an emergency stop feature that can be triggered by the provided radio transmitter. For example, releasing the trigger on the transmitter can act as a “dead man’s switch”. The emergency stop must also activate if communication is lost with the wireless controller.
 * - You may also want to include a way to safely grab your robot if it is mobile in nature, just in case your robot gains sentience and goes after one of the operators.
 * - Your robot may not injure a human being or, through inaction, allow a human being to come to harm.
 * - Your robot must obey the orders given it by human beings except where such orders would conflict with the First Law.
 * - Your robot must protect its own existence as long as such protection does not conflict with the First or Second Laws.
 */
