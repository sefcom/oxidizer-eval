        __m128 a8)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  bool v16; // bl
  __int64 v17; // rax
  __int64 v18; // r14
  bool v19; // zf
  __int64 v20; // r15
  char v21; // al
  __int64 v22; // rcx
  unsigned __int64 *v23; // rax
  __int64 v24; // r13
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rdx
  bool v30; // cc
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // r15
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  unsigned __int32 v37; // xmm0_4
  __int64 v38; // rcx
  __int64 v39; // r14
  bool v40; // sf
  bool v41; // al
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // al
  __int64 v45; // rcx
  __int16 v46; // dx
  __int128 v47; // xmm0
  unsigned __int8 v49; // [rsp+6h] [rbp-1B2h]
  bool v50; // [rsp+7h] [rbp-1B1h]
  unsigned __int64 v51; // [rsp+8h] [rbp-1B0h]
  char v52[8]; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v53; // [rsp+18h] [rbp-1A0h]
  unsigned __int64 v54; // [rsp+20h] [rbp-198h]
  __int64 v55; // [rsp+28h] [rbp-190h]
  _QWORD *v56; // [rsp+30h] [rbp-188h]
  _QWORD v57[2]; // [rsp+38h] [rbp-180h] BYREF
  __int64 v58; // [rsp+48h] [rbp-170h]
  __int64 v59; // [rsp+50h] [rbp-168h] BYREF
  __int64 v60; // [rsp+58h] [rbp-160h]
  __int64 v61; // [rsp+60h] [rbp-158h]
  char **v62; // [rsp+68h] [rbp-150h]
  __int64 v63; // [rsp+70h] [rbp-148h]
  __int64 v64; // [rsp+78h] [rbp-140h]
  unsigned __int64 v65; // [rsp+80h] [rbp-138h]
  __int64 v66; // [rsp+88h] [rbp-130h]
  __int64 v67; // [rsp+90h] [rbp-128h]
  char v68[8]; // [rsp+98h] [rbp-120h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-118h]
  __int64 v70; // [rsp+A8h] [rbp-110h]
  __int64 v71; // [rsp+B0h] [rbp-108h]
  unsigned __int64 v72; // [rsp+B8h] [rbp-100h]
  __int64 v73; // [rsp+C0h] [rbp-F8h]
  __int64 v74; // [rsp+C8h] [rbp-F0h]
  unsigned __int64 v75; // [rsp+D0h] [rbp-E8h]
  _QWORD v76[2]; // [rsp+D8h] [rbp-E0h] BYREF
  _QWORD v77[2]; // [rsp+E8h] [rbp-D0h] BYREF
  _BYTE v78[16]; // [rsp+F8h] [rbp-C0h] BYREF
  _QWORD v79[4]; // [rsp+108h] [rbp-B0h] BYREF
  unsigned __int32 v80; // [rsp+128h] [rbp-90h]
  __int16 v81; // [rsp+12Ch] [rbp-8Ch]
  __int128 v82; // [rsp+130h] [rbp-88h] BYREF
  _BYTE v83[21]; // [rsp+140h] [rbp-78h]
  char v84; // [rsp+155h] [rbp-63h]
  __int16 v85; // [rsp+156h] [rbp-62h]
  _BYTE v86[88]; // [rsp+160h] [rbp-58h] BYREF

  v71 = a1;
  core::iter::traits::iterator::Iterator::peekable(v77);
  v9 = alloc::alloc::Global::alloc_impl(40LL);
  if ( !v9 )
    alloc::alloc::handle_alloc_error(8LL, 40LL);
  v10 = *(_QWORD *)(a4 + 32);
  *(_OWORD *)v9 = 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 24) = v10;
  *(_DWORD *)(v9 + 32) = 0;
  *(_WORD *)(v9 + 36) = 0;
  alloc::slice::hack::into_vec(v52, v9, 1LL);
  v11 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL);
  if ( !v11 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  *v11 = 0LL;
  alloc::slice::hack::into_vec(v68, v11, 1LL);
  v57[0] = 0LL;
  v57[1] = 8LL;
  v58 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)a4 + 48LL);
  v66 = *(_QWORD *)a4;
  v13 = *(_QWORD *)(v66 + 56);
  v75 = v12;
  v14 = v12 - v13;
  v73 = v13;
  v15 = core::cmp::max_by(v13, v12 - v13 + 1);
  v72 = v14;
  v65 = v15 - v14;
  v59 = 0LL;
  v60 = 8LL;
  v61 = 0LL;
  v49 = *(_BYTE *)(a4 + 48);
  v63 = *(_QWORD *)(a4 + 40);
  v16 = 0;
  v62 = &off_126870;
  v55 = 0LL;
  while ( 1 )
  {
    v18 = v77[1];
    v19 = v77[0] == 0LL;
    v77[0] = 0LL;
    if ( v19 )
      v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v78);
    if ( !v18 )
      break;
    v20 = *(_QWORD *)core::option::Option<T>::get_or_insert_with(v77, v78);
    v21 = 1;
    if ( v20 && !*(_BYTE *)(v20 + 56) )
    {
      if ( *(_BYTE *)(v20 + 58) )
        v21 = *(_BYTE *)(v18 + 57);
      else
        v21 = 0;
    }
    v50 = v21 != 0;
    v56 = (_QWORD *)v18;
    v22 = 0LL;
    if ( v49 | *(_BYTE *)(v18 + 58) )
      v22 = v16 + 1LL;
    v67 = v22;
    v61 = 0LL;
    v58 = 0LL;
    v76[0] = v69;
    v76[1] = v69 + 8 * v70;
    v23 = (unsigned __int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v76);
    if ( v23 )
    {
      v74 = v20;
      v51 = 0LL;
      v24 = 0x7FFFFFFFFFFFFFFFLL;
      v64 = 0x7FFFFFFFFFFFFFFFLL;
      do
      {
        v25 = *v23;
        v26 = v54;
        if ( *v23 >= v54 )
          goto LABEL_45;
        v27 = v24;
        v28 = v53;
        v24 = *(_QWORD *)(v53 + 40 * v25 + 16) - v55;
        v29 = *(_QWORD *)(v53 + 40 * v25 + 24);
        *(_QWORD *)(v53 + 40 * v25 + 16) = v24;
        v30 = v24 < v27;
        if ( v24 >= v27 )
          v24 = v27;
        v31 = v51;
        if ( v30 )
          v31 = v25;
        v51 = v31;
        v32 = v56[5];
        v33 = uu_fmt::linebreak::BreakArgs::compute_width(v66, v56, v29, *(unsigned __int8 *)(v28 + 40 * v25 + 37));
        v34 = v28 + 40 * v25;
        v35 = *(_QWORD *)(v34 + 24) + v32 + v67 + v33;
        if ( v35 <= v75 )
        {
          alloc::vec::Vec<T,A>::push(v57, v25);
          *(_BYTE *)(v34 + 37) = 0;
          *(_QWORD *)(v34 + 24) = v35;
          if ( v35 >= v65 )
          {
            if ( v74 )
            {
              v37 = uu_fmt::linebreak::compute_demerits(
                      v73 - v35,
                      v72,
                      v32,
                      *(float *)(v34 + 32),
                      *(double *)a6.m128_u64,
                      a7,
                      a8).m128_u32[0];
            }
            else
            {
              v37 = 0;
              v36 = 0LL;
            }
            if ( v36 <= 0x5AF3107A3FFFLL )
            {
              v38 = *(_QWORD *)(v34 + 16);
              v39 = v38 + v36;
              if ( v38 + v36 < v64 )
              {
                v40 = v36 < 0;
                v41 = v36 == 0;
                if ( v38 < 0 || (v38 == 0 || !v41) && !v40 )
                {
                  v79[0] = v25;
                  v79[1] = v56;
                  v81 = 256;
                  v79[2] = v39;
                  v80 = v37;
                  v79[3] = v63;
                  alloc::vec::Vec<T,A>::push(&v59, v79);
                  v64 = v39;
                }
              }
            }
          }
        }
        v23 = (unsigned __int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v76);
      }
      while ( v23 );
      v42 = v61;
      if ( v61 )
      {
        --v61;
        v43 = 5 * (v42 - 1);
        v44 = *(_BYTE *)(v60 + 40 * (v42 - 1) + 37);
        if ( v44 != 2 )
        {
          v45 = v60 + 8 * v43;
          v46 = *(_WORD *)(v45 + 38);
          *(_QWORD *)&v83[13] = *(_QWORD *)(v45 + 29);
          v47 = *(_OWORD *)v45;
          a6 = *(__m128 *)(v45 + 16);
          *(__m128 *)v83 = a6;
          v82 = v47;
          v84 = v44;
          v85 = v46;
          alloc::vec::Vec<T,A>::push(v57, v54);
          alloc::vec::Vec<T,A>::push(v52, &v82);
        }
      }
      if ( v58 )
      {
LABEL_4:
        v17 = core::cmp::max_by(v24);
        goto LABEL_5;
      }
    }
    else
    {
      v51 = 0LL;
      v24 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v58 )
        goto LABEL_4;
    }
    v26 = v54;
    if ( v51 >= v54 )
    {
      v25 = v51;
      v62 = &off_126858;
LABEL_45:
      core::panicking::panic_bounds_check(v25, v26, v62);
    }
    uu_fmt::linebreak::restart_active_breaks(
      (__int64)v86,
      v66,
      v63,
      *(_QWORD *)(v53 + 40 * v51 + 24),
      *(_BYTE *)(v53 + 40 * v51 + 37),
      v51,
      v56,
      v67,
      v65);
    alloc::vec::Vec<T,A>::push(v57, v54);
    alloc::vec::Vec<T,A>::push(v52, v86);
    v17 = 0LL;
LABEL_5:
    v55 = v17;
    core::intrinsics::typed_swap(v68, v57);
    v16 = v50;
  }
  uu_fmt::linebreak::build_best_path(v71, v53, v54, v69, v70);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_fmt::linebreak::LineBreak>>(&v59);
  core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v57);
  core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v68);
  return core::ptr::drop_in_place<alloc::vec::Vec<uu_fmt::linebreak::LineBreak>>(v52);
}
