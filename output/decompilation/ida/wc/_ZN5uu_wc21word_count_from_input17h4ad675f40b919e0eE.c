__int64 __fastcall uu_wc::word_count_from_input(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  __int64 v4; // rax
  char v5; // dl
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+8h] [rbp-70h]
  __int128 v12; // [rsp+10h] [rbp-68h] BYREF
  __int128 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int128 v16; // [rsp+40h] [rbp-38h]
  __int128 v17; // [rsp+50h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-18h]

  if ( *a2 == 0x8000000000000001LL )
  {
    v10 = std::io::stdio::stdin();
    v4 = std::io::stdio::Stdin::lock(&v10);
    uu_wc::word_count_from_reader((__int64)&v12, v4, v5 & 1, a3);
  }
  else
  {
    std::fs::File::open(&v10);
    if ( (_DWORD)v10 == 1 )
    {
      result = v11;
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)a1 = 2LL;
      return result;
    }
    uu_wc::word_count_from_reader(&v12, HIDWORD(v10), a3);
  }
  v18 = v14;
  v7 = v12;
  v8 = v13;
  v17 = v13;
  v16 = v12;
  v9 = v15;
  *(_QWORD *)(a1 + 40) = v14;
  *(_OWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v7;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 48) = v9;
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}