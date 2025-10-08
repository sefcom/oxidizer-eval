__int64 __fastcall uu_numfmt::format::remove_suffix(__int64 a1, char a2, char a3, char a4, double a5)
{
  __int64 result; // rax
  char v6; // r8
  __int64 v7; // rax
  const char *v8; // rcx
  char v9; // [rsp+Fh] [rbp-79h] BYREF
  double v10; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v11[2]; // [rsp+18h] [rbp-70h] BYREF
  double *v12; // [rsp+28h] [rbp-60h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+30h] [rbp-58h]
  double **v14; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall *v15)(); // [rsp+40h] [rbp-48h]
  _QWORD *v16; // [rsp+48h] [rbp-40h]
  __int64 (__fastcall *v17)(); // [rsp+50h] [rbp-38h]
  double *v18; // [rsp+58h] [rbp-30h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+60h] [rbp-28h]
  double **v20; // [rsp+68h] [rbp-20h]
  __int64 (__fastcall *v21)(); // [rsp+70h] [rbp-18h]
  __int64 v22; // [rsp+78h] [rbp-10h]

  v10 = a5;
  if ( a3 == 2 )
    goto LABEL_2;
  v6 = 2;
  if ( (unsigned __int8)(a4 - 2) < 4u )
    v6 = a4 - 2;
  if ( (a3 & 1) != 0 )
  {
    if ( v6 && (v6 != 2 || (a4 & 1) == 0) )
    {
      if ( a4 == 5 )
      {
        v7 = 1LL;
        v8 = aI;
LABEL_21:
        v9 = a2;
        v11[0] = v8;
        v11[1] = v7;
        v12 = &v10;
        v13 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v14 = (double **)&v9;
        v15 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
        v16 = v11;
        v17 = <&T as core::fmt::Display>::fmt;
        v18 = (double *)&off_102408;
        v19 = (__int64 (__fastcall *)())&byte_4;
        v22 = 0LL;
        v20 = &v12;
        v21 = (__int64 (__fastcall *)())(&dword_0 + 3);
        return core::option::Option<T>::map_or_else(a1, &v18);
      }
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aThisSuffixIsUn, 45LL);
    }
LABEL_17:
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
        a5 = a5 * 1.099511627776e12;
        break;
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
LABEL_2:
    *(double *)(a1 + 8) = a5;
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  if ( (unsigned __int8)v6 < 2u )
  {
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
    goto LABEL_2;
  }
  if ( v6 == 2 )
  {
    if ( (a4 & 1) != 0 )
    {
      LOBYTE(v11[0]) = a2;
      v18 = &v10;
      v19 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
      v20 = (double **)v11;
      v21 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
      v12 = (double *)&off_1023D8;
      v13 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v16 = 0LL;
      v14 = &v18;
      v15 = (__int64 (__fastcall *)())(&dword_0 + 2);
      return core::option::Option<T>::map_or_else(a1, &v12);
    }
    goto LABEL_17;
  }
  if ( a4 == 5 )
  {
    v8 = (_BYTE *)(&dword_0 + 1);
    v7 = 0LL;
    goto LABEL_21;
  }
  return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aThisSuffixIsUn, 45LL);
}