#include<reg52.h> #include<delay.h> 

sbit m1=P1^0;
sbit m2=P1^1;
sbit m3=P1^2;
sbit m4=P1^3;

sbit m5=P1^4;
sbit m6=P1^5;
sbit m7=P1^6;
sbit m8=P1^7;

sbit m9=P2^0;
sbit m20=P2^1;
sbit m11=P2^2;
sbit m12=P2^3;

sbit s1=P3^0;
sbit s2=P3^1;
sbit s3=P3^2;
sbit s4=P3^3;
sbit s5=P3^4;
sbit s6=P3^5;
sbit buz=P3^6; //buzzer
void main()
{
m1=m2=m3=m4=m5=m6=m7=m8=m9=m20=m11=m12=0;
s1=s3=s2=s4=s5=s6=0;
while(1)
{

if(s1==1)
{
while(s1==1)
{
m1=1;m2=0;m3=0;m4=0;
delay(20);
m1=0;m2=1;m3=0;m4=0;
delay(20);
m1=0;m2=0;m3=1;m4=0;
delay(20);
m1=0;m2=0;m3=0;m4=1;
delay(20);
}
}


//2

if(s2==1)
{
while(s2==1)
{
m5=1;m6=0;m7=0;m8=0;
delay(20);
m5=0;m6=1;m7=0;m8=0;
delay(20);
m5=0;m6=0;m7=1;m8=0;
delay(20);
m5=0;m6=0;m7=0;m8=1;
delay(20);
}
}


//3

if(s3==1)
{
while(s3==1)
{
m9=1;m20=0;m11=0;m12=0;
delay(20);
m9=0;m20=1;m11=0;m12=0;
delay(20);
m9=0;m20=0;m11=1;m12=0;
delay(20);
m9=0;m20=0;m11=0;m12=1;
delay(20);
}
}

//4

if(s4==1)
{
while(s4==1)
{
m4=1;m2=0;m3=0;m1=0;
delay(20);
m2=0;m3=1;m1=0;m4=0;
delay(20);
m1=0;m3=0;m2=1;m4=0;
delay(20);
m4=0;m2=0;m3=0;m1=1;
delay(20);
}
}

//5

if(s5==1)
{
while(s5==1)
{
m8=1;m7=0;m6=0;m5=0;
delay(20);
m8=0;m7=1;m6=0;m5=0;
delay(20);
m8=0;m7=0;m6=1;m5=0;
delay(20);
m8=0;m7=0;m6=0;m5=1;
delay(20);
}
}

//6

if(s6==1)
{
while(s6==1)
{
m12=1;m11=0;m20=0;m9=0;
delay(20);
m12=0;m11=1;m20=0;m9=0;
delay(20);
m12=0;m11=0;m20=1;m9=0;
delay(20);
m12=0;m11=0;m20=0;m9=1;
delay(20);
}
}


}//end of while
}//end of main
