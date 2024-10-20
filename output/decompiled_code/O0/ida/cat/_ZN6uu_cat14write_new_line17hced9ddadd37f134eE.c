_QWORD *__fastcall uu_cat::write_new_line(_QWORD *a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // bp
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  const char *v13; // rsi
  __int64 v14; // rax
  const char *v15; // rsi
  __int64 v17; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v18[6]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v19[6]; // [rsp+40h] [rbp-68h] BYREF
  char v20; // [rsp+70h] [rbp-38h]

  v6 = a5;
  if ( (*(_BYTE *)(a4 + 9) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a4 + 8) & 1) != 0 )
    {
      if ( (*a3 & 1) != 0 && (*(_BYTE *)(a4 + 10) & 1) != 0 )
      {
LABEL_24:
        *a1 = 0x8000000000000006LL;
        return a1;
      }
      *(_BYTE *)(a4 + 10) = 1;
      if ( a3[4] == 2 )
      {
        v19[0] = 2LL;
        v19[2] = 0LL;
        v19[3] = 6LL;
        v19[4] = 0LL;
        v19[5] = 32LL;
        v20 = 3;
        v18[0] = &unk_108A40;
        v18[1] = 2LL;
        v18[4] = v19;
        v18[5] = 1LL;
        v18[2] = &v17;
        v18[3] = 1LL;
        v12 = ((__int64 (__fastcall *)(__int64, _QWORD *, _BYTE *, __int64, __int64, __int64, __int64, __int64 (__fastcall *)()))std::io::Write::write_fmt)(
                a2,
                v18,
                a3,
                a4,
                a5,
                a6,
                a4,
                core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt);
        if ( v12 )
        {
LABEL_15:
          *a1 = 0x8000000000000000LL;
          a1[1] = v12;
          return a1;
        }
        if ( *(_QWORD *)a4 == -1LL )
          core::panicking::panic_const::panic_const_add_overflow(&off_108AF0);
        ++*(_QWORD *)a4;
      }
    }
    else
    {
      *(_BYTE *)(a4 + 10) = 1;
    }
    v13 = asc_1EBDA;
    if ( (a3[2] & 1) == 0 )
      v13 = asc_1EBD9;
    v12 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, v13, (a3[2] & 1) + 1LL);
    if ( !v12 )
    {
      if ( !v6 )
        goto LABEL_24;
      v12 = <std::io::stdio::StdoutLock as std::io::Write>::flush(a2);
      if ( !v12 )
        goto LABEL_24;
    }
    goto LABEL_15;
  }
  if ( (a3[2] & 1) != 0 )
  {
    v10 = aM_0;
    v11 = 2LL;
  }
  else
  {
    v10 = asc_1EDCF;
    v11 = 1LL;
  }
  v14 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, v10, v11);
  if ( v14 )
    goto LABEL_21;
  *(_BYTE *)(a4 + 9) = 0;
  v15 = asc_1EBDA;
  if ( (a3[2] & 1) == 0 )
    v15 = asc_1EBD9;
  v14 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, v15, (a3[2] & 1) + 1LL);
  if ( v14 || v6 && (v14 = <std::io::stdio::StdoutLock as std::io::Write>::flush(a2)) != 0 )
  {
LABEL_21:
    *a1 = 0x8000000000000000LL;
    a1[1] = v14;
  }
  else
  {
    *a1 = 0x8000000000000006LL;
  }
  return a1;
}
