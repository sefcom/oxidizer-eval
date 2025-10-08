__int64 __fastcall uu_stat::Stater::exec(__int64 a1)
{
  bool v1; // bp
  bool v2; // r15
  __int64 v3; // rax
  bool v4; // bp
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  _BOOL4 v8; // r14d
  unsigned int v9; // ebp
  _DWORD dest[14]; // [rsp+8h] [rbp-E0h] BYREF
  int v12; // [rsp+40h] [rbp-A8h]

  std::fs::metadata(dest);
  v1 = dest[0] != 2;
  v2 = (v12 & 0xF000) == 4096;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = v2 && v1;
    v5 = *(_QWORD *)(a1 + 8);
    v6 = 24 * v3;
    v7 = 0LL;
    v8 = v4;
    v9 = 0;
    do
    {
      v9 |= uu_stat::Stater::do_stat(a1, *(_QWORD *)(v5 + v7 + 8), *(_QWORD *)(v5 + v7 + 16), v8);
      v7 += 24LL;
    }
    while ( v6 != v7 );
  }
  else
  {
    return 0;
  }
  return v9;
}