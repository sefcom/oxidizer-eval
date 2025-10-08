__int64 __fastcall uu_dd::Output::write_block(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r14
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a3;
  v4 = 0LL;
LABEL_2:
  v5 = v3 - v4;
  while ( 1 )
  {
    v6 = <uu_dd::Dest as std::io::Write>::write(a1, a2 + v4, v5);
    v8 = v7;
    if ( (v6 & 1) == 0 )
    {
      v4 += v7;
      v3 = a3;
      if ( v4 >= a3 || !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 77LL) )
        return 0LL;
      goto LABEL_2;
    }
    if ( (unsigned __int8)std::io::error::Error::kind(v7) != 35 )
      return 1LL;
    v11[0] = v8;
    core::ptr::drop_in_place<std::io::error::Error>(v11);
  }
}