__int64 __fastcall uu_wc::word_count_from_input(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  __int64 v4; // rax
  char v5; // dl
  __int64 result; // rax
  __int128 v7; // xmm0
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  _OWORD v10[2]; // [rsp+18h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  if ( *a2 == 0x8000000000000001LL )
  {
    v8 = std::io::stdio::stdin();
    v4 = std::io::stdio::Stdin::lock(&v8);
    uu_wc::word_count_from_reader((__int64)v10, v4, v5 & 1, a3);
  }
  else
  {
    std::fs::File::open(&v8);
    if ( (_DWORD)v8 )
    {
      result = v9;
      *(_QWORD *)(a1 + 8) = v9;
      *(_QWORD *)a1 = 2LL;
      return result;
    }
    uu_wc::word_count_from_reader((__int64)v10, SHIDWORD(v8), a3);
  }
  *(_QWORD *)(a1 + 40) = v11;
  v7 = v10[0];
  *(_OWORD *)(a1 + 24) = v10[1];
  *(_OWORD *)(a1 + 8) = v7;
  if ( v12 )
  {
    *(_QWORD *)(a1 + 48) = v12;
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}
