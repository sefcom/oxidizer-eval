__int64 (__fastcall **__fastcall uu_head::arg_iterate(_QWORD *a1, __int64 a2, __int64 a3))()
{
  __int64 v3; // rax
  char v4; // bp
  __int64 (__fastcall **result)(); // rax
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-1A0h]
  __int128 v16; // [rsp+10h] [rbp-198h] BYREF
  _OWORD *v17; // [rsp+20h] [rbp-188h]
  __int64 v18; // [rsp+28h] [rbp-180h]
  __int64 v19; // [rsp+30h] [rbp-178h]
  __int128 v20; // [rsp+70h] [rbp-138h] BYREF
  __int64 v21; // [rsp+80h] [rbp-128h]
  __int128 v22; // [rsp+88h] [rbp-120h] BYREF
  __int64 v23; // [rsp+98h] [rbp-110h]
  _OWORD v24[2]; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-D8h]
  char v27; // [rsp+D8h] [rbp-D0h]
  __int128 v28; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+110h] [rbp-98h]
  __int64 v30; // [rsp+120h] [rbp-88h] BYREF
  __int128 v31; // [rsp+128h] [rbp-80h]
  __int128 v32; // [rsp+138h] [rbp-70h]
  __int128 v33; // [rsp+148h] [rbp-60h] BYREF
  __int64 v34; // [rsp+158h] [rbp-50h]
  __int128 v35; // [rsp+160h] [rbp-48h] BYREF
  __int64 v36; // [rsp+170h] [rbp-38h]

  v14 = a2;
  v15 = a3;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v16, &v14);
  if ( (_QWORD)v16 == 0x8000000000000000LL )
    core::option::unwrap_failed(&off_12A3D0);
  v21 = (__int64)v17;
  v20 = v16;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v22, &v14);
  if ( (_QWORD)v22 == 0x8000000000000000LL )
  {
    v6 = alloc::alloc::Global::alloc_impl(24LL);
    if ( !v6 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v7 = v20;
    *(_QWORD *)(v6 + 16) = v21;
    *(_OWORD *)v6 = v7;
    alloc::slice::hack::into_vec(&v25, v6, 1LL);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v16, &v25);
    a1[1] = alloc::boxed::Box<T>::new(&v16);
    result = &off_12A500;
    a1[2] = &off_12A500;
    *a1 = 0LL;
    if ( (_QWORD)v22 != 0x8000000000000000LL )
      return (__int64 (__fastcall **)())core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v22);
  }
  else
  {
    v28 = v22;
    v29 = v23;
    std::sys::os_str::bytes::Slice::to_str(&v16, *((_QWORD *)&v22 + 1));
    if ( (_QWORD)v16 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v25);
      v17 = (_OWORD *)v26;
      v16 = v25;
      LODWORD(v18) = 1;
      v3 = alloc::boxed::Box<T>::new(&v16);
      goto LABEL_5;
    }
    v8 = *((_QWORD *)&v16 + 1);
    v9 = (__int64)v17;
    uu_head::parse::parse_obsolete(&v30, *((__int64 *)&v16 + 1), (__int64)v17);
    if ( v30 )
    {
      if ( (_QWORD)v31 )
      {
        v24[1] = v32;
        v24[0] = v31;
        v10 = alloc::alloc::Global::alloc_impl(24LL);
        if ( !v10 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        v11 = v20;
        *(_QWORD *)(v10 + 16) = v21;
        *(_OWORD *)v10 = v11;
        alloc::slice::hack::into_vec(&v25, v10, 1LL);
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v16, &v25);
        core::iter::traits::iterator::Iterator::chain(&v25, &v16, v24);
        core::iter::traits::iterator::Iterator::chain(&v16, &v25, v14, v15);
        a1[1] = alloc::boxed::Box<T>::new(&v16);
        a1[2] = &off_12A420;
        *a1 = 0LL;
        v4 = 0;
        goto LABEL_6;
      }
      *(_QWORD *)&v25 = 0LL;
      *((_QWORD *)&v25 + 1) = v8;
      v26 = v9;
      v27 = 1;
      *(_QWORD *)&v24[0] = &v25;
      *((_QWORD *)&v24[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      if ( BYTE8(v31) )
      {
        *(_QWORD *)&v16 = &off_12A3B0;
        *((_QWORD *)&v16 + 1) = 2LL;
        v19 = 0LL;
        v17 = v24;
        v18 = 1LL;
        core::option::Option<T>::map_or_else(&v35, &v16);
        LODWORD(v18) = 1;
        v16 = v35;
        v17 = (_OWORD *)v36;
      }
      else
      {
        *(_QWORD *)&v16 = &off_12A3A0;
        *((_QWORD *)&v16 + 1) = 1LL;
        v19 = 0LL;
        v17 = v24;
        v18 = 1LL;
        core::option::Option<T>::map_or_else(&v33, &v16);
        LODWORD(v18) = 1;
        v16 = v33;
        v17 = (_OWORD *)v34;
      }
      v3 = alloc::boxed::Box<T>::new(&v16);
LABEL_5:
      a1[1] = v3;
      a1[2] = &off_12A490;
      *a1 = 1LL;
      v4 = 1;
LABEL_6:
      result = (__int64 (__fastcall **)())core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v28);
      if ( v4 )
        return (__int64 (__fastcall **)())core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v20);
      return result;
    }
    v12 = alloc::alloc::Global::alloc_impl(48LL);
    if ( !v12 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v17 = (_OWORD *)v29;
    v16 = v28;
    v13 = v20;
    *(_QWORD *)(v12 + 16) = v21;
    *(_OWORD *)v12 = v13;
    *(_OWORD *)(v12 + 24) = v16;
    *(_QWORD *)(v12 + 40) = v17;
    alloc::slice::hack::into_vec(&v16, v12, 2LL);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v25, &v16);
    core::iter::traits::iterator::Iterator::chain(&v16, &v25, v14, v15);
    a1[1] = alloc::boxed::Box<T>::new(&v16);
    result = &off_12A3E8;
    a1[2] = &off_12A3E8;
    *a1 = 0LL;
  }
  return result;
}
