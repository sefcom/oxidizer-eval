_OWORD *__fastcall uu_ptx::read_input(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v6; // zf
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // r14
  __int64 v17; // r15
  _QWORD *v18; // rbx
  _QWORD *v19; // r12
  _QWORD *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r14
  _BYTE *v23; // rdx
  signed __int64 v24; // rbp
  _BYTE *v25; // r15
  __int64 v26; // r14
  __int64 *v27; // rax
  __int64 *v28; // r13
  __int64 (__fastcall **v29)(); // r14
  int v30; // r14d
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // r14
  void *v36; // rax
  signed __int64 v37; // r14
  __int64 v38; // rbp
  __int64 v39; // r14
  _QWORD *v40; // r15
  __int64 v41; // rsi
  __int64 v42; // r15
  __int64 v43; // rbp
  _QWORD *v44; // r14
  __int64 v45; // rsi
  _OWORD *v46; // rbx
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int64 v50; // [rsp+0h] [rbp-1A8h]
  __int64 v51; // [rsp+8h] [rbp-1A0h] BYREF
  _QWORD *v52; // [rsp+10h] [rbp-198h]
  __int64 v53; // [rsp+18h] [rbp-190h]
  _QWORD *v54; // [rsp+20h] [rbp-188h]
  __int64 v55; // [rsp+28h] [rbp-180h]
  __int64 v56; // [rsp+30h] [rbp-178h]
  signed __int64 v57; // [rsp+38h] [rbp-170h]
  __int64 v58; // [rsp+40h] [rbp-168h]
  __int128 v59; // [rsp+48h] [rbp-160h]
  __int64 v60; // [rsp+58h] [rbp-150h]
  __int128 v61; // [rsp+60h] [rbp-148h] BYREF
  __int64 v62; // [rsp+70h] [rbp-138h]
  __int128 v63; // [rsp+78h] [rbp-130h]
  __int64 v64; // [rsp+88h] [rbp-120h]
  __int64 v65; // [rsp+90h] [rbp-118h]
  __int128 v66; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v67; // [rsp+B0h] [rbp-F8h]
  __int128 v68; // [rsp+C0h] [rbp-E8h]
  __int64 v69; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v70; // [rsp+E0h] [rbp-C8h]
  __int64 v71; // [rsp+E8h] [rbp-C0h]
  __int64 v72; // [rsp+F0h] [rbp-B8h]
  __int64 v73; // [rsp+F8h] [rbp-B0h]
  __int64 v74; // [rsp+100h] [rbp-A8h]
  __int128 v75; // [rsp+110h] [rbp-98h] BYREF
  __int64 v76; // [rsp+120h] [rbp-88h]
  _QWORD v77[3]; // [rsp+128h] [rbp-80h] BYREF
  _QWORD v78[2]; // [rsp+140h] [rbp-68h] BYREF
  __int128 v79; // [rsp+150h] [rbp-58h] BYREF
  __int64 v80; // [rsp+160h] [rbp-48h]
  __int64 *v81; // [rsp+168h] [rbp-40h]
  __int64 (__fastcall **v82)(); // [rsp+170h] [rbp-38h]

  v6 = *(_QWORD *)(__readfsqword(0) - 64) == 0LL;
  v56 = a1;
  if ( v6 )
  {
    v8 = std::sys::pal::unix::rand::hashmap_random_keys();
    v9 = v10;
    v11 = (_QWORD *)(__readfsqword(0) - 64);
    *v11 = 1LL;
    v11[1] = v8;
    v11[2] = v10;
  }
  else
  {
    v7 = __readfsqword(0) - 64;
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_QWORD *)(v7 + 16);
  }
  *(_QWORD *)(__readfsqword(0) - 64 + 8) = v8 + 1;
  v66 = *(_OWORD *)&off_27B1D0;
  v67 = xmmword_27B1E0;
  *(_QWORD *)&v68 = v8;
  *((_QWORD *)&v68 + 1) = v9;
  v51 = 0LL;
  v52 = (_QWORD *)&byte_8;
  v53 = 0LL;
  if ( a3 )
  {
    if ( *(_BYTE *)(a4 + 88) )
    {
      v55 = 24 * a3;
      v12 = 1LL;
      v13 = 0LL;
      v14 = 0LL;
      do
      {
        v16 = *(_QWORD *)(a2 + v13 + 8);
        v17 = *(_QWORD *)(a2 + v13 + 16);
        if ( v12 - 1 == v51 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v51);
        v15 = v52;
        v52[v14] = v16;
        v15[v14 + 1] = v17;
        v53 = v12;
        v14 += 2LL;
        ++v12;
        v13 += 24LL;
      }
      while ( v55 != v13 );
      v18 = v52;
      v19 = &v52[v14];
      goto LABEL_14;
    }
    v22 = *(_QWORD *)(a2 + 8);
    v21 = *(_QWORD *)(a2 + 16);
    alloc::raw_vec::RawVec<T,A>::grow_one(&v51);
    v20 = v52;
    *v52 = v22;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::grow_one(&v51);
    v20 = v52;
    *v52 = asc_69A12;
    v21 = 1LL;
  }
  v20[1] = v21;
  v53 = 1LL;
  v18 = v52;
  v19 = v52 + 2;
LABEL_14:
  v50 = v51;
  v54 = v18;
  v55 = 0LL;
  while ( 1 )
  {
    v23 = (_BYTE *)*v18;
    v24 = v18[1];
    v25 = (_BYTE *)*v18;
    if ( v24 == 1 && *v23 == 45 )
    {
      v26 = std::io::stdio::stdin();
      v27 = (__int64 *)_rust_alloc(8LL, 8LL);
      if ( !v27 )
        alloc::alloc::handle_alloc_error(8LL, 8LL);
      v28 = v27;
      *v27 = v26;
      v29 = (__int64 (__fastcall **)())&unk_27B4E8;
      goto LABEL_23;
    }
    *(_QWORD *)&v61 = 0x1B600000000LL;
    WORD6(v61) = 0;
    DWORD2(v61) = 1;
    std::fs::OpenOptions::_open(&v69, &v61, v23, v24);
    if ( (_DWORD)v69 )
      break;
    v30 = HIDWORD(v69);
    v31 = (__int64 *)_rust_alloc(4LL, 4LL);
    if ( !v31 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v28 = v31;
    *(_DWORD *)v31 = v30;
    v29 = &off_27B490;
LABEL_23:
    v32 = _rust_alloc(0x2000LL, 1LL);
    if ( !v32 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    v79 = 0LL;
    v80 = 0LL;
    v78[0] = v32;
    v78[1] = 0x2000LL;
    v81 = v28;
    v82 = v29;
    core::iter::adapters::try_process(&v61, v78, v33, &v79);
    if ( (_QWORD)v61 == 0x8000000000000000LL )
    {
      v46 = (_OWORD *)v56;
      *(_QWORD *)(v56 + 8) = *((_QWORD *)&v61 + 1);
      goto LABEL_50;
    }
    v34 = v62;
    v59 = v61;
    v60 = v62;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(
      &v75,
      *((_QWORD *)&v61 + 1),
      *((_QWORD *)&v61 + 1) + 24 * v62);
    if ( v24 )
    {
      if ( v24 < 0 )
      {
        v35 = 0LL;
LABEL_57:
        alloc::raw_vec::handle_error(v35, v57);
      }
      v35 = 1LL;
      v36 = (void *)_rust_alloc(v24, 1LL);
      if ( !v36 )
      {
        v57 = v24;
        goto LABEL_57;
      }
    }
    else
    {
      v36 = &dword_0 + 1;
    }
    v37 = (signed __int64)v36;
    memcpy(v36, v25, v24);
    v77[0] = v24;
    v57 = v37;
    v77[1] = v37;
    v77[2] = v24;
    v62 = v60;
    v61 = v59;
    v64 = v76;
    v63 = v75;
    v65 = v55;
    hashbrown::map::HashMap<K,V,S,A>::insert(&v69, &v66, v77, &v61);
    v38 = v69;
    if ( v69 != 0x8000000000000000LL )
    {
      v58 = v70;
      v39 = v71;
      if ( v71 )
      {
        v40 = (_QWORD *)(v58 + 8);
        do
        {
          v41 = *(v40 - 1);
          if ( v41 )
            _rust_dealloc(*v40, v41, 1LL);
          v40 += 3;
          --v39;
        }
        while ( v39 );
      }
      if ( v38 )
        _rust_dealloc(v58, 24 * v38, 8LL);
      v42 = v73;
      v43 = v74;
      if ( v74 )
      {
        v44 = (_QWORD *)(v73 + 8);
        do
        {
          v45 = *(v44 - 1);
          if ( v45 )
            _rust_dealloc(*v44, 4 * v45, 4LL);
          v44 += 3;
          --v43;
        }
        while ( v43 );
      }
      if ( v72 )
        _rust_dealloc(v42, 24 * v72, 8LL);
    }
    v18 += 2;
    v55 += v34;
    if ( v18 == v19 )
    {
      if ( v50 )
        _rust_dealloc(v54, 16 * v50, 8LL);
      v47 = v66;
      v48 = v67;
      v46 = (_OWORD *)v56;
      *(_OWORD *)(v56 + 32) = v68;
      v46[1] = v48;
      *v46 = v47;
      return v46;
    }
  }
  v46 = (_OWORD *)v56;
  *(_QWORD *)(v56 + 8) = v70;
LABEL_50:
  *(_QWORD *)v46 = 0LL;
  if ( v50 )
    _rust_dealloc(v54, 16 * v50, 8LL);
  <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v66);
  return v46;
}
