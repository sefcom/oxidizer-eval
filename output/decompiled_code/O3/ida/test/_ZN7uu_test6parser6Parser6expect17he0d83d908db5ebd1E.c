__int64 __fastcall uu_test::parser::Parser::expect(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-70h] BYREF
  __int128 v4; // [rsp+10h] [rbp-68h] BYREF
  __int64 v5; // [rsp+20h] [rbp-58h]
  __int128 v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  char v8; // [rsp+48h] [rbp-30h]
  __int128 v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  uu_test::parser::Parser::next_token((__int64)&v3, a2);
  if ( v3 != 3
    || !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((_QWORD *)&v4 + 1), v5) )
  {
    *(_QWORD *)&v6 = 0LL;
    *((_QWORD *)&v6 + 1) = asc_1D35C;
    v7 = 1LL;
    v8 = 1;
    <T as alloc::string::ToString>::to_string(&v9, &v6);
    *(_QWORD *)(a1 + 24) = v10;
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = 1LL;
    if ( v3 == 3 )
      return core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v4);
    return core::ptr::drop_in_place<uu_test::parser::Symbol>(&v3);
  }
  v7 = v5;
  v6 = v4;
  *(_QWORD *)a1 = 7LL;
  result = core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v6);
  if ( v3 != 3 )
    return core::ptr::drop_in_place<uu_test::parser::Symbol>(&v3);
  return result;
}
