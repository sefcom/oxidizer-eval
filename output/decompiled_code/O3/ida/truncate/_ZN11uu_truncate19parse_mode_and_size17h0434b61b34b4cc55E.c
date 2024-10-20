char *__fastcall uu_truncate::parse_mode_and_size(__int64 *a1, __int64 a2, __int64 a3)
{
  char *result; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned int v6; // r12d
  __int64 v7; // rdx
  char *v8; // r15
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  __int64 v12; // r13
  __int64 (__fastcall *v13)(); // rcx
  __int64 v14; // rdx
  _QWORD v15[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v16; // [rsp+10h] [rbp-E8h]
  __int128 v17; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD *v18; // [rsp+30h] [rbp-C8h]
  __int64 v19; // [rsp+38h] [rbp-C0h]
  __int64 v20; // [rsp+40h] [rbp-B8h]
  _QWORD v21[2]; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-90h] BYREF
  char v23; // [rsp+80h] [rbp-78h]
  _QWORD v24[4]; // [rsp+88h] [rbp-70h] BYREF
  __int16 v25; // [rsp+A8h] [rbp-50h]
  char v26; // [rsp+AAh] [rbp-4Eh]
  char *v27; // [rsp+B8h] [rbp-40h] BYREF
  __int128 v28; // [rsp+C0h] [rbp-38h]

  result = (char *)core::str::<impl str>::trim_matches(a2, a3);
  if ( !v4 )
  {
    *a1 = 1LL;
    a1[1] = 0LL;
    a1[2] = 1LL;
    a1[3] = 0LL;
    return result;
  }
  v5 = v4;
  v6 = (unsigned __int8)*result;
  if ( (v6 & 0x80u) != 0 )
  {
    v9 = v6 & 0x1F;
    v10 = result[1] & 0x3F;
    if ( (unsigned __int8)v6 <= 0xDFu )
    {
      v6 = v10 | (v9 << 6);
      if ( v6 > 0x3E )
        goto LABEL_17;
    }
    else
    {
      v11 = (v10 << 6) | result[2] & 0x3F;
      if ( (unsigned __int8)v6 < 0xF0u )
      {
        v6 = (v9 << 12) | v11;
        if ( v6 > 0x3E )
          goto LABEL_17;
      }
      else
      {
        v6 = ((v6 & 7) << 18) | (v11 << 6) | result[3] & 0x3F;
        if ( v6 > 0x3E )
          goto LABEL_17;
      }
    }
  }
  else if ( v6 > 0x3E )
  {
    goto LABEL_17;
  }
  v7 = 0x5000A82000000000LL;
  if ( _bittest64(&v7, v6) )
  {
    v8 = result + 1;
    if ( v5 == 1 )
    {
      v5 = 0LL;
    }
    else
    {
      if ( *v8 < -64 )
        core::str::slice_error_fail(result, v5, 1LL, v5, &off_E0980);
      --v5;
    }
    goto LABEL_18;
  }
LABEL_17:
  v8 = result;
LABEL_18:
  v25 = 0;
  v26 = 0;
  v24[0] = 0LL;
  v24[2] = 0LL;
  uucore::parser::parse_size::Parser::parse(v15, v24, v8, v5);
  v12 = v15[0];
  if ( v15[0] == 3LL )
  {
    if ( *((_QWORD *)&v16 + 1) )
    {
      v22[0] = 0LL;
      v22[1] = v8;
      v22[2] = v5;
      v23 = 1;
      v21[0] = v22;
      v21[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v17 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
      *((_QWORD *)&v17 + 1) = 2LL;
      v20 = 0LL;
      v18 = v21;
      v19 = 1LL;
      alloc::fmt::format::format_inner(&v27, &v17);
      result = v27;
      v17 = v28;
      v12 = 2LL;
    }
    else
    {
      result = (char *)v16;
    }
  }
  else
  {
    result = (char *)v15[1];
    v17 = v16;
  }
  v13 = uu_truncate::TruncateMode::Absolute;
  switch ( v6 )
  {
    case '%':
      v13 = (__int64 (__fastcall *)())uu_truncate::TruncateMode::RoundUp;
      if ( (_DWORD)v12 == 3 )
        goto LABEL_34;
      goto LABEL_27;
    case '+':
      v13 = uu_truncate::TruncateMode::Extend;
      if ( (_DWORD)v12 != 3 )
        goto LABEL_27;
      goto LABEL_34;
    case '-':
      v13 = uu_truncate::TruncateMode::Reduce;
      if ( (_DWORD)v12 != 3 )
        goto LABEL_27;
      goto LABEL_34;
    case '/':
      v13 = uu_truncate::TruncateMode::RoundDown;
      goto LABEL_33;
    case '<':
      v13 = uu_truncate::TruncateMode::AtMost;
      if ( (_DWORD)v12 != 3 )
        goto LABEL_27;
      goto LABEL_34;
    case '>':
      v13 = uu_truncate::TruncateMode::AtLeast;
      if ( (_DWORD)v12 != 3 )
        goto LABEL_27;
      goto LABEL_34;
    default:
LABEL_33:
      if ( (_DWORD)v12 == 3 )
      {
LABEL_34:
        result = (char *)((__int64 (__fastcall *)(char *))v13)(result);
        a1[2] = v14;
      }
      else
      {
LABEL_27:
        *((_OWORD *)a1 + 1) = v17;
      }
      a1[1] = (__int64)result;
      *a1 = v12;
      break;
  }
  return result;
}
