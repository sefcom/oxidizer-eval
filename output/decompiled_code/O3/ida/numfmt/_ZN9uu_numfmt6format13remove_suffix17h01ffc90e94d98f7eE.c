unsigned __int64 __fastcall uu_numfmt::format::remove_suffix(__int64 a1, char a2, char a3, char a4, double a5)
{
  unsigned __int8 v5; // al
  bool v6; // dl
  bool v7; // al
  double **v8; // rsi
  char v9; // r8
  unsigned __int8 v10; // dl
  const char *v11; // rcx
  unsigned __int64 result; // rax
  char v13; // [rsp+Fh] [rbp-79h] BYREF
  double v14; // [rsp+10h] [rbp-78h] BYREF
  char **v15; // [rsp+18h] [rbp-70h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+20h] [rbp-68h]
  double **v17; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall *v18)(); // [rsp+30h] [rbp-58h]
  _QWORD *v19; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall *v20)(); // [rsp+40h] [rbp-48h]
  _QWORD v21[2]; // [rsp+48h] [rbp-40h] BYREF
  double *v22; // [rsp+58h] [rbp-30h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+60h] [rbp-28h]
  char ***v24; // [rsp+68h] [rbp-20h]
  __int64 (__fastcall *v25)(); // [rsp+70h] [rbp-18h]
  __int64 v26; // [rsp+78h] [rbp-10h]

  v14 = a5;
  v5 = a4 - 2;
  if ( a3 != 2 )
  {
    v9 = 2;
    if ( v5 < 4u )
      v9 = a4 - 2;
    switch ( v9 )
    {
      case 0:
        if ( (a3 & 1) != 0 )
          goto LABEL_23;
        goto LABEL_19;
      case 1:
        if ( (a3 & 1) != 0 )
          return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, aThisSuffixIsUn, 45LL);
LABEL_19:
        switch ( a2 )
        {
          case 0:
            a5 = a5 * 1000.0;
            break;
          case 1:
            a5 = a5 * 1000000.0;
            break;
          case 2:
            a5 = a5 * 1000000000.0;
            break;
          case 3:
            a5 = a5 * 1.0e12;
            break;
          case 4:
            a5 = a5 * 1.0e15;
            break;
          case 5:
            a5 = a5 * 1.0e18;
            break;
          case 6:
            a5 = a5 * 1.0e21;
            break;
          case 7:
            a5 = a5 * 1.0e24;
            break;
        }
        goto LABEL_38;
      case 2:
        if ( (a3 & 1) != 0 )
        {
          if ( (a4 & 1) == 0 )
            return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, aThisSuffixIsUn, 45LL);
        }
        else if ( (a4 & 1) != 0 )
        {
          LOBYTE(v21[0]) = a2;
          v22 = &v14;
          v23 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
          v24 = (char ***)v21;
          v25 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
          v15 = &off_1365D8;
          v16 = (__int64 (__fastcall *)())(&dword_0 + 3);
          v19 = 0LL;
          v17 = &v22;
          v18 = (__int64 (__fastcall *)())(&dword_0 + 2);
          goto LABEL_5;
        }
LABEL_23:
        switch ( a2 )
        {
          case 0:
            a5 = a5 * 1024.0;
            break;
          case 1:
            a5 = a5 * 1048576.0;
            break;
          case 2:
            a5 = a5 * 1073741824.0;
            break;
          case 3:
            JUMPOUT(0xC3D84LL);
          case 4:
            a5 = a5 * 1.125899906842624e15;
            break;
          case 5:
            a5 = a5 * 1.152921504606847e18;
            break;
          case 6:
            a5 = a5 * 1.180591620717411e21;
            break;
          case 7:
            a5 = a5 * 1.208925819614629e24;
            break;
        }
        break;
      case 3:
        v13 = a2;
        v10 = a3 & 1;
        v11 = (_BYTE *)(&dword_0 + 1);
        if ( v10 )
          v11 = aI;
        v21[0] = v11;
        v21[1] = v10;
        v15 = (char **)&v14;
        v16 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v17 = (double **)&v13;
        v18 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
        v19 = v21;
        v20 = <&T as core::fmt::Display>::fmt;
        v22 = (double *)&off_136608;
        v23 = (__int64 (__fastcall *)())&byte_4;
        v26 = 0LL;
        v24 = &v15;
        v25 = (__int64 (__fastcall *)())(&dword_0 + 3);
        v8 = &v22;
        return core::option::Option<T>::map_or_else(a1, v8);
    }
    goto LABEL_38;
  }
  v6 = v5 < 4u;
  v7 = v5 != 2;
  if ( (a4 & 1) == 0 || v7 && v6 )
  {
LABEL_38:
    *(double *)(a1 + 8) = a5;
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  v22 = &v14;
  v23 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
  v15 = &off_1365B8;
  v16 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v19 = 0LL;
  v17 = &v22;
  v18 = (__int64 (__fastcall *)())(&dword_0 + 1);
LABEL_5:
  v8 = (double **)&v15;
  return core::option::Option<T>::map_or_else(a1, v8);
}
