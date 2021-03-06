///
/// Copyright (C) 2010-2016, Dependable Systems Laboratory, EPFL
/// Copyright (C) 2014-2017, Cyberhaven
/// All rights reserved.
///
/// Licensed under the Cyberhaven Research License Agreement.
///

#include <stdarg.h>

#ifndef __S2E_LOG__H__

#define __S2E_LOG__H__

#ifdef __cplusplus
extern "C" {
#endif

void s2e_flush_output_streams(void);
void s2e_debug_print(const char *fmtstr, ...);
void s2e_warning_print(const char *fmtstr, ...);
int s2e_vprintf(const char *fmtstr, int warn, va_list args);
void s2e_debug_print_hex(void *addr, int len);
void print_stacktrace(void (*print_func)(const char *fmt, ...), const char *reason);

#ifdef __cplusplus
}
#endif

#endif
