/*
 * Copyright 2021 Vectorized, Inc.
 *
 * Use of this software is governed by the Business Source License
 * included in the file licenses/BSL.md
 *
 * As of the Change Date specified in that file, in accordance with
 * the Business Source License, use of this software will be governed
 * by the Apache License, Version 2.0
 */

#pragma once

#include "pandaproxy/schema_registry/service.h"
#include "pandaproxy/server.h"
#include "seastarx.h"

#include <seastar/core/future.hh>

namespace pandaproxy::schema_registry {

ss::future<ctx_server<service>::reply_t>
get_config(ctx_server<service>::request_t rq, ctx_server<service>::reply_t rp);

ss::future<ctx_server<service>::reply_t>
put_config(ctx_server<service>::request_t rq, ctx_server<service>::reply_t rp);

ss::future<ctx_server<service>::reply_t> get_config_subject(
  ctx_server<service>::request_t rq, ctx_server<service>::reply_t rp);

ss::future<ctx_server<service>::reply_t> put_config_subject(
  ctx_server<service>::request_t rq, ctx_server<service>::reply_t rp);

ss::future<ctx_server<service>::reply_t> get_schemas_types(
  ctx_server<service>::request_t rq, ctx_server<service>::reply_t rp);

ss::future<ctx_server<service>::reply_t> get_schemas_ids_id(
  ctx_server<service>::request_t rq, ctx_server<service>::reply_t rp);

ss::future<ctx_server<service>::reply_t> get_subjects(
  ctx_server<service>::request_t rq, ctx_server<service>::reply_t rp);

ss::future<ctx_server<service>::reply_t> get_subject_versions(
  ctx_server<service>::request_t rq, ctx_server<service>::reply_t rp);

ss::future<ctx_server<service>::reply_t> post_subject_versions(
  ctx_server<service>::request_t rq, ctx_server<service>::reply_t rp);

ss::future<ctx_server<service>::reply_t> get_subject_versions_version(
  ctx_server<service>::request_t rq, ctx_server<service>::reply_t rp);

} // namespace pandaproxy::schema_registry
