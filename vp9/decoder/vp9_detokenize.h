/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */


#ifndef VP9_DECODER_VP9_DETOKENIZE_H_
#define VP9_DECODER_VP9_DETOKENIZE_H_

#include "vp9/decoder/vp9_onyxd_int.h"

int vp9_decode_tokens(VP9D_COMP* const pbi,
                      MACROBLOCKD* const xd,
                      vp9_reader *r,
                      BLOCK_SIZE_TYPE bsize,
                      const int16_t *dq);

#if CONFIG_NEWBINTRAMODES
int vp9_decode_mb_tokens_4x4_uv(VP9D_COMP* const dx, MACROBLOCKD* const xd,
                                vp9_reader *r, const int16_t *dq);
int vp9_decode_coefs_4x4(VP9D_COMP *dx, MACROBLOCKD *xd,
                         vp9_reader *r,
                         PLANE_TYPE type, int i, const int16_t *dq);
#endif

#endif  // VP9_DECODER_VP9_DETOKENIZE_H_
