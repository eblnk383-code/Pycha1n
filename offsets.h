#ifndef offsets_h
#define offsets_h

#include <stdint.h>

// Offsets for iOS 17-26
#define off_inpcb_inp_list_le_next 0x28
#define off_inpcb_inp_pcbinfo 0x68
#define off_inpcbinfo_ipi_zone 0x20
#define off_kalloc_type_view_kt_zv_zv_name 0x8
#define off_inpcb_inp_socket 0x20
#define off_socket_so_usecount 0x18
#define off_inpcb_inp_depend6_inp6_chksum 0x128
#define off_inpcb_inp_depend6_inp6_icmp6filt 0x130

void offsets_init(void);

#endif
