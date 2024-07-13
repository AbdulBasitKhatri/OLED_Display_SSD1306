#ifndef OLED_DISPLAY_SSD1306
#define OLED_DISPLAY_SSD1306

#include <Wire.h>

#define OLED_Display_SSD1306_Black 0
#define OLED_Display_SSD1306_White 1
#define OLED_Display_SSD1306_Inverse 2
#define OLED_Display_SSD1306_Width 128
#define OLED_Display_SSD1306_Height 64

// Function prototypes
void OLED_Display_SSD1306_drawPixel(int16_t x, int16_t y, uint16_t color);
void OLED_Display_SSD1306_display(void);
void OLED_Display_SSD1306_drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h, uint16_t color);
void OLED_Display_SSD1306_init(void);

#endif // OLED_DISPLAY_SSD1306
