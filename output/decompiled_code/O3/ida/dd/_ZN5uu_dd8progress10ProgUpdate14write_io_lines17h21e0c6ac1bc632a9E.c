__int64 __fastcall uu_dd::progress::ProgUpdate::write_io_lines(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // [rsp+4h] [rbp-54h] BYREF
  char **v5; // [rsp+8h] [rbp-50h] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h]
  _QWORD *v7; // [rsp+18h] [rbp-40h]
  __int128 v8; // [rsp+20h] [rbp-38h]
  _QWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  result = uu_dd::progress::ReadStat::report(a1 + 16);
  if ( !result )
  {
    result = uu_dd::progress::WriteStat::report(a1 + 48, a2);
    if ( !result )
    {
      v3 = *(_DWORD *)(a1 + 40);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v5 = &off_1622D8;
          v6 = 1LL;
          v7 = (_QWORD *)&byte_8;
          v8 = 0LL;
        }
        else
        {
          v4 = *(_DWORD *)(a1 + 40);
          v9[0] = &v4;
          v9[1] = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
          v5 = (char **)&unk_1622E8;
          v6 = 2LL;
          v7 = v9;
          v8 = 1uLL;
        }
        return <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, &v5);
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}
