

/*Header file for Simple Service Location Protocol

@author Md.Jamal <mjmohiuddin@cdac.in>
@version $Revision: 1.0

*/

#ifndef SSLP_H
#define SSLP_H

#include <lib6lowpan/ip.h>

struct sslp_hdr{
	uint8_t version:4;			//contains the version of the sslp being used
	uint8_t msgid:6;			//determines the message type
	uint8_t O_flag:1;			//O(Overflow) flag is set when the message length exceeds what can fit into the datagram
	uint8_t F_flag:1;			//F(Fresh) flag is set on every SREG
	uint8_t rsv:4;				//reserved
	uint16_t seq_no;			//set to a unique value for each unique SREQ message.If the request message is retransmitted,the same sequence number is used.Replies set the sequence number to the same value as the sequence number in  the SREQ message.
}__attribute__((packed));


//service request message
/*Service Request Messages are sent by UA to SA to get the location of service specified in the service type*/
typedef struct service_request_msg{
	struct sslp_hdr sslp_header;		//header with message-id=1
	uint8_t AM:2;				//addressing mode specifies the size of the source address
	union {
		ieee154_addr_t linklayer_address;
        	struct in6_addr ip_address;
      	       }source_address;
	uint8_t length_service_type;
	char service_type[16];			//services should be defined according to the service template
	uint8_t length_scope_list;
	char scope[16];
}__attribute__((packed))service_request_msg;


typedef struct location_entry{
	uint16_t lifetime;
	uint8_t lt:2;
	uint8_t reserved:6;
	uint8_t reserved1;
	union {
		ieee154_addr_t linklayer_address;
        	struct in6_addr ip_address;
		struct sockaddr_in6 url;
      	       }service_location;
}__attribute__((packed))location_entry;


#define service_linklayer service_location.linklayer_address
#define service_ip service_location.ip_address
#define url service_location.url
//service Reply Message

typedef struct service_reply_msg{
	struct sslp_hdr sslp_header;		//header with message-id=2
	uint16_t error_code;
	uint16_t location_entry_count;
	location_entry service_entry;
}__attribute__((packed))service_reply_msg;



//Service Type Request Message
//This message allows a UA to find all the service type available on the network

typedef struct{
	struct sslp_hdr sslp_header;		//header with message id =7
	uint8_t AM:2;				//Addressing Mode specifies the type of the source address
	uint8_t reserved:6;
	uint8_t reserved1;
	union {
		ieee154_addr_t linklayer_address;
        	struct in6_addr ip_address;
      	       }source_address;
	uint8_t length_scope_type;
	char scope[16];
}__attribute__((packed))strequest_msg;


//service Type Reply Message
//message send in response to Service Type Request

typedef struct{
	struct sslp_hdr sslp_header;		//header with message id =8
	uint16_t error_code;
	location_entry service_entry;
	uint16_t length_service_type;
	char service_type[16];
}__attribute__((packed))streply_msg;


typedef struct {

	char service[16];
	struct in6_addr ip_address;
	uint16_t port_no;
	uint16_t lifetime;
	char scope[16];
}__attribute__((packed))services_available;

typedef struct {
	char service[16];
	char scope[16];
	uint8_t sequence_no;
}__attribute__((packed))sequencer;

enum{

	NO,
	YES,
};

//error types

enum{
	NO_ERROR=0,
	PARSING_ERROR=1,
	SCOPE_ERROR=2,
	INTERNAL_ERROR=3,
	MSG_NOT_SUPPORTED=4,
	ILLEGAL_REGISTRATION=5,
	DA_BUSY=6,
};
//Addressing Mode Types

enum{
	
	SHORT_ADDR=1,
	EXTENDED_ADDR=2,
	IP_ADDR=3,
};
//Message Types


enum{
	SERVICE_REQUEST=1,
	SERVICE_REPLY=2,
	SERVICE_REGISTRATION=3,
	SERVICE_ACKNOWLEDGE=4,
	DA_ADVERTISEMENT=5,
	SA_ADVERTISEMENT=6,
	SERVICE_TYPE_REQUEST=7,
	SERVICE_TYPE_REPLY=8,
	SERVICE_DEREGISTRATION=9,
};

#define SSLP_VERSION 2
/*(Section 5.3 of RFC2608)Request which fails to give a response are retransmitted. The initial retransmissions occurs	after a CONFIG_RETRY wait period.Retransmissions must be made with exponentially increasing wait intervals(doubling the wait each time)
Multicast requests should be reissued over CONFIG_MC_MAX seconds untill a result has been obtained
*/
#define CONFIG_RETRY 2000U	//2 Seconds
#define CONFIG_MC_MAX 15000U	//15 Seconds

#define STORE_MAX_SERVICES 5	//Maximum amount of services we can store
#define STORE_MAX_SEQUENCES 5	//Maximum amount of sequencese we can store
#define WAIT_PERIOD_SREPLY	10000U	//Maximum amount of time we will wait for service reply if messages received after this will be discarded
#define PRINTTIMER_PERIOD	5000U	//delay between each print
#define MAX_SERVICE_ADVERTISE	3	//Maximum services the SA can advertise

#define SSLP_LISTENING_PORT 	427	//According to RFC 2608(Section 6.1)
#define SSLP_TRANSMIT_PORT	441	//This can be anything
#endif
