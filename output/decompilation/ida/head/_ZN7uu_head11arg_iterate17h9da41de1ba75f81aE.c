__int64 (__fastcall **__fastcall uu_head::arg_iterate(unsigned __int64 *a1, __int64 a2, __int64 a3))()
{
  __int64 v3; // r15
  unsigned __int64 v4; // r14
  __int64 *v5; // rax
  __int64 (__fastcall **result)(); // rax
  __int64 v7; // r12
  __int64 v8; // r13
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-170h]
  __int64 v16; // [rsp+10h] [rbp-168h]
  __int64 v17; // [rsp+18h] [rbp-160h]
  _QWORD *v18; // [rsp+20h] [rbp-158h]
  __int64 v19; // [rsp+28h] [rbp-150h] BYREF
  __int64 v20; // [rsp+30h] [rbp-148h]
  __int64 v21; // [rsp+38h] [rbp-140h] BYREF
  __int64 v22; // [rsp+40h] [rbp-138h]
  _QWORD *v23; // [rsp+48h] [rbp-130h]
  __int64 v24; // [rsp+50h] [rbp-128h]
  __int64 v25; // [rsp+58h] [rbp-120h]
  __int64 v26; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD *v27; // [rsp+98h] [rbp-E0h]
  __int64 v28; // [rsp+A0h] [rbp-D8h]
  char v29; // [rsp+A8h] [rbp-D0h]
  __int128 v30; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-98h]
  _QWORD v32[2]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v34; // [rsp+100h] [rbp-78h]
  __int64 v35; // [rsp+108h] [rbp-70h]
  __int128 v36; // [rsp+110h] [rbp-68h] BYREF
  __int64 v37; // [rsp+120h] [rbp-58h]
  __int128 v38; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v39; // [rsp+140h] [rbp-38h]

  v19 = a2;
  v20 = a3;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v21, &v19);
  v3 = v21;
  if ( __OFSUB__(-v21, 1LL) )
    core::option::unwrap_failed(&off_F6CA0);
  v17 = v22;
  v18 = v23;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v33, &v19);
  v4 = 0x8000000000000000LL;
  if ( v33 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000LL, v34);
    v5 = (__int64 *)alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    *v5 = v3;
    v5[1] = v17;
    v5[2] = (__int64)v18;
    v26 = 1LL;
    v27 = v5;
    v28 = 1LL;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v21, &v26);
    a1[1] = alloc::boxed::Box<T>::new(&v21);
    result = &off_F6D28;
LABEL_5:
    a1[2] = (unsigned __int64)result;
    *a1 = 0x8000000000000005LL;
    return result;
  }
  v15 = v33;
  v7 = v35;
  v16 = v34;
  core::str::converts::from_utf8(&v21, v34, v35);
  if ( (_DWORD)v21 == 1 )
  {
    v4 = 0x8000000000000001LL;
LABEL_13:
    *a1 = v4;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v15, v16);
    v12 = v3;
    v13 = v17;
    return (__int64 (__fastcall **)())core::ptr::drop_in_place<std::ffi::os_str::OsString>(v12, v13);
  }
  v8 = v22;
  v9 = v23;
  uu_head::parse::parse_obsolete(&v30, v22, v23);
  if ( __OFSUB__(-(__int64)v30, 1LL) )
  {
    v26 = 0LL;
    v27 = (_QWORD *)v8;
    v28 = (__int64)v9;
    v29 = 1;
    v32[0] = &v26;
    v32[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v21 = (__int64)&off_F6C90;
    v22 = 1LL;
    v25 = 0LL;
    v23 = v32;
    v24 = 1LL;
    core::option::Option<T>::map_or_else(&v38, &v21, v10, -(__int64)v30);
    a1[3] = v39;
    *(_OWORD *)(a1 + 1) = v38;
    goto LABEL_13;
  }
  if ( (_QWORD)v30 == 0x8000000000000001LL )
  {
    v11 = (__int64 *)alloc::alloc::Global::alloc_impl(8LL, 48LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    *v11 = v3;
    v11[1] = v17;
    v11[2] = (__int64)v18;
    v11[3] = v15;
    v11[4] = v16;
    v11[5] = v7;
    v21 = 2LL;
    v22 = (__int64)v11;
    v23 = (_QWORD *)(&dword_0 + 2);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v26, &v21);
    core::iter::traits::iterator::Iterator::chain(&v21, &v26, v19, v20);
    a1[1] = alloc::boxed::Box<T>::new(&v21);
    result = &off_F6CB8;
    goto LABEL_5;
  }
  v37 = v31;
  v36 = v30;
  v14 = (__int64 *)alloc::alloc::Global::alloc_impl(8LL, 24LL);
  if ( !v14 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  *v14 = v3;
  v14[1] = v17;
  v14[2] = (__int64)v18;
  v26 = 1LL;
  v27 = v14;
  v28 = 1LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v21, &v26);
  core::iter::traits::iterator::Iterator::chain(&v26, &v21, &v36);
  core::iter::traits::iterator::Iterator::chain(&v21, &v26, v19, v20);
  a1[1] = alloc::boxed::Box<T>::new(&v21);
  a1[2] = (unsigned __int64)&off_F6CF0;
  *a1 = 0x8000000000000005LL;
  v12 = v15;
  v13 = v16;
  return (__int64 (__fastcall **)())core::ptr::drop_in_place<std::ffi::os_str::OsString>(v12, v13);
}