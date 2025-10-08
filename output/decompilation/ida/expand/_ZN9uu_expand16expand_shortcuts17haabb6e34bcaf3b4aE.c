_OWORD *__fastcall uu_expand::expand_shortcuts(__int64 a1, __int64 a2)
{
  __int128 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  _OWORD *result; // rax
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  __int64 v16; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-E0h]
  __int64 v18; // [rsp+10h] [rbp-D8h]
  __int128 v19; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-C0h]
  __int64 v21; // [rsp+30h] [rbp-B8h]
  __int64 v22; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-A8h]
  __int64 v24; // [rsp+48h] [rbp-A0h]
  _BYTE v25[32]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-78h] BYREF
  char v27[48]; // [rsp+80h] [rbp-68h] BYREF
  __int16 v28; // [rsp+B0h] [rbp-38h]

  v21 = a1;
  *(_QWORD *)&v2 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*(_QWORD *)(a2 + 16), 8LL, 24LL, &off_E8890);
  v19 = v2;
  v20 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v25, a2);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22, v25);
  v4 = v22;
  if ( !__OFSUB__(-v22, 1LL) )
  {
    do
    {
      v6 = v23;
      v7 = v24;
      core::str::converts::from_utf8(&v16, v23, v24, v3);
      if ( (_DWORD)v16 == 1 )
        goto LABEL_4;
      v8 = v17;
      v9 = v18;
      LODWORD(v16) = 0;
      v10 = core::char::methods::encode_utf8_raw(45LL, &v16);
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v8, v9, v10) )
        goto LABEL_4;
      v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              v8,
              v9);
      if ( !v11 )
        core::str::slice_error_fail(v8, v9, 1LL, v9, &off_E88A8);
      v13 = v11;
      v14 = v12;
      v16 = v11;
      v17 = v12 + v11;
      v15 = core::iter::traits::iterator::Iterator::try_fold(&v16);
      if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v15) )
      {
        <char as core::str::pattern::Pattern>::into_searcher(v27, v13, v14);
        v26[0] = 0LL;
        v26[1] = v14;
        v28 = 1;
        core::iter::traits::iterator::Iterator::fold(v26, &v19);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v4, v6);
      }
      else
      {
LABEL_4:
        v16 = v4;
        v17 = v6;
        v18 = v7;
        alloc::vec::Vec<T,A>::push(&v19, &v16, &off_E88C0);
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22, v25);
      v4 = v22;
    }
    while ( v22 != 0x8000000000000000LL );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(v25);
  result = (_OWORD *)v21;
  *(_QWORD *)(v21 + 16) = v20;
  *result = v19;
  return result;
}