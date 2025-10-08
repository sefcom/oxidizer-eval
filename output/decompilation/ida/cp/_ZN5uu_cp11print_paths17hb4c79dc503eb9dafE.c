__int64 __fastcall uu_cp::print_paths(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *i; // rax
  _QWORD *v7; // [rsp+8h] [rbp-100h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+10h] [rbp-F8h]
  __int128 v9; // [rsp+18h] [rbp-F0h]
  void *v10; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+30h] [rbp-D8h]
  _QWORD *v12; // [rsp+38h] [rbp-D0h]
  __int64 v13; // [rsp+40h] [rbp-C8h]
  __int64 v14; // [rsp+48h] [rbp-C0h]
  __int64 v15; // [rsp+58h] [rbp-B0h]
  __int64 v16; // [rsp+60h] [rbp-A8h]
  __int64 v17; // [rsp+68h] [rbp-A0h]
  __int64 v18; // [rsp+70h] [rbp-98h]
  _QWORD v19[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v20[2]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v21[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v22; // [rsp+C8h] [rbp-40h] BYREF

  if ( a1 )
  {
    v18 = a2;
    v17 = a3;
    v16 = a4;
    v15 = a5;
    uu_cp::aligned_ancestors((__int64)&v10);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v21, &v10);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7, v21);
    for ( i = v7; v7; i = v7 )
    {
      v20[0] = i;
      v20[1] = v8;
      v22 = v9;
      v19[0] = v20;
      v19[1] = <std::path::Display as core::fmt::Display>::fmt;
      v19[2] = &v22;
      v19[3] = <std::path::Display as core::fmt::Display>::fmt;
      v10 = &unk_15E6C0;
      v11 = 3LL;
      v14 = 0LL;
      v12 = v19;
      v13 = 2LL;
      std::io::stdio::_print(&v10);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7, v21);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(v21);
    a5 = v15;
    a4 = v16;
    a3 = v17;
    a2 = v18;
  }
  uu_cp::context_for((__int64)v19, a2, a3, a4, a5);
  v7 = v19;
  v8 = <alloc::string::String as core::fmt::Display>::fmt;
  v10 = &unk_15E620;
  v11 = 2LL;
  v14 = 0LL;
  v12 = &v7;
  v13 = 1LL;
  std::io::stdio::_print(&v10);
  return core::ptr::drop_in_place<alloc::string::String>(v19);
}