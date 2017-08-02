/*******************************************************************************
 *  This file is AUTOMATICALLY GENERATED by:
 *  ../tools/fortran_wrappers.pl ../include/magmablas_c.i
 *  Do not edit.
 ******************************************************************************/

#include <stdint.h>  // for uintptr_t

#include "magma_v2.h"
#include "magma_mangling.h"

/*
 * typedef comming from fortran.h file provided in CUDADIR/src directory
 * it will probably change with future release of CUDA when they use 64 bit addresses
 */
typedef size_t devptr_t;

#ifdef PGI_FORTRAN
    #define magma_idevptr(ptr_) ((magma_int_t*)       (ptr_))
    #define magma_zdevptr(ptr_) ((magmaDoubleComplex*)(ptr_))
    #define magma_cdevptr(ptr_) ((magmaFloatComplex*) (ptr_))
    #define magma_ddevptr(ptr_) ((double*)            (ptr_))
    #define magma_sdevptr(ptr_) ((float*)             (ptr_))
#else
    #define magma_idevptr(ptr_) ((magma_int_t*)       (uintptr_t)(*(ptr_)))
    #define magma_zdevptr(ptr_) ((magmaDoubleComplex*)(uintptr_t)(*(ptr_)))
    #define magma_cdevptr(ptr_) ((magmaFloatComplex*) (uintptr_t)(*(ptr_)))
    #define magma_ddevptr(ptr_) ((double*)            (uintptr_t)(*(ptr_)))
    #define magma_sdevptr(ptr_) ((float*)             (uintptr_t)(*(ptr_)))
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define magmablasf_ctranspose_inplace FORTRAN_NAME( magmablasf_ctranspose_inplace, MAGMABLASF_CTRANSPOSE_INPLACE )
void magmablasf_ctranspose_inplace(
    magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda )
{
    magmablas_ctranspose_inplace(
        *n,
        magma_cdevptr(dA), *ldda );
}

#define magmablasf_ctranspose_conj_inplace FORTRAN_NAME( magmablasf_ctranspose_conj_inplace, MAGMABLASF_CTRANSPOSE_CONJ_INPLACE )
void magmablasf_ctranspose_conj_inplace(
    magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda )
{
    magmablas_ctranspose_conj_inplace(
        *n,
        magma_cdevptr(dA), *ldda );
}

#define magmablasf_ctranspose FORTRAN_NAME( magmablasf_ctranspose, MAGMABLASF_CTRANSPOSE )
void magmablasf_ctranspose(
    magma_int_t *m, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dAT, magma_int_t *lddat )
{
    magmablas_ctranspose(
        *m, *n,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dAT), *lddat );
}

#define magmablasf_ctranspose_conj FORTRAN_NAME( magmablasf_ctranspose_conj, MAGMABLASF_CTRANSPOSE_CONJ )
void magmablasf_ctranspose_conj(
    magma_int_t *m, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dAT, magma_int_t *lddat )
{
    magmablas_ctranspose_conj(
        *m, *n,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dAT), *lddat );
}

#define magmablasf_cgetmatrix_transpose FORTRAN_NAME( magmablasf_cgetmatrix_transpose, MAGMABLASF_CGETMATRIX_TRANSPOSE )
void magmablasf_cgetmatrix_transpose(
    magma_int_t *m, magma_int_t *n,
    devptr_t *dAT, magma_int_t *ldda,
    magmaFloatComplex *hA, magma_int_t *lda,
    devptr_t *dwork, magma_int_t *lddwork, magma_int_t *nb )
{
    magmablas_cgetmatrix_transpose(
        *m, *n,
        magma_cdevptr(dAT), *ldda,
        hA, *lda,
        magma_cdevptr(dwork), *lddwork, *nb );
}

#define magmablasf_csetmatrix_transpose FORTRAN_NAME( magmablasf_csetmatrix_transpose, MAGMABLASF_CSETMATRIX_TRANSPOSE )
void magmablasf_csetmatrix_transpose(
    magma_int_t *m, magma_int_t *n,
    magmaFloatComplex *hA, magma_int_t *lda,
    devptr_t *dAT, magma_int_t *ldda,
    devptr_t *dwork, magma_int_t *lddwork, magma_int_t *nb )
{
    magmablas_csetmatrix_transpose(
        *m, *n,
        hA, *lda,
        magma_cdevptr(dAT), *ldda,
        magma_cdevptr(dwork), *lddwork, *nb );
}

#define magmablasf_cprbt FORTRAN_NAME( magmablasf_cprbt, MAGMABLASF_CPRBT )
void magmablasf_cprbt(
    magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *du,
    devptr_t *dv )
{
    magmablas_cprbt(
        *n,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(du),
        magma_cdevptr(dv) );
}

#define magmablasf_cprbt_mv FORTRAN_NAME( magmablasf_cprbt_mv, MAGMABLASF_CPRBT_MV )
void magmablasf_cprbt_mv(
    magma_int_t *n,
    devptr_t *dv,
    devptr_t *db )
{
    magmablas_cprbt_mv(
        *n,
        magma_cdevptr(dv),
        magma_cdevptr(db) );
}

#define magmablasf_cprbt_mtv FORTRAN_NAME( magmablasf_cprbt_mtv, MAGMABLASF_CPRBT_MTV )
void magmablasf_cprbt_mtv(
    magma_int_t *n,
    devptr_t *du,
    devptr_t *db )
{
    magmablas_cprbt_mtv(
        *n,
        magma_cdevptr(du),
        magma_cdevptr(db) );
}

#define magmablasf_cgeadd FORTRAN_NAME( magmablasf_cgeadd, MAGMABLASF_CGEADD )
void magmablasf_cgeadd(
    magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb )
{
    magmablas_cgeadd(
        *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb );
}

#define magmablasf_clacpy FORTRAN_NAME( magmablasf_clacpy, MAGMABLASF_CLACPY )
void magmablasf_clacpy(
    const char* uplo, magma_int_t *m, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb )
{
    magmablas_clacpy(
        magma_uplo_const(*uplo), *m, *n,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb );
}

#define magmablasf_clacpy_cnjg FORTRAN_NAME( magmablasf_clacpy_cnjg, MAGMABLASF_CLACPY_CNJG )
void magmablasf_clacpy_cnjg(
    magma_int_t *n,
    devptr_t *dA1, magma_int_t *lda1,
    devptr_t *dA2, magma_int_t *lda2 )
{
    magmablas_clacpy_cnjg(
        *n,
        magma_cdevptr(dA1), *lda1,
        magma_cdevptr(dA2), *lda2 );
}

#define magmablasf_clacpy_sym_in FORTRAN_NAME( magmablasf_clacpy_sym_in, MAGMABLASF_CLACPY_SYM_IN )
void magmablasf_clacpy_sym_in(
    const char* uplo, magma_int_t *m, magma_int_t *n,
    magma_int_t *rows,
    magma_int_t *perm,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb )
{
    magmablas_clacpy_sym_in(
        magma_uplo_const(*uplo), *m, *n,
        rows,
        perm,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb );
}

#define magmablasf_clacpy_sym_out FORTRAN_NAME( magmablasf_clacpy_sym_out, MAGMABLASF_CLACPY_SYM_OUT )
void magmablasf_clacpy_sym_out(
    const char* uplo, magma_int_t *m, magma_int_t *n,
    magma_int_t *rows,
    magma_int_t *perm,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb )
{
    magmablas_clacpy_sym_out(
        magma_uplo_const(*uplo), *m, *n,
        rows,
        perm,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb );
}

#define magmablasf_clascl FORTRAN_NAME( magmablasf_clascl, MAGMABLASF_CLASCL )
void magmablasf_clascl(
    const char* type, magma_int_t *kl, magma_int_t *ku, float *cfrom, float *cto, magma_int_t *m, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    magma_int_t *info )
{
    magmablas_clascl(
        magma_uplo_const(*type), *kl, *ku, *cfrom, *cto, *m, *n,
        magma_cdevptr(dA), *ldda,
        info );
}

#define magmablasf_clascl_2x2 FORTRAN_NAME( magmablasf_clascl_2x2, MAGMABLASF_CLASCL_2X2 )
void magmablasf_clascl_2x2(
    const char* type, magma_int_t *m,
    devptr_t *dW, magma_int_t *lddw,
    devptr_t *dA, magma_int_t *ldda,
    magma_int_t *info )
{
    magmablas_clascl_2x2(
        magma_uplo_const(*type), *m,
        magma_cdevptr(dW), *lddw,
        magma_cdevptr(dA), *ldda,
        info );
}

#define magmablasf_clascl2 FORTRAN_NAME( magmablasf_clascl2, MAGMABLASF_CLASCL2 )
void magmablasf_clascl2(
    const char* type, magma_int_t *m, magma_int_t *n,
    devptr_t *dD,
    devptr_t *dA, magma_int_t *ldda,
    magma_int_t *info )
{
    magmablas_clascl2(
        magma_uplo_const(*type), *m, *n,
        magma_sdevptr(dD),
        magma_cdevptr(dA), *ldda,
        info );
}

#define magmablasf_clascl_diag FORTRAN_NAME( magmablasf_clascl_diag, MAGMABLASF_CLASCL_DIAG )
void magmablasf_clascl_diag(
    const char* type, magma_int_t *m, magma_int_t *n,
    devptr_t *dD, magma_int_t *lddd,
    devptr_t *dA, magma_int_t *ldda,
    magma_int_t *info )
{
    magmablas_clascl_diag(
        magma_uplo_const(*type), *m, *n,
        magma_cdevptr(dD), *lddd,
        magma_cdevptr(dA), *ldda,
        info );
}

#define magmablasf_claset FORTRAN_NAME( magmablasf_claset, MAGMABLASF_CLASET )
void magmablasf_claset(
    const char* uplo, magma_int_t *m, magma_int_t *n, magmaFloatComplex *offdiag, magmaFloatComplex *diag,
    devptr_t *dA, magma_int_t *ldda )
{
    magmablas_claset(
        magma_uplo_const(*uplo), *m, *n, *offdiag, *diag,
        magma_cdevptr(dA), *ldda );
}

#define magmablasf_claset_band FORTRAN_NAME( magmablasf_claset_band, MAGMABLASF_CLASET_BAND )
void magmablasf_claset_band(
    const char* uplo, magma_int_t *m, magma_int_t *n, magma_int_t *k, magmaFloatComplex *offdiag, magmaFloatComplex *diag,
    devptr_t *dA, magma_int_t *ldda )
{
    magmablas_claset_band(
        magma_uplo_const(*uplo), *m, *n, *k, *offdiag, *diag,
        magma_cdevptr(dA), *ldda );
}

#define magmablasf_claswp FORTRAN_NAME( magmablasf_claswp, MAGMABLASF_CLASWP )
void magmablasf_claswp(
    magma_int_t *n,
    devptr_t *dAT, magma_int_t *ldda, magma_int_t *k1, magma_int_t *k2,
    magma_int_t *ipiv, magma_int_t *inci )
{
    magmablas_claswp(
        *n,
        magma_cdevptr(dAT), *ldda, *k1, *k2,
        ipiv, *inci );
}

#define magmablasf_claswp2 FORTRAN_NAME( magmablasf_claswp2, MAGMABLASF_CLASWP2 )
void magmablasf_claswp2(
    magma_int_t *n,
    devptr_t *dAT, magma_int_t *ldda, magma_int_t *k1, magma_int_t *k2,
    devptr_t *d_ipiv, magma_int_t *inci )
{
    magmablas_claswp2(
        *n,
        magma_cdevptr(dAT), *ldda, *k1, *k2,
        magma_idevptr(d_ipiv), *inci );
}

#define magmablasf_claswp_sym FORTRAN_NAME( magmablasf_claswp_sym, MAGMABLASF_CLASWP_SYM )
void magmablasf_claswp_sym(
    magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda, magma_int_t *k1, magma_int_t *k2,
    magma_int_t *ipiv, magma_int_t *inci )
{
    magmablas_claswp_sym(
        *n,
        magma_cdevptr(dA), *ldda, *k1, *k2,
        ipiv, *inci );
}

#define magmablasf_claswpx FORTRAN_NAME( magmablasf_claswpx, MAGMABLASF_CLASWPX )
void magmablasf_claswpx(
    magma_int_t *n,
    devptr_t *dA, magma_int_t *ldx, magma_int_t *ldy, magma_int_t *k1, magma_int_t *k2,
    magma_int_t *ipiv, magma_int_t *inci )
{
    magmablas_claswpx(
        *n,
        magma_cdevptr(dA), *ldx, *ldy, *k1, *k2,
        ipiv, *inci );
}

#define magmablasf_csymmetrize FORTRAN_NAME( magmablasf_csymmetrize, MAGMABLASF_CSYMMETRIZE )
void magmablasf_csymmetrize(
    const char* uplo, magma_int_t *m,
    devptr_t *dA, magma_int_t *ldda )
{
    magmablas_csymmetrize(
        magma_uplo_const(*uplo), *m,
        magma_cdevptr(dA), *ldda );
}

#define magmablasf_csymmetrize_tiles FORTRAN_NAME( magmablasf_csymmetrize_tiles, MAGMABLASF_CSYMMETRIZE_TILES )
void magmablasf_csymmetrize_tiles(
    const char* uplo, magma_int_t *m,
    devptr_t *dA, magma_int_t *ldda, magma_int_t *ntile, magma_int_t *mstride, magma_int_t *nstride )
{
    magmablas_csymmetrize_tiles(
        magma_uplo_const(*uplo), *m,
        magma_cdevptr(dA), *ldda, *ntile, *mstride, *nstride );
}

#define magmablasf_ctrtri_diag FORTRAN_NAME( magmablasf_ctrtri_diag, MAGMABLASF_CTRTRI_DIAG )
void magmablasf_ctrtri_diag(
    const char* uplo, const char* diag, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *d_dinvA )
{
    magmablas_ctrtri_diag(
        magma_uplo_const(*uplo), magma_diag_const(*diag), *n,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(d_dinvA) );
}

#define magmablasf_scnrm2_adjust FORTRAN_NAME( magmablasf_scnrm2_adjust, MAGMABLASF_SCNRM2_ADJUST )
void magmablasf_scnrm2_adjust(
    magma_int_t *k,
    devptr_t *dxnorm,
    devptr_t *dc )
{
    magmablas_scnrm2_adjust(
        *k,
        magma_sdevptr(dxnorm),
        magma_cdevptr(dc) );
}

#define magmablasf_scnrm2_check FORTRAN_NAME( magmablasf_scnrm2_check, MAGMABLASF_SCNRM2_CHECK )
void magmablasf_scnrm2_check(
    magma_int_t *m, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dxnorm,
    devptr_t *dlsticc )
{
    magmablas_scnrm2_check(
        *m, *n,
        magma_cdevptr(dA), *ldda,
        magma_sdevptr(dxnorm),
        magma_sdevptr(dlsticc) );
}

#define magmablasf_scnrm2_cols FORTRAN_NAME( magmablasf_scnrm2_cols, MAGMABLASF_SCNRM2_COLS )
void magmablasf_scnrm2_cols(
    magma_int_t *m, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dxnorm )
{
    magmablas_scnrm2_cols(
        *m, *n,
        magma_cdevptr(dA), *ldda,
        magma_sdevptr(dxnorm) );
}

#define magmablasf_scnrm2_row_check_adjust FORTRAN_NAME( magmablasf_scnrm2_row_check_adjust, MAGMABLASF_SCNRM2_ROW_CHECK_ADJUST )
void magmablasf_scnrm2_row_check_adjust(
    magma_int_t *k, float *tol,
    devptr_t *dxnorm,
    devptr_t *dxnorm2,
    devptr_t *dC, magma_int_t *lddc,
    devptr_t *dlsticc )
{
    magmablas_scnrm2_row_check_adjust(
        *k, *tol,
        magma_sdevptr(dxnorm),
        magma_sdevptr(dxnorm2),
        magma_cdevptr(dC), *lddc,
        magma_sdevptr(dlsticc) );
}

#define magmaf_clarfbx_gpu FORTRAN_NAME( magmaf_clarfbx_gpu, MAGMAF_CLARFBX_GPU )
void magmaf_clarfbx_gpu(
    magma_int_t *m, magma_int_t *k,
    devptr_t *V, magma_int_t *ldv,
    devptr_t *dT, magma_int_t *ldt,
    devptr_t *c,
    devptr_t *dwork )
{
    magma_clarfbx_gpu(
        *m, *k,
        magma_cdevptr(V), *ldv,
        magma_cdevptr(dT), *ldt,
        magma_cdevptr(c),
        magma_cdevptr(dwork) );
}

#define magmaf_clarfgtx_gpu FORTRAN_NAME( magmaf_clarfgtx_gpu, MAGMAF_CLARFGTX_GPU )
void magmaf_clarfgtx_gpu(
    magma_int_t *n,
    devptr_t *dx0,
    devptr_t *dx,
    devptr_t *dtau,
    devptr_t *dxnorm,
    devptr_t *dA, magma_int_t *iter,
    devptr_t *V, magma_int_t *ldv,
    devptr_t *T, magma_int_t *ldt,
    devptr_t *dwork )
{
    magma_clarfgtx_gpu(
        *n,
        magma_cdevptr(dx0),
        magma_cdevptr(dx),
        magma_cdevptr(dtau),
        magma_sdevptr(dxnorm),
        magma_cdevptr(dA), *iter,
        magma_cdevptr(V), *ldv,
        magma_cdevptr(T), *ldt,
        magma_cdevptr(dwork) );
}

#define magmaf_clarfgx_gpu FORTRAN_NAME( magmaf_clarfgx_gpu, MAGMAF_CLARFGX_GPU )
void magmaf_clarfgx_gpu(
    magma_int_t *n,
    devptr_t *dx0,
    devptr_t *dx,
    devptr_t *dtau,
    devptr_t *dxnorm,
    devptr_t *dA, magma_int_t *iter )
{
    magma_clarfgx_gpu(
        *n,
        magma_cdevptr(dx0),
        magma_cdevptr(dx),
        magma_cdevptr(dtau),
        magma_sdevptr(dxnorm),
        magma_cdevptr(dA), *iter );
}

#define magmaf_clarfx_gpu FORTRAN_NAME( magmaf_clarfx_gpu, MAGMAF_CLARFX_GPU )
void magmaf_clarfx_gpu(
    magma_int_t *m, magma_int_t *n,
    devptr_t *v,
    devptr_t *tau,
    devptr_t *C, magma_int_t *ldc,
    devptr_t *xnorm,
    devptr_t *dT, magma_int_t *iter,
    devptr_t *work )
{
    magma_clarfx_gpu(
        *m, *n,
        magma_cdevptr(v),
        magma_cdevptr(tau),
        magma_cdevptr(C), *ldc,
        magma_sdevptr(xnorm),
        magma_cdevptr(dT), *iter,
        magma_cdevptr(work) );
}

#define magmablasf_caxpycp FORTRAN_NAME( magmablasf_caxpycp, MAGMABLASF_CAXPYCP )
void magmablasf_caxpycp(
    magma_int_t *m,
    devptr_t *dr,
    devptr_t *dx,
    devptr_t *db )
{
    magmablas_caxpycp(
        *m,
        magma_cdevptr(dr),
        magma_cdevptr(dx),
        magma_cdevptr(db) );
}

#define magmablasf_cswap FORTRAN_NAME( magmablasf_cswap, MAGMABLASF_CSWAP )
void magmablasf_cswap(
    magma_int_t *n,
    devptr_t *dx, magma_int_t *incx,
    devptr_t *dy, magma_int_t *incy )
{
    magmablas_cswap(
        *n,
        magma_cdevptr(dx), *incx,
        magma_cdevptr(dy), *incy );
}

#define magmablasf_cswapblk FORTRAN_NAME( magmablasf_cswapblk, MAGMABLASF_CSWAPBLK )
void magmablasf_cswapblk(
    const char* order, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb, magma_int_t *i1, magma_int_t *i2,
    magma_int_t *ipiv, magma_int_t *inci, magma_int_t *offset )
{
    magmablas_cswapblk(
        magma_order_const(*order), *n,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb, *i1, *i2,
        ipiv, *inci, *offset );
}

#define magmablasf_cswapdblk FORTRAN_NAME( magmablasf_cswapdblk, MAGMABLASF_CSWAPDBLK )
void magmablasf_cswapdblk(
    magma_int_t *n, magma_int_t *nb,
    devptr_t *dA, magma_int_t *ldda, magma_int_t *inca,
    devptr_t *dB, magma_int_t *lddb, magma_int_t *incb )
{
    magmablas_cswapdblk(
        *n, *nb,
        magma_cdevptr(dA), *ldda, *inca,
        magma_cdevptr(dB), *lddb, *incb );
}

#define magmablasf_ctrsv FORTRAN_NAME( magmablasf_ctrsv, MAGMABLASF_CTRSV )
void magmablasf_ctrsv(
    const char* uplo, const char* transA, const char* diag, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *db, magma_int_t *incb, magma_queue_t *queue )
{
    magmablas_ctrsv(
        magma_uplo_const(*uplo), magma_trans_const(*transA), magma_diag_const(*diag), *n,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(db), *incb, *queue );
}

#define magmablasf_ctrsv_outofplace FORTRAN_NAME( magmablasf_ctrsv_outofplace, MAGMABLASF_CTRSV_OUTOFPLACE )
void magmablasf_ctrsv_outofplace(
    const char* uplo, const char* transA, const char* diag, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *db, magma_int_t *incb,
    devptr_t *dx, magma_queue_t *queue, magma_int_t *flag )
{
    magmablas_ctrsv_outofplace(
        magma_uplo_const(*uplo), magma_trans_const(*transA), magma_diag_const(*diag), *n,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(db), *incb,
        magma_cdevptr(dx), *queue, *flag );
}

#define magmablasf_cgemv_q FORTRAN_NAME( magmablasf_cgemv_q, MAGMABLASF_CGEMV_Q )
void magmablasf_cgemv_q(
    const char* trans, magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx, magmaFloatComplex *beta,
    devptr_t *dy, magma_int_t *incy, magma_queue_t *queue )
{
    magmablas_cgemv_q(
        magma_trans_const(*trans), *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx, *beta,
        magma_cdevptr(dy), *incy, *queue );
}

#define magmablasf_cgemv FORTRAN_NAME( magmablasf_cgemv, MAGMABLASF_CGEMV )
void magmablasf_cgemv(
    const char* trans, magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx, magmaFloatComplex *beta,
    devptr_t *dy, magma_int_t *incy )
{
    magmablas_cgemv(
        magma_trans_const(*trans), *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx, *beta,
        magma_cdevptr(dy), *incy );
}

#define magmablasf_cgemv_conjv FORTRAN_NAME( magmablasf_cgemv_conjv, MAGMABLASF_CGEMV_CONJV )
void magmablasf_cgemv_conjv(
    magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx, magmaFloatComplex *beta,
    devptr_t *dy, magma_int_t *incy )
{
    magmablas_cgemv_conjv(
        *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx, *beta,
        magma_cdevptr(dy), *incy );
}

#define magmablasf_chemv FORTRAN_NAME( magmablasf_chemv, MAGMABLASF_CHEMV )
void magmablasf_chemv(
    const char* uplo, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx, magmaFloatComplex *beta,
    devptr_t *dy, magma_int_t *incy )
{
    magmablas_chemv(
        magma_uplo_const(*uplo), *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx, *beta,
        magma_cdevptr(dy), *incy );
}

#define magmablasf_csymv FORTRAN_NAME( magmablasf_csymv, MAGMABLASF_CSYMV )
void magmablasf_csymv(
    const char* uplo, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx, magmaFloatComplex *beta,
    devptr_t *dy, magma_int_t *incy )
{
    magmablas_csymv(
        magma_uplo_const(*uplo), *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx, *beta,
        magma_cdevptr(dy), *incy );
}

#define magmablasf_chemv_work FORTRAN_NAME( magmablasf_chemv_work, MAGMABLASF_CHEMV_WORK )
void magmablasf_chemv_work(
    const char* uplo, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx, magmaFloatComplex *beta,
    devptr_t *dy, magma_int_t *incy,
    devptr_t *dwork, magma_int_t *lwork, magma_queue_t *queue )
{
    magmablas_chemv_work(
        magma_uplo_const(*uplo), *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx, *beta,
        magma_cdevptr(dy), *incy,
        magma_cdevptr(dwork), *lwork, *queue );
}

#define magmablasf_csymv_work FORTRAN_NAME( magmablasf_csymv_work, MAGMABLASF_CSYMV_WORK )
void magmablasf_csymv_work(
    const char* uplo, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx, magmaFloatComplex *beta,
    devptr_t *dy, magma_int_t *incy,
    devptr_t *dwork, magma_int_t *lwork, magma_queue_t *queue )
{
    magmablas_csymv_work(
        magma_uplo_const(*uplo), *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx, *beta,
        magma_cdevptr(dy), *incy,
        magma_cdevptr(dwork), *lwork, *queue );
}

#define magmablasf_cgemm FORTRAN_NAME( magmablasf_cgemm, MAGMABLASF_CGEMM )
void magmablasf_cgemm(
    const char* transA, const char* transB, magma_int_t *m, magma_int_t *n, magma_int_t *k, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb, magmaFloatComplex *beta,
    devptr_t *dC, magma_int_t *lddc )
{
    magmablas_cgemm(
        magma_trans_const(*transA), magma_trans_const(*transB), *m, *n, *k, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb, *beta,
        magma_cdevptr(dC), *lddc );
}

#define magmablasf_cgemm_reduce FORTRAN_NAME( magmablasf_cgemm_reduce, MAGMABLASF_CGEMM_REDUCE )
void magmablasf_cgemm_reduce(
    magma_int_t *m, magma_int_t *n, magma_int_t *k, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb, magmaFloatComplex *beta,
    devptr_t *dC, magma_int_t *lddc )
{
    magmablas_cgemm_reduce(
        *m, *n, *k, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb, *beta,
        magma_cdevptr(dC), *lddc );
}

#define magmablasf_ctrsm FORTRAN_NAME( magmablasf_ctrsm, MAGMABLASF_CTRSM )
void magmablasf_ctrsm(
    const char* side, const char* uplo, const char* transA, const char* diag, magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb )
{
    magmablas_ctrsm(
        magma_side_const(*side), magma_uplo_const(*uplo), magma_trans_const(*transA), magma_diag_const(*diag), *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb );
}

#define magmablasf_ctrsm_outofplace FORTRAN_NAME( magmablasf_ctrsm_outofplace, MAGMABLASF_CTRSM_OUTOFPLACE )
void magmablasf_ctrsm_outofplace(
    const char* side, const char* uplo, const char* transA, const char* diag, magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb,
    devptr_t *dX, magma_int_t *lddx, magma_int_t *flag,
    devptr_t *d_dinvA, magma_int_t *dinvA_length )
{
    magmablas_ctrsm_outofplace(
        magma_side_const(*side), magma_uplo_const(*uplo), magma_trans_const(*transA), magma_diag_const(*diag), *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb,
        magma_cdevptr(dX), *lddx, *flag,
        magma_cdevptr(d_dinvA), *dinvA_length );
}

#define magmablasf_ctrsm_work FORTRAN_NAME( magmablasf_ctrsm_work, MAGMABLASF_CTRSM_WORK )
void magmablasf_ctrsm_work(
    const char* side, const char* uplo, const char* transA, const char* diag, magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb,
    devptr_t *dX, magma_int_t *lddx, magma_int_t *flag,
    devptr_t *d_dinvA, magma_int_t *dinvA_length )
{
    magmablas_ctrsm_work(
        magma_side_const(*side), magma_uplo_const(*uplo), magma_trans_const(*transA), magma_diag_const(*diag), *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb,
        magma_cdevptr(dX), *lddx, *flag,
        magma_cdevptr(d_dinvA), *dinvA_length );
}

#define magmaf_csetvector FORTRAN_NAME( magmaf_csetvector, MAGMAF_CSETVECTOR )
void magmaf_csetvector(
    magma_int_t *n,
    magmaFloatComplex *hx_src, magma_int_t *incx,
    devptr_t *dy_dst, magma_int_t *incy )
{
    magma_csetvector(
        *n,
        hx_src, *incx,
        magma_cdevptr(dy_dst), *incy );
}

#define magmaf_cgetvector FORTRAN_NAME( magmaf_cgetvector, MAGMAF_CGETVECTOR )
void magmaf_cgetvector(
    magma_int_t *n,
    devptr_t *dx_src, magma_int_t *incx,
    magmaFloatComplex *hy_dst, magma_int_t *incy )
{
    magma_cgetvector(
        *n,
        magma_cdevptr(dx_src), *incx,
        hy_dst, *incy );
}

#define magmaf_ccopyvector FORTRAN_NAME( magmaf_ccopyvector, MAGMAF_CCOPYVECTOR )
void magmaf_ccopyvector(
    magma_int_t *n,
    devptr_t *dx_src, magma_int_t *incx,
    devptr_t *dy_dst, magma_int_t *incy )
{
    magma_ccopyvector(
        *n,
        magma_cdevptr(dx_src), *incx,
        magma_cdevptr(dy_dst), *incy );
}

#define magmaf_csetvector_async FORTRAN_NAME( magmaf_csetvector_async, MAGMAF_CSETVECTOR_ASYNC )
void magmaf_csetvector_async(
    magma_int_t *n,
    magmaFloatComplex *hx_src, magma_int_t *incx,
    devptr_t *dy_dst, magma_int_t *incy, magma_queue_t *queue )
{
    magma_csetvector_async(
        *n,
        hx_src, *incx,
        magma_cdevptr(dy_dst), *incy, *queue );
}

#define magmaf_cgetvector_async FORTRAN_NAME( magmaf_cgetvector_async, MAGMAF_CGETVECTOR_ASYNC )
void magmaf_cgetvector_async(
    magma_int_t *n,
    devptr_t *dx_src, magma_int_t *incx,
    magmaFloatComplex *hy_dst, magma_int_t *incy, magma_queue_t *queue )
{
    magma_cgetvector_async(
        *n,
        magma_cdevptr(dx_src), *incx,
        hy_dst, *incy, *queue );
}

#define magmaf_ccopyvector_async FORTRAN_NAME( magmaf_ccopyvector_async, MAGMAF_CCOPYVECTOR_ASYNC )
void magmaf_ccopyvector_async(
    magma_int_t *n,
    devptr_t *dx_src, magma_int_t *incx,
    devptr_t *dy_dst, magma_int_t *incy, magma_queue_t *queue )
{
    magma_ccopyvector_async(
        *n,
        magma_cdevptr(dx_src), *incx,
        magma_cdevptr(dy_dst), *incy, *queue );
}

#define magmaf_csetmatrix FORTRAN_NAME( magmaf_csetmatrix, MAGMAF_CSETMATRIX )
void magmaf_csetmatrix(
    magma_int_t *m, magma_int_t *n,
    magmaFloatComplex *hA_src, magma_int_t *ldha,
    devptr_t *dB_dst, magma_int_t *lddb )
{
    magma_csetmatrix(
        *m, *n,
        hA_src, *ldha,
        magma_cdevptr(dB_dst), *lddb );
}

#define magmaf_cgetmatrix FORTRAN_NAME( magmaf_cgetmatrix, MAGMAF_CGETMATRIX )
void magmaf_cgetmatrix(
    magma_int_t *m, magma_int_t *n,
    devptr_t *dA_src, magma_int_t *ldda,
    magmaFloatComplex *hB_dst, magma_int_t *ldhb )
{
    magma_cgetmatrix(
        *m, *n,
        magma_cdevptr(dA_src), *ldda,
        hB_dst, *ldhb );
}

#define magmaf_ccopymatrix FORTRAN_NAME( magmaf_ccopymatrix, MAGMAF_CCOPYMATRIX )
void magmaf_ccopymatrix(
    magma_int_t *m, magma_int_t *n,
    devptr_t *dA_src, magma_int_t *ldda,
    devptr_t *dB_dst, magma_int_t *lddb )
{
    magma_ccopymatrix(
        *m, *n,
        magma_cdevptr(dA_src), *ldda,
        magma_cdevptr(dB_dst), *lddb );
}

#define magmaf_csetmatrix_async FORTRAN_NAME( magmaf_csetmatrix_async, MAGMAF_CSETMATRIX_ASYNC )
void magmaf_csetmatrix_async(
    magma_int_t *m, magma_int_t *n,
    magmaFloatComplex *hA_src, magma_int_t *ldha,
    devptr_t *dB_dst, magma_int_t *lddb, magma_queue_t *queue )
{
    magma_csetmatrix_async(
        *m, *n,
        hA_src, *ldha,
        magma_cdevptr(dB_dst), *lddb, *queue );
}

#define magmaf_cgetmatrix_async FORTRAN_NAME( magmaf_cgetmatrix_async, MAGMAF_CGETMATRIX_ASYNC )
void magmaf_cgetmatrix_async(
    magma_int_t *m, magma_int_t *n,
    devptr_t *dA_src, magma_int_t *ldda,
    magmaFloatComplex *hB_dst, magma_int_t *ldhb, magma_queue_t *queue )
{
    magma_cgetmatrix_async(
        *m, *n,
        magma_cdevptr(dA_src), *ldda,
        hB_dst, *ldhb, *queue );
}

#define magmaf_ccopymatrix_async FORTRAN_NAME( magmaf_ccopymatrix_async, MAGMAF_CCOPYMATRIX_ASYNC )
void magmaf_ccopymatrix_async(
    magma_int_t *m, magma_int_t *n,
    devptr_t *dA_src, magma_int_t *ldda,
    devptr_t *dB_dst, magma_int_t *lddb, magma_queue_t *queue )
{
    magma_ccopymatrix_async(
        *m, *n,
        magma_cdevptr(dA_src), *ldda,
        magma_cdevptr(dB_dst), *lddb, *queue );
}

#define magmaf_icamax FORTRAN_NAME( magmaf_icamax, MAGMAF_ICAMAX )
void magmaf_icamax(
    magma_int_t *n,
    devptr_t *dx, magma_int_t *incx )
{
    magma_icamax(
        *n,
        magma_cdevptr(dx), *incx );
}

#define magmaf_icamin FORTRAN_NAME( magmaf_icamin, MAGMAF_ICAMIN )
void magmaf_icamin(
    magma_int_t *n,
    devptr_t *dx, magma_int_t *incx )
{
    magma_icamin(
        *n,
        magma_cdevptr(dx), *incx );
}

#define magmaf_caxpy FORTRAN_NAME( magmaf_caxpy, MAGMAF_CAXPY )
void magmaf_caxpy(
    magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dx, magma_int_t *incx,
    devptr_t *dy, magma_int_t *incy )
{
    magma_caxpy(
        *n, *alpha,
        magma_cdevptr(dx), *incx,
        magma_cdevptr(dy), *incy );
}

#define magmaf_ccopy FORTRAN_NAME( magmaf_ccopy, MAGMAF_CCOPY )
void magmaf_ccopy(
    magma_int_t *n,
    devptr_t *dx, magma_int_t *incx,
    devptr_t *dy, magma_int_t *incy )
{
    magma_ccopy(
        *n,
        magma_cdevptr(dx), *incx,
        magma_cdevptr(dy), *incy );
}

#define magmaf_crot FORTRAN_NAME( magmaf_crot, MAGMAF_CROT )
void magmaf_crot(
    magma_int_t *n,
    devptr_t *dx, magma_int_t *incx,
    devptr_t *dy, magma_int_t *incy, float *dc, magmaFloatComplex *ds )
{
    magma_crot(
        *n,
        magma_cdevptr(dx), *incx,
        magma_cdevptr(dy), *incy, *dc, *ds );
}

#define magmaf_csrot FORTRAN_NAME( magmaf_csrot, MAGMAF_CSROT )
void magmaf_csrot(
    magma_int_t *n,
    devptr_t *dx, magma_int_t *incx,
    devptr_t *dy, magma_int_t *incy, float *dc, float *ds )
{
    magma_csrot(
        *n,
        magma_cdevptr(dx), *incx,
        magma_cdevptr(dy), *incy, *dc, *ds );
}

#define magmaf_cscal FORTRAN_NAME( magmaf_cscal, MAGMAF_CSCAL )
void magmaf_cscal(
    magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dx, magma_int_t *incx )
{
    magma_cscal(
        *n, *alpha,
        magma_cdevptr(dx), *incx );
}

#define magmaf_csscal FORTRAN_NAME( magmaf_csscal, MAGMAF_CSSCAL )
void magmaf_csscal(
    magma_int_t *n, float *alpha,
    devptr_t *dx, magma_int_t *incx )
{
    magma_csscal(
        *n, *alpha,
        magma_cdevptr(dx), *incx );
}

#define magmaf_cswap FORTRAN_NAME( magmaf_cswap, MAGMAF_CSWAP )
void magmaf_cswap(
    magma_int_t *n,
    devptr_t *dx, magma_int_t *incx,
    devptr_t *dy, magma_int_t *incy )
{
    magma_cswap(
        *n,
        magma_cdevptr(dx), *incx,
        magma_cdevptr(dy), *incy );
}

#define magmaf_cgemv FORTRAN_NAME( magmaf_cgemv, MAGMAF_CGEMV )
void magmaf_cgemv(
    const char* transA, magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx, magmaFloatComplex *beta,
    devptr_t *dy, magma_int_t *incy )
{
    magma_cgemv(
        magma_trans_const(*transA), *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx, *beta,
        magma_cdevptr(dy), *incy );
}

#define magmaf_cgerc FORTRAN_NAME( magmaf_cgerc, MAGMAF_CGERC )
void magmaf_cgerc(
    magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dx, magma_int_t *incx,
    devptr_t *dy, magma_int_t *incy,
    devptr_t *dA, magma_int_t *ldda )
{
    magma_cgerc(
        *m, *n, *alpha,
        magma_cdevptr(dx), *incx,
        magma_cdevptr(dy), *incy,
        magma_cdevptr(dA), *ldda );
}

#define magmaf_cgeru FORTRAN_NAME( magmaf_cgeru, MAGMAF_CGERU )
void magmaf_cgeru(
    magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dx, magma_int_t *incx,
    devptr_t *dy, magma_int_t *incy,
    devptr_t *dA, magma_int_t *ldda )
{
    magma_cgeru(
        *m, *n, *alpha,
        magma_cdevptr(dx), *incx,
        magma_cdevptr(dy), *incy,
        magma_cdevptr(dA), *ldda );
}

#define magmaf_chemv FORTRAN_NAME( magmaf_chemv, MAGMAF_CHEMV )
void magmaf_chemv(
    const char* uplo, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx, magmaFloatComplex *beta,
    devptr_t *dy, magma_int_t *incy )
{
    magma_chemv(
        magma_uplo_const(*uplo), *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx, *beta,
        magma_cdevptr(dy), *incy );
}

#define magmaf_cher FORTRAN_NAME( magmaf_cher, MAGMAF_CHER )
void magmaf_cher(
    const char* uplo, magma_int_t *n, float *alpha,
    devptr_t *dx, magma_int_t *incx,
    devptr_t *dA, magma_int_t *ldda )
{
    magma_cher(
        magma_uplo_const(*uplo), *n, *alpha,
        magma_cdevptr(dx), *incx,
        magma_cdevptr(dA), *ldda );
}

#define magmaf_cher2 FORTRAN_NAME( magmaf_cher2, MAGMAF_CHER2 )
void magmaf_cher2(
    const char* uplo, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dx, magma_int_t *incx,
    devptr_t *dy, magma_int_t *incy,
    devptr_t *dA, magma_int_t *ldda )
{
    magma_cher2(
        magma_uplo_const(*uplo), *n, *alpha,
        magma_cdevptr(dx), *incx,
        magma_cdevptr(dy), *incy,
        magma_cdevptr(dA), *ldda );
}

#define magmaf_ctrmv FORTRAN_NAME( magmaf_ctrmv, MAGMAF_CTRMV )
void magmaf_ctrmv(
    const char* uplo, const char* trans, const char* diag, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx )
{
    magma_ctrmv(
        magma_uplo_const(*uplo), magma_trans_const(*trans), magma_diag_const(*diag), *n,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx );
}

#define magmaf_ctrsv FORTRAN_NAME( magmaf_ctrsv, MAGMAF_CTRSV )
void magmaf_ctrsv(
    const char* uplo, const char* trans, const char* diag, magma_int_t *n,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dx, magma_int_t *incx )
{
    magma_ctrsv(
        magma_uplo_const(*uplo), magma_trans_const(*trans), magma_diag_const(*diag), *n,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dx), *incx );
}

#define magmaf_cgemm FORTRAN_NAME( magmaf_cgemm, MAGMAF_CGEMM )
void magmaf_cgemm(
    const char* transA, const char* transB, magma_int_t *m, magma_int_t *n, magma_int_t *k, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb, magmaFloatComplex *beta,
    devptr_t *dC, magma_int_t *lddc )
{
    magma_cgemm(
        magma_trans_const(*transA), magma_trans_const(*transB), *m, *n, *k, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb, *beta,
        magma_cdevptr(dC), *lddc );
}

#define magmaf_csymm FORTRAN_NAME( magmaf_csymm, MAGMAF_CSYMM )
void magmaf_csymm(
    const char* side, const char* uplo, magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb, magmaFloatComplex *beta,
    devptr_t *dC, magma_int_t *lddc )
{
    magma_csymm(
        magma_side_const(*side), magma_uplo_const(*uplo), *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb, *beta,
        magma_cdevptr(dC), *lddc );
}

#define magmaf_chemm FORTRAN_NAME( magmaf_chemm, MAGMAF_CHEMM )
void magmaf_chemm(
    const char* side, const char* uplo, magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb, magmaFloatComplex *beta,
    devptr_t *dC, magma_int_t *lddc )
{
    magma_chemm(
        magma_side_const(*side), magma_uplo_const(*uplo), *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb, *beta,
        magma_cdevptr(dC), *lddc );
}

#define magmaf_csyr2k FORTRAN_NAME( magmaf_csyr2k, MAGMAF_CSYR2K )
void magmaf_csyr2k(
    const char* uplo, const char* trans, magma_int_t *n, magma_int_t *k, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb, magmaFloatComplex *beta,
    devptr_t *dC, magma_int_t *lddc )
{
    magma_csyr2k(
        magma_uplo_const(*uplo), magma_trans_const(*trans), *n, *k, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb, *beta,
        magma_cdevptr(dC), *lddc );
}

#define magmaf_cher2k FORTRAN_NAME( magmaf_cher2k, MAGMAF_CHER2K )
void magmaf_cher2k(
    const char* uplo, const char* trans, magma_int_t *n, magma_int_t *k, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb, float *beta,
    devptr_t *dC, magma_int_t *lddc )
{
    magma_cher2k(
        magma_uplo_const(*uplo), magma_trans_const(*trans), *n, *k, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb, *beta,
        magma_cdevptr(dC), *lddc );
}

#define magmaf_csyrk FORTRAN_NAME( magmaf_csyrk, MAGMAF_CSYRK )
void magmaf_csyrk(
    const char* uplo, const char* trans, magma_int_t *n, magma_int_t *k, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda, magmaFloatComplex *beta,
    devptr_t *dC, magma_int_t *lddc )
{
    magma_csyrk(
        magma_uplo_const(*uplo), magma_trans_const(*trans), *n, *k, *alpha,
        magma_cdevptr(dA), *ldda, *beta,
        magma_cdevptr(dC), *lddc );
}

#define magmaf_cherk FORTRAN_NAME( magmaf_cherk, MAGMAF_CHERK )
void magmaf_cherk(
    const char* uplo, const char* trans, magma_int_t *n, magma_int_t *k, float *alpha,
    devptr_t *dA, magma_int_t *ldda, float *beta,
    devptr_t *dC, magma_int_t *lddc )
{
    magma_cherk(
        magma_uplo_const(*uplo), magma_trans_const(*trans), *n, *k, *alpha,
        magma_cdevptr(dA), *ldda, *beta,
        magma_cdevptr(dC), *lddc );
}

#define magmaf_ctrmm FORTRAN_NAME( magmaf_ctrmm, MAGMAF_CTRMM )
void magmaf_ctrmm(
    const char* side, const char* uplo, const char* trans, const char* diag, magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb )
{
    magma_ctrmm(
        magma_side_const(*side), magma_uplo_const(*uplo), magma_trans_const(*trans), magma_diag_const(*diag), *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb );
}

#define magmaf_ctrsm FORTRAN_NAME( magmaf_ctrsm, MAGMAF_CTRSM )
void magmaf_ctrsm(
    const char* side, const char* uplo, const char* trans, const char* diag, magma_int_t *m, magma_int_t *n, magmaFloatComplex *alpha,
    devptr_t *dA, magma_int_t *ldda,
    devptr_t *dB, magma_int_t *lddb )
{
    magma_ctrsm(
        magma_side_const(*side), magma_uplo_const(*uplo), magma_trans_const(*trans), magma_diag_const(*diag), *m, *n, *alpha,
        magma_cdevptr(dA), *ldda,
        magma_cdevptr(dB), *lddb );
}


#ifdef __cplusplus
}
#endif
