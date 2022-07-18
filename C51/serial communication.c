#include <reg51.h>

void usartConfig(void)
{
	  	SCON = 0x50; //REN=1����������ݣ� ������ʽ1�� 8λUart��ʽ
		PCON = 0x80; //�����ʲ��ӱ�
		TMOD = 0x20; //T1�����ڷ�ʽ2���Զ���װ��
		TH1 = 0xf3;
		TL1 = 0xf3;
		ES = 1; //�򿪽����ж�
		TR1 = 1;  //�򿪼�����
		EA = 1; //CPU�ж�ʹ��
}

void main()
{
	while(1)
	{	
	}
}

void T1_zd(void) interrupt 4   //�����ж�
{
	unsigned char receiveData;

	receiveData = SBUF;
	RI = 0;
	SBUF = receiveData;
	while (!TI);
	TI = 0;

}