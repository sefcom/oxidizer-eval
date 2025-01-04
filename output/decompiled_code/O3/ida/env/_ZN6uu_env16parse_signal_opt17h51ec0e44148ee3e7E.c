__int64 __fastcall uu_env::parse_signal_opt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // [rsp+0h] [rbp-118h] BYREF
  _QWORD *v20; // [rsp+10h] [rbp-108h]
  __int64 v21; // [rsp+18h] [rbp-100h]
  __int64 v22; // [rsp+20h] [rbp-F8h]
  _QWORD v23[3]; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD v24[3]; // [rsp+50h] [rbp-C8h] BYREF
  char v25; // [rsp+68h] [rbp-B0h]
  _QWORD v26[2]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v28; // [rsp+90h] [rbp-88h]
  _QWORD v29[2]; // [rsp+98h] [rbp-80h] BYREF
  char v30; // [rsp+A8h] [rbp-70h]
  _BYTE v31[32]; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-38h]

  if ( !a3 )
    return 0LL;
  v29[0] = a2;
  v29[1] = a3;
  v30 = 0;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v27, v29);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v19, v28, 0LL);
  if ( (_QWORD)v19 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v19 + 1), v20);
  v23[0] = *((_QWORD *)&v19 + 1);
  v23[1] = v20;
  v23[2] = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v19, v27);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v19, v23);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v31, v23);
  v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v31);
  if ( !v3 )
  {
LABEL_10:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(v31);
    return 0LL;
  }
  v5 = v3;
  v6 = v4;
  while ( 1 )
  {
    std::sys::os_str::bytes::Slice::to_str(&v19, v5, v6);
    if ( (_QWORD)v19 )
      break;
    uu_env::parse_signal_value((__int64 *)&v19, *((__int64 *)&v19 + 1), (__int64)v20);
    v12 = v19;
    if ( (_QWORD)v19 )
      goto LABEL_13;
    v13 = *((_QWORD *)&v19 + 1);
    v24[0] = *((_QWORD *)&v19 + 1);
    if ( !(unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(
                             v24,
                             *(_QWORD *)(a1 + 104),
                             *(_QWORD *)(a1 + 112)) )
      alloc::vec::Vec<T,A>::push(a1 + 96, v13);
    v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v31);
    v6 = v7;
    if ( !v5 )
      goto LABEL_10;
  }
  v24[0] = 1LL;
  v24[1] = v5;
  v24[2] = v6;
  v25 = 1;
  v26[0] = v24;
  v26[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v19 = &unk_1488B0;
  *((_QWORD *)&v19 + 1) = 2LL;
  v22 = 0LL;
  v20 = v26;
  v21 = 1LL;
  ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
    &v32,
    &v19,
    v8,
    v9,
    v10,
    v11);
  LODWORD(v21) = 1;
  v19 = v32;
  v20 = (_QWORD *)v33;
  v12 = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
          &v19,
          &v19,
          v15,
          v16,
          v17,
          v18);
LABEL_13:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(v31);
  return v12;
}
