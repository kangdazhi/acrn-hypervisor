/*
 * Copyright (C) 2019 Intel Corporation.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef VM_RESET_H_
#define VM_RESET_H_

#include <acrn_common.h>

void register_reset_port_handler(struct acrn_vm *vm);
void shutdown_vm_from_idle(uint16_t pcpu_id);
void triple_fault_shutdown_vm(struct acrn_vcpu *vcpu);

#endif /* VM_RESET_H_ */
