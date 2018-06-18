#ifndef FAKE_FLASH
#define FAKE_FLASH

#include <stdint.h>

struct flash_area {
    uint8_t fa_id;
    uint8_t fa_device_id;
    uint16_t pad16;
    uint32_t fa_off;
    uint32_t fa_size;
};

#endif
