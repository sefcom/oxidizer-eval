__int64 __fastcall uu_uniq::Uniq::print_uniq(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // ebx
  __int64 v7; // r13
  __int128 v8; // kr00_16
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  char v11; // bl
  __int128 v12; // kr10_16
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  __int128 v16; // kr20_16
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v20; // rsi
  char v21; // [rsp+16h] [rbp-F2h]
  char v22; // [rsp+17h] [rbp-F1h]
  __int64 v23; // [rsp+18h] [rbp-F0h]
  char v24; // [rsp+27h] [rbp-E1h]
  __int128 v26; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C8h]
  _BYTE *v28; // [rsp+48h] [rbp-C0h]
  __int128 v29; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int128 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h]
  int v33; // [rsp+84h] [rbp-84h]
  __int128 v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+98h] [rbp-70h]
  __int128 v36; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v38; // [rsp+B8h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-38h]

  v28 = a1;
  v6 = 10;
  if ( a1[53] )
    v6 = 0;
  *(_QWORD *)&v34 = a2;
  *((_QWORD *)&v34 + 1) = a3;
  LOBYTE(v35) = v6;
  <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v29, &v34);
  if ( (_QWORD)v29 == 0x8000000000000001LL )
  {
    v7 = 0LL;
    goto LABEL_7;
  }
  v38 = 0x8000000000000000LL;
  if ( (_QWORD)v29 != 0x8000000000000000LL )
  {
    v33 = v6;
    v23 = a5;
    v26 = v29;
    v27 = v30;
    v37 = v35;
    v36 = v34;
    v24 = v28[50];
    v22 = v28[48];
    v21 = v28[49];
    v10 = 1LL;
    v11 = 0;
    while ( 1 )
    {
      <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v39, &v36);
      if ( (_QWORD)v39 == 0x8000000000000001LL )
        break;
      if ( (_QWORD)v39 == v38 )
      {
        a5 = v23;
        v7 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v39 + 1));
        goto LABEL_42;
      }
      v31 = v39;
      v32 = v40;
      if ( (unsigned __int8)uu_uniq::Uniq::cmp_keys(v28, *((_QWORD *)&v26 + 1), v27) )
      {
        if ( v22 == 0 && v10 == 1 || v21 == 0 && v10 > 1 )
        {
          v7 = uu_uniq::Uniq::print_line(v28, a4, v23, *((_QWORD **)&v26 + 1), v27, v10, v11 & 1);
          v11 = 1;
          if ( v7 )
          {
            a5 = v23;
LABEL_41:
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v31);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31);
LABEL_42:
            v16 = v36;
            if ( **((_QWORD **)&v36 + 1) )
              (**((void (__fastcall ***)(_QWORD))&v36 + 1))(v36);
            v17 = *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL);
            if ( v17 )
              _rust_dealloc(v16, v17, *(_QWORD *)(*((_QWORD *)&v16 + 1) + 16LL));
LABEL_46:
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v26);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26);
            goto LABEL_47;
          }
        }
        v30 = v32;
        v29 = v31;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v26);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26);
        v27 = v30;
        v26 = v29;
        v10 = 1LL;
      }
      else if ( v24 )
      {
        v7 = uu_uniq::Uniq::print_line(v28, a4, v23, *((_QWORD **)&v26 + 1), v27, v10, v11 & 1);
        if ( v7 )
        {
          a5 = v23;
          goto LABEL_41;
        }
        v30 = v32;
        v29 = v31;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v26);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26);
        v27 = v30;
        v26 = v29;
        ++v10;
        v11 = 1;
      }
      else
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v31);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31);
        ++v10;
      }
    }
    v12 = v36;
    if ( **((_QWORD **)&v36 + 1) )
      (**((void (__fastcall ***)(_QWORD))&v36 + 1))(v36);
    v13 = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL);
    if ( v13 )
      _rust_dealloc(v12, v13, *(_QWORD *)(*((_QWORD *)&v12 + 1) + 16LL));
    if ( v22 == 0 && v10 == 1 || v21 == 0 && v10 > 1 )
    {
      v7 = uu_uniq::Uniq::print_line(v28, a4, v23, *((_QWORD **)&v26 + 1), v27, v10, v11 & 1);
      if ( v7 )
      {
LABEL_38:
        a5 = v23;
        goto LABEL_46;
      }
      v14 = v23;
      if ( v28[54] && v28[54] != 3 )
      {
LABEL_53:
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v26);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26);
        if ( *(_QWORD *)v14 )
          (*(void (__fastcall **)(__int64))v14)(a4);
        v20 = *(_QWORD *)(v14 + 8);
        if ( v20 )
          _rust_dealloc(a4, v20, *(_QWORD *)(v14 + 16));
        return 0LL;
      }
    }
    else
    {
      v14 = v23;
      if ( v28[54] && v28[54] != 3 || (v11 & 1) == 0 )
        goto LABEL_53;
    }
    LOBYTE(v29) = v33;
    v15 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(v14 + 56))(a4, &v29, 1LL);
    v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15);
    if ( v7 )
      goto LABEL_38;
    v14 = v23;
    goto LABEL_53;
  }
  v7 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v29 + 1));
LABEL_7:
  v8 = v34;
  if ( **((_QWORD **)&v34 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v34 + 1))(v34);
  v9 = *(_QWORD *)(*((_QWORD *)&v8 + 1) + 8LL);
  if ( v9 )
    _rust_dealloc(v8, v9, *(_QWORD *)(*((_QWORD *)&v8 + 1) + 16LL));
LABEL_47:
  if ( *(_QWORD *)a5 )
    (*(void (__fastcall **)(__int64))a5)(a4);
  v18 = *(_QWORD *)(a5 + 8);
  if ( v18 )
    _rust_dealloc(a4, v18, *(_QWORD *)(a5 + 16));
  return v7;
}
