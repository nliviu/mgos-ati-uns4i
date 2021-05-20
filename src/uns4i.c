#include <mgos.h>
#include <mjs.h>

#include "uns4i.h"


static const struct mjs_c_struct_member uns4i_trc_descr[] = {
    {"VDC1", offsetof(struct uns4i_trc, VDC1), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1", offsetof(struct uns4i_trc, VAC1), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1f420", offsetof(struct uns4i_trc, VAC1f420), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1f480", offsetof(struct uns4i_trc, VAC1f480), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1f580", offsetof(struct uns4i_trc, VAC1f580), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1f720", offsetof(struct uns4i_trc, VAC1f720), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1f780", offsetof(struct uns4i_trc, VAC1f780), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"F1cur", offsetof(struct uns4i_trc, F1cur), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    
    {"F1mod", offsetof(struct uns4i_trc, F1mod), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    

    {"VDC2", offsetof(struct uns4i_trc, VDC2), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2", offsetof(struct uns4i_trc, VAC2), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2f420", offsetof(struct uns4i_trc, VAC2f420), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2f480", offsetof(struct uns4i_trc, VAC2f480), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2f580", offsetof(struct uns4i_trc, VAC2f580), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2f720", offsetof(struct uns4i_trc, VAC2f720), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2f780", offsetof(struct uns4i_trc, VAC2f780), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"F2cur", offsetof(struct uns4i_trc, F2cur), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    
    {"F2mod", offsetof(struct uns4i_trc, F2mod), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    

    {"VDC3", offsetof(struct uns4i_trc, VDC3), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3", offsetof(struct uns4i_trc, VAC3), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3f420", offsetof(struct uns4i_trc, VAC3f420), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3f480", offsetof(struct uns4i_trc, VAC3f480), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3f580", offsetof(struct uns4i_trc, VAC3f580), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3f720", offsetof(struct uns4i_trc, VAC3f720), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3f780", offsetof(struct uns4i_trc, VAC3f780), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"F3cur", offsetof(struct uns4i_trc, F3cur), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    
    {"F3mod", offsetof(struct uns4i_trc, F3mod), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    

    {"VDC4", offsetof(struct uns4i_trc, VDC4), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4", offsetof(struct uns4i_trc, VAC4), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4f420", offsetof(struct uns4i_trc, VAC4f420), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4f480", offsetof(struct uns4i_trc, VAC4f480), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4f580", offsetof(struct uns4i_trc, VAC4f580), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4f720", offsetof(struct uns4i_trc, VAC4f720), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4f780", offsetof(struct uns4i_trc, VAC4f780), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"F4cur", offsetof(struct uns4i_trc, F4cur), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    
    {"F4mod", offsetof(struct uns4i_trc, F4mod), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },   
    {NULL, 0, MJS_STRUCT_FIELD_TYPE_INVALID, NULL},
};
const struct mjs_c_struct_member* get_uns4i_trc_descr(void){
    return uns4i_trc_descr;
};
uint8_t* get_request_string( uint8_t addr, uint8_t code_isol, uint8_t amplif ){
    return (uint8_t*)"/x00/x6c/x03/x00/x01/x00/xa9/x23";
}

bool mgos_usn4i_init(void){
    return true;
}