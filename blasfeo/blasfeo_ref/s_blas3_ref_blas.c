/**************************************************************************************************
*                                                                                                 *
* This file is part of BLASFEO.                                                                   *
*                                                                                                 *
* BLASFEO -- BLAS for embedded optimization.                                                      *
* Copyright (C) 2019 by Gianluca Frison.                                                          *
* Developed at IMTEK (University of Freiburg) under the supervision of Moritz Diehl.              *
* All rights reserved.                                                                            *
*                                                                                                 *
* The 2-Clause BSD License                                                                        *
*                                                                                                 *
* Redistribution and use in source and binary forms, with or without                              *
* modification, are permitted provided that the following conditions are met:                     *
*                                                                                                 *
* 1. Redistributions of source code must retain the above copyright notice, this                  *
*    list of conditions and the following disclaimer.                                             *
* 2. Redistributions in binary form must reproduce the above copyright notice,                    *
*    this list of conditions and the following disclaimer in the documentation                    *
*    and/or other materials provided with the distribution.                                       *
*                                                                                                 *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND                 *
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED                   *
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE                          *
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR                 *
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES                  *
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;                    *
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND                     *
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT                      *
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS                   *
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                                    *
*                                                                                                 *
* Author: Gianluca Frison, gianluca.frison (at) imtek.uni-freiburg.de                             *
*                                                                                                 *
**************************************************************************************************/

#include <stdlib.h>
#include <stdio.h>

#include <blasfeo_common.h>
#include <blasfeo_s_aux.h>



#define REF_BLAS



#define XMATEL_A(X, Y) pA[(X)+lda*(Y)]
#define XMATEL_B(X, Y) pB[(X)+ldb*(Y)]
#define XMATEL_C(X, Y) pC[(X)+ldc*(Y)]
#define XMATEL_D(X, Y) pD[(X)+ldd*(Y)]



#define REAL float
#define XMAT blasfeo_cm_smat
#define XMATEL BLASFEO_CM_SMATEL
#define XVEC blasfeo_svec
#define XVECEL BLASFEO_SVECEL



// gemm
#define REF_GEMM_NN blasfeo_hp_cm_sgemm_nn
#define REF_GEMM_NT blasfeo_hp_cm_sgemm_nt
#define REF_GEMM_TN blasfeo_hp_cm_sgemm_tn
#define REF_GEMM_TT blasfeo_hp_cm_sgemm_tt
// syrk
#define REF_SYRK_LN blasfeo_hp_cm_ssyrk_ln
#define REF_SYRK_LN_MN blasfeo_hp_cm_ssyrk_ln_mn
#define REF_SYRK_LT blasfeo_hp_cm_ssyrk_lt
#define REF_SYRK_UN blasfeo_hp_cm_ssyrk_un
#define REF_SYRK_UT blasfeo_hp_cm_ssyrk_ut
// trmm
#define REF_TRMM_LLNN blasfeo_hp_cm_strmm_llnn
#define REF_TRMM_LLNU blasfeo_hp_cm_strmm_llnu
#define REF_TRMM_LLTN blasfeo_hp_cm_strmm_lltn
#define REF_TRMM_LLTU blasfeo_hp_cm_strmm_lltu
#define REF_TRMM_LUNN blasfeo_hp_cm_strmm_lunn
#define REF_TRMM_LUNU blasfeo_hp_cm_strmm_lunu
#define REF_TRMM_LUTN blasfeo_hp_cm_strmm_lutn
#define REF_TRMM_LUTU blasfeo_hp_cm_strmm_lutu
#define REF_TRMM_RLNN blasfeo_hp_cm_strmm_rlnn
#define REF_TRMM_RLNU blasfeo_hp_cm_strmm_rlnu
#define REF_TRMM_RLTN blasfeo_hp_cm_strmm_rltn
#define REF_TRMM_RLTU blasfeo_hp_cm_strmm_rltu
#define REF_TRMM_RUNN blasfeo_hp_cm_strmm_runn
#define REF_TRMM_RUNU blasfeo_hp_cm_strmm_runu
#define REF_TRMM_RUTN blasfeo_hp_cm_strmm_rutn
#define REF_TRMM_RUTU blasfeo_hp_cm_strmm_rutu
// trsm
#define REF_TRSM_LLNN blasfeo_hp_cm_strsm_llnn
#define REF_TRSM_LLNU blasfeo_hp_cm_strsm_llnu
#define REF_TRSM_LLTN blasfeo_hp_cm_strsm_lltn
#define REF_TRSM_LLTU blasfeo_hp_cm_strsm_lltu
#define REF_TRSM_LUNN blasfeo_hp_cm_strsm_lunn
#define REF_TRSM_LUNU blasfeo_hp_cm_strsm_lunu
#define REF_TRSM_LUTN blasfeo_hp_cm_strsm_lutn
#define REF_TRSM_LUTU blasfeo_hp_cm_strsm_lutu
#define REF_TRSM_RLNN blasfeo_hp_cm_strsm_rlnn
#define REF_TRSM_RLNU blasfeo_hp_cm_strsm_rlnu
#define REF_TRSM_RLTN blasfeo_hp_cm_strsm_rltn
#define REF_TRSM_RLTU blasfeo_hp_cm_strsm_rltu
#define REF_TRSM_RUNN blasfeo_hp_cm_strsm_runn
#define REF_TRSM_RUNU blasfeo_hp_cm_strsm_runu
#define REF_TRSM_RUTN blasfeo_hp_cm_strsm_rutn
#define REF_TRSM_RUTU blasfeo_hp_cm_strsm_rutu
// syr2k
#define REF_SYR2K_LN blasfeo_hp_cm_ssyr2k_ln
#define REF_SYR2K_LT blasfeo_hp_cm_ssyr2k_lt
#define REF_SYR2K_UN blasfeo_hp_cm_ssyr2k_un
#define REF_SYR2K_UT blasfeo_hp_cm_ssyr2k_ut


// gemm
#define GEMM_NN blasfeo_cm_sgemm_nn
#define GEMM_NT blasfeo_cm_sgemm_nt
#define GEMM_TN blasfeo_cm_sgemm_tn
#define GEMM_TT blasfeo_cm_sgemm_tt
// syrk
#define SYRK_LN blasfeo_cm_ssyrk_ln
#define SYRK_LN_MN blasfeo_cm_ssyrk_ln_mn
#define SYRK_LT blasfeo_cm_ssyrk_lt
#define SYRK_UN blasfeo_cm_ssyrk_un
#define SYRK_UT blasfeo_cm_ssyrk_ut
// trmm
#define TRMM_LLNN blasfeo_cm_strmm_llnn
#define TRMM_LLNU blasfeo_cm_strmm_llnu
#define TRMM_LLTN blasfeo_cm_strmm_lltn
#define TRMM_LLTU blasfeo_cm_strmm_lltu
#define TRMM_LUNN blasfeo_cm_strmm_lunn
#define TRMM_LUNU blasfeo_cm_strmm_lunu
#define TRMM_LUTN blasfeo_cm_strmm_lutn
#define TRMM_LUTU blasfeo_cm_strmm_lutu
#define TRMM_RLNN blasfeo_cm_strmm_rlnn
#define TRMM_RLNU blasfeo_cm_strmm_rlnu
#define TRMM_RLTN blasfeo_cm_strmm_rltn
#define TRMM_RLTU blasfeo_cm_strmm_rltu
#define TRMM_RUNN blasfeo_cm_strmm_runn
#define TRMM_RUNU blasfeo_cm_strmm_runu
#define TRMM_RUTN blasfeo_cm_strmm_rutn
#define TRMM_RUTU blasfeo_cm_strmm_rutu
// trsm
#define TRSM_LLNN blasfeo_cm_strsm_llnn
#define TRSM_LLNU blasfeo_cm_strsm_llnu
#define TRSM_LLTN blasfeo_cm_strsm_lltn
#define TRSM_LLTU blasfeo_cm_strsm_lltu
#define TRSM_LUNN blasfeo_cm_strsm_lunn
#define TRSM_LUNU blasfeo_cm_strsm_lunu
#define TRSM_LUTN blasfeo_cm_strsm_lutn
#define TRSM_LUTU blasfeo_cm_strsm_lutu
#define TRSM_RLNN blasfeo_cm_strsm_rlnn
#define TRSM_RLNU blasfeo_cm_strsm_rlnu
#define TRSM_RLTN blasfeo_cm_strsm_rltn
#define TRSM_RLTU blasfeo_cm_strsm_rltu
#define TRSM_RUNN blasfeo_cm_strsm_runn
#define TRSM_RUNU blasfeo_cm_strsm_runu
#define TRSM_RUTN blasfeo_cm_strsm_rutn
#define TRSM_RUTU blasfeo_cm_strsm_rutu
// syr2k
#define SYR2K_LN blasfeo_cm_ssyr2k_ln
#define SYR2K_LT blasfeo_cm_ssyr2k_lt
#define SYR2K_UN blasfeo_cm_ssyr2k_un
#define SYR2K_UT blasfeo_cm_ssyr2k_ut




#include "x_blas3_ref.c"


