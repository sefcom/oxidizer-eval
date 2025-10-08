__int64 __fastcall uu_env::parse_signal_opt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 i; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 v16; // r14
  __int128 v18; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD *v19; // [rsp+10h] [rbp-E8h]
  __int64 v20; // [rsp+18h] [rbp-E0h]
  __int64 v21; // [rsp+20h] [rbp-D8h]
  _QWORD v22[3]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-B0h] BYREF
  char v24; // [rsp+60h] [rbp-98h]
  _BYTE v25[16]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v26; // [rsp+78h] [rbp-80h]
  _QWORD v27[2]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v28[32]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-38h]

  if ( !a3 )
    return 0LL;
  *(_QWORD *)&v18 = a2;
  *((_QWORD *)&v18 + 1) = a3;
  LOBYTE(v19) = 0;
  core::iter::traits::iterator::Iterator::collect(v25, &v18);
  v22[0] = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v26, 8LL, 16LL, &off_110910);
  v22[1] = v3;
  v22[2] = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v18, v25);
  for ( i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v18);
        i;
        i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v18) )
  {
    if ( v5 )
      alloc::vec::Vec<T,A>::push(v22, i, v5, &off_110940);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v18);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v28, v22);
  v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v28);
  if ( v6 )
  {
    v8 = v6;
    v9 = v7;
    do
    {
      core::str::converts::from_utf8(&v18, v8, v9);
      if ( (_DWORD)v18 == 1 )
      {
        v23[0] = 1LL;
        v23[1] = v8;
        v23[2] = v9;
        v24 = 1;
        v27[0] = v23;
        v27[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v18 = &unk_110868;
        *((_QWORD *)&v18 + 1) = 2LL;
        v21 = 0LL;
        v19 = v27;
        v20 = 1LL;
        ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
          &v29,
          &v18,
          v11,
          v12,
          v13,
          v14);
        LODWORD(v20) = 1;
        v18 = v29;
        v19 = (_QWORD *)v30;
        v15 = alloc::boxed::Box<T>::new(&v18);
        goto LABEL_19;
      }
      uu_env::parse_signal_value((__int64 *)&v18, *((__int64 *)&v18 + 1), (__int64)v19);
      v15 = v18;
      if ( (_QWORD)v18 )
        goto LABEL_19;
      v16 = *((_QWORD *)&v18 + 1);
      v23[0] = *((_QWORD *)&v18 + 1);
      if ( !(unsigned __int8)<usize as core::slice::cmp::SliceContains>::slice_contains(
                               v23,
                               *(_QWORD *)(a1 + 104),
                               *(_QWORD *)(a1 + 112)) )
        alloc::vec::Vec<T,A>::push(a1 + 96, v16);
      v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v28);
      v9 = v10;
    }
    while ( v8 );
    v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
LABEL_19:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(v28);
  return v15;
}