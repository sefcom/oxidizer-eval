__int64 __fastcall uu_cat::write_new_line(_QWORD *a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // bp
  __int64 result; // rax
  _BYTE *v10; // r13
  const char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v14[6]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v15[6]; // [rsp+40h] [rbp-68h] BYREF
  char v16; // [rsp+70h] [rbp-38h]

  v6 = a5;
  if ( !*(_BYTE *)(a4 + 9) )
  {
    result = *(unsigned __int8 *)(a4 + 8);
    if ( (_BYTE)result && *a3 && *(_BYTE *)(a4 + 10) )
      goto LABEL_21;
    *(_BYTE *)(a4 + 10) = 1;
    if ( (_BYTE)result && a3[4] == 2 )
    {
      v10 = a3;
      v15[0] = 2LL;
      v15[2] = 0LL;
      v15[3] = 6LL;
      v15[4] = 0LL;
      v15[5] = 32LL;
      v16 = 3;
      v14[0] = &unk_E4E70;
      v14[1] = 2LL;
      v14[4] = v15;
      v14[5] = 1LL;
      v14[2] = &v13;
      v14[3] = 1LL;
      result = ((__int64 (__fastcall *)(__int64, _QWORD *, _BYTE *, __int64, __int64, __int64, __int64, __int64 (__fastcall *)()))std::io::Write::write_fmt)(
                 a2,
                 v14,
                 a3,
                 a4,
                 a5,
                 a6,
                 a4,
                 core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt);
      if ( result )
        goto LABEL_18;
      ++*(_QWORD *)a4;
      a3 = v10;
    }
    if ( a3[2] )
      goto LABEL_13;
LABEL_16:
    v11 = asc_19259;
    v12 = 1LL;
    goto LABEL_17;
  }
  if ( !a3[2] )
  {
    result = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, asc_19258, 1LL);
    if ( result )
      goto LABEL_18;
    *(_BYTE *)(a4 + 9) = 0;
    goto LABEL_16;
  }
  result = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, aM_0, 2LL);
  if ( result )
  {
LABEL_18:
    *a1 = 0x8000000000000000LL;
    a1[1] = result;
    return result;
  }
  *(_BYTE *)(a4 + 9) = 0;
LABEL_13:
  v11 = asc_19272;
  v12 = 2LL;
LABEL_17:
  result = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, v11, v12);
  if ( result )
    goto LABEL_18;
  if ( v6 )
  {
    result = <std::io::stdio::StdoutLock as std::io::Write>::flush(a2);
    if ( result )
      goto LABEL_18;
  }
LABEL_21:
  *a1 = 0x8000000000000006LL;
  return result;
}
