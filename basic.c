#include<reg51.h>
sbit RS=P1^1;
sbit RW=P1^2;
sbit EN=P1^3;
#define data_line P2
void lcd_init(void);
void lcd_cmd(unsigned char);
void lcd_data(unsigned char);
void delay(void);

void main()
{
	lcd_init();
	lcd_data('H');
	lcd_data('E');
	lcd_data('L');
	lcd_data('L');
	lcd_data('O');
	while(1)
	{
	}
}
void lcd_init(void)
{
	lcd_cmd(0x30);
	lcd_cmd(0x38);
	lcd_cmd(0x01);
	lcd_cmd(0x80);
	lcd_cmd(0x0F);
}
void lcd_cmd(unsigned char c)
{
	data_line=c;
	RS=0;
	RW=0;
	EN=1;
	delay();
	EN=0;
}
void lcd_data(unsigned char c)
{
	data_line=c;
	RS=1;
	RW=0;
	EN=1;
	delay();
	EN=0;
}
void delay(void)
{
	int i,j;
	for(i=0;i<200;i++)
	{
		for(j=0;j<200;j++)
		{
		}
	}
} 
	
	

