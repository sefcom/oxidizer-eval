__int64 __fastcall uu_numfmt::parse_unit_size(__int64 a1, char **a2, size_t a3)
{
  size_t v6; // r12
  void *v7; // r13
  __int64 v8; // r13
  size_t v9; // rax
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // esi
  __int64 v14; // rcx
  double *v15; // rax
  double v16; // xmm0_8
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // [rsp+0h] [rbp-B8h] BYREF
  void *s2; // [rsp+8h] [rbp-B0h]
  size_t n; // [rsp+10h] [rbp-A8h]
  char **v22; // [rsp+18h] [rbp-A0h] BYREF
  void *s1; // [rsp+20h] [rbp-98h]
  _QWORD *v24; // [rsp+28h] [rbp-90h]
  __int64 v25; // [rsp+30h] [rbp-88h]
  __int64 v26; // [rsp+38h] [rbp-80h]
  _QWORD v27[2]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-60h] BYREF
  char v29; // [rsp+70h] [rbp-48h]
  __int128 v30; // [rsp+78h] [rbp-40h] BYREF
  __int64 v31; // [rsp+88h] [rbp-30h]

  v22 = a2;
  s1 = (char *)a2 + a3;
  LOBYTE(v24) = 0;
  <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v19, &v22);
  v6 = n;
  if ( n )
  {
    if ( a3 <= n )
    {
      if ( a3 != n )
LABEL_4:
        core::str::slice_error_fail(a2, a3, n, a3, &off_FAE68);
    }
    else if ( *((char *)a2 + n) <= -65 )
    {
      goto LABEL_4;
    }
    alloc::str::<impl str>::repeat(&v22, a0_2, 1LL, n);
    v7 = s1;
    if ( v24 == (_QWORD *)v6 && !bcmp(s1, s2, v6) )
    {
      if ( v22 )
        _rust_dealloc(v7, v22, 1LL);
      goto LABEL_40;
    }
    if ( v22 )
      _rust_dealloc(v7, v22, 1LL);
  }
  v8 = 1LL;
  v9 = a3 - v6;
  if ( a3 != v6 )
  {
    v10 = *((unsigned __int8 *)a2 + v6);
    if ( (v10 & 0x80u) != 0 )
    {
      v11 = v10 & 0x1F;
      v12 = *((_BYTE *)a2 + v6 + 1) & 0x3F;
      if ( (unsigned __int8)v10 <= 0xDFu )
      {
        v10 = v12 | (v11 << 6);
      }
      else
      {
        v13 = (v12 << 6) | *((_BYTE *)a2 + v6 + 2) & 0x3F;
        if ( (unsigned __int8)v10 < 0xF0u )
          v10 = (v11 << 12) | v13;
        else
          v10 = ((v10 & 7) << 18) | (v13 << 6) | *((_BYTE *)a2 + v6 + 3) & 0x3F;
      }
    }
    switch ( v10 )
    {
      case 'E':
        v14 = 6LL;
        if ( v9 == 1 )
          goto LABEL_33;
        goto LABEL_29;
      case 'G':
        v14 = 3LL;
        if ( v9 == 1 )
          goto LABEL_33;
        goto LABEL_29;
      case 'K':
        v14 = 1LL;
        if ( v9 == 1 )
          goto LABEL_33;
        goto LABEL_29;
      case 'M':
        v14 = 2LL;
        if ( v9 != 1 )
          goto LABEL_29;
        goto LABEL_33;
      case 'P':
        v14 = 5LL;
        if ( v9 == 1 )
          goto LABEL_33;
        goto LABEL_29;
      case 'T':
        v14 = 4LL;
        if ( v9 == 1 )
        {
LABEL_33:
          v15 = (double *)&unk_1DEB8;
        }
        else
        {
LABEL_29:
          if ( v9 != 2 || *((_BYTE *)a2 + v6 + 1) != 105 )
            goto LABEL_40;
          v15 = (double *)&unk_1DF08;
        }
        v16 = v15[v14];
        v17 = 0LL;
        if ( v16 >= 0.0 )
          v17 = (unsigned int)(int)v16;
        v8 = -1LL;
        if ( v16 <= 1.844674407370955e19 )
          v8 = v17;
        break;
      default:
        goto LABEL_40;
    }
  }
  if ( v6 )
  {
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v22, s2, v6);
    if ( (_BYTE)v22 )
    {
LABEL_40:
      v28[0] = 0LL;
      v28[1] = a2;
      v28[2] = a3;
      v29 = 1;
      v27[0] = v28;
      v27[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v22 = &off_FAE80;
      s1 = &dword_0 + 1;
      v26 = 0LL;
      v24 = v27;
      v25 = 1LL;
      alloc::fmt::format::format_inner(&v30, &v22);
      result = v31;
      *(_QWORD *)(a1 + 16) = v31;
      *(_OWORD *)a1 = v30;
      goto LABEL_43;
    }
    v8 *= (_QWORD)s1;
  }
  *(_QWORD *)(a1 + 8) = v8;
  result = 0x8000000000000000LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_43:
  if ( v19 )
    return _rust_dealloc(s2, v19, 1LL);
  return result;
}
