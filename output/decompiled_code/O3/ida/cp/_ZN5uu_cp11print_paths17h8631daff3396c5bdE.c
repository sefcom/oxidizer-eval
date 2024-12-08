__int64 __fastcall uu_cp::print_paths(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *i; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v14; // [rsp+8h] [rbp-100h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+10h] [rbp-F8h]
  __int128 v16; // [rsp+18h] [rbp-F0h]
  void *v17; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h]
  _QWORD *v19; // [rsp+38h] [rbp-D0h]
  __int64 v20; // [rsp+40h] [rbp-C8h]
  __int64 v21; // [rsp+48h] [rbp-C0h]
  __int64 v22; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h]
  __int64 v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+70h] [rbp-98h]
  _QWORD v26[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v27[2]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v28[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-40h] BYREF

  if ( a1 )
  {
    v25 = a2;
    v24 = a3;
    v23 = a4;
    v22 = a5;
    uu_cp::aligned_ancestors((__int64)&v17);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v28, &v17);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v14, v28);
    for ( i = v14; v14; i = v14 )
    {
      v27[0] = i;
      v27[1] = v15;
      v29 = v16;
      v26[0] = v27;
      v26[1] = <std::path::Display as core::fmt::Display>::fmt;
      v26[2] = &v29;
      v26[3] = <std::path::Display as core::fmt::Display>::fmt;
      v17 = &unk_1B5878;
      v18 = 3LL;
      v21 = 0LL;
      v19 = v26;
      v20 = 2LL;
      std::io::stdio::_print(&v17, v28, v5, v15, v6, v7);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v14, v28);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(v28);
    a5 = v22;
    a4 = v23;
    a3 = v24;
    a2 = v25;
  }
  uu_cp::context_for((__int64)v26, a2, a3, a4, a5);
  v14 = v26;
  v15 = <alloc::string::String as core::fmt::Display>::fmt;
  v17 = &unk_1B5618;
  v18 = 2LL;
  v21 = 0LL;
  v19 = &v14;
  v20 = 1LL;
  std::io::stdio::_print(&v17, a2, v9, v10, v11, v12);
  return core::ptr::drop_in_place<alloc::string::String>(v26);
}
