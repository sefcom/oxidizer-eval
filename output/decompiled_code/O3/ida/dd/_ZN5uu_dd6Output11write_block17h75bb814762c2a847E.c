__int64 __fastcall uu_dd::Output::write_block(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbx
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a3;
  v4 = 0LL;
  do
  {
    v5 = v3 - v4;
    while ( 1 )
    {
      v7 = <uu_dd::Dest as std::io::Write>::write(a1, a2 + v4, v5);
      v8 = v6;
      if ( !v7 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v6) != 35 )
        return v7;
      v11[0] = v8;
      core::ptr::drop_in_place<std::io::error::Error>(v11);
    }
    v4 += v6;
    v3 = a3;
  }
  while ( v4 < a3 && *(_BYTE *)(*(_QWORD *)(a1 + 16) + 77LL) );
  return v7;
}
