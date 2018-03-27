/*
 * Copyright (c) 2017-2018, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __SVC_CORE_TEST_NS_H__
#define __SVC_CORE_TEST_NS_H__

#ifdef __cplusplus
extern "C" {
#endif

/* The following functions are SVC handlers for calling tests services. */
/* Note: only the symbols are needed, not exact prototype. For documentation
 * on the parameters and return value of these functions see
 * \ref core_test_api.h
 */

/**
 * \brief SVC handler for calling a secure function.
 */
int32_t svc_tfm_core_test(void);

/**
 * \brief SVC handler for calling a secure function multiple times.
 */
int32_t svc_tfm_core_test_multiple_calls(void);

/**
 * \brief SVC handler used in CORE_TEST_INTERACTIVE, to test
 *        requests to TF-M core from different NS threads.
 */
void svc_secure_decrement_ns_lock_1(void);

/**
 * \brief SVC handler used in CORE_TEST_INTERACTIVE, to test
 *        requests to TF-M core from different NS threads.
 */
void svc_secure_decrement_ns_lock_2(void);

#ifdef __cplusplus
}
#endif

#endif /* __SVC_CORE_TEST_NS_H__ */
