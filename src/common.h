#ifndef _common_h
#define _common_h

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//������
enum ops_packet_type
{
    ops_packet_auth = 1,        //��Ȩ
    ops_packet_service,         //�·���
};
//������
typedef struct _ops_packet {
    uint8_t  type;              //������
    uint32_t stream_id;                     //��ID
    char data[];                            //����
}ops_packet;



#endif
