#ifndef __OLED_H
#define __OLED_H 


#include "stdlib.h"

typedef __uint8_t u8 ;
typedef __uint16_t u16 ;
typedef __uint32_t u32 ;

#define USE_HORIZONTAL 90

#if USE_HORIZONTAL==0||USE_HORIZONTAL==180 //竖屏显示
#define oled_x  64
#define oled_y  16
#else                                      //横屏显示
#define oled_x  128
#define oled_y  8
#endif


#define OLED_CMD  0 //写命令
#define OLED_DATA 1 //写数据

void OLED_ClearPoint(u8 x,u8 y);
void OLED_ColorTurn(u8 i);
void OLED_DisplayTurn(u8 i);
void I2C_Start(void);
void I2C_Stop(void);
void I2C_WaitAck(void);
void Send_Byte(u8 dat);
void OLED_WR_Byte(u8 dat,u8 mode);
void OLED_DisPlay_On(void);
void OLED_DisPlay_Off(void);
void OLED_Refresh(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_DrawLine(u8 x1,u8 y1,u8 x2,u8 y2,u8 mode);
void OLED_DrawCircle(u8 x,u8 y,u8 r);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size1,u8 mode);
void OLED_ShowChar6x8(u8 x,u8 y,u8 chr,u8 mode);
void OLED_ShowString(u8 x,u8 y,u8 *chr,u8 size1,u8 mode);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size1,u8 mode);
void OLED_ShowChinese(u8 x,u8 y,u8 num,u8 size1,u8 mode);
void OLED_ScrollDisplay(u8 num,u8 space,u8 mode);
void OLED_ShowPicture(u8 x,u8 y,u8 sizex,u8 sizey,u8 BMP[],u8 mode);
void OLED_Init(void);



// 快速绘制图像
void OLED_DrawBMPFast(unsigned char BMP[]);

// 显示地面
void OLED_DrawGround();

// 绘制云朵
void OLED_DrawCloud();

// 绘制小恐龙
void OLED_DrawDino();

// 绘制仙人掌障碍物
void OLED_DrawCactus();

// 绘制跳跃小恐龙
int OLED_DrawDinoJump(char reset);

// 绘制随机出现的仙人掌障碍物
int OLED_DrawCactusRandom(unsigned char ver, unsigned char reset);

// 绘制重启
void OLED_DrawRestart();
// 绘制封面
void OLED_DrawCover();



#endif

