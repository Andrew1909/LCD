#ifndef DISPLAY_h
#define DISPLAY_h

#define LCD_SETDDRAMADDR 0x80

typedef struct
{
	unsigned DisplRPMMin;
	unsigned DisplRPMMax;
	unsigned DisplRPMSegment;
} DISPL_PARAM;

extern DISPL_PARAM DisplParam;

void ConfigDisplay(void); //настройка дисплея (init)
void ClsDisplay(void);//очистка
void DisplayYX(int y, int x, char *str);//вывод
void write4bits(int value);
long write(int value);
#endif