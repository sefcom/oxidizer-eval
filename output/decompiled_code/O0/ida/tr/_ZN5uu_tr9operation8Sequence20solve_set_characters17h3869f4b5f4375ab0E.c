        char a8)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  _BYTE *v24; // r14
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 v27; // r15
  __int64 i; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // bp
  unsigned __int64 v32; // r14
  __int64 v33; // rdx
  _BYTE *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  bool v37; // zf
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int128 *v44; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 v45; // [rsp+10h] [rbp-1B8h]
  __int64 *v46; // [rsp+18h] [rbp-1B0h]
  __int64 v47; // [rsp+28h] [rbp-1A0h]
  __int64 v48; // [rsp+30h] [rbp-198h]
  __int64 v49; // [rsp+38h] [rbp-190h]
  __int128 v50; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v51; // [rsp+50h] [rbp-178h]
  __int128 v52; // [rsp+60h] [rbp-168h] BYREF
  unsigned __int64 v53; // [rsp+70h] [rbp-158h]
  __int128 v54; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v55; // [rsp+90h] [rbp-138h]
  __int64 v56; // [rsp+98h] [rbp-130h]
  __int64 v57; // [rsp+A0h] [rbp-128h]
  int v58; // [rsp+ACh] [rbp-11Ch]
  __int64 v59; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-110h]
  __int64 v61; // [rsp+C0h] [rbp-108h]
  __int128 v62; // [rsp+C8h] [rbp-100h] BYREF
  unsigned __int64 v63; // [rsp+D8h] [rbp-F0h]
  unsigned __int64 v64; // [rsp+E0h] [rbp-E8h]
  _BYTE *v65; // [rsp+E8h] [rbp-E0h]
  __int64 v66; // [rsp+F0h] [rbp-D8h] BYREF
  __int128 v67; // [rsp+F8h] [rbp-D0h] BYREF
  unsigned __int64 v68; // [rsp+108h] [rbp-C0h]
  __int128 v69; // [rsp+110h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+120h] [rbp-A8h]
  __int128 v71; // [rsp+128h] [rbp-A0h]
  unsigned __int64 v72; // [rsp+138h] [rbp-90h]
  __int128 v73; // [rsp+140h] [rbp-88h] BYREF
  unsigned __int64 v74; // [rsp+150h] [rbp-78h]
  __int64 v75; // [rsp+158h] [rbp-70h] BYREF
  __int128 v76; // [rsp+160h] [rbp-68h]
  unsigned __int64 v77; // [rsp+170h] [rbp-58h]
  __int64 v78; // [rsp+178h] [rbp-50h] BYREF
  __int128 v79; // [rsp+180h] [rbp-48h]
  unsigned __int64 v80; // [rsp+190h] [rbp-38h]

  uu_tr::operation::Sequence::from_str(&v78);
  if ( v78 )
  {
    *(_QWORD *)(a1 + 24) = v80;
    *(_OWORD *)(a1 + 8) = v79;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v54 = v79;
  v55 = v80;
  if ( !*((_QWORD *)&v79 + 1) || (BYTE8(v54) & 7) != 0 || v80 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_104;
  if ( <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
         *((_QWORD *)&v79 + 1),
         *((_QWORD *)&v54 + 1) + 16 * v80,
         0LL) )
  {
    *(_QWORD *)(a1 + 8) = 0x8000000000000003LL;
LABEL_11:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    goto LABEL_12;
  }
  uu_tr::operation::Sequence::from_str(&v75);
  if ( v75 )
  {
    *(_QWORD *)(a1 + 24) = v77;
    *(_OWORD *)(a1 + 8) = v76;
    goto LABEL_11;
  }
  v50 = v76;
  v51 = v77;
  if ( !*((_QWORD *)&v76 + 1) || (BYTE8(v50) & 7) != 0 || v77 > 0x7FFFFFFFFFFFFFFLL )
LABEL_104:
    core::panicking::panic_nounwind(anon_b454aa6ad6d838bd9a09661edb809920_10_llvm_13218341307614126290, 162LL);
  if ( (unsigned __int64)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
                           *((_QWORD *)&v76 + 1),
                           *((_QWORD *)&v50 + 1) + 16 * v77,
                           0LL) > 1 )
  {
    v12 = 0x8000000000000002LL;
LABEL_24:
    *(_QWORD *)(a1 + 8) = v12;
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_82:
    if ( (_QWORD)v50 )
    {
      if ( (unsigned __int64)v50 >> 60 )
        goto LABEL_105;
      v39 = 16 * v50;
      v44 = (__int128 *)*((_QWORD *)&v50 + 1);
      v45 = 8LL;
      v40 = 16LL;
    }
    else
    {
      v40 = 8LL;
      v39 = 0LL;
    }
    *(__int128 **)((char *)&v44 + v40) = (__int128 *)v39;
    if ( v45 && v46 )
      _rust_dealloc(v44, v46, v45);
LABEL_12:
    if ( !(_QWORD)v54 )
    {
      v11 = 8LL;
      v10 = 0LL;
      goto LABEL_16;
    }
    if ( !((unsigned __int64)v54 >> 60) )
    {
      v10 = 16 * v54;
      v44 = (__int128 *)*((_QWORD *)&v54 + 1);
      v45 = 8LL;
      v11 = 16LL;
LABEL_16:
      *(__int128 **)((char *)&v44 + v11) = (__int128 *)v10;
      if ( v45 && v46 )
        _rust_dealloc(v44, v46, v45);
      return a1;
    }
LABEL_105:
    core::panicking::panic_nounwind(anon_782ba9eb50cd87b50d012edc40677b48_5_llvm_10879477745917484442, 69LL);
  }
  if ( a8 )
  {
    v13 = (_BYTE *)<alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v50);
    if ( v14 )
    {
      v15 = 16 * v14;
      while ( 1 )
      {
        if ( !v13 )
          goto LABEL_33;
        if ( *v13 == 4 && ((v13[1] - 6) & 0xFB) != 0 )
          break;
        v13 += 16;
        v15 -= 16LL;
        if ( !v15 )
          goto LABEL_33;
      }
      v12 = 0x8000000000000006LL;
      goto LABEL_24;
    }
  }
LABEL_33:
  v44 = (__int128 *)<alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v54);
  v45 = (__int64)&v44[v16];
  v46 = 0LL;
  v47 = 0LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v52, &v44);
  if ( (_BYTE)a6 )
  {
    v44 = &v52;
    BYTE2(v45) = -1;
    LOWORD(v45) = 0;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v73, &v44);
    if ( (_QWORD)v52 )
      _rust_dealloc(*((_QWORD *)&v52 + 1), v52, 1LL);
    v53 = v74;
    v52 = v73;
  }
  v17 = v53;
  v44 = (__int128 *)<alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v50);
  v45 = (__int64)&v44[v18];
  v46 = 0LL;
  v47 = 0LL;
  v19 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(&v44, 0LL);
  v20 = 0LL;
  if ( v17 >= v19 )
    v20 = v17 - v19;
  v66 = v20;
  v44 = (__int128 *)<alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v50);
  v45 = (__int64)&v44[v21];
  v46 = &v66;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v67, &v44);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v50);
  v51 = v68;
  v50 = v67;
  v22 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v50);
  v64 = v17;
  v58 = a6;
  if ( v23 )
  {
    v24 = (_BYTE *)v22;
    v56 = 0LL;
    v65 = (_BYTE *)(v22 + 16 * v23);
    while ( 1 )
    {
      if ( !v24 )
        goto LABEL_65;
      if ( *v24 == 4 )
      {
        if ( v56 )
        {
          if ( !*((_QWORD *)&v50 + 1) || (BYTE8(v50) & 7) != 0 || v51 > 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_104;
          v44 = 0LL;
          v46 = 0LL;
          v47 = *((_QWORD *)&v50 + 1);
          v48 = *((_QWORD *)&v50 + 1) + 16 * v51;
          v49 = v56;
          v57 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(&v44, 0LL);
        }
        else
        {
          v57 = 0LL;
        }
        v25 = *((_QWORD *)&v54 + 1);
        if ( !*((_QWORD *)&v54 + 1) || (BYTE8(v54) & 7) != 0 || v55 > 0x7FFFFFFFFFFFFFFLL )
          goto LABEL_104;
        if ( !v55 )
          goto LABEL_79;
        if ( **((_BYTE **)&v54 + 1) != 4 || v57 )
          break;
      }
LABEL_41:
      v24 += 16;
      ++v56;
      if ( v24 == v65 )
        goto LABEL_65;
    }
    if ( v55 != 1 )
    {
      v26 = 16 * v55;
      v27 = 1LL;
      for ( i = 16LL; v26 != i; i += 16LL )
      {
        if ( *(_BYTE *)(v25 + i) == 4 )
        {
          if ( !*((_QWORD *)&v54 + 1) || (BYTE8(v54) & 7) != 0 || v55 > 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_104;
          v44 = 0LL;
          v46 = 0LL;
          v47 = *((_QWORD *)&v54 + 1);
          v48 = *((_QWORD *)&v54 + 1) + 16 * v55;
          v49 = v27;
          v29 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(&v44, 0LL);
          if ( v29 == v57 )
            goto LABEL_41;
        }
        ++v27;
      }
    }
LABEL_79:
    *(_QWORD *)(a1 + 8) = 0x8000000000000007LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    goto LABEL_80;
  }
LABEL_65:
  v30 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v50);
  v31 = v58;
  v32 = v64;
  v44 = (__int128 *)v30;
  v45 = v30 + 16 * v33;
  v46 = 0LL;
  v47 = 0LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v62, &v44);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v59, &v62);
  if ( !v60 || v61 < 0 )
    core::panicking::panic_nounwind(anon_60fe5ecc8a5a6f6a64f7c14fee2afab1_17_llvm_16066862953719322457, 166LL);
  alloc::slice::<impl [T]>::sort();
  alloc::vec::Vec<T,A>::dedup_by(&v59);
  v34 = (_BYTE *)<alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v54);
  v36 = 16 * v35;
  do
  {
    if ( !v36 || !v34 )
      goto LABEL_75;
    v36 -= 16LL;
    v37 = *v34 == 4;
    v34 += 16;
  }
  while ( !v37 );
  if ( a8 )
  {
    if ( v31 )
    {
      v38 = 0x8000000000000009LL;
      if ( (unsigned __int64)v61 > 1 || v63 > v32 )
        goto LABEL_100;
    }
  }
LABEL_75:
  if ( v63 < v53 )
  {
    if ( a7 )
    {
      if ( v53 < v63 )
        goto LABEL_92;
      goto LABEL_91;
    }
    v41 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v50);
    if ( !v42 )
      goto LABEL_92;
    if ( !v41 )
      goto LABEL_92;
    v43 = 16 * v42;
    if ( *(_BYTE *)(v43 + v41 - 16) != 4 || ((*(_BYTE *)(v43 + v41 - 16 + 1) - 6) & 0xFB) != 0 )
      goto LABEL_92;
    v38 = 0x8000000000000008LL;
LABEL_100:
    *(_QWORD *)(a1 + 8) = v38;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    if ( v59 )
      _rust_dealloc(v60, v59, 1LL);
    if ( (_QWORD)v62 )
      _rust_dealloc(*((_QWORD *)&v62 + 1), v62, 1LL);
LABEL_80:
    if ( (_QWORD)v52 )
      _rust_dealloc(*((_QWORD *)&v52 + 1), v52, 1LL);
    goto LABEL_82;
  }
  if ( v63 > v53 || !a7 )
    goto LABEL_92;
LABEL_91:
  v53 = v63;
LABEL_92:
  v70 = v53;
  v69 = v52;
  v71 = v62;
  v72 = v63;
  *(_OWORD *)a1 = v52;
  *(_QWORD *)(a1 + 32) = *((_QWORD *)&v71 + 1);
  *(_QWORD *)(a1 + 40) = v72;
  *(_QWORD *)(a1 + 16) = v70;
  *(_QWORD *)(a1 + 24) = v71;
  if ( v59 )
    _rust_dealloc(v60, v59, 1LL);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v50);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v54);
  return a1;
}
