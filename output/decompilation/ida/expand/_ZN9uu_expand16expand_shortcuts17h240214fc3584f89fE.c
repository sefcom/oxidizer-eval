_OWORD *__fastcall uu_expand::expand_shortcuts(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r13
  unsigned __int8 v9; // al
  _OWORD *result; // rax
  __int128 v11; // [rsp+0h] [rbp-108h] BYREF
  __int64 v12; // [rsp+10h] [rbp-F8h]
  __int128 v13; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-E0h]
  __int128 v15; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h]
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-B0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  __int128 v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h]
  _QWORD v22[2]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v23[48]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v24; // [rsp+D0h] [rbp-38h]

  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v17, *(_QWORD *)(a2 + 16), 0LL);
  v19 = a1;
  if ( v17 )
    alloc::raw_vec::handle_error(v18, *((_QWORD *)&v18 + 1));
  v13 = v18;
  v14 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v17, a2);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v20, &v17);
  while ( (_QWORD)v20 != 0x8000000000000000LL )
  {
    v15 = v20;
    v16 = v21;
    std::sys::os_str::bytes::Slice::to_str(&v11, *((_QWORD *)&v20 + 1));
    if ( (_QWORD)v11 )
      goto LABEL_8;
    v2 = *((_QWORD *)&v11 + 1);
    v3 = v12;
    LODWORD(v11) = 0;
    v4 = core::char::methods::encode_utf8_raw(45LL, &v11);
    if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v2, v3, v4, 1LL) )
      goto LABEL_8;
    v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
           v2,
           v3);
    if ( !v5 )
      core::str::slice_error_fail(v2, v3, 1LL, v3, &off_11CD98);
    v7 = v5;
    v8 = v6;
    *(_QWORD *)&v11 = v5;
    *((_QWORD *)&v11 + 1) = v6 + v5;
    v9 = core::iter::traits::iterator::Iterator::try_fold(&v11);
    if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v9) )
    {
      <char as core::str::pattern::Pattern>::into_searcher(v23, v7, v8);
      v22[0] = 0LL;
      v22[1] = v8;
      v24 = 1;
      core::iter::traits::iterator::Iterator::fold(v22, &v13);
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v15);
    }
    else
    {
LABEL_8:
      v12 = v16;
      v11 = v15;
      alloc::vec::Vec<T,A>::push(&v13, &v11);
    }
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v20, &v17);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v17);
  result = (_OWORD *)v19;
  *(_QWORD *)(v19 + 16) = v14;
  *result = v13;
  return result;
}
