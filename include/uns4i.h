#ifndef MGOS_ATI_UNS4i_HANDLER
#define MGOS_ATI_UNS4i_HANDLER

#ifdef __cplusplus
extern "C" {
#endif
#include <stdbool.h>
#include <stdint.h>
#include "mjs.h"

struct uns4i_trc{
    float VDC1, VAC1, VAC1f420, VAC1f480, VAC1f580, VAC1f720, VAC1f780;
    uint16_t F1cur, F1mod;
    float VDC2, VAC2, VAC2f420, VAC2f480, VAC2f580, VAC2f720, VAC2f780;
    uint16_t F2cur, F2mod;
    float VDC3, VAC3, VAC3f420, VAC3f480, VAC3f580, VAC3f720, VAC3f780;
    uint16_t F3cur, F3mod;
    float VDC4, VAC4, VAC4f420, VAC4f480, VAC4f580, VAC4f720, VAC4f780;
    uint16_t F4cur, F4mod;

};

const struct mjs_c_struct_member* get_uns4i_trc_descr(void);

uint8_t* get_request_string( uint8_t addr, uint8_t code_isol, uint8_t amplif );







#ifdef __cplusplus
}   /*extern "C"*/
#endif  /*__cplusplus*/
#endif  /*MGOS_ATI_UNS4i_HANDLER*/
