__int64 *__fastcall uu_du::parse_time_style(__int64 *a1, unsigned __int8 *a2, signed __int64 a3)
{
  __int64 v4; // rax
  char *v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rax

  if ( !a2 )
  {
LABEL_7:
    a1[1] = (__int64)aYMDHM;
    a1[2] = 14LL;
LABEL_8:
    v4 = 0LL;
    goto LABEL_17;
  }
  if ( a3 )
  {
    if ( a3 == 3 )
    {
      if ( !(*(_WORD *)a2 ^ 0x7369 | a2[2] ^ 0x6F) )
      {
        a1[1] = (__int64)aYMD;
        a1[2] = 8LL;
        goto LABEL_8;
      }
    }
    else if ( a3 == 8 )
    {
      if ( *(_QWORD *)a2 == 0x6F73692D6C6C7566LL )
      {
        a1[1] = (__int64)aYMDHMSFZ;
        a1[2] = 23LL;
        goto LABEL_8;
      }
      if ( *(_QWORD *)a2 == 0x6F73692D676E6F6CLL )
        goto LABEL_7;
    }
    else if ( a3 < 0 )
    {
      v6 = 0LL;
      goto LABEL_21;
    }
    v6 = 1LL;
    v7 = _rust_alloc(a3, 1LL);
    if ( v7 )
    {
      v5 = (char *)v7;
      goto LABEL_15;
    }
LABEL_21:
    alloc::raw_vec::handle_error(v6, a3);
  }
  v5 = (char *)&dword_0 + 1;
LABEL_15:
  memcpy(v5, a2, a3);
  v8 = (_QWORD *)_rust_alloc(32LL, 8LL);
  if ( !v8 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *v8 = 2LL;
  v8[1] = a3;
  v8[2] = v5;
  v8[3] = a3;
  a1[1] = (__int64)v8;
  a1[2] = (__int64)&off_1349C0;
  v4 = 1LL;
LABEL_17:
  *a1 = v4;
  return a1;
}
