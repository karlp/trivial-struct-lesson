#include <stdio.h>

#include "common.h"

void b_dump(void) {
        printf("in b, &entries = %p\n", &entries);
        for (int i = 0; i < ARRAY_LENGTH(entries); i++) {
                const struct table_entry *e = &entries[i];
                printf("Entry %d is at %p = {key:%d, label:%s}\n",
			i, e, e->key, e->label);
        }
}

