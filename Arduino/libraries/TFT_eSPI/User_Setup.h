#define ST7735_DRIVER

#define ST7735_REDTAB
//#define ST7735_BLACKTAB

#define TFT_WIDTH  128
#define TFT_HEIGHT 160

#define TFT_RGB_ORDER TFT_BGR

#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS    5
#define TFT_DC    2
#define TFT_RST   4

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

#define SPI_FREQUENCY  27000000