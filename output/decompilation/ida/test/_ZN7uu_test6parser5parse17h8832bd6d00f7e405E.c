__int64 __fastcall uu_test::parser::parse(__int64 a1)
{
  __int128 v1; // xmm0
  _OWORD v3[2]; // [rsp+8h] [rbp-80h] BYREF
  __int128 v4; // [rsp+28h] [rbp-60h] BYREF
  __int64 v5; // [rsp+38h] [rbp-50h]
  _BYTE v6[72]; // [rsp+40h] [rbp-48h] BYREF

  uu_test::parser::Parser::new(&v4);
  uu_test::parser::Parser::parse((__int64)v3, (__int64)&v4);
  if ( LODWORD(v3[0]) == 7 )
  {
    *(_QWORD *)(a1 + 24) = v5;
    *(_OWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 7LL;
    core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(v6);
  }
  else
  {
    v1 = v3[0];
    *(_OWORD *)(a1 + 16) = v3[1];
    *(_OWORD *)a1 = v1;
    core::ptr::drop_in_place<uu_test::parser::Parser>(&v4);
  }
  return a1;
}
