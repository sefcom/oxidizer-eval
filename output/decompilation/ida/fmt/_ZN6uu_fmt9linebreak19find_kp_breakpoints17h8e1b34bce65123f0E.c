__int64 __fastcall uu_fmt::linebreak::find_kp_breakpoints(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdi
  char i; // bl
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r14
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rbp
  float v27; // xmm0_4
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rcx
  __int16 v35; // dx
  __int128 v36; // xmm0
  __int64 v37; // rbx
  _QWORD *v38; // r15
  char v40; // [rsp+7h] [rbp-1B1h]
  __int64 v41; // [rsp+8h] [rbp-1B0h]
  int v42; // [rsp+14h] [rbp-1A4h]
  _QWORD *v43; // [rsp+18h] [rbp-1A0h]
  unsigned __int64 v44; // [rsp+20h] [rbp-198h]
  unsigned __int64 v45; // [rsp+28h] [rbp-190h]
  __int64 v46; // [rsp+30h] [rbp-188h]
  __int64 v47; // [rsp+38h] [rbp-180h] BYREF
  __int64 v48; // [rsp+40h] [rbp-178h]
  unsigned __int64 v49; // [rsp+48h] [rbp-170h]
  __int64 v50; // [rsp+50h] [rbp-168h] BYREF
  __int64 v51; // [rsp+58h] [rbp-160h]
  __int64 v52; // [rsp+60h] [rbp-158h]
  __int64 v53; // [rsp+68h] [rbp-150h]
  __int64 v54; // [rsp+70h] [rbp-148h] BYREF
  __int64 v55; // [rsp+78h] [rbp-140h]
  __int64 v56; // [rsp+80h] [rbp-138h]
  __int64 v57; // [rsp+88h] [rbp-130h] BYREF
  _QWORD *v58; // [rsp+90h] [rbp-128h]
  __int64 v59; // [rsp+98h] [rbp-120h]
  char **v60; // [rsp+A0h] [rbp-118h]
  __int64 v61; // [rsp+A8h] [rbp-110h]
  __int64 v62; // [rsp+B0h] [rbp-108h]
  unsigned __int64 v63; // [rsp+B8h] [rbp-100h]
  __int64 v64; // [rsp+C0h] [rbp-F8h]
  __int64 v65; // [rsp+C8h] [rbp-F0h]
  __int64 v66; // [rsp+D0h] [rbp-E8h]
  __int64 v67; // [rsp+D8h] [rbp-E0h]
  __int64 v68; // [rsp+E0h] [rbp-D8h]
  _QWORD v69[2]; // [rsp+E8h] [rbp-D0h] BYREF
  _BYTE v70[16]; // [rsp+F8h] [rbp-C0h] BYREF
  _QWORD v71[4]; // [rsp+108h] [rbp-B0h] BYREF
  float v72; // [rsp+128h] [rbp-90h]
  __int16 v73; // [rsp+12Ch] [rbp-8Ch]
  __int128 v74; // [rsp+130h] [rbp-88h] BYREF
  _BYTE v75[21]; // [rsp+140h] [rbp-78h]
  char v76; // [rsp+155h] [rbp-63h]
  __int16 v77; // [rsp+156h] [rbp-62h]
  _BYTE v78[88]; // [rsp+160h] [rbp-58h] BYREF

  v65 = a1;
  core::iter::traits::iterator::Iterator::peekable(v69);
  v6 = alloc::alloc::Global::alloc_impl(8LL, 40LL);
  if ( !v6 )
    alloc::alloc::handle_alloc_error(8LL, 40LL);
  v7 = v6;
  v8 = a4[4];
  *(_OWORD *)v7 = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = v8;
  *(_DWORD *)(v7 + 32) = 0;
  *(_WORD *)(v7 + 36) = 0;
  v47 = 1LL;
  v48 = v7;
  v49 = 1LL;
  v9 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
  if ( !v9 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  *v9 = 0LL;
  v57 = 1LL;
  v58 = v9;
  v59 = 1LL;
  v50 = 0LL;
  v51 = 8LL;
  v52 = 0LL;
  v46 = *a4;
  v10 = *(_QWORD *)(*a4 + 56);
  v66 = *(_QWORD *)(*a4 + 48) - v10;
  v63 = core::cmp::Ord::max(v10, v66 + 1) - v66;
  v54 = 0LL;
  v55 = 8LL;
  v56 = 0LL;
  v40 = *((_BYTE *)a4 + 48);
  v61 = a4[5];
  v53 = 0LL;
  v60 = &off_F03B0;
  for ( i = 0; ; i = v4 )
  {
    v12 = v69[1];
    v14 = (v69[0] & 1) == 0;
    v69[0] = 0LL;
    if ( v14 )
      v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v70);
    if ( !v12 )
      break;
    v15 = *(_QWORD *)core::option::Option<T>::get_or_insert_with(v69, v70);
    LOBYTE(v4) = 1;
    if ( v15 && *(_BYTE *)(v15 + 56) != 1 )
    {
      if ( *(_BYTE *)(v15 + 58) == 1 )
        v4 = *(unsigned __int8 *)(v12 + 57);
      else
        v4 = 0;
    }
    v16 = 0LL;
    if ( (v40 & 1) != 0 )
      v16 = (i & 1) + 1LL;
    if ( v40 != *(_BYTE *)(v12 + 58) )
      v16 = (i & 1) + 1LL;
    v64 = v16;
    v56 = 0LL;
    v52 = 0LL;
    v43 = v58;
    v17 = 0x7FFFFFFFFFFFFFFFLL;
    v13 = 0LL;
    if ( v59 )
    {
      v67 = v15;
      v41 = v12;
      v42 = v4;
      v18 = v48;
      v44 = v49;
      v68 = 8 * v59;
      v19 = 0LL;
      v62 = 0x7FFFFFFFFFFFFFFFLL;
      v45 = 0LL;
      while ( 1 )
      {
        v13 = v43[v19 / 8];
        if ( v13 >= v44 )
          goto LABEL_46;
        v20 = v17;
        v17 = *(_QWORD *)(v18 + 40 * v13 + 16) - v53;
        v21 = *(_QWORD *)(v18 + 40 * v13 + 24);
        *(_QWORD *)(v18 + 40 * v13 + 16) = v17;
        v22 = v45;
        if ( v17 < v20 )
          v22 = v13;
        v45 = v22;
        if ( v17 >= v20 )
          v17 = v20;
        v23 = *(_QWORD *)(v41 + 40);
        v24 = uu_fmt::linebreak::BreakArgs::compute_width(v46, v41, v21, *(unsigned __int8 *)(v18 + 40 * v13 + 37));
        v25 = v18 + 40 * v13;
        v26 = *(_QWORD *)(v25 + 24) + v24 + v64 + v23;
        if ( v26 > *(_QWORD *)(v46 + 48) )
          goto LABEL_24;
        alloc::vec::Vec<T,A>::push(&v50, v13, &off_F03C8);
        *(_BYTE *)(v25 + 37) = 0;
        *(_QWORD *)(v25 + 24) = v26;
        if ( v26 < v63 )
          goto LABEL_24;
        if ( !v67 )
          break;
        v27 = *(float *)(v25 + 32);
        v28 = uu_fmt::linebreak::compute_demerits(*(_QWORD *)(v46 + 56) - v26, v66, *(_QWORD *)(v41 + 40), v27);
        if ( v28 <= 0x5AF3107A3FFFLL )
          goto LABEL_36;
LABEL_24:
        v19 += 8LL;
        if ( v68 == v19 )
        {
          v31 = v56;
          if ( v56 )
          {
            --v56;
            v32 = 5 * (v31 - 1);
            v33 = *(_BYTE *)(v55 + 40 * (v31 - 1) + 37);
            v4 = v42;
            v12 = v41;
            v13 = v45;
            if ( v33 != 2 )
            {
              v34 = v55 + 8 * v32;
              v35 = *(_WORD *)(v34 + 38);
              *(_QWORD *)&v75[13] = *(_QWORD *)(v34 + 29);
              v36 = *(_OWORD *)v34;
              *(_OWORD *)v75 = *(_OWORD *)(v34 + 16);
              v74 = v36;
              v76 = v33;
              v77 = v35;
              alloc::vec::Vec<T,A>::push(&v50, v49, &off_F0338);
              alloc::vec::Vec<T,A>::push(&v47, &v74, &off_F0350);
            }
          }
          else
          {
            v4 = v42;
            v12 = v41;
            v13 = v45;
          }
          goto LABEL_5;
        }
      }
      v27 = 0.0;
      v28 = 0LL;
LABEL_36:
      v29 = *(_QWORD *)(v25 + 16);
      v30 = v29 + v28;
      if ( v29 + v28 < v62 && (char)((v29 > 0) - (v29 < 0)) <= (char)((v28 > 0) - (v28 < 0)) )
      {
        v71[0] = v13;
        v71[1] = v41;
        v73 = 256;
        v71[2] = v29 + v28;
        v72 = v27;
        v71[3] = v61;
        alloc::vec::Vec<T,A>::push(&v54, v71, &off_F03E0);
        v62 = v30;
      }
      goto LABEL_24;
    }
LABEL_5:
    if ( v52 )
    {
      v53 = core::cmp::Ord::max(v17);
    }
    else
    {
      v44 = v49;
      if ( v13 >= v49 )
      {
        v60 = &off_F0368;
LABEL_46:
        core::panicking::panic_bounds_check(v13, v44, v60);
      }
      uu_fmt::linebreak::restart_active_breaks(
        (unsigned int)v78,
        v46,
        v61,
        *(_QWORD *)(v48 + 40 * v13 + 24),
        *(unsigned __int8 *)(v48 + 40 * v13 + 37),
        v13,
        v12,
        v64,
        v63);
      alloc::vec::Vec<T,A>::push(&v50, v44, &off_F0380);
      alloc::vec::Vec<T,A>::push(&v47, v78, &off_F0398);
      v53 = 0LL;
    }
    core::intrinsics::typed_swap_nonoverlapping(&v57, &v50);
  }
  v37 = v48;
  v38 = v58;
  uu_fmt::linebreak::build_best_path(v65, v48, v49, v58, v59);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_fmt::linebreak::LineBreak>>(v54, v55);
  core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v50, v51);
  core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v57, v38);
  return core::ptr::drop_in_place<alloc::vec::Vec<uu_fmt::linebreak::LineBreak>>(v47, v37);
}