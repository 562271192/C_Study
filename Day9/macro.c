#define OneYear_Second 3153600
#define ADD(a,b)  ((a) + (b))
#define SUB(a,b)  ((a) - (b))
#define MUL(a,b)  ((a) * (b))
#define MIN(a,b) ((a)<(b)) ? a : b
#define MAX(a,b) ((a)>(b)) ? a : b
#define SQUARE(a) ((a)^2)
//#define LEAP_YEAR(a) (((a)%4 == 0&&(a)%100 !=0) || ((a)%400==0)) ? 1 : 0
#define EVEN_NUMBER(a)  ((a)%2==0) ? 1 : 0
#define ODD_NUMBER(a)  ((a)%2==1) ? 1 : 0
#define PRIME_NUMBER(a)		if((a)!>1) ? (for(int i = 2; i <= a / 2; i++)\
		{  \
			if ((a) % i == 0)\
			{\
				break; \
			}       \
			else     \
			{    \
				if ((a) / 2 == i)\
				{ \
					printf("%d ", (a));\
				}\
			}\
		}) : 0