/* Copyright (C) 2015-2020, Wazuh Inc.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

#include "wdb_global_wrappers.h"
#include <stddef.h>
#include <stdarg.h>
#include <setjmp.h>
#include <cmocka.h>

int __wrap_wdb_global_insert_agent(__attribute__((unused)) wdb_t *wdb,
                            int id,
                            char* name,
                            char* ip,
                            char* register_ip,
                            char* internal_key,
                            char* group,
                            int date_add) {
    check_expected(id);
    check_expected(name);
    check_expected(ip);
    check_expected(register_ip);
    check_expected(internal_key);
    check_expected(group);
    check_expected(date_add);

    return mock();
}

int __wrap_wdb_global_update_agent_name(__attribute__((unused)) wdb_t *wdb,
                                        int id,
                                        char* name) {
    check_expected(id);
    check_expected(name);

    return mock();
}

int __wrap_wdb_global_update_agent_version( __attribute__((unused)) wdb_t *wdb,
                                            int id,
                                            const char *os_name,
                                            const char *os_version,
                                            const char *os_major,
                                            const char *os_minor,
                                            const char *os_codename,
                                            const char *os_platform,
                                            const char *os_build,
                                            const char *os_uname,
                                            const char *os_arch,
                                            const char *version,
                                            const char *config_sum,
                                            const char *merged_sum,
                                            const char *manager_host,
                                            const char *node_name,
                                            const char *agent_ip,
                                            wdb_sync_status_t sync_status) {
    check_expected(id);
    check_expected(os_name);
    check_expected(os_version);
    check_expected(os_major);
    check_expected(os_minor);
    check_expected(os_codename);
    check_expected(os_platform);
    check_expected(os_build);
    check_expected(os_uname);
    check_expected(os_arch);
    check_expected(version);
    check_expected(config_sum);
    check_expected(merged_sum);
    check_expected(manager_host);
    check_expected(node_name);
    check_expected(agent_ip);
    check_expected(sync_status);

    return mock();
}

cJSON* __wrap_wdb_global_get_agent_labels(  __attribute__((unused)) wdb_t *wdb,
                                            int id) {
    check_expected(id);
    return mock_ptr_type(cJSON*);
}

int __wrap_wdb_global_del_agent_labels( __attribute__((unused)) wdb_t *wdb,
                                        int id) {
    check_expected(id);
    return mock();
}

int __wrap_wdb_global_set_agent_label(  __attribute__((unused)) wdb_t *wdb,
                                        int id,
                                        char* key,
                                        char* value){
    check_expected(id);
    check_expected(key);
    check_expected(value);
    return mock();
}

int __wrap_wdb_global_update_agent_keepalive(__attribute__((unused)) wdb_t *wdb,
                                            int id,
                                            wdb_sync_status_t status) {
    check_expected(id);
    check_expected(status);
    return mock();
}

int __wrap_wdb_global_delete_agent( __attribute__((unused)) wdb_t *wdb,
                                    int id) {
    check_expected(id);
    return mock();
}

cJSON* __wrap_wdb_global_select_agent_name( __attribute__((unused)) wdb_t *wdb,
                                            int id) {
    check_expected(id);
    return mock_ptr_type(cJSON*);   
}

cJSON* __wrap_wdb_global_select_agent_group(__attribute__((unused)) wdb_t *wdb,
                                            int id) {
    check_expected(id);
    return mock_ptr_type(cJSON*);   
}

int __wrap_wdb_global_delete_agent_belong(  __attribute__((unused)) wdb_t *wdb,
                                            int id) {
    check_expected(id);
    return mock();   
}

cJSON* __wrap_wdb_global_find_agent(__attribute__((unused)) wdb_t *wdb,
                                    const char *name,
                                    const char *ip) {
    check_expected(name);
    check_expected(ip);
    return mock_ptr_type(cJSON*);
}

cJSON* __wrap_wdb_global_select_agent_fim_offset(   __attribute__((unused)) wdb_t *wdb,
                                                    int id) {
    check_expected(id);
    return mock_ptr_type(cJSON*);
}

cJSON* __wrap_wdb_global_select_agent_reg_offset(   __attribute__((unused)) wdb_t *wdb,
                                                    int id) {
    check_expected(id);
    return mock_ptr_type(cJSON*);
}

int __wrap_wdb_global_update_agent_fim_offset(  __attribute__((unused)) wdb_t *wdb,
                                                int id,
                                                long offset) {
    check_expected(id);
    check_expected(offset);
    return mock();
}

int __wrap_wdb_global_update_agent_reg_offset(  __attribute__((unused)) wdb_t *wdb,
                                                int id,
                                                long offset) {
    check_expected(id);
    check_expected(offset);
    return mock();
}

cJSON* __wrap_wdb_global_select_agent_status(       __attribute__((unused)) wdb_t *wdb,
                                                    int id) {
    check_expected(id);
    return mock_ptr_type(cJSON*);
}

int __wrap_wdb_global_update_agent_status(      __attribute__((unused)) wdb_t *wdb,
                                                int id,
                                                char *status) {
    check_expected(id);
    check_expected(status);
    return mock();
}

int __wrap_wdb_global_update_agent_group(       __attribute__((unused)) wdb_t *wdb,
                                                int id,
                                                char *group) {
    check_expected(id);
    check_expected(group);
    return mock();
}
