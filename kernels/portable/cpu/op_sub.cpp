/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <executorch/kernels/portable/cpu/scalar_utils.h>
#include <executorch/kernels/portable/cpu/util/elementwise_util.h>
#include <executorch/runtime/kernel/kernel_includes.h>
#include <executorch/runtime/platform/assert.h>

#include <executorch/kernels/portable/cpu/op_sub_impl.h>

namespace torch {
namespace executor {
namespace native {

Tensor& sub_out(
    KernelRuntimeContext& ctx,
    const Tensor& a,
    const Tensor& b,
    const Scalar& alpha,
    Tensor& out) {
  return sub_out_impl(ctx, a, b, alpha, out);
}

Tensor& sub_scalar_out(
    KernelRuntimeContext& ctx,
    const Tensor& a,
    const Scalar& b,
    const Scalar& alpha,
    Tensor& out) {
  return sub_scalar_out_impl(ctx, a, b, alpha, out);
}

} // namespace native
} // namespace executor
} // namespace torch
