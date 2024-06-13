/**
 * @file mainpage.c
 * @brief Main Page Documentation for Project
 */

/**
 * @mainpage MAIN PAGE
 *
 * - @image html FINAL.JPEG "The Final Product, The Basketball Launcher"
 * - @image html control.png "The Final Product, The Bluetooth Controller"
 * @section goals Goals
 * - Understand the use of wireless protocols like Bluetooth
 * - Understand electronics considerations and budget management using bill of material
 * - Use SolidWorks to CAD the external components
 * - Use Fusion 360 to draw the hardware schematics and draw the PCB
 * - Use CubeIDE to code in C and understand the different functions of each hardware pin.
 *
 * @section req Requirements
 * This project's requirements were established at California Polytechnic State University, San Luis Obispo, and provided by Professor Charlie Revfrem:
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
 * 
 * @section hardware Hardware
 * If you want to learn more about the hardware, click [here](\ref hardware_page).
 * 
 * @section software Software
 * If you want to learn more about the software, click [here](\ref software_page).
 * 
 * @section repository REPOSITORY REFERENCE
 * All code related to this project can be accessed through https://github.com/jlam94/ME-507-Portfolio.
 * 
 * You may find it more useful to explore the website and the source code.
 * 
 * @section acknowledgments Acknowledgments
 * 
 * I would like to extend my heartfelt thanks to Professor Charlie Revfrem and Professor Wade for their insightful feedback and thorough review of our PCB and Bluetooth electronics. Their guidance was invaluable throughout this project.
 *
 * Special thanks to my lab partner, Vinh T. Vo, for his collaboration and shared experiences in this class. His contributions and enthusiasm were crucial to the success of this project.
 * 
 * @section info CONTACT INFO
 * 
 * <pre>   
 * <b>Author:</b>         Jonathan Lam
 * 
 * <b>Email:</b>          jonathanlam0806@gmail.com
 * 
 * <b>LinkedIn:</b>       www.linkedin.com/in/jonathanlam2000
 * 
 * <b>Phone Number:</b>   (909) 760-9129  
 * 
 * <b>Major:</b>          Mechanical Engineering at Cal Poly San Luis Obispo
 * 
 * <b>Date:</b>           June 13, 2024
 * </pre>
 */
