__int64 __fastcall rg::flags::parse::lookup(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = rg::flags::parse::Parser::new();
  rg::flags::parse::Parser::find_long(v5, v2, a1, a2);
  v3 = 0LL;
  if ( __OFSUB__(0LL, v5[0]) )
    v3 = *(_QWORD *)v5[1];
  core::ptr::drop_in_place<lexopt::LastOption>(v5);
  return v3;
}