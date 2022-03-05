//

#define PERIPH_BASE				((unsigned int)0x40000000)
#define APB1_PERIPH_BASE	PERIPH_BASE
#define APB2_PERIPH_BASE	(PERIPH_BASE+0x10000)
#define AHB_PERIPH_BASE		(PERIPH_BASE+0x20000)

#define RCC_BASE					(AHB_PERIPH_BASE+0x1000)
#define GPIOB_BASE				(APB2_PERIPH_BASE+0x0C00)

#define RCC_APB2ENR				*(unsigned int*)(RCC_BASE+0x18)
//first* for taking the content in that address. the second one is meaning that it is a pointer.

//#define GPIOB_CRL					*(unsigned int*)(GPIOB_BASE+0x00)
//#define GPIOB_CRH					*(unsigned int*)(GPIOB_BASE+0x04)
//#define GPIOB_ODR					*(unsigned int*)(GPIOB_BASE+0x0C)
	
typedef struct
{
	unsigned int CRL;
	unsigned int CRH;
	unsigned int IDR;
	unsigned int ODR;
	unsigned int BSRR;
	unsigned int BRR;
	unsigned int LCKR;
}GPIO_UNION;

typedef struct
{
	unsigned int CR;
	unsigned int CFGR;
	unsigned int CIR;
	unsigned int APB2RSTR;
	unsigned int APB1RSTR;
	unsigned int AHBENR;
	unsigned int APB2ENR;
	unsigned int APB1ENR;
	unsigned int BDCR;
	unsigned int CSR;
}RCC_UNION;

#define GPIOB ((GPIO_UNION*)GPIOB_BASE)
#define RCC 	((RCC_UNION*)RCC_BASE)
