#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 149 "/usr/lib/gcc/msp430/4.5.3/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 211
typedef unsigned int size_t;
#line 323
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 38 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/stdint.h" 3
typedef signed char int8_t;
typedef int int16_t;
typedef long int int32_t;
__extension__ 
#line 41
typedef long long int int64_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
__extension__ 
#line 46
typedef unsigned long long int uint64_t;





typedef signed char int_least8_t;
typedef int int_least16_t;
typedef long int int_least32_t;
__extension__ 
#line 55
typedef long long int int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
__extension__ 
#line 61
typedef unsigned long long int uint_least64_t;





typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef long int int_fast32_t;
__extension__ 
#line 70
typedef long long int int_fast64_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
__extension__ 
#line 76
typedef unsigned long long int uint_fast64_t;









typedef int16_t intptr_t;
typedef uint16_t uintptr_t;





__extension__ 
#line 93
typedef long long int intmax_t;
__extension__ 
#line 94
typedef unsigned long long int uintmax_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 48 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/types.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
# 37 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/string.h" 3
extern int memcmp(const void *arg_0x402fd690, const void *arg_0x402fd828, size_t arg_0x402fd9c0);
extern void *memcpy(void *arg_0x402fde68, const void *arg_0x40301030, size_t arg_0x403011c8);
extern void *memmove(void *arg_0x40301698, const void *arg_0x40301830, size_t arg_0x403019c8);
extern void *memset(void *arg_0x40301e90, int arg_0x40300010, size_t arg_0x403001a8);
#line 61
extern void *memset(void *arg_0x4030cd30, int arg_0x4030ce88, size_t arg_0x40311030);
# 59 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/stdlib.h" 3
#line 55
typedef struct __nesc_unnamed4242 {

  int quot;
  int rem;
} div_t;







#line 63
typedef struct __nesc_unnamed4243 {

  long quot;
  long rem;
} ldiv_t;
# 122 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/config.h" 3
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
# 12 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/_types.h" 3
typedef long _off_t;
typedef long _ssize_t;
# 19 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/reent.h" 3
typedef unsigned long __ULong;
#line 31
struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
#line 116
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
#line 174
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x403313b8);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x40334a70);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
#line 273
struct _reent;
# 18 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/math.h" 3
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
#line 220
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 273
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 25 "/opt/tinyos-main/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/opt/tinyos-main/tos/types/TinyError.h"
enum __nesc_unnamed4248 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 30 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/msp430.h" 3
#line 24
typedef enum msp430_cpu_e {

  MSP430_CPU_MSP430 = 0x0000, 
  MSP430_CPU_MSP430X = 0x0002, 
  MSP430_CPU_MSP430XV2 = 0x0003, 
  MSP430_CPU = 0x0003
} msp430_cpu_e;
#line 46
#line 34
typedef enum msp430_mpy_e {

  MSP430_MPY_NONE = 0x0000, 
  MSP430_MPY_TYPE_16 = 0x0010, 
  MSP430_MPY_TYPE_32 = 0x0020, 
  MSP430_MPY_TYPE_ANY = 0x0030, 
  MSP430_MPY_HAS_SE = 0x0001, 
  MSP430_MPY_HAS_DW = 0x0002, 
  MSP430_MPY_16 = MSP430_MPY_TYPE_16, 
  MSP430_MPY_16SE = MSP430_MPY_16 | MSP430_MPY_HAS_SE, 
  MSP430_MPY_32 = MSP430_MPY_TYPE_32 | MSP430_MPY_HAS_SE, 
  MSP430_MPY_32DW = MSP430_MPY_32 | MSP430_MPY_HAS_DW
} msp430_mpy_e;
# 43 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/in430.h" 3
void __nop(void );



void __dint(void );



void __eint(void );


unsigned int __read_status_register(void );
# 162 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char ME1 __asm ("__""ME1");
#line 181
extern volatile unsigned char ME2 __asm ("__""ME2");
#line 193
extern volatile unsigned int WDTCTL __asm ("__""WDTCTL");
#line 265
extern volatile unsigned char P1OUT __asm ("__""P1OUT");

extern volatile unsigned char P1DIR __asm ("__""P1DIR");

extern volatile unsigned char P1IFG __asm ("__""P1IFG");

extern volatile unsigned char P1IES __asm ("__""P1IES");

extern volatile unsigned char P1IE __asm ("__""P1IE");

extern volatile unsigned char P1SEL __asm ("__""P1SEL");




extern volatile unsigned char P2OUT __asm ("__""P2OUT");

extern volatile unsigned char P2DIR __asm ("__""P2DIR");

extern volatile unsigned char P2IFG __asm ("__""P2IFG");



extern volatile unsigned char P2IE __asm ("__""P2IE");

extern volatile unsigned char P2SEL __asm ("__""P2SEL");










extern volatile unsigned char P3OUT __asm ("__""P3OUT");

extern volatile unsigned char P3DIR __asm ("__""P3DIR");

extern volatile unsigned char P3SEL __asm ("__""P3SEL");




extern volatile unsigned char P4OUT __asm ("__""P4OUT");

extern volatile unsigned char P4DIR __asm ("__""P4DIR");

extern volatile unsigned char P4SEL __asm ("__""P4SEL");










extern volatile unsigned char P5OUT __asm ("__""P5OUT");

extern volatile unsigned char P5DIR __asm ("__""P5DIR");

extern volatile unsigned char P5SEL __asm ("__""P5SEL");




extern volatile unsigned char P6OUT __asm ("__""P6OUT");

extern volatile unsigned char P6DIR __asm ("__""P6DIR");

extern volatile unsigned char P6SEL __asm ("__""P6SEL");
#line 380
extern volatile unsigned char U0CTL __asm ("__""U0CTL");

extern volatile unsigned char U0TCTL __asm ("__""U0TCTL");



extern volatile unsigned char U0MCTL __asm ("__""U0MCTL");

extern volatile unsigned char U0BR0 __asm ("__""U0BR0");

extern volatile unsigned char U0BR1 __asm ("__""U0BR1");

extern const volatile unsigned char U0RXBUF __asm ("__""U0RXBUF");
#line 437
extern volatile unsigned char U1CTL __asm ("__""U1CTL");

extern volatile unsigned char U1TCTL __asm ("__""U1TCTL");



extern volatile unsigned char U1MCTL __asm ("__""U1MCTL");

extern volatile unsigned char U1BR0 __asm ("__""U1BR0");

extern volatile unsigned char U1BR1 __asm ("__""U1BR1");

extern const volatile unsigned char U1RXBUF __asm ("__""U1RXBUF");
#line 593
extern volatile unsigned int TACTL __asm ("__""TACTL");

extern volatile unsigned int TACCTL0 __asm ("__""TACCTL0");

extern volatile unsigned int TACCTL1 __asm ("__""TACCTL1");

extern volatile unsigned int TACCTL2 __asm ("__""TACCTL2");

extern volatile unsigned int TAR __asm ("__""TAR");
#line 697
extern volatile unsigned int TBCCTL0 __asm ("__""TBCCTL0");
#line 711
extern volatile unsigned int TBR __asm ("__""TBR");

extern volatile unsigned int TBCCR0 __asm ("__""TBCCR0");
#line 790
extern volatile unsigned char DCOCTL __asm ("__""DCOCTL");

extern volatile unsigned char BCSCTL1 __asm ("__""BCSCTL1");

extern volatile unsigned char BCSCTL2 __asm ("__""BCSCTL2");
#line 962
extern volatile unsigned int ADC12CTL0 __asm ("__""ADC12CTL0");

extern volatile unsigned int ADC12CTL1 __asm ("__""ADC12CTL1");
# 343 "/opt/tinyos-main/tos/chips/msp430/msp430hardware.h"
static volatile uint8_t U0CTLnr __asm ("0x0070");
static volatile uint8_t I2CTCTLnr __asm ("0x0071");
static volatile uint8_t I2CDCTLnr __asm ("0x0072");
#line 378
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;


enum __nesc_unnamed4249 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void )  ;





static inline void __nesc_enable_interrupt(void )  ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )   ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)   ;
#line 433
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
#line 448
enum __nesc_unnamed4250 {
  MSP430_PORT_RESISTOR_INVALID, 
  MSP430_PORT_RESISTOR_OFF, 
  MSP430_PORT_RESISTOR_PULLDOWN, 
  MSP430_PORT_RESISTOR_PULLUP
};
# 8 "/opt/tinyos-main/tos/platforms/telosb/hardware.h"
enum __nesc_unnamed4251 {
  TOS_SLEEP_NONE = MSP430_POWER_ACTIVE
};
#line 36
static inline void TOSH_SET_SIMO0_PIN()  ;
#line 36
static inline void TOSH_CLR_SIMO0_PIN()  ;
#line 36
static inline void TOSH_MAKE_SIMO0_OUTPUT()  ;
static inline void TOSH_SET_UCLK0_PIN()  ;
#line 37
static inline void TOSH_CLR_UCLK0_PIN()  ;
#line 37
static inline void TOSH_MAKE_UCLK0_OUTPUT()  ;
#line 79
enum __nesc_unnamed4252 {

  TOSH_HUMIDITY_ADDR = 5, 
  TOSH_HUMIDTEMP_ADDR = 3, 
  TOSH_HUMIDITY_RESET = 0x1E
};



static inline void TOSH_SET_FLASH_CS_PIN()  ;
#line 88
static inline void TOSH_CLR_FLASH_CS_PIN()  ;
#line 88
static inline void TOSH_MAKE_FLASH_CS_OUTPUT()  ;
static inline void TOSH_SET_FLASH_HOLD_PIN()  ;
#line 89
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT()  ;
# 40 "/usr/lib/gcc/msp430/4.5.3/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 102
typedef __gnuc_va_list va_list;
# 52 "/usr/lib/gcc/msp430/4.5.3/../../../../msp430/include/stdio.h" 3
int __attribute((format(printf, 1, 2))) printf(const char *string, ...);






int putchar(int c);
# 39 "/opt/tinyos-main/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;



  nx_uint16_t maxRetries;
  nx_uint16_t retryDelay;
} __attribute__((packed)) 
cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 183
enum __nesc_unnamed4253 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 112 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4254 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/opt/tinyos-main/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4255 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4256 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/opt/tinyos-main/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4257 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4258 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4259 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 59 "/opt/tinyos-main/tos/platforms/telosa/platform_message.h"
#line 56
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 61
typedef union TOSRadioFooter {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 65
typedef union TOSRadioMetadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/opt/tinyos-main/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[112];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 72 "/opt/tinyos-main/tos/lib/printf/printf.h"
int printfflush();






#line 77
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4260 {
  AM_PRINTF_MSG = 100
};
# 7 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/iovec.h"
struct ip_iovec {
  uint8_t *iov_base;
  size_t iov_len;
  struct ip_iovec *iov_next;
};

int iov_read(struct ip_iovec *iov, int offset, int len, uint8_t *buf);
int iov_len(struct ip_iovec *iov);
# 24 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/nwbyte.h"
uint32_t ntohl(uint32_t i);
# 40 "/opt/tinyos-main/tos/types/IeeeEui64.h"
enum __nesc_unnamed4261 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/opt/tinyos-main/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4262 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4263 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4264 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4265 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 88
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 24 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/nwbyte.h"
uint32_t ntohl(uint32_t i);
# 35 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/6lowpan.h"
enum __nesc_unnamed4266 {
  LOWMSG_MESH_LEN = 5, 
  LOWMSG_BCAST_LEN = 2, 
  LOWMSG_FRAG1_LEN = 4, 
  LOWMSG_FRAGN_LEN = 5
};

enum __nesc_unnamed4267 {
  INET_MTU = 1280, 
  LIB6LOWPAN_MAX_LEN = 100, 
  LOWPAN_LINK_MTU = 109, 




  FRAG_EXPIRE_TIME = 4096
};




enum __nesc_unnamed4268 {
  LOWPAN_NALP_PATTERN = 0x0, 
  LOWPAN_MESH_PATTERN = 0x2, 
  LOWPAN_FRAG1_PATTERN = 0x18, 
  LOWPAN_FRAGN_PATTERN = 0x1c, 
  LOWPAN_BCAST_PATTERN = 0x50, 
  LOWPAN_IPV6_PATTERN = 0x41
};

enum __nesc_unnamed4269 {
  LOWPAN_MESH_V_MASK = 0x20, 
  LOWPAN_MESH_F_MASK = 0x10, 
  LOWPAN_MESH_HOPS_MASK = 0x0f
};




enum __nesc_unnamed4270 {
  LOWPAN_DISPATCH_BYTE_MASK = 0xe0, 
  LOWPAN_DISPATCH_BYTE_VAL = 0x60, 

  LOWPAN_IPHC_TF_MASK = 0x18, 
  LOWPAN_IPHC_TF_NONE = 0x18, 
  LOWPAN_IPHC_TF_ECN_DSCP = 0x10, 
  LOWPAN_IPHC_TF_ECN_FL = 0x08, 
  LOWPAN_IPHC_TF_ECN_DSCP_FL = 0x00, 

  LOWPAN_IPHC_NH_MASK = 0x04, 
  LOWPAN_IPHC_NH_INLINE = 0, 

  LOWPAN_IPHC_HLIM_MASK = 0x03, 
  LOWPAN_IPHC_HLIM_NONE = 0x00, 
  LOWPAN_IPHC_HLIM_1 = 0x01, 
  LOWPAN_IPHC_HLIM_64 = 0x02, 
  LOWPAN_IPHC_HLIM_255 = 0x03, 

  LOWPAN_IPHC_CID_MASK = 0x80, 
  LOWPAN_IPHC_CID_PRESENT = 0x80, 

  LOWPAN_IPHC_SAM_SHIFT = 4, 
  LOWPAN_IPHC_M = 0x08, 
  LOWPAN_IPHC_DAM_SHIFT = 0, 

  LOWPAN_IPHC_AC_CONTEXT = 0x04, 
  LOWPAN_IPHC_AM_MASK = 0x3, 
  LOWPAN_IPHC_AM_128 = 0x0, 
  LOWPAN_IPHC_AM_64 = 0x1, 
  LOWPAN_IPHC_AM_16 = 0x2, 
  LOWPAN_IPHC_AM_0 = 0x3, 

  LOWPAN_IPHC_AM_M = 0x08, 
  LOWPAN_IPHC_AM_M_128 = 0x0, 
  LOWPAN_IPHC_AM_M_48 = 0x1, 
  LOWPAN_IPHC_AM_M_32 = 0x2, 
  LOWPAN_IPHC_AM_M_8 = 0x3
};




enum __nesc_unnamed4271 {
  LOWPAN_NHC_IPV6_MASK = 0xf0, 
  LOWPAN_NHC_IPV6_PATTERN = 0xe0, 

  LOWPAN_NHC_EID_SHIFT = 0x1, 
  LOWPAN_NHC_EID_MASK = 0xe, 
  LOWPAN_NHC_EID_HOP = 0x0 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_ROUTING = 0x1 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_FRAG = 0x2 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_DEST = 0x3 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_MOBILE = 0x4 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_IPV6 = 0x7 << LOWPAN_NHC_EID_SHIFT, 

  LOWPAN_NHC_NH = 0x1, 

  LOWPAN_NHC_UDP_MASK = 0xf8, 
  LOWPAN_NHC_UDP_PATTERN = 0xf0, 

  LOWPAN_NHC_UDP_CKSUM = 0x4, 

  LOWPAN_NHC_UDP_PORT_MASK = 0x3, 
  LOWPAN_NHC_UDP_PORT_FULL = 0x0, 
  LOWPAN_NHC_UDP_PORT_SRC_FULL = 0x1, 
  LOWPAN_NHC_UDP_PORT_DST_FULL = 0x2, 
  LOWPAN_NHC_UDP_PORT_SHORT = 0x3
};
# 42 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/ip.h"
struct in6_addr {

  union __nesc_unnamed4272 {

    uint8_t u6_addr8[16];
    uint16_t u6_addr16[8];
    uint32_t u6_addr32[4];
  } in6_u;
};




struct sockaddr_in6 {
  uint16_t sin6_port;
  struct in6_addr sin6_addr;
};









struct ip6_hdr {
  union __nesc_unnamed4273 {
    struct ip6_hdrctl {
      uint32_t ip6_un1_flow;
      uint16_t ip6_un1_plen;
      uint8_t ip6_un1_nxt;
      uint8_t ip6_un1_hlim;
    } ip6_un1;
    uint8_t ip6_un2_vfc;
  } ip6_ctlun;
  struct in6_addr ip6_src;
  struct in6_addr ip6_dst;
} __attribute((packed)) ;
#line 110
struct ip6_ext {
  uint8_t ip6e_nxt;
  uint8_t ip6e_len;
};

struct tlv_hdr {
  uint8_t type;
  uint8_t len;
};



enum __nesc_unnamed4274 {
  IANA_ICMP = 58, 
  IANA_UDP = 17, 
  IANA_TCP = 6, 




  IPV6_HOP = 0, 
  IPV6_IPV6 = 41, 
  IPV6_ROUTING = 43, 
  IPV6_FRAG = 44, 
  IPV6_AUTH = 51, 
  IPV6_SEC = 50, 
  IPV6_NONEXT = 59, 
  IPV6_DEST = 60, 
  IPV6_MOBILITY = 135, 

  IPV6_TLV_PAD1 = 0, 
  IPV6_TLV_PADN = 1
};




struct in6_iid {
  uint8_t data[8];
};




struct icmp6_hdr {
  uint8_t type;
  uint8_t code;
  uint16_t cksum;
};

enum __nesc_unnamed4275 {
  ICMP_TYPE_ECHO_DEST_UNREACH = 1, 
  ICMP_TYPE_ECHO_PKT_TOO_BIG = 2, 
  ICMP_TYPE_ECHO_TIME_EXCEEDED = 3, 
  ICMP_TYPE_ECHO_PARAM_PROBLEM = 4, 
  ICMP_TYPE_ECHO_REQUEST = 128, 
  ICMP_TYPE_ECHO_REPLY = 129, 
  ICMP_TYPE_ROUTER_SOL = 133, 
  ICMP_TYPE_ROUTER_ADV = 134, 
  ICMP_TYPE_NEIGHBOR_SOL = 135, 
  ICMP_TYPE_NEIGHBOR_ADV = 136, 
  ICMP_TYPE_RPL_CONTROL = 155, 
  ICMP_TYPE_DUPLICATE_REQ = 157, 
  ICMP_TYPE_DUPLICATE_CONFIRM = 158, 
  ICMP_NEIGHBOR_HOPLIMIT = 255, 

  ICMP_CODE_HOPLIMIT_EXCEEDED = 0, 
  ICMP_CODE_ASSEMBLY_EXCEEDED = 1
};




struct udp_hdr {
  uint16_t srcport;
  uint16_t dstport;
  uint16_t len;
  uint16_t chksum;
};




enum __nesc_unnamed4276 {
  TCP_FLAG_FIN = 0x1, 
  TCP_FLAG_SYN = 0x2, 
  TCP_FLAG_RST = 0x4, 
  TCP_FLAG_PSH = 0x8, 
  TCP_FLAG_ACK = 0x10, 
  TCP_FLAG_URG = 0x20, 
  TCP_FLAG_ECE = 0x40, 
  TCP_FLAG_CWR = 0x80
};

struct tcp_hdr {
  uint16_t srcport;
  uint16_t dstport;
  uint32_t seqno;
  uint32_t ackno;
  uint8_t offset;
  uint8_t flags;
  uint16_t window;
  uint16_t chksum;
  uint16_t urgent;
};







struct ip6_metadata {
  ieee154_addr_t sender;

  uint8_t lqi;
  uint8_t rssi;
};
#line 246
struct ip6_packet {
  int ip6_inputif;
  struct ip_iovec *ip6_data;
  struct ip6_hdr ip6_hdr;
};






void inet_pton6(char *addr, struct in6_addr *dest);
int inet_ntop6(struct in6_addr *addr, char *buf, int cnt);
# 17 "/opt/tinyos-main/tos/lib/net/blip/blip_printf.h"
static inline void printf_buf(uint8_t *buf, int len);
#line 40
static inline void printf_in6addr(struct in6_addr *a);
# 43 "/opt/tinyos-main/tos/types/Leds.h"
enum __nesc_unnamed4277 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 15 "sslp.h"
struct sslp_hdr {
  uint8_t version : 4;
  uint8_t msgid : 6;
  uint8_t O_flag : 1;
  uint8_t F_flag : 1;
  uint8_t rsv : 4;
  uint16_t seq_no;
} __attribute((packed)) ;
#line 38
#line 27
typedef struct service_request_msg {
  struct sslp_hdr sslp_header;
  uint8_t AM : 2;
  union __nesc_unnamed4278 {
    ieee154_addr_t linklayer_address;
    struct in6_addr ip_address;
  } source_address;
  uint8_t length_service_type;
  char service_type[16];
  uint8_t length_scope_list;
  char scope[16];
} __attribute((packed))  service_request_msg;
#line 51
#line 41
typedef struct location_entry {
  uint16_t lifetime;
  uint8_t lt : 2;
  uint8_t reserved : 6;
  uint8_t reserved1;
  union __nesc_unnamed4279 {
    ieee154_addr_t linklayer_address;
    struct in6_addr ip_address;
    struct sockaddr_in6 url;
  } service_location;
} __attribute((packed))  location_entry;
#line 64
#line 59
typedef struct service_reply_msg {
  struct sslp_hdr sslp_header;
  uint16_t error_code;
  uint16_t location_entry_count;
  location_entry service_entry;
} __attribute((packed))  service_reply_msg;
#line 82
#line 71
typedef struct __nesc_unnamed4280 {
  struct sslp_hdr sslp_header;
  uint8_t AM : 2;
  uint8_t reserved : 6;
  uint8_t reserved1;
  union __nesc_unnamed4281 {
    ieee154_addr_t linklayer_address;
    struct in6_addr ip_address;
  } source_address;
  uint8_t length_scope_type;
  char scope[16];
} __attribute((packed))  strequest_msg;
#line 94
#line 88
typedef struct __nesc_unnamed4282 {
  struct sslp_hdr sslp_header;
  uint16_t error_code;
  location_entry service_entry;
  uint16_t length_service_type;
  char service_type[16];
} __attribute((packed))  streply_msg;









#line 97
typedef struct __nesc_unnamed4283 {

  char service[16];
  struct in6_addr ip_address;
  uint16_t port_no;
  uint16_t lifetime;
  char scope[16];
} __attribute((packed))  services_available;





#line 106
typedef struct __nesc_unnamed4284 {
  char service[16];
  char scope[16];
  uint8_t sequence_no;
} __attribute((packed))  sequencer;

enum __nesc_unnamed4285 {

  NO, 
  YES
};



enum __nesc_unnamed4286 {
  NO_ERROR = 0, 
  PARSING_ERROR = 1, 
  SCOPE_ERROR = 2, 
  INTERNAL_ERROR = 3, 
  MSG_NOT_SUPPORTED = 4, 
  ILLEGAL_REGISTRATION = 5, 
  DA_BUSY = 6
};


enum __nesc_unnamed4287 {

  SHORT_ADDR = 1, 
  EXTENDED_ADDR = 2, 
  IP_ADDR = 3
};



enum __nesc_unnamed4288 {
  SERVICE_REQUEST = 1, 
  SERVICE_REPLY = 2, 
  SERVICE_REGISTRATION = 3, 
  SERVICE_ACKNOWLEDGE = 4, 
  DA_ADVERTISEMENT = 5, 
  SA_ADVERTISEMENT = 6, 
  SERVICE_TYPE_REQUEST = 7, 
  SERVICE_TYPE_REPLY = 8, 
  SERVICE_DEREGISTRATION = 9
};
# 41 "/opt/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4289 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4290 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4291 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4292 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4293 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
#line 75
#line 62
typedef struct __nesc_unnamed4294 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
#line 87
#line 77
typedef struct __nesc_unnamed4295 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
#line 102
#line 89
typedef struct __nesc_unnamed4296 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
# 91 "/opt/tinyos-main/tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b);
# 56 "/opt/tinyos-main/tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4297 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4298 {
  unsigned int swrst : 1;
  unsigned int mm : 1;
  unsigned int sync : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
} __attribute((packed))  msp430_uctl_t;









#line 69
typedef struct __nesc_unnamed4299 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4300 {
  unsigned int rxerr : 1;
  unsigned int rxwake : 1;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int brk : 1;
  unsigned int oe : 1;
  unsigned int pe : 1;
  unsigned int fe : 1;
} __attribute((packed))  msp430_urctl_t;
#line 116
#line 99
typedef struct __nesc_unnamed4301 {
  unsigned int ubr : 16;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int  : 3;

  unsigned int  : 1;
  unsigned int stc : 1;
  unsigned int  : 2;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
  unsigned int  : 0;
} msp430_spi_config_t;





#line 118
typedef struct __nesc_unnamed4302 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4303 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;

msp430_spi_union_config_t msp430_spi_default_config = { 
{ 
.ubr = 0x0002, 
.ssel = 0x02, 
.clen = 1, 
.listen = 0, 
.mm = 1, 
.ckph = 1, 
.ckpl = 0, 
.stc = 1 } };
#line 169
#line 150
typedef enum __nesc_unnamed4304 {

  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x94, 
  UBR_32KHZ_1800 = 0x0012, UMCTL_32KHZ_1800 = 0x84, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x6D, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x77, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x29, 

  UBR_1MHZ_1200 = 0x0369, UMCTL_1MHZ_1200 = 0x7B, 
  UBR_1MHZ_1800 = 0x0246, UMCTL_1MHZ_1800 = 0x55, 
  UBR_1MHZ_2400 = 0x01B4, UMCTL_1MHZ_2400 = 0xDF, 
  UBR_1MHZ_4800 = 0x00DA, UMCTL_1MHZ_4800 = 0xAA, 
  UBR_1MHZ_9600 = 0x006D, UMCTL_1MHZ_9600 = 0x44, 
  UBR_1MHZ_19200 = 0x0036, UMCTL_1MHZ_19200 = 0xB5, 
  UBR_1MHZ_38400 = 0x001B, UMCTL_1MHZ_38400 = 0x94, 
  UBR_1MHZ_57600 = 0x0012, UMCTL_1MHZ_57600 = 0x84, 
  UBR_1MHZ_76800 = 0x000D, UMCTL_1MHZ_76800 = 0x6D, 
  UBR_1MHZ_115200 = 0x0009, UMCTL_1MHZ_115200 = 0x10, 
  UBR_1MHZ_230400 = 0x0004, UMCTL_1MHZ_230400 = 0x55
} msp430_uart_rate_t;
#line 200
#line 171
typedef struct __nesc_unnamed4305 {
  unsigned int ubr : 16;

  unsigned int umctl : 8;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
  unsigned int  : 0;

  unsigned int  : 3;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int  : 1;

  unsigned int  : 2;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int  : 4;
  unsigned int  : 0;

  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;








#line 202
typedef struct __nesc_unnamed4306 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4307 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;

msp430_uart_union_config_t msp430_uart_default_config = { 
{ 
.utxe = 1, 
.urxe = 1, 
.ubr = UBR_1MHZ_57600, 
.umctl = UMCTL_1MHZ_57600, 
.ssel = 0x02, 
.pena = 0, 
.pev = 0, 
.spb = 0, 
.clen = 1, 
.listen = 0, 
.mm = 0, 
.ckpl = 0, 
.urxse = 0, 
.urxeie = 1, 
.urxwie = 0, 
.utxe = 1, 
.urxe = 1 } };
#line 248
#line 240
typedef struct __nesc_unnamed4308 {
  unsigned int i2cstt : 1;
  unsigned int i2cstp : 1;
  unsigned int i2cstb : 1;
  unsigned int i2cctrx : 1;
  unsigned int i2cssel : 2;
  unsigned int i2ccrm : 1;
  unsigned int i2cword : 1;
} __attribute((packed))  msp430_i2ctctl_t;
#line 276
#line 253
typedef struct __nesc_unnamed4309 {
  unsigned int  : 1;
  unsigned int mst : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int xa : 1;
  unsigned int  : 1;
  unsigned int txdmaen : 1;
  unsigned int rxdmaen : 1;

  unsigned int  : 4;
  unsigned int i2cssel : 2;
  unsigned int i2crm : 1;
  unsigned int i2cword : 1;

  unsigned int i2cpsc : 8;

  unsigned int i2csclh : 8;

  unsigned int i2cscll : 8;

  unsigned int i2coa : 10;
  unsigned int  : 6;
} msp430_i2c_config_t;








#line 278
typedef struct __nesc_unnamed4310 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4311 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
#line 309
typedef uint8_t uart_speed_t;
typedef uint8_t uart_parity_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4312 {
  TOS_UART_1200 = 0, 
  TOS_UART_1800 = 1, 
  TOS_UART_2400 = 2, 
  TOS_UART_4800 = 3, 
  TOS_UART_9600 = 4, 
  TOS_UART_19200 = 5, 
  TOS_UART_38400 = 6, 
  TOS_UART_57600 = 7, 
  TOS_UART_76800 = 8, 
  TOS_UART_115200 = 9, 
  TOS_UART_230400 = 10
};

enum __nesc_unnamed4313 {
  TOS_UART_OFF, 
  TOS_UART_RONLY, 
  TOS_UART_TONLY, 
  TOS_UART_DUPLEX
};

enum __nesc_unnamed4314 {
  TOS_UART_PARITY_NONE, 
  TOS_UART_PARITY_EVEN, 
  TOS_UART_PARITY_ODD
};
# 33 "/opt/tinyos-main/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 41 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan.h"
uint16_t ieee154_hashaddr(ieee154_addr_t *addr);




struct packed_lowmsg {
  uint8_t headers;
  uint8_t len;
  uint8_t *data;
};

struct lowpan_reconstruct {
  uint16_t r_tag;
  uint16_t r_source_key;
  uint16_t r_size;
  uint8_t *r_buf;
  uint16_t r_bytes_rcvd;

  uint8_t r_timeout;
  uint16_t *r_app_len;
  uint8_t *r_transport_header;
  struct ip6_metadata r_meta;
};

struct lowpan_ctx {
  uint16_t tag;
  uint16_t offset;
};


enum __nesc_unnamed4315 {
  LOWMSG_MESH_HDR = 1 << 0, 
  LOWMSG_BCAST_HDR = 1 << 1, 
  LOWMSG_FRAG1_HDR = 1 << 2, 
  LOWMSG_FRAGN_HDR = 1 << 3, 
  LOWMSG_NALP = 1 << 4, 
  LOWMSG_IPNH_HDR = 1 << 5, 
  LOWMSG_IPV6 = 1 << 6
};
#line 183
enum __nesc_unnamed4316 {
  T_FAILED1 = 0, 
  T_FAILED2 = 1, 
  T_UNUSED = 2, 
  T_ACTIVE = 3, 
  T_ZOMBIE = 4
};
# 12 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/DallasId48.h"
enum __nesc_unnamed4317 {
  DALLASID48_SERIAL_LENGTH = 6, 
  DALLASID48_DATA_LENGTH = 8
};








#line 17
typedef union dallasid48_serial_t {
  uint8_t data[DALLASID48_DATA_LENGTH];
  struct  {
    uint8_t family_code;
    uint8_t serial[DALLASID48_SERIAL_LENGTH];
    uint8_t crc;
  } ;
} dallasid48_serial_t;




static inline bool dallasid48checkCrc(const dallasid48_serial_t *id);
# 29 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/PlatformIeeeEui64.h"
enum __nesc_unnamed4318 {
  IEEE_EUI64_COMPANY_ID_0 = 0x00, 
  IEEE_EUI64_COMPANY_ID_1 = 0x12, 
  IEEE_EUI64_COMPANY_ID_2 = 0x6d, 
  IEEE_EUI64_SERIAL_ID_0 = 'E', 
  IEEE_EUI64_SERIAL_ID_1 = 'P'
};
# 6 "/opt/tinyos-main/tos/lib/net/blip/iprouting.h"
enum __nesc_unnamed4319 {
  ROUTE_INVAL_KEY = -1
};





enum __nesc_unnamed4320 {
  ROUTE_IFACE_ALL = 0, 
  ROUTE_IFACE_154 = 1, 
  ROUTE_IFACE_PPP = 2
};

enum __nesc_unnamed4321 {
  ROUTE_DROP_NOROUTE, 
  ROUTE_DROP_HLIM
};

typedef int route_key_t;

struct route_entry {
  int valid : 1;
  route_key_t key;
  struct in6_addr prefix;
  uint8_t prefixlen;
  struct in6_addr next_hop;
  uint8_t ifindex;
};
# 27 "/opt/tinyos-main/tos/lib/net/blip/IPDispatch.h"
enum __nesc_unnamed4322 {
  N_RECONSTRUCTIONS = 3, 
  N_CONCURRENT_SENDS = 3, 
  N_FRAGMENTS = 12
};

struct send_info {
  void *upper_data;
  uint8_t link_fragments;
  uint8_t link_transmissions;
  uint8_t link_fragment_attempts;
  bool failed;
  uint8_t _refcount;
};

struct send_entry {
  struct send_info *info;
  message_t *msg;
};
# 21 "/opt/tinyos-main/tos/lib/net/blip/ND.h"
struct icmpv6_header {
  uint8_t type;
  uint8_t code;
  nx_uint16_t checksum;
} __attribute((packed)) ;
#line 39
#line 35
typedef struct __nesc_unnamed4323 {
  struct icmpv6_header icmpv6;
  uint32_t reserved;
  struct in6_addr target;
} __attribute((packed))  neighbr_solicit;
#line 55
#line 48
typedef struct __nesc_unnamed4324 {
  struct icmpv6_header icmpv6;
  uint8_t r_bit : 1;
  uint8_t s_bit : 1;
  uint8_t o_bit : 1;
  uint32_t reserved : 29;
  struct in6_addr target;
} __attribute((packed))  neighbr_advt;
#line 67
#line 64
typedef struct __nesc_unnamed4325 {
  struct icmpv6_header icmpv6;
  uint32_t reserved;
} __attribute((packed))  router_solicit;
#line 84
#line 75
typedef struct __nesc_unnamed4326 {
  struct icmpv6_header icmpv6;
  uint8_t cur_hop_limit;
  uint8_t m_bit : 1;
  uint8_t o_bit : 1;
  uint8_t reserved : 6;
  uint16_t router_lifetime;
  uint32_t reachable_time;
  uint32_t retrans_timer;
} __attribute((packed))  router_advt;
#line 100
#line 93
typedef struct __nesc_unnamed4327 {
  struct icmpv6_header icmpv6;
  uint8_t status;
  uint8_t reserved;
  uint16_t reg_lifetime;
  ieee_eui64_t eui64;
  struct in6_addr reg_addr;
} __attribute((packed))  darc;
#line 113
#line 110
typedef struct __nesc_unnamed4328 {
  uint8_t type;
  uint8_t length;
} __attribute((packed))  opt_hdr;




#line 115
typedef struct __nesc_unnamed4329 {
  opt_hdr option_header;
  ieee_eui64_t ll_addr;
} __attribute((packed))  stlla_opt;
#line 136
#line 126
typedef struct __nesc_unnamed4330 {
  uint8_t prefix_length;
  uint8_t l_bit : 1;
  uint8_t a_bit : 1;
  uint8_t reserved1 : 6;
  uint32_t valid_lifetime;
  uint32_t preferrd_lifetime;
  uint32_t reserved2;
  struct in6_addr prefix;
} 
__attribute((packed))  prefix_info;










#line 139
typedef struct __nesc_unnamed4331 {
  uint8_t context_length;
  uint8_t c_bit : 1;
  uint8_t cid : 4;
  uint8_t res : 3;
  uint16_t reserved;
  uint16_t valid_lifetime;
  struct in6_addr prefix;
} __attribute((packed))  context_info;




#line 149
typedef struct __nesc_unnamed4332 {
  opt_hdr option_header;
  prefix_info prefix_information;
} __attribute((packed))  prefix_opt;
#line 166
#line 160
typedef struct __nesc_unnamed4333 {
  opt_hdr option_header;
  uint8_t status;
  uint16_t reserved;
  uint16_t reg_lifetime;
  ieee_eui64_t eui64;
} __attribute((packed))  aro_opt;









#line 173
typedef struct __nesc_unnamed4334 {
  opt_hdr option_header;
  context_info context_information;
} __attribute((packed))  context_opt;
#line 189
#line 184
typedef struct __nesc_unnamed4335 {
  uint16_t ver_low;
  uint16_t ver_high;
  uint16_t valid_lifetime;
  struct in6_addr lbr_addr;
} __attribute((packed))  abro_info;




#line 191
typedef struct __nesc_unnamed4336 {
  opt_hdr option_header;
  abro_info abro_information;
} __attribute((packed))  abro_opt;



enum option_types {
  SLLAO = 1, 
  TLLAO = 2, 
  PREFIX_INFORMATION = 30, 
  ARO = 33, 
  CONTEXT_0PTION = 34, 
  ABRO = 35
};



enum option_length {
  LENGTH_ICMPHEADER = 4, 
  LENGTH_RS = 4, 
  LENGTH_RA = 12, 
  LENGTH_NS = 20, 
  LENGTH_NA = 20, 
  LENGTH_SLLAO = 1, 
  LENGTH_TLLAO = 1, 
  LENGTH_PREFIX = 4, 
  LENGTH_ARO = 2, 
  LENGTH_ABRO = 3, 
  LENGTH_CONTEXT1 = 2, 
  LENGTH_CONTEXT2 = 3
};





enum __nesc_unnamed4337 {


  REACHABLE = 2, 
  STALE = 3, 
  DELAY = 4, 
  PROBE = 5
};




enum __nesc_unnamed4338 {

  UNDEFINED = 0, 
  HOST = 1, 
  ROUTER = 2, 
  MULTICAST = 3, 
  UNICAST = 4, 
  ROUTER_RESPONSE = 5, 
  LBR_RESPONSE = 6, 
  SEND_ARO = 7, 
  NUD = 8, 
  LBR = 9, 
  NOTSENT = 10, 
  SENT = 11
};




enum __nesc_unnamed4339 {

  RS = 1, 
  RA = 2, 
  NS = 3, 
  NA = 4
};
#line 281
#line 275
typedef struct context_table_t {
  uint8_t cid : 4;
  struct in6_addr prefix;
  uint8_t c_bit : 1;
  uint16_t valid_lifetime;
} 
__attribute((packed))  context_table_t;









#line 286
typedef struct abr_cache_t {
  uint16_t valid_lifetime;
  uint32_t version;
  struct in6_addr abr_addr;
  uint8_t cid[16];
} __attribute((packed))  abr_cache;
# 22 "/opt/tinyos-main/tos/lib/net/blip/Neighbr.h"
#line 15
typedef struct neigbr_info_t {
  uint8_t isRouter;
  uint32_t next_ndtime;
  uint8_t type;
  uint8_t state;
  uint32_t timer;
  uint8_t reserved;
} __attribute((packed))  neighbr_info;







#line 25
typedef struct neighbr_cache_t {

  struct in6_addr ip_address;
  ieee_eui64_t linklayer_addr;
  neighbr_info info;
} __attribute((packed))  neighbr_cache;







#line 36
typedef struct default_rtrlist_t {
  neighbr_cache *rtr;
} __attribute((packed))  default_rtrlist;










#line 45
typedef struct dad_cache_t {
  struct in6_addr ip_address;
  ieee_eui64_t linklayer_addr;
  uint16_t reg_lifetime;
} __attribute((packed))  dad_cache;
#line 61
#line 55
typedef struct __nesc_unnamed4340 {
  union __nesc_unnamed4341 {
    prefix_info prefix_information;
    context_info context_information;
  } ra_info;
  abro_info abro_information;
} __attribute((packed))  prefix_list;
#line 83
enum __nesc_unnamed4342 {

  TENTATIVE = 1, 
  REGISTERED = 2, 
  GARBAGE_COLLECTIBLE = 3, 
  NP = 4
};
# 59 "/opt/tinyos-main/tos/lib/net/blip/BlipStatistics.h"
#line 40
typedef nx_struct __nesc_unnamed4343 {
  nx_uint16_t sent;
  nx_uint16_t forwarded;
  nx_uint8_t rx_drop;
  nx_uint8_t tx_drop;
  nx_uint8_t fw_drop;
  nx_uint8_t rx_total;
  nx_uint8_t encfail;
} __attribute__((packed)) 
#line 59
ip_statistics_t;







#line 62
typedef nx_struct __nesc_unnamed4344 {
  nx_uint8_t hop_limit;
  nx_uint16_t parent;
  nx_uint16_t parent_metric;
  nx_uint16_t parent_etx;
} __attribute__((packed)) route_statistics_t;










#line 69
typedef nx_struct __nesc_unnamed4345 {
  nx_uint8_t sol_rx;
  nx_uint8_t sol_tx;
  nx_uint8_t adv_rx;
  nx_uint8_t adv_tx;
  nx_uint8_t echo_rx;
  nx_uint8_t echo_tx;
  nx_uint8_t unk_rx;
  nx_uint16_t rx;
} __attribute__((packed)) icmp_statistics_t;






#line 81
typedef nx_struct __nesc_unnamed4346 {
  nx_uint16_t sent;
  nx_uint16_t rcvd;
  nx_uint16_t cksum;
} __attribute__((packed)) udp_statistics_t;
# 36 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/in_cksum.h"
uint16_t msg_cksum(const struct ip6_hdr *iph, 
struct ip_iovec *data, 
uint8_t nxt_hdr);
# 35 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/ip_malloc.h"
extern uint8_t heap[1500];
typedef uint16_t bndrt_t;

void ip_malloc_init();
void *ip_malloc(uint16_t sz);
void ip_free(void *ptr);
# 31 "/opt/tinyos-main/tos/lib/net/blip/table.h"
#line 27
typedef struct __nesc_unnamed4347 {
  void *data;
  uint16_t elt_len;
  uint16_t n_elts;
} table_t;

void table_init(table_t *table, void *data, uint16_t elt_len, uint16_t n_elts);

void table_map(table_t *table, void (*fn)(void *arg_0x4133bdd8));
# 43 "/opt/tinyos-main/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;





#line 45
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  timesync_radio_t timestamp;
} __attribute__((packed)) timesync_footer_t;
# 25 "/opt/tinyos-main/tos/lib/net/blip/icmp/icmp6.h"
enum __nesc_unnamed4348 {
  ICMP_EXT_TYPE_PREFIX = 3, 
  ICMP_EXT_TYPE_BEACON = 17
};


enum __nesc_unnamed4349 {

  TRICKLE_JITTER = 10240, 

  TRICKLE_PERIOD = 4096, 


  TRICKLE_MAX = TRICKLE_PERIOD << 5
};
#line 60
#line 54
typedef nx_struct icmp6_echo_hdr {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint16_t ident;
  nx_uint16_t seqno;
} __attribute__((packed)) icmp_echo_hdr_t;
#line 72
#line 62
typedef nx_struct radv {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint8_t hlim;
  nx_uint8_t flags;
  nx_uint16_t lifetime;
  nx_uint32_t reachable_time;
  nx_uint32_t retrans_time;
  nx_uint8_t options[0];
} __attribute__((packed)) radv_t;






#line 74
typedef nx_struct rsol {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint32_t reserved;
} __attribute__((packed)) rsol_t;










#line 81
typedef nx_struct rpfx {
  nx_uint8_t type;
  nx_uint8_t length;
  nx_uint8_t pfx_len;
  nx_uint8_t flags;
  nx_uint32_t valid_lifetime;
  nx_uint32_t preferred_lifetime;
  nx_uint32_t reserved;
  nx_uint8_t prefix[16];
} __attribute__((packed)) pfx_t;







#line 92
typedef nx_struct __nesc_unnamed4350 {
  nx_uint8_t type;
  nx_uint8_t length;
  nx_uint16_t metric;
  nx_uint16_t seqno;
  nx_uint8_t pad[2];
} __attribute__((packed)) rqual_t;

struct icmp_stats {
  uint16_t seq;
  uint8_t ttl;
  uint32_t rtt;
};
typedef TMilli TestC__Timer__precision_tag;
enum SerialAMQueueP____nesc_unnamed4351 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
enum /*PlatformSerialC.UartC*/Msp430Uart1C__0____nesc_unnamed4352 {
  Msp430Uart1C__0__CLIENT_ID = 0U
};
typedef T32khz /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__precision_tag;
typedef uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
enum /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0____nesc_unnamed4353 {
  Msp430Usart1C__0__CLIENT_ID = 0U
};
typedef uint8_t /*PrintfC.QueueC*/BigQueueC__0__queue_t;
typedef /*PrintfC.QueueC*/BigQueueC__0__queue_t /*PrintfC.QueueC*/BigQueueC__0__Queue__t;
typedef uint8_t PrintfP__Queue__t;
typedef TMicro OneWireMasterC__BusyWait__precision_tag;
typedef uint16_t OneWireMasterC__BusyWait__size_type;
typedef TMicro /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag;
typedef uint16_t /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__precision_tag;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__size_type;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__precision_tag;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type;
typedef TMicro /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__frequency_tag;
typedef /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__frequency_tag /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__precision_tag;
typedef uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__size_type;
typedef T32khz CC2420ControlP__StartupTimer__precision_tag;
typedef uint32_t CC2420ControlP__StartupTimer__size_type;
typedef uint16_t CC2420ControlP__ReadRssi__val_t;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4354 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC__0____nesc_unnamed4355 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0____nesc_unnamed4356 {
  Msp430Spi0C__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0____nesc_unnamed4357 {
  Msp430Usart0C__0__CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1____nesc_unnamed4358 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC__2____nesc_unnamed4359 {
  CC2420SpiC__2__CLIENT_ID = 2U
};
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__1____nesc_unnamed4360 {
  Msp430Timer32khzC__1__ALARM_ID = 1U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef struct in6_iid IPForwardingEngineP__Pool__t;
typedef TMilli IPForwardingEngineP__PrintTimer__precision_tag;
typedef TMilli NeighbrCacheP__Timer__precision_tag;
typedef TMilli NeighbrCacheP__NUDTimer__precision_tag;
typedef struct send_info IPDispatchP__SendInfoPool__t;
typedef ip_statistics_t IPDispatchP__BlipStatistics__stat_str;
typedef struct send_entry *IPDispatchP__SendQueue__t;
typedef TMilli IPDispatchP__ExpireTimer__precision_tag;
typedef message_t IPDispatchP__FragPool__t;
typedef struct send_entry IPDispatchP__SendEntryPool__t;
typedef T32khz CC2420TransmitP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420TransmitP__PacketTimeStamp__size_type;
typedef T32khz CC2420TransmitP__BackoffTimer__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffTimer__size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC__3____nesc_unnamed4361 {
  CC2420SpiC__3__CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420ReceiveP__PacketTimeStamp__size_type;
typedef T32khz CC2420PacketP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStamp32khz__size_type;
typedef T32khz CC2420PacketP__LocalTime32khz__precision_tag;
typedef TMilli CC2420PacketP__LocalTimeMilli__precision_tag;
typedef TMilli CC2420PacketP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStampMilli__size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__4____nesc_unnamed4362 {
  CC2420SpiC__4__CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum CC2420TinyosNetworkC____nesc_unnamed4363 {
  CC2420TinyosNetworkC__TINYOS_N_NETWORKS = 0U
};
typedef TMilli PacketLinkP__DelayTimer__precision_tag;
typedef message_t /*IPDispatchC.FragPool*/PoolC__0__pool_t;
typedef /*IPDispatchC.FragPool*/PoolC__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t;
typedef /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t;
typedef struct send_entry /*IPDispatchC.SendEntryPool*/PoolC__1__pool_t;
typedef /*IPDispatchC.SendEntryPool*/PoolC__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t;
typedef /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t;
typedef struct send_entry */*IPDispatchC.QueueC*/QueueC__0__queue_t;
typedef /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__t;
typedef struct send_info /*IPDispatchC.SendInfoPool*/PoolC__2__pool_t;
typedef /*IPDispatchC.SendInfoPool*/PoolC__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t;
typedef /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t;
typedef struct in6_iid /*IPStackC.FwdAddrPoolC*/PoolC__3__pool_t;
typedef /*IPStackC.FwdAddrPoolC*/PoolC__3__pool_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t;
typedef /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__t;
typedef TMilli SSLP__RetransmitTimer__precision_tag;
typedef TMilli SSLP__PrintTimer__precision_tag;
typedef udp_statistics_t UdpP__BlipStatistics__stat_str;
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void TestC__SplitControl__startDone(error_t error);
#line 138
static void TestC__SplitControl__stopDone(error_t error);
#line 113
static void TestC__SSLPControl__startDone(error_t error);
#line 138
static void TestC__SSLPControl__stopDone(error_t error);
# 60 "/opt/tinyos-main/tos/interfaces/Boot.nc"
static void TestC__Boot__booted(void );
# 36 "Node.nc"
static void TestC__Node__servicesAvailable(services_available *services, uint8_t count);
# 29 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
static void TestC__UDP__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void TestC__Timer__fired(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformC__Init__init(void );
# 46 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 43
static void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );



static void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );





static void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 45
static void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__default__initClocks(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
# 51 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x407344b0);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x407344b0);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
# 41 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 68
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 42
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 41 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t delta);
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 62 "/opt/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__default__lowestState(void );
# 76 "/opt/tinyos-main/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x405f74a0);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x405f74a0);
# 57 "/opt/tinyos-main/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 67 "/opt/tinyos-main/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 100
static void LedsP__Leds__led2Toggle(void );
#line 89
static void LedsP__Leds__led2On(void );
# 73 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );






static bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
#line 78
static void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
#line 78
static void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput(void );






static void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw(void );
#line 53
static void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr(void );
#line 99
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
#line 99
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
#line 92
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );




static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );




static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );




static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );
#line 99
static void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
#line 58
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle(void );
#line 85
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );
#line 85
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );









static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void );
#line 85
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );




static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr(void );
# 42 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );





static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );

static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
# 6 "Node.nc"
static error_t NodeC__Node__setUA(void );






static error_t NodeC__Node__addService(char *service, char *scope, struct in6_addr *loc, uint16_t port);




static error_t NodeC__Node__getServices(void );
#line 8
static bool NodeC__Node__getUAState(void );
#line 30
static error_t NodeC__Node__findService(char *service, char *scope);
#line 20
static bool NodeC__Node__getSAState(void );
#line 33
static error_t NodeC__Node__printServices(void );
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40984730, 
# 103 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40987d30, 
# 67 "/opt/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40987d30, 
# 96 "/opt/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x409b3940, 
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 94
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x409ae388, 
# 71 "/opt/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/opt/tinyos-main/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/opt/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/opt/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a64010, 
# 67 "/opt/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a64010, 
# 96 "/opt/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a67968, 
# 71 "/opt/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a64b10, 
# 31 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a64b10);
# 23 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a64b10, 
# 23 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/opt/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/opt/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 65 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(
# 44 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0dec0);
# 59 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(
# 44 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0dec0);
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(
# 49 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b09500);
# 48 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(
# 45 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0b680, 
# 44 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len);
#line 79
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(
# 45 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0b680, 
# 79 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(
# 45 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0b680, 
# 95 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(
# 45 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0b680, 
# 53 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void );
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(
# 48 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0aa48);
# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(
# 48 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0aa48);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(
# 48 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0aa48);
# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(
# 48 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0aa48);
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(
# 43 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0d478);
# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(
# 43 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0d478);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(
# 43 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0d478);
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(
# 51 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b1c6d0, 
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(
# 51 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b1c6d0);
# 143 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart1P__Usart__enableUartRx(void );
#line 123
static void HplMsp430Usart1P__Usart__enableUart(void );
#line 97
static void HplMsp430Usart1P__Usart__resetUsart(bool reset);
#line 179
static void HplMsp430Usart1P__Usart__disableIntr(void );
#line 90
static void HplMsp430Usart1P__Usart__setUmctl(uint8_t umctl);
#line 133
static void HplMsp430Usart1P__Usart__enableUartTx(void );
#line 148
static void HplMsp430Usart1P__Usart__disableUartRx(void );
#line 182
static void HplMsp430Usart1P__Usart__enableIntr(void );
#line 207
static void HplMsp430Usart1P__Usart__clrIntr(void );
#line 80
static void HplMsp430Usart1P__Usart__setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart1P__Usart__tx(uint8_t data);
#line 128
static void HplMsp430Usart1P__Usart__disableUart(void );
#line 174
static void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config);
#line 158
static void HplMsp430Usart1P__Usart__disableSpi(void );
#line 138
static void HplMsp430Usart1P__Usart__disableUartTx(void );
# 95 "/opt/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t HplMsp430Usart1P__AsyncStdControl__start(void );









static error_t HplMsp430Usart1P__AsyncStdControl__stop(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40bc8bd8, 
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40bc8bd8);
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 53 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 61 "/opt/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bee948);
# 65 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bedcf8);
# 59 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bedcf8);
# 56 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 90 "/opt/tinyos-main/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 62 "/opt/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 46 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void );
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void TelosSerialP__Resource__granted(void );
# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
static error_t TelosSerialP__StdControl__start(void );









static error_t TelosSerialP__StdControl__stop(void );
# 31 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 73 "/opt/tinyos-main/tos/interfaces/BigQueue.nc"
static /*PrintfC.QueueC*/BigQueueC__0__Queue__t /*PrintfC.QueueC*/BigQueueC__0__Queue__head(void );
#line 90
static error_t /*PrintfC.QueueC*/BigQueueC__0__Queue__enqueue(/*PrintfC.QueueC*/BigQueueC__0__Queue__t newVal);
#line 65
static uint16_t /*PrintfC.QueueC*/BigQueueC__0__Queue__maxSize(void );
#line 81
static /*PrintfC.QueueC*/BigQueueC__0__Queue__t /*PrintfC.QueueC*/BigQueueC__0__Queue__dequeue(void );
#line 50
static bool /*PrintfC.QueueC*/BigQueueC__0__Queue__empty(void );







static uint16_t /*PrintfC.QueueC*/BigQueueC__0__Queue__size(void );
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void PrintfP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void PrintfP__retrySend__runTask(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t PrintfP__Init__init(void );
# 49 "/opt/tinyos-main/tos/lib/printf/Putchar.nc"
static int PrintfP__Putchar__putchar(int c);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t PutcharP__Init__init(void );
# 60 "/opt/tinyos-main/tos/interfaces/Boot.nc"
static void SerialStartP__Boot__booted(void );
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void SerialStartP__SerialControl__startDone(error_t error);
#line 138
static void SerialStartP__SerialControl__stopDone(error_t error);
# 29 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr);
#line 60
static bool IPAddressP__IPAddress__getEUILLAddress(struct in6_addr *addr);
#line 44
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr);
#line 34
static bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr);




static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr);










static bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr);
# 5 "/opt/tinyos-main/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void );

static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void );
#line 6
static ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void );
# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void Ieee154AddressP__Config__syncDone(error_t error);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t Ieee154AddressP__Init__init(void );
# 12 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/ReadId48.nc"
static error_t Ds2411P__ReadId48__read(uint8_t *id);
# 10 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/OneWireStream.nc"
static error_t OneWireMasterC__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len);
# 66 "/opt/tinyos-main/tos/lib/timer/BusyWait.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__size_type dt);
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow(void );
# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__size_type /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get(void );
# 44 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__makeInput(void );
#line 43
static bool /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__get(void );


static void /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__makeOutput(void );
#line 41
static void /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__clr(void );
# 48 "/opt/tinyos-main/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t DallasId48ToIeeeEui64C__LocalIeeeEui64__getId(void );
# 93 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 117
static bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
#line 112
static bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );
#line 66
static ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
#line 54
static error_t CC2420ControlP__CC2420Config__sync(void );
# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__fired(void );
# 63 "/opt/tinyos-main/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__default__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDone__runTask(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
#line 102
static void CC2420ControlP__SyncResource__granted(void );
# 71 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__sync__runTask(void );
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 88
static error_t CC2420ControlP__Resource__request(void );
# 68 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420ControlP__RssiResource__granted(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 66
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 44 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__GeneralIO__get(void );


static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__set(void );
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__clr(void );

static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__7__GeneralIO__get(void );
#line 43
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__8__GeneralIO__get(void );


static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__set(void );
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__clr(void );


static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__GeneralIO__get(void );


static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__set(void );
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__clr(void );
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 54 "/opt/tinyos-main/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 66
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );
# 52 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__clear(void );
#line 47
static void HplMsp430InterruptP__Port14__disable(void );
#line 67
static void HplMsp430InterruptP__Port14__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port14__enable(void );









static void HplMsp430InterruptP__Port26__clear(void );
#line 72
static void HplMsp430InterruptP__Port26__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port17__clear(void );
#line 72
static void HplMsp430InterruptP__Port17__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port21__clear(void );
#line 72
static void HplMsp430InterruptP__Port21__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port12__clear(void );
#line 72
static void HplMsp430InterruptP__Port12__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port24__clear(void );
#line 72
static void HplMsp430InterruptP__Port24__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port15__clear(void );
#line 72
static void HplMsp430InterruptP__Port15__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port27__clear(void );
#line 72
static void HplMsp430InterruptP__Port27__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port10__clear(void );
#line 47
static void HplMsp430InterruptP__Port10__disable(void );
#line 67
static void HplMsp430InterruptP__Port10__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port10__enable(void );









static void HplMsp430InterruptP__Port22__clear(void );
#line 72
static void HplMsp430InterruptP__Port22__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port13__clear(void );
#line 72
static void HplMsp430InterruptP__Port13__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port25__clear(void );
#line 72
static void HplMsp430InterruptP__Port25__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port16__clear(void );
#line 72
static void HplMsp430InterruptP__Port16__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port20__clear(void );
#line 72
static void HplMsp430InterruptP__Port20__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port11__clear(void );
#line 72
static void HplMsp430InterruptP__Port11__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port23__clear(void );
#line 72
static void HplMsp430InterruptP__Port23__default__fired(void );
#line 72
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 61 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );
# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 61 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );
#line 54
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );
# 82 "/opt/tinyos-main/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40f2d828, 
# 62 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40f2d828, 
# 91 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40f2d828, 
# 82 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40f2d828, 
# 51 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40f2d828, 
# 71 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/opt/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x40f2c280, 
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40f2ca28, 
# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40f2ca28, 
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40efbdb0);
# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40efbdb0);
# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40efbdb0);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40efbdb0);
# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40efbdb0);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40f2a200);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 71 "/opt/tinyos-main/tos/interfaces/State.nc"
static uint8_t StateImplP__State__getState(
# 67 "/opt/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x40f50668);
# 56 "/opt/tinyos-main/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/opt/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x40f50668);
# 66 "/opt/tinyos-main/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/opt/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x40f50668, 
# 66 "/opt/tinyos-main/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/opt/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x40f50668);
# 45 "/opt/tinyos-main/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/opt/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x40f50668, 
# 45 "/opt/tinyos-main/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP__State__forceState(
# 67 "/opt/tinyos-main/tos/system/StateImplP.nc"
uint8_t arg_0x40f50668, 
# 51 "/opt/tinyos-main/tos/interfaces/State.nc"
uint8_t reqState);
# 65 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(
# 76 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f67860);
# 59 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(
# 76 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f67860);
# 70 "/opt/tinyos-main/tos/interfaces/SpiPacket.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(
# 79 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f66a08, 
# 59 "/opt/tinyos-main/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
#line 82
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(
# 79 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f66a08, 
# 75 "/opt/tinyos-main/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(
# 82 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9bc70);
# 45 "/opt/tinyos-main/tos/interfaces/SpiByte.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(
# 81 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9b220);
# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(
# 81 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9b220);
# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(
# 81 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9b220);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(
# 81 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9b220);
# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(
# 81 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9b220);
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(
# 75 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f6ae00);
# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(
# 75 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f6ae00);
# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(
# 75 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f6ae00);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(
# 75 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f6ae00);
# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(
# 75 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f6ae00);
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );
# 180 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart0P__Usart__enableRxIntr(void );
#line 197
static void HplMsp430Usart0P__Usart__clrRxIntr(void );
#line 97
static void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 179
static void HplMsp430Usart0P__Usart__disableIntr(void );
#line 90
static void HplMsp430Usart0P__Usart__setUmctl(uint8_t umctl);
#line 177
static void HplMsp430Usart0P__Usart__disableRxIntr(void );
#line 207
static void HplMsp430Usart0P__Usart__clrIntr(void );
#line 80
static void HplMsp430Usart0P__Usart__setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart0P__Usart__tx(uint8_t data);
#line 128
static void HplMsp430Usart0P__Usart__disableUart(void );
#line 153
static void HplMsp430Usart0P__Usart__enableSpi(void );
#line 168
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t HplMsp430Usart0P__Usart__rx(void );
#line 192
static bool HplMsp430Usart0P__Usart__isRxIntrPending(void );
#line 158
static void HplMsp430Usart0P__Usart__disableSpi(void );
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40bc8bd8, 
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40bc8bd8);
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawI2CInterrupts__fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__default__fired(
# 40 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40bc4c18);
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void );
# 79 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );








static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(
# 55 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bee948);
# 61 "/opt/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(
# 55 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bee948);
# 65 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bedcf8);
# 59 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bedcf8);
# 56 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 73
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 90 "/opt/tinyos-main/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 7 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430I2C0P__HplI2C__isI2C(void );
# 55 "/opt/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 103 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void );
# 109 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 47 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x411389f0);
# 92 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 47 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x411389f0);
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 47 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x411389f0, 
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 47 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x411389f0, 
# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 47 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x411389f0);
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static void IPProtocolsP__SubIP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t IPProtocolsP__IP__send(
# 9 "/opt/tinyos-main/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x411a8208, 
# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void IPProtocolsP__IP__default__recv(
# 9 "/opt/tinyos-main/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x411a8208, 
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool IPForwardingEngineP__ForwardingEvents__default__approve(
# 21 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x411954f8, 
# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 13
static bool IPForwardingEngineP__ForwardingEvents__default__initiate(
# 21 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x411954f8, 
# 13 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void IPForwardingEngineP__ForwardingEvents__default__linkResult(
# 21 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x411954f8, 
# 39 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct in6_addr *dest, struct send_info *info);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void IPForwardingEngineP__defaultRouteAddedTask__runTask(void );
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPForwardingEngineP__IPForward__default__send(
# 27 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x411cf6a8, 
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);







static void IPForwardingEngineP__IPForward__recv(
# 27 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x411cf6a8, 
# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPForwardingEngineP__IPForward__sendDone(
# 27 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x411cf6a8, 
# 22 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
struct send_info *status);
# 43 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingTableEvents.nc"
static void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded(void );
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void IPForwardingEngineP__PrintTimer__fired(void );
# 49 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
static void IPForwardingEngineP__NeighbrCache__prefixReg(void );
#line 61
static void IPForwardingEngineP__NeighbrCache__NUD_reminder(struct in6_addr ip_address);
#line 59
static void IPForwardingEngineP__NeighbrCache__default_rtrlistempty(void );
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingTable.nc"
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, int prefix_len_bits);
# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static error_t IPForwardingEngineP__IP__send(struct ip6_packet *msg);
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPLower.nc"
static void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status);
# 11 "/opt/tinyos-main/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, ieee154_addr_t *link_addr);




static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx);
static int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx);
# 49 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
static void IPNeighborDiscoveryP__NeighbrCache__prefixReg(void );
#line 61
static void IPNeighborDiscoveryP__NeighbrCache__NUD_reminder(struct in6_addr ip_address);
#line 59
static void IPNeighborDiscoveryP__NeighbrCache__default_rtrlistempty(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void NeighbrCacheP__Timer__fired(void );
#line 83
static void NeighbrCacheP__NUDTimer__fired(void );
# 23 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
static void NeighbrCacheP__NeighbrCache__PrintTable(void );
#line 11
static error_t NeighbrCacheP__NeighbrCache__removeentry(struct in6_addr ip);





static neighbr_cache *NeighbrCacheP__NeighbrCache__findEntry(struct in6_addr ip);
#line 15
static error_t NeighbrCacheP__NeighbrCache__resolveIP(struct in6_addr *ip, ieee154_addr_t *linkaddr);
#line 13
static error_t NeighbrCacheP__NeighbrCache__delEntry(uint8_t i);
# 10 "/opt/tinyos-main/tos/lib/net/blip/interfaces/RouterList.nc"
static error_t NeighbrCacheP__RouterList__remove(struct in6_addr ip);
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t IPDispatchP__SplitControl__start(void );
# 60 "/opt/tinyos-main/tos/interfaces/Boot.nc"
static void IPDispatchP__Boot__booted(void );
# 34 "/opt/tinyos-main/tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void IPDispatchP__BlipStatistics__clear(void );
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void IPDispatchP__RadioControl__startDone(error_t error);
#line 138
static void IPDispatchP__RadioControl__stopDone(error_t error);
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPLower.nc"
static error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void IPDispatchP__ExpireTimer__fired(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t IPDispatchP__Init__init(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void IPDispatchP__sendTask__runTask(void );
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void IPDispatchP__Ieee154Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



IPDispatchP__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP__SplitControl__start(void );
#line 130
static error_t CC2420CsmaP__SplitControl__stop(void );
# 95 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__RadioBackoff__default__requestCca(message_t * msg);
#line 81
static void CC2420CsmaP__RadioBackoff__default__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__RadioBackoff__default__requestCongestionBackoff(message_t * msg);
#line 81
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 73 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP__CC2420Transmit__sendDone(message_t * p_msg, error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t CC2420CsmaP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 76 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420CsmaP__CC2420Power__startVRegDone(void );
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420CsmaP__Resource__granted(void );
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP__sendDone_task__runTask(void );
#line 75
static void CC2420CsmaP__stopDone_task__runTask(void );
#line 75
static void CC2420CsmaP__startDone_task__runTask(void );
# 66 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
# 61 "/opt/tinyos-main/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffTimer__fired(void );
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 51 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
# 24 "/opt/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420TransmitP__SpiResource__granted(void );
# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP__StdControl__start(void );









static error_t CC2420TransmitP__StdControl__stop(void );
# 91 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP__CC2420Config__syncDone(error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 68 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP__StdControl__start(void );









static error_t CC2420ReceiveP__StdControl__stop(void );
# 64 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static int8_t CC2420PacketP__CC2420Packet__getRssi(message_t *p_msg);










static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg);
#line 72
static uint8_t CC2420PacketP__CC2420Packet__getLqi(message_t *p_msg);
# 70 "/opt/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(
#line 66
message_t * msg);
#line 78
static void CC2420PacketP__PacketTimeStamp32khz__set(
#line 73
message_t * msg, 




CC2420PacketP__PacketTimeStamp32khz__size_type value);
# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420PacketP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "/opt/tinyos-main/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420PacketP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 59 "/opt/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
static error_t CC2420PacketP__Acks__requestAck(
#line 53
message_t * msg);
#line 85
static bool CC2420PacketP__Acks__wasAcked(
#line 80
message_t * msg);
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void UniqueSendP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
#line 75
static error_t UniqueSendP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t UniqueSendP__Init__init(void );
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t UniqueReceiveP__Init__init(void );
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void CC2420TinyosNetworkP__grantTask__runTask(void );
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__ActiveSend__default__sendDone(
#line 96
message_t * msg, 



error_t error);
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__release(
# 46 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x41661628);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__default__granted(
# 46 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x41661628);
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__BareSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

CC2420TinyosNetworkP__BareSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__ActiveReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 65 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static void CC2420TinyosNetworkP__BarePacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t CC2420TinyosNetworkP__BarePacket__payloadLength(
#line 74
message_t * msg);
#line 106
static uint8_t CC2420TinyosNetworkP__BarePacket__maxPayloadLength(void );
#line 94
static void CC2420TinyosNetworkP__BarePacket__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );
# 53 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void PacketLinkP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void PacketLinkP__send__runTask(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void PacketLinkP__DelayTimer__fired(void );
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t PacketLinkP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 65 "/opt/tinyos-main/tos/interfaces/PacketLink.nc"
static uint16_t PacketLinkP__PacketLink__getRetryDelay(
#line 62
message_t * msg);
#line 46
static void PacketLinkP__PacketLink__setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);
#line 59
static uint16_t PacketLinkP__PacketLink__getRetries(
#line 56
message_t * msg);
#line 53
static void PacketLinkP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool PacketLinkP__PacketLink__wasDelivered(
#line 68
message_t * msg);
# 8 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ReadLqi.nc"
static uint8_t CC2420ReadLqiC__ReadLqi__readRssi(message_t *msg);
#line 6
static uint8_t CC2420ReadLqiC__ReadLqi__readLqi(message_t *msg);
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t * 


/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void );
#line 89
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(
#line 85
/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void );
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t * 


/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void );
#line 89
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(
#line 85
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t * newVal);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void );
# 73 "/opt/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 71
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  

/*IPDispatchC.QueueC*/QueueC__0__Queue__head(void );
#line 90
static error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(
#line 86
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  

/*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void );







static uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void );
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t * 


/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void );
#line 89
static error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(
#line 85
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t * newVal);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void );
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t IPStackControlP__SplitControl__start(void );








static void IPStackControlP__SubSplitControl__startDone(error_t error);
#line 138
static void IPStackControlP__SubSplitControl__stopDone(error_t error);
# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
static error_t IPStackControlP__RoutingControl__default__start(void );
#line 95
static error_t IPStackControlP__StdControl__default__start(void );
# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPCoreP__ICMP_IP__send(
# 50 "/opt/tinyos-main/tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x41745418, 
# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void ICMPCoreP__ICMP_IP__default__recv(
# 50 "/opt/tinyos-main/tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x41745418, 
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 23
static void ICMPCoreP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 14 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPPacketC__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__t * 


/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get(void );
#line 89
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(
#line 85
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__t * newVal);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init(void );
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t SSLP__SplitControl__start(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void SSLP__RetransmitTimer__fired(void );
# 29 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
static void SSLP__UDPSend__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void SSLP__RadioControl__startDone(error_t error);
#line 138
static void SSLP__RadioControl__stopDone(error_t error);
# 29 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
static void SSLP__UDPReceive__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void SSLP__PrintTimer__fired(void );
# 36 "Node.nc"
static void SSLP__Node__servicesAvailable(services_available *services, uint8_t count);
# 7 "ServiceLocation.nc"
static error_t SSLP__ServiceLocation__send(char *service_type, char *scope);




static int SSLP__ServiceLocation__findService(char *service, char *scope);
# 34 "/opt/tinyos-main/tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void UdpP__BlipStatistics__clear(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t UdpP__Init__init(void );
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
static error_t UdpP__UDP__sendto(
# 8 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x417c88f0, 
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UdpP__UDP__bind(
# 8 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x417c88f0, 
# 12 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
uint16_t port);








static error_t UdpP__UDP__sendtov(
# 8 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x417c88f0, 
# 21 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *dest, 
struct ip_iovec *iov);






static void UdpP__UDP__default__recvfrom(
# 8 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x417c88f0, 
# 29 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static void UdpP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t TestC__SplitControl__start(void );
#line 104
static error_t TestC__SSLPControl__start(void );
# 6 "Node.nc"
static error_t TestC__Node__setUA(void );






static error_t TestC__Node__addService(char *service, char *scope, struct in6_addr *loc, uint16_t port);




static error_t TestC__Node__getServices(void );
#line 8
static bool TestC__Node__getUAState(void );
#line 20
static bool TestC__Node__getSAState(void );
#line 33
static error_t TestC__Node__printServices(void );
# 60 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool TestC__IPAddress__getEUILLAddress(struct in6_addr *addr);
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
static error_t TestC__UDP__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t TestC__UDP__bind(uint16_t port);
# 67 "/opt/tinyos-main/tos/interfaces/Leds.nc"
static void TestC__Leds__led0Toggle(void );
#line 100
static void TestC__Leds__led2Toggle(void );
# 7 "ServiceLocation.nc"
static error_t TestC__ServiceLocation__send(char *service_type, char *scope);
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void TestC__Timer__startPeriodic(uint32_t dt);
# 24 "TestC.nc"
struct in6_addr TestC__LinkLocal;


struct in6_addr;



static inline uint8_t TestC__stringlength(char *data);







static inline void TestC__Boot__booted(void );










static inline void TestC__Timer__fired(void );
#line 72
static inline void TestC__SSLPControl__startDone(error_t error);
#line 97
static inline void TestC__UDP__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);
#line 117
static inline void TestC__SSLPControl__stopDone(error_t error);







static inline void TestC__SplitControl__startDone(error_t error);



static inline void TestC__SplitControl__stopDone(error_t error);








static inline void TestC__Node__servicesAvailable(services_available *sa_service, uint8_t count);
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MoteClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 10 "/opt/tinyos-main/tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 6 "/opt/tinyos-main/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__uwait(uint16_t u);




static __inline void MotePlatformC__TOSH_wait(void );




static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set);










static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void );
#line 56
static inline error_t MotePlatformC__Init__init(void );
# 43 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 51 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TACTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TAIV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4364 {

  Msp430ClockP__ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP__TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP__ACLK_CALIB_PERIOD
};





static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 79
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 100
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );





static inline void Msp430ClockP__startTimerA(void );
#line 163
static inline void Msp430ClockP__startTimerB(void );
#line 175
static void Msp430ClockP__set_dco_calib(int calib);





static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib);
#line 204
static inline void Msp430ClockP__busyCalibrateDco(void );
#line 229
static inline error_t Msp430ClockP__Init__init(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
# 51 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x407344b0);
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 62 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x407344b0);
# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
# 62 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
#line 81
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t;


static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;


static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm);
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 130
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 175
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
#line 192
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t;


static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000C)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000A)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x001A)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0018)))  ;
# 62 "/opt/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 59 "/opt/tinyos-main/tos/chips/msp430/McuSleepC.nc"
bool McuSleepC__dirty = TRUE;
mcu_power_t McuSleepC__powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC__msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC__getPowerState(void );
#line 112
static inline void McuSleepC__computePowerState(void );




static inline void McuSleepC__McuSleep__sleep(void );
#line 134
static inline mcu_power_t McuSleepC__McuPowerOverride__default__lowestState(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos-main/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos-main/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos-main/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x405f74a0);
# 76 "/opt/tinyos-main/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-main/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4365 {

  SchedulerBasicP__NUM_TASKS = 25U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 42 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "/opt/tinyos-main/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 84
static inline void LedsP__Leds__led0Toggle(void );
#line 104
static inline void LedsP__Leds__led2On(void );









static inline void LedsP__Leds__led2Toggle(void );
# 59 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );
#line 57
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr(void );

static inline uint8_t /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput(void );

static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
#line 56
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );



static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );

static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );






static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr(void );
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
# 58 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );





static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 58 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 36 "Node.nc"
static void NodeC__Node__servicesAvailable(services_available *services, uint8_t count);
# 11 "NodeC.nc"
uint8_t NodeC__SAstate = FALSE;
#line 11
uint8_t NodeC__UAstate = FALSE;
services_available NodeC__sa_services[3];


static uint8_t NodeC__stringlength(char *data);









static inline int NodeC__allocindex(void );
#line 41
static inline int NodeC__findService(char *service);
#line 95
static inline uint8_t NodeC__service_count(void );










static inline error_t NodeC__Node__setUA(void );





static inline error_t NodeC__Node__getUAState(void );
#line 126
static inline error_t NodeC__Node__getSAState(void );




static inline error_t NodeC__Node__addService(char *serv, char *scop, struct in6_addr *loc, uint16_t port_no);
#line 149
static inline error_t NodeC__Node__findService(char *service, char *scope);
#line 184
static inline error_t NodeC__Node__getServices(void );
#line 196
static inline error_t NodeC__Node__printServices(void );
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40984730, 
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40987d30, 
# 96 "/opt/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4366 {
#line 126
  AMQueueImplP__0__CancelTask = 0U
};
#line 126
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4367 {
#line 169
  AMQueueImplP__0__errorTask = 1U
};
#line 169
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4368 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x409b3940, 
# 103 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x409ae388, 
# 71 "/opt/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 172
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/opt/tinyos-main/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/opt/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/opt/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4369 {
#line 191
  SerialP__RunTx = 2U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4370 {
#line 322
  SerialP__startDoneTask = 3U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4371 {
#line 332
  SerialP__stopDoneTask = 4U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4372 {
#line 341
  SerialP__defaultSerialFlushTask = 5U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4373 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4374 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4375 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4376 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4377 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4378 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4379 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4380 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 518
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 559
static inline void SerialP__RunTx__runTask(void );
#line 668
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a64010, 
# 96 "/opt/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a67968, 
# 71 "/opt/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a64b10, 
# 31 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a64b10);
# 23 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a64b10, 
# 23 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/opt/tinyos-main/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4381 {
#line 158
  SerialDispatcherP__0__signalSendDone = 6U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4382 {
#line 275
  SerialDispatcherP__0__receiveTask = 7U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4383 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4384 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4385 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/opt/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/opt/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4386 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(
# 49 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b09500);
# 97 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(bool reset);
#line 179
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr(void );


static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr(void );
#line 224
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data);
#line 128
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart(void );
#line 174
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config);
# 79 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(
# 45 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0b680, 
# 79 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(
# 45 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0b680, 
# 95 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(
# 45 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0b680, 
# 53 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(
# 48 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0aa48);
# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(
# 48 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0aa48);
# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(
# 48 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0aa48);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(
# 43 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x40b0d478);
#line 59
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len;
#line 59
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len;
uint8_t * /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;
#line 60
uint8_t * /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf;
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos;
#line 61
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos;
uint8_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_byte_time;
uint8_t /*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner;

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id);
#line 77
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(uint8_t id);







static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id);






static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id);








static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id);
#line 134
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data);
#line 147
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len);
#line 162
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(uint8_t id);
#line 208
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void );

static inline bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id);

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id);
static inline msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte);
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P__UCLK__selectIOFunc(void );
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart1P__Interrupts__txDone(void );
# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P__URXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart1P__URXD__selectModuleFunc(void );






static void HplMsp430Usart1P__UTXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart1P__UTXD__selectModuleFunc(void );






static void HplMsp430Usart1P__SOMI__selectIOFunc(void );
#line 99
static void HplMsp430Usart1P__SIMO__selectIOFunc(void );
# 87 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static volatile uint8_t HplMsp430Usart1P__IE2 __asm ("0x0001");
static volatile uint8_t HplMsp430Usart1P__ME2 __asm ("0x0005");
static volatile uint8_t HplMsp430Usart1P__IFG2 __asm ("0x0003");
static volatile uint8_t HplMsp430Usart1P__U1TCTL __asm ("0x0079");
static volatile uint8_t HplMsp430Usart1P__U1RCTL __asm ("0x007A");
static volatile uint8_t HplMsp430Usart1P__U1TXBUF __asm ("0x007F");



void sig_UART1RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0006)))  ;




void sig_UART1TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0004)))  ;



static inline error_t HplMsp430Usart1P__AsyncStdControl__start(void );



static inline error_t HplMsp430Usart1P__AsyncStdControl__stop(void );
#line 140
static inline void HplMsp430Usart1P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart1P__Usart__resetUsart(bool reset);
#line 203
static inline void HplMsp430Usart1P__Usart__enableUart(void );







static void HplMsp430Usart1P__Usart__disableUart(void );








static inline void HplMsp430Usart1P__Usart__enableUartTx(void );




static inline void HplMsp430Usart1P__Usart__disableUartTx(void );





static inline void HplMsp430Usart1P__Usart__enableUartRx(void );




static inline void HplMsp430Usart1P__Usart__disableUartRx(void );
#line 251
static void HplMsp430Usart1P__Usart__disableSpi(void );
#line 283
static inline void HplMsp430Usart1P__configUart(msp430_uart_union_config_t *config);









static inline void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config);
#line 347
static inline void HplMsp430Usart1P__Usart__clrIntr(void );
#line 359
static inline void HplMsp430Usart1P__Usart__disableIntr(void );
#line 377
static inline void HplMsp430Usart1P__Usart__enableIntr(void );






static inline void HplMsp430Usart1P__Usart__tx(uint8_t data);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 90 "/opt/tinyos-main/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void );
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40bc8bd8, 
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40bc8bd8);









static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);









static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
# 49 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1____nesc_unnamed4387 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 61 "/opt/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bee948);
# 65 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bedcf8);
# 59 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bedcf8);
# 53 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 46 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-main/tos/system/ArbiterP.nc"
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4388 {
#line 75
  ArbiterP__0__grantedTask = 8U
};
#line 75
typedef int /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4389 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4390 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4391 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
#line 93
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );










static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);



static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);









static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "/opt/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "/opt/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 74 "/opt/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );




static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t TelosSerialP__Resource__release(void );
#line 97
static error_t TelosSerialP__Resource__immediateRequest(void );
# 8 "/opt/tinyos-main/tos/platforms/telosa/TelosSerialP.nc"
msp430_uart_union_config_t TelosSerialP__msp430_uart_telos_config = { { .ubr = UBR_1MHZ_115200, .umctl = UMCTL_1MHZ_115200, .ssel = 0x02, .pena = 0, .pev = 0, .spb = 0, .clen = 1, .listen = 0, .mm = 0, .ckpl = 0, .urxse = 0, .urxeie = 1, .urxwie = 0, .utxe = 1, .urxe = 1 } };

static inline error_t TelosSerialP__StdControl__start(void );


static inline error_t TelosSerialP__StdControl__stop(void );



static inline void TelosSerialP__Resource__granted(void );

static inline msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void );
# 51 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 48 "/opt/tinyos-main/tos/system/BigQueueC.nc"
/*PrintfC.QueueC*/BigQueueC__0__queue_t /*PrintfC.QueueC*/BigQueueC__0__queue[800];
uint16_t /*PrintfC.QueueC*/BigQueueC__0__head = 0;
uint16_t /*PrintfC.QueueC*/BigQueueC__0__tail = 0;
uint16_t /*PrintfC.QueueC*/BigQueueC__0__size = 0;

static inline bool /*PrintfC.QueueC*/BigQueueC__0__Queue__empty(void );



static inline uint16_t /*PrintfC.QueueC*/BigQueueC__0__Queue__size(void );



static inline uint16_t /*PrintfC.QueueC*/BigQueueC__0__Queue__maxSize(void );



static inline /*PrintfC.QueueC*/BigQueueC__0__queue_t /*PrintfC.QueueC*/BigQueueC__0__Queue__head(void );



static inline void /*PrintfC.QueueC*/BigQueueC__0__printQueue(void );
#line 85
static inline /*PrintfC.QueueC*/BigQueueC__0__queue_t /*PrintfC.QueueC*/BigQueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*PrintfC.QueueC*/BigQueueC__0__Queue__enqueue(/*PrintfC.QueueC*/BigQueueC__0__queue_t newVal);
# 90 "/opt/tinyos-main/tos/interfaces/BigQueue.nc"
static error_t PrintfP__Queue__enqueue(PrintfP__Queue__t newVal);
#line 81
static PrintfP__Queue__t PrintfP__Queue__dequeue(void );
#line 50
static bool PrintfP__Queue__empty(void );







static uint16_t PrintfP__Queue__size(void );
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
static error_t PrintfP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 126 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static 
#line 123
void * 


PrintfP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t PrintfP__retrySend__postTask(void );
# 114 "/opt/tinyos-main/tos/lib/printf/PrintfP.nc"
enum PrintfP____nesc_unnamed4392 {
#line 114
  PrintfP__retrySend = 9U
};
#line 114
typedef int PrintfP____nesc_sillytask_retrySend[PrintfP__retrySend];
#line 101
enum PrintfP____nesc_unnamed4393 {
  PrintfP__S_STARTED, 
  PrintfP__S_FLUSHING
};

message_t PrintfP__printfMsg;
uint8_t PrintfP__state = PrintfP__S_STARTED;

static inline error_t PrintfP__Init__init(void );




static inline void PrintfP__retrySend__runTask(void );




static void PrintfP__sendNext(void );










int printfflush(void )   ;
#line 142
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error);









static inline int PrintfP__Putchar__putchar(int c);
# 49 "/opt/tinyos-main/tos/lib/printf/Putchar.nc"
static int PutcharP__Putchar__putchar(int c);
# 98 "/opt/tinyos-main/tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void );








int putchar(int c) __attribute((noinline))   ;
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t SerialStartP__SerialControl__start(void );
# 44 "/opt/tinyos-main/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void );



static inline void SerialStartP__SerialControl__startDone(error_t error);
static inline void SerialStartP__SerialControl__stopDone(error_t error);
# 5 "/opt/tinyos-main/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static ieee154_panid_t IPAddressP__Ieee154Address__getPanId(void );

static ieee154_laddr_t IPAddressP__Ieee154Address__getExtAddr(void );
#line 6
static ieee154_saddr_t IPAddressP__Ieee154Address__getShortAddr(void );
# 34 "/opt/tinyos-main/tos/lib/net/blip/IPAddressP.nc"
bool IPAddressP__m_valid_addr = FALSE;
#line 34
bool IPAddressP__m_short_addr = FALSE;
struct in6_addr IPAddressP__m_addr;


static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr);
#line 61
static inline bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr);




static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr);
#line 88
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr);
#line 129
static inline bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr);
#line 175
static bool IPAddressP__IPAddress__getEUILLAddress(struct in6_addr *addr);
# 48 "/opt/tinyos-main/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t Ieee154AddressP__LocalIeeeEui64__getId(void );
# 18 "/opt/tinyos-main/tos/lib/net/blip/Ieee154AddressP.nc"
ieee154_saddr_t Ieee154AddressP__m_saddr;
ieee154_panid_t Ieee154AddressP__m_panid;

static inline error_t Ieee154AddressP__Init__init(void );





static inline ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void );


static inline ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void );


static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void );
#line 60
static inline void Ieee154AddressP__Config__syncDone(error_t err);
# 10 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/OneWireStream.nc"
static error_t Ds2411P__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len);
# 20 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/Ds2411P.nc"
bool Ds2411P__haveId = FALSE;
dallasid48_serial_t Ds2411P__ds2411id;

static inline error_t Ds2411P__readId(void );
#line 36
static inline error_t Ds2411P__ReadId48__read(uint8_t *id);
# 66 "/opt/tinyos-main/tos/lib/timer/BusyWait.nc"
static void OneWireMasterC__BusyWait__wait(OneWireMasterC__BusyWait__size_type dt);
# 44 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void OneWireMasterC__Pin__makeInput(void );
#line 43
static bool OneWireMasterC__Pin__get(void );


static void OneWireMasterC__Pin__makeOutput(void );
#line 41
static void OneWireMasterC__Pin__clr(void );
# 25 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/OneWireMasterC.nc"
#line 18
typedef enum OneWireMasterC____nesc_unnamed4394 {
  OneWireMasterC__DELAY_5US = 5, 
  OneWireMasterC__RESET_LOW_TIME = 560, 
  OneWireMasterC__DELAY_60US = 60, 
  OneWireMasterC__PRESENCE_DETECT_LOW_TIME = 240, 
  OneWireMasterC__PRESENCE_RESET_HIGH_TIME = 480, 
  OneWireMasterC__SLOT_TIME = 65
} OneWireMasterC__onewiretimes_t;

static inline bool OneWireMasterC__reset(void );
#line 42
static inline void OneWireMasterC__writeOne(void );






static inline void OneWireMasterC__writeZero(void );






static inline bool OneWireMasterC__readBit(void );










static inline void OneWireMasterC__writeByte(uint8_t c);
#line 80
static inline uint8_t OneWireMasterC__readByte(void );










static inline error_t OneWireMasterC__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len);
# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get(void );
# 58 "/opt/tinyos-main/tos/lib/timer/BusyWaitCounterC.nc"
enum /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0____nesc_unnamed4395 {

  BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE = (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type )1 << (8 * sizeof(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type ) - 1)
};

static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type dt);
#line 83
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__get(void );
# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__overflow(void );
# 49 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get(void );
#line 64
static inline void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow(void );
# 78 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__makeInput(void );






static void /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__makeOutput(void );
#line 73
static bool /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__get(void );
#line 53
static void /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__clr(void );
# 49 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__clr(void );

static inline bool /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__get(void );
static inline void /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__makeInput(void );

static inline void /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__makeOutput(void );
# 12 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/ReadId48.nc"
static error_t DallasId48ToIeeeEui64C__ReadId48__read(uint8_t *id);
# 8 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/DallasId48ToIeeeEui64C.nc"
static ieee_eui64_t DallasId48ToIeeeEui64C__LocalIeeeEui64__getId(void );
# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
# 48 "/opt/tinyos-main/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void );
# 66 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt);
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 46 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 40
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 63 "/opt/tinyos-main/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP__syncDone__postTask(void );
# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 50 "/opt/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void );




static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void );
# 46 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 40
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );




static void CC2420ControlP__VREN__makeOutput(void );
#line 40
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 88
static error_t CC2420ControlP__SpiResource__request(void );
#line 120
static error_t CC2420ControlP__SyncResource__release(void );
#line 88
static error_t CC2420ControlP__SyncResource__request(void );
# 76 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length);
# 61 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 53
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__RssiResource__release(void );
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 125 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4396 {
#line 125
  CC2420ControlP__sync = 10U
};
#line 125
typedef int CC2420ControlP____nesc_sillytask_sync[CC2420ControlP__sync];
enum CC2420ControlP____nesc_unnamed4397 {
#line 126
  CC2420ControlP__syncDone = 11U
};
#line 126
typedef int CC2420ControlP____nesc_sillytask_syncDone[CC2420ControlP__syncDone];
#line 90
#line 84
typedef enum CC2420ControlP____nesc_unnamed4398 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;

uint8_t CC2420ControlP__m_tx_power;

uint16_t CC2420ControlP__m_pan;

uint16_t CC2420ControlP__m_short_addr;

ieee_eui64_t CC2420ControlP__m_ext_addr;

bool CC2420ControlP__m_sync_busy;


bool CC2420ControlP__autoAckEnabled;


bool CC2420ControlP__hwAutoAckDefault;


bool CC2420ControlP__addressRecognition;


bool CC2420ControlP__hwAddressRecognition;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );
static inline void CC2420ControlP__writeTxctrl(void );





static inline error_t CC2420ControlP__Init__init(void );
#line 188
static inline error_t CC2420ControlP__Resource__request(void );







static inline error_t CC2420ControlP__Resource__release(void );







static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 216
static error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 269
static inline error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 299
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );



static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
#line 324
static inline error_t CC2420ControlP__CC2420Config__sync(void );
#line 356
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 383
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );






static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );









static inline void CC2420ControlP__SyncResource__granted(void );
#line 414
static inline void CC2420ControlP__SpiResource__granted(void );




static inline void CC2420ControlP__RssiResource__granted(void );
#line 432
static inline void CC2420ControlP__StartupTimer__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 467
static inline void CC2420ControlP__sync__runTask(void );



static inline void CC2420ControlP__syncDone__runTask(void );









static void CC2420ControlP__writeFsctrl(void );
#line 498
static void CC2420ControlP__writeMdmctrl0(void );
#line 517
static void CC2420ControlP__writeId(void );
#line 535
static inline void CC2420ControlP__writeTxctrl(void );
#line 547
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data);
# 41 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
#line 47
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
#line 65
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC__0____nesc_unnamed4399 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0____nesc_unnamed4400 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 102
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 78 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__HplGeneralIO__get(void );
# 51 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__GeneralIO__makeInput(void );
# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__HplGeneralIO__clr(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__makeOutput(void );
# 73 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__7__HplGeneralIO__get(void );
# 51 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__7__GeneralIO__get(void );
# 73 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__8__HplGeneralIO__get(void );
# 51 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__8__GeneralIO__get(void );
# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__HplGeneralIO__clr(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
# 78 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__HplGeneralIO__get(void );
# 51 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__GeneralIO__makeInput(void );
# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__HplGeneralIO__clr(void );
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__makeOutput(void );
# 68 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void );
# 61 "/opt/tinyos-main/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time);
# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm);

static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void );
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void );
#line 92
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void );
# 49 "/opt/tinyos-main/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode);
#line 61
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );






static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__fired(void );
#line 72
static void HplMsp430InterruptP__Port26__fired(void );
#line 72
static void HplMsp430InterruptP__Port17__fired(void );
#line 72
static void HplMsp430InterruptP__Port21__fired(void );
#line 72
static void HplMsp430InterruptP__Port12__fired(void );
#line 72
static void HplMsp430InterruptP__Port24__fired(void );
#line 72
static void HplMsp430InterruptP__Port15__fired(void );
#line 72
static void HplMsp430InterruptP__Port27__fired(void );
#line 72
static void HplMsp430InterruptP__Port10__fired(void );
#line 72
static void HplMsp430InterruptP__Port22__fired(void );
#line 72
static void HplMsp430InterruptP__Port13__fired(void );
#line 72
static void HplMsp430InterruptP__Port25__fired(void );
#line 72
static void HplMsp430InterruptP__Port16__fired(void );
#line 72
static void HplMsp430InterruptP__Port20__fired(void );
#line 72
static void HplMsp430InterruptP__Port11__fired(void );
#line 72
static void HplMsp430InterruptP__Port23__fired(void );
# 64 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0008)))  ;
#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void );
static inline void HplMsp430InterruptP__Port12__default__fired(void );
static inline void HplMsp430InterruptP__Port13__default__fired(void );

static inline void HplMsp430InterruptP__Port15__default__fired(void );
static inline void HplMsp430InterruptP__Port16__default__fired(void );
static inline void HplMsp430InterruptP__Port17__default__fired(void );
static inline void HplMsp430InterruptP__Port10__enable(void );



static inline void HplMsp430InterruptP__Port14__enable(void );



static inline void HplMsp430InterruptP__Port10__disable(void );



static inline void HplMsp430InterruptP__Port14__disable(void );



static inline void HplMsp430InterruptP__Port10__clear(void );
static inline void HplMsp430InterruptP__Port11__clear(void );
static inline void HplMsp430InterruptP__Port12__clear(void );
static inline void HplMsp430InterruptP__Port13__clear(void );
static inline void HplMsp430InterruptP__Port14__clear(void );
static inline void HplMsp430InterruptP__Port15__clear(void );
static inline void HplMsp430InterruptP__Port16__clear(void );
static inline void HplMsp430InterruptP__Port17__clear(void );








static inline void HplMsp430InterruptP__Port10__edge(bool l2h);
#line 142
static inline void HplMsp430InterruptP__Port14__edge(bool l2h);
#line 169
void sig_PORT2_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0002)))  ;
#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void );
static inline void HplMsp430InterruptP__Port21__default__fired(void );
static inline void HplMsp430InterruptP__Port22__default__fired(void );
static inline void HplMsp430InterruptP__Port23__default__fired(void );
static inline void HplMsp430InterruptP__Port24__default__fired(void );
static inline void HplMsp430InterruptP__Port25__default__fired(void );
static inline void HplMsp430InterruptP__Port26__default__fired(void );
static inline void HplMsp430InterruptP__Port27__default__fired(void );
#line 206
static inline void HplMsp430InterruptP__Port20__clear(void );
static inline void HplMsp430InterruptP__Port21__clear(void );
static inline void HplMsp430InterruptP__Port22__clear(void );
static inline void HplMsp430InterruptP__Port23__clear(void );
static inline void HplMsp430InterruptP__Port24__clear(void );
static inline void HplMsp430InterruptP__Port25__clear(void );
static inline void HplMsp430InterruptP__Port26__clear(void );
static inline void HplMsp430InterruptP__Port27__clear(void );
# 52 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void );
# 68 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void );
# 52 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising);








static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );







static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 52 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void );
# 68 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void );
# 52 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising);
#line 65
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 70 "/opt/tinyos-main/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40f2d828, 
# 91 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40f2d828, 
# 71 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/opt/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 45 "/opt/tinyos-main/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/opt/tinyos-main/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 97
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420SpiP__SpiResource__request(void );
#line 128
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 102
static void CC2420SpiP__Resource__granted(
# 45 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40efbdb0);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4401 {
#line 88
  CC2420SpiP__grant = 12U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4402 {
  CC2420SpiP__RESOURCE_COUNT = 5U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4403 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);









static error_t CC2420SpiP__attemptRelease(void );
#line 359
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/tinyos-main/tos/system/StateImplP.nc"
uint8_t StateImplP__state[5U];

enum StateImplP____nesc_unnamed4404 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static bool StateImplP__State__isState(uint8_t id, uint8_t myState);









static uint8_t StateImplP__State__getState(uint8_t id);
# 82 "/opt/tinyos-main/tos/interfaces/SpiPacket.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(
# 79 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f66a08, 
# 75 "/opt/tinyos-main/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(
# 82 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9bc70);
# 180 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void );
#line 197
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void );
#line 97
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset);
#line 177
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void );
#line 224
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data);
#line 168
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void );
#line 192
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void );
#line 158
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void );
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(
# 81 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9b220);
# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(
# 81 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9b220);
# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(
# 81 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9b220);
# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(
# 81 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f9b220);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(
# 75 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40f6ae00);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void );
# 102 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4405 {
#line 102
  Msp430SpiNoDmaP__0__signalDone_task = 13U
};
#line 102
typedef int /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_sillytask_signalDone_task[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task];
#line 91
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4406 {
  Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf;
uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos;
uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client;

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );


static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id);



static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id);



static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
#line 172
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id);
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id);

static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void );
#line 205
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len);
#line 227
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 244
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );





static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__UCLK__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__UCLK__selectModuleFunc(void );
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart0P__Interrupts__txDone(void );
# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__URXD__selectIOFunc(void );
#line 99
static void HplMsp430Usart0P__UTXD__selectIOFunc(void );
# 7 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430Usart0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430Usart0P__HplI2C__isI2C(void );
# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SOMI__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__SOMI__selectModuleFunc(void );
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void HplMsp430Usart0P__I2CInterrupts__fired(void );
# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SIMO__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__SIMO__selectModuleFunc(void );
# 89 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static volatile uint8_t HplMsp430Usart0P__IE1 __asm ("0x0000");
static volatile uint8_t HplMsp430Usart0P__ME1 __asm ("0x0004");
static volatile uint8_t HplMsp430Usart0P__IFG1 __asm ("0x0002");
static volatile uint8_t HplMsp430Usart0P__U0TCTL __asm ("0x0071");

static volatile uint8_t HplMsp430Usart0P__U0TXBUF __asm ("0x0077");

void sig_UART0RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0012)))  ;




void sig_UART0TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0010)))  ;
#line 132
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 207
static inline void HplMsp430Usart0P__Usart__disableUart(void );
#line 238
static inline void HplMsp430Usart0P__Usart__enableSpi(void );








static void HplMsp430Usart0P__Usart__disableSpi(void );








static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config);








static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 330
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void );










static inline void HplMsp430Usart0P__Usart__clrRxIntr(void );



static inline void HplMsp430Usart0P__Usart__clrIntr(void );



static inline void HplMsp430Usart0P__Usart__disableRxIntr(void );







static inline void HplMsp430Usart0P__Usart__disableIntr(void );



static inline void HplMsp430Usart0P__Usart__enableRxIntr(void );
#line 382
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data);



static inline uint8_t HplMsp430Usart0P__Usart__rx(void );
# 90 "/opt/tinyos-main/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(void );
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40bc8bd8, 
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40bc8bd8);
# 39 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__fired(
# 40 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40bc4c18);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawI2CInterrupts__fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__default__fired(uint8_t id);
# 49 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2____nesc_unnamed4407 {
#line 49
  FcfsResourceQueueC__2__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void );




static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );



static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(
# 55 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bee948);
# 61 "/opt/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(
# 55 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bee948);
# 65 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bedcf8);
# 59 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bedcf8);
# 79 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void );
# 73 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested(void );
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "/opt/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x40bd8e70);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
# 75 "/opt/tinyos-main/tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4408 {
#line 75
  ArbiterP__1__grantedTask = 14U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4409 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4410 {
#line 68
  ArbiterP__1__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4411 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;



static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(uint8_t id);
#line 93
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
#line 133
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );










static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void );

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 97 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset);
# 49 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static volatile uint8_t HplMsp430I2C0P__U0CTL __asm ("0x0070");





static inline bool HplMsp430I2C0P__HplI2C__isI2C(void );



static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
# 62 "/opt/tinyos-main/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 93
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 106
static inline am_addr_t ActiveMessageAddressC__amAddress(void );
# 41 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void );
# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void );
# 57 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void );
#line 47
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
#line 65
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow(void );
# 67 "/opt/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__1____nesc_unnamed4412 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type ) + 5, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void );
# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get(void );
# 77 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1____nesc_unnamed4413 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 5, 
  TransformAlarmC__1__MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm(void );
#line 147
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type dt);
#line 162
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4414 {
#line 74
  AlarmToTimerC__0__fired = 15U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 47 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x411389f0);
#line 72
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4415 {
#line 72
  VirtualizeTimerC__0__updateFromTimer = 16U
};
#line 72
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 54
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4416 {

  VirtualizeTimerC__0__NUM_TIMERS = 9U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 60
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4417 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 101
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 140
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 205
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/opt/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static error_t IPProtocolsP__SubIP__send(struct ip6_packet *msg);
# 14 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPProtocolsP__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static void IPProtocolsP__IP__recv(
# 9 "/opt/tinyos-main/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x411a8208, 
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 18 "/opt/tinyos-main/tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__SubIP__recv(struct ip6_hdr *iph, 
void *payload, 
size_t len, 
struct ip6_metadata *meta);
#line 56
static error_t IPProtocolsP__IP__send(uint8_t nxt_hdr, struct ip6_packet *msg);







static inline void IPProtocolsP__IP__default__recv(uint8_t nxt_hdr, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool IPForwardingEngineP__ForwardingEvents__approve(
# 21 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x411954f8, 
# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 13
static bool IPForwardingEngineP__ForwardingEvents__initiate(
# 21 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x411954f8, 
# 13 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void IPForwardingEngineP__ForwardingEvents__linkResult(
# 21 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x411954f8, 
# 39 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct in6_addr *dest, struct send_info *info);
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPForwardingEngineP__IPForward__send(
# 27 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x411cf6a8, 
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
IPForwardingEngineP__Pool__t * 


IPForwardingEngineP__Pool__get(void );
#line 89
static error_t IPForwardingEngineP__Pool__put(
#line 85
IPForwardingEngineP__Pool__t * newVal);
# 43 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingTableEvents.nc"
static void IPForwardingEngineP__ForwardingTableEvents__defaultRouteAdded(void );
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IPRaw__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 44 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPForwardingEngineP__IPAddress__isLocalAddress(struct in6_addr *addr);





static bool IPForwardingEngineP__IPAddress__isLLAddress(struct in6_addr *addr);
# 92 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static bool IPForwardingEngineP__PrintTimer__isRunning(void );
#line 64
static void IPForwardingEngineP__PrintTimer__startPeriodic(uint32_t dt);
# 17 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
static neighbr_cache *IPForwardingEngineP__NeighbrCache__findEntry(struct in6_addr ip);
# 14 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPForwardingEngineP__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 99 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
enum IPForwardingEngineP____nesc_unnamed4418 {
#line 99
  IPForwardingEngineP__defaultRouteAddedTask = 17U
};
#line 99
typedef int IPForwardingEngineP____nesc_sillytask_defaultRouteAddedTask[IPForwardingEngineP__defaultRouteAddedTask];
#line 52
struct route_entry IPForwardingEngineP__routing_table[20];
#line 99
static inline void IPForwardingEngineP__defaultRouteAddedTask__runTask(void );
#line 157
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, 
int prefix_len_bits);
#line 187
static error_t IPForwardingEngineP__do_send(uint8_t ifindex, struct in6_addr *next, struct ip6_packet *pkt);










static inline error_t IPForwardingEngineP__IP__send(struct ip6_packet *pkt);
#line 274
static void IPForwardingEngineP__IPForward__recv(uint8_t ifindex, struct ip6_hdr *iph, void *payload, 
struct ip6_metadata *meta);
#line 351
static void IPForwardingEngineP__IPForward__sendDone(uint8_t ifindex, struct send_info *status);
#line 366
static inline void IPForwardingEngineP__PrintTimer__fired(void );
#line 382
static inline bool IPForwardingEngineP__ForwardingEvents__default__approve(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop);


static inline bool IPForwardingEngineP__ForwardingEvents__default__initiate(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop);


static inline void IPForwardingEngineP__ForwardingEvents__default__linkResult(uint8_t idx, struct in6_addr *host, 
struct send_info *info);

static inline error_t IPForwardingEngineP__IPForward__default__send(uint8_t ifindex, struct in6_addr *next_hop, 
struct ip6_packet *pkt, 
void *data);







static inline void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);

static inline void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded(void );




static inline void IPForwardingEngineP__NeighbrCache__default_rtrlistempty(void );

static inline void IPForwardingEngineP__NeighbrCache__NUD_reminder(struct in6_addr ip_address);

static inline void IPForwardingEngineP__NeighbrCache__prefixReg(void );
# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
static void IPNeighborDiscoveryP__IPForward__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPNeighborDiscoveryP__IPForward__sendDone(struct send_info *status);
# 5 "/opt/tinyos-main/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static ieee154_panid_t IPNeighborDiscoveryP__Ieee154Address__getPanId(void );
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPLower.nc"
static error_t IPNeighborDiscoveryP__IPLower__send(struct ieee154_frame_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 29 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPNeighborDiscoveryP__IPAddress__getLLAddr(struct in6_addr *addr);




static bool IPNeighborDiscoveryP__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 15 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
static error_t IPNeighborDiscoveryP__NeighbrCache__resolveIP(struct in6_addr *ip, ieee154_addr_t *linkaddr);
# 32 "/opt/tinyos-main/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, 
uint8_t *ctx);










static inline int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, 
struct in6_addr *ctx);
#line 58
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, 
ieee154_addr_t *link_addr);
#line 95
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next, struct ip6_packet *msg, void *ptr);
#line 129
static inline void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 160
static inline void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status);









static inline void IPNeighborDiscoveryP__NeighbrCache__default_rtrlistempty(void );

static inline void IPNeighborDiscoveryP__NeighbrCache__NUD_reminder(struct in6_addr ip_address);

static inline void IPNeighborDiscoveryP__NeighbrCache__prefixReg(void );
# 49 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
static void NeighbrCacheP__NeighbrCache__prefixReg(void );
#line 61
static void NeighbrCacheP__NeighbrCache__NUD_reminder(struct in6_addr ip_address);
#line 59
static void NeighbrCacheP__NeighbrCache__default_rtrlistempty(void );
# 21 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCacheP.nc"
neighbr_cache NeighbrCacheP__neighbr_table[10];

struct in6_addr;
dad_cache NeighbrCacheP__dad_table[10];

default_rtrlist NeighbrCacheP__rtr_table[2];


uint8_t NeighbrCacheP__no_rtr;

uint16_t NeighbrCacheP__count[10];
uint32_t NeighbrCacheP__NUD_REACHBLE_PERIOD;
prefix_list NeighbrCacheP__prefix_table[3];
#line 77
static int NeighbrCacheP__find(struct in6_addr ip);
#line 103
static inline int NeighbrCacheP__findRouter(struct in6_addr ip);
#line 183
static inline void NeighbrCacheP__PrefixPrint(void );
#line 200
static inline void NeighbrCacheP__PrintRouterTable(void );
#line 288
static inline error_t NeighbrCacheP__NeighbrCache__removeentry(struct in6_addr ip);
#line 308
static inline error_t NeighbrCacheP__NeighbrCache__delEntry(uint8_t i);
#line 322
static error_t NeighbrCacheP__NeighbrCache__resolveIP(struct in6_addr *ip, ieee154_addr_t *linkaddr);
#line 351
static neighbr_cache *NeighbrCacheP__NeighbrCache__findEntry(struct in6_addr ip);
#line 374
static void NeighbrCacheP__NeighbrCache__PrintTable(void );
#line 551
static inline void NeighbrCacheP__Timer__fired(void );
#line 654
static inline void NeighbrCacheP__NUDTimer__fired(void );
#line 850
static inline error_t NeighbrCacheP__RouterList__remove(struct in6_addr rtr_ip);
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void IPDispatchP__SplitControl__startDone(error_t error);
#line 138
static void IPDispatchP__SplitControl__stopDone(error_t error);
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__SendInfoPool__t * 


IPDispatchP__SendInfoPool__get(void );
#line 89
static error_t IPDispatchP__SendInfoPool__put(
#line 85
IPDispatchP__SendInfoPool__t * newVal);
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t IPDispatchP__RadioControl__start(void );
#line 130
static error_t IPDispatchP__RadioControl__stop(void );
# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPLower.nc"
static void IPDispatchP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPDispatchP__IPLower__sendDone(struct send_info *status);
# 8 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ReadLqi.nc"
static uint8_t IPDispatchP__ReadLqi__readRssi(message_t *msg);
#line 6
static uint8_t IPDispatchP__ReadLqi__readLqi(message_t *msg);
# 73 "/opt/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 71
IPDispatchP__SendQueue__t  

IPDispatchP__SendQueue__head(void );
#line 90
static error_t IPDispatchP__SendQueue__enqueue(
#line 86
IPDispatchP__SendQueue__t  newVal);
#line 81
static 
#line 79
IPDispatchP__SendQueue__t  

IPDispatchP__SendQueue__dequeue(void );
#line 50
static bool IPDispatchP__SendQueue__empty(void );
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void IPDispatchP__ExpireTimer__startPeriodic(uint32_t dt);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t IPDispatchP__sendTask__postTask(void );
# 16 "/opt/tinyos-main/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
static int IPDispatchP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx);
static int IPDispatchP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx);
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__FragPool__t * 


IPDispatchP__FragPool__get(void );
#line 89
static error_t IPDispatchP__FragPool__put(
#line 85
IPDispatchP__FragPool__t * newVal);
# 89 "/opt/tinyos-main/tos/interfaces/Leds.nc"
static void IPDispatchP__Leds__led2On(void );
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t IPDispatchP__Ieee154Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

IPDispatchP__Ieee154Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 65 "/opt/tinyos-main/tos/interfaces/Packet.nc"
static void IPDispatchP__BarePacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t IPDispatchP__BarePacket__payloadLength(
#line 74
message_t * msg);
#line 106
static uint8_t IPDispatchP__BarePacket__maxPayloadLength(void );
#line 94
static void IPDispatchP__BarePacket__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 46 "/opt/tinyos-main/tos/interfaces/PacketLink.nc"
static void IPDispatchP__PacketLink__setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);
#line 59
static uint16_t IPDispatchP__PacketLink__getRetries(
#line 56
message_t * msg);
#line 53
static void IPDispatchP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool IPDispatchP__PacketLink__wasDelivered(
#line 68
message_t * msg);
# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__SendEntryPool__t * 


IPDispatchP__SendEntryPool__get(void );
#line 89
static error_t IPDispatchP__SendEntryPool__put(
#line 85
IPDispatchP__SendEntryPool__t * newVal);
# 439 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
enum IPDispatchP____nesc_unnamed4419 {
#line 439
  IPDispatchP__sendTask = 18U
};
#line 439
typedef int IPDispatchP____nesc_sillytask_sendTask[IPDispatchP__sendTask];
#line 83
static inline int IPDispatchP__lowpan_extern_read_context(struct in6_addr *addr, int context);



static inline int IPDispatchP__lowpan_extern_match_context(struct in6_addr *addr, uint8_t *ctx_id);
# 15 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/internal.h"
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end);
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, struct in6_addr *addr, int context_match_len, 
ieee154_addr_t *l2addr, ieee154_panid_t pan, uint8_t *flags);
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags);
static inline int IPDispatchP__pack_udp(uint8_t *buf, size_t cnt, struct ip6_packet *packet, int offset);
static inline int IPDispatchP__pack_ipnh(uint8_t *dest, size_t cnt, uint8_t *type, struct ip6_packet *packet, int offset);
static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t cnt, struct ip6_packet *packet);
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame);
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt);


static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame);
static inline uint8_t *IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_nh(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
static uint8_t *IPDispatchP__unpack_address(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf, 
ieee154_addr_t *frame, ieee154_panid_t pan);
static inline uint8_t *IPDispatchP__unpack_multicast(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_udp(uint8_t *dest, uint8_t *nxt_hdr, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_ipnh(uint8_t *dest, size_t cnt, uint8_t *nxt_hdr, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, size_t cnt, 
uint8_t *nxt_hdr, uint8_t *buf);
# 16 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/ieee154_header.c"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame);
#line 44
static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame);
# 4 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/ieee154_header.h"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, struct ieee154_frame_addr *frame);
static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame);
# 63 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__iid_eui_cmp(uint8_t *iid, uint8_t *eui);
#line 76
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end);
#line 105
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
#line 136
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
#line 148
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
#line 169
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, struct in6_addr *addr, int context_match_len, 
ieee154_addr_t *l2addr, ieee154_panid_t pan, uint8_t *flags);
#line 235
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags);
#line 261
static inline int IPDispatchP__pack_udp(uint8_t *buf, size_t cnt, struct ip6_packet *packet, int offset);
#line 288
static inline uint8_t IPDispatchP____ipnh_real_length(uint8_t type, struct ip_iovec *pkt, int offset);
#line 325
static inline int IPDispatchP__pack_ipnh(uint8_t *dest, size_t cnt, uint8_t *type, struct ip6_packet *packet, int offset);
#line 380
static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t cnt, struct ip6_packet *packet);
#line 413
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt);
#line 467
static inline uint8_t *IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
#line 501
static inline uint8_t *IPDispatchP__unpack_nh(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);








static inline uint8_t *IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
#line 528
static uint8_t *IPDispatchP__unpack_address(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf, 
ieee154_addr_t *frame, ieee154_panid_t pan);
#line 594
static inline uint8_t *IPDispatchP__unpack_multicast(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf);
#line 626
static inline uint8_t *IPDispatchP__unpack_udp(uint8_t *dest, uint8_t *nxt_hdr, uint8_t *buf);
#line 675
static inline uint8_t *IPDispatchP__unpack_ipnh(uint8_t *dest, size_t cnt, uint8_t *nxt_hdr, uint8_t *buf);
#line 735
static inline uint8_t *IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, size_t cnt, 
uint8_t *nxt_hdr, uint8_t *buf);
#line 769
static inline uint8_t *IPDispatchP__lowpan_unpack_headers(struct lowpan_reconstruct *recon, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt);
# 48 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t *IPDispatchP__getLowpanPayload(struct packed_lowmsg *lowmsg);
#line 68
static __inline uint16_t IPDispatchP__getHeaderBitmap(struct packed_lowmsg *lowmsg);
#line 114
static __inline uint8_t IPDispatchP__setupHeaders(struct packed_lowmsg *packed, uint16_t headers);
#line 163
static __inline uint8_t IPDispatchP__hasFrag1Header(struct packed_lowmsg *msg);


static __inline uint8_t IPDispatchP__hasFragNHeader(struct packed_lowmsg *msg);
#line 255
static __inline uint8_t IPDispatchP__getFragDgramSize(struct packed_lowmsg *msg, uint16_t *size);
#line 272
static __inline uint8_t IPDispatchP__getFragDgramTag(struct packed_lowmsg *msg, uint16_t *tag);
#line 301
static __inline uint8_t IPDispatchP__setFragDgramSize(struct packed_lowmsg *msg, uint16_t size);
#line 321
static __inline uint8_t IPDispatchP__setFragDgramTag(struct packed_lowmsg *msg, uint16_t tag);
#line 337
static __inline uint8_t IPDispatchP__setFragDgramOffset(struct packed_lowmsg *msg, uint8_t size);
# 15 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static int IPDispatchP__lowpan_recon_start(struct ieee154_frame_addr *frame_addr, 
struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len);
#line 76
static inline int IPDispatchP__lowpan_recon_add(struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len);
#line 102
static inline int IPDispatchP__lowpan_frag_get(uint8_t *frag, size_t len, 
struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
struct lowpan_ctx *ctx);
# 99 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
enum IPDispatchP____nesc_unnamed4420 {
  IPDispatchP__S_RUNNING, 
  IPDispatchP__S_STOPPED, 
  IPDispatchP__S_STOPPING
};
uint8_t IPDispatchP__state = IPDispatchP__S_STOPPED;
bool IPDispatchP__radioBusy;
uint8_t IPDispatchP__current_local_label = 0;
ip_statistics_t IPDispatchP__stats;
#line 120
table_t IPDispatchP__recon_cache;



struct lowpan_reconstruct IPDispatchP__recon_data[N_RECONSTRUCTIONS];







static inline void IPDispatchP__reconstruct_clear(void *ent);






static inline struct send_info *IPDispatchP__getSendInfo(void );
#line 151
static void IPDispatchP__SENDINFO_DECR(struct send_info *si);





static inline error_t IPDispatchP__SplitControl__start(void );
#line 174
static inline void IPDispatchP__RadioControl__startDone(error_t error);
#line 189
static inline void IPDispatchP__RadioControl__stopDone(error_t error);




static inline error_t IPDispatchP__Init__init(void );






static inline void IPDispatchP__Boot__booted(void );
#line 214
static void IPDispatchP__deliver(struct lowpan_reconstruct *recon);
#line 253
static inline void IPDispatchP__reconstruct_age(void *elt);
#line 278
static inline void IPDispatchP__ip_print_heap(void );










static inline void IPDispatchP__ExpireTimer__fired(void );
#line 305
static inline struct lowpan_reconstruct *IPDispatchP__get_reconstruct(uint16_t key, uint16_t tag);
#line 337
static inline message_t *IPDispatchP__Ieee154Receive__receive(message_t *msg, void *msg_payload, uint8_t len);
#line 439
static inline void IPDispatchP__sendTask__runTask(void );
#line 494
static inline error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *frame_addr, 
struct ip6_packet *msg, 
void *data);
#line 588
static inline void IPDispatchP__Ieee154Send__sendDone(message_t *msg, error_t error);
#line 666
static inline void IPDispatchP__BlipStatistics__clear(void );
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void CC2420CsmaP__SplitControl__startDone(error_t error);
#line 138
static void CC2420CsmaP__SplitControl__stopDone(error_t error);
# 95 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg);
#line 81
static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime);
# 51 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca);
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void CC2420CsmaP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
static uint16_t CC2420CsmaP__Random__rand16(void );
# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP__SubControl__start(void );









static error_t CC2420CsmaP__SubControl__stop(void );
# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg);
# 71 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420CsmaP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420CsmaP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420CsmaP__CC2420Power__stopVReg(void );
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP__Resource__release(void );
#line 88
static error_t CC2420CsmaP__Resource__request(void );
# 66 "/opt/tinyos-main/tos/interfaces/State.nc"
static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState);





static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP__sendDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__stopDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__startDone_task__postTask(void );
# 74 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP____nesc_unnamed4421 {
#line 74
  CC2420CsmaP__startDone_task = 19U
};
#line 74
typedef int CC2420CsmaP____nesc_sillytask_startDone_task[CC2420CsmaP__startDone_task];
enum CC2420CsmaP____nesc_unnamed4422 {
#line 75
  CC2420CsmaP__stopDone_task = 20U
};
#line 75
typedef int CC2420CsmaP____nesc_sillytask_stopDone_task[CC2420CsmaP__stopDone_task];
enum CC2420CsmaP____nesc_unnamed4423 {
#line 76
  CC2420CsmaP__sendDone_task = 21U
};
#line 76
typedef int CC2420CsmaP____nesc_sillytask_sendDone_task[CC2420CsmaP__sendDone_task];
#line 58
enum CC2420CsmaP____nesc_unnamed4424 {
  CC2420CsmaP__S_STOPPED, 
  CC2420CsmaP__S_STARTING, 
  CC2420CsmaP__S_STARTED, 
  CC2420CsmaP__S_STOPPING, 
  CC2420CsmaP__S_TRANSMITTING
};

message_t * CC2420CsmaP__m_msg;

error_t CC2420CsmaP__sendErr = SUCCESS;


bool CC2420CsmaP__ccaOn;






static inline void CC2420CsmaP__shutdown(void );


static error_t CC2420CsmaP__SplitControl__start(void );
#line 98
static inline error_t CC2420CsmaP__SplitControl__stop(void );
#line 124
static error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len);
#line 207
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP__CC2420Power__startVRegDone(void );





static inline void CC2420CsmaP__Resource__granted(void );





static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void );





static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg);
#line 251
static inline void CC2420CsmaP__sendDone_task__runTask(void );
#line 264
static inline void CC2420CsmaP__startDone_task__runTask(void );







static inline void CC2420CsmaP__stopDone_task__runTask(void );









static inline void CC2420CsmaP__shutdown(void );
#line 295
static inline void CC2420CsmaP__RadioBackoff__default__requestInitialBackoff(message_t *msg);


static inline void CC2420CsmaP__RadioBackoff__default__requestCongestionBackoff(message_t *msg);


static inline void CC2420CsmaP__RadioBackoff__default__requestCca(message_t *msg);
# 81 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg);
# 70 "/opt/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420TransmitP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420TransmitP__PacketTimeStamp__size_type value);
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 54 "/opt/tinyos-main/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 66
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 53
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 109 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void );
#line 66
static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt);






static void CC2420TransmitP__BackoffTimer__stop(void );
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length);
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data);
# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 73 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error);
# 31 "/opt/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 46 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 40
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );
# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "/opt/tinyos-main/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP__SpiResource__release(void );
#line 97
static error_t CC2420TransmitP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420TransmitP__SpiResource__request(void );
# 44 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CCA__makeInput(void );
#line 43
static bool CC2420TransmitP__CCA__get(void );
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 44 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 43
static bool CC2420TransmitP__SFD__get(void );
# 82 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 99 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 89
typedef enum CC2420TransmitP____nesc_unnamed4425 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_SAMPLE_CCA, 
  CC2420TransmitP__S_BEGIN_TRANSMIT, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT, 
  CC2420TransmitP__S_CANCEL
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4426 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320
};
#line 120
message_t * CC2420TransmitP__m_msg;

bool CC2420TransmitP__m_cca;

uint8_t CC2420TransmitP__m_tx_power;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


int8_t CC2420TransmitP__totalCcaChecks;


uint16_t CC2420TransmitP__myInitialBackoff;


uint16_t CC2420TransmitP__myCongestionBackoff;



static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);

static void CC2420TransmitP__loadTXFIFO(void );
static void CC2420TransmitP__attemptSend(void );
static void CC2420TransmitP__congestionBackoff(void );
static error_t CC2420TransmitP__acquireSpiResource(void );
static inline error_t CC2420TransmitP__releaseSpiResource(void );
static void CC2420TransmitP__signalDone(error_t err);



static inline error_t CC2420TransmitP__Init__init(void );







static inline error_t CC2420TransmitP__StdControl__start(void );










static error_t CC2420TransmitP__StdControl__stop(void );
#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
#line 243
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time);
#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 377
static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 389
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg);
#line 416
static inline void CC2420TransmitP__SpiResource__granted(void );
#line 454
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 486
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP__BackoffTimer__fired(void );
#line 547
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
#line 743
static void CC2420TransmitP__attemptSend(void );
#line 788
static void CC2420TransmitP__congestionBackoff(void );






static error_t CC2420TransmitP__acquireSpiResource(void );







static inline error_t CC2420TransmitP__releaseSpiResource(void );
#line 825
static void CC2420TransmitP__loadTXFIFO(void );
#line 850
static void CC2420TransmitP__signalDone(error_t err);
# 43 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 93 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void );
#line 117
static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void );
#line 112
static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void );
#line 66
static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void );
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 70 "/opt/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420ReceiveP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420ReceiveP__PacketTimeStamp__size_type value);
# 43 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SACK__strobe(void );
# 40 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 97
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 128
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 61 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 54
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 148 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4427 {
#line 148
  CC2420ReceiveP__receiveDone_task = 22U
};
#line 148
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 89
#line 81
typedef enum CC2420ReceiveP____nesc_unnamed4428 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_DEC, 
  CC2420ReceiveP__S_RX_DEC_WAIT, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4429 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP__SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;





uint8_t CC2420ReceiveP__m_missed_packets;



bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;

message_t * CC2420ReceiveP__m_p_rx_buf;

message_t CC2420ReceiveP__m_rx_buf;
#line 137
CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;



static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );
static inline bool CC2420ReceiveP__passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP__Init__init(void );





static inline error_t CC2420ReceiveP__StdControl__start(void );
#line 171
static error_t CC2420ReceiveP__StdControl__stop(void );
#line 186
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);








static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 212
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 513
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 530
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 668
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 708
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error);






static void CC2420ReceiveP__beginReceive(void );
#line 732
static void CC2420ReceiveP__flush(void );
#line 758
static void CC2420ReceiveP__receive(void );









static void CC2420ReceiveP__waitForNextPacket(void );
#line 812
static void CC2420ReceiveP__reset_state(void );










static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg);
# 65 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static error_t CC2420PacketP__Acks__requestAck(message_t *p_msg);









static inline bool CC2420PacketP__Acks__wasAcked(message_t *p_msg);





static inline int CC2420PacketP__getAddressLength(int type);








static inline uint8_t * CC2420PacketP__getNetwork(message_t * msg);
#line 111
static inline int8_t CC2420PacketP__CC2420Packet__getRssi(message_t *p_msg);



static inline uint8_t CC2420PacketP__CC2420Packet__getLqi(message_t *p_msg);



static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg);
#line 137
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);
#line 152
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg);
#line 171
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg);





static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
#line 210
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg);








static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg);
# 58 "/opt/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 52 "/opt/tinyos-main/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t UniqueSendP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 100
static void UniqueSendP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
static uint16_t UniqueSendP__Random__rand16(void );
# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg);
# 56 "/opt/tinyos-main/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void );
#line 45
static error_t UniqueSendP__State__requestState(uint8_t reqState);
# 54 "/opt/tinyos-main/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP__localSendId;

enum UniqueSendP____nesc_unnamed4430 {
  UniqueSendP__S_IDLE, 
  UniqueSendP__S_SENDING
};


static inline error_t UniqueSendP__Init__init(void );
#line 75
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len);
#line 104
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/opt/tinyos-main/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP____nesc_unnamed4431 {
  uint16_t source;
  uint8_t dsn;
} UniqueReceiveP__receivedMessages[4];

uint8_t UniqueReceiveP__writeIndex = 0;


uint8_t UniqueReceiveP__recycleSourceElement;

enum UniqueReceiveP____nesc_unnamed4432 {
  UniqueReceiveP__INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP__Init__init(void );









static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
static inline uint16_t UniqueReceiveP__getSourceKey(message_t  *msg);


static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);
#line 112
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 138
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
#line 165
static inline uint16_t UniqueReceiveP__getSourceKey(message_t * msg);
#line 192
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len);
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t CC2420TinyosNetworkP__grantTask__postTask(void );
# 75 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t * p_msg);
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__ActiveSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 53 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
static bool CC2420TinyosNetworkP__Queue__isEmpty(void );
#line 70
static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void );
# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__BareReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__granted(
# 46 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x41661628);
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__ActiveReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 180 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
enum CC2420TinyosNetworkP____nesc_unnamed4433 {
#line 180
  CC2420TinyosNetworkP__grantTask = 23U
};
#line 180
typedef int CC2420TinyosNetworkP____nesc_sillytask_grantTask[CC2420TinyosNetworkP__grantTask];
#line 68
enum CC2420TinyosNetworkP____nesc_unnamed4434 {
  CC2420TinyosNetworkP__OWNER_NONE = 0xff, 
  CC2420TinyosNetworkP__TINYOS_N_NETWORKS = 0U
};




#line 73
enum CC2420TinyosNetworkP____nesc_unnamed4435 {
  CC2420TinyosNetworkP__CLIENT_AM, 
  CC2420TinyosNetworkP__CLIENT_BARE
} CC2420TinyosNetworkP__m_busy_client;

uint8_t CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
#line 78
uint8_t CC2420TinyosNetworkP__next_owner;
#line 102
static inline void CC2420TinyosNetworkP__BarePacket__clear(message_t *msg);



static inline uint8_t CC2420TinyosNetworkP__BarePacket__payloadLength(message_t *msg);




static void CC2420TinyosNetworkP__BarePacket__setPayloadLength(message_t *msg, uint8_t len);




static inline uint8_t CC2420TinyosNetworkP__BarePacket__maxPayloadLength(void );







static inline error_t CC2420TinyosNetworkP__BareSend__send(message_t *msg, uint8_t len);
#line 138
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len);









static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error);








static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 180
static inline void CC2420TinyosNetworkP__grantTask__runTask(void );
#line 229
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id);
#line 247
static inline message_t *CC2420TinyosNetworkP__ActiveReceive__default__receive(message_t *msg, void *payload, uint8_t len);


static inline void CC2420TinyosNetworkP__ActiveSend__default__sendDone(message_t *msg, error_t error);


static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client);
# 49 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
enum /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0____nesc_unnamed4436 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[0];
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
static error_t PacketLinkP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t PacketLinkP__send__postTask(void );
# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void PacketLinkP__DelayTimer__startOneShot(uint32_t dt);




static void PacketLinkP__DelayTimer__stop(void );
# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
static void PacketLinkP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 71 "/opt/tinyos-main/tos/interfaces/State.nc"
static uint8_t PacketLinkP__SendState__getState(void );
#line 56
static void PacketLinkP__SendState__toIdle(void );
#line 45
static error_t PacketLinkP__SendState__requestState(uint8_t reqState);
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_metadata_t * PacketLinkP__CC2420PacketBody__getMetadata(message_t * msg);
# 59 "/opt/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
static error_t PacketLinkP__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool PacketLinkP__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 77 "/opt/tinyos-main/tos/chips/cc2420/link/PacketLinkP.nc"
enum PacketLinkP____nesc_unnamed4437 {
#line 77
  PacketLinkP__send = 24U
};
#line 77
typedef int PacketLinkP____nesc_sillytask_send[PacketLinkP__send];
#line 58
message_t *PacketLinkP__currentSendMsg;


uint8_t PacketLinkP__currentSendLen;


uint16_t PacketLinkP__totalRetries;





enum PacketLinkP____nesc_unnamed4438 {
  PacketLinkP__S_IDLE, 
  PacketLinkP__S_SENDING
};




static void PacketLinkP__signalDone(error_t error);









static inline void PacketLinkP__PacketLink__setRetries(message_t *msg, uint16_t maxRetries);








static inline void PacketLinkP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);






static inline uint16_t PacketLinkP__PacketLink__getRetries(message_t *msg);






static inline uint16_t PacketLinkP__PacketLink__getRetryDelay(message_t *msg);






static inline bool PacketLinkP__PacketLink__wasDelivered(message_t *msg);
#line 130
static inline error_t PacketLinkP__Send__send(message_t *msg, uint8_t len);
#line 171
static inline void PacketLinkP__SubSend__sendDone(message_t *msg, error_t error);
#line 202
static inline void PacketLinkP__DelayTimer__fired(void );






static inline void PacketLinkP__send__runTask(void );










static void PacketLinkP__signalDone(error_t error);
# 64 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static int8_t CC2420ReadLqiC__CC2420Packet__getRssi(message_t *p_msg);







static uint8_t CC2420ReadLqiC__CC2420Packet__getLqi(message_t *p_msg);
# 12 "/opt/tinyos-main/tos/lib/net/blip/platform/CC2420ReadLqiC.nc"
static inline uint8_t CC2420ReadLqiC__ReadLqi__readLqi(message_t *msg);



static inline uint8_t CC2420ReadLqiC__ReadLqi__readRssi(message_t *msg);
# 60 "/opt/tinyos-main/tos/system/PoolP.nc"
uint8_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__free;
uint8_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__index;
/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t * /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[12];
/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[12];

static inline error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void );
#line 88
static inline /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t */*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free;
uint8_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index;
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t * /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[12];
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[12];

static inline error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void );
#line 88
static inline /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t */*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void );
#line 103
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *newVal);
# 48 "/opt/tinyos-main/tos/system/QueueC.nc"
/*IPDispatchC.QueueC*/QueueC__0__queue_t  /*IPDispatchC.QueueC*/QueueC__0__queue[12];
uint8_t /*IPDispatchC.QueueC*/QueueC__0__head = 0;
uint8_t /*IPDispatchC.QueueC*/QueueC__0__tail = 0;
uint8_t /*IPDispatchC.QueueC*/QueueC__0__size = 0;

static inline bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void );



static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__head(void );



static inline void /*IPDispatchC.QueueC*/QueueC__0__printQueue(void );
#line 85
static /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(/*IPDispatchC.QueueC*/QueueC__0__queue_t newVal);
# 60 "/opt/tinyos-main/tos/system/PoolP.nc"
uint8_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free;
uint8_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index;
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t * /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[3];
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[3];

static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void );
#line 88
static inline /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t */*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void );
#line 103
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *newVal);
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void IPStackControlP__SplitControl__startDone(error_t error);
#line 138
static void IPStackControlP__SplitControl__stopDone(error_t error);
#line 104
static error_t IPStackControlP__SubSplitControl__start(void );
# 34 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPStackControlP__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
static error_t IPStackControlP__RoutingControl__start(void );
#line 95
static error_t IPStackControlP__StdControl__start(void );
# 12 "/opt/tinyos-main/tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__SplitControl__start(void );



static inline void IPStackControlP__SubSplitControl__startDone(error_t error);
#line 37
static inline void IPStackControlP__SubSplitControl__stopDone(error_t error);










static inline error_t IPStackControlP__StdControl__default__start(void );

static inline error_t IPStackControlP__RoutingControl__default__start(void );
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static void ICMPCoreP__ICMP_IP__recv(
# 50 "/opt/tinyos-main/tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x41745418, 
# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool ICMPCoreP__IPAddress__setSource(struct ip6_hdr *hdr);
# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPCoreP__IP__send(struct ip6_packet *msg);
# 59 "/opt/tinyos-main/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static void ICMPCoreP__IP__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 107
static inline error_t ICMPCoreP__ICMP_IP__send(uint8_t type, struct ip6_packet *pkt);
#line 120
static inline void ICMPCoreP__ICMP_IP__default__recv(uint8_t type, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
# 23 "/opt/tinyos-main/tos/lib/net/blip/IPPacketC.nc"
static int IPPacketC__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 60 "/opt/tinyos-main/tos/system/PoolP.nc"
uint8_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free;
uint8_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index;
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t * /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[3];
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool[3];

static inline error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init(void );
#line 88
static inline /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t */*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get(void );
#line 103
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t *newVal);
# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static void SSLP__SplitControl__startDone(error_t error);
#line 138
static void SSLP__SplitControl__stopDone(error_t error);
# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void SSLP__RetransmitTimer__startOneShot(uint32_t dt);
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
static error_t SSLP__UDPSend__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t SSLP__UDPSend__bind(uint16_t port);
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t SSLP__RadioControl__start(void );
# 12 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
static error_t SSLP__UDPReceive__bind(uint16_t port);
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
static void SSLP__PrintTimer__startPeriodic(uint32_t dt);
# 6 "Node.nc"
static error_t SSLP__Node__setUA(void );

static bool SSLP__Node__getUAState(void );
#line 30
static error_t SSLP__Node__findService(char *service, char *scope);
#line 20
static bool SSLP__Node__getSAState(void );
# 60 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool SSLP__IPAddress__getEUILLAddress(struct in6_addr *addr);
# 23 "SSLP.nc"
uint8_t SSLP__running = FALSE;
services_available SSLP__services[5];

char SSLP__global_service[16];
#line 26
char SSLP__global_scope[16];
uint8_t SSLP__global_service_len;
#line 27
uint8_t SSLP__global_scope_len;
service_request_msg SSLP__sreq_msg;

sequencer SSLP__available_sequences[5];

uint8_t SSLP__indexer = 0;

char SSLP__append[20] = "service:";

struct sockaddr_in6 SSLP__dest;


uint32_t SSLP__TIMER_PERIOD = 2000U;
uint8_t SSLP__MSGSTATE;





static uint8_t SSLP__stringlength(char *data);










static inline uint8_t SSLP__seq_generator(char *service, char *scope);
#line 98
static inline int SSLP__servicefinder(char *service, char *scope);
#line 115
static inline char *SSLP__addService(char *serv);









static char *SSLP__removeService(char *serv);






static inline void SSLP__fillHeader(struct sslp_hdr *header, uint8_t type, uint16_t seq_no);
#line 144
static inline error_t SSLP__SplitControl__start(void );
#line 173
static void SSLP__srvrqst_snd(char *service, uint8_t length_service, char *scope, uint8_t length_scope);
#line 231
static inline void SSLP__srvrqst_rcv(struct sockaddr_in6 *from, void *data);
#line 281
static inline error_t SSLP__ServiceLocation__send(char *service, char *scope);
#line 310
static inline int SSLP__ServiceLocation__findService(char *service, char *scope);
#line 329
static inline void SSLP__UDPSend__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);



static inline void SSLP__UDPReceive__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);
#line 348
static inline void SSLP__RetransmitTimer__fired(void );
#line 360
static inline void SSLP__PrintTimer__fired(void );
#line 379
static inline void SSLP__RadioControl__startDone(error_t e);



static inline void SSLP__RadioControl__stopDone(error_t e);



static inline void SSLP__Node__servicesAvailable(services_available *sa_service, uint8_t count);
# 39 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool UdpP__IPAddress__setSource(struct ip6_hdr *hdr);
# 29 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
static void UdpP__UDP__recvfrom(
# 8 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x417c88f0, 
# 29 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
static error_t UdpP__IP__send(struct ip6_packet *msg);
# 15 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
enum UdpP____nesc_unnamed4439 {
  UdpP__N_CLIENTS = 3U
};


uint16_t UdpP__local_ports[UdpP__N_CLIENTS];

enum UdpP____nesc_unnamed4440 {
  UdpP__LOCAL_PORT_START = 51024U, 
  UdpP__LOCAL_PORT_STOP = 54999U
};
uint16_t UdpP__last_localport = UdpP__LOCAL_PORT_START;

static inline uint16_t UdpP__alloc_lport(uint8_t clnt);
#line 46
static inline error_t UdpP__Init__init(void );





static error_t UdpP__UDP__bind(uint8_t clnt, uint16_t port);
#line 64
static void UdpP__IP__recv(struct ip6_hdr *iph, void *packet, size_t len, struct ip6_metadata *meta);
#line 115
static error_t UdpP__UDP__sendto(uint8_t clnt, struct sockaddr_in6 *dest, void *payload, 
uint16_t len);








static inline error_t UdpP__UDP__sendtov(uint8_t clnt, struct sockaddr_in6 *dest, 
struct ip_iovec *iov);
#line 169
static inline void UdpP__BlipStatistics__clear(void );
#line 181
static inline void UdpP__UDP__default__recvfrom(uint8_t clnt, struct sockaddr_in6 *from, 
void *payload, 
uint16_t len, 
struct ip6_metadata *meta);
# 397 "/opt/tinyos-main/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_enable_interrupt(void )
{
  __eint();
}

# 196 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void )
{
}

# 83 "/opt/tinyos-main/tos/lib/timer/BusyWaitCounterC.nc"
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__overflow(void ){
#line 82
  /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow();
#line 82
}
#line 82
# 64 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow(void )
{
  /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__overflow();
}

# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
#line 48
  /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow();
#line 48
}
#line 48
# 137 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x407344b0){
#line 39
  switch (arg_0x407344b0) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x407344b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 126 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
#line 39
}
#line 39
# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4441 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(* (volatile uint16_t * )354U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired();
#line 45
}
#line 45
# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4442 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(* (volatile uint16_t * )356U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired();
#line 45
}
#line 45
# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4443 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(* (volatile uint16_t * )358U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
#line 45
}
#line 45
# 131 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 134
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
#line 39
}
#line 39
# 196 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void )
{
}

# 208 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void )
#line 208
{
}

# 177 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 58 "/opt/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 58 "/opt/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 177 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow();
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC__1__m_upper & /*CounterMilli32C.Transform*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow();
#line 82
  /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow();
#line 82
}
#line 82
# 64 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 114 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 48 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
#line 48
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow();
#line 48
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow();
#line 48
}
#line 48
# 137 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 188 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 188
{
  return CC2420ControlP__SpiResource__request();
}

# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ControlP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 212 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startVRegDone(void )
#line 212
{

  CC2420CsmaP__Resource__request();
}

# 56 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 56
  CC2420CsmaP__CC2420Power__startVRegDone();
#line 56
}
#line 56
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__HplGeneralIO__set();
}

# 40 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 40
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__set();
#line 40
}
#line 40
# 53 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__HplGeneralIO__clr();
}

# 41 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 41
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__clr();
#line 41
}
#line 41
# 432 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__StartupTimer__fired(void )
#line 432
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 803 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__releaseSpiResource(void )
#line 803
{
  CC2420TransmitP__SpiResource__release();
  return SUCCESS;
}

# 61 "/opt/tinyos-main/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_RISING);
}

# 53 "/opt/tinyos-main/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
}

#line 157
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 66 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 59 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 4);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw() != 0;
}

# 73 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__HplGeneralIO__get();
}

# 43 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 498 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffTimer__fired(void )
#line 498
{
  /* atomic removed: atomic calls only */
#line 499
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SAMPLE_CCA: 


          if (CC2420TransmitP__CCA__get()) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP__congestionBackoff();
            }
        break;

        case CC2420TransmitP__S_BEGIN_TRANSMIT: 
          case CC2420TransmitP__S_CANCEL: 
            if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
                CC2420TransmitP__attemptSend();
              }
        break;

        case CC2420TransmitP__S_ACK_WAIT: 
          CC2420TransmitP__signalDone(SUCCESS);
        break;

        case CC2420TransmitP__S_SFD: 


          CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CaptureSFD__captureRisingEdge();
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  CC2420TransmitP__BackoffTimer__fired();
#line 78
  CC2420ControlP__StartupTimer__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4444 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(* (volatile uint16_t * )386U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired();
    }
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 49 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 81 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 46 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
inline static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 54 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

# 71 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 130 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
#line 57
}
#line 57
# 95 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 41 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

# 43 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}

# 103 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 298 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__RadioBackoff__default__requestCongestionBackoff(message_t *msg)
#line 298
{
}

# 88 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP__RadioBackoff__default__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 89 "/opt/tinyos-main/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 251 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
#line 251
{
  CC2420TransmitP__myCongestionBackoff = backoffTime + 1;
}

# 66 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP__RadioBackoff__setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 237 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 237
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(CC2420CsmaP__Random__rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestCongestionBackoff(msg);
}

# 88 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 45 "/opt/tinyos-main/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 172 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id)
#line 172
{
#line 172
  return FALSE;
}

# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(uint8_t arg_0x40f9b220){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x40f9b220) {
#line 128
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(arg_0x40f9b220);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 112 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id)
#line 112
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(id);
}

# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 176 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id)
#line 176
{
  return &msp430_spi_default_config;
}

# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
inline static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(uint8_t arg_0x40f9bc70){
#line 39
  union __nesc_unnamed4303 *__nesc_result;
#line 39

#line 39
    __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(arg_0x40f9bc70);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 168 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config){
#line 168
  HplMsp430Usart0P__Usart__setModeSpi(config);
#line 168
}
#line 168
# 120 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id)
#line 120
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(id));
}

# 216 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x40bedcf8){
#line 59
  switch (arg_0x40bedcf8) {
#line 59
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 59
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x40bedcf8);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 213 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested(void )
#line 213
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
}

# 81 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 206 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/opt/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(uint8_t arg_0x40bee948){
#line 61
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(arg_0x40bee948);
#line 61
}
#line 61
# 93 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  /* atomic removed: atomic calls only */
#line 95
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_IMM_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 100
        FAIL;

#line 100
        return __nesc_temp;
      }
  }
#line 102
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId == id) {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 107
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
  return FAIL;
}

# 174 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id)
#line 174
{
#line 174
  return FAIL;
}

# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(uint8_t arg_0x40f9b220){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x40f9b220) {
#line 97
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(arg_0x40f9b220);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 104 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id)
#line 104
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(id);
}

# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 97 "/opt/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 151 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset)
#line 151
{
  if (reset) {
      U0CTL = 0x01;
    }
  else {
      U0CTL &= ~0x01;
    }
}

# 97 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 59 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 60
  {
    HplMsp430I2C0P__U0CTL &= ~((0x20 | 0x04) | 0x01);
    HplMsp430I2C0P__HplUsart__resetUsart(TRUE);
  }
}

# 7 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void HplMsp430Usart0P__HplI2C__clearModeI2C(void ){
#line 7
  HplMsp430I2C0P__HplI2C__clearModeI2C();
#line 7
}
#line 7
# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc();
#line 99
}
#line 99
# 207 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableUart(void )
#line 207
{
  /* atomic removed: atomic calls only */
#line 208
  {
    HplMsp430Usart0P__ME1 &= ~(0x80 | 0x40);
    HplMsp430Usart0P__UTXD__selectIOFunc();
    HplMsp430Usart0P__URXD__selectIOFunc();
  }
}

#line 143
static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control)
#line 143
{
  U0MCTL = control;
}

#line 132
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control)
#line 132
{
  /* atomic removed: atomic calls only */
#line 133
  {
    U0BR0 = control & 0x00FF;
    U0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 256
static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config)
#line 256
{

  U0CTL = (config->spiRegisters.uctl | 0x04) | 0x01;
  HplMsp430Usart0P__U0TCTL = config->spiRegisters.utctl;

  HplMsp430Usart0P__Usart__setUbr(config->spiRegisters.ubr);
  HplMsp430Usart0P__Usart__setUmctl(0x00);
}

# 65 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 3;
}

# 92 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc();
#line 92
}
#line 92
# 65 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 2;
}

# 92 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc();
#line 92
}
#line 92
# 65 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 1;
}

# 92 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc();
#line 92
}
#line 92
# 238 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableSpi(void )
#line 238
{
  /* atomic removed: atomic calls only */
#line 239
  {
    HplMsp430Usart0P__SIMO__selectModuleFunc();
    HplMsp430Usart0P__SOMI__selectModuleFunc();
    HplMsp430Usart0P__UCLK__selectModuleFunc();
  }
  HplMsp430Usart0P__ME1 |= 0x40;
}

#line 345
static inline void HplMsp430Usart0P__Usart__clrIntr(void )
#line 345
{
  HplMsp430Usart0P__IFG1 &= ~(0x80 | 0x40);
}









static inline void HplMsp430Usart0P__Usart__disableIntr(void )
#line 357
{
  HplMsp430Usart0P__IE1 &= ~(0x80 | 0x40);
}

# 118 "/opt/tinyos-main/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP__state[id] = StateImplP__S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-main/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 210 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void ){
#line 73
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 64 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[id] != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY || /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(id)) {
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead = id;
          }
        else {
#line 88
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail] = id;
          }
#line 89
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(uint8_t arg_0x40bee948){
#line 53
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(arg_0x40bee948);
#line 53
}
#line 53
# 77 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(uint8_t id)
#line 77
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = id;
      }
    else {
#line 84
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId == id) {
          {
            unsigned char __nesc_temp = 
#line 85
            SUCCESS;

#line 85
            return __nesc_temp;
          }
        }
      else 
#line 87
        {
          unsigned char __nesc_temp = 
#line 87
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(id);

#line 87
          return __nesc_temp;
        }
      }
  }
#line 89
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 173 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id)
#line 173
{
#line 173
  return FAIL;
}

# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(uint8_t arg_0x40f9b220){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x40f9b220) {
#line 88
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 88
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(arg_0x40f9b220);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 108 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id)
#line 108
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(id);
}

# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 382 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data)
#line 382
{
  HplMsp430Usart0P__U0TXBUF = data;
}

# 224 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart0P__Usart__tx(data);
#line 224
}
#line 224
# 330 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void )
#line 330
{
  if (HplMsp430Usart0P__IFG1 & 0x40) {
      return TRUE;
    }
  return FALSE;
}

# 192 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void ){
#line 192
  unsigned char __nesc_result;
#line 192

#line 192
  __nesc_result = HplMsp430Usart0P__Usart__isRxIntrPending();
#line 192

#line 192
  return __nesc_result;
#line 192
}
#line 192
# 341 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__clrRxIntr(void )
#line 341
{
  HplMsp430Usart0P__IFG1 &= ~0x40;
}

# 197 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void ){
#line 197
  HplMsp430Usart0P__Usart__clrRxIntr();
#line 197
}
#line 197
# 386 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline uint8_t HplMsp430Usart0P__Usart__rx(void )
#line 386
{
  return U0RXBUF;
}

# 231 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void ){
#line 231
  unsigned char __nesc_result;
#line 231

#line 231
  __nesc_result = HplMsp430Usart0P__Usart__rx();
#line 231

#line 231
  return __nesc_result;
#line 231
}
#line 231
# 95 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "/opt/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 377 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 377
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "/opt/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 208 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 97 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
#line 158
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void ){
#line 158
  HplMsp430Usart0P__Usart__disableSpi();
#line 158
}
#line 158
# 124 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 124
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(TRUE);
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi();
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(FALSE);
}

# 218 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x40bedcf8){
#line 65
  switch (arg_0x40bedcf8) {
#line 65
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 65
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x40bedcf8);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead;

#line 72
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead];
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
          }
#line 75
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[id] = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
#line 111
{
  /* atomic removed: atomic calls only */
#line 112
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId == id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__NO_RES;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 127
          SUCCESS;

#line 127
          return __nesc_temp;
        }
      }
  }
#line 130
  return FAIL;
}

# 175 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id)
#line 175
{
#line 175
  return FAIL;
}

# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(uint8_t arg_0x40f9b220){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x40f9b220) {
#line 120
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(arg_0x40f9b220);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 116 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id)
#line 116
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(id);
}

# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc();
#line 99
}
#line 99
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 102 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/opt/tinyos-main/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 65 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )31U |= 0x01 << 1;
}

# 92 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc();
#line 92
}
#line 92
# 57 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4445 {
#line 57
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm)
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x = { 
  .cm = l_cm & 0x03, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 1, 
  .scs = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(x);
}

#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm)
{
  * (volatile uint16_t * )388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(cm);
}

# 55 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm){
#line 55
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(cm);
#line 55
}
#line 55
# 130 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

# 57 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents();
#line 57
}
#line 57
# 192 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

# 322 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

#line 347
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 340
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 70 "/opt/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70
# 195 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 195
{
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 59 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )28U & (0x01 << 1);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw() != 0;
}

# 73 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__HplGeneralIO__get();
}

# 43 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 186 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 186
{
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % 
      CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 190
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 65 "/opt/tinyos-main/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_FALLING);
}

# 54 "/opt/tinyos-main/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 137 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg)
#line 137
{
  return (cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 65 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

# 73 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__HplGeneralIO__set();
}

# 40 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__set();
#line 40
}
#line 40
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__HplGeneralIO__clr();
}

# 41 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__clr();
#line 41
}
#line 41
# 292 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 219 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(msg)->length.nxdata)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 58 "/opt/tinyos-main/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(message_t * msg){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__get(msg);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 303
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

# 152 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg)
#line 152
{
  return (cc2420_metadata_t *)msg->metadata;
}

#line 210
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata);
}

# 50 "/opt/tinyos-main/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(message_t * msg){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__isSet(msg);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 177 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, value);
}

# 78 "/opt/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__set(message_t * msg, CC2420TransmitP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 109 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 259 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time)
{
  uint32_t now = CC2420TransmitP__BackoffTimer__getNow();


  return now - (uint16_t )(now - captured_time);
}

#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 280
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;
#line 281
  uint32_t time32;
  uint8_t sfd_state = 0;

  /* atomic removed: atomic calls only */
#line 283
  {
    time32 = CC2420TransmitP__getTime32(time);
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SFD: 
          CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
        CC2420TransmitP__sfdHigh = TRUE;


        CC2420TransmitP__m_receiving = FALSE;
        CC2420TransmitP__CaptureSFD__captureFallingEdge();
        CC2420TransmitP__PacketTimeStamp__set(CC2420TransmitP__m_msg, time32);
        if (CC2420TransmitP__PacketTimeSyncOffset__isSet(CC2420TransmitP__m_msg)) {
            uint8_t absOffset = sizeof(message_header_t ) - sizeof(cc2420_header_t ) + CC2420TransmitP__PacketTimeSyncOffset__get(CC2420TransmitP__m_msg);
            timesync_radio_t *timesync = (timesync_radio_t *)((nx_uint8_t *)CC2420TransmitP__m_msg + absOffset);

            (__nesc_temp44 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
            CC2420TransmitP__CSN__clr();
            CC2420TransmitP__TXFIFO_RAM__write(absOffset, (uint8_t *)timesync, sizeof(timesync_radio_t ));
            CC2420TransmitP__CSN__set();

            (__nesc_temp45 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp45, __nesc_ntoh_uint32(__nesc_temp45) + time32));
          }

        if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {

            CC2420TransmitP__abortSpiRelease = TRUE;
          }
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__BackoffTimer__stop();

        if (CC2420TransmitP__SFD__get()) {
            break;
          }


        case CC2420TransmitP__S_EFD: 
          CC2420TransmitP__sfdHigh = FALSE;
        CC2420TransmitP__CaptureSFD__captureRisingEdge();

        if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {
            CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;
            CC2420TransmitP__BackoffTimer__start(CC2420_ACK_WAIT_DELAY);
          }
        else 
#line 326
          {
            CC2420TransmitP__signalDone(SUCCESS);
          }

        if (!CC2420TransmitP__SFD__get()) {
            break;
          }


        default: 

          if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
              CC2420TransmitP__sfdHigh = TRUE;
              CC2420TransmitP__CaptureSFD__captureFallingEdge();

              sfd_state = CC2420TransmitP__SFD__get();
              CC2420TransmitP__CC2420Receive__sfd(time32);
              CC2420TransmitP__m_receiving = TRUE;
              CC2420TransmitP__m_prev_time = time;
              if (CC2420TransmitP__SFD__get()) {

                  return;
                }
            }



        if (CC2420TransmitP__sfdHigh == TRUE) {
            CC2420TransmitP__sfdHigh = FALSE;
            CC2420TransmitP__CaptureSFD__captureRisingEdge();
            CC2420TransmitP__m_receiving = FALSE;








            if (sfd_state == 0 && time - CC2420TransmitP__m_prev_time < 10) {
                CC2420TransmitP__CC2420Receive__sfd_dropped();
                if (CC2420TransmitP__m_msg) {
                  CC2420TransmitP__PacketTimeStamp__clear(CC2420TransmitP__m_msg);
                  }
              }
#line 370
            break;
          }
      }
  }
}

# 61 "/opt/tinyos-main/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time){
#line 61
  CC2420TransmitP__CaptureSFD__captured(time);
#line 61
}
#line 61
# 175 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void )
{
  * (volatile uint16_t * )388U &= ~0x0002;
}

# 68 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void ){
#line 68
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow();
#line 68
}
#line 68
# 95 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 76 "/opt/tinyos-main/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time)
#line 76
{
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(time);
}

# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
#line 86
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4446 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(* (volatile uint16_t * )388U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired();
    }
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm();
      }
  }
}

# 78 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void )
{
  * (volatile uint16_t * )390U &= ~0x0010;
}

# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents();
#line 58
}
#line 58
# 70 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired();
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4447 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(* (volatile uint16_t * )390U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired();
    }
}

# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64







inline static bool /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 130 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void )
{
  * (volatile uint16_t * )390U |= 0x0010;
}

# 57 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents();
#line 57
}
#line 57
# 95 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )390U &= ~0x0001;
}

# 44 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )406U = x;
}

# 41 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get() + x;
}

# 43 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt();
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents();
  }
}

# 103 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4448 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(* (volatile uint16_t * )392U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4449 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(* (volatile uint16_t * )394U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4450 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(* (volatile uint16_t * )396U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4451 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(* (volatile uint16_t * )398U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired();
    }
}

# 131 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 134
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
#line 39
}
#line 39
# 124 "/opt/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 56 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 6;
}

# 48 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

# 40 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
#line 40
}
#line 40
# 56 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 5;
}

# 48 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

# 40 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
#line 40
}
#line 40
# 56 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 4;
}

# 48 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

# 40 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
#line 40
}
#line 40
# 63 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 6;
}

# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 5;
}

# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 4;
}

# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-main/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 36 "/opt/tinyos-main/tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r |= 1 << 1;
}

#line 37
static inline  void TOSH_SET_UCLK0_PIN()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x0019");

#line 37
  r |= 1 << 3;
}

#line 88
static inline  void TOSH_SET_FLASH_CS_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001D");

#line 88
  r |= 1 << 4;
}

#line 37
static inline  void TOSH_CLR_UCLK0_PIN()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x0019");

#line 37
  r &= ~(1 << 3);
}

#line 88
static inline  void TOSH_CLR_FLASH_CS_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001D");

#line 88
  r &= ~(1 << 4);
}

# 11 "/opt/tinyos-main/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__TOSH_wait(void )
#line 11
{
  __nop();
#line 12
  __nop();
}

# 89 "/opt/tinyos-main/tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_FLASH_HOLD_PIN()
#line 89
{
#line 89
  static volatile uint8_t r __asm ("0x001D");

#line 89
  r |= 1 << 7;
}

#line 88
static inline  void TOSH_MAKE_FLASH_CS_OUTPUT()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001E");

#line 88
  r |= 1 << 4;
}

#line 89
static inline  void TOSH_MAKE_FLASH_HOLD_OUTPUT()
#line 89
{
#line 89
  static volatile uint8_t r __asm ("0x001E");

#line 89
  r |= 1 << 7;
}

#line 37
static inline  void TOSH_MAKE_UCLK0_OUTPUT()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x001A");

#line 37
  r |= 1 << 3;
}

#line 36
static inline  void TOSH_MAKE_SIMO0_OUTPUT()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x001A");

#line 36
  r |= 1 << 1;
}

# 27 "/opt/tinyos-main/tos/platforms/telosb/MotePlatformC.nc"
static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void )
#line 27
{

  TOSH_MAKE_SIMO0_OUTPUT();
  TOSH_MAKE_UCLK0_OUTPUT();
  TOSH_MAKE_FLASH_HOLD_OUTPUT();
  TOSH_MAKE_FLASH_CS_OUTPUT();
  TOSH_SET_FLASH_HOLD_PIN();
  TOSH_SET_FLASH_CS_PIN();

  MotePlatformC__TOSH_wait();


  TOSH_CLR_FLASH_CS_PIN();
  TOSH_CLR_UCLK0_PIN();

  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);

  TOSH_SET_FLASH_CS_PIN();
  TOSH_SET_UCLK0_PIN();
  TOSH_SET_SIMO0_PIN();
}

#line 6
static __inline void MotePlatformC__uwait(uint16_t u)
#line 6
{
  uint16_t t0 = TAR;

#line 8
  while (TAR - t0 <= u) ;
}

#line 56
static inline error_t MotePlatformC__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */

  {
    P1SEL = 0;
    P2SEL = 0;
    P3SEL = 0;
    P4SEL = 0;
    P5SEL = 0;
    P6SEL = 0;

    P1OUT = 0x00;
    P1DIR = 0xe0;

    P2OUT = 0x30;
    P2DIR = 0x7b;

    P3OUT = 0x00;
    P3DIR = 0xf1;

    P4OUT = 0xdd;
    P4DIR = 0xfd;

    P5OUT = 0xff;
    P5DIR = 0xff;

    P6OUT = 0x00;
    P6DIR = 0xff;

    P1IE = 0;
    P2IE = 0;






    MotePlatformC__uwait(1024 * 10);

    MotePlatformC__TOSH_FLASH_M25P_DP();
  }

  return SUCCESS;
}

# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 163 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerB(void )
{

  Msp430ClockP__TBCTL = 0x0020 | (Msp430ClockP__TBCTL & ~(0x0020 | 0x0010));
}

#line 151
static inline void Msp430ClockP__startTimerA(void )
{

  Msp430ClockP__TACTL = 0x0020 | (Msp430ClockP__TACTL & ~(0x0020 | 0x0010));
}

#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void )
{
  TBR = 0;









  Msp430ClockP__TBCTL = 0x0100 | 0x0002;
}

#line 145
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerB();
}

# 43 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
#line 43
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
#line 43
}
#line 43
# 100 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void )
{
  TAR = 0;









  Msp430ClockP__TACTL = 0x0200 | 0x0002;
}

#line 140
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerA();
}

# 42 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
#line 42
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
#line 42
}
#line 42
# 79 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void )
{





  BCSCTL1 = 0x80 | (BCSCTL1 & ((0x04 | 0x02) | 0x01));







  BCSCTL2 = 0x04;


  Msp430ClockP__IE1 &= ~0x02;
}

#line 135
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitClocks();
}

# 41 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
#line 41
  Msp430ClockP__Msp430ClockInit__default__initClocks();
#line 41
}
#line 41
# 181 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib)
{
  int8_t aclk_count = 2;
  uint16_t dco_prev = 0;
  uint16_t dco_curr = 0;

  Msp430ClockP__set_dco_calib(calib);

  while (aclk_count-- > 0) 
    {
      TBCCR0 = TBR + Msp430ClockP__ACLK_CALIB_PERIOD;
      TBCCTL0 &= ~0x0001;
      while ((TBCCTL0 & 0x0001) == 0) ;
      dco_prev = dco_curr;
      dco_curr = TAR;
    }

  return dco_curr - dco_prev;
}




static inline void Msp430ClockP__busyCalibrateDco(void )
{

  int calib;
  int step;






  for (calib = 0, step = 0x800; step != 0; step >>= 1) 
    {

      if (Msp430ClockP__test_calib_busywait_delta(calib | step) <= Msp430ClockP__TARGET_DCO_DELTA) {
        calib |= step;
        }
    }

  if ((calib & 0x0e0) == 0x0e0) {
    calib &= ~0x01f;
    }
  Msp430ClockP__set_dco_calib(calib);
}

#line 67
static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void )
{



  Msp430ClockP__TACTL = 0x0200 | 0x0020;
  Msp430ClockP__TBCTL = 0x0100 | 0x0020;
  BCSCTL1 = 0x80 | 0x04;
  BCSCTL2 = 0;
  TBCCTL0 = 0x4000;
}

#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void )
{
  Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate();
}

# 40 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void ){
#line 40
  Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate();
#line 40
}
#line 40
# 229 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP__Init__init(void )
{

  Msp430ClockP__TACTL = 0x0004;
  Msp430ClockP__TAIV = 0;
  Msp430ClockP__TBCTL = 0x0004;
  Msp430ClockP__TBIV = 0;
  /* atomic removed: atomic calls only */

  {
    Msp430ClockP__Msp430ClockInit__setupDcoCalibrate();
    Msp430ClockP__busyCalibrateDco();
    Msp430ClockP__Msp430ClockInit__initClocks();
    Msp430ClockP__Msp430ClockInit__initTimerA();
    Msp430ClockP__Msp430ClockInit__initTimerB();
    Msp430ClockP__startTimerA();
    Msp430ClockP__startTimerB();
  }

  return SUCCESS;
}

# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 10 "/opt/tinyos-main/tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 10
{
  WDTCTL = 0x5A00 + 0x0080;
  PlatformP__MoteClockInit__init();
  PlatformP__MoteInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 36 "/opt/tinyos-main/tos/platforms/telosb/hardware.h"
static inline  void TOSH_CLR_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r &= ~(1 << 1);
}

# 65 "/opt/tinyos-main/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t PacketLinkP__send__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PacketLinkP__send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static error_t PacketLinkP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420CsmaP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 59 "/opt/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t PacketLinkP__PacketAcknowledgements__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = CC2420PacketP__Acks__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * PacketLinkP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 104 "/opt/tinyos-main/tos/chips/cc2420/link/PacketLinkP.nc"
static inline uint16_t PacketLinkP__PacketLink__getRetries(message_t *msg)
#line 104
{
  return __nesc_ntoh_uint16(PacketLinkP__CC2420PacketBody__getMetadata(msg)->maxRetries.nxdata);
}

#line 209
static inline void PacketLinkP__send__runTask(void )
#line 209
{
  if (PacketLinkP__PacketLink__getRetries(PacketLinkP__currentSendMsg) > 0) {
      PacketLinkP__PacketAcknowledgements__requestAck(PacketLinkP__currentSendMsg);
    }

  if (PacketLinkP__SubSend__send(PacketLinkP__currentSendMsg, PacketLinkP__currentSendLen) != SUCCESS) {
      PacketLinkP__send__postTask();
    }
}

# 327 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
#line 53
inline static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 301 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__RadioBackoff__default__requestCca(message_t *msg)
#line 301
{
}

# 95 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg){
#line 95
  CC2420CsmaP__RadioBackoff__default__requestCca(msg);
#line 95
}
#line 95
# 547 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca)
#line 547
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 548
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 550
            ECANCEL;

            {
#line 550
              __nesc_atomic_end(__nesc_atomic); 
#line 550
              return __nesc_temp;
            }
          }
        }
#line 553
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 554
            FAIL;

            {
#line 554
              __nesc_atomic_end(__nesc_atomic); 
#line 554
              return __nesc_temp;
            }
          }
        }


      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_msg = p_msg;
      CC2420TransmitP__totalCcaChecks = 0;
    }
#line 564
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
      CC2420TransmitP__loadTXFIFO();
    }

  return SUCCESS;
}

#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca)
#line 192
{
  return CC2420TransmitP__send(p_msg, useCca);
}

# 51 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TransmitP__Send__send(p_msg, useCca);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 70 "/opt/tinyos-main/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID, txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 45 "/opt/tinyos-main/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 126 "/opt/tinyos-main/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/opt/tinyos-main/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 214 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 82 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 361 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableRxIntr(void )
#line 361
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 362
    {
      HplMsp430Usart0P__IFG1 &= ~0x40;
      HplMsp430Usart0P__IE1 |= 0x40;
    }
#line 365
    __nesc_atomic_end(__nesc_atomic); }
}

# 180 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void ){
#line 180
  HplMsp430Usart0P__Usart__enableRxIntr();
#line 180
}
#line 180
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t CC2420TinyosNetworkP__grantTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TinyosNetworkP__grantTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 229 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id)
#line 229
{
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      CC2420TinyosNetworkP__grantTask__postTask();
    }
  CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
  return SUCCESS;
}

#line 253
static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client)
#line 253
{
  CC2420TinyosNetworkP__Resource__release(client);
}

# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static void CC2420TinyosNetworkP__Resource__granted(uint8_t arg_0x41661628){
#line 102
    CC2420TinyosNetworkP__Resource__default__granted(arg_0x41661628);
#line 102
}
#line 102
# 68 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
          uint8_t id = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead;

#line 72
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead];
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
            }
#line 75
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
          {
            unsigned char __nesc_temp = 
#line 76
            id;

            {
#line 76
              __nesc_atomic_end(__nesc_atomic); 
#line 76
              return __nesc_temp;
            }
          }
        }
#line 78
      {
        unsigned char __nesc_temp = 
#line 78
        /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

        {
#line 78
          __nesc_atomic_end(__nesc_atomic); 
#line 78
          return __nesc_temp;
        }
      }
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

      {
#line 61
        __nesc_atomic_end(__nesc_atomic); 
#line 61
        return __nesc_temp;
      }
    }
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool CC2420TinyosNetworkP__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 180 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__grantTask__runTask(void )
#line 180
{


  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && !CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__Queue__dequeue();

          if (CC2420TinyosNetworkP__resource_owner != CC2420TinyosNetworkP__OWNER_NONE) {
              CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
            }
        }
    }
  else 
#line 191
    {
      if (CC2420TinyosNetworkP__next_owner != CC2420TinyosNetworkP__resource_owner) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__next_owner;
          CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
        }
    }
}

# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 138 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len)
#line 138
{

  cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 141
  return hdr;
}

# 48 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t *IPDispatchP__getLowpanPayload(struct packed_lowmsg *lowmsg)
#line 48
{
  uint8_t len = 0;






  if (lowmsg->headers & LOWMSG_FRAG1_HDR) {
    len += LOWMSG_FRAG1_LEN;
    }
#line 58
  if (lowmsg->headers & LOWMSG_FRAGN_HDR) {
    len += LOWMSG_FRAGN_LEN;
    }
#line 60
  return lowmsg->data + len;
}

# 111 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int8_t CC2420PacketP__CC2420Packet__getRssi(message_t *p_msg)
#line 111
{
  return __nesc_ntoh_uint8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->rssi.nxdata);
}

# 64 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static int8_t CC2420ReadLqiC__CC2420Packet__getRssi(message_t *p_msg){
#line 64
  signed char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420PacketP__CC2420Packet__getRssi(p_msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 16 "/opt/tinyos-main/tos/lib/net/blip/platform/CC2420ReadLqiC.nc"
static inline uint8_t CC2420ReadLqiC__ReadLqi__readRssi(message_t *msg)
#line 16
{
  return CC2420ReadLqiC__CC2420Packet__getRssi(msg);
}

# 8 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ReadLqi.nc"
inline static uint8_t IPDispatchP__ReadLqi__readRssi(message_t *msg){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = CC2420ReadLqiC__ReadLqi__readRssi(msg);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 115 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__CC2420Packet__getLqi(message_t *p_msg)
#line 115
{
  return __nesc_ntoh_uint8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->lqi.nxdata);
}

# 72 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static uint8_t CC2420ReadLqiC__CC2420Packet__getLqi(message_t *p_msg){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = CC2420PacketP__CC2420Packet__getLqi(p_msg);
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 12 "/opt/tinyos-main/tos/lib/net/blip/platform/CC2420ReadLqiC.nc"
static inline uint8_t CC2420ReadLqiC__ReadLqi__readLqi(message_t *msg)
#line 12
{
  return CC2420ReadLqiC__CC2420Packet__getLqi(msg);
}

# 6 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ReadLqi.nc"
inline static uint8_t IPDispatchP__ReadLqi__readLqi(message_t *msg){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = CC2420ReadLqiC__ReadLqi__readLqi(msg);
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 166 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__hasFragNHeader(struct packed_lowmsg *msg)
#line 166
{
  return msg->headers & LOWMSG_FRAGN_HDR;
}

#line 68
static __inline uint16_t IPDispatchP__getHeaderBitmap(struct packed_lowmsg *lowmsg)
#line 68
{
  uint16_t headers = 0;
  uint8_t *buf = lowmsg->data;
  int16_t len = lowmsg->len;

#line 72
  if (buf == (void *)0) {
#line 72
    return headers;
    }
  if (len > 0 && (*buf >> 6) == LOWPAN_NALP_PATTERN) {
      return LOWMSG_NALP;
    }
#line 98
  if (len > 0 && (*buf >> 3) == LOWPAN_FRAG1_PATTERN) {
      headers |= LOWMSG_FRAG1_HDR;
      buf += LOWMSG_FRAG1_LEN;
      len -= LOWMSG_FRAG1_LEN;
    }
  if (len > 0 && (*buf >> 3) == LOWPAN_FRAGN_PATTERN) {
      headers |= LOWMSG_FRAGN_HDR;
      buf += LOWMSG_FRAGN_LEN;
      len -= LOWMSG_FRAGN_LEN;
    }
  return headers;
}

# 76 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static inline int IPDispatchP__lowpan_recon_add(struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len)
#line 77
{
  struct packed_lowmsg msg;
  uint8_t *buf;

  msg.data = pkt;
  msg.len = len;
  msg.headers = IPDispatchP__getHeaderBitmap(&msg);
  if (msg.headers == LOWMSG_NALP) {
#line 84
    return -1;
    }
  if (!IPDispatchP__hasFragNHeader(&msg)) {
      return -2;
    }

  buf = IPDispatchP__getLowpanPayload(&msg);
  len -= buf - pkt;

  if (recon->r_size < recon->r_bytes_rcvd + len) {
#line 93
    return -3;
    }

  memcpy(recon->r_buf + recon->r_bytes_rcvd, buf, len);
  recon->r_bytes_rcvd += len;

  return 0;
}

# 163 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__hasFrag1Header(struct packed_lowmsg *msg)
#line 163
{
  return msg->headers & LOWMSG_FRAG1_HDR;
}

# 305 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline struct lowpan_reconstruct *IPDispatchP__get_reconstruct(uint16_t key, uint16_t tag)
#line 305
{
  struct lowpan_reconstruct *ret = (void *)0;
  int i;



  for (i = 0; i < N_RECONSTRUCTIONS; i++) {
      struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)&IPDispatchP__recon_data[i];

      if (recon->r_tag == tag && 
      recon->r_source_key == key) {

          if (recon->r_timeout > T_UNUSED) {
              recon->r_timeout = T_ACTIVE;
              ret = recon;
              goto done;
            }
          else {
#line 322
            if (recon->r_timeout < T_UNUSED) {


                ret = (void *)0;
                goto done;
              }
            }
        }
#line 329
      if (recon->r_timeout == T_UNUSED) {
        ret = recon;
        }
    }
#line 332
  done: 

    return ret;
}

# 272 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__getFragDgramTag(struct packed_lowmsg *msg, uint16_t *tag)
#line 272
{
  uint8_t *buf = msg->data;

#line 274
  if (buf == (void *)0 || tag == (void *)0) {
#line 274
    return 1;
    }



  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 280
    return 1;
    }
#line 281
  buf += 2;

  *tag = (((uint16_t )* (uint16_t *)buf >> 8) | ((uint16_t )* (uint16_t *)buf << 8)) & 0xffff;
  return 0;
}

# 44 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/ieee154_header.c"
static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame)
#line 44
{
  uint16_t fcf = ((uint16_t )buf[2] << 8) | buf[1];

  frame->ieee_dstpan = ((uint16_t )buf[5] << 8) | buf[4];
  frame->ieee_src.ieee_mode = (fcf >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3;
  frame->ieee_dst.ieee_mode = (fcf >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3;

  buf += IEEE154_MIN_HDR_SZ;

  if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT) {
      memcpy(& frame->ieee_dst.ieee_addr.saddr, buf, 2);
      buf += 2;
    }
  else {
#line 56
    if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_EXT) {
        memcpy(& frame->ieee_dst.ieee_addr.laddr, buf, 8);
        buf += 8;
      }
    }
  if (frame->ieee_src.ieee_mode == IEEE154_ADDR_SHORT) {
      memcpy(& frame->ieee_src.ieee_addr.saddr, buf, 2);
      buf += 2;
    }
  else {
#line 64
    if (frame->ieee_src.ieee_mode == IEEE154_ADDR_EXT) {
        memcpy(& frame->ieee_src.ieee_addr.laddr, buf, 8);
        buf += 8;
      }
    }
#line 68
  return buf;
}

# 337 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline message_t *IPDispatchP__Ieee154Receive__receive(message_t *msg, void *msg_payload, uint8_t len)
#line 337
{
  struct packed_lowmsg lowmsg;
  struct ieee154_frame_addr frame_address;
  uint8_t *buf = msg_payload;

  printf(" -- RECEIVE -- len : %i\n", len);

  ;


  buf = IPDispatchP__unpack_ieee154_hdr(msg_payload, &frame_address);
  len -= buf - (uint8_t *)msg_payload;


  lowmsg.data = buf;
  lowmsg.len = len;
  lowmsg.headers = IPDispatchP__getHeaderBitmap(&lowmsg);
  if (lowmsg.headers == LOWMSG_NALP) {
      printf("lowmsg.headers=%d", lowmsg.headers);
      printf("fail1");
      goto fail;
    }

  if (IPDispatchP__hasFrag1Header(&lowmsg) || IPDispatchP__hasFragNHeader(&lowmsg)) {

      int rv;
      struct lowpan_reconstruct *recon;
      uint16_t tag;
#line 364
      uint16_t source_key;

      source_key = ieee154_hashaddr(& frame_address.ieee_src);
      IPDispatchP__getFragDgramTag(&lowmsg, &tag);
      recon = IPDispatchP__get_reconstruct(source_key, tag);
      if (!recon) {
          printf("fail2");
          goto fail;
        }



      memcpy(& recon->r_meta.sender, & frame_address.ieee_src, 
      sizeof(ieee154_addr_t ));
      recon->r_meta.lqi = IPDispatchP__ReadLqi__readLqi(msg);
      recon->r_meta.rssi = IPDispatchP__ReadLqi__readRssi(msg);

      if (IPDispatchP__hasFrag1Header(&lowmsg)) {
          if (recon->r_buf != (void *)0) {
#line 382
              printf("fail3");
#line 382
              goto fail;
            }
#line 383
          rv = IPDispatchP__lowpan_recon_start(&frame_address, recon, buf, len);
        }
      else 
#line 384
        {
          rv = IPDispatchP__lowpan_recon_add(recon, buf, len);
        }

      if (rv < 0) {
          recon->r_timeout = T_FAILED1;
          printf("fail4");
          goto fail;
        }
      else 
#line 392
        {

          recon->r_timeout = T_ACTIVE;
          recon->r_source_key = source_key;
          recon->r_tag = tag;
        }

      if (recon->r_size == recon->r_bytes_rcvd) {
          IPDispatchP__deliver(recon);
        }
    }
  else {

      int rv;
      struct lowpan_reconstruct recon;


      memcpy(& recon.r_meta.sender, & frame_address.ieee_src, 
      sizeof(ieee154_addr_t ));
      recon.r_meta.lqi = IPDispatchP__ReadLqi__readLqi(msg);
      recon.r_meta.rssi = IPDispatchP__ReadLqi__readRssi(msg);

      buf = IPDispatchP__getLowpanPayload(&lowmsg);

      if ((rv = IPDispatchP__lowpan_recon_start(&frame_address, &recon, buf, len)) < 0) {
          printf("fail5 with rv value=%d", rv);
          goto fail;
        }

      if (recon.r_size == recon.r_bytes_rcvd) {
          IPDispatchP__deliver(&recon);
        }
      else 
#line 423
        {

          ip_free(recon.r_buf);
        }
    }
  goto done;
  fail: 
    ;
  done: 
    return msg;
}

# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__BareReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = IPDispatchP__Ieee154Receive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 247 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__ActiveReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 247
{
  return msg;
}

# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__ActiveReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__ActiveReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 81 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int CC2420PacketP__getAddressLength(int type)
#line 81
{
  switch (type) {
      case IEEE154_ADDR_SHORT: return 2;
      case IEEE154_ADDR_EXT: return 8;
      case IEEE154_ADDR_NONE: return 0;
      default: return -100;
    }
}

static inline uint8_t * CC2420PacketP__getNetwork(message_t * msg)
#line 90
{
  cc2420_header_t *hdr = CC2420PacketP__CC2420PacketBody__getHeader(msg);
  int offset;

  offset = CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3) + 
  CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3) + 
  (unsigned short )& ((cc2420_header_t *)0)->dest;

  return (uint8_t *)hdr + offset;
}

#line 119
static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg)
#line 119
{



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      unsigned char __nesc_temp = 
#line 124
      *CC2420PacketP__getNetwork(p_msg);

      {
#line 124
        __nesc_atomic_end(__nesc_atomic); 
#line 124
        return __nesc_temp;
      }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }
}

# 75 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t * p_msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420PacketP__CC2420Packet__getNetwork(p_msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 157 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 157
{
  uint8_t network = CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg);

  if (! __nesc_ntoh_int8(CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(msg)->crc.nxdata)) {
      return msg;
    }

  if (network == 0x3f) {
      return CC2420TinyosNetworkP__ActiveReceive__receive(msg, payload, len);
    }
  else 
#line 166
    {
      return CC2420TinyosNetworkP__BareReceive__receive(msg, 
      CC2420TinyosNetworkP__BareSend__getPayload(msg, len), 
      len + sizeof(cc2420_header_t ));
    }
}

# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 138 "/opt/tinyos-main/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn)
#line 138
{
  uint8_t element = UniqueReceiveP__recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      if (element == UniqueReceiveP__INVALID_ELEMENT || UniqueReceiveP__writeIndex == element) {

          element = UniqueReceiveP__writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP__receivedMessages[element].source = msgSource;
      UniqueReceiveP__receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP__writeIndex++;
          UniqueReceiveP__writeIndex %= 4;
        }
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }
}

#line 192
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 192
{
  return msg;
}

# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__DuplicateReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__DuplicateReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 112 "/opt/tinyos-main/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 112
{
  int i;

#line 114
  UniqueReceiveP__recycleSourceElement = UniqueReceiveP__INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP__receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP__receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 121
                    TRUE;

                    {
#line 121
                      __nesc_atomic_end(__nesc_atomic); 
#line 121
                      return __nesc_temp;
                    }
                  }
                }
#line 124
              UniqueReceiveP__recycleSourceElement = i;
            }
        }
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 165 "/opt/tinyos-main/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline uint16_t UniqueReceiveP__getSourceKey(message_t * msg)
#line 165
{
  cc2420_header_t *hdr = UniqueReceiveP__CC2420PacketBody__getHeader(msg);
  int s_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3;
  int d_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3;
  int s_offset = 2;
#line 169
  int s_len = 2;
  uint16_t key = 0;
  uint8_t *current = (uint8_t *)& hdr->dest;
  int i;

  if (s_mode == IEEE154_ADDR_EXT) {
      s_len = 8;
    }
  if (d_mode == IEEE154_ADDR_EXT) {
      s_offset = 8;
    }

  current += s_offset;

  for (i = 0; i < s_len; i++) {
      key += current[i];
    }
  return key;
}

#line 86
static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
#line 87
{

  uint16_t msgSource = UniqueReceiveP__getSourceKey(msg);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->dsn.nxdata);

  if (UniqueReceiveP__hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP__DuplicateReceive__receive(msg, payload, len);
    }
  else 
#line 94
    {
      UniqueReceiveP__insert(msgSource, msgDsn);
      return UniqueReceiveP__Receive__receive(msg, payload, len);
    }
}

# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 299 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void )
#line 299
{
  return CC2420ControlP__m_ext_addr;
}

# 66 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void ){
#line 66
  struct ieee_eui64 __nesc_result;
#line 66

#line 66
  __nesc_result = CC2420ControlP__CC2420Config__getExtAddr();
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66





inline static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void ){
#line 71
  unsigned int __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Config__getShortAddr();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 356 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void )
#line 356
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
    {
      unsigned char __nesc_temp = 
#line 357
      CC2420ControlP__addressRecognition;

      {
#line 357
        __nesc_atomic_end(__nesc_atomic); 
#line 357
        return __nesc_temp;
      }
    }
#line 359
    __nesc_atomic_end(__nesc_atomic); }
}

# 93 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = CC2420ControlP__CC2420Config__isAddressRecognitionEnabled();
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 823 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg)
#line 823
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(msg);
  int mode = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 3;
  ieee_eui64_t *ext_addr;

  if (!CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled()) {
      return TRUE;
    }

  if (mode == IEEE154_ADDR_SHORT) {
      return __nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
       || __nesc_ntoh_leuint16(header->dest.nxdata) == IEEE154_BROADCAST_ADDR;
    }
  else {
#line 835
    if (mode == IEEE154_ADDR_EXT) {
        ieee_eui64_t local_addr = CC2420ReceiveP__CC2420Config__getExtAddr();

#line 837
        ext_addr = (ieee_eui64_t * )& header->dest;
        return memcmp(ext_addr->data, local_addr.data, IEEE_EUI64_LENGTH) == 0;
      }
    else 
#line 839
      {

        return FALSE;
      }
    }
}

# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 676 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 676
{
  cc2420_metadata_t *metadata = CC2420ReceiveP__CC2420PacketBody__getMetadata(CC2420ReceiveP__m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.nxdata);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.nxdata, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.nxdata, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.nxdata, buf[length - 1]);
  if (CC2420ReceiveP__passesAddressCheck(CC2420ReceiveP__m_p_rx_buf) && length >= CC2420_SIZE) {
#line 700
      CC2420ReceiveP__m_p_rx_buf = CC2420ReceiveP__Receive__receive(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 703
    CC2420ReceiveP__receivingPacket = FALSE;
#line 703
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

# 255 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__getFragDgramSize(struct packed_lowmsg *msg, uint16_t *size)
#line 255
{
  uint8_t *buf = msg->data;
  uint8_t s[2];

#line 258
  if (buf == (void *)0 || size == (void *)0) {
#line 258
    return 1;
    }



  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 264
    return 1;
    }
  s[0] = *buf & 0x7;
  buf++;
  s[1] = *buf;
  *size = ((uint16_t )s[0] << 8) | s[1];
  return 0;
}

# 626 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline uint8_t *IPDispatchP__unpack_udp(uint8_t *dest, uint8_t *nxt_hdr, uint8_t *buf)
#line 626
{
  struct udp_hdr *udp = (struct udp_hdr *)dest;
  uint8_t dispatch = * buf++;

  *nxt_hdr = IANA_UDP;


  udp->len = 0;

  udp->chksum = 0;


  switch (dispatch & LOWPAN_NHC_UDP_PORT_MASK) {
      case LOWPAN_NHC_UDP_PORT_FULL: 
        udp->srcport = (((uint16_t )((buf[0] << 8) | buf[1]) << 8) | ((uint16_t )((buf[0] << 8) | buf[1]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )((buf[2] << 8) | buf[3]) << 8) | ((uint16_t )((buf[2] << 8) | buf[3]) >> 8)) & 0xffff;
      buf += 4;
      break;
      case LOWPAN_NHC_UDP_PORT_SRC_FULL: 
        udp->srcport = (((uint16_t )((buf[0] << 8) | buf[1]) << 8) | ((uint16_t )((buf[0] << 8) | buf[1]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )((0xF0 << 8) | buf[2]) << 8) | ((uint16_t )((0xF0 << 8) | buf[2]) >> 8)) & 0xffff;
      buf += 3;
      break;
      case LOWPAN_NHC_UDP_PORT_DST_FULL: 
        udp->srcport = (((uint16_t )((0xF0 << 8) | buf[0]) << 8) | ((uint16_t )((0xF0 << 8) | buf[0]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )((buf[1] << 8) | buf[2]) << 8) | ((uint16_t )((buf[1] << 8) | buf[2]) >> 8)) & 0xffff;
      buf += 3;
      break;
      case LOWPAN_NHC_UDP_PORT_SHORT: 
        udp->srcport = (((uint16_t )(0xF0B0 | (buf[0] >> 4)) << 8) | ((uint16_t )(0xF0B0 | (buf[0] >> 4)) >> 8)) & 0xffff;
      udp->dstport = 0xF0B0 | (buf[0] & 0xf);
      udp->dstport = (((uint16_t )udp->dstport << 8) | ((uint16_t )udp->dstport >> 8)) & 0xffff;
      buf += 1;
      break;
    }

  if (!(dispatch & LOWPAN_NHC_UDP_CKSUM)) {
      udp->chksum = (((uint16_t )((buf[0] << 8) | buf[1]) << 8) | ((uint16_t )((buf[0] << 8) | buf[1]) >> 8)) & 0xffff;
      buf += 2;
    }

  return buf;
}






static inline uint8_t *IPDispatchP__unpack_ipnh(uint8_t *dest, size_t cnt, uint8_t *nxt_hdr, uint8_t *buf)
#line 675
{
  if ((*buf & LOWPAN_NHC_IPV6_MASK) == LOWPAN_NHC_IPV6_PATTERN) {
      struct ip6_ext *ext = (struct ip6_ext *)dest;
      uint8_t length;
#line 678
      uint8_t extra;



      switch (*buf & LOWPAN_NHC_EID_MASK) {
          case LOWPAN_NHC_EID_HOP: 
            *nxt_hdr = IPV6_HOP;
#line 684
          break;
          case LOWPAN_NHC_EID_ROUTING: 
            *nxt_hdr = IPV6_ROUTING;
#line 686
          break;
          case LOWPAN_NHC_EID_FRAG: 
            *nxt_hdr = IPV6_FRAG;
#line 688
          break;
          case LOWPAN_NHC_EID_DEST: 
            *nxt_hdr = IPV6_DEST;
#line 690
          break;
          case LOWPAN_NHC_EID_MOBILE: 
            *nxt_hdr = IPV6_MOBILITY;
#line 692
          break;
          case LOWPAN_NHC_EID_IPV6: 

            *nxt_hdr = IPV6_IPV6;
#line 695
          break;
          default: 
            return (void *)0;
        }


      if (!(*buf & LOWPAN_NHC_NH)) {
          buf++;
          ext->ip6e_nxt = *buf;
        }
      buf += 1;
      length = * buf++;
      extra = (8 - length % 8) % 8;

      if (cnt < length + extra - 2) {
        return (void *)0;
        }

      memcpy(dest + 2, buf, length - 2);


      if (*nxt_hdr == IPV6_HOP || *nxt_hdr == IPV6_DEST) {
          if (extra == 1) {

              dest[length] = IPV6_TLV_PAD1;
            }
          else {
#line 720
            if (extra > 1) {
                dest[length] = IPV6_TLV_PADN;
                dest[length + 1] = extra - 2;
              }
            }
        }
#line 725
      ext->ip6e_len = (length + extra) / 8 - 1;

      return buf + length + extra - 2;
    }
  else {
#line 728
    if ((*buf & LOWPAN_NHC_UDP_MASK) == LOWPAN_NHC_UDP_PATTERN) {

        return IPDispatchP__unpack_udp(dest, nxt_hdr, buf);
      }
    }
#line 732
  return (void *)0;
}

static inline uint8_t *IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, size_t cnt, 
uint8_t *nxt_hdr, uint8_t *buf)
#line 737
{
  uint8_t *dispatch;
  int has_nhc = 1;

  do {
      recon->r_transport_header = *dest;
      dispatch = buf;
      buf = IPDispatchP__unpack_ipnh(*dest, cnt, nxt_hdr, buf);

      if (!buf) {
#line 746
        return (void *)0;
        }
      if ((*dispatch & LOWPAN_NHC_IPV6_MASK) == LOWPAN_NHC_IPV6_PATTERN) {
          struct ip6_ext *ext = (struct ip6_ext *)*dest;

          *dest += (ext->ip6e_len + 1) * 8;
          cnt -= (ext->ip6e_len + 1) * 8;

          if (*dispatch & LOWPAN_NHC_NH) {
              nxt_hdr = & ext->ip6e_nxt;
            }
          else 
#line 756
            {
              has_nhc = 0;
            }
        }
      else {
#line 759
        if ((*dispatch & LOWPAN_NHC_UDP_MASK) == LOWPAN_NHC_UDP_PATTERN) {
            struct udp_hdr *udp = (struct udp_hdr *)*dest;

#line 761
            recon->r_app_len = & udp->len;
            has_nhc = 0;
            *dest += sizeof(struct udp_hdr );
          }
        else 
#line 764
          {
#line 764
            has_nhc = 0;
          }
        }
    }
  while (
#line 765
  has_nhc);
  return buf;
}

#line 594
static inline uint8_t *IPDispatchP__unpack_multicast(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf)
#line 595
{
  memset(addr->in6_u.u6_addr8, 0, 16);

  if (!(dispatch & LOWPAN_IPHC_AC_CONTEXT)) {
      int amount;

#line 600
      switch (dispatch & LOWPAN_IPHC_AM_MASK) {
          case LOWPAN_IPHC_AM_M_128: 
            memcpy(addr->in6_u.u6_addr8, buf, 16);
          return buf + 16;
          case LOWPAN_IPHC_AM_M_48: 
            amount = 5;
          goto copy;
          case LOWPAN_IPHC_AM_M_32: 
            amount = 3;
          copy: 
            addr->in6_u.u6_addr8[0] = 0xff;
          addr->in6_u.u6_addr8[1] = buf[0];
          memcpy(&addr->in6_u.u6_addr8[16 - amount], buf + 1, amount);
          return buf + 1 + amount;
          case LOWPAN_IPHC_AM_M_8: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xff02 << 8) | ((uint16_t )0xff02 >> 8)) & 0xffff;
          addr->in6_u.u6_addr8[15] = buf[0];
          return buf + 1;
        }
    }
  else 
#line 619
    {
    }


  return (void *)0;
}

#line 510
static inline uint8_t *IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf)
#line 510
{
  switch (dispatch & LOWPAN_IPHC_HLIM_MASK) {
      case LOWPAN_IPHC_HLIM_1: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 1;
      break;
      case LOWPAN_IPHC_HLIM_64: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 64;
      break;
      case LOWPAN_IPHC_HLIM_255: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 255;
      break;
      default: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = *buf;
      return buf + 1;
    }
  return buf;
}

#line 501
static inline uint8_t *IPDispatchP__unpack_nh(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf)
#line 501
{
  if ((dispatch & LOWPAN_IPHC_NH_MASK) == LOWPAN_IPHC_NH_INLINE) {
      hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt = *buf;
      return buf + 1;
    }
  else 
#line 505
    {
      return buf;
    }
}

#line 467
static inline uint8_t *IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf)
#line 467
{
  uint8_t fl[3] = { 0, 0, 0 };
  uint8_t tc = 0;

  switch (dispatch & LOWPAN_IPHC_TF_MASK) {
      case LOWPAN_IPHC_TF_ECN_DSCP: 
        tc = (*buf >> 6) & 0xff;
      tc |= (*buf << 2) & 0xff;
      buf += 1;
      break;
      case LOWPAN_IPHC_TF_ECN_FL: 
        tc = (*buf >> 6) & 0xff;
      fl[2] = buf[0] & 0x0f;
      fl[1] = buf[1];
      fl[0] = buf[2];
      buf += 3;
      break;
      case LOWPAN_IPHC_TF_ECN_DSCP_FL: 
        tc = (*buf >> 6) & 0xff;
      tc |= (*buf << 2) & 0xff;
      fl[2] = buf[1] & 0x0f;
      fl[1] = buf[2];
      fl[0] = buf[3];
      buf += 4;
      break;
    }

  hdr->ip6_ctlun.ip6_un1.ip6_un1_flow = ntohl((((((uint32_t )0x6 << 28) | ((uint32_t )tc << 20)) | ((uint32_t )fl[2] << 16)) | ((uint32_t )fl[1] << 8)) | fl[0]);



  return buf;
}

#line 769
static inline uint8_t *IPDispatchP__lowpan_unpack_headers(struct lowpan_reconstruct *recon, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt)
#line 771
{
  uint8_t *dispatch;
#line 772
  uint8_t *unpack_start = buf;
#line 772
  uint8_t *unpack_end;
  int contexts[2] = { 0, 0 };
  uint8_t *dest = recon->r_buf;
  size_t dst_cnt = recon->r_size;
  struct ip6_hdr *hdr = (struct ip6_hdr *)dest;

  dispatch = buf;
  buf += 2;

  if ((*dispatch & LOWPAN_DISPATCH_BYTE_MASK) != LOWPAN_DISPATCH_BYTE_VAL) {
      return (void *)0;
    }


  if ((*(dispatch + 1) & LOWPAN_IPHC_CID_MASK) == LOWPAN_IPHC_CID_PRESENT) {
      contexts[0] = (*buf >> 4) & 0xf;
      contexts[1] = *buf & 0xf;
      buf += 1;
    }


  buf = IPDispatchP__unpack_tcfl(hdr, *dispatch, buf);
  buf = IPDispatchP__unpack_nh(hdr, *dispatch, buf);
  buf = IPDispatchP__unpack_hlim(hdr, *dispatch, buf);




  buf = IPDispatchP__unpack_address(& hdr->ip6_src, 
  *(dispatch + 1) >> LOWPAN_IPHC_SAM_SHIFT, 
  contexts[0], 
  buf, 
  & frame->ieee_src, 
  frame->ieee_dstpan);

  if (!buf) {
      return (void *)0;
    }


  if (*(dispatch + 1) & LOWPAN_IPHC_M) {

      buf = IPDispatchP__unpack_multicast(& hdr->ip6_dst, 
      *(dispatch + 1) >> LOWPAN_IPHC_DAM_SHIFT, 
      contexts[1], 
      buf);
    }
  else {
      buf = IPDispatchP__unpack_address(& hdr->ip6_dst, 
      *(dispatch + 1) >> LOWPAN_IPHC_DAM_SHIFT, 
      contexts[1], 
      buf, 
      & frame->ieee_dst, 
      frame->ieee_dstpan);
    }
  if (!buf) {
      return (void *)0;
    }




  unpack_end = (uint8_t *)(hdr + 1);
  if (*dispatch & LOWPAN_IPHC_NH_MASK) {
      buf = IPDispatchP__unpack_nhc_chain(recon, 
      &unpack_end, 
      dst_cnt - sizeof(struct ip6_hdr ), 
      & hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt, 
      buf);
      if (!buf) {
          return (void *)0;
        }
    }



  memcpy(unpack_end, buf, cnt - (buf - unpack_start));


  return unpack_end + (cnt - (buf - unpack_start));
}

# 61 "/opt/tinyos-main/tos/lib/net/blip/IPAddressP.nc"
static inline bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr)
#line 61
{
  *addr = IPAddressP__m_addr;
  return IPAddressP__m_valid_addr;
}

# 34 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPNeighborDiscoveryP__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 44 "/opt/tinyos-main/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, 
struct in6_addr *ctx)
#line 45
{
  struct in6_addr me;

#line 47
  if (!IPNeighborDiscoveryP__IPAddress__getGlobalAddr(&me)) {
#line 47
    return 0;
    }
#line 48
  if (context == 0) {


      memcpy(ctx->in6_u.u6_addr8, me.in6_u.u6_addr8, 8);
      return 64;
    }
  else 
#line 53
    {
      return 0;
    }
}

# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
inline static int IPDispatchP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx){
#line 17
  int __nesc_result;
#line 17

#line 17
  __nesc_result = IPNeighborDiscoveryP__NeighborDiscovery__getContext(context, ctx);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 83 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline int IPDispatchP__lowpan_extern_read_context(struct in6_addr *addr, int context)
#line 83
{
  return IPDispatchP__NeighborDiscovery__getContext(context, addr);
}

# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
inline static void IPNeighborDiscoveryP__IPForward__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta){
#line 28
  IPForwardingEngineP__IPForward__recv(ROUTE_IFACE_154, iph, payload, meta);
#line 28
}
#line 28
# 129 "/opt/tinyos-main/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta)
#line 129
{
  if (iph->ip6_dst.in6_u.u6_addr8[0] != 0xff) 
    {
      IPNeighborDiscoveryP__IPForward__recv(iph, payload, meta);
    }
  else 
    {
      if ((iph->ip6_dst.in6_u.u6_addr8[1] & 0x0f) <= 0x2) 
        {


          if ((iph->ip6_dst.in6_u.u6_addr8[15] & 0x0f) == 0x2) 
            {
              IPNeighborDiscoveryP__IPForward__recv(iph, payload, meta);
            }

          if ((iph->ip6_dst.in6_u.u6_addr8[15] & 0x0f) == 0x1) 
            {

              IPNeighborDiscoveryP__IPForward__recv(iph, payload, meta);
            }
          if ((iph->ip6_dst.in6_u.u6_addr8[15] & 0xff) == 0x1A) 
            {

              IPNeighborDiscoveryP__IPForward__recv(iph, payload, meta);
            }
        }
    }
}

# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPLower.nc"
inline static void IPDispatchP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta){
#line 28
  IPNeighborDiscoveryP__IPLower__recv(iph, payload, meta);
#line 28
}
#line 28
# 403 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 404
{
}

# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
inline static void IPForwardingEngineP__IPRaw__recv(struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  IPForwardingEngineP__IPRaw__default__recv(hdr, packet, len, meta);
#line 23
}
#line 23
# 27 "/opt/tinyos-main/tos/lib/net/blip/Ieee154AddressP.nc"
static inline ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void )
#line 27
{
  return Ieee154AddressP__m_panid;
}

# 5 "/opt/tinyos-main/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static ieee154_panid_t IPAddressP__Ieee154Address__getPanId(void ){
#line 5
  unsigned int __nesc_result;
#line 5

#line 5
  __nesc_result = Ieee154AddressP__Ieee154Address__getPanId();
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 30 "/opt/tinyos-main/tos/lib/net/blip/Ieee154AddressP.nc"
static inline ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void )
#line 30
{
  return Ieee154AddressP__m_saddr;
}

# 6 "/opt/tinyos-main/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static ieee154_saddr_t IPAddressP__Ieee154Address__getShortAddr(void ){
#line 6
  unsigned int __nesc_result;
#line 6

#line 6
  __nesc_result = Ieee154AddressP__Ieee154Address__getShortAddr();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6

inline static ieee154_laddr_t IPAddressP__Ieee154Address__getExtAddr(void ){
#line 7
  struct ieee_eui64 __nesc_result;
#line 7

#line 7
  __nesc_result = Ieee154AddressP__Ieee154Address__getExtAddr();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 48 "/opt/tinyos-main/tos/interfaces/LocalIeeeEui64.nc"
inline static ieee_eui64_t Ieee154AddressP__LocalIeeeEui64__getId(void ){
#line 48
  struct ieee_eui64 __nesc_result;
#line 48

#line 48
  __nesc_result = DallasId48ToIeeeEui64C__LocalIeeeEui64__getId();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 29 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/DallasId48.h"
static inline bool dallasid48checkCrc(const dallasid48_serial_t *id)
#line 29
{
  uint8_t crc = 0;
  uint8_t idx;

#line 32
  for (idx = 0; idx < DALLASID48_DATA_LENGTH; idx++) {
      uint8_t i;

#line 34
      crc = crc ^ id->data[idx];
      for (i = 0; i < 8; i++) {
          if (crc & 0x01) {
              crc = (crc >> 1) ^ 0x8C;
            }
          else {
              crc >>= 1;
            }
        }
    }
  return crc == 0;
}

# 66 "/opt/tinyos-main/tos/lib/timer/BusyWait.nc"
inline static void OneWireMasterC__BusyWait__wait(OneWireMasterC__BusyWait__size_type dt){
#line 66
  /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(dt);
#line 66
}
#line 66
# 59 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )40U & (0x01 << 4);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw() != 0;
}

# 73 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__get(void )
#line 51
{
#line 51
  return /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__get();
}

# 43 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool OneWireMasterC__Pin__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 61 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )42U &= ~(0x01 << 4);
}

# 78 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput();
#line 78
}
#line 78
# 52 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__makeInput();
}

# 44 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void OneWireMasterC__Pin__makeInput(void ){
#line 44
  /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__makeInput();
#line 44
}
#line 44
# 63 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )42U |= 0x01 << 4;
}

# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void OneWireMasterC__Pin__makeOutput(void ){
#line 46
  /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/OneWireMasterC.nc"
static inline bool OneWireMasterC__readBit(void )
#line 56
{
  bool bit;

#line 58
  OneWireMasterC__Pin__makeOutput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_5US);
  OneWireMasterC__Pin__makeInput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_5US);
  bit = OneWireMasterC__Pin__get();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__SLOT_TIME);
  return bit;
}

#line 80
static inline uint8_t OneWireMasterC__readByte(void )
#line 80
{
  uint8_t i;
#line 81
  uint8_t c = 0;

#line 82
  for (i = 0; i < 8; i++) {
      c >>= 1;
      if (OneWireMasterC__readBit()) {
          c |= 0x80;
        }
    }
  return c;
}

#line 49
static inline void OneWireMasterC__writeZero(void )
#line 49
{
  OneWireMasterC__Pin__makeOutput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_60US);
  OneWireMasterC__Pin__makeInput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_5US);
}

#line 42
static inline void OneWireMasterC__writeOne(void )
#line 42
{
  OneWireMasterC__Pin__makeOutput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_5US);
  OneWireMasterC__Pin__makeInput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__SLOT_TIME);
}

#line 67
static inline void OneWireMasterC__writeByte(uint8_t c)
#line 67
{
  uint8_t j;

#line 69
  for (j = 0; j < 8; j++) {
      if (c & 0x01) {
          OneWireMasterC__writeOne();
        }
      else {
          OneWireMasterC__writeZero();
        }
      c >>= 1;
    }
}

# 57 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )41U &= ~(0x01 << 4);
}

# 53 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__clr(void )
#line 49
{
#line 49
  /*Ds2411C.Gpio*/Msp430GpioC__4__HplGeneralIO__clr();
}

# 41 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void OneWireMasterC__Pin__clr(void ){
#line 41
  /*Ds2411C.Gpio*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 27 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/OneWireMasterC.nc"
static inline bool OneWireMasterC__reset(void )
#line 27
{
  uint16_t i;

#line 29
  OneWireMasterC__Pin__makeInput();
  OneWireMasterC__Pin__clr();
  OneWireMasterC__Pin__makeOutput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__RESET_LOW_TIME);
  OneWireMasterC__Pin__makeInput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_60US);

  for (i = 0; i < OneWireMasterC__PRESENCE_DETECT_LOW_TIME; i += OneWireMasterC__DELAY_5US, OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_5US)) 
    if (!OneWireMasterC__Pin__get()) {
#line 37
      break;
      }
#line 38
  OneWireMasterC__BusyWait__wait(OneWireMasterC__PRESENCE_RESET_HIGH_TIME - OneWireMasterC__DELAY_60US);
  return i < OneWireMasterC__PRESENCE_DETECT_LOW_TIME;
}

#line 91
static inline error_t OneWireMasterC__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len)
#line 91
{
  error_t e = SUCCESS;

#line 93
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      if (OneWireMasterC__reset()) {
          uint8_t i;

#line 96
          OneWireMasterC__writeByte(cmd);
          for (i = 0; i < len; i++) {
              buf[i] = OneWireMasterC__readByte();
            }
        }
      else {
          e = EOFF;
        }
    }
#line 104
    __nesc_atomic_end(__nesc_atomic); }
  return e;
}

# 10 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/OneWireStream.nc"
inline static error_t Ds2411P__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = OneWireMasterC__OneWire__read(cmd, buf, len);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 23 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/Ds2411P.nc"
static inline error_t Ds2411P__readId(void )
#line 23
{
  error_t e = Ds2411P__OneWire__read(0x33, Ds2411P__ds2411id.data, DALLASID48_DATA_LENGTH);

#line 25
  if (e == SUCCESS) {
      if (dallasid48checkCrc(&Ds2411P__ds2411id)) {
          Ds2411P__haveId = TRUE;
        }
      else {
          e = EINVAL;
        }
    }
  return e;
}

static inline error_t Ds2411P__ReadId48__read(uint8_t *id)
#line 36
{
  error_t e = SUCCESS;

#line 38
  if (!Ds2411P__haveId) {
      e = Ds2411P__readId();
    }
  if (Ds2411P__haveId) {
      uint8_t i;

#line 43
      for (i = 0; i < DALLASID48_SERIAL_LENGTH; i++) {

          id[i] = Ds2411P__ds2411id.serial[i];
        }
    }
  return e;
}

# 12 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/ReadId48.nc"
inline static error_t DallasId48ToIeeeEui64C__ReadId48__read(uint8_t *id){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = Ds2411P__ReadId48__read(id);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 62 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get(void )
{




  if (0) {
      /* atomic removed: atomic calls only */
#line 69
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )368U;

#line 72
        do {
#line 72
            t0 = t1;
#line 72
            t1 = * (volatile uint16_t * )368U;
          }
        while (
#line 72
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 73
          t1;

#line 73
          return __nesc_temp;
        }
      }
    }
  else 
#line 76
    {
      return * (volatile uint16_t * )368U;
    }
}

# 45 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 49 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get(void )
{
  return /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__get();
}

# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 64 "/opt/tinyos-main/tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__IP__default__recv(uint8_t nxt_hdr, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 65
{
}

# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
inline static void IPProtocolsP__IP__recv(uint8_t arg_0x411a8208, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x411a8208) {
#line 23
    case IANA_UDP:
#line 23
      UdpP__IP__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case IANA_ICMP:
#line 23
      ICMPCoreP__IP__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      IPProtocolsP__IP__default__recv(arg_0x411a8208, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 14 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPPacket.nc"
inline static int IPProtocolsP__IPPacket__findHeader(struct ip_iovec *payload, uint8_t first_type, uint8_t *search_type){
#line 14
  int __nesc_result;
#line 14

#line 14
  __nesc_result = IPPacketC__IPPacket__findHeader(payload, first_type, search_type);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 18 "/opt/tinyos-main/tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__SubIP__recv(struct ip6_hdr *iph, 
void *payload, 
size_t len, 
struct ip6_metadata *meta)
#line 21
{
  int payload_off;
  uint8_t nxt_hdr;
  struct ip_iovec v = { 
  .iov_base = payload, 
  .iov_len = len, 
  .iov_next = (void *)0 };





  nxt_hdr = IPV6_FRAG;
  payload_off = IPProtocolsP__IPPacket__findHeader(&v, iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, &nxt_hdr);
  if (payload_off >= 0 && ((uint16_t *)((uint8_t *)payload + payload_off))[1] != 0) {
    return;
    }

  nxt_hdr = 0xff;
  payload_off = IPProtocolsP__IPPacket__findHeader(&v, iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, &nxt_hdr);

  if (payload_off >= 0) {
      IPProtocolsP__IP__recv(nxt_hdr, iph, (uint8_t *)payload + payload_off, 
      len - payload_off, meta);
    }
  nxt_hdr = IPV6_NONEXT;
  payload_off = IPProtocolsP__IPPacket__findHeader(&v, iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, &nxt_hdr);
  if (payload_off == -1) {

      IPProtocolsP__IP__recv(nxt_hdr, iph, (uint8_t *)payload, 
      len, meta);
    }
}

# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
inline static void IPForwardingEngineP__IP__recv(struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  IPProtocolsP__SubIP__recv(hdr, packet, len, meta);
#line 23
}
#line 23
# 329 "SSLP.nc"
static inline void SSLP__UDPSend__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 330
{
}

# 41 "NodeC.nc"
static inline int NodeC__findService(char *service)
{
  int index;

#line 44
  for (index = 0; index < 3; index++) 
    {
      if (NodeC__stringlength(service)) 
        {

          if (!memcmp(service, NodeC__sa_services[index].service, NodeC__stringlength(service))) {
            return index;
            }
        }
    }
#line 53
  return -1;
}

#line 126
static inline error_t NodeC__Node__getSAState(void )
{
  return NodeC__SAstate;
}

#line 149
static inline error_t NodeC__Node__findService(char *service, char *scope)
{
  int index;

#line 152
  if (NodeC__Node__getSAState()) 
    {

      index = NodeC__findService(service);
      if (index == -1) {
        return FAIL;
        }
      if (!memcmp(scope, NodeC__sa_services[index].scope, NodeC__stringlength(scope))) {
        return SUCCESS;
        }
    }
  return FAIL;
}

# 30 "Node.nc"
inline static error_t SSLP__Node__findService(char *service, char *scope){
#line 30
  unsigned char __nesc_result;
#line 30

#line 30
  __nesc_result = NodeC__Node__findService(service, scope);
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
#line 20
inline static bool SSLP__Node__getSAState(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = NodeC__Node__getSAState();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 231 "SSLP.nc"
static inline void SSLP__srvrqst_rcv(struct sockaddr_in6 *from, void *data)
{
  service_request_msg *servicemsg = (service_request_msg *)data;

  if (SSLP__Node__getSAState()) 
    {

      printf("\n Service Request Message is received with port:%d", (((uint16_t )from->sin6_port >> 8) | ((uint16_t )from->sin6_port << 8)) & 0xffff);

      if (SSLP__Node__findService(SSLP__removeService(servicemsg->service_type), servicemsg->scope) == SUCCESS) 
        {
          printf("\ni will send the service reply with the location info ");
        }
      else 



        {
          printf("\n i dont have the service:%s", SSLP__removeService(servicemsg->service_type));
        }
    }
  else 


    {
      printf("\n Iam UA and i should not process this message");
      return;
    }
}

#line 334
static inline void SSLP__UDPReceive__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 335
{


  struct sslp_hdr *header = (struct sslp_hdr *)data;

#line 339
  printf("\n checking the type of the message received");
  if (header->msgid == SERVICE_REQUEST) 
    {
      SSLP__srvrqst_rcv(from, data);
    }
}

# 58 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle();
#line 58
}
#line 58
# 50 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle();
}

# 42 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle();
#line 42
}
#line 42
# 114 "/opt/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 114
{
  LedsP__Led2__toggle();
  ;
#line 116
  ;
}

# 100 "/opt/tinyos-main/tos/interfaces/Leds.nc"
inline static void TestC__Leds__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 112 "NodeC.nc"
static inline error_t NodeC__Node__getUAState(void )
{

  return NodeC__UAstate;
}

# 8 "Node.nc"
inline static bool TestC__Node__getUAState(void ){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = NodeC__Node__getUAState();
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t TestC__UDP__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(2U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 20 "Node.nc"
inline static bool TestC__Node__getSAState(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = NodeC__Node__getSAState();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 97 "TestC.nc"
static inline void TestC__UDP__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 98
{


  if (TestC__Node__getSAState()) 
    {
      uint8_t temp = 24;

#line 104
      TestC__Leds__led2Toggle();
      TestC__UDP__sendto(from, &temp, sizeof temp);
    }

  if (TestC__Node__getUAState()) 
    {
      TestC__Leds__led2Toggle();
      printf("\n data received is %d", * (uint8_t *)data);
    }
}

# 181 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__UDP__default__recvfrom(uint8_t clnt, struct sockaddr_in6 *from, 
void *payload, 
uint16_t len, 
struct ip6_metadata *meta)
#line 184
{
}

# 29 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
inline static void UdpP__UDP__recvfrom(uint8_t arg_0x417c88f0, struct sockaddr_in6 *src, void *payload, uint16_t len, struct ip6_metadata *meta){
#line 29
  switch (arg_0x417c88f0) {
#line 29
    case 0U:
#line 29
      SSLP__UDPSend__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    case 1U:
#line 29
      SSLP__UDPReceive__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    case 2U:
#line 29
      TestC__UDP__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    default:
#line 29
      UdpP__UDP__default__recvfrom(arg_0x417c88f0, src, payload, len, meta);
#line 29
      break;
#line 29
    }
#line 29
}
#line 29
# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t UdpP__IP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPProtocolsP__IP__send(IANA_UDP, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 28 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
static inline uint16_t UdpP__alloc_lport(uint8_t clnt)
#line 28
{
  int i;
#line 29
  int done = 0;
  uint16_t compare = (((uint16_t )UdpP__last_localport << 8) | ((uint16_t )UdpP__last_localport >> 8)) & 0xffff;

#line 31
  UdpP__last_localport = UdpP__last_localport < UdpP__LOCAL_PORT_STOP ? UdpP__last_localport + 1 : UdpP__LOCAL_PORT_START;
  while (!done) {
      done = 1;
      for (i = 0; i < UdpP__N_CLIENTS; i++) {
          if (UdpP__local_ports[i] == compare) {
              UdpP__last_localport = UdpP__last_localport < UdpP__LOCAL_PORT_STOP ? UdpP__last_localport + 1 : UdpP__LOCAL_PORT_START;
              compare = (((uint16_t )UdpP__last_localport << 8) | ((uint16_t )UdpP__last_localport >> 8)) & 0xffff;
              done = 0;
              break;
            }
        }
    }
  return UdpP__last_localport;
}

# 39 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool UdpP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 125 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
static inline error_t UdpP__UDP__sendtov(uint8_t clnt, struct sockaddr_in6 *dest, 
struct ip_iovec *iov)
#line 126
{
  error_t rc;
  struct ip6_packet pkt;
  struct udp_hdr udp;
  struct ip_iovec v[1];
  size_t len = iov_len(iov);


  memset((uint8_t *)& pkt.ip6_hdr, 0, sizeof  pkt.ip6_hdr);
  memset((uint8_t *)&udp, 0, sizeof udp);
  memcpy(& pkt.ip6_hdr.ip6_dst, dest->sin6_addr.in6_u.u6_addr8, 16);
  UdpP__IPAddress__setSource(& pkt.ip6_hdr);

  if (UdpP__local_ports[clnt] == 0 && (
  UdpP__local_ports[clnt] = UdpP__alloc_lport(clnt)) == 0) {
      return FAIL;
    }

  udp.srcport = UdpP__local_ports[clnt];
  udp.dstport = dest->sin6_port;
  udp.len = (((uint16_t )(len + sizeof(struct udp_hdr )) << 8) | ((uint16_t )(len + sizeof(struct udp_hdr )) >> 8)) & 0xffff;
  udp.chksum = 0;


  pkt.ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_UDP;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = udp.len;


  v[0].iov_base = (uint8_t *)&udp;
  v[0].iov_len = sizeof(struct udp_hdr );
  v[0].iov_next = iov;
  pkt.ip6_data = &v[0];

  udp.chksum = (((uint16_t )msg_cksum(& pkt.ip6_hdr, v, IANA_UDP) << 8) | ((uint16_t )msg_cksum(& pkt.ip6_hdr, v, IANA_UDP) >> 8)) & 0xffff;
  printf("\nIn UDP calling IP send");
  rc = UdpP__IP__send(&pkt);
  ;
  return rc;
}

# 393 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline error_t IPForwardingEngineP__IPForward__default__send(uint8_t ifindex, struct in6_addr *next_hop, 
struct ip6_packet *pkt, 
void *data)
#line 395
{




  return SUCCESS;
}

# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
inline static error_t IPForwardingEngineP__IPForward__send(uint8_t arg_0x411cf6a8, struct in6_addr *next_hop, struct ip6_packet *msg, void *data){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  switch (arg_0x411cf6a8) {
#line 18
    case ROUTE_IFACE_154:
#line 18
      __nesc_result = IPNeighborDiscoveryP__IPForward__send(next_hop, msg, data);
#line 18
      break;
#line 18
    default:
#line 18
      __nesc_result = IPForwardingEngineP__IPForward__default__send(arg_0x411cf6a8, next_hop, msg, data);
#line 18
      break;
#line 18
    }
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 17 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
inline static neighbr_cache *IPForwardingEngineP__NeighbrCache__findEntry(struct in6_addr ip){
#line 17
  struct neighbr_cache_t *__nesc_result;
#line 17

#line 17
  __nesc_result = NeighbrCacheP__NeighbrCache__findEntry(ip);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 386 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline bool IPForwardingEngineP__ForwardingEvents__default__initiate(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop)
#line 387
{
  return TRUE;
}

# 13 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static bool IPForwardingEngineP__ForwardingEvents__initiate(uint8_t arg_0x411954f8, struct ip6_packet *pkt, struct in6_addr *next_hop){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
    __nesc_result = IPForwardingEngineP__ForwardingEvents__default__initiate(arg_0x411954f8, pkt, next_hop);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 40 "/opt/tinyos-main/tos/lib/net/blip/blip_printf.h"
static inline void printf_in6addr(struct in6_addr *a)
#line 40
{
  static char print_buf[64];

#line 42
  inet_ntop6(a, print_buf, 64);
  printf(print_buf);
}

# 129 "/opt/tinyos-main/tos/lib/net/blip/IPAddressP.nc"
static inline bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr)
#line 129
{
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff) || (
  addr->in6_u.u6_addr8[0] == 0xff && (
  addr->in6_u.u6_addr8[1] & 0x0f) <= 2)) {
    return TRUE;
    }
#line 134
  return FALSE;
}

# 50 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPForwardingEngineP__IPAddress__isLLAddress(struct in6_addr *addr){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = IPAddressP__IPAddress__isLLAddress(addr);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
#line 44
inline static bool IPForwardingEngineP__IPAddress__isLocalAddress(struct in6_addr *addr){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = IPAddressP__IPAddress__isLocalAddress(addr);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 64 "/opt/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get();
}

# 109 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 155 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void IPForwardingEngineP__PrintTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(6U, dt);
#line 64
}
#line 64
# 170 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static bool IPForwardingEngineP__PrintTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(6U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 198 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline error_t IPForwardingEngineP__IP__send(struct ip6_packet *pkt)
#line 198
{



  struct route_entry *next_hop_entry = 
  IPForwardingEngineP__ForwardingTable__lookupRoute(pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8, 128);


  if (!IPForwardingEngineP__PrintTimer__isRunning()) {
    IPForwardingEngineP__PrintTimer__startPeriodic(10000);
    }

  if (IPForwardingEngineP__IPAddress__isLocalAddress(& pkt->ip6_hdr.ip6_dst) && 
  pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {
      printf("Forwarding -- send with local unicast address!\n");
      printf_in6addr(& pkt->ip6_hdr.ip6_dst);
      return FAIL;
    }
  else {
#line 215
    if (IPForwardingEngineP__IPAddress__isLLAddress(& pkt->ip6_hdr.ip6_dst) && (
    !next_hop_entry || next_hop_entry->prefixlen < 128)) {
#line 228
        printf("Forwarding -- send to LL address:");
        printf_in6addr(& pkt->ip6_hdr.ip6_dst);

        pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_hlim = 1;

        if (pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {
            return IPForwardingEngineP__do_send(ROUTE_IFACE_154, & pkt->ip6_hdr.ip6_dst, pkt);
          }
        else 
#line 235
          {
            return IPForwardingEngineP__IPForward__send(ROUTE_IFACE_154, & pkt->ip6_hdr.ip6_dst, pkt, (void *)0);
          }
      }
    else {
#line 238
      if (next_hop_entry) {
          printf("Forwarding -- got from routing table\n");


          if (!IPForwardingEngineP__ForwardingEvents__initiate(next_hop_entry->ifindex, pkt, 
          & next_hop_entry->next_hop)) {
            return FAIL;
            }
          return IPForwardingEngineP__do_send(next_hop_entry->ifindex, & next_hop_entry->next_hop, pkt);
        }
      }
    }
#line 249
  if (IPForwardingEngineP__NeighbrCache__findEntry(pkt->ip6_hdr.ip6_dst)) {
      printf("found from neighbor cache");
      return IPForwardingEngineP__IPForward__send(ROUTE_IFACE_154, & pkt->ip6_hdr.ip6_dst, pkt, (void *)0);
    }
#line 266
  printf("\n cannot send this packet");
  return FAIL;
}

# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t IPProtocolsP__SubIP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPForwardingEngineP__IP__send(msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 88 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t */*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get(void )
#line 88
{
  if (/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free) {
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t *rval = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index];

#line 91
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index] = (void *)0;
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free--;
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index++;
      if (/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index == 3) {
          /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static IPForwardingEngineP__Pool__t * IPForwardingEngineP__Pool__get(void ){
#line 97
  struct in6_iid *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 5 "/opt/tinyos-main/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static ieee154_panid_t IPNeighborDiscoveryP__Ieee154Address__getPanId(void ){
#line 5
  unsigned int __nesc_result;
#line 5

#line 5
  __nesc_result = Ieee154AddressP__Ieee154Address__getPanId();
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 29 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPNeighborDiscoveryP__IPAddress__getLLAddr(struct in6_addr *addr){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = IPAddressP__IPAddress__getLLAddr(addr);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 15 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
inline static error_t IPNeighborDiscoveryP__NeighbrCache__resolveIP(struct in6_addr *ip, ieee154_addr_t *linkaddr){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = NeighbrCacheP__NeighbrCache__resolveIP(ip, linkaddr);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t IPDispatchP__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(IPDispatchP__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 97 "/opt/tinyos-main/tos/chips/cc2420/link/PacketLinkP.nc"
static inline void PacketLinkP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay)
#line 97
{
  __nesc_hton_uint16(PacketLinkP__CC2420PacketBody__getMetadata(msg)->retryDelay.nxdata, retryDelay);
}

# 53 "/opt/tinyos-main/tos/interfaces/PacketLink.nc"
inline static void IPDispatchP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay){
#line 53
  PacketLinkP__PacketLink__setRetryDelay(msg, retryDelay);
#line 53
}
#line 53
# 88 "/opt/tinyos-main/tos/chips/cc2420/link/PacketLinkP.nc"
static inline void PacketLinkP__PacketLink__setRetries(message_t *msg, uint16_t maxRetries)
#line 88
{
  __nesc_hton_uint16(PacketLinkP__CC2420PacketBody__getMetadata(msg)->maxRetries.nxdata, maxRetries);
}

# 46 "/opt/tinyos-main/tos/interfaces/PacketLink.nc"
inline static void IPDispatchP__PacketLink__setRetries(message_t * msg, uint16_t maxRetries){
#line 46
  PacketLinkP__PacketLink__setRetries(msg, maxRetries);
#line 46
}
#line 46
# 69 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline void /*IPDispatchC.QueueC*/QueueC__0__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 12;
}

#line 57
static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void )
#line 57
{
  return /*IPDispatchC.QueueC*/QueueC__0__size;
}

#line 97
static inline error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(/*IPDispatchC.QueueC*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*IPDispatchC.QueueC*/QueueC__0__Queue__size() < /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*IPDispatchC.QueueC*/QueueC__0__queue[/*IPDispatchC.QueueC*/QueueC__0__tail] = newVal;
      /*IPDispatchC.QueueC*/QueueC__0__tail++;
      if (/*IPDispatchC.QueueC*/QueueC__0__tail == 12) {
#line 102
        /*IPDispatchC.QueueC*/QueueC__0__tail = 0;
        }
#line 103
      /*IPDispatchC.QueueC*/QueueC__0__size++;
      /*IPDispatchC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t IPDispatchP__SendQueue__enqueue(IPDispatchP__SendQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 89 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static error_t IPDispatchP__SendEntryPool__put(IPDispatchP__SendEntryPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t IPDispatchP__FragPool__put(IPDispatchP__FragPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 94 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static void IPDispatchP__BarePacket__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  CC2420TinyosNetworkP__BarePacket__setPayloadLength(msg, len);
#line 94
}
#line 94
# 116 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline uint8_t CC2420TinyosNetworkP__BarePacket__maxPayloadLength(void )
#line 116
{
  return 112 + sizeof(cc2420_header_t );
}

# 106 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t IPDispatchP__BarePacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = CC2420TinyosNetworkP__BarePacket__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 125 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static void * IPDispatchP__Ieee154Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = CC2420TinyosNetworkP__BareSend__getPayload(msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 337 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__setFragDgramOffset(struct packed_lowmsg *msg, uint8_t size)
#line 337
{
  uint8_t *buf = msg->data;

#line 339
  if (buf == (void *)0) {
#line 339
    return 1;
    }




  if ((*buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 345
    return 1;
    }
#line 346
  buf += 4;
  *buf = size;
  return 0;
}

#line 321
static __inline uint8_t IPDispatchP__setFragDgramTag(struct packed_lowmsg *msg, uint16_t tag)
#line 321
{
  uint8_t *buf = msg->data;

#line 323
  if (buf == (void *)0) {
#line 323
    return 1;
    }




  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 330
    return 1;
    }
#line 331
  buf += 2;

  buf[0] = tag >> 8;
  buf[1] = tag & 0xff;
  return 0;
}

#line 301
static __inline uint8_t IPDispatchP__setFragDgramSize(struct packed_lowmsg *msg, uint16_t size)
#line 301
{
  uint8_t *buf = msg->data;

#line 303
  if (buf == (void *)0) {
#line 303
    return 1;
    }



  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 309
    return 1;
    }
#line 310
  size = size & 0x7ff;


  *buf &= 0xf8;
  *buf |= size >> 8;
  buf[1] = size & 0xff;


  return 0;
}

#line 114
static __inline uint8_t IPDispatchP__setupHeaders(struct packed_lowmsg *packed, uint16_t headers)
#line 114
{
  uint8_t *buf = packed->data;
  uint16_t len = packed->len;

#line 117
  if (packed == (void *)0) {
#line 117
    return 1;
    }
#line 118
  if (buf == (void *)0) {
#line 118
    return 1;
    }
#line 119
  packed->headers = 0;
#line 136
  if (headers & LOWMSG_FRAG1_HDR) {
      if (len < LOWMSG_FRAG1_LEN) {
#line 137
        return 1;
        }
#line 138
      packed->headers |= LOWMSG_FRAG1_HDR;
      *buf = LOWPAN_FRAG1_PATTERN << 3;
      buf += LOWMSG_FRAG1_LEN;
      len -= LOWMSG_FRAG1_LEN;
    }
  if (headers & LOWMSG_FRAGN_HDR) {
      if (len < LOWMSG_FRAGN_LEN) {
#line 144
        return 1;
        }
#line 145
      packed->headers |= LOWMSG_FRAGN_HDR;
      *buf = LOWPAN_FRAGN_PATTERN << 3;
    }
  return 0;
}

# 261 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__pack_udp(uint8_t *buf, size_t cnt, struct ip6_packet *packet, int offset)
#line 261
{
  struct udp_hdr udp;

  if (cnt < 7) {
      return -1;
    }

  if (iov_read(packet->ip6_data, offset, sizeof(struct udp_hdr ), (void *)&udp) != 
  sizeof(struct udp_hdr )) {
      return -1;
    }

  *buf = LOWPAN_NHC_UDP_PATTERN | LOWPAN_NHC_UDP_PORT_FULL;
  memcpy(buf + 1, & udp.srcport, 4);
  memcpy(buf + 5, & udp.chksum, 2);
  return 7;
}










static inline uint8_t IPDispatchP____ipnh_real_length(uint8_t type, struct ip_iovec *pkt, int offset)
#line 288
{
  int start_offset = offset;
#line 289
  int end_offset = offset + 2;
  struct ip6_ext ext;
  struct tlv_hdr tlv;

#line 292
  if (iov_read(pkt, offset, 2, (void *)&ext) != 2) {
    return -1;
    }


  if (type != IPV6_HOP && type != IPV6_DEST) {
    return (ext.ip6e_len + 1) * 8;
    }
  offset += 2;
  for (; ; ) {
      if (offset >= (ext.ip6e_len + 1) * 8) {
#line 302
        break;
        }
#line 303
      if (iov_read(pkt, offset, 2, (void *)&tlv) != 2) {
        return -1;
        }
      if (tlv.type == IPV6_TLV_PAD1) {
          offset += 1;
        }
      else 
#line 308
        {
          offset += 2 + tlv.len;
          if (tlv.type != IPV6_TLV_PADN) {
              end_offset = offset;
            }
        }
    }


  if (offset - start_offset != (ext.ip6e_len + 1) * 8) {
    return 0;
    }


  return end_offset - start_offset;
}

static inline int IPDispatchP__pack_ipnh(uint8_t *dest, size_t cnt, uint8_t *type, struct ip6_packet *packet, int offset)
#line 325
{
  struct ip6_ext ext;
  uint8_t real_len;


  if (iov_read(packet->ip6_data, offset, 2, (void *)&ext) != 2) {
    return -1;
    }
  if (ext.ip6e_len > cnt) {
    return -1;
    }
  *dest = LOWPAN_NHC_IPV6_PATTERN;
  switch (*type) {
      case IPV6_HOP: 
        *dest |= LOWPAN_NHC_EID_HOP;
#line 339
      break;
      case IPV6_ROUTING: 
        *dest |= LOWPAN_NHC_EID_ROUTING;
#line 341
      break;
      case IPV6_FRAG: 
        *dest |= LOWPAN_NHC_EID_FRAG;
#line 343
      break;
      case IPV6_DEST: 
        *dest |= LOWPAN_NHC_EID_DEST;
#line 345
      break;
      case IPV6_MOBILITY: 
        *dest |= LOWPAN_NHC_EID_MOBILE;
#line 347
      break;
      default: 
        return -1;
    }

  real_len = IPDispatchP____ipnh_real_length(*type, packet->ip6_data, offset);
  if (real_len == 0) {
    return -1;
    }


  *type = ext.ip6e_nxt;

  if ((((((
#line 359
  ext.ip6e_nxt == IPV6_HOP || ext.ip6e_nxt == IPV6_ROUTING) || ext.ip6e_nxt == IPV6_FRAG) || 
  ext.ip6e_nxt == IPV6_DEST) || ext.ip6e_nxt == IPV6_MOBILITY) || ext.ip6e_nxt == IPV6_IPV6) || 
  ext.ip6e_nxt == IANA_UDP) {
      *dest |= LOWPAN_NHC_NH;
    }
  else 
#line 363
    {

      dest++;
      *dest = ext.ip6e_nxt;
    }

  dest++;
  * dest++ = real_len;


  if (iov_read(packet->ip6_data, offset + 2, real_len - 2, dest) != real_len - 2) {
    return -1;
    }

  return (ext.ip6e_len + 1) * 8;
}

static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t cnt, struct ip6_packet *packet)
#line 380
{
  uint8_t nxt = packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt;
  int offset = 0;
#line 382
  int rv;




  while (((((nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY) || nxt == IPV6_IPV6) {
      int extra;

#line 390
      rv = IPDispatchP__pack_ipnh(*dest, cnt, &nxt, packet, offset);

      if (rv < 0) {
#line 392
        return -1;
        }



      extra = * *dest & LOWPAN_NHC_NH ? 0 : 1;
      *dest += rv + extra;
      offset += rv;
      cnt -= rv;
    }

  if (nxt == IANA_UDP) {
      rv = IPDispatchP__pack_udp(*dest, cnt, packet, offset);

      if (rv < 0) {
#line 406
        return -1;
        }
#line 407
      offset += sizeof(struct udp_hdr );
      *dest += rv;
    }
  return offset;
}

#line 235
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags)
#line 235
{

  *flags = 0;
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xff02 << 8) | ((uint16_t )0xff02 >> 8)) & 0xffff) && 
  IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 120) == 0) {
      *flags |= LOWPAN_IPHC_AM_M_8;
      *buf = addr->in6_u.u6_addr8[15];
      return buf + 1;
    }
  else {
#line 243
    if (IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 104) == 0) {
        *flags |= LOWPAN_IPHC_AM_M_32;
        *buf = addr->in6_u.u6_addr8[1];
        memcpy(buf + 1, &addr->in6_u.u6_addr8[13], 3);
        return buf + 4;
      }
    else {
#line 248
      if (IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 88) == 0) {
          *flags |= LOWPAN_IPHC_AM_M_48;
          *buf = addr->in6_u.u6_addr8[1];
          memcpy(buf + 1, &addr->in6_u.u6_addr8[11], 5);
          return buf + 6;
        }
      else 
#line 253
        {
          *flags += LOWPAN_IPHC_AM_M_128;
          memcpy(buf, addr->in6_u.u6_addr8, 16);
          return buf + 16;
        }
      }
    }
}

# 16 "/opt/tinyos-main/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
inline static int IPDispatchP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx){
#line 16
  int __nesc_result;
#line 16

#line 16
  __nesc_result = IPNeighborDiscoveryP__NeighborDiscovery__matchContext(addr, ctx);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 87 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline int IPDispatchP__lowpan_extern_match_context(struct in6_addr *addr, uint8_t *ctx_id)
#line 87
{
  return IPDispatchP__NeighborDiscovery__matchContext(addr, ctx_id);
}

# 148 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch)
#line 148
{
  if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 1) {
      *dispatch |= LOWPAN_IPHC_HLIM_1;
    }
  else {
#line 151
    if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 64) {
        *dispatch |= LOWPAN_IPHC_HLIM_64;
      }
    else {
#line 153
      if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 255) {
          *dispatch |= LOWPAN_IPHC_HLIM_255;
        }
      else 
#line 155
        {
          *dispatch |= LOWPAN_IPHC_HLIM_NONE;
          * buf++ = hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim;
        }
      }
    }
#line 159
  return buf;
}

#line 136
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch)
#line 136
{
  uint8_t nxt = hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt;

  if ((((((
#line 138
  nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY) || nxt == IPV6_IPV6) || 
  nxt == IANA_UDP) {
      *dispatch |= LOWPAN_IPHC_NH_MASK;
    }
  else 
#line 142
    {
      * buf++ = hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt;
    }
  return buf;
}

#line 105
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch)
#line 105
{
  uint32_t flow = ntohl(hdr->ip6_ctlun.ip6_un1.ip6_un1_flow) & 0x000fffff;
  uint8_t tc = (ntohl(hdr->ip6_ctlun.ip6_un1.ip6_un1_flow) >> 20) & 0xff;

#line 108
  if (flow == 0 && tc == 0) {

      *dispatch |= LOWPAN_IPHC_TF_NONE;
    }
  else {
#line 111
    if (flow == 0) {
        *dispatch |= LOWPAN_IPHC_TF_ECN_DSCP;
        *buf = (tc >> 2) & 0xff;
        *buf |= (tc << 6) & 0xff;
        buf++;
      }
    else {
#line 116
      if ((tc & 0x3) == tc) {
          *dispatch |= LOWPAN_IPHC_TF_ECN_FL;
          *buf = (tc << 6) & 0xff;
          *buf |= (flow >> 16) & 0x0f;
          *(buf + 1) = (flow >> 8) & 0xff;
          *(buf + 2) = flow & 0xff;
          buf += 3;
        }
      else 
#line 123
        {
          *dispatch |= LOWPAN_IPHC_TF_ECN_DSCP_FL;
          *buf = (tc >> 2) & 0xff;
          *buf |= (tc << 6) & 0xff;

          *(buf + 1) = (flow >> 16) & 0x0f;
          *(buf + 2) = (flow >> 8) & 0xff;
          *(buf + 3) = flow & 0xff;
          buf += 4;
        }
      }
    }
#line 133
  return buf;
}

#line 413
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt)
#line 415
{
  uint8_t *dispatch;
#line 416
  uint8_t temp_dispatch;
#line 416
  uint8_t ctx_match_length;

  if ((packet->ip6_hdr.ip6_ctlun.ip6_un2_vfc & 0xf0) != 0x60) {
      return (void *)0;
    }
#line 433
  dispatch = buf;
  *dispatch = LOWPAN_DISPATCH_BYTE_VAL;
  *(dispatch + 1) = 0;
  buf += 2;

  buf = IPDispatchP__pack_tcfl(buf, & packet->ip6_hdr, dispatch);
  buf = IPDispatchP__pack_nh(buf, & packet->ip6_hdr, dispatch);
  buf = IPDispatchP__pack_hlim(buf, & packet->ip6_hdr, dispatch);




  ctx_match_length = IPDispatchP__lowpan_extern_match_context(& packet->ip6_hdr.ip6_src, &temp_dispatch);
  temp_dispatch = 0;
  buf = IPDispatchP__pack_address(buf, & packet->ip6_hdr.ip6_src, ctx_match_length, 
  & frame->ieee_src, frame->ieee_dstpan, &temp_dispatch);
  *(dispatch + 1) |= temp_dispatch << LOWPAN_IPHC_SAM_SHIFT;

  if (packet->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {

      ctx_match_length = IPDispatchP__lowpan_extern_match_context(& packet->ip6_hdr.ip6_dst, &temp_dispatch);
      temp_dispatch = 0;
      buf = IPDispatchP__pack_address(buf, & packet->ip6_hdr.ip6_dst, ctx_match_length, 
      & frame->ieee_dst, frame->ieee_dstpan, &temp_dispatch);
      *(dispatch + 1) |= temp_dispatch << LOWPAN_IPHC_DAM_SHIFT;
    }
  else 
#line 458
    {

      buf = IPDispatchP__pack_multicast(buf, & packet->ip6_hdr.ip6_dst, &temp_dispatch);
      *(dispatch + 1) |= (temp_dispatch << LOWPAN_IPHC_DAM_SHIFT) | LOWPAN_IPHC_AM_M;
    }

  return buf;
}

# 102 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static inline int IPDispatchP__lowpan_frag_get(uint8_t *frag, size_t len, 
struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
struct lowpan_ctx *ctx)
#line 105
{
  uint8_t *buf;
#line 106
  uint8_t *lowpan_buf;
#line 106
  uint8_t *ieee_buf = frag;
  uint16_t extra_payload;


  buf = lowpan_buf = IPDispatchP__pack_ieee154_header(frag, len, frame);
  if (ctx->offset == 0) {
      int offset = 0;








      buf = IPDispatchP__lowpan_pack_headers(packet, frame, buf, len - (buf - frag));
      if (!buf) {
#line 122
        return -1;
        }

      offset = IPDispatchP__pack_nhc_chain(&buf, len - (buf - ieee_buf), packet);
      if (offset < 0) {
#line 126
        return -2;
        }


      extra_payload = ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) - offset;


      if (extra_payload > len - (buf - ieee_buf)) {
          struct packed_lowmsg lowmsg;

#line 135
          memmove(lowpan_buf + LOWMSG_FRAG1_LEN, 
          lowpan_buf, 
          buf - lowpan_buf);

          lowmsg.data = lowpan_buf;
          lowmsg.len = LOWMSG_FRAG1_LEN;
          lowmsg.headers = 0;
          IPDispatchP__setupHeaders(&lowmsg, LOWMSG_FRAG1_HDR);
          IPDispatchP__setFragDgramSize(&lowmsg, ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ));
          IPDispatchP__setFragDgramTag(&lowmsg, ctx->tag);

          lowpan_buf += LOWMSG_FRAG1_LEN;
          buf += LOWMSG_FRAG1_LEN;

          extra_payload = len - (buf - ieee_buf);
          extra_payload -= extra_payload % 8;
        }


      if (iov_read(packet->ip6_data, offset, extra_payload, buf) != extra_payload) {
          return -3;
        }

      ctx->offset = offset + extra_payload + sizeof(struct ip6_hdr );
      return buf - frag + extra_payload;
    }
  else 
#line 160
    {
      struct packed_lowmsg lowmsg;

#line 162
      buf = lowpan_buf = IPDispatchP__pack_ieee154_header(frag, len, frame);


      lowmsg.data = lowpan_buf;
      lowmsg.len = LOWMSG_FRAGN_LEN;
      lowmsg.headers = 0;
      IPDispatchP__setupHeaders(&lowmsg, LOWMSG_FRAGN_HDR);
      if (IPDispatchP__setFragDgramSize(&lowmsg, ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ))) {
        return -5;
        }
#line 171
      if (IPDispatchP__setFragDgramTag(&lowmsg, ctx->tag)) {
        return -6;
        }
#line 173
      if (IPDispatchP__setFragDgramOffset(&lowmsg, ctx->offset / 8)) {
        return -7;
        }
#line 175
      buf += LOWMSG_FRAGN_LEN;

      extra_payload = ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ) - ctx->offset;
      if (extra_payload > len - (buf - ieee_buf)) {
          extra_payload = len - (buf - ieee_buf);
          extra_payload -= extra_payload % 8;
        }

      if (iov_read(packet->ip6_data, ctx->offset - sizeof(struct ip6_hdr ), extra_payload, buf) != extra_payload) {
          return -4;
        }

      ctx->offset += extra_payload;

      if (extra_payload == 0) {
#line 189
        return 0;
        }
      else {
#line 190
        return lowpan_buf - ieee_buf + LOWMSG_FRAGN_LEN + extra_payload;
        }
    }
}

# 102 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__BarePacket__clear(message_t *msg)
#line 102
{
  memset(msg, 0, sizeof(message_t ));
}

# 65 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static void IPDispatchP__BarePacket__clear(message_t * msg){
#line 65
  CC2420TinyosNetworkP__BarePacket__clear(msg);
#line 65
}
#line 65
# 88 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t */*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__free) {
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *rval = /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[/*IPDispatchC.FragPool.PoolP*/PoolP__0__index];

#line 91
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[/*IPDispatchC.FragPool.PoolP*/PoolP__0__index] = (void *)0;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__free--;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__index++;
      if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__index == 12) {
          /*IPDispatchC.FragPool.PoolP*/PoolP__0__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static IPDispatchP__FragPool__t * IPDispatchP__FragPool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t */*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free) {
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *rval = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index];

#line 91
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index] = (void *)0;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free--;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index++;
      if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index == 12) {
          /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static IPDispatchP__SendEntryPool__t * IPDispatchP__SendEntryPool__get(void ){
#line 97
  struct send_entry *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t */*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free) {
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *rval = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index];

#line 91
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index] = (void *)0;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free--;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index++;
      if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index == 3) {
          /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static IPDispatchP__SendInfoPool__t * IPDispatchP__SendInfoPool__get(void ){
#line 97
  struct send_info *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 139 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline struct send_info *IPDispatchP__getSendInfo(void )
#line 139
{
  struct send_info *ret = IPDispatchP__SendInfoPool__get();

#line 141
  if (ret == (void *)0) {
#line 141
    return ret;
    }
#line 142
  ret->_refcount = 1;
  ret->upper_data = (void *)0;
  ret->failed = FALSE;
  ret->link_transmissions = 0;
  ret->link_fragments = 0;
  ret->link_fragment_attempts = 0;
  return ret;
}

#line 494
static inline error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *frame_addr, 
struct ip6_packet *msg, 
void *data)
#line 496
{
  struct lowpan_ctx ctx;
  struct send_info *s_info;
  struct send_entry *s_entry;
  message_t *outgoing;

  int frag_len = 1;
  error_t rc = SUCCESS;

  if (IPDispatchP__state != IPDispatchP__S_RUNNING) {
      return EOFF;
    }

  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc &= ~0xf0;
  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc |= 0x60;

  ctx.tag = IPDispatchP__current_local_label++;
  ctx.offset = 0;

  s_info = IPDispatchP__getSendInfo();
  if (s_info == (void *)0) {
      rc = ERETRY;
      goto cleanup_outer;
    }
  s_info->upper_data = data;

  while (frag_len > 0) {
      s_entry = IPDispatchP__SendEntryPool__get();
      outgoing = IPDispatchP__FragPool__get();

      if (s_entry == (void *)0 || outgoing == (void *)0) {
          if (s_entry != (void *)0) {
            IPDispatchP__SendEntryPool__put(s_entry);
            }
#line 529
          if (outgoing != (void *)0) {
            IPDispatchP__FragPool__put(outgoing);
            }

          s_info->failed = TRUE;

          rc = ERETRY;
          goto done;
        }

      IPDispatchP__BarePacket__clear(outgoing);
      frag_len = IPDispatchP__lowpan_frag_get(IPDispatchP__Ieee154Send__getPayload(outgoing, 0), 
      IPDispatchP__BarePacket__maxPayloadLength(), 
      msg, 
      frame_addr, 
      &ctx);
      if (frag_len < 0) {
          printf(" get frag error: %i\n", frag_len);
        }

      IPDispatchP__BarePacket__setPayloadLength(outgoing, frag_len);

      if (frag_len <= 0) {
          IPDispatchP__FragPool__put(outgoing);
          IPDispatchP__SendEntryPool__put(s_entry);
          goto done;
        }

      if (IPDispatchP__SendQueue__enqueue(s_entry) != SUCCESS) {
          ;
          s_info->failed = TRUE;

          goto done;
        }

      s_info->link_fragments++;
      s_entry->msg = outgoing;
      s_entry->info = s_info;


      if (frame_addr->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT && 
      frame_addr->ieee_dst.ieee_addr.saddr == IEEE154_BROADCAST_ADDR) {
          IPDispatchP__PacketLink__setRetries(s_entry->msg, 0);
        }
      else 
#line 572
        {
          IPDispatchP__PacketLink__setRetries(s_entry->msg, 5);
        }
      IPDispatchP__PacketLink__setRetryDelay(s_entry->msg, 103);

      s_info->_refcount++;
    }

  done: 
    ;
  IPDispatchP__SENDINFO_DECR(s_info);
  IPDispatchP__sendTask__postTask();
  cleanup_outer: 
    return rc;
}

# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPLower.nc"
inline static error_t IPNeighborDiscoveryP__IPLower__send(struct ieee154_frame_addr *next_hop, struct ip6_packet *msg, void *data){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = IPDispatchP__IPLower__send(next_hop, msg, data);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 63 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__iid_eui_cmp(uint8_t *iid, uint8_t *eui)
#line 63
{
  return iid[0] == (eui[7] ^ 0x2) && 
  iid[1] == eui[6] && 
  iid[2] == eui[5] && 
  iid[3] == eui[4] && 
  iid[4] == eui[3] && 
  iid[5] == eui[2] && 
  iid[6] == eui[1] && 
  iid[7] == eui[0];
}

# 103 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free >= 3) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index + /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free;

#line 109
      if (emptyIndex >= 3) {
          emptyIndex -= 3;
        }
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[emptyIndex] = newVal;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free++;
      ;
      return SUCCESS;
    }
}

# 89 "/opt/tinyos-main/tos/interfaces/Pool.nc"
inline static error_t IPDispatchP__SendInfoPool__put(IPDispatchP__SendInfoPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t IPForwardingEngineP__Pool__put(IPForwardingEngineP__Pool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 39 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool ICMPCoreP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 17 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t ICMPCoreP__IP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPProtocolsP__IP__send(IANA_ICMP, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 107 "/opt/tinyos-main/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline error_t ICMPCoreP__ICMP_IP__send(uint8_t type, struct ip6_packet *pkt)
#line 107
{
  struct icmp6_hdr *req = (struct icmp6_hdr *)pkt->ip6_data->iov_base;

#line 109
  if (pkt->ip6_data->iov_len >= sizeof(struct icmp6_hdr ) && 
  pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt == IANA_ICMP) {
      req->cksum = 0;
      req->cksum = (((uint16_t )msg_cksum(& pkt->ip6_hdr, pkt->ip6_data, IANA_ICMP) << 8) | ((uint16_t )msg_cksum(& pkt->ip6_hdr, pkt->ip6_data, IANA_ICMP) >> 8)) & 0xffff;
    }

  return ICMPCoreP__IP__send(pkt);
}



static inline void ICMPCoreP__ICMP_IP__default__recv(uint8_t type, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 121
{
}

# 23 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IP.nc"
inline static void ICMPCoreP__ICMP_IP__recv(uint8_t arg_0x41745418, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
    ICMPCoreP__ICMP_IP__default__recv(arg_0x41745418, hdr, packet, len, meta);
#line 23
}
#line 23
# 14 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPPacket.nc"
inline static int IPForwardingEngineP__IPPacket__findHeader(struct ip_iovec *payload, uint8_t first_type, uint8_t *search_type){
#line 14
  int __nesc_result;
#line 14

#line 14
  __nesc_result = IPPacketC__IPPacket__findHeader(payload, first_type, search_type);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 382 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline bool IPForwardingEngineP__ForwardingEvents__default__approve(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop)
#line 383
{
  return TRUE;
}

# 28 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static bool IPForwardingEngineP__ForwardingEvents__approve(uint8_t arg_0x411954f8, struct ip6_packet *pkt, struct in6_addr *next_hop){
#line 28
  unsigned char __nesc_result;
#line 28

#line 28
    __nesc_result = IPForwardingEngineP__ForwardingEvents__default__approve(arg_0x411954f8, pkt, next_hop);
#line 28

#line 28
  return __nesc_result;
#line 28
}
#line 28
# 178 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP__m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
#line 97
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 88
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 111 "/opt/tinyos-main/tos/chips/cc2420/link/PacketLinkP.nc"
static inline uint16_t PacketLinkP__PacketLink__getRetryDelay(message_t *msg)
#line 111
{
  return __nesc_ntoh_uint16(PacketLinkP__CC2420PacketBody__getMetadata(msg)->retryDelay.nxdata);
}

# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void PacketLinkP__DelayTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 73
}
#line 73
# 75 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP__Acks__wasAcked(message_t *p_msg)
#line 75
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->ack.nxdata);
}

# 85 "/opt/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
inline static bool PacketLinkP__PacketAcknowledgements__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = CC2420PacketP__Acks__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 71 "/opt/tinyos-main/tos/interfaces/State.nc"
inline static uint8_t PacketLinkP__SendState__getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP__State__getState(4U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 171 "/opt/tinyos-main/tos/chips/cc2420/link/PacketLinkP.nc"
static inline void PacketLinkP__SubSend__sendDone(message_t *msg, error_t error)
#line 171
{
  if (PacketLinkP__SendState__getState() == PacketLinkP__S_SENDING) {
      PacketLinkP__totalRetries++;
      if (PacketLinkP__PacketAcknowledgements__wasAcked(msg)) {
          PacketLinkP__signalDone(SUCCESS);
          return;
        }
      else {
#line 178
        if (PacketLinkP__totalRetries < PacketLinkP__PacketLink__getRetries(PacketLinkP__currentSendMsg)) {

            if (PacketLinkP__PacketLink__getRetryDelay(PacketLinkP__currentSendMsg) > 0) {

                PacketLinkP__DelayTimer__startOneShot(PacketLinkP__PacketLink__getRetryDelay(PacketLinkP__currentSendMsg));
              }
            else {

                PacketLinkP__send__postTask();
              }

            return;
          }
        }
    }
  PacketLinkP__signalDone(error);
}

# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static void CC2420CsmaP__Send__sendDone(message_t * msg, error_t error){
#line 100
  PacketLinkP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 111 "/opt/tinyos-main/tos/system/StateImplP.nc"
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP__state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/tinyos-main/tos/interfaces/State.nc"
inline static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(1U, reqState);
#line 51
}
#line 51
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__stopDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__stopDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__stopVReg(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 69 "/opt/tinyos-main/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 105 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420TransmitP__StdControl__stop();
#line 105
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__stop());
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 282 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__shutdown(void )
#line 282
{
  CC2420CsmaP__SubControl__stop();
  CC2420CsmaP__CC2420Power__stopVReg();
  CC2420CsmaP__stopDone_task__postTask();
}

# 66 "/opt/tinyos-main/tos/interfaces/State.nc"
inline static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP__State__isState(1U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 251 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__sendDone_task__runTask(void )
#line 251
{
  error_t packetErr;

#line 253
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 253
    packetErr = CC2420CsmaP__sendErr;
#line 253
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
      CC2420CsmaP__shutdown();
    }
  else {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
    }

  CC2420CsmaP__Send__sendDone(CC2420CsmaP__m_msg, packetErr);
}

# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )31U &= ~(0x01 << 1);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc();
#line 99
}
#line 99
# 135 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

# 58 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents();
#line 58
}
#line 58
# 69 "/opt/tinyos-main/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc();
  }
}

# 66 "/opt/tinyos-main/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 66
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable();
#line 66
}
#line 66
# 102 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__clear(void )
#line 102
{
#line 102
  P1IFG &= ~(1 << 0);
}

# 52 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port10__clear();
#line 52
}
#line 52
# 94 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__disable(void )
#line 94
{
#line 94
  P1IE &= ~(1 << 0);
}

# 47 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port10__disable();
#line 47
}
#line 47
# 69 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  }
  return SUCCESS;
}

# 61 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 57 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 5);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__HplGeneralIO__clr();
}

# 41 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 41
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__clr();
#line 41
}
#line 41
# 165 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void PacketLinkP__DelayTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
#line 78
}
#line 78
# 81 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static IPDispatchP__SendQueue__t  IPDispatchP__SendQueue__dequeue(void ){
#line 81
  struct send_entry *__nesc_result;
#line 81

#line 81
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 22 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPForward.nc"
inline static void IPNeighborDiscoveryP__IPForward__sendDone(struct send_info *status){
#line 22
  IPForwardingEngineP__IPForward__sendDone(ROUTE_IFACE_154, status);
#line 22
}
#line 22
# 160 "/opt/tinyos-main/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status)
#line 160
{
  IPNeighborDiscoveryP__IPForward__sendDone(status);
}

# 22 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPLower.nc"
inline static void IPDispatchP__IPLower__sendDone(struct send_info *status){
#line 22
  IPNeighborDiscoveryP__IPLower__sendDone(status);
#line 22
}
#line 22
# 118 "/opt/tinyos-main/tos/chips/cc2420/link/PacketLinkP.nc"
static inline bool PacketLinkP__PacketLink__wasDelivered(message_t *msg)
#line 118
{
  return PacketLinkP__PacketAcknowledgements__wasAcked(msg);
}

# 71 "/opt/tinyos-main/tos/interfaces/PacketLink.nc"
inline static bool IPDispatchP__PacketLink__wasDelivered(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = PacketLinkP__PacketLink__wasDelivered(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
#line 59
inline static uint16_t IPDispatchP__PacketLink__getRetries(message_t * msg){
#line 59
  unsigned int __nesc_result;
#line 59

#line 59
  __nesc_result = PacketLinkP__PacketLink__getRetries(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 98 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__SplitControl__stop(void )
#line 98
{
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPING);
      CC2420CsmaP__shutdown();
      return SUCCESS;
    }
  else {
#line 104
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPED)) {
        return EALREADY;
      }
    else {
#line 107
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_TRANSMITTING)) {
          CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPING);

          return SUCCESS;
        }
      else {
#line 112
        if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
            return SUCCESS;
          }
        }
      }
    }
#line 116
  return EBUSY;
}

# 130 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t IPDispatchP__RadioControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = CC2420CsmaP__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 65 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__head(void )
#line 65
{
  return /*IPDispatchC.QueueC*/QueueC__0__queue[/*IPDispatchC.QueueC*/QueueC__0__head];
}

# 73 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static IPDispatchP__SendQueue__t  IPDispatchP__SendQueue__head(void ){
#line 73
  struct send_entry *__nesc_result;
#line 73

#line 73
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 588 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__Ieee154Send__sendDone(message_t *msg, error_t error)
#line 588
{
  struct send_entry *s_entry = IPDispatchP__SendQueue__head();

  IPDispatchP__radioBusy = FALSE;



  if (IPDispatchP__state == IPDispatchP__S_STOPPING) {
      IPDispatchP__RadioControl__stop();
      IPDispatchP__state = IPDispatchP__S_STOPPED;
      goto done;
    }

  s_entry->info->link_transmissions += IPDispatchP__PacketLink__getRetries(msg);

  s_entry->info->link_fragment_attempts++;

  if (!IPDispatchP__PacketLink__wasDelivered(msg)) {


      s_entry->info->failed = TRUE;
      IPDispatchP__IPLower__sendDone(s_entry->info);
    }
  else {


    if (s_entry->info->link_fragment_attempts == 
    s_entry->info->link_fragments) {

        IPDispatchP__IPLower__sendDone(s_entry->info);
      }
    }
  done: 

    IPDispatchP__SENDINFO_DECR(s_entry->info);
  IPDispatchP__FragPool__put(s_entry->msg);
  IPDispatchP__SendEntryPool__put(s_entry);
  IPDispatchP__SendQueue__dequeue();

  IPDispatchP__sendTask__postTask();
}

# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__BareSend__sendDone(message_t * msg, error_t error){
#line 100
  IPDispatchP__Ieee154Send__sendDone(msg, error);
#line 100
}
#line 100
# 250 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__ActiveSend__default__sendDone(message_t *msg, error_t error)
#line 250
{
}

# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__ActiveSend__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__ActiveSend__default__sendDone(msg, error);
#line 100
}
#line 100
# 148 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error)
#line 148
{
  if (CC2420TinyosNetworkP__m_busy_client == CC2420TinyosNetworkP__CLIENT_AM) {
      CC2420TinyosNetworkP__ActiveSend__sendDone(msg, error);
    }
  else 
#line 151
    {
      CC2420TinyosNetworkP__BareSend__sendDone(msg, error);
    }
}

# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static void UniqueSendP__Send__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 104 "/opt/tinyos-main/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP__State__toIdle();
  UniqueSendP__Send__sendDone(msg, error);
}

# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static void PacketLinkP__Send__sendDone(message_t * msg, error_t error){
#line 100
  UniqueSendP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 390 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__ForwardingEvents__default__linkResult(uint8_t idx, struct in6_addr *host, 
struct send_info *info)
#line 391
{
}

# 39 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static void IPForwardingEngineP__ForwardingEvents__linkResult(uint8_t arg_0x411954f8, struct in6_addr *dest, struct send_info *info){
#line 39
    IPForwardingEngineP__ForwardingEvents__default__linkResult(arg_0x411954f8, dest, info);
#line 39
}
#line 39
# 129 "TestC.nc"
static inline void TestC__SplitControl__stopDone(error_t error)
{
}

#line 117
static inline void TestC__SSLPControl__stopDone(error_t error)
{
}

# 138 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void SSLP__SplitControl__stopDone(error_t error){
#line 138
  TestC__SSLPControl__stopDone(error);
#line 138
}
#line 138
# 383 "SSLP.nc"
static inline void SSLP__RadioControl__stopDone(error_t e)
#line 383
{
  SSLP__SplitControl__stopDone(SUCCESS);
}

# 138 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void IPStackControlP__SplitControl__stopDone(error_t error){
#line 138
  SSLP__RadioControl__stopDone(error);
#line 138
  TestC__SplitControl__stopDone(error);
#line 138
}
#line 138
# 37 "/opt/tinyos-main/tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__SubSplitControl__stopDone(error_t error)
#line 37
{
  IPStackControlP__SplitControl__stopDone(error);
}

# 138 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void IPDispatchP__SplitControl__stopDone(error_t error){
#line 138
  IPStackControlP__SubSplitControl__stopDone(error);
#line 138
}
#line 138
# 57 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )49U &= ~(0x01 << 6);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr();
}

# 41 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr();
#line 41
}
#line 41
# 104 "/opt/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

# 89 "/opt/tinyos-main/tos/interfaces/Leds.nc"
inline static void IPDispatchP__Leds__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89
# 189 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__RadioControl__stopDone(error_t error)
#line 189
{
  IPDispatchP__Leds__led2On();
  IPDispatchP__SplitControl__stopDone(error);
}

# 138 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__stopDone(error_t error){
#line 138
  IPDispatchP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 272 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__stopDone_task__runTask(void )
#line 272
{
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPED);
  CC2420CsmaP__SplitControl__stopDone(SUCCESS);
}

# 125 "TestC.nc"
static inline void TestC__SplitControl__startDone(error_t error)
{
}

# 8 "Node.nc"
inline static bool SSLP__Node__getUAState(void ){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = NodeC__Node__getUAState();
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 281 "SSLP.nc"
static inline error_t SSLP__ServiceLocation__send(char *service, char *scope)
{

  if (SSLP__Node__getUAState()) 
    {


      memset(&SSLP__global_service, 0, sizeof SSLP__global_service);
      memset(&SSLP__global_scope, 0, sizeof SSLP__global_scope);
      memset(&SSLP__sreq_msg, 0, sizeof(service_request_msg ));


      memcpy(&SSLP__global_service, service, SSLP__stringlength(service));
      memcpy(&SSLP__global_scope, scope, SSLP__stringlength(scope));

      SSLP__global_service_len = SSLP__stringlength(SSLP__global_service);
      SSLP__global_scope_len = SSLP__stringlength(SSLP__global_scope);
      SSLP__MSGSTATE = SERVICE_REQUEST;
      SSLP__srvrqst_snd(SSLP__global_service, SSLP__global_service_len, SSLP__global_scope, SSLP__global_scope_len);


      return SUCCESS;
    }
  return FAIL;
}

# 7 "ServiceLocation.nc"
inline static error_t TestC__ServiceLocation__send(char *service_type, char *scope){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = SSLP__ServiceLocation__send(service_type, scope);
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 12 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t TestC__UDP__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(2U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 25 "NodeC.nc"
static inline int NodeC__allocindex(void )
{
  int index;

#line 28
  for (index = 0; index < 3; index++) 
    {
      if (!NodeC__stringlength(NodeC__sa_services[index].service)) 
        {
          break;
        }
    }

  if (index == 3) {
    return -1;
    }
#line 38
  return index;
}

#line 131
static inline error_t NodeC__Node__addService(char *serv, char *scop, struct in6_addr *loc, uint16_t port_no)
{
  int index = NodeC__allocindex();

#line 134
  if (index == -1) {
    return FAIL;
    }
  else {

      memcpy(& NodeC__sa_services[index].service, serv, NodeC__stringlength(serv));
      memcpy(& NodeC__sa_services[index].scope, scop, NodeC__stringlength(scop));
      memcpy(& NodeC__sa_services[index].ip_address, loc, sizeof(struct in6_addr ));
      NodeC__sa_services[index].port_no = port_no;

      return SUCCESS;
    }
}

# 13 "Node.nc"
inline static error_t TestC__Node__addService(char *service, char *scope, struct in6_addr *loc, uint16_t port){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = NodeC__Node__addService(service, scope, loc, port);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 72 "TestC.nc"
static inline void TestC__SSLPControl__startDone(error_t error)
{

  if (TestC__Node__getSAState()) 
    {
      printf("\n Iam SA");
      TestC__UDP__bind(1234);
      TestC__Node__addService("temp", "cdac", &TestC__LinkLocal, 1234);
    }



  if (TestC__Node__getUAState()) 
    {

      printf("\n Iam UA");
      TestC__UDP__bind(1254);
      TestC__ServiceLocation__send("temp", "cdac");
    }
}

# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void SSLP__SplitControl__startDone(error_t error){
#line 113
  TestC__SSLPControl__startDone(error);
#line 113
}
#line 113
# 379 "SSLP.nc"
static inline void SSLP__RadioControl__startDone(error_t e)
#line 379
{
  SSLP__SplitControl__startDone(SUCCESS);
}

# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void IPStackControlP__SplitControl__startDone(error_t error){
#line 113
  SSLP__RadioControl__startDone(error);
#line 113
  TestC__SplitControl__startDone(error);
#line 113
}
#line 113
# 50 "/opt/tinyos-main/tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__RoutingControl__default__start(void )
#line 50
{
#line 50
  return SUCCESS;
}

# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__RoutingControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = IPStackControlP__RoutingControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 34 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPStackControlP__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 48 "/opt/tinyos-main/tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__StdControl__default__start(void )
#line 48
{
#line 48
  return SUCCESS;
}

# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__StdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = IPStackControlP__StdControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 16 "/opt/tinyos-main/tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__SubSplitControl__startDone(error_t error)
#line 16
{
  struct in6_addr addr;

#line 18
  if (error == SUCCESS) {
      IPStackControlP__StdControl__start();
    }


  if (IPStackControlP__IPAddress__getGlobalAddr(&addr)) {
      IPStackControlP__RoutingControl__start();
    }

  IPStackControlP__SplitControl__startDone(error);
}

# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void IPDispatchP__SplitControl__startDone(error_t error){
#line 113
  IPStackControlP__SubSplitControl__startDone(error);
#line 113
}
#line 113
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void IPDispatchP__ExpireTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(5U, dt);
#line 64
}
#line 64
# 174 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__RadioControl__startDone(error_t error)
#line 174
{




  if (error == SUCCESS) {

      IPDispatchP__ExpireTimer__startPeriodic(FRAG_EXPIRE_TIME);
      IPDispatchP__state = IPDispatchP__S_RUNNING;
      IPDispatchP__radioBusy = FALSE;
    }

  IPDispatchP__SplitControl__startDone(error);
}

# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__startDone(error_t error){
#line 113
  IPDispatchP__RadioControl__startDone(error);
#line 113
}
#line 113
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__set();
#line 40
}
#line 40
# 196 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__release(void )
#line 196
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 197
    {
      CC2420ControlP__CSN__set();
      {
        unsigned char __nesc_temp = 
#line 199
        CC2420ControlP__SpiResource__release();

        {
#line 199
          __nesc_atomic_end(__nesc_atomic); 
#line 199
          return __nesc_temp;
        }
      }
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
}

# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420ControlP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 269 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 269
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 272
            FAIL;

            {
#line 272
              __nesc_atomic_end(__nesc_atomic); 
#line 272
              return __nesc_temp;
            }
          }
        }
#line 274
      CC2420ControlP__SRXON__strobe();
    }
#line 275
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 86 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__enable(void )
#line 86
{
#line 86
  P1IE |= 1 << 0;
}

# 42 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port10__enable();
#line 42
}
#line 42
# 118 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__edge(bool l2h)
#line 118
{
  /* atomic removed: atomic calls only */
#line 119
  {
    if (l2h) {
#line 120
      P1IES &= ~(1 << 0);
      }
    else {
#line 121
      P1IES |= 1 << 0;
      }
  }
}

# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port10__edge(low_to_high);
#line 67
}
#line 67
# 52 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(FALSE);
}

# 54 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 157 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__start(void )
#line 157
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__receivingPacket = FALSE;




      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 168 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__start(void )
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
      CC2420TransmitP__abortSpiRelease = FALSE;
      CC2420TransmitP__m_tx_power = 0;
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420TransmitP__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 264 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__startDone_task__runTask(void )
#line 264
{
  CC2420CsmaP__SubControl__start();
  CC2420CsmaP__CC2420Power__rxOn();
  CC2420CsmaP__Resource__release();
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
  CC2420CsmaP__SplitControl__startDone(SUCCESS);
}

# 98 "SSLP.nc"
static inline int SSLP__servicefinder(char *service, char *scope)
{
  int i;

#line 101
  printf("\n Looking for service:%s and Scope:%s", service, scope);
  for (i = 0; i < 5; i++) 
    {
      if (!memcmp(service, SSLP__services[i].service, SSLP__stringlength(service)) && !memcmp(scope, SSLP__services[i].scope, 
      SSLP__stringlength(scope))) {
        return i;
        }
    }
#line 108
  printf("\n ServiceFinder returnd:%d", i);
  return -1;
}

#line 310
static inline int SSLP__ServiceLocation__findService(char *service, char *scope)
{
  int index = SSLP__servicefinder(service, scope);

#line 313
  if (index != -1) 
    {
      return index;
    }
  else {
    return -1;
    }
}

#line 132
static inline void SSLP__fillHeader(struct sslp_hdr *header, uint8_t type, uint16_t seq_no)
{
  header->version = 2;
  header->msgid = type;
  header->seq_no = seq_no;
  printf("\n The sequence number sent is %d", seq_no);
}

#line 57
static inline uint8_t SSLP__seq_generator(char *service, char *scope)
{
  uint8_t i;


  for (i = 0; i < 5; i++) 
    {
      if (!memcmp(service, SSLP__available_sequences[i].service, SSLP__stringlength(service)) && 
      !memcmp(scope, SSLP__available_sequences[i].scope, SSLP__stringlength(scope))) {
        return i;
        }
    }


  for (i = 0; i < 5; i++) 
    {
      if (!SSLP__stringlength(SSLP__available_sequences[i].service)) 
        {
          break;
        }
    }
  if (i == 5) 
    {
      if (SSLP__indexer == 5) 
        {
          i = SSLP__indexer = 0;
        }
      else 
        {
          i = SSLP__indexer;
        }
      SSLP__indexer++;
    }
  memcpy(SSLP__available_sequences[i].service, service, SSLP__stringlength(service));
  memcpy(SSLP__available_sequences[i].scope, scope, SSLP__stringlength(scope));
  SSLP__available_sequences[i].sequence_no = i;

  return i;
}

# 60 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool SSLP__IPAddress__getEUILLAddress(struct in6_addr *addr){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = IPAddressP__IPAddress__getEUILLAddress(addr);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 115 "SSLP.nc"
static inline char *SSLP__addService(char *serv)
{
  memcpy(&SSLP__append[SSLP__stringlength("service:")], serv, SSLP__stringlength(serv));

  return SSLP__append;
}

# 18 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t SSLP__UDPSend__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(0U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 73 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void SSLP__RetransmitTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(8U, dt);
#line 73
}
#line 73
# 106 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline uint8_t CC2420TinyosNetworkP__BarePacket__payloadLength(message_t *msg)
#line 106
{
  cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 108
  return __nesc_ntoh_leuint8(hdr->length.nxdata) + 1 - MAC_FOOTER_SIZE;
}

# 78 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t IPDispatchP__BarePacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__BarePacket__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 297 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 45 "/opt/tinyos-main/tos/interfaces/State.nc"
inline static error_t PacketLinkP__SendState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(4U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 130 "/opt/tinyos-main/tos/chips/cc2420/link/PacketLinkP.nc"
static inline error_t PacketLinkP__Send__send(message_t *msg, uint8_t len)
#line 130
{
  error_t error;

#line 132
  if (PacketLinkP__SendState__requestState(PacketLinkP__S_SENDING) == SUCCESS) {

      PacketLinkP__currentSendMsg = msg;
      PacketLinkP__currentSendLen = len;
      PacketLinkP__totalRetries = 0;

      if (PacketLinkP__PacketLink__getRetries(msg) > 0) {
          PacketLinkP__PacketAcknowledgements__requestAck(msg);
        }

      if ((error = PacketLinkP__SubSend__send(msg, len)) != SUCCESS) {
          PacketLinkP__SendState__toIdle();
        }

      return error;
    }
  return EBUSY;
}

# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static error_t UniqueSendP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = PacketLinkP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 42 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 45 "/opt/tinyos-main/tos/interfaces/State.nc"
inline static error_t UniqueSendP__State__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(2U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 75 "/opt/tinyos-main/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP__State__requestState(UniqueSendP__S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP__CC2420PacketBody__getHeader(msg)->dsn.nxdata, UniqueSendP__localSendId++);

      if ((error = UniqueSendP__SubSend__send(msg, len)) != SUCCESS) {
          UniqueSendP__State__toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = UniqueSendP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 124 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__BareSend__send(message_t *msg, uint8_t len)
#line 124
{
  CC2420TinyosNetworkP__BarePacket__setPayloadLength(msg, len);
  CC2420TinyosNetworkP__m_busy_client = CC2420TinyosNetworkP__CLIENT_BARE;
  return CC2420TinyosNetworkP__SubSend__send(msg, 0);
}

# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static error_t IPDispatchP__Ieee154Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420TinyosNetworkP__BareSend__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 53 "/opt/tinyos-main/tos/system/QueueC.nc"
static inline bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*IPDispatchC.QueueC*/QueueC__0__size == 0;
}

# 50 "/opt/tinyos-main/tos/interfaces/Queue.nc"
inline static bool IPDispatchP__SendQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 439 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__sendTask__runTask(void )
#line 439
{
  struct send_entry *s_entry;



  if (IPDispatchP__radioBusy || IPDispatchP__state != IPDispatchP__S_RUNNING) {
#line 444
    return;
    }
#line 445
  if (IPDispatchP__SendQueue__empty()) {
#line 445
    return;
    }
  s_entry = IPDispatchP__SendQueue__head();






  if (s_entry->info->failed) {
      ;
      goto fail;
    }


  if (
#line 459
  IPDispatchP__Ieee154Send__send(s_entry->msg, 
  IPDispatchP__BarePacket__payloadLength(s_entry->msg)) != SUCCESS) {
      ;
      goto fail;
    }
  else 
#line 463
    {
      IPDispatchP__radioBusy = TRUE;
    }

  return;
  fail: 

    IPDispatchP__sendTask__postTask();
  ;



  s_entry->info->failed = TRUE;
  IPDispatchP__SENDINFO_DECR(s_entry->info);
  IPDispatchP__FragPool__put(s_entry->msg);
  IPDispatchP__SendEntryPool__put(s_entry);
  IPDispatchP__SendQueue__dequeue();
}

# 406 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded(void )
#line 406
{
}

# 43 "/opt/tinyos-main/tos/lib/net/blip/interfaces/ForwardingTableEvents.nc"
inline static void IPForwardingEngineP__ForwardingTableEvents__defaultRouteAdded(void ){
#line 43
  IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded();
#line 43
}
#line 43
# 99 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__defaultRouteAddedTask__runTask(void )
#line 99
{
  IPForwardingEngineP__ForwardingTableEvents__defaultRouteAdded();
}

# 103 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 65 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
}

# 73 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 102 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop();
}

# 73 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 101 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 136
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 196 "NodeC.nc"
static inline error_t NodeC__Node__printServices(void )
{
  int i;

#line 199
  if (NodeC__Node__getSAState()) 
    {
      printf("\n Service \t\t IP_Address\t\tPort Number\t\tscope\n");
      for (i = 0; i < 3; i++) 
        {
          if (NodeC__stringlength(NodeC__sa_services[i].service)) 
            {
              printf("%s\t\t", NodeC__sa_services[i].service);
              printf_in6addr(& NodeC__sa_services[i].ip_address);
              printf("\t\t\t%d", NodeC__sa_services[i].port_no);
              printf("\t\t%s\n", NodeC__sa_services[i].scope);
            }
        }
      return SUCCESS;
    }
  else {
    return FAIL;
    }
}

# 33 "Node.nc"
inline static error_t TestC__Node__printServices(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = NodeC__Node__printServices();
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 95 "NodeC.nc"
static inline uint8_t NodeC__service_count(void )
{
  uint8_t count = 0;
#line 97
  uint8_t i;

#line 98
  for (i = 0; i < 3; i++) 
    {
      if (NodeC__stringlength(NodeC__sa_services[i].service)) {
        count++;
        }
    }
#line 103
  return count;
}

# 31 "TestC.nc"
static inline uint8_t TestC__stringlength(char *data)
{
  uint8_t i;
  uint8_t count = 0;

#line 35
  for (i = 0; *(data + i) != '\0'; i++) 
    count++;
  return count;
}

# 58 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle(void )
#line 58
{
#line 58
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 58
    * (volatile uint8_t * )49U ^= 0x01 << 4;
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle();
#line 58
}
#line 58
# 50 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle();
}

# 42 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle();
#line 42
}
#line 42
# 84 "/opt/tinyos-main/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 84
{
  LedsP__Led0__toggle();
  ;
#line 86
  ;
}

# 67 "/opt/tinyos-main/tos/interfaces/Leds.nc"
inline static void TestC__Leds__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 138 "TestC.nc"
static inline void TestC__Node__servicesAvailable(services_available *sa_service, uint8_t count)
{
  TestC__Leds__led0Toggle();
  printf("\n the number of the services is %d\n", count);
  printfflush();
  if (count > 0) 
    {
      while (count) 
        {
          if (TestC__stringlength(sa_service[count - 1].service)) 
            {
              printf("%s\t\t", sa_service[count - 1].service);
              printf_in6addr(& sa_service[count - 1].ip_address);
              printf("\t\t\t%d", sa_service[count - 1].port_no);
              printf("\t\t%s\n", sa_service[count - 1].scope);
              count--;
            }
        }
    }
}

# 387 "SSLP.nc"
static inline void SSLP__Node__servicesAvailable(services_available *sa_service, uint8_t count)
{
}

# 36 "Node.nc"
inline static void NodeC__Node__servicesAvailable(services_available *services, uint8_t count){
#line 36
  SSLP__Node__servicesAvailable(services, count);
#line 36
  TestC__Node__servicesAvailable(services, count);
#line 36
}
#line 36
# 184 "NodeC.nc"
static inline error_t NodeC__Node__getServices(void )
{
  if (NodeC__Node__getSAState()) 
    {
      NodeC__Node__servicesAvailable(&NodeC__sa_services[0], NodeC__service_count());
    }

  return FAIL;
}

# 18 "Node.nc"
inline static error_t TestC__Node__getServices(void ){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = NodeC__Node__getServices();
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 50 "TestC.nc"
static inline void TestC__Timer__fired(void )
{
#line 64
  TestC__Node__getServices();


  TestC__Node__printServices();
}

# 415 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__NeighbrCache__prefixReg(void )
#line 415
{
}

# 174 "/opt/tinyos-main/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__NeighbrCache__prefixReg(void )
#line 174
{
}

# 49 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
inline static void NeighbrCacheP__NeighbrCache__prefixReg(void ){
#line 49
  IPNeighborDiscoveryP__NeighbrCache__prefixReg();
#line 49
  IPForwardingEngineP__NeighbrCache__prefixReg();
#line 49
}
#line 49
# 200 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCacheP.nc"
static inline void NeighbrCacheP__PrintRouterTable(void )
{
  uint8_t i;

#line 203
  printf("\n Router Table");
  printf("\n Router IP  \t\t\t\t Registration Lifetime\n");
  for (i = 0; i < NeighbrCacheP__no_rtr; i++) 
    {
      if (NeighbrCacheP__rtr_table[i].rtr != 0) 
        {
          printf_in6addr(& NeighbrCacheP__rtr_table[i].rtr->ip_address);
          printf("\t\t\t\t");
          printf("%ld\n", NeighbrCacheP__rtr_table[i].rtr->info.timer);
        }
    }
}

#line 183
static inline void NeighbrCacheP__PrefixPrint(void )
{
  uint8_t i;

#line 186
  printf("\n Prefix List");
  printf("\n Prefix \t\t\t\t Registration Lifetime\t\t\t\tLBR Address\n");
  for (i = 0; i < 3; i++) 
    {
      printf_in6addr(& NeighbrCacheP__prefix_table[i].ra_info.prefix_information.prefix);
      printf("\t\t\t\t\t\t");
      printf("%ld", NeighbrCacheP__prefix_table[i].ra_info.prefix_information.preferrd_lifetime);
      printf("\t\t\t\t\t");
      printf_in6addr(& NeighbrCacheP__prefix_table[i].abro_information.lbr_addr);
      printf("\n");
    }
}

#line 103
static inline int NeighbrCacheP__findRouter(struct in6_addr ip)
{
  int i;

#line 106
  for (i = 0; i < 2; i++) 
    {
      if (!memcmp(&ip, & NeighbrCacheP__rtr_table[i].rtr->ip_address, sizeof(struct in6_addr ))) 
        {
          return i;
        }
    }
  return -1;
}

#line 850
static inline error_t NeighbrCacheP__RouterList__remove(struct in6_addr rtr_ip)
{
  int i;

#line 853
  printf("\n Removing the router ip:");
  printf_in6addr(&rtr_ip);
  i = NeighbrCacheP__findRouter(rtr_ip);
  if (i == -1 || i > 2) {
      return FAIL;
    }
  memset(&NeighbrCacheP__rtr_table[i], 0, sizeof(default_rtrlist ));
  NeighbrCacheP__no_rtr--;
  printf("\n No. of Routers present are:%d", NeighbrCacheP__no_rtr);
  return SUCCESS;
}

#line 288
static inline error_t NeighbrCacheP__NeighbrCache__removeentry(struct in6_addr ip)
{
  int i;

#line 291
  i = NeighbrCacheP__find(ip);


  if (i == -1) {
    return NP;
    }
  else {
      printf("\n NeighborCache Removeentry");
      printf_in6addr(& NeighbrCacheP__neighbr_table[i].ip_address);
      memset(&NeighbrCacheP__neighbr_table[i], 0, sizeof(neighbr_cache ));
      return SUCCESS;
    }
}

# 411 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__NeighbrCache__default_rtrlistempty(void )
#line 411
{
}

# 170 "/opt/tinyos-main/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__NeighbrCache__default_rtrlistempty(void )
#line 170
{
}

# 59 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
inline static void NeighbrCacheP__NeighbrCache__default_rtrlistempty(void ){
#line 59
  IPNeighborDiscoveryP__NeighbrCache__default_rtrlistempty();
#line 59
  IPForwardingEngineP__NeighbrCache__default_rtrlistempty();
#line 59
}
#line 59
# 551 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCacheP.nc"
static inline void NeighbrCacheP__Timer__fired(void )
{
  uint8_t i;

#line 554
  if (NeighbrCacheP__no_rtr == 0) 
    {


      NeighbrCacheP__NeighbrCache__default_rtrlistempty();
    }


  for (i = 0; i < 10 && NeighbrCacheP__neighbr_table[i].info.timer != 0; i++) 
    {
      NeighbrCacheP__neighbr_table[i].info.timer -= 1;




      if (NeighbrCacheP__neighbr_table[i].info.timer <= 0) 
        {
          printf("\n In Timer Fired Removing the entry as the time is not zero");
          NeighbrCacheP__NeighbrCache__removeentry(NeighbrCacheP__neighbr_table[i].ip_address);

          if (NeighbrCacheP__neighbr_table[i].info.isRouter) 
            {
              if (NeighbrCacheP__RouterList__remove(NeighbrCacheP__neighbr_table[i].ip_address) != SUCCESS) 
                {
                }
            }
        }
    }





  NeighbrCacheP__NeighbrCache__PrintTable();
  NeighbrCacheP__PrefixPrint();
  NeighbrCacheP__PrintRouterTable();

  for (i = 0; i < 10 && NeighbrCacheP__dad_table[i].reg_lifetime != 0; i++) 
    {
      NeighbrCacheP__dad_table[i].reg_lifetime -= 1;
      if (NeighbrCacheP__dad_table[i].reg_lifetime == 0) 
        {
          printf("\n as the registration lifetime is zero removing it");
          printf_in6addr(& NeighbrCacheP__dad_table[i].ip_address);
          memset(&NeighbrCacheP__dad_table[i], 0, sizeof(dad_cache ));
        }
    }


  for (i = 0; i < 3 && NeighbrCacheP__prefix_table[i].ra_info.prefix_information.preferrd_lifetime > 0; i++) 
    {
      NeighbrCacheP__prefix_table[i].ra_info.prefix_information.preferrd_lifetime -= 1;
      NeighbrCacheP__prefix_table[i].abro_information.valid_lifetime -= 1;
      if (NeighbrCacheP__prefix_table[i].ra_info.prefix_information.preferrd_lifetime < 4 && 
      NeighbrCacheP__prefix_table[i].ra_info.prefix_information.preferrd_lifetime > 2) {
        NeighbrCacheP__NeighbrCache__prefixReg();
        }


      if (NeighbrCacheP__prefix_table[i].ra_info.prefix_information.preferrd_lifetime <= 0) 
        {
          memset(& NeighbrCacheP__prefix_table[i].ra_info.prefix_information, 0, sizeof(prefix_info ));
        }


      if (NeighbrCacheP__prefix_table[i].abro_information.valid_lifetime <= 0) 
        {
          memset(&NeighbrCacheP__prefix_table[i], 0, sizeof(prefix_list ));
        }
    }
}

# 413 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__NeighbrCache__NUD_reminder(struct in6_addr ip_address)
#line 413
{
}

# 172 "/opt/tinyos-main/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__NeighbrCache__NUD_reminder(struct in6_addr ip_address)
#line 172
{
}

# 61 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCache.nc"
inline static void NeighbrCacheP__NeighbrCache__NUD_reminder(struct in6_addr ip_address){
#line 61
  IPNeighborDiscoveryP__NeighbrCache__NUD_reminder(ip_address);
#line 61
  IPForwardingEngineP__NeighbrCache__NUD_reminder(ip_address);
#line 61
}
#line 61
# 308 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCacheP.nc"
static inline error_t NeighbrCacheP__NeighbrCache__delEntry(uint8_t i)
{

  NeighbrCacheP__NeighbrCache__PrintTable();
  printf("\n Deleting Neighbor Cache Entry index:%d", i);
  memset(& NeighbrCacheP__neighbr_table[i].ip_address, 0, 16);
  memset(& NeighbrCacheP__neighbr_table[i].linklayer_addr, 0, 8);
  memset(& NeighbrCacheP__neighbr_table[i].info, 0, sizeof(neighbr_info ));
  NeighbrCacheP__NeighbrCache__PrintTable();
  return SUCCESS;
}

#line 654
static inline void NeighbrCacheP__NUDTimer__fired(void )
{

  uint8_t i;

#line 658
  for (i = 0; i < 10 && NeighbrCacheP__neighbr_table[i].info.timer > 0; i++) 
    {
      NeighbrCacheP__count[i]++;
      if (NeighbrCacheP__neighbr_table[i].info.state == PROBE) 
        {

          if (NeighbrCacheP__count[i] * 1000 == 3 * 60000U) {
              NeighbrCacheP__NeighbrCache__delEntry(i);
              printf("\n Deleting entry because neighbor is not  reachable");
              NeighbrCacheP__count[i] = 0;
            }
        }
      if (NeighbrCacheP__neighbr_table[i].info.state == DELAY) 
        {
          NeighbrCacheP__neighbr_table[i].info.state = PROBE;
          printf("\n Changing state of %d to PROBE", i);
          NeighbrCacheP__NeighbrCache__NUD_reminder(NeighbrCacheP__neighbr_table[i].ip_address);
          NeighbrCacheP__count[i] = 0;
        }
      if (NeighbrCacheP__neighbr_table[i].info.state == STALE) 
        {

          if (NeighbrCacheP__count[i] * 1000 == 60000U) 
            {
              printf("\n changing state of %d to DELAY", i);
              NeighbrCacheP__neighbr_table[i].info.state = DELAY;
              NeighbrCacheP__count[i] = 0;
            }
        }
      if (NeighbrCacheP__neighbr_table[i].info.state == REACHABLE) 
        {
          if (NeighbrCacheP__NUD_REACHBLE_PERIOD == NeighbrCacheP__count[i]) 
            {
              printf("\n changing the state of %d to STALE", i);
              NeighbrCacheP__neighbr_table[i].info.state = STALE;
              NeighbrCacheP__count[i] = 0;
            }
        }
    }
}

# 202 "/opt/tinyos-main/tos/chips/cc2420/link/PacketLinkP.nc"
static inline void PacketLinkP__DelayTimer__fired(void )
#line 202
{
  if (PacketLinkP__SendState__getState() == PacketLinkP__S_SENDING) {
      PacketLinkP__send__postTask();
    }
}

# 278 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__ip_print_heap(void )
#line 278
{

  bndrt_t *cur = (bndrt_t *)heap;

#line 281
  while ((uint8_t *)cur - heap < 1500) {


      cur = (bndrt_t *)((uint8_t *)cur + (*cur & 0x0fff));
    }
}

#line 253
static inline void IPDispatchP__reconstruct_age(void *elt)
#line 253
{
  struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)elt;

#line 255
  if (recon->r_timeout != T_UNUSED) {



    switch (recon->r_timeout) {
        case T_ACTIVE: 
          recon->r_timeout = T_ZOMBIE;
#line 261
        break;
        case T_FAILED1: 
          recon->r_timeout = T_FAILED2;
#line 263
        break;
        case T_ZOMBIE: 
          case T_FAILED2: 


            if (recon->r_buf != (void *)0) {

                ip_free(recon->r_buf);
              }
        recon->r_timeout = T_UNUSED;
        recon->r_buf = (void *)0;
        break;
      }
    }
}











static inline void IPDispatchP__ExpireTimer__fired(void )
#line 289
{
  table_map(&IPDispatchP__recon_cache, IPDispatchP__reconstruct_age);






  IPDispatchP__ip_print_heap();
}

# 366 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__PrintTimer__fired(void )
#line 366
{
  int i;

#line 368
  printf("\ndestination                 gateway            interface\n");
  for (i = 0; i < 20; i++) {
      if (IPForwardingEngineP__routing_table[i].valid) {
          printf_in6addr(& IPForwardingEngineP__routing_table[i].prefix);
          printf("/%i\t\t", IPForwardingEngineP__routing_table[i].prefixlen);
          printf_in6addr(& IPForwardingEngineP__routing_table[i].next_hop);
          printf("\t\t%i\n", IPForwardingEngineP__routing_table[i].ifindex);
        }
    }
  printf("\n");
  printfflush();
}

# 360 "SSLP.nc"
static inline void SSLP__PrintTimer__fired(void )
{
}

#line 348
static inline void SSLP__RetransmitTimer__fired(void )
{
  if (SSLP__TIMER_PERIOD * 2 > 15000U) {
    SSLP__TIMER_PERIOD = 15000U;
    }
  else {
#line 353
    SSLP__TIMER_PERIOD *= 2;
    }
#line 354
  if (SSLP__MSGSTATE == SERVICE_REQUEST) {
      printf("\nTimerfired:global_service:%s", SSLP__global_service);
      SSLP__srvrqst_snd(SSLP__global_service, SSLP__global_service_len, SSLP__global_scope, SSLP__global_scope_len);
    }
}

# 205 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x411389f0){
#line 83
  switch (arg_0x411389f0) {
#line 83
    case 0U:
#line 83
      TestC__Timer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      NeighbrCacheP__Timer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      NeighbrCacheP__NUDTimer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      PacketLinkP__DelayTimer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      IPDispatchP__ExpireTimer__fired();
#line 83
      break;
#line 83
    case 6U:
#line 83
      IPForwardingEngineP__PrintTimer__fired();
#line 83
      break;
#line 83
    case 7U:
#line 83
      SSLP__PrintTimer__fired();
#line 83
      break;
#line 83
    case 8U:
#line 83
      SSLP__RetransmitTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x411389f0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 53 "/opt/tinyos-main/tos/system/BigQueueC.nc"
static inline bool /*PrintfC.QueueC*/BigQueueC__0__Queue__empty(void )
#line 53
{
  return /*PrintfC.QueueC*/BigQueueC__0__size == 0;
}

# 50 "/opt/tinyos-main/tos/interfaces/BigQueue.nc"
inline static bool PrintfP__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*PrintfC.QueueC*/BigQueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 126 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static void * PrintfP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 131 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 112;
}

# 69 "/opt/tinyos-main/tos/system/BigQueueC.nc"
static inline void /*PrintfC.QueueC*/BigQueueC__0__printQueue(void )
#line 69
{
}

#line 65
static inline /*PrintfC.QueueC*/BigQueueC__0__queue_t /*PrintfC.QueueC*/BigQueueC__0__Queue__head(void )
#line 65
{
  return /*PrintfC.QueueC*/BigQueueC__0__queue[/*PrintfC.QueueC*/BigQueueC__0__head];
}

#line 85
static inline /*PrintfC.QueueC*/BigQueueC__0__queue_t /*PrintfC.QueueC*/BigQueueC__0__Queue__dequeue(void )
#line 85
{
  /*PrintfC.QueueC*/BigQueueC__0__queue_t t = /*PrintfC.QueueC*/BigQueueC__0__Queue__head();

#line 87
  ;
  if (!/*PrintfC.QueueC*/BigQueueC__0__Queue__empty()) {
      /*PrintfC.QueueC*/BigQueueC__0__head++;
      /*PrintfC.QueueC*/BigQueueC__0__head %= 800;
      /*PrintfC.QueueC*/BigQueueC__0__size--;
      /*PrintfC.QueueC*/BigQueueC__0__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-main/tos/interfaces/BigQueue.nc"
inline static PrintfP__Queue__t PrintfP__Queue__dequeue(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*PrintfC.QueueC*/BigQueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 60 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 158
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 158
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 160
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 177 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 177
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 179
  __nesc_hton_uint8(header->type.nxdata, type);
}

# 162 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x40984730, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x40984730, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "/opt/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned int __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 127 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 127
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.nxdata, len);
}

# 94 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 538 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 538
{
  bool not_busy = FALSE;

#line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 542
          EOFF;

          {
#line 542
            __nesc_atomic_end(__nesc_atomic); 
#line 542
            return __nesc_temp;
          }
        }
    }
#line 545
    __nesc_atomic_end(__nesc_atomic); }
#line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/opt/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x40a64b10, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x40a64b10) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x40a64b10, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 51 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x40a64b10){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x40a64b10) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x40a64b10);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 111 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 17 "/opt/tinyos-main/tos/lib/net/blip/blip_printf.h"
static inline void printf_buf(uint8_t *buf, int len)
#line 17
{
  int i;

#line 19
  for (i = 0; i < len; i++) {
      printf("%02x ", buf[i]);
    }
  printf("\n");
}

# 140 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type __nesc_temp = 
#line 93
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 184 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 180 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id)
#line 180
{
}

# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(uint8_t arg_0x40f6ae00){
#line 102
  switch (arg_0x40f6ae00) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 102
      CC2420SpiP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(arg_0x40f6ae00);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 130 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id)
#line 130
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(id);
}

# 202 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x40bd8e70){
#line 102
  switch (arg_0x40bd8e70) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(arg_0x40bd8e70);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 190 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
}

# 252 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 252
{
}

# 82 "/opt/tinyos-main/tos/interfaces/SpiPacket.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(uint8_t arg_0x40f66a08, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  switch (arg_0x40f66a08) {
#line 82
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 82
      CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    default:
#line 82
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(arg_0x40f66a08, txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    }
#line 82
}
#line 82
# 244 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void )
#line 244
{

  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len, 
  SUCCESS);
}

#line 227
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void )
#line 227
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 228
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
#line 228
    __nesc_atomic_end(__nesc_atomic); }
}

# 486 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 487
{
}

# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__set();
#line 40
}
#line 40
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 389 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg)
#line 389
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP__m_msg) {
      ack_header = CC2420TransmitP__CC2420PacketBody__getHeader(ack_msg);
      msg_header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);

      if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.nxdata) == __nesc_ntoh_leuint8(ack_header->dsn.nxdata)) {
          CC2420TransmitP__BackoffTimer__stop();

          msg_metadata = CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.nxdata);

          __nesc_hton_int8(msg_metadata->ack.nxdata, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.nxdata, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.nxdata, ack_buf[length] & 0x7f);
          CC2420TransmitP__signalDone(SUCCESS);
        }
    }
}

# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 70 "/opt/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70








inline static void CC2420ReceiveP__PacketTimeStamp__set(message_t * msg, CC2420ReceiveP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 59 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 0);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw() != 0;
}

# 73 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__8__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__8__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__8__HplGeneralIO__get();
}

# 43 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__8__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 59 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 3);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw() != 0;
}

# 73 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__7__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__7__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOM*/Msp430GpioC__7__HplGeneralIO__get();
}

# 43 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC__7__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 209 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

# 62 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__clr();
#line 41
}
#line 41
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SACK__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACK);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 383 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void )
#line 383
{
  /* atomic removed: atomic calls only */
#line 384
  {
    unsigned char __nesc_temp = 
#line 384
    CC2420ControlP__hwAutoAckDefault;

#line 384
    return __nesc_temp;
  }
}

# 112 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420ControlP__CC2420Config__isHwAutoAckDefault();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 390 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void )
#line 390
{
  /* atomic removed: atomic calls only */
#line 391
  {
    unsigned char __nesc_temp = 
#line 391
    CC2420ControlP__autoAckEnabled;

#line 391
    return __nesc_temp;
  }
}

# 117 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = CC2420ControlP__CC2420Config__isAutoAckEnabled();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 530 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 531
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 535
  CC2420ReceiveP__rxFrameLength = buf[0];

  switch (CC2420ReceiveP__m_state) {

      case CC2420ReceiveP__S_RX_LENGTH: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;



      if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) 



        {

          CC2420ReceiveP__flush();
        }
      else {
          if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {
              CC2420ReceiveP__m_bytes_left -= CC2420ReceiveP__rxFrameLength + 1;
            }

          if (CC2420ReceiveP__rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP__rxFrameLength > 0) {
                  if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP__receivingPacket = FALSE;
                  CC2420ReceiveP__CSN__set();
                  CC2420ReceiveP__SpiResource__release();
                  CC2420ReceiveP__waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP__flush();
            }
        }
      break;

      case CC2420ReceiveP__S_RX_FCF: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;










      if (CC2420ReceiveP__CC2420Config__isAutoAckEnabled() && !CC2420ReceiveP__CC2420Config__isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 597
          header->fcf.nxdata) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.nxdata) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__SACK__strobe();
              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__RXFIFO__beginRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
              CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
              return;
            }
        }

      CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
      CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP__S_RX_PAYLOAD: 

        CC2420ReceiveP__CSN__set();
      if (!CC2420ReceiveP__m_missed_packets) {

          CC2420ReceiveP__SpiResource__release();
        }




      if ((((
#line 626
      CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get())
       || !CC2420ReceiveP__m_timestamp_size)
       || CC2420ReceiveP__rxFrameLength <= 10) {
          CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
        }
      else {
          if (CC2420ReceiveP__m_timestamp_size == 1) {
            CC2420ReceiveP__PacketTimeStamp__set(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
            }
#line 634
          CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
          CC2420ReceiveP__m_timestamp_size--;

          if (CC2420ReceiveP__m_timestamp_size > 0) {
              CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
              CC2420ReceiveP__m_timestamp_head = 0;
              CC2420ReceiveP__m_timestamp_size = 0;
            }
        }



      if (buf[CC2420ReceiveP__rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 648
          CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP__receiveDone_task__postTask();
              return;
            }
        }

      CC2420ReceiveP__waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP__receivingPacket = FALSE;
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__SpiResource__release();
      break;
    }
}

# 371 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 371
{
}

# 71 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x40f2d828, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x40f2d828) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x40f2d828, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 295 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__RadioBackoff__default__requestInitialBackoff(message_t *msg)
#line 295
{
}

# 81 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP__RadioBackoff__default__requestInitialBackoff(msg);
#line 81
}
#line 81
# 243 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
#line 243
{
  CC2420TransmitP__myInitialBackoff = backoffTime + 1;
}

# 60 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP__RadioBackoff__setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 230 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 230
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(CC2420CsmaP__Random__rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestInitialBackoff(msg);
}

# 81 "/opt/tinyos-main/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__sendDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__sendDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 207 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err)
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    CC2420CsmaP__sendErr = err;
#line 208
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP__sendDone_task__postTask();
}

# 73 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error){
#line 73
  CC2420CsmaP__CC2420Transmit__sendDone(p_msg, error);
#line 73
}
#line 73
# 454 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 455
{

  CC2420TransmitP__CSN__set();
  if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 459
      {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CSN__set();
      }
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
    }
  else {
#line 468
    if (!CC2420TransmitP__m_cca) {
        /* atomic removed: atomic calls only */
#line 469
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP__attemptSend();
      }
    else {
        CC2420TransmitP__releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 476
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_SAMPLE_CCA;
        }

        CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
        CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
      }
    }
}

# 668 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 668
{
}

# 374 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 374
{
}

# 91 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x40f2d828, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x40f2d828) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x40f2d828, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 535 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__writeTxctrl(void )
#line 535
{
  /* atomic removed: atomic calls only */
#line 536
  {
    CC2420ControlP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
    3 << CC2420_TXCTRL_PA_CURRENT)) | (
    1 << CC2420_TXCTRL_RESERVED)) | ((
    5 & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
  }
}

# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 90 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__enable(void )
#line 90
{
#line 90
  P1IE |= 1 << 4;
}

# 42 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port14__enable();
#line 42
}
#line 42
# 142 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__edge(bool l2h)
#line 142
{
  /* atomic removed: atomic calls only */
#line 143
  {
    if (l2h) {
#line 144
      P1IES &= ~(1 << 4);
      }
    else {
#line 145
      P1IES |= 1 << 4;
      }
  }
}

# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port14__edge(low_to_high);
#line 67
}
#line 67
# 106 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__clear(void )
#line 106
{
#line 106
  P1IFG &= ~(1 << 4);
}

# 52 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port14__clear();
#line 52
}
#line 52
# 98 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__disable(void )
#line 98
{
#line 98
  P1IE &= ~(1 << 4);
}

# 47 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port14__disable();
#line 47
}
#line 47
# 69 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  }
  return SUCCESS;
}

#line 52
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable();
  }
  return SUCCESS;
}

static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(TRUE);
}

# 53 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 224 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 224
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 225
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {

          {
            unsigned char __nesc_temp = 
#line 228
            FAIL;

            {
#line 228
              __nesc_atomic_end(__nesc_atomic); 
#line 228
              return __nesc_temp;
            }
          }
        }
#line 231
      CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
      CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP__InterruptCCA__enableRisingEdge();
      CC2420ControlP__SXOSCON__strobe();

      CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP__writeFsctrl();
      CC2420ControlP__writeMdmctrl0();

      CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));

      CC2420ControlP__writeTxctrl();
    }
#line 253
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 218 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__Resource__granted(void )
#line 218
{
  CC2420CsmaP__CC2420Power__startOscillator();
}

# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 102
  CC2420CsmaP__Resource__granted();
#line 102
}
#line 102
# 41 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__clr();
#line 41
}
#line 41
# 414 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 414
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__Resource__granted();
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP__syncDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 53 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 400 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SyncResource__granted(void )
#line 400
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRFOFF__strobe();
  CC2420ControlP__writeFsctrl();
  CC2420ControlP__writeMdmctrl0();
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRXON__strobe();
  CC2420ControlP__CSN__set();
  CC2420ControlP__SyncResource__release();
  CC2420ControlP__syncDone__postTask();
}

#line 547
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 547
{
}

# 63 "/opt/tinyos-main/tos/interfaces/Read.nc"
inline static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val){
#line 63
  CC2420ControlP__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__RssiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 287 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 419 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__RssiResource__granted(void )
#line 419
{
  uint16_t data = 0;

#line 421
  CC2420ControlP__CSN__clr();
  CC2420ControlP__RSSI__read(&data);
  CC2420ControlP__CSN__set();

  CC2420ControlP__RssiResource__release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP__ReadRssi__readDone(SUCCESS, data);
}

# 416 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__SpiResource__granted(void )
#line 416
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 419
    {
      cur_state = CC2420TransmitP__m_state;
    }
#line 421
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP__S_LOAD: 
        CC2420TransmitP__loadTXFIFO();
      break;

      case CC2420TransmitP__S_BEGIN_TRANSMIT: 
        CC2420TransmitP__attemptSend();
      break;

      case CC2420TransmitP__S_CANCEL: 
        CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 437
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
        }
#line 439
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP__releaseSpiResource();
      break;
    }
}

# 513 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 513
{







  CC2420ReceiveP__receive();
}

# 368 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 368
{
}

# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x40efbdb0){
#line 102
  switch (arg_0x40efbdb0) {
#line 102
    case /*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 102
      CC2420ControlP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID:
#line 102
      CC2420ControlP__SyncResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID:
#line 102
      CC2420ControlP__RssiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID:
#line 102
      CC2420TransmitP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID:
#line 102
      CC2420ReceiveP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420SpiP__Resource__default__granted(arg_0x40efbdb0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 359 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 359
{
  uint8_t holder;

#line 361
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 361
    {
      holder = CC2420SpiP__m_holder;
    }
#line 363
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 63 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_IEEEADR, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 60 "/opt/tinyos-main/tos/lib/net/blip/Ieee154AddressP.nc"
static inline void Ieee154AddressP__Config__syncDone(error_t err)
#line 60
{
}

# 708 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error)
#line 708
{
}

# 55 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 55
  CC2420ReceiveP__CC2420Config__syncDone(error);
#line 55
  Ieee154AddressP__Config__syncDone(error);
#line 55
}
#line 55
# 471 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDone__runTask(void )
#line 471
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 472
    CC2420ControlP__m_sync_busy = FALSE;
#line 472
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

# 88 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 324 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Config__sync(void )
#line 324
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 325
    {
      if (CC2420ControlP__m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 327
            FAIL;

            {
#line 327
              __nesc_atomic_end(__nesc_atomic); 
#line 327
              return __nesc_temp;
            }
          }
        }
#line 330
      CC2420ControlP__m_sync_busy = TRUE;
      if (CC2420ControlP__m_state == CC2420ControlP__S_XOSC_STARTED) {
          CC2420ControlP__SyncResource__request();
        }
      else 
#line 333
        {
          CC2420ControlP__syncDone__postTask();
        }
    }
#line 336
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 467
static inline void CC2420ControlP__sync__runTask(void )
#line 467
{
  CC2420ControlP__CC2420Config__sync();
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t PrintfP__retrySend__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PrintfP__retrySend);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t PrintfP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 114 "/opt/tinyos-main/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__retrySend__runTask(void )
#line 114
{
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 17 "/opt/tinyos-main/tos/platforms/telosa/TelosSerialP.nc"
static inline void TelosSerialP__Resource__granted(void )
#line 17
{
}

# 218 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id)
#line 218
{
}

# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(uint8_t arg_0x40b0d478){
#line 102
  switch (arg_0x40b0d478) {
#line 102
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 102
      TelosSerialP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(arg_0x40b0d478);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 101 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id)
#line 101
{
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(id);
}

# 202 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x40bd8e70){
#line 102
  switch (arg_0x40bd8e70) {
#line 102
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 102
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x40bd8e70);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x40bedcf8){
#line 59
  switch (arg_0x40bedcf8) {
#line 59
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 59
      /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x40bedcf8);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 190 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId);
}

# 19 "/opt/tinyos-main/tos/platforms/telosa/TelosSerialP.nc"
static inline msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void )
#line 19
{
  return &TelosSerialP__msp430_uart_telos_config;
}

# 214 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id)
#line 214
{
  return &msp430_uart_default_config;
}

# 39 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartConfigure.nc"
inline static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(uint8_t arg_0x40b09500){
#line 39
  union __nesc_unnamed4307 *__nesc_result;
#line 39

#line 39
  switch (arg_0x40b09500) {
#line 39
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 39
      __nesc_result = TelosSerialP__Msp430UartConfigure__getConfig();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(arg_0x40b09500);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 359 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableIntr(void )
#line 359
{
  HplMsp430Usart1P__IE2 &= ~(0x20 | 0x10);
}

#line 347
static inline void HplMsp430Usart1P__Usart__clrIntr(void )
#line 347
{
  HplMsp430Usart1P__IFG2 &= ~(0x20 | 0x10);
}

#line 159
static inline void HplMsp430Usart1P__Usart__resetUsart(bool reset)
#line 159
{
  if (reset) {
    U1CTL = 0x01;
    }
  else {
#line 163
    U1CTL &= ~0x01;
    }
}

# 65 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 6;
}

# 92 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UTXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc();
#line 92
}
#line 92
# 220 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableUartTx(void )
#line 220
{
  HplMsp430Usart1P__UTXD__selectModuleFunc();
  HplMsp430Usart1P__ME2 |= 0x20;
}

# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 7);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc();
#line 99
}
#line 99
# 236 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableUartRx(void )
#line 236
{
  HplMsp430Usart1P__ME2 &= ~0x10;
  HplMsp430Usart1P__URXD__selectIOFunc();
}

# 65 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 7;
}

# 92 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__URXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc();
#line 92
}
#line 92
# 231 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableUartRx(void )
#line 231
{
  HplMsp430Usart1P__URXD__selectModuleFunc();
  HplMsp430Usart1P__ME2 |= 0x10;
}

# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 6);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc();
#line 99
}
#line 99
# 225 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableUartTx(void )
#line 225
{
  HplMsp430Usart1P__ME2 &= ~0x20;
  HplMsp430Usart1P__UTXD__selectIOFunc();
}

#line 203
static inline void HplMsp430Usart1P__Usart__enableUart(void )
#line 203
{
  /* atomic removed: atomic calls only */
#line 204
  {
    HplMsp430Usart1P__UTXD__selectModuleFunc();
    HplMsp430Usart1P__URXD__selectModuleFunc();
  }
  HplMsp430Usart1P__ME2 |= 0x20 | 0x10;
}

#line 151
static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control)
#line 151
{
  U1MCTL = control;
}

#line 140
static inline void HplMsp430Usart1P__Usart__setUbr(uint16_t control)
#line 140
{
  /* atomic removed: atomic calls only */
#line 141
  {
    U1BR0 = control & 0x00FF;
    U1BR1 = (control >> 8) & 0x00FF;
  }
}

#line 283
static inline void HplMsp430Usart1P__configUart(msp430_uart_union_config_t *config)
#line 283
{

  U1CTL = (config->uartRegisters.uctl & ~0x04) | 0x01;
  HplMsp430Usart1P__U1TCTL = config->uartRegisters.utctl;
  HplMsp430Usart1P__U1RCTL = config->uartRegisters.urctl;

  HplMsp430Usart1P__Usart__setUbr(config->uartRegisters.ubr);
  HplMsp430Usart1P__Usart__setUmctl(config->uartRegisters.umctl);
}

static inline void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config)
#line 293
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 295
    {
      HplMsp430Usart1P__Usart__resetUsart(TRUE);
      HplMsp430Usart1P__Usart__disableSpi();
      HplMsp430Usart1P__configUart(config);
      if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 1) {
          HplMsp430Usart1P__Usart__enableUart();
        }
      else {
#line 301
        if (config->uartConfig.utxe == 0 && config->uartConfig.urxe == 1) {
            HplMsp430Usart1P__Usart__disableUartTx();
            HplMsp430Usart1P__Usart__enableUartRx();
          }
        else {
#line 304
          if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 0) {
              HplMsp430Usart1P__Usart__disableUartRx();
              HplMsp430Usart1P__Usart__enableUartTx();
            }
          else 
#line 307
            {
              HplMsp430Usart1P__Usart__disableUart();
            }
          }
        }
#line 310
      HplMsp430Usart1P__Usart__resetUsart(FALSE);
      HplMsp430Usart1P__Usart__clrIntr();
      HplMsp430Usart1P__Usart__disableIntr();
    }
#line 313
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

# 174 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config){
#line 174
  HplMsp430Usart1P__Usart__setModeUart(config);
#line 174
}
#line 174
# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 1);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 2);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 3);
}

# 99 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc();
#line 99
}
#line 99
# 377 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableIntr(void )
#line 377
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 378
    {
      HplMsp430Usart1P__IFG2 &= ~(0x20 | 0x10);
      HplMsp430Usart1P__IE2 |= 0x20 | 0x10;
    }
#line 381
    __nesc_atomic_end(__nesc_atomic); }
}

# 182 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr(void ){
#line 182
  HplMsp430Usart1P__Usart__enableIntr();
#line 182
}
#line 182
# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  PrintfP__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 215 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x40987d30, message_t * msg, error_t error){
#line 100
  switch (arg_0x40987d30) {
#line 100
    case 0U:
#line 100
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x40987d30, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 163 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "/opt/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x409b3940, message_t * msg, error_t error){
#line 110
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x409b3940, msg, error);
#line 110
}
#line 110
# 101 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/opt/tinyos-main/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x40a64010, message_t * msg, error_t error){
#line 100
  switch (arg_0x40a64010) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x40a64010, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

# 65 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

# 122 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 122
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 124
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "/opt/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 212 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 109 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x409ae388, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x409ae388, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/opt/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x40a67968, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x40a67968) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x40a67968, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/opt/tinyos-main/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x40a64b10, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x40a64b10) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x40a64b10, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 275 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "/opt/tinyos-main/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__SerialControl__stopDone(error_t error)
#line 49
{
}

# 138 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  SerialStartP__SerialControl__stopDone(error);
#line 138
}
#line 138
# 109 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline error_t HplMsp430Usart1P__AsyncStdControl__stop(void )
#line 109
{
  HplMsp430Usart1P__Usart__disableSpi();
  HplMsp430Usart1P__Usart__disableUart();
  return SUCCESS;
}

# 105 "/opt/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplMsp430Usart1P__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 84 "/opt/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "/opt/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "/opt/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 128 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart(void ){
#line 128
  HplMsp430Usart1P__Usart__disableUart();
#line 128
}
#line 128
#line 179
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr(void ){
#line 179
  HplMsp430Usart1P__Usart__disableIntr();
#line 179
}
#line 179
#line 97
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(bool reset){
#line 97
  HplMsp430Usart1P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 92 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 92
{
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(TRUE);
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr();
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart();
}

# 218 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x40bedcf8){
#line 65
  switch (arg_0x40bedcf8) {
#line 65
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 65
      /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x40bedcf8);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead != /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY && /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
          if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 213 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id)
#line 213
{
#line 213
  return FAIL;
}

# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(uint8_t arg_0x40b0aa48){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x40b0aa48) {
#line 120
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(arg_0x40b0aa48);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 210 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id)
#line 210
{
#line 210
  return FALSE;
}

# 128 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(uint8_t arg_0x40b0aa48){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x40b0aa48) {
#line 128
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(arg_0x40b0aa48);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 77 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(uint8_t id)
#line 77
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 80
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf || /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf) {
    return EBUSY;
    }
#line 82
  return /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(id);
}

# 120 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t TelosSerialP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 13 "/opt/tinyos-main/tos/platforms/telosa/TelosSerialP.nc"
static inline error_t TelosSerialP__StdControl__stop(void )
#line 13
{
  TelosSerialP__Resource__release();
  return SUCCESS;
}

# 105 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = TelosSerialP__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/opt/tinyos-main/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 48 "/opt/tinyos-main/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__SerialControl__startDone(error_t error)
#line 48
{
}

# 113 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  SerialStartP__SerialControl__startDone(error);
#line 113
}
#line 113
# 133 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
                /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 105 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline error_t HplMsp430Usart1P__AsyncStdControl__start(void )
#line 105
{
  return SUCCESS;
}

# 95 "/opt/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplMsp430Usart1P__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 74 "/opt/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void )
#line 74
{
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 81 "/opt/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested();
#line 81
}
#line 81
# 206 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/opt/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x40bee948){
#line 61
    /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x40bee948);
#line 61
}
#line 61
# 93 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
          /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 100
          FAIL;

          {
#line 100
            __nesc_atomic_end(__nesc_atomic); 
#line 100
            return __nesc_temp;
          }
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
#line 102
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
#line 107
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 212 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id)
#line 212
{
#line 212
  return FAIL;
}

# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(uint8_t arg_0x40b0aa48){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x40b0aa48) {
#line 97
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(arg_0x40b0aa48);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 65 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id)
#line 65
{
  return /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(id);
}

# 97 "/opt/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t TelosSerialP__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 10 "/opt/tinyos-main/tos/platforms/telosa/TelosSerialP.nc"
static inline error_t TelosSerialP__StdControl__start(void )
#line 10
{
  return TelosSerialP__Resource__immediateRequest();
}

# 95 "/opt/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = TelosSerialP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 56 "/opt/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/opt/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 559
static inline void SerialP__RunTx__runTask(void )
#line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
        goInactive = SerialP__offPending;
#line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 649
            __nesc_atomic_end(__nesc_atomic); 
#line 649
            return;
          }
        }
    }
#line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 48 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID, buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 126 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 169
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 109 "/opt/tinyos-main/tos/lib/printf/PrintfP.nc"
static inline error_t PrintfP__Init__init(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  PrintfP__state = PrintfP__S_STARTED;
  return SUCCESS;
}

# 216 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 55 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ, /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 98 "/opt/tinyos-main/tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void )
#line 98
{
  error_t rv = SUCCESS;



  return rv;
}

# 21 "/opt/tinyos-main/tos/lib/net/blip/Ieee154AddressP.nc"
static inline error_t Ieee154AddressP__Init__init(void )
#line 21
{
  Ieee154AddressP__m_saddr = TOS_NODE_ID;
  Ieee154AddressP__m_panid = TOS_AM_GROUP;
  return SUCCESS;
}

# 48 "/opt/tinyos-main/tos/interfaces/LocalIeeeEui64.nc"
inline static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void ){
#line 48
  struct ieee_eui64 __nesc_result;
#line 48

#line 48
  __nesc_result = DallasId48ToIeeeEui64C__LocalIeeeEui64__getId();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 93 "/opt/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 93
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 95
  myGroup = ActiveMessageAddressC__group;
  return myGroup;
}

# 55 "/opt/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 106 "/opt/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__amAddress(void )
#line 106
{
  am_addr_t myAddr;

  /* atomic removed: atomic calls only */
#line 108
  myAddr = ActiveMessageAddressC__addr;
  return myAddr;
}

#line 72
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 72
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned int __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 63 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 5;
}

# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 6;
}

# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__9__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 2;
}

# 85 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__makeOutput();
#line 46
}
#line 46
# 129 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 129
{
  int i;
#line 130
  int t;

#line 131
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();

  CC2420ControlP__m_short_addr = CC2420ControlP__ActiveMessageAddress__amAddress();
  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  CC2420ControlP__m_pan = CC2420ControlP__ActiveMessageAddress__amGroup();
  CC2420ControlP__m_tx_power = 5;
  CC2420ControlP__m_channel = 26;

  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  for (i = 0; i < 4; i++) {
      t = CC2420ControlP__m_ext_addr.data[i];
      CC2420ControlP__m_ext_addr.data[i] = CC2420ControlP__m_ext_addr.data[7 - i];
      CC2420ControlP__m_ext_addr.data[7 - i] = t;
    }





  CC2420ControlP__addressRecognition = TRUE;



  CC2420ControlP__hwAddressRecognition = TRUE;








  CC2420ControlP__autoAckEnabled = TRUE;



  CC2420ControlP__hwAutoAckDefault = TRUE;
  CC2420ControlP__hwAddressRecognition = TRUE;





  return SUCCESS;
}

# 81 "/opt/tinyos-main/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 5U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 55 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ);
  return SUCCESS;
}

# 57 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4452 {
#line 57
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )390U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl();
}

# 47 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 194 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline error_t IPDispatchP__Init__init(void )
#line 194
{


  ip_malloc_init();
  return SUCCESS;
}

# 57 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4453 {
#line 57
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )386U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl();
}

# 47 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 61 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )30U &= ~(0x01 << 1);
}

# 78 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput();
#line 78
}
#line 78
# 52 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__HplGeneralIO__makeInput();
}

# 44 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 44
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__10__GeneralIO__makeInput();
#line 44
}
#line 44


inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__6__GeneralIO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )34U &= ~(0x01 << 4);
}

# 78 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput();
#line 78
}
#line 78
# 52 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__HplGeneralIO__makeInput();
}

# 44 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 44
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__5__GeneralIO__makeInput();
#line 44
}
#line 44
# 160 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 160
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 151 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 151
{
  CC2420ReceiveP__m_p_rx_buf = &CC2420ReceiveP__m_rx_buf;
  return SUCCESS;
}

# 55 "/opt/tinyos-main/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 52 "/opt/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 62 "/opt/tinyos-main/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Init__init(void )
#line 62
{
  UniqueSendP__localSendId = UniqueSendP__Random__rand16();
  return SUCCESS;
}

# 71 "/opt/tinyos-main/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP__Init__init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP__receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP__receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 55 "/opt/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 65 "/opt/tinyos-main/tos/system/PoolP.nc"
static inline error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[i] = &/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[i];
    }
  /*IPDispatchC.FragPool.PoolP*/PoolP__0__free = 12;
  /*IPDispatchC.FragPool.PoolP*/PoolP__0__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[i] = &/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[i];
    }
  /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free = 12;
  /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 3; i++) {
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[i] = &/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[i];
    }
  /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free = 3;
  /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 3; i++) {
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[i] = &/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool[i];
    }
  /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free = 3;
  /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index = 0;
  return SUCCESS;
}

# 169 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__BlipStatistics__clear(void )
#line 169
{
}

#line 46
static inline error_t UdpP__Init__init(void )
#line 46
{
  UdpP__BlipStatistics__clear();
  memset((uint8_t *)UdpP__local_ports, 0, sizeof(uint16_t ) * UdpP__N_CLIENTS);
  return SUCCESS;
}

# 62 "/opt/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = UdpP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueSendP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, IPDispatchP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Ieee154AddressP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PutcharP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PrintfP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 64 "/opt/tinyos-main/tos/lib/timer/Timer.nc"
inline static void TestC__Timer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
inline static void SSLP__PrintTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(7U, dt);
#line 64
}
#line 64
# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t IPDispatchP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420CsmaP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 157 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline error_t IPDispatchP__SplitControl__start(void )
#line 157
{
  return IPDispatchP__RadioControl__start();
}

# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t IPStackControlP__SubSplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = IPDispatchP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 12 "/opt/tinyos-main/tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__SplitControl__start(void )
#line 12
{
  return IPStackControlP__SubSplitControl__start();
}

# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t SSLP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = IPStackControlP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 106 "NodeC.nc"
static inline error_t NodeC__Node__setUA(void )
{
  NodeC__UAstate = TRUE;
  return SUCCESS;
}

# 6 "Node.nc"
inline static error_t SSLP__Node__setUA(void ){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = NodeC__Node__setUA();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 12 "/opt/tinyos-main/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t SSLP__UDPReceive__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(1U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
inline static error_t SSLP__UDPSend__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(0U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 144 "SSLP.nc"
static inline error_t SSLP__SplitControl__start(void )
{

  SSLP__running = TRUE;
  SSLP__UDPSend__bind(441);
  SSLP__UDPReceive__bind(427);
  if (!(SSLP__Node__getSAState() || SSLP__Node__getUAState())) {
    SSLP__Node__setUA();
    }
#line 152
  SSLP__RadioControl__start();

  SSLP__PrintTimer__startPeriodic(5000U);

  return SUCCESS;
}

# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t TestC__SSLPControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SSLP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
inline static error_t TestC__SplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = IPStackControlP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 60 "/opt/tinyos-main/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool TestC__IPAddress__getEUILLAddress(struct in6_addr *addr){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = IPAddressP__IPAddress__getEUILLAddress(addr);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 6 "Node.nc"
inline static error_t TestC__Node__setUA(void ){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = NodeC__Node__setUA();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 39 "TestC.nc"
static inline void TestC__Boot__booted(void )
{
  TestC__Node__setUA();
  TestC__IPAddress__getEUILLAddress(&TestC__LinkLocal);
  TestC__SplitControl__start();


  TestC__SSLPControl__start();
  TestC__Timer__startPeriodic(2048);
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "/opt/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t SerialStartP__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 44 "/opt/tinyos-main/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void )
#line 44
{
  SerialStartP__SerialControl__start();
}

# 132 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__reconstruct_clear(void *ent)
#line 132
{
  struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)ent;

#line 134
  memset((uint8_t *)& recon->r_meta, 0, sizeof(struct ip6_metadata ));
  recon->r_timeout = T_UNUSED;
  recon->r_buf = (void *)0;
}

#line 666
static inline void IPDispatchP__BlipStatistics__clear(void )
#line 666
{
  memset((uint8_t *)&IPDispatchP__stats, 0, sizeof(ip_statistics_t ));
}

#line 201
static inline void IPDispatchP__Boot__booted(void )
#line 201
{
  IPDispatchP__BlipStatistics__clear();


  table_init(&IPDispatchP__recon_cache, IPDispatchP__recon_data, sizeof(struct lowpan_reconstruct ), N_RECONSTRUCTIONS);
  table_map(&IPDispatchP__recon_cache, IPDispatchP__reconstruct_clear);

  IPDispatchP__SplitControl__start();
}

# 60 "/opt/tinyos-main/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  IPDispatchP__Boot__booted();
#line 60
  SerialStartP__Boot__booted();
#line 60
  TestC__Boot__booted();
#line 60
}
#line 60
# 45 "/opt/tinyos-main/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(1U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 66 "/opt/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 56 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 5;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 48 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__HplGeneralIO__set();
}

# 40 "/opt/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 40
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__11__GeneralIO__set();
#line 40
}
#line 40
# 204 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 207
            FAIL;

            {
#line 207
              __nesc_atomic_end(__nesc_atomic); 
#line 207
              return __nesc_temp;
            }
          }
        }
#line 209
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupTimer__start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 391 "/opt/tinyos-main/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
  __dint();
  __nop();
}

# 134 "/opt/tinyos-main/tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC__McuPowerOverride__default__lowestState(void )
#line 134
{
  return MSP430_POWER_LPM4;
}

# 62 "/opt/tinyos-main/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuSleepC__McuPowerOverride__default__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/opt/tinyos-main/tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{
  mcu_power_t pState = MSP430_POWER_LPM4;









  if ((((((
#line 77
  TACCTL0 & 0x0010 || 
  TACCTL1 & 0x0010) || 
  TACCTL2 & 0x0010) && (
  TACTL & 0x0300) == 0x0200) || (
  ME1 & (0x80 | 0x40) && U0TCTL & 0x20)) || (
  ME2 & (0x20 | 0x10) && U1TCTL & 0x20))


   || (U0CTLnr & 0x01 && I2CTCTLnr & 0x20 && 
  I2CDCTLnr & 0x20 && U0CTLnr & 0x04 && U0CTLnr & 0x20)) {


    pState = MSP430_POWER_LPM1;
    }


  if (ADC12CTL0 & 0x010) {
      if (ADC12CTL1 & 0x0010) {

          if (ADC12CTL1 & 0x0008) {
            pState = MSP430_POWER_LPM1;
            }
          else {
#line 99
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
#line 100
        if (ADC12CTL1 & 0x0400 && (TACTL & 0x0300) == 0x0200) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}

# 379 "/opt/tinyos-main/tos/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 379
{
  return m1 < m2 ? m1 : m2;
}

# 112 "/opt/tinyos-main/tos/chips/msp430/McuSleepC.nc"
static inline void McuSleepC__computePowerState(void )
#line 112
{
  McuSleepC__powerState = mcombine(McuSleepC__getPowerState(), 
  McuSleepC__McuPowerOverride__lowestState());
}

static inline void McuSleepC__McuSleep__sleep(void )
#line 117
{
  uint16_t temp;

#line 119
  if (McuSleepC__dirty) {
      McuSleepC__computePowerState();
    }

  temp = McuSleepC__msp430PowerBits[McuSleepC__powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" :  : "m"(temp));

   __asm volatile ("" :  :  : "memory");
  __nesc_disable_interrupt();
}

# 76 "/opt/tinyos-main/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos-main/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 98 "/opt/tinyos-main/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 397 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/opt/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/opt/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/opt/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 221 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte)
#line 221
{
}

# 79 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(uint8_t arg_0x40b0b680, uint8_t byte){
#line 79
  switch (arg_0x40b0b680) {
#line 79
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 79
      HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
      break;
#line 79
    default:
#line 79
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(arg_0x40b0b680, byte);
#line 79
      break;
#line 79
    }
#line 79
}
#line 79
# 132 "/opt/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 222 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 222
{
}

# 99 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(uint8_t arg_0x40b0b680, uint8_t * buf, uint16_t len, error_t error){
#line 99
  switch (arg_0x40b0b680) {
#line 99
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 99
      HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
      break;
#line 99
    default:
#line 99
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(arg_0x40b0b680, buf, len, error);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 134 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data)
#line 134
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf) {
      /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos++] = data;
      if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos >= /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len) {
          uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf;

#line 139
          /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf = (void *)0;
          /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len, SUCCESS);
        }
    }
  else 
#line 142
    {
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(id, data);
    }
}

# 65 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x40bc8bd8, uint8_t data){
#line 54
  switch (arg_0x40bc8bd8) {
#line 54
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 54
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID, data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(arg_0x40bc8bd8, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "/opt/tinyos-main/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(), data);
    }
}

# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 401 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 203 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/opt/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/opt/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/opt/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/opt/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/opt/tinyos-main/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 220 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 220
{
}

# 57 "/opt/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(uint8_t arg_0x40b0b680, uint8_t * buf, uint16_t len, error_t error){
#line 57
  switch (arg_0x40b0b680) {
#line 57
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 57
      HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
      break;
#line 57
    default:
#line 57
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(arg_0x40b0b680, buf, len, error);
#line 57
      break;
#line 57
    }
#line 57
}
#line 57
# 384 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__tx(uint8_t data)
#line 384
{
  HplMsp430Usart1P__U1TXBUF = data;
}

# 224 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart1P__Usart__tx(data);
#line 224
}
#line 224
# 162 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(uint8_t id)
#line 162
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner != id) {
      uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;

#line 165
      /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len, FAIL);
    }
  else {
#line 168
    if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos < /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len) {
        /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos++]);
      }
    else {
        uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;

#line 173
        /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
        /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len, SUCCESS);
      }
    }
}

# 64 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(uint8_t arg_0x40bc8bd8){
#line 49
  switch (arg_0x40bc8bd8) {
#line 49
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 49
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(arg_0x40bc8bd8);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 49 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone();
#line 49
}
#line 49
# 65 "/opt/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 529 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/opt/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/opt/tinyos-main/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 668 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/opt/tinyos-main/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 61 "/opt/tinyos-main/tos/system/BigQueueC.nc"
static inline uint16_t /*PrintfC.QueueC*/BigQueueC__0__Queue__maxSize(void )
#line 61
{
  return 800;
}

#line 57
static inline uint16_t /*PrintfC.QueueC*/BigQueueC__0__Queue__size(void )
#line 57
{
  return /*PrintfC.QueueC*/BigQueueC__0__size;
}

#line 97
static inline error_t /*PrintfC.QueueC*/BigQueueC__0__Queue__enqueue(/*PrintfC.QueueC*/BigQueueC__0__queue_t newVal)
#line 97
{
  if (/*PrintfC.QueueC*/BigQueueC__0__Queue__size() < /*PrintfC.QueueC*/BigQueueC__0__Queue__maxSize()) {
      ;
      /*PrintfC.QueueC*/BigQueueC__0__queue[/*PrintfC.QueueC*/BigQueueC__0__tail] = newVal;
      /*PrintfC.QueueC*/BigQueueC__0__tail++;
      /*PrintfC.QueueC*/BigQueueC__0__tail %= 800;
      /*PrintfC.QueueC*/BigQueueC__0__size++;
      /*PrintfC.QueueC*/BigQueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-main/tos/interfaces/BigQueue.nc"
inline static error_t PrintfP__Queue__enqueue(PrintfP__Queue__t newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*PrintfC.QueueC*/BigQueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
#line 58
inline static uint16_t PrintfP__Queue__size(void ){
#line 58
  unsigned int __nesc_result;
#line 58

#line 58
  __nesc_result = /*PrintfC.QueueC*/BigQueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 152 "/opt/tinyos-main/tos/lib/printf/PrintfP.nc"
static inline int PrintfP__Putchar__putchar(int c)
{
  if (PrintfP__state == PrintfP__S_STARTED && PrintfP__Queue__size() >= 800 / 2) {
      PrintfP__state = PrintfP__S_FLUSHING;
      PrintfP__sendNext();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      if (PrintfP__Queue__enqueue(c) == SUCCESS) 
        {
          int __nesc_temp = 
#line 160
          0;

          {
#line 160
            __nesc_atomic_end(__nesc_atomic); 
#line 160
            return __nesc_temp;
          }
        }
      else 
#line 161
        {
          int __nesc_temp = 
#line 161
          -1;

          {
#line 161
            __nesc_atomic_end(__nesc_atomic); 
#line 161
            return __nesc_temp;
          }
        }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "/opt/tinyos-main/tos/lib/printf/Putchar.nc"
inline static int PutcharP__Putchar__putchar(int c){
#line 49
  int __nesc_result;
#line 49

#line 49
  __nesc_result = PrintfP__Putchar__putchar(c);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 212 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 212
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {

      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
      CC2420ReceiveP__beginReceive();
    }
  else 



    {
      CC2420ReceiveP__m_missed_packets++;
    }
}

# 68 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void ){
#line 68
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 68
}
#line 68
# 77 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port10__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired();
#line 72
}
#line 72
# 103 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port11__clear(void )
#line 103
{
#line 103
  P1IFG &= ~(1 << 1);
}

#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void )
#line 79
{
#line 79
  HplMsp430InterruptP__Port11__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port11__fired(void ){
#line 72
  HplMsp430InterruptP__Port11__default__fired();
#line 72
}
#line 72
# 104 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__clear(void )
#line 104
{
#line 104
  P1IFG &= ~(1 << 2);
}

#line 80
static inline void HplMsp430InterruptP__Port12__default__fired(void )
#line 80
{
#line 80
  HplMsp430InterruptP__Port12__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port12__fired(void ){
#line 72
  HplMsp430InterruptP__Port12__default__fired();
#line 72
}
#line 72
# 105 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__clear(void )
#line 105
{
#line 105
  P1IFG &= ~(1 << 3);
}

#line 81
static inline void HplMsp430InterruptP__Port13__default__fired(void )
#line 81
{
#line 81
  HplMsp430InterruptP__Port13__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port13__fired(void ){
#line 72
  HplMsp430InterruptP__Port13__default__fired();
#line 72
}
#line 72
# 67 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__startDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__startDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 224 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void )
#line 224
{

  CC2420CsmaP__startDone_task__postTask();
}

# 76 "/opt/tinyos-main/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 76
  CC2420CsmaP__CC2420Power__startOscillatorDone();
#line 76
}
#line 76
# 61 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 442 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 442
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();

  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 68 "/opt/tinyos-main/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void ){
#line 68
  CC2420ControlP__InterruptCCA__fired();
#line 68
}
#line 68
# 77 "/opt/tinyos-main/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port14__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired();
#line 72
}
#line 72
# 107 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__clear(void )
#line 107
{
#line 107
  P1IFG &= ~(1 << 5);
}

#line 83
static inline void HplMsp430InterruptP__Port15__default__fired(void )
#line 83
{
#line 83
  HplMsp430InterruptP__Port15__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port15__fired(void ){
#line 72
  HplMsp430InterruptP__Port15__default__fired();
#line 72
}
#line 72
# 108 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__clear(void )
#line 108
{
#line 108
  P1IFG &= ~(1 << 6);
}

#line 84
static inline void HplMsp430InterruptP__Port16__default__fired(void )
#line 84
{
#line 84
  HplMsp430InterruptP__Port16__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port16__fired(void ){
#line 72
  HplMsp430InterruptP__Port16__default__fired();
#line 72
}
#line 72
# 109 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port17__clear(void )
#line 109
{
#line 109
  P1IFG &= ~(1 << 7);
}

#line 85
static inline void HplMsp430InterruptP__Port17__default__fired(void )
#line 85
{
#line 85
  HplMsp430InterruptP__Port17__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port17__fired(void ){
#line 72
  HplMsp430InterruptP__Port17__default__fired();
#line 72
}
#line 72
# 206 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__clear(void )
#line 206
{
#line 206
  P2IFG &= ~(1 << 0);
}

#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void )
#line 182
{
#line 182
  HplMsp430InterruptP__Port20__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port20__fired(void ){
#line 72
  HplMsp430InterruptP__Port20__default__fired();
#line 72
}
#line 72
# 207 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port21__clear(void )
#line 207
{
#line 207
  P2IFG &= ~(1 << 1);
}

#line 183
static inline void HplMsp430InterruptP__Port21__default__fired(void )
#line 183
{
#line 183
  HplMsp430InterruptP__Port21__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port21__fired(void ){
#line 72
  HplMsp430InterruptP__Port21__default__fired();
#line 72
}
#line 72
# 208 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port22__clear(void )
#line 208
{
#line 208
  P2IFG &= ~(1 << 2);
}

#line 184
static inline void HplMsp430InterruptP__Port22__default__fired(void )
#line 184
{
#line 184
  HplMsp430InterruptP__Port22__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port22__fired(void ){
#line 72
  HplMsp430InterruptP__Port22__default__fired();
#line 72
}
#line 72
# 209 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port23__clear(void )
#line 209
{
#line 209
  P2IFG &= ~(1 << 3);
}

#line 185
static inline void HplMsp430InterruptP__Port23__default__fired(void )
#line 185
{
#line 185
  HplMsp430InterruptP__Port23__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port23__fired(void ){
#line 72
  HplMsp430InterruptP__Port23__default__fired();
#line 72
}
#line 72
# 210 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port24__clear(void )
#line 210
{
#line 210
  P2IFG &= ~(1 << 4);
}

#line 186
static inline void HplMsp430InterruptP__Port24__default__fired(void )
#line 186
{
#line 186
  HplMsp430InterruptP__Port24__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port24__fired(void ){
#line 72
  HplMsp430InterruptP__Port24__default__fired();
#line 72
}
#line 72
# 211 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port25__clear(void )
#line 211
{
#line 211
  P2IFG &= ~(1 << 5);
}

#line 187
static inline void HplMsp430InterruptP__Port25__default__fired(void )
#line 187
{
#line 187
  HplMsp430InterruptP__Port25__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port25__fired(void ){
#line 72
  HplMsp430InterruptP__Port25__default__fired();
#line 72
}
#line 72
# 212 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__clear(void )
#line 212
{
#line 212
  P2IFG &= ~(1 << 6);
}

#line 188
static inline void HplMsp430InterruptP__Port26__default__fired(void )
#line 188
{
#line 188
  HplMsp430InterruptP__Port26__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port26__fired(void ){
#line 72
  HplMsp430InterruptP__Port26__default__fired();
#line 72
}
#line 72
# 213 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port27__clear(void )
#line 213
{
#line 213
  P2IFG &= ~(1 << 7);
}

#line 189
static inline void HplMsp430InterruptP__Port27__default__fired(void )
#line 189
{
#line 189
  HplMsp430InterruptP__Port27__clear();
}

# 72 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port27__fired(void ){
#line 72
  HplMsp430InterruptP__Port27__default__fired();
#line 72
}
#line 72
# 98 "/opt/tinyos-main/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 349 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableRxIntr(void )
#line 349
{
  HplMsp430Usart0P__IE1 &= ~0x40;
}

# 177 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void ){
#line 177
  HplMsp430Usart0P__Usart__disableRxIntr();
#line 177
}
#line 177
# 231 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data)
#line 231
{

  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = data;
    }
  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else 
#line 238
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
    }
}

# 65 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(uint8_t arg_0x40bc8bd8, uint8_t data){
#line 54
  switch (arg_0x40bc8bd8) {
#line 54
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 54
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(arg_0x40bc8bd8, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "/opt/tinyos-main/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(), data);
    }
}

# 54 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 55 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isI2C(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  {
    unsigned char __nesc_temp = 
#line 56
    HplMsp430I2C0P__U0CTL & 0x20 && HplMsp430I2C0P__U0CTL & 0x04 && HplMsp430I2C0P__U0CTL & 0x01;

#line 56
    return __nesc_temp;
  }
}

# 6 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool HplMsp430Usart0P__HplI2C__isI2C(void ){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = HplMsp430I2C0P__HplI2C__isI2C();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 66 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__default__fired(uint8_t id)
#line 66
{
}

# 39 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__fired(uint8_t arg_0x40bc4c18){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__default__fired(arg_0x40bc4c18);
#line 39
}
#line 39
# 59 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawI2CInterrupts__fired(void )
#line 59
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId());
    }
}

# 39 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void HplMsp430Usart0P__I2CInterrupts__fired(void ){
#line 39
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawI2CInterrupts__fired();
#line 39
}
#line 39
# 250 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void )
#line 250
{
}

# 64 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(uint8_t arg_0x40bc8bd8){
#line 49
  switch (arg_0x40bc8bd8) {
#line 49
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone();
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(arg_0x40bc8bd8);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId());
    }
}

# 49 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone();
#line 49
}
#line 49
# 411 "/opt/tinyos-main/tos/chips/msp430/msp430hardware.h"
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (__read_status_register() & 0x0008) != 0;

#line 414
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" :  :  : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

# 11 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000C)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP__VectorTimerA0__fired();
}

# 180 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired();
    }
}

# 12 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000A)))  void sig_TIMERA1_VECTOR(void )
#line 12
{
#line 12
  Msp430TimerCommonP__VectorTimerA1__fired();
}

#line 13
__attribute((wakeup)) __attribute((interrupt(0x001A)))  void sig_TIMERB0_VECTOR(void )
#line 13
{
#line 13
  Msp430TimerCommonP__VectorTimerB0__fired();
}

# 146 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

# 39 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x407344b0){
#line 39
  switch (arg_0x407344b0) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired();
#line 39
      break;
#line 39
    case 3:
#line 39
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired();
#line 39
      break;
#line 39
    case 4:
#line 39
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired();
#line 39
      break;
#line 39
    case 6:
#line 39
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired();
#line 39
      break;
#line 39
    case 7:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x407344b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 147 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 0);
}

# 80 "/opt/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 62 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void )
{




  if (1) {
      /* atomic removed: atomic calls only */
#line 69
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;

#line 72
        do {
#line 72
            t0 = t1;
#line 72
            t1 = * (volatile uint16_t * )400U;
          }
        while (
#line 72
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 73
          t1;

#line 73
          return __nesc_temp;
        }
      }
    }
  else 
#line 76
    {
      return * (volatile uint16_t * )400U;
    }
}

# 788 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__congestionBackoff(void )
#line 788
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 789
    {
      CC2420TransmitP__RadioBackoff__requestCongestionBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myCongestionBackoff);
    }
#line 792
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "/opt/tinyos-main/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 73
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC__seed = mlcg;
  }
  return mlcg;
}

# 795 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__acquireSpiResource(void )
#line 795
{
  error_t error = CC2420TransmitP__SpiResource__immediateRequest();

#line 797
  if (error != SUCCESS) {
      CC2420TransmitP__SpiResource__request();
    }
  return error;
}

# 126 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 96 "/opt/tinyos-main/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
          StateImplP__state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

# 177 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(uint8_t id)
#line 177
{
  /* atomic removed: atomic calls only */
#line 178
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId == id && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 179
        TRUE;

#line 179
        return __nesc_temp;
      }
    else 
#line 180
      {
        unsigned char __nesc_temp = 
#line 180
        FALSE;

#line 180
        return __nesc_temp;
      }
  }
}

#line 133
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
#line 133
{
  /* atomic removed: atomic calls only */
#line 134
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
            {
              unsigned char __nesc_temp = 
#line 138
              SUCCESS;

#line 138
              return __nesc_temp;
            }
          }
        else {
#line 140
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 143
                SUCCESS;

#line 143
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 147
  return FAIL;
}

# 170 "/opt/tinyos-main/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 265 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config)
#line 265
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 267
    {
      HplMsp430Usart0P__Usart__resetUsart(TRUE);
      HplMsp430Usart0P__HplI2C__clearModeI2C();
      HplMsp430Usart0P__Usart__disableUart();
      HplMsp430Usart0P__configSpi(config);
      HplMsp430Usart0P__Usart__enableSpi();
      HplMsp430Usart0P__Usart__resetUsart(FALSE);
      HplMsp430Usart0P__Usart__clrIntr();
      HplMsp430Usart0P__Usart__disableIntr();
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

# 107 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 743 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__attemptSend(void )
#line 743
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 747
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          CC2420TransmitP__SFLUSHTX__strobe();
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__CSN__set();
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
          CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
          {
#line 754
            __nesc_atomic_end(__nesc_atomic); 
#line 754
            return;
          }
        }





      CC2420TransmitP__CSN__clr();
      status = CC2420TransmitP__m_cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP__SNOP__strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP__m_state = congestion ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_SFD;
      CC2420TransmitP__CSN__set();
    }
#line 773
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP__totalCcaChecks = 0;
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__congestionBackoff();
    }
  else 
#line 779
    {
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
    }
}

# 318 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP__SpiByte__write(addr);
}

# 133 "/opt/tinyos-main/tos/system/StateImplP.nc"
static bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP__state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 134 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx)
#line 134
{
  uint8_t byte;


  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(tx);
  while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr();
  byte = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();

  return byte;
}

# 149 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 340
static error_t CC2420SpiP__attemptRelease(void )
#line 340
{


  if ((
#line 341
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 349
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 352
          SUCCESS;

#line 352
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 247 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__disableSpi(void )
#line 247
{
  /* atomic removed: atomic calls only */
#line 248
  {
    HplMsp430Usart0P__ME1 &= ~0x40;
    HplMsp430Usart0P__SIMO__selectIOFunc();
    HplMsp430Usart0P__SOMI__selectIOFunc();
    HplMsp430Usart0P__UCLK__selectIOFunc();
  }
}

# 56 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 2;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

#line 57
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 2);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 850 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__signalDone(error_t err)
#line 850
{
  /* atomic removed: atomic calls only */
#line 851
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__abortSpiRelease = FALSE;
  CC2420TransmitP__ChipSpiResource__attemptRelease();
  CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, err);
}

# 49 "/opt/tinyos-main/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode)
#line 49
{
  /* atomic removed: atomic calls only */
#line 50
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents();
  }
  return SUCCESS;
}

# 57 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 6);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 6;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 260 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 171 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata, FALSE);
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);
}

# 107 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get();
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type )remaining << 5);
}

# 80 "/opt/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 14 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0018)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP__VectorTimerB1__fired();
}

# 63 "/opt/tinyos-main/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();
  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 175 "/opt/tinyos-main/tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP__set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

# 16 "/opt/tinyos-main/tos/platforms/telosb/MotePlatformC.nc"
static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set)
#line 16
{
  if (set) {
    TOSH_SET_SIMO0_PIN();
    }
  else {
#line 20
    TOSH_CLR_SIMO0_PIN();
    }
#line 21
  TOSH_SET_UCLK0_PIN();
  TOSH_CLR_UCLK0_PIN();
}

# 134 "/opt/tinyos-main/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x405f74a0){
#line 75
  switch (arg_0x405f74a0) {
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case PrintfP__retrySend:
#line 75
      PrintfP__retrySend__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__sync:
#line 75
      CC2420ControlP__sync__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__syncDone:
#line 75
      CC2420ControlP__syncDone__runTask();
#line 75
      break;
#line 75
    case CC2420SpiP__grant:
#line 75
      CC2420SpiP__grant__runTask();
#line 75
      break;
#line 75
    case /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task:
#line 75
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask:
#line 75
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case IPForwardingEngineP__defaultRouteAddedTask:
#line 75
      IPForwardingEngineP__defaultRouteAddedTask__runTask();
#line 75
      break;
#line 75
    case IPDispatchP__sendTask:
#line 75
      IPDispatchP__sendTask__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__startDone_task:
#line 75
      CC2420CsmaP__startDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__stopDone_task:
#line 75
      CC2420CsmaP__stopDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__sendDone_task:
#line 75
      CC2420CsmaP__sendDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__receiveDone_task:
#line 75
      CC2420ReceiveP__receiveDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420TinyosNetworkP__grantTask:
#line 75
      CC2420TinyosNetworkP__grantTask__runTask();
#line 75
      break;
#line 75
    case PacketLinkP__send:
#line 75
      PacketLinkP__send__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x405f74a0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 65 "/opt/tinyos-main/tos/chips/cc2420/packet/CC2420PacketP.nc"
static error_t CC2420PacketP__Acks__requestAck(message_t *p_msg)
#line 65
{
  unsigned char *__nesc_temp46;

#line 66
  (__nesc_temp46 = CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp46, __nesc_ntoh_leuint16(__nesc_temp46) | (1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 124 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len)
#line 124
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 126
  cc2420_header_t *header = CC2420CsmaP__CC2420PacketBody__getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP__CC2420PacketBody__getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (!CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 131
            FAIL;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
#line 134
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_TRANSMITTING);
      CC2420CsmaP__m_msg = p_msg;
    }
#line 136
    __nesc_atomic_end(__nesc_atomic); }








  (__nesc_temp42 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (((1 << IEEE154_FCF_ACK_REQ) | (
  0x3 << IEEE154_FCF_SRC_ADDR_MODE)) | (
  0x3 << IEEE154_FCF_DEST_ADDR_MODE))));

  (__nesc_temp43 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN))));

  __nesc_hton_int8(metadata->ack.nxdata, FALSE);
  __nesc_hton_uint8(metadata->rssi.nxdata, 0);
  __nesc_hton_uint8(metadata->lqi.nxdata, 0);

  __nesc_hton_uint32(metadata->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP__ccaOn = TRUE;
  CC2420CsmaP__RadioBackoff__requestCca(CC2420CsmaP__m_msg);

  CC2420CsmaP__CC2420Transmit__send(CC2420CsmaP__m_msg, CC2420CsmaP__ccaOn);
  return SUCCESS;
}

# 825 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__loadTXFIFO(void )
#line 825
{
  cc2420_header_t *header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg)->tx_power.nxdata);

  if (!tx_power) {
      tx_power = 5;
    }

  CC2420TransmitP__CSN__clr();

  if (CC2420TransmitP__m_tx_power != tx_power) {
      CC2420TransmitP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP__m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.nxdata) - 1;

#line 846
    CC2420TransmitP__TXFIFO__write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.nxdata) - 1);
  }
}

# 305 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 205 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len)
#line 207
{

  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client = id;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf = tx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf = rx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len = len;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos = 0;

  if (len) {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask();
    }

  return SUCCESS;
}

#line 182
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void )
#line 182
{

  uint8_t end;
  uint8_t tmp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 187
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);

      end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos + /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE;
      if (end > /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
        end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
        }
      while (++/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < end) {
          while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
          tmp = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();
          if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
            /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = tmp;
            }
#line 199
          /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);
        }
    }
#line 201
    __nesc_atomic_end(__nesc_atomic); }
}

# 303 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void )
#line 303
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 304
    {
      unsigned int __nesc_temp = 
#line 304
      CC2420ControlP__m_short_addr;

      {
#line 304
        __nesc_atomic_end(__nesc_atomic); 
#line 304
        return __nesc_temp;
      }
    }
#line 306
    __nesc_atomic_end(__nesc_atomic); }
}

# 15 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static int IPDispatchP__lowpan_recon_start(struct ieee154_frame_addr *frame_addr, 
struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len)
#line 17
{
  uint8_t *unpack_point;
#line 18
  uint8_t *unpack_end;
  struct packed_lowmsg msg;

  msg.data = pkt;
  msg.len = len;
  msg.headers = IPDispatchP__getHeaderBitmap(&msg);
  if (msg.headers == LOWMSG_NALP) {
#line 24
    return -1;
    }

  unpack_point = IPDispatchP__getLowpanPayload(&msg);
  len -= unpack_point - pkt;


  if (IPDispatchP__hasFrag1Header(&msg)) {
      IPDispatchP__getFragDgramTag(&msg, & recon->r_tag);
      IPDispatchP__getFragDgramSize(&msg, & recon->r_size);
    }
  else 
#line 34
    {
      recon->r_size = LIB6LOWPAN_MAX_LEN + LOWPAN_LINK_MTU;
    }
  recon->r_buf = ip_malloc(recon->r_size);
  if (! recon->r_buf) {
#line 38
    return -2;
    }
#line 39
  memset(recon->r_buf, 0, recon->r_size);
  recon->r_app_len = (void *)0;

  if (*unpack_point == LOWPAN_IPV6_PATTERN) {

      unpack_point++;
#line 44
      len--;
      memcpy(recon->r_buf, unpack_point, len);
      unpack_end = recon->r_buf + len;
    }
  else 
#line 47
    {

      unpack_end = IPDispatchP__lowpan_unpack_headers(recon, 
      frame_addr, 
      unpack_point, len);
    }

  if (!unpack_end) {
      ip_free(recon->r_buf);
      return -3;
    }

  if (!IPDispatchP__hasFrag1Header(&msg)) {
      recon->r_size = unpack_end - recon->r_buf;
    }
  recon->r_bytes_rcvd = unpack_end - recon->r_buf;
  ((struct ip6_hdr *)recon->r_buf)->ip6_ctlun.ip6_un1.ip6_un1_plen = ((
  (uint16_t )(recon->r_size - sizeof(struct ip6_hdr )) << 8) | ((uint16_t )(recon->r_size - sizeof(struct ip6_hdr )) >> 8)) & 0xffff;

  if (recon->r_app_len) {
      * recon->r_app_len = ((
      (uint16_t )(recon->r_size - (recon->r_transport_header - recon->r_buf)) << 8) | ((uint16_t )(recon->r_size - (recon->r_transport_header - recon->r_buf)) >> 8)) & 0xffff;
    }



  return 0;
}

# 528 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static uint8_t *IPDispatchP__unpack_address(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf, 
ieee154_addr_t *frame, ieee154_panid_t pan)
#line 530
{
  memset(addr, 0, 16);
  if (!(dispatch & LOWPAN_IPHC_AC_CONTEXT)) {

      switch (dispatch & LOWPAN_IPHC_AM_MASK) {
          case LOWPAN_IPHC_AM_128: 
            memcpy(addr, buf, 16);
          return buf + 16;
          case LOWPAN_IPHC_AM_64: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          memcpy(&addr->in6_u.u6_addr8[8], buf, 8);
          return buf + 8;
          case LOWPAN_IPHC_AM_16: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          memcpy(&addr->in6_u.u6_addr8[14], buf, 2);
          return buf + 2;
          default: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          if (frame->ieee_mode == IEEE154_ADDR_EXT) {
              int i;

#line 550
              for (i = 0; i < 8; i++) 
                addr->in6_u.u6_addr8[i + 8] = frame->ieee_addr.laddr.data[7 - i];
              addr->in6_u.u6_addr8[8] ^= 0x2;
            }
          else 
#line 553
            {
              addr->in6_u.u6_addr16[4] = (((uint16_t )(pan & ~0x0200) << 8) | ((uint16_t )(pan & ~0x0200) >> 8)) & 0xffff;
              addr->in6_u.u6_addr8[11] = 0xff;
              addr->in6_u.u6_addr8[12] = 0xfe;
              addr->in6_u.u6_addr16[7] = (((uint16_t )frame->ieee_addr.saddr << 8) | ((uint16_t )frame->ieee_addr.saddr >> 8)) & 0xffff;
            }
          return buf;
        }
    }
  else 
#line 561
    {

      if ((dispatch & LOWPAN_IPHC_AM_MASK) == LOWPAN_IPHC_AM_128) {

          return buf;
        }
      else 
#line 566
        {
          int ctxlen = IPDispatchP__lowpan_extern_read_context(addr, context);

#line 568
          switch (dispatch & LOWPAN_IPHC_AM_MASK) {
              case LOWPAN_IPHC_AM_64: 
                memcpy(&addr->in6_u.u6_addr8[8], buf, 8);
              return buf + 8;
              case LOWPAN_IPHC_AM_16: 
                memcpy(&addr->in6_u.u6_addr8[14], buf, 2);
              return buf + 2;
              case LOWPAN_IPHC_AM_0: 


                if (ctxlen <= 64 && frame->ieee_mode == IEEE154_ADDR_EXT) {
                    int i;

#line 580
                    for (i = 0; i < 8; i++) 
                      addr->in6_u.u6_addr8[i + 8] = frame->ieee_addr.laddr.data[7 - i];
                    addr->in6_u.u6_addr8[8] ^= 0x2;
                  }
                else {
#line 583
                  if (ctxlen <= 112) {
                      memset(&addr->in6_u.u6_addr8[8], 0, 8);
                      addr->in6_u.u6_addr16[7] = (((uint16_t )frame->ieee_addr.saddr << 8) | ((uint16_t )frame->ieee_addr.saddr >> 8)) & 0xffff;
                    }
                  }
#line 587
              return buf;
            }
        }
    }
  return (void *)0;
}

# 214 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static void IPDispatchP__deliver(struct lowpan_reconstruct *recon)
#line 214
{
  struct ip6_hdr *iph = (struct ip6_hdr *)recon->r_buf;





  iph->ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )(recon->r_bytes_rcvd - sizeof(struct ip6_hdr )) << 8) | ((uint16_t )(recon->r_bytes_rcvd - sizeof(struct ip6_hdr )) >> 8)) & 0xffff;

  IPDispatchP__IPLower__recv(iph, (void *)(iph + 1), & recon->r_meta);


  ip_free(recon->r_buf);
  recon->r_timeout = T_UNUSED;
  recon->r_buf = (void *)0;
}

# 274 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static void IPForwardingEngineP__IPForward__recv(uint8_t ifindex, struct ip6_hdr *iph, void *payload, 
struct ip6_metadata *meta)
#line 275
{
  struct ip6_packet pkt;
  struct in6_addr *next_hop;



  size_t len = (((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff;
  route_key_t next_hop_key = ROUTE_INVAL_KEY;
  uint8_t next_hop_ifindex;
  struct ip_iovec v = { 
  .iov_next = (void *)0, 
  .iov_base = payload, 
  .iov_len = len };



  IPForwardingEngineP__IPRaw__recv(iph, payload, len, meta);

  if (IPForwardingEngineP__IPAddress__isLocalAddress(& iph->ip6_dst)) {


      IPForwardingEngineP__IP__recv(iph, payload, len, meta);
    }
  else 
#line 297
    {


      uint8_t nxt_hdr = IPV6_ROUTING;

      int header_off = IPForwardingEngineP__IPPacket__findHeader(&v, iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, &nxt_hdr);

#line 303
      printf("\n Forwarding to another mote");

      printf_in6addr(& iph->ip6_dst);


      if (! -- iph->ip6_ctlun.ip6_un1.ip6_un1_hlim) {


          return;
        }

      if (header_off >= 0) {




          return;
        }
      else 
#line 320
        {

          struct route_entry *next_hop_entry = 
          IPForwardingEngineP__ForwardingTable__lookupRoute(iph->ip6_dst.in6_u.u6_addr8, 128);

#line 324
          memcpy(& pkt.ip6_hdr, iph, sizeof(struct ip6_hdr ));
          pkt.ip6_data = &v;
          pkt.ip6_inputif = ifindex;
          if (next_hop_entry == (void *)0) {
              if (IPForwardingEngineP__NeighbrCache__findEntry(iph->ip6_dst)) 
                {
                  printf("\n Got entry from destination cache");
                  IPForwardingEngineP__do_send(ROUTE_IFACE_154, & iph->ip6_dst, &pkt);
                  return;
                }
            }
          printf("\n Got entry from routing table");
          next_hop = & next_hop_entry->next_hop;
          next_hop_key = next_hop_entry->key;
          next_hop_ifindex = next_hop_entry->ifindex;
        }




      if (!IPForwardingEngineP__ForwardingEvents__approve(next_hop_ifindex, &pkt, next_hop)) {
        return;
        }
      IPForwardingEngineP__do_send(next_hop_ifindex, next_hop, &pkt);
    }
}

# 88 "/opt/tinyos-main/tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr)
#line 88
{
  ieee154_panid_t panid = IPAddressP__Ieee154Address__getPanId();
  ieee154_saddr_t saddr = IPAddressP__Ieee154Address__getShortAddr();
  ieee154_laddr_t eui = IPAddressP__Ieee154Address__getExtAddr();

  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff)) {


      if (
#line 95
      IPAddressP__m_short_addr && 
      addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff) && 
      addr->in6_u.u6_addr16[6] == ((((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff)) {
          if (((((uint16_t )addr->in6_u.u6_addr16[4] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[4] << 8)) & 0xffff) == (panid & ~0x200) && (((
          (uint16_t )addr->in6_u.u6_addr16[7] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[7] << 8)) & 0xffff) == saddr) {
              return TRUE;
            }
          else 
#line 101
            {
              return FALSE;
            }
        }

      return addr->in6_u.u6_addr8[8] == (eui.data[7] ^ 0x2) && 
      addr->in6_u.u6_addr8[9] == eui.data[6] && 
      addr->in6_u.u6_addr8[10] == eui.data[5] && 
      addr->in6_u.u6_addr8[11] == eui.data[4] && 
      addr->in6_u.u6_addr8[12] == eui.data[3] && 
      addr->in6_u.u6_addr8[13] == eui.data[2] && 
      addr->in6_u.u6_addr8[14] == eui.data[1] && 
      addr->in6_u.u6_addr8[15] == eui.data[0];
    }
  else {
#line 115
    if (addr->in6_u.u6_addr8[0] == 0xff) {

        if ((addr->in6_u.u6_addr8[1] & 0x0f) <= 2) {

            return TRUE;
          }
      }
    else {
#line 121
      if (memcmp(addr->in6_u.u6_addr8, IPAddressP__m_addr.in6_u.u6_addr8, 16) == 0) {
          return TRUE;
        }
      }
    }
#line 124
  return FALSE;
}

# 33 "/opt/tinyos-main/tos/lib/net/blip/Ieee154AddressP.nc"
static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void )
#line 33
{
  ieee154_laddr_t addr = Ieee154AddressP__LocalIeeeEui64__getId();
  int i;
  uint8_t tmp;


  for (i = 0; i < 4; i++) {
      tmp = addr.data[i];
      addr.data[i] = addr.data[7 - i];
      addr.data[7 - i] = tmp;
    }
  return addr;
}

# 8 "/opt/tinyos-main/tos/platforms/epic/chips/ds2411/DallasId48ToIeeeEui64C.nc"
static ieee_eui64_t DallasId48ToIeeeEui64C__LocalIeeeEui64__getId(void )
#line 8
{
  uint8_t id[6];
  ieee_eui64_t eui;

#line 11
  if (DallasId48ToIeeeEui64C__ReadId48__read(id) != SUCCESS) {
      memset(eui.data, 0, 8);
      goto done;
    }


  eui.data[0] = IEEE_EUI64_COMPANY_ID_0;
  eui.data[1] = IEEE_EUI64_COMPANY_ID_1;
  eui.data[2] = IEEE_EUI64_COMPANY_ID_2;



  eui.data[3] = IEEE_EUI64_SERIAL_ID_0;
  eui.data[4] = IEEE_EUI64_SERIAL_ID_1;


  eui.data[5] = id[2];
  eui.data[6] = id[1];
  eui.data[7] = id[0];

  done: 
    return eui;
}

# 63 "/opt/tinyos-main/tos/lib/timer/BusyWaitCounterC.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type dt)
{
  /* atomic removed: atomic calls only */
  {


    /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type t0 = /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get();

    if (dt > /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE) 
      {
        dt -= /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE;
        while (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get() - t0 <= dt) ;
        t0 += dt;
        dt = /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE;
      }

    while (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get() - t0 <= dt) ;
  }
}

# 23 "/opt/tinyos-main/tos/lib/net/blip/IPPacketC.nc"
static int IPPacketC__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type)
#line 24
{
  int off = 0;
  uint8_t nxt = first_type;
  struct ip6_ext ext;



  while ((*search_type == 0xff && ((((
  nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY)) || (
  *search_type != 0xff && *search_type != nxt)) {

      if (iov_read(payload, off, sizeof ext, (void *)&ext) != sizeof ext) {
        return -1;
        }
      nxt = ext.ip6e_nxt;
      off += (ext.ip6e_len + 1) * 8;
    }
  if (*search_type == 0xff) {
    *search_type = nxt;
    }
#line 44
  if (nxt == IPV6_NONEXT) {
    return -1;
    }
  else {
#line 47
    return off;
    }
}

# 64 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
static void UdpP__IP__recv(struct ip6_hdr *iph, void *packet, size_t len, struct ip6_metadata *meta)
#line 64
{
  uint8_t i;
  struct sockaddr_in6 addr;
  struct udp_hdr *udph = (struct udp_hdr *)packet;
  uint16_t my_cksum;
#line 68
  uint16_t rx_cksum = (((uint16_t )udph->chksum >> 8) | ((uint16_t )udph->chksum << 8)) & 0xffff;
  struct ip_iovec v;





  for (i = 0; i < UdpP__N_CLIENTS; i++) 
    if (UdpP__local_ports[i] == udph->dstport) {
      break;
      }
  if (i == UdpP__N_CLIENTS) {

      return;
    }
  memcpy(& addr.sin6_addr, & iph->ip6_src, 16);
  addr.sin6_port = udph->srcport;

  udph->chksum = 0;
  v.iov_base = packet;
  v.iov_len = len;
  v.iov_next = (void *)0;

  my_cksum = msg_cksum(iph, &v, IANA_UDP);

  if (rx_cksum != my_cksum) {
      ;





      return;
    }

  ;
  UdpP__UDP__recvfrom(i, &addr, (void *)(udph + 1), len - sizeof(struct udp_hdr ), meta);
}

# 58 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void )
#line 58
{
#line 58
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 58
    * (volatile uint8_t * )49U ^= 0x01 << 6;
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

# 115 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
static error_t UdpP__UDP__sendto(uint8_t clnt, struct sockaddr_in6 *dest, void *payload, 
uint16_t len)
#line 116
{
  struct ip_iovec v[1];

#line 118
  v[0].iov_base = payload;
  v[0].iov_len = len;
  v[0].iov_next = (void *)0;

  return UdpP__UDP__sendtov(clnt, dest, &v[0]);
}

# 66 "/opt/tinyos-main/tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr)
#line 66
{
  enum __nesc_unnamed4454 {
#line 67
    LOCAL, GLOBAL
  } 
#line 67
  type = GLOBAL;

  if (hdr->ip6_dst.in6_u.u6_addr8[0] == 0xff) {

      if ((hdr->ip6_dst.in6_u.u6_addr8[1] & 0x0f) <= 0x2) {
          type = LOCAL;
        }
    }
  else {
#line 74
    if (hdr->ip6_dst.in6_u.u6_addr8[0] == 0xfe) {

        if ((hdr->ip6_dst.in6_u.u6_addr8[1] & 0xf0) <= 0x80) {
            type = LOCAL;
          }
      }
    }
  if (type == LOCAL) {
      return IPAddressP__IPAddress__getLLAddr(& hdr->ip6_src);
    }
  else 
#line 83
    {
      return IPAddressP__IPAddress__getGlobalAddr(& hdr->ip6_src);
    }
}

#line 38
static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr)
#line 38
{
  ieee154_panid_t panid = IPAddressP__Ieee154Address__getPanId();
  ieee154_saddr_t saddr = IPAddressP__Ieee154Address__getShortAddr();
  ieee154_laddr_t laddr = IPAddressP__Ieee154Address__getExtAddr();

  memset(addr->in6_u.u6_addr8, 0, 16);
  addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
  if (IPAddressP__m_short_addr) {
      addr->in6_u.u6_addr16[4] = (((uint16_t )panid << 8) | ((uint16_t )panid >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[5] = (((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[6] = (((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[7] = (((uint16_t )saddr << 8) | ((uint16_t )saddr >> 8)) & 0xffff;
      addr->in6_u.u6_addr8[8] &= ~0x2;
    }
  else 
#line 51
    {
      int i;

#line 53
      for (i = 0; i < 8; i++) 
        addr->in6_u.u6_addr8[8 + i] = laddr.data[7 - i];
      addr->in6_u.u6_addr8[8] ^= 0x2;
    }

  return TRUE;
}

# 56 "/opt/tinyos-main/tos/lib/net/blip/IPProtocolsP.nc"
static error_t IPProtocolsP__IP__send(uint8_t nxt_hdr, struct ip6_packet *msg)
#line 56
{
  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  msg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_hlim = 16;


  return IPProtocolsP__SubIP__send(msg);
}

# 157 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, 
int prefix_len_bits)
#line 158
{
  int i;

#line 160
  for (i = 0; i < 20; i++) {
      if (IPForwardingEngineP__routing_table[i].valid && (
      IPForwardingEngineP__routing_table[i].prefixlen == 0 || (
      memcmp(prefix, IPForwardingEngineP__routing_table[i].prefix.in6_u.u6_addr8, (
      prefix_len_bits < IPForwardingEngineP__routing_table[i].prefixlen ? prefix_len_bits : IPForwardingEngineP__routing_table[i].prefixlen) / 8) == 0 && 
      prefix_len_bits))) {

          return &IPForwardingEngineP__routing_table[i];
        }
    }
  return (void *)0;
}

# 145 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 148
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 187 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static error_t IPForwardingEngineP__do_send(uint8_t ifindex, struct in6_addr *next, struct ip6_packet *pkt)
#line 187
{
  error_t rc;
  struct in6_iid *iid = IPForwardingEngineP__Pool__get();

#line 190
  if (iid != (void *)0) {
    memcpy(iid->data, &next->in6_u.u6_addr8[8], 8);
    }
#line 192
  rc = IPForwardingEngineP__IPForward__send(ifindex, next, pkt, iid);
  if (rc != SUCCESS && iid != (void *)0) {
    IPForwardingEngineP__Pool__put(iid);
    }
#line 195
  return rc;
}

# 95 "/opt/tinyos-main/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next, struct ip6_packet *msg, void *ptr)
#line 95
{
  struct ieee154_frame_addr fr_addr;
  struct in6_addr local_addr;

#line 98
  fr_addr.ieee_dstpan = IPNeighborDiscoveryP__Ieee154Address__getPanId();
  IPNeighborDiscoveryP__IPAddress__getLLAddr(&local_addr);








  if (IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(&local_addr, & fr_addr.ieee_src) != SUCCESS) {

      if (IPNeighborDiscoveryP__NeighbrCache__resolveIP(&local_addr, & fr_addr.ieee_src) != SUCCESS) {
          printf("IPND - local address resolution failed\n");
          return FAIL;
        }
    }

  if (IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(next, & fr_addr.ieee_dst) != SUCCESS) {
      if (IPNeighborDiscoveryP__NeighbrCache__resolveIP(next, & fr_addr.ieee_dst) != SUCCESS) {
          printf("IPND - next-hop address resolution failed");
          return FAIL;
        }
    }




  return IPNeighborDiscoveryP__IPLower__send(&fr_addr, msg, ptr);
}

#line 58
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, 
ieee154_addr_t *link_addr)
#line 59
{
  ieee154_panid_t panid = IPNeighborDiscoveryP__Ieee154Address__getPanId();

  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff)) {
      if (addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff) && 
      addr->in6_u.u6_addr16[6] == ((((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff)) {

          if (((((uint16_t )addr->in6_u.u6_addr16[4] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[4] << 8)) & 0xffff) == (panid & ~0x0200)) {
              link_addr->ieee_mode = IEEE154_ADDR_SHORT;
              link_addr->ieee_addr.saddr = (((uint16_t )addr->in6_u.u6_addr16[7] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[7] << 8)) & 0xffff;
            }
          else 
#line 69
            {
              return FAIL;
            }
        }
      else 
#line 72
        {
          int i;

#line 74
          link_addr->ieee_mode = IEEE154_ADDR_EXT;
          for (i = 0; i < 8; i++) 
            link_addr->ieee_addr.laddr.data[i] = addr->in6_u.u6_addr8[15 - i];
          link_addr->ieee_addr.laddr.data[7] ^= 0x2;
        }
      return SUCCESS;
    }
  else {
#line 80
    if (addr->in6_u.u6_addr8[0] == 0xff) {

        if ((addr->in6_u.u6_addr8[1] & 0x0f) == 0x02) {
            link_addr->ieee_mode = IEEE154_ADDR_SHORT;
            link_addr->ieee_addr.saddr = IEEE154_BROADCAST_ADDR;
            return SUCCESS;
          }
      }
    }
  return FAIL;
}

# 322 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCacheP.nc"
static error_t NeighbrCacheP__NeighbrCache__resolveIP(struct in6_addr *ip, ieee154_addr_t *linkaddr)
{
  int i;

#line 325
  i = NeighbrCacheP__find(*ip);
  if (i == -1) {
    return NP;
    }
  else {

      memcpy(& linkaddr->ieee_addr.laddr.data, & NeighbrCacheP__neighbr_table[i].linklayer_addr, 8);
      linkaddr->ieee_mode = IEEE154_ADDR_EXT;
      return SUCCESS;
    }
}

#line 77
static int NeighbrCacheP__find(struct in6_addr ip)
{
  uint8_t i;

#line 80
  for (i = 0; i < 10; i++) 
    {
      if (!memcmp(&ip, & NeighbrCacheP__neighbr_table[i].ip_address, sizeof(struct in6_addr ))) {
        return i;
        }
    }
#line 85
  return -1;
}

# 103 "/opt/tinyos-main/tos/system/PoolP.nc"
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index + /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[emptyIndex] = newVal;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free++;
      ;
      return SUCCESS;
    }
}

#line 103
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__free >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.FragPool.PoolP*/PoolP__0__index + /*IPDispatchC.FragPool.PoolP*/PoolP__0__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[emptyIndex] = newVal;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__free++;
      ;
      return SUCCESS;
    }
}

# 16 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/ieee154_header.c"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame)
#line 17
{
  uint8_t *ieee_hdr = buf;
  uint16_t fcf;







  buf = buf + IEEE154_MIN_HDR_SZ;
  if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT) {
#line 28
      uint16_t tmpval = frame->ieee_dst.ieee_addr.saddr;

#line 28
      memcpy(buf, &tmpval, 2);
#line 28
      buf += 2;
    }
  else 
#line 28
    {
#line 28
      memcpy(buf, & frame->ieee_dst.ieee_addr.laddr, 8);
#line 28
      buf += 8;
    }
#line 28
  ;
  if (frame->ieee_src.ieee_mode == IEEE154_ADDR_SHORT) {
#line 29
      uint16_t tmpval = frame->ieee_src.ieee_addr.saddr;

#line 29
      memcpy(buf, &tmpval, 2);
#line 29
      buf += 2;
    }
  else 
#line 29
    {
#line 29
      memcpy(buf, & frame->ieee_src.ieee_addr.laddr, 8);
#line 29
      buf += 8;
    }
#line 29
  ;

  fcf = IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE;
  fcf |= frame->ieee_src.ieee_mode << IEEE154_FCF_SRC_ADDR_MODE;
  fcf |= frame->ieee_dst.ieee_mode << IEEE154_FCF_DEST_ADDR_MODE;
  fcf |= 1 << IEEE154_FCF_INTRAPAN;

  ieee_hdr[1] = fcf & 0xff;
  ieee_hdr[2] = fcf >> 8;
  ieee_hdr[4] = frame->ieee_dstpan & 0xff;
  ieee_hdr[5] = frame->ieee_dstpan >> 8;

  return buf;
}

# 32 "/opt/tinyos-main/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, 
uint8_t *ctx)
#line 33
{
  struct in6_addr me;

#line 35
  if (!IPNeighborDiscoveryP__IPAddress__getGlobalAddr(&me)) {
#line 35
    return 0;
    }
#line 36
  if (memcmp(me.in6_u.u6_addr8, addr->in6_u.u6_addr8, 8) == 0) {
      *ctx = 0;
      return 64;
    }
  else 
#line 39
    {
      return 0;
    }
}

# 169 "/opt/tinyos-main/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, struct in6_addr *addr, int context_match_len, 
ieee154_addr_t *l2addr, ieee154_panid_t pan, uint8_t *flags)
#line 170
{
  *flags = 0;
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff) && addr->in6_u.u6_addr16[1] == 0 && addr->in6_u.u6_addr16[2] == 0 && addr->in6_u.u6_addr16[3] == 0) {



      if (
#line 175
      addr->in6_u.u6_addr16[4] == 0 && 
      addr->in6_u.u6_addr16[5] == 0 && 
      addr->in6_u.u6_addr16[6] == 0) {

          *flags |= LOWPAN_IPHC_AM_16;
          memcpy(buf, &addr->in6_u.u6_addr8[14], 2);
          return buf += 2;
        }
      else {



        if ((
#line 183
        addr->in6_u.u6_addr16[4] == ((((uint16_t )(pan & ~0x0200) << 8) | ((uint16_t )(pan & ~0x0200) >> 8)) & 0xffff) && 
        addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00ff << 8) | ((uint16_t )0x00ff >> 8)) & 0xffff) && 
        addr->in6_u.u6_addr16[6] == ((((uint16_t )0xfe00 << 8) | ((uint16_t )0xfe00 >> 8)) & 0xffff) && (
        l2addr->ieee_mode == IEEE154_ADDR_SHORT && 
        addr->in6_u.u6_addr16[7] == ((((uint16_t )l2addr->ieee_addr.saddr << 8) | ((uint16_t )l2addr->ieee_addr.saddr >> 8)) & 0xffff))) || (

        l2addr->ieee_mode == IEEE154_ADDR_EXT && 
        IPDispatchP__iid_eui_cmp(&addr->in6_u.u6_addr8[8], l2addr->ieee_addr.laddr.data))) {

            *flags |= LOWPAN_IPHC_AM_0;
            return buf;
          }
        else 
#line 194
          {
            *flags |= LOWPAN_IPHC_AM_64;
            memcpy(buf, &addr->in6_u.u6_addr8[8], 8);
            return buf + 8;
          }
        }
    }
  else {
#line 199
    if (context_match_len > 0) {
        int extra = 0;

        *flags |= LOWPAN_IPHC_AC_CONTEXT;
        if (context_match_len == 128) {
            *flags |= LOWPAN_IPHC_AM_0;
          }
        else {
#line 205
          if (IPDispatchP__bit_range_zero_p(&addr->in6_u.u6_addr8[0], context_match_len, 112) == 0) {
              *flags |= LOWPAN_IPHC_AM_16;
              memcpy(buf, &addr->in6_u.u6_addr8[14], 2);
              extra = 2;
            }
          else {
#line 209
            if (IPDispatchP__bit_range_zero_p(&addr->in6_u.u6_addr8[0], context_match_len, 64) == 0) {
                *flags |= LOWPAN_IPHC_AM_64;
                memcpy(buf, &addr->in6_u.u6_addr8[8], 8);
                extra = 8;
              }
            else 
#line 213
              {
                *flags |= LOWPAN_IPHC_AM_128;
                *flags &= ~LOWPAN_IPHC_AC_CONTEXT;
                memcpy(buf, &addr->in6_u.u6_addr8[0], 16);
                extra = 16;
              }
            }
          }
#line 219
        return buf + extra;
      }
    else {
#line 220
      if (addr->in6_u.u6_addr16[0] == 0 && addr->in6_u.u6_addr16[1] == 0 && addr->in6_u.u6_addr16[2] == 0 && addr->in6_u.u6_addr16[3] == 0 && addr->in6_u.u6_addr16[4] == 0 && addr->in6_u.u6_addr16[5] == 0 && addr->in6_u.u6_addr16[6] == 0 && addr->in6_u.u6_addr16[7] == 0) {

          *flags |= LOWPAN_IPHC_AC_CONTEXT | LOWPAN_IPHC_AM_128;
          return buf;
        }
      else 
#line 224
        {

          *flags |= LOWPAN_IPHC_AM_128;
          memcpy(buf, addr->in6_u.u6_addr8, 16);
          return buf + 16;
        }
      }
    }
}

#line 76
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end)
#line 76
{
  int start_byte = start / 8;
  int end_byte = end / 8;
  int i;
  uint8_t start_mask = 0xff << (8 - start % 8);
  uint8_t end_mask = 0xff << (8 - end % 8);



  if ((buf[start_byte] & start_mask) != 0) {
      return -1;
    }
  if ((buf[end_byte] & end_mask) != 0) {
      return -1;
    }
  for (i = start_byte; i < end_byte; i++) {
      if (buf[i] != 0) {
#line 92
        return -1;
        }
    }
#line 94
  return 0;
}

# 111 "/opt/tinyos-main/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static void CC2420TinyosNetworkP__BarePacket__setPayloadLength(message_t *msg, uint8_t len)
#line 111
{
  cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 113
  __nesc_hton_leuint8(hdr->length.nxdata, len - 1 + MAC_FOOTER_SIZE);
}

# 151 "/opt/tinyos-main/tos/lib/net/blip/IPDispatchP.nc"
static void IPDispatchP__SENDINFO_DECR(struct send_info *si)
#line 151
{
  if (-- si->_refcount == 0) {
      IPDispatchP__SendInfoPool__put(si);
    }
}

# 103 "/opt/tinyos-main/tos/system/PoolP.nc"
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t *newVal)
#line 103
{
  if (/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free >= 3) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index + /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free;

#line 109
      if (emptyIndex >= 3) {
          emptyIndex -= 3;
        }
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[emptyIndex] = newVal;
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free++;
      ;
      return SUCCESS;
    }
}

# 351 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCacheP.nc"
static neighbr_cache *NeighbrCacheP__NeighbrCache__findEntry(struct in6_addr ip)
{

  int i;

#line 355
  i = NeighbrCacheP__find(ip);
  if (i == -1) {
    return 0;
    }
  else {
#line 359
    return &NeighbrCacheP__neighbr_table[i];
    }
}

# 15 "NodeC.nc"
static uint8_t NodeC__stringlength(char *data)
{
  uint8_t i;
  uint8_t count = 0;

#line 19
  for (i = 0; *(data + i) != '\0'; i++) 
    count++;
  return count;
}

# 125 "SSLP.nc"
static char *SSLP__removeService(char *serv)
{
  memcpy(serv, &serv[SSLP__stringlength("service:")], 8);
  return serv;
}

#line 46
static uint8_t SSLP__stringlength(char *data)
{
  uint8_t i;
  uint8_t count = 0;

#line 50
  for (i = 0; *(data + i) != '\0'; i++) 
    count++;
  return count;
}

# 59 "/opt/tinyos-main/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static void ICMPCoreP__IP__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 62
{
  struct ip6_hdr *hdr = iph;
  struct ip6_packet reply;
  struct ip_iovec v;
  struct icmp6_hdr *req = (struct icmp6_hdr *)packet;
  uint16_t my_cksum;
#line 67
  uint16_t rx_cksum = (((uint16_t )req->cksum >> 8) | ((uint16_t )req->cksum << 8)) & 0xffff;




  req->cksum = 0;
  v.iov_base = packet;
  v.iov_len = len;
  v.iov_next = (void *)0;
  my_cksum = msg_cksum(iph, &v, IANA_ICMP);


  if (my_cksum != rx_cksum) {
      printf("\n IP received from ");
      printf_in6addr(& iph->ip6_src);
      printf("ICMP: invalid checksum\n");
      return;
    }

  switch (req->type) {
      case ICMP_TYPE_ECHO_REQUEST: 
        req->type = ICMP_TYPE_ECHO_REPLY;

      memset(&reply, 0, sizeof reply);
      memcpy(reply.ip6_hdr.ip6_dst.in6_u.u6_addr8, hdr->ip6_src.in6_u.u6_addr8, 16);
      ICMPCoreP__IPAddress__setSource(& reply.ip6_hdr);

      reply.ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
      reply.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
      reply.ip6_data = &v;

      reply.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )len << 8) | ((uint16_t )len >> 8)) & 0xffff;
      ICMPCoreP__ICMP_IP__send(ICMP_TYPE_ECHO_REPLY, &reply);
      break;

      default: 
        ICMPCoreP__ICMP_IP__recv(req->type, iph, packet, len, meta);
    }
}

# 768 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 768
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 769
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 772
            __nesc_atomic_end(__nesc_atomic); 
#line 772
            return;
          }
        }
      CC2420ReceiveP__receivingPacket = FALSE;
#line 787
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }





          CC2420ReceiveP__beginReceive();
        }
      else 
        {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 806
    __nesc_atomic_end(__nesc_atomic); }
}

#line 715
static void CC2420ReceiveP__beginReceive(void )
#line 715
{
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
  /* atomic removed: atomic calls only */
#line 717
  CC2420ReceiveP__receivingPacket = TRUE;
  if (CC2420ReceiveP__SpiResource__isOwner()) {
      CC2420ReceiveP__receive();
    }
  else {
#line 721
    if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
        CC2420ReceiveP__receive();
      }
    else {
        CC2420ReceiveP__SpiResource__request();
      }
    }
}

#line 758
static void CC2420ReceiveP__receive(void )
#line 758
{
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__RXFIFO__beginRead((uint8_t *)CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf), 1);
}

# 189 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

# 179 "/opt/tinyos-main/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__StdControl__stop(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffTimer__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__SpiResource__release();
      CC2420TransmitP__CSN__set();
    }
#line 186
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 171 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static error_t CC2420ReceiveP__StdControl__stop(void )
#line 171
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__InterruptFIFOP__disable();
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 812
static void CC2420ReceiveP__reset_state(void )
#line 812
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 814
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 216 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 216
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 143 "/opt/tinyos-main/tos/system/StateImplP.nc"
static uint8_t StateImplP__State__getState(uint8_t id)
#line 143
{
  uint8_t theState;

#line 145
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    theState = StateImplP__state[id];
#line 145
    __nesc_atomic_end(__nesc_atomic); }
  return theState;
}

# 220 "/opt/tinyos-main/tos/chips/cc2420/link/PacketLinkP.nc"
static void PacketLinkP__signalDone(error_t error)
#line 220
{
  PacketLinkP__DelayTimer__stop();
  PacketLinkP__SendState__toIdle();


  if (__nesc_ntoh_uint16(PacketLinkP__CC2420PacketBody__getMetadata(PacketLinkP__currentSendMsg)->maxRetries.nxdata) > 0) {
    __nesc_hton_uint16(PacketLinkP__CC2420PacketBody__getMetadata(PacketLinkP__currentSendMsg)->maxRetries.nxdata, PacketLinkP__totalRetries);
    }
  PacketLinkP__Send__sendDone(PacketLinkP__currentSendMsg, error);
}

# 56 "/opt/tinyos-main/tos/interfaces/State.nc"
static void PacketLinkP__SendState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(4U);
#line 56
}
#line 56
static void UniqueSendP__State__toIdle(void ){
#line 56
  StateImplP__State__toIdle(2U);
#line 56
}
#line 56
# 351 "/opt/tinyos-main/tos/lib/net/blip/IPForwardingEngineP.nc"
static void IPForwardingEngineP__IPForward__sendDone(uint8_t ifindex, struct send_info *status)
#line 351
{
  struct in6_addr next;
  struct in6_iid *iid = (struct in6_iid *)status->upper_data;

#line 354
  memset(next.in6_u.u6_addr8, 0, 16);
  next.in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;


  if (iid != (void *)0) {
      memcpy(&next.in6_u.u6_addr8[8], iid->data, 8);
      IPForwardingEngineP__ForwardingEvents__linkResult(ifindex, &next, status);
      IPForwardingEngineP__Pool__put(iid);
    }
}

# 85 "/opt/tinyos-main/tos/system/QueueC.nc"
static /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*IPDispatchC.QueueC*/QueueC__0__queue_t t = /*IPDispatchC.QueueC*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*IPDispatchC.QueueC*/QueueC__0__Queue__empty()) {
      /*IPDispatchC.QueueC*/QueueC__0__head++;
      if (/*IPDispatchC.QueueC*/QueueC__0__head == 12) {
#line 90
        /*IPDispatchC.QueueC*/QueueC__0__head = 0;
        }
#line 91
      /*IPDispatchC.QueueC*/QueueC__0__size--;
      /*IPDispatchC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 160 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 52 "/opt/tinyos-main/tos/lib/net/blip/UdpP.nc"
static error_t UdpP__UDP__bind(uint8_t clnt, uint16_t port)
#line 52
{
  int i;

#line 54
  port = (((uint16_t )port << 8) | ((uint16_t )port >> 8)) & 0xffff;
  if (port > 0) {
      for (i = 0; i < UdpP__N_CLIENTS; i++) 
        if (i != clnt && UdpP__local_ports[i] == port) {
          return FAIL;
          }
    }
#line 60
  UdpP__local_ports[clnt] = port;
  return SUCCESS;
}

# 173 "SSLP.nc"
static void SSLP__srvrqst_snd(char *service, uint8_t length_service, char *scope, uint8_t length_scope)
{


  int index = SSLP__ServiceLocation__findService(service, scope);

  if (index != -1) 
    {
    }
  else 


    {

      SSLP__fillHeader(& SSLP__sreq_msg.sslp_header, SERVICE_REQUEST, SSLP__seq_generator(service, scope));



      SSLP__sreq_msg.AM = IP_ADDR;

      SSLP__IPAddress__getEUILLAddress(& SSLP__sreq_msg.source_address.ip_address);

      service = SSLP__addService(service);

      memcpy(& SSLP__sreq_msg.service_type, service, length_service + SSLP__stringlength("service:"));
      SSLP__sreq_msg.length_service_type = SSLP__stringlength(service);
      memcpy(& SSLP__sreq_msg.scope, scope, length_scope);
      SSLP__sreq_msg.length_scope_list = SSLP__stringlength(scope);


      SSLP__dest.sin6_port = (((uint16_t )427 << 8) | ((uint16_t )427 >> 8)) & 0xffff;
      inet_pton6("ff02::1", & SSLP__dest.sin6_addr);


      SSLP__UDPSend__sendto(&SSLP__dest, &SSLP__sreq_msg, sizeof SSLP__sreq_msg);


      SSLP__RetransmitTimer__startOneShot(SSLP__TIMER_PERIOD);
    }
}

# 175 "/opt/tinyos-main/tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__getEUILLAddress(struct in6_addr *addr)
{
  int i;
  ieee154_laddr_t laddr = IPAddressP__Ieee154Address__getExtAddr();

  memset(addr->in6_u.u6_addr8, 0, 16);
  addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;

  for (i = 0; i < 8; i++) 
    addr->in6_u.u6_addr8[8 + i] = laddr.data[7 - i];
  addr->in6_u.u6_addr8[8] ^= 0x2;

  return TRUE;
}

# 74 "/opt/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 91
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 130 "/opt/tinyos-main/tos/lib/printf/PrintfP.nc"
  int printfflush(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (PrintfP__state == PrintfP__S_FLUSHING) 
        {
          int __nesc_temp = 
#line 133
          SUCCESS;

          {
#line 133
            __nesc_atomic_end(__nesc_atomic); 
#line 133
            return __nesc_temp;
          }
        }
#line 134
      if (PrintfP__Queue__empty()) 
        {
          int __nesc_temp = 
#line 135
          FAIL;

          {
#line 135
            __nesc_atomic_end(__nesc_atomic); 
#line 135
            return __nesc_temp;
          }
        }
#line 136
      PrintfP__state = PrintfP__S_FLUSHING;
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
  PrintfP__sendNext();
  return SUCCESS;
}

#line 119
static void PrintfP__sendNext(void )
#line 119
{
  int i;
  printf_msg_t *m = (printf_msg_t *)PrintfP__Packet__getPayload(&PrintfP__printfMsg, sizeof(printf_msg_t ));
  uint16_t length_to_send = PrintfP__Queue__size() < sizeof(printf_msg_t ) ? PrintfP__Queue__size() : sizeof(printf_msg_t );

#line 123
  memset(m->buffer, 0, sizeof(printf_msg_t ));
  for (i = 0; i < length_to_send; i++) 
    __nesc_hton_uint8(m->buffer[i].nxdata, PrintfP__Queue__dequeue());
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 135 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 135
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 53 "/opt/tinyos-main/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 100);
  return /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 172 "/opt/tinyos-main/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 148
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 150
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

#line 68
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 518 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }
}

# 374 "/opt/tinyos-main/tos/lib/net/blip/NeighbrCacheP.nc"
static void NeighbrCacheP__NeighbrCache__PrintTable(void )
{

  uint8_t i;

  printf("\n NeighborCache of the Node");

  printf("\n State\t\t\tTime Left\t\t IPAddress:\t\t\t\t LinkLayerAddress  \n");
  for (i = 0; i < 10; i++) 
    {

      if (NeighbrCacheP__neighbr_table[i].info.timer != 0) 
        {
          switch (NeighbrCacheP__neighbr_table[i].info.state) 
            {
              case REACHABLE: 
                printf("REACHABLE");
              break;
              case STALE: 
                printf("STALE");
              break;

              case DELAY: 
                printf("DELAY");
              break;
              case PROBE: 
                printf("PROBE");
              break;
            }

          printf("\t\t");
          printf("%ld", NeighbrCacheP__neighbr_table[i].info.timer);
          printf("\t\t");
          printf_in6addr(& NeighbrCacheP__neighbr_table[i].ip_address);
          printf("\t\t");
          printf_buf(NeighbrCacheP__neighbr_table[i].linklayer_addr.data, 8);
        }
    }
}

# 147 "/opt/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 329 "/opt/tinyos-main/tos/chips/cc2420/spi/CC2420SpiP.nc"
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {

      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 334
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 732 "/opt/tinyos-main/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 732
{








  CC2420ReceiveP__reset_state();

  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

# 481 "/opt/tinyos-main/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP__writeFsctrl(void )
#line 481
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 484
    {
      channel = CC2420ControlP__m_channel;
    }
#line 486
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP__writeMdmctrl0(void )
#line 498
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 499
    {
      CC2420ControlP__MDMCTRL0__write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP__addressRecognition && CC2420ControlP__hwAddressRecognition ? 1 : 0) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 508
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP__writeId(void )
#line 517
{
  nxle_uint16_t id[6];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 520
    {

      memcpy((uint8_t *)id, CC2420ControlP__m_ext_addr.data, 8);
      __nesc_hton_leuint16(id[4].nxdata, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[5].nxdata, CC2420ControlP__m_short_addr);
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__IEEEADR__write(0, (uint8_t *)&id, 12);
}

# 85 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id)
#line 85
{
  msp430_uart_union_config_t *config = /*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(id);

#line 87
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_byte_time = config->uartConfig.ubr / 2;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(config);
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr();
}

# 251 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static void HplMsp430Usart1P__Usart__disableSpi(void )
#line 251
{
  /* atomic removed: atomic calls only */
#line 252
  {
    HplMsp430Usart1P__ME2 &= ~0x10;
    HplMsp430Usart1P__SIMO__selectIOFunc();
    HplMsp430Usart1P__SOMI__selectIOFunc();
    HplMsp430Usart1P__UCLK__selectIOFunc();
  }
}

#line 211
static void HplMsp430Usart1P__Usart__disableUart(void )
#line 211
{
  /* atomic removed: atomic calls only */
#line 212
  {
    HplMsp430Usart1P__ME2 &= ~(0x20 | 0x10);
    HplMsp430Usart1P__UTXD__selectIOFunc();
    HplMsp430Usart1P__URXD__selectIOFunc();
  }
}

# 174 "/opt/tinyos-main/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 142 "/opt/tinyos-main/tos/lib/printf/PrintfP.nc"
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error)
#line 142
{
  if (error == SUCCESS) {
      if (PrintfP__Queue__size() > 0) {
        PrintfP__sendNext();
        }
      else {
#line 146
        PrintfP__state = PrintfP__S_STARTED;
        }
    }
  else {
#line 148
    PrintfP__retrySend__postTask();
    }
}

# 177 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id)
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 178
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId == id && /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 179
          TRUE;

          {
#line 179
            __nesc_atomic_end(__nesc_atomic); 
#line 179
            return __nesc_temp;
          }
        }
      else 
#line 180
        {
          unsigned char __nesc_temp = 
#line 180
          FALSE;

          {
#line 180
            __nesc_atomic_end(__nesc_atomic); 
#line 180
            return __nesc_temp;
          }
        }
    }
#line 183
    __nesc_atomic_end(__nesc_atomic); }
}

# 357 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "/opt/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 147 "/opt/tinyos-main/tos/chips/msp430/usart/Msp430UartP.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len)
#line 147
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 150
  if (len == 0) {
    return FAIL;
    }
  else {
#line 152
    if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 154
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = buf;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len = len;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos = 0;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner = id;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos++]);
  return SUCCESS;
}

# 81 "/opt/tinyos-main/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static error_t CC2420CsmaP__SplitControl__start(void )
#line 81
{

  if (CC2420CsmaP__SplitControlState__requestState(CC2420CsmaP__S_STARTING) == SUCCESS) {

      CC2420CsmaP__CC2420Power__startVReg();
      return SUCCESS;
    }
  else {
#line 88
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
        return EALREADY;
      }
    else {
#line 91
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 95
  return EBUSY;
}

# 96 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0006)))  void sig_UART1RX_VECTOR(void )
#line 96
{
  uint8_t temp = U1RXBUF;

#line 98
  HplMsp430Usart1P__Interrupts__rxDone(temp);
}

# 153 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}

# 412 "/opt/tinyos-main/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 91 "/opt/tinyos-main/tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b)
#line 91
{
  crc = (uint8_t )(crc >> 8) | (crc << 8);
  crc ^= b;
  crc ^= (uint8_t )(crc & 0xff) >> 4;
  crc ^= crc << 12;
  crc ^= (crc & 0xff) << 5;
  return crc;
}

# 296 "/opt/tinyos-main/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 166 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state != /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 101 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0004)))  void sig_UART1TX_VECTOR(void )
#line 101
{
  HplMsp430Usart1P__Interrupts__txDone();
}

# 118 "/opt/tinyos-main/tos/lib/serial/HdlcTranslateC.nc"
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  /* atomic removed: atomic calls only */
#line 120
  {
    if (HdlcTranslateC__state.sendEscape) {
        HdlcTranslateC__state.sendEscape = 0;
        HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
        HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
      }
    else {
        HdlcTranslateC__SerialFrameComm__putDone();
      }
  }
}

#line 106
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 107 "/opt/tinyos-main/tos/lib/printf/PutcharP.nc"
__attribute((noinline))   int putchar(int c)
#line 107
{
#line 119
  return PutcharP__Putchar__putchar(c);
}

# 64 "/opt/tinyos-main/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0008)))  void sig_PORT1_VECTOR(void )
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
#line 68
      HplMsp430InterruptP__Port10__fired();
#line 68
      return;
    }
#line 69
  if (n & (1 << 1)) {
#line 69
      HplMsp430InterruptP__Port11__fired();
#line 69
      return;
    }
#line 70
  if (n & (1 << 2)) {
#line 70
      HplMsp430InterruptP__Port12__fired();
#line 70
      return;
    }
#line 71
  if (n & (1 << 3)) {
#line 71
      HplMsp430InterruptP__Port13__fired();
#line 71
      return;
    }
#line 72
  if (n & (1 << 4)) {
#line 72
      HplMsp430InterruptP__Port14__fired();
#line 72
      return;
    }
#line 73
  if (n & (1 << 5)) {
#line 73
      HplMsp430InterruptP__Port15__fired();
#line 73
      return;
    }
#line 74
  if (n & (1 << 6)) {
#line 74
      HplMsp430InterruptP__Port16__fired();
#line 74
      return;
    }
#line 75
  if (n & (1 << 7)) {
#line 75
      HplMsp430InterruptP__Port17__fired();
#line 75
      return;
    }
}

#line 169
__attribute((wakeup)) __attribute((interrupt(0x0002)))  void sig_PORT2_VECTOR(void )
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
#line 173
      HplMsp430InterruptP__Port20__fired();
#line 173
      return;
    }
#line 174
  if (n & (1 << 1)) {
#line 174
      HplMsp430InterruptP__Port21__fired();
#line 174
      return;
    }
#line 175
  if (n & (1 << 2)) {
#line 175
      HplMsp430InterruptP__Port22__fired();
#line 175
      return;
    }
#line 176
  if (n & (1 << 3)) {
#line 176
      HplMsp430InterruptP__Port23__fired();
#line 176
      return;
    }
#line 177
  if (n & (1 << 4)) {
#line 177
      HplMsp430InterruptP__Port24__fired();
#line 177
      return;
    }
#line 178
  if (n & (1 << 5)) {
#line 178
      HplMsp430InterruptP__Port25__fired();
#line 178
      return;
    }
#line 179
  if (n & (1 << 6)) {
#line 179
      HplMsp430InterruptP__Port26__fired();
#line 179
      return;
    }
#line 180
  if (n & (1 << 7)) {
#line 180
      HplMsp430InterruptP__Port27__fired();
#line 180
      return;
    }
}

# 96 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0012)))  void sig_UART0RX_VECTOR(void )
#line 96
{
  uint8_t temp = U0RXBUF;

#line 98
  HplMsp430Usart0P__Interrupts__rxDone(temp);
}

# 153 "/opt/tinyos-main/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}






static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state != /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 101 "/opt/tinyos-main/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0010)))  void sig_UART0TX_VECTOR(void )
#line 101
{
  if (HplMsp430Usart0P__HplI2C__isI2C()) {
    HplMsp430Usart0P__I2CInterrupts__fired();
    }
  else {
#line 105
    HplMsp430Usart0P__Interrupts__txDone();
    }
}

