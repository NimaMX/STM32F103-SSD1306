# STM32F103-SSD1306 I2C
This is a spl library of ssd1306 oled display. This repository contains an i2c driver , Display BSP and SSD1306 Library.
We have tree layer of working Library to implement a perfect communication. 

<img src="http://www.electronics-lab.com/wp-content/uploads/2016/06/esp8266-ssd1306-oled-library-rel-1024x576.jpg" />

* First layer : Hardware Driver Layer
The first layer is hardware controling layer , that is in Driver Folder. in this layer we implemented all of Hardware Action that we need in hardware such as i2c initilization and i2c reading and writing data funtions and slave address seting or delay actions.

* Second layer : Display BSP
The second layer is board support package Layer , this layer is using driver and library to create a logical and easy access for communicating with display. bsp sends an instance of hardware driver to library section and after that library will do all of communication work.

* Third layer : Application Layer
This Third Layer is a ready cake , you can call your bsp functions and the work is done !
