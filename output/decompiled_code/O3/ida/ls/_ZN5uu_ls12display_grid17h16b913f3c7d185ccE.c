__int64 __fastcall uu_ls::display_grid(__int128 *a1, unsigned __int16 a2, char a3, __int64 a4, char a5)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  _QWORD *v14; // r15
  __int64 v15; // rsi
  _BYTE *v16; // rax
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  _OWORD *v21; // rax
  __int128 v22; // xmm0
  _OWORD *v23; // rbx
  __int64 v25; // rax
  _OWORD *v26; // rax
  __int128 v27; // xmm0
  __int64 v28; // r14
  unsigned __int64 v29; // rbx
  _QWORD *v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _BYTE v36[24]; // [rsp+0h] [rbp-158h] BYREF
  __int128 v37; // [rsp+20h] [rbp-138h] BYREF
  __int128 v38; // [rsp+30h] [rbp-128h]
  __int64 v39; // [rsp+40h] [rbp-118h]
  __int128 v40; // [rsp+58h] [rbp-100h] BYREF
  __int64 v41; // [rsp+68h] [rbp-F0h]
  __int128 v42; // [rsp+70h] [rbp-E8h]
  __int128 v43; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v44[24]; // [rsp+90h] [rbp-C8h]
  _OWORD v45[5]; // [rsp+100h] [rbp-58h] BYREF

  if ( a2 )
  {
    if ( a5 )
    {
      v8 = *a1;
      v45[1] = a1[1];
      v45[0] = v8;
      alloc::vec::in_place_collect::from_iter_in_place(&v40, v45);
    }
    else
    {
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,alloc::vec::into_iter::IntoIter<T>>>::from_iter(
        &v40,
        a1);
    }
    v16 = (_BYTE *)(&dword_0 + 2);
    v17 = 0x8000000000000000LL;
    if ( v41 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        v19 = *(_QWORD *)(*((_QWORD *)&v40 + 1) + v18 + 16);
        if ( v19 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)&v40 + 1) + v18 + 8) + v19 - 1) == 47 )
            break;
        }
        v18 += 24LL;
        if ( 24 * v41 == v18 )
          goto LABEL_19;
      }
      v17 = 1LL;
      v16 = (_BYTE *)_rust_alloc(1LL, 1LL);
      if ( !v16 )
        alloc::raw_vec::handle_error(1LL, 1LL);
      *v16 = 9;
    }
LABEL_19:
    *(_QWORD *)&v36[16] = v41;
    *(_OWORD *)v36 = v40;
    LOBYTE(v39) = a3;
    *(_QWORD *)&v37 = v17;
    *((_QWORD *)&v37 + 1) = v16;
    *(_QWORD *)&v38 = 1LL;
    *((_QWORD *)&v38 + 1) = a2;
    ((void (__fastcall *)(__int128 *, _BYTE *, __int128 *))term_grid::Grid<T>::new)(&v43, v36, &v37);
    *(_QWORD *)v36 = &v43;
    *(_QWORD *)&v36[8] = <term_grid::Grid<T> as core::fmt::Display>::fmt;
    *(_QWORD *)&v37 = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
    *((_QWORD *)&v37 + 1) = 1LL;
    v39 = 0LL;
    *(_QWORD *)&v38 = v36;
    *((_QWORD *)&v38 + 1) = 1LL;
    v20 = std::io::Write::write_fmt(a4, &v37);
    if ( v20 )
    {
      *(_QWORD *)&v37 = 0x8000000000000000LL;
      *((_QWORD *)&v38 + 1) = v20;
      v21 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v21 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v22 = v37;
      v21[1] = v38;
      *v21 = v22;
      v23 = v21;
      core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&v43);
      return (__int64)v23;
    }
    core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&v43);
    return 0LL;
  }
  v9 = *a1;
  v38 = a1[1];
  v37 = v9;
  v10 = *((_QWORD *)&v38 + 1);
  if ( *((_QWORD *)&v9 + 1) == *((_QWORD *)&v38 + 1) )
  {
LABEL_22:
    if ( (_QWORD)v38 )
      _rust_dealloc(v37, 24 * v38, 8LL);
    return 0LL;
  }
  v11 = *((_QWORD *)&v9 + 1) + 24LL;
  *((_QWORD *)&v37 + 1) = *((_QWORD *)&v9 + 1) + 24LL;
  v12 = **((_QWORD **)&v9 + 1);
  v42 = *(_OWORD *)(*((_QWORD *)&v9 + 1) + 8LL);
  if ( v12 == 0x8000000000000000LL )
  {
    if ( *((_QWORD *)&v38 + 1) != v11 )
    {
      v13 = (*((_QWORD *)&v38 + 1) - v11) / 0x18uLL;
      v14 = (_QWORD *)(*((_QWORD *)&v9 + 1) + 32LL);
      do
      {
        v15 = *(v14 - 1);
        if ( v15 )
          _rust_dealloc(*v14, v15, 1LL);
        v14 += 3;
        --v13;
      }
      while ( v13 );
    }
    goto LABEL_22;
  }
  *(_QWORD *)v36 = v12;
  *(_OWORD *)&v36[8] = v42;
  *(_QWORD *)&v40 = v36;
  *((_QWORD *)&v40 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v43 = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
  *((_QWORD *)&v43 + 1) = 1LL;
  *(_QWORD *)&v44[16] = 0LL;
  *(_QWORD *)v44 = &v40;
  *(_QWORD *)&v44[8] = 1LL;
  v25 = std::io::Write::write_fmt(a4, &v43);
  if ( !v25 )
  {
    if ( *(_QWORD *)v36 )
      _rust_dealloc(*(_QWORD *)&v36[8], *(_QWORD *)v36, 1LL);
    if ( v11 == v10 )
    {
LABEL_49:
      if ( (_QWORD)v38 )
        _rust_dealloc(v37, 24 * v38, 8LL);
LABEL_52:
      *(_QWORD *)&v43 = &off_1AC748;
      *((_QWORD *)&v43 + 1) = 1LL;
      *(_QWORD *)v44 = 8LL;
      *(_OWORD *)&v44[8] = 0LL;
      v35 = std::io::Write::write_fmt(a4, &v43);
      if ( v35 )
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
      return 0LL;
    }
    v11 = *((_QWORD *)&v9 + 1) + 48LL;
    while ( 1 )
    {
      v33 = *(_QWORD *)(v11 - 24);
      v42 = *(_OWORD *)(v11 - 16);
      if ( v33 == 0x8000000000000000LL )
      {
        *((_QWORD *)&v37 + 1) = v11;
        <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v37);
        goto LABEL_52;
      }
      *(_QWORD *)v36 = v33;
      *(_OWORD *)&v36[8] = v42;
      *(_QWORD *)&v43 = &off_1AC848;
      *((_QWORD *)&v43 + 1) = 1LL;
      *(_QWORD *)v44 = 8LL;
      *(_OWORD *)&v44[8] = 0LL;
      v34 = std::io::Write::write_fmt(a4, &v43);
      if ( v34 )
      {
        *((_QWORD *)&v37 + 1) = v11;
        v28 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34);
        goto LABEL_29;
      }
      *(_QWORD *)&v40 = v36;
      *((_QWORD *)&v40 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v43 = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
      *((_QWORD *)&v43 + 1) = 1LL;
      *(_QWORD *)&v44[16] = 0LL;
      *(_QWORD *)v44 = &v40;
      *(_QWORD *)&v44[8] = 1LL;
      v25 = std::io::Write::write_fmt(a4, &v43);
      if ( v25 )
        break;
      if ( *(_QWORD *)v36 )
        _rust_dealloc(*(_QWORD *)&v36[8], *(_QWORD *)v36, 1LL);
      v32 = v11 - 24;
      v11 += 24LL;
      if ( v32 + 24 == v10 )
        goto LABEL_49;
    }
    *((_QWORD *)&v37 + 1) = v11;
  }
  *(_QWORD *)&v43 = 0x8000000000000000LL;
  *(_QWORD *)&v44[8] = v25;
  v26 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v26 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v27 = v43;
  v26[1] = *(_OWORD *)v44;
  v28 = (__int64)v26;
  *v26 = v27;
LABEL_29:
  if ( *(_QWORD *)v36 )
    _rust_dealloc(*(_QWORD *)&v36[8], *(_QWORD *)v36, 1LL);
  if ( v10 != v11 )
  {
    v29 = (v10 - v11) / 0x18uLL;
    v30 = (_QWORD *)(v11 + 8);
    do
    {
      v31 = *(v30 - 1);
      if ( v31 )
        _rust_dealloc(*v30, v31, 1LL);
      v30 += 3;
      --v29;
    }
    while ( v29 );
  }
  if ( (_QWORD)v38 )
    _rust_dealloc(v37, 24 * v38, 8LL);
  return v28;
}
