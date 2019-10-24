#ifndef AWS_HTTP_HTTP_MONITOR_H
#define AWS_HTTP_HTTP_MONITOR_H

/*
 * Copyright 2010-2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#include <aws/http/http.h>

struct aws_allocator;
struct aws_crt_statistics_handler;
struct aws_http_connection_monitoring_options;

AWS_EXTERN_C_BEGIN

/**
 * Creates a new http connection monitor that regularly checks the connection's throughput and shuts the connection
 * down if the a minimum threshold is not met for a configurable number of seconds.
 */
AWS_HTTP_API
struct aws_crt_statistics_handler *aws_crt_statistics_handler_new_http_connection_monitor(struct aws_allocator *allocator, struct aws_http_connection_monitoring_options *options);

/**
 * Validates monitoring options to ensure they are sensible
 */
AWS_HTTP_API
bool aws_http_connection_monitoring_options_is_valid(const struct aws_http_connection_monitoring_options *options);

AWS_EXTERN_C_END

#endif /* AWS_HTTP_HTTP_MONITOR_H */
