__int64 __fastcall just::subcommand::Subcommand::groups(__int64 a1, _QWORD *a2)
{
  __int128 v3; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v4; // [rsp+18h] [rbp-C0h]
  char **v5; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+28h] [rbp-B0h]
  _QWORD *v7; // [rsp+30h] [rbp-A8h]
  __int128 v8; // [rsp+38h] [rbp-A0h]
  __int128 v9; // [rsp+50h] [rbp-88h] BYREF
  __int64 v10; // [rsp+60h] [rbp-78h]
  _QWORD v11[4]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v12[80]; // [rsp+88h] [rbp-50h] BYREF

  v5 = &off_431050;
  v6 = 1LL;
  v7 = (_QWORD *)&byte_8;
  v8 = 0LL;
  std::io::stdio::_print(&v5);
  just::justfile::Justfile::public_groups((__int64)&v5, a2, *(_BYTE *)(a1 + 419));
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v12, &v5);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3, v12);
  if ( !__OFSUB__(0LL, (_QWORD)v3) )
  {
    do
    {
      v10 = v4;
      v9 = v3;
      v11[0] = a1 + 72;
      v11[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v11[2] = &v9;
      v11[3] = <alloc::string::String as core::fmt::Display>::fmt;
      v5 = (char **)&unk_431060;
      v6 = 3LL;
      v7 = v11;
      v8 = 2uLL;
      std::io::stdio::_print(&v5);
      core::ptr::drop_in_place<alloc::string::String>(&v9);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3, v12);
    }
    while ( (_QWORD)v3 != 0x8000000000000000LL );
  }
  return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v12);
}