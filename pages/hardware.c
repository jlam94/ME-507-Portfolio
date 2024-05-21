/**
 * @file hardware.c
 * @brief Documentation for Hardware
 */

/**
 * @page hardware_page Hardware Documentation
 * 
 * @section hardware_intro Introduction
 * This is the hardware section which gives details about the part details, cost, and how to solve common problems.
 * 
 * @section gloves First Hardware: The Glove Controller
 * 
 * @section hardware_components Bill of Materials
 * As part of the requirements on this project, as a team we created a bill of materials and it can be seen [here](https://raw.githubusercontent.com/jlam94/ME-507-Portfolio/main/images/BOM(UPDATE).xlsx).
 * The first tab shows the mechanical parts and parts that we got from Amazon, while the second tab shows our electronic components from the DigiKey website.
 * The link to the URLs are in the Bill of Materials and the CAD can be downloaded from there.
 * 
 * @section schematic Schematic
 * In this section, it shows the basketball launcher eCAD schematics. It is detailed in the following pages:
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
 * @section common_problems Common Challenges
 * This section shows some common challenges we encountered and how to troubleshoot them:
 * 
 * - **Problem:** Solder sticking to the board causing parts to short.
 *   - **Solution:** Look carefully for the soldering blob, do not use too much soldering wire; blobs are caused by excess solder.
 * 
 * - **Problem:** The library does not show up in the Fusion 360 eDrawings.
 *   - **Solution:**
 *     1. Download the part with the STEP and the library from DigiKey.
 *     2. Open Fusion 360.
 *     3. Create a new folder and a new electronics library.
 *     4. Open Library Manager and import libraries from local disk.
 *     5. Right-click the library and click "Edit Fusion 360 copy".
 *     6. Click Footprint and move the name and values.
 *     7. Right-click and select 3D sketch.
 *     8. Open the STEP file and drag it into the 3D drawing; it should be linked after you save.
 * 
 * - **Problem:** The limit switch does not trigger the GPIO.
 *   - **Solution:** This can be due to the LED in the limit switch that is included in the product; it reduces the voltage output. It is recommended to short the LED and use the limit switch.
 * 
 * - **Problem:** In Fusion 360, routing error "PCB out of Sync" which doesn't let you route after.
 *   - **Solution:** Push the schematic, then the footprint so it updates in the PCB routing.
 * 
 * - **Problem:** In Fusion 360, routing error "Overlap" in the microcontroller ground vias.
 *   - **Solution:** Just click on the part and select "Approved" in the DRC.
 * 
 * - **Problem:** How do you know how much trace width you need?
 *   - **Solution:** Use a trace width calculator. I recommend [this one](https://www.4pcb.com/trace-width-calculator.html).
 * 
 * - **Problem:** How do you know if the LED or parts are connected on your PCB correctly so it doesn't accidentally short circuit?
 *   - **Solution:** Use a multimeter and check for continuity; if it is connected correctly, it should beep.
 * 
 */
