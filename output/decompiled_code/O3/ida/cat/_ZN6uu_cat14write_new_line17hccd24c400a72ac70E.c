__int64 __fastcall uu_cat::write_new_line(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, char a5)
{
  __int64 v7; // r15
  __int64 result; // rax
  char v9; // r8
  const char *v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // r15
  const char *v13; // rdx
  __int64 v14; // rcx
  _BYTE v15[24]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+28h] [rbp-80h]
  char v19; // [rsp+30h] [rbp-78h]
  _QWORD v20[2]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v21[12]; // [rsp+48h] [rbp-60h] BYREF

  if ( *(_BYTE *)(a4 + 9) )
  {
    if ( a3[2] )
    {
      v7 = a2;
      result = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, &unk_139FE, 2LL);
      if ( !result )
      {
        *(_BYTE *)(a4 + 9) = 0;
        v9 = a5;
        v10 = asc_139FC;
        v11 = 2LL;
        goto LABEL_17;
      }
    }
    else
    {
      v7 = a2;
      result = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, asc_139E1, 1LL);
      if ( !result )
      {
        *(_BYTE *)(a4 + 9) = 0;
        v9 = a5;
        v10 = asc_139E2;
        v11 = 1LL;
LABEL_17:
        result = uu_cat::write_end_of_line(v15, v7, (__int64)v10, v11, v9);
        if ( *(_QWORD *)v15 != 0x8000000000000006LL )
        {
          result = *(_QWORD *)&v15[16];
          *(_QWORD *)(a1 + 16) = *(_QWORD *)&v15[16];
          *(_OWORD *)a1 = *(_OWORD *)v15;
          return result;
        }
        goto LABEL_21;
      }
    }
LABEL_15:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  result = *(unsigned __int8 *)(a4 + 8);
  if ( (_BYTE)result && *a3 && *(_BYTE *)(a4 + 10) )
    goto LABEL_21;
  *(_BYTE *)(a4 + 10) = 1;
  if ( (_BYTE)result && a3[4] == 2 )
  {
    v12 = a3;
    v20[0] = a4;
    v20[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)v15 = 2LL;
    *(_QWORD *)&v15[16] = 0LL;
    v16 = 6LL;
    v17 = 0LL;
    v18 = 32LL;
    v19 = 3;
    v21[0] = &unk_119140;
    v21[1] = 2LL;
    v21[4] = v15;
    v21[5] = 1LL;
    v21[2] = v20;
    v21[3] = 1LL;
    result = std::io::Write::write_fmt(a2, v21);
    if ( result )
      goto LABEL_15;
    ++*(_QWORD *)a4;
    a3 = v12;
  }
  if ( a3[2] )
  {
    v13 = asc_139FC;
    v14 = 2LL;
  }
  else
  {
    v13 = asc_139E2;
    v14 = 1LL;
  }
  uu_cat::write_end_of_line(v15, a2, (__int64)v13, v14, a5);
  result = *(_QWORD *)v15;
  if ( *(_QWORD *)v15 == 0x8000000000000006LL )
  {
LABEL_21:
    *(_QWORD *)a1 = 0x8000000000000006LL;
    return result;
  }
  *(_OWORD *)(a1 + 8) = *(_OWORD *)&v15[8];
  *(_QWORD *)a1 = result;
  return result;
}
