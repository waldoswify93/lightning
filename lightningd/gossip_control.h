#ifndef LIGHTNING_LIGHTNINGD_GOSSIP_CONTROL_H
#define LIGHTNING_LIGHTNINGD_GOSSIP_CONTROL_H
#include "config.h"
#include <ccan/short_types/short_types.h>
#include <stdbool.h>

struct lightningd;

void gossip_init(struct lightningd *ld);
#endif /* LIGHTNING_LIGHTNINGD_GOSSIP_CONTROL_H */
