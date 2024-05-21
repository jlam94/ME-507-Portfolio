/**
 * @file hardware.c
 * @brief Documentation for Hardware
 */

/**
 * @page hardware_page Hardware Documentation
 * 
 * @section hardware_intro Introduction
 * This section provides details about the parts, costs, and how to solve common problems.
 * 
 * @section initial Initial Concept
 * 
 * The initial idea was provided by my lab partner Vinh Vo, inspired by his personal project, the cycloidal gearbox. Curious about how we could implement it into a full-motion project, we decided to use an Inertial Measurement Unit (IMU) to control the cycloidal gearbox. To apply our concepts in Mechanical Engineering with Dynamics, we decided it would throw a projectile. 
 * Our professor, Charlie Refvem, suggested making it wirelessly controlled, specifically using Bluetooth. 
 * With this information, we designed the first concept using an electric schematic for the parts, as seen in the picture.
 * 
 * - @image html overall.png "The Initial Electric Schematic" width=50%
 * 
 * @image html cycloidalgear.gif "The Cycloidal Gearbox" width=50%
 * 
 * @section hardware_components Bill of Materials
 * As part of the requirements for this project, our team created a bill of materials, which can be seen [here](https://raw.githubusercontent.com/jlam94/ME-507-Portfolio/main/images/BOM(UPDATE).xlsx). 
 * The first tab shows the mechanical parts and parts that we got from Amazon, while the second tab shows our electronic components from the DigiKey website. 
 * The URLs are in the Bill of Materials, and the CAD files can be downloaded from there.
 * 
 * @section schematic Schematic
 * In this section, the basketball launcher eCAD schematics are shown. The custom PCB is detailed in these pages:
 * 
 * ### Custom PCB Schematics
 * 
 * | Page | Description                  |
 * |------|------------------------------|
 * | 1    | [Power Related Parts](https://raw.githubusercontent.com/jlam94/ME-507-Portfolio/main/images/p1.png)    |
 * | 2    | [Microcontroller](https://raw.githubusercontent.com/jlam94/ME-507-Portfolio/main/images/p2.png)    |
 * | 3    | [Motor Related Parts](https://raw.githubusercontent.com/jlam94/ME-507-Portfolio/main/images/p3.png)          |
 * | 4    | [Additional Components and ESC](https://raw.githubusercontent.com/jlam94/ME-507-Portfolio/main/images/p4.png)|
 * 
 * - @image html p1.png "Page 1" width=50%
 * - @image html p2.png "Page 2" width=50%
 * - @image html p3.png "Page 3" width=50%
 * - @image html p4.png "Page 4" width=50%
 * 
 * ### Controller Glove PCB
 * These images show the PCB for the controller glove and how it is connected to the IMU:
 * 
 * - @image html PCBCONTROLLER.png "PCB for the Glove" width=50%
 * 
 * @section common_problems Common Challenges
 * This section shows some common challenges we encountered and how to troubleshoot them:
 * 
 * - **Problem:** Solder sticking to the board causing parts to short.
 *   - **Solution:** Look carefully for soldering blobs, and do not use too much soldering wire; blobs are caused by excess solder.
 * 
 * - **Problem:** The library does not show up in the Fusion 360 eDrawings.
 *   - **Solution:**
 *     1. Download the part with the STEP file and the library from DigiKey.
 *     2. Open Fusion 360.
 *     3. Create a new folder and a new electronics library.
 *     4. Open Library Manager and import libraries from the local disk.
 *     5. Right-click the library and click "Edit Fusion 360 copy".
 *     6. Click Footprint and move the name and values.
 *     7. Right-click and select 3D sketch.
 *     8. Open the STEP file and drag it into the 3D drawing; it should be linked after you save.
 * 
 * - **Problem:** The limit switch does not trigger the GPIO.
 *   - **Solution:** This can be due to the LED in the limit switch that is included in the product; it reduces the voltage output. It is recommended to short the LED and use the limit switch.
 * 
 * - **Problem:** In Fusion 360, the routing error "PCB out of Sync" prevents routing.
 *   - **Solution:** Push the schematic, then the footprint, so it updates in the PCB routing.
 * 
 * - **Problem:** In Fusion 360, the routing error "Overlap" occurs in the microcontroller ground vias.
 *   - **Solution:** Click on the part and select "Approved" in the DRC.
 * 
 * - **Problem:** How do you know how much trace width you need?
 *   - **Solution:** Use a trace width calculator. I recommend [this one](https://www.4pcb.com/trace-width-calculator.html).
 * 
 * - **Problem:** How do you know if the LED or parts are connected on your PCB correctly so they don't accidentally short circuit?
 *   - **Solution:** Use a multimeter and check for continuity; if it is connected correctly, it should beep.
 * 
 * - **Problem:** The brushless DC motor does not launch the ball far enough.
 *   - **Solution:** The issue is that the rubber band that contacts the ball was press-fitted, and at high speeds, the rubber dilates, blocking the ball from launching. The solution is to glue the rubber into the CAD wheel.
 * [Here's a video demonstrating the issue](https://raw.githubusercontent.com/jlam94/ME-507-Portfolio/main/images/WheelDilation.mp4).
 * 
 * @image html Wheel.gif "The Wheel Dilation" width=50%
 */
