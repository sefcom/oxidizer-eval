__int64 __fastcall uu_cat::write_nonprint_to_end(__int64 a1, __int64 a2, __int64 a3, const char *a4, __int64 a5)
{
  __int64 i; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  const char *v13; // rsi
  __int64 v14; // rax
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h]

  v17 = a5;
  if ( !a2 )
    return 0LL;
  for ( i = 0LL; i != a2; ++i )
  {
    v10 = *(unsigned __int8 *)(a1 + i);
    switch ( v10 )
    {
      case 9:
        v12 = a3;
        v13 = a4;
        v11 = v17;
        goto LABEL_17;
      case 127:
        v11 = 2LL;
        v12 = a3;
        v13 = asc_19278;
        goto LABEL_17;
      case 10:
        return i;
    }
    if ( (unsigned __int8)v10 < 0x20u )
    {
      LOBYTE(v16) = 94;
      BYTE1(v16) = v10 | 0x40;
      v11 = 2LL;
LABEL_16:
      v12 = a3;
      v13 = (const char *)&v16;
      goto LABEL_17;
    }
    if ( (unsigned __int8)(v10 - 32) < 0x5Fu )
    {
      LOBYTE(v16) = *(_BYTE *)(a1 + i);
      v11 = 1LL;
      goto LABEL_16;
    }
    if ( (char)v10 < -96 )
    {
      qmemcpy(&v16, "M-^", 3);
      BYTE3(v16) = v10 - 64;
      v11 = 4LL;
      goto LABEL_16;
    }
    if ( (unsigned __int8)(v10 + 96) < 0x5Fu )
    {
      LOWORD(v16) = 11597;
      BYTE2(v16) = v10 & 0x7F;
      v11 = 3LL;
      goto LABEL_16;
    }
    v11 = 4LL;
    v12 = a3;
    v13 = aM;
LABEL_17:
    v14 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(v12, v13, v11);
    if ( v14 )
    {
      v16 = v14;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v16, &off_E4CE8, &off_E4F38);
    }
  }
  return a2;
}
