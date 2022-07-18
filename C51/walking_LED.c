#include "reg52.h"
#include "intrins.h"
#define uchar unsigned char
#define uint unsigned int

//延时函数
void delay(uint i)
{
  uchar t;
        while(i--)
        {
          for(t=0;t<120;t++);
        }
}

vodi int main()
{
    up2down();
    down2up();
    up2down2();
    down2up2();
    return 0;
}



//程序1 自上向下流水灯

void up2down()
{
        P1=0xfe;
          while(1)
        {
         
                delay(500);
                P1=_crol_(P1,1);
        }
       
}
*/
//程序2 自下向上流水灯

void down2up()
{
        P1=0x7f;
          while(1)
        {
         
                delay(500);
                P1=_cror_(P1,1);
        }
       
}
*/
//程序3 自上向下流水灯（两个）

void up2down2()
{
        P1=0xfc;
          while(1)
        {
         
                delay(500);
                P1=_crol_(P1,2);
        }
       
}
*/
//程序4 自下向上流水灯（两个）

void down2up2()
{
        P1=0x3f;
          while(1)
        {
         
                delay(500);
                P1=_cror_(P1,2);
        }
       
}
*/