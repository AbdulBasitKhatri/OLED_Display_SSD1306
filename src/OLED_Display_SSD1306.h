#ifndef OLED_DISPLAY_SSD1306
#define OLED_DISPLAY_SSD1306

#include <Wire.h>

#define OLED_Display_SSD1306_Black 0
#define OLED_Display_SSD1306_White 1
#define OLED_Display_SSD1306_Inverse 2
extern uint8_t OLED_Display_SSD1306_i2caddr;
extern uint8_t OLED_Display_SSD1306_Width;
extern uint8_t OLED_Display_SSD1306_Height;
extern int OLED_Display_SSD1306_Rotation;
extern uint8_t *OLED_Display_SSD1306_Buffer;
#if defined(I2C_BUFFER_LENGTH)
#define WIRE_MAX std::min(256, I2C_BUFFER_LENGTH) 
#elif defined(BUFFER_LENGTH)
#define WIRE_MAX std::min(256, BUFFER_LENGTH) 
#elif defined(SERIAL_BUFFER_SIZE)
#define WIRE_MAX std::min(255, SERIAL_BUFFER_SIZE - 1) 
#else
#define WIRE_MAX 32 
#endif

// Function prototypes
void OLED_Display_SSD1306_drawPixel(int16_t x, int16_t y, uint16_t color);
void OLED_Display_SSD1306_display(void);
void OLED_Display_SSD1306_drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h, uint16_t color);
void OLED_Display_SSD1306_init(uint8_t _i2caddr = 0x3C);

#endif // OLED_DISPLAY_SSD1306
