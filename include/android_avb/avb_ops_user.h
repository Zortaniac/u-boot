#ifndef AVB_OPS_USER_H_
#define AVB_OPS_USER_H_

#include <android_avb/libavb.h>
#include <android_avb/avb_ab_flow.h>



AvbOps* avb_ops_user_new(void);
void avb_ops_user_free(AvbOps* ops);
int read_slot_count(char *slot_count);
int read_slot_suffixes(char *slot_suffixes);
int set_slot_active(unsigned int *slot_number);
int get_current_slot(char *select_slot);
int read_permanent_attributes(uint8_t *attributes, uint32_t size);
int write_permanent_attributes(uint8_t *attributes, uint32_t size);
int read_flash_lock_state(uint8_t *flash_lock_state);
int write_flash_lock_state(uint8_t flash_lock_state);
int read_lock_state(uint8_t *lock_state);
int write_lock_state(uint8_t lock_state);

#endif