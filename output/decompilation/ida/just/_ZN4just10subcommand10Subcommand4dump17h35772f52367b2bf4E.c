__int64 __fastcall just::subcommand::Subcommand::dump(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  const char *v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  _QWORD *v10; // [rsp+18h] [rbp-40h]
  __int128 v11; // [rsp+20h] [rbp-38h]
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v7 = just::compilation::Compilation::root_ast(a3);
    v12[0] = &v7;
    v12[1] = <&T as core::fmt::Display>::fmt;
    v8 = asc_65DB0;
    v9 = 1LL;
    v10 = v12;
    v11 = 1uLL;
    std::io::stdio::_print(&v8);
  }
  else
  {
    v4 = std::io::stdio::stdout(a1);
    v5 = serde_json::ser::to_writer(v4, a3);
    if ( v5 )
    {
      *(_BYTE *)a1 = 18;
      *(_QWORD *)(a1 + 8) = v5;
      return core::ptr::drop_in_place<just::compilation::Compilation>(a3);
    }
    v8 = (const char *)&off_42DBF8;
    v9 = 1LL;
    v10 = (_QWORD *)&byte_8;
    v11 = 0LL;
    std::io::stdio::_print(&v8);
  }
  *(_BYTE *)a1 = 56;
  return core::ptr::drop_in_place<just::compilation::Compilation>(a3);
}