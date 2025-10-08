__int64 __fastcall uu_test::parser::Parser::expect(__int64 a1, __int64 a2)
{
  int v3; // r15d
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+8h] [rbp-70h]
  __int64 v9; // [rsp+10h] [rbp-68h]
  __int64 v10; // [rsp+18h] [rbp-60h]
  _QWORD v11[3]; // [rsp+28h] [rbp-50h] BYREF
  char v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h]

  uu_test::parser::Parser::next_token(&v7, a2);
  v3 = v7;
  if ( v7 == 3
    && (v4 = v9, (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq>::eq(v9, v10, asc_18332, 1LL)) )
  {
    v5 = v8;
    *(_QWORD *)a1 = 7LL;
    return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v5, v4);
  }
  else
  {
    v11[0] = 0LL;
    v11[1] = asc_18332;
    v11[2] = 1LL;
    v12 = 1;
    <T as alloc::string::SpecToString>::spec_to_string(&v13, v11);
    *(_QWORD *)(a1 + 24) = v14;
    *(_OWORD *)(a1 + 8) = v13;
    *(_QWORD *)a1 = 1LL;
    if ( v3 == 3 )
      return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v8, v9);
    else
      return core::ptr::drop_in_place<uu_test::parser::Symbol>(&v7);
  }
}