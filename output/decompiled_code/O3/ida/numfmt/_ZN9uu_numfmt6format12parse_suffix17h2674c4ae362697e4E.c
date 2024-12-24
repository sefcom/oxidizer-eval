char **__fastcall uu_numfmt::format::parse_suffix(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // r12
  __int64 v5; // rax
  unsigned __int8 v6; // bp
  int v7; // edx
  char **result; // rax
  char v9; // al
  unsigned __int64 v10; // rcx
  __int64 v11; // xmm0_8
  _QWORD *v12; // rcx
  _QWORD v13[2]; // [rsp+8h] [rbp-A0h] BYREF
  char **v14; // [rsp+18h] [rbp-90h] BYREF
  __int64 v15; // [rsp+20h] [rbp-88h]
  _QWORD *v16; // [rsp+28h] [rbp-80h]
  __int64 v17; // [rsp+30h] [rbp-78h]
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20; // [rsp+50h] [rbp-58h]
  unsigned __int64 v21; // [rsp+58h] [rbp-50h]
  char v22; // [rsp+60h] [rbp-48h]
  _QWORD v23[8]; // [rsp+68h] [rbp-40h] BYREF

  if ( !a3 )
    return (char **)<T as alloc::slice::hack::ConvertVec>::to_vec(a1, aInvalidNumber_0, 18LL);
  LODWORD(v14) = 0;
  v5 = core::char::methods::encode_utf8_raw(105LL, &v14);
  v6 = core::slice::<impl [T]>::ends_with(a2, a3, v5, 1LL);
  v13[0] = a2;
  v13[1] = a2 + a3;
  if ( v6 )
    core::str::validations::next_code_point_reverse(v13);
  if ( (unsigned int)core::str::validations::next_code_point_reverse(v13) )
  {
    switch ( v7 )
    {
      case 'E':
        v3 = 5;
        goto LABEL_17;
      case 'G':
        v3 = 2;
        goto LABEL_17;
      case 'K':
        v3 = 0;
        goto LABEL_17;
      case 'M':
        v3 = 1;
        goto LABEL_17;
      case 'P':
        v3 = 4;
        goto LABEL_17;
      case 'T':
        v3 = 3;
        goto LABEL_17;
      case 'Y':
        v3 = 7;
        goto LABEL_17;
      case 'Z':
        v3 = 6;
LABEL_17:
        v9 = 0;
        v10 = a3 + ~(unsigned __int64)v6;
        if ( v10 )
          goto LABEL_18;
        goto LABEL_22;
      default:
        if ( ((unsigned int)(v7 - 58) < 0xFFFFFFF6) | v6 )
          goto LABEL_9;
        v6 = 2;
        v9 = 1;
        v10 = a3;
LABEL_18:
        if ( v10 >= a3 )
        {
          if ( !v9 )
            goto LABEL_28;
        }
        else if ( *(char *)(a2 + v10) <= -65 )
        {
LABEL_28:
          core::str::slice_error_fail(a2, a3, 0LL, v10, &off_136580);
        }
LABEL_22:
        result = (char **)core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v19, a2, v10);
        if ( (_BYTE)v19 )
        {
          uu_numfmt::format::parse_suffix::{{closure}}(&v14, a2, a3);
          result = v14;
          v11 = v15;
          if ( v14 != (char **)0x8000000000000000LL )
          {
            v12 = v16;
            *(_QWORD *)a1 = v14;
            *(_QWORD *)(a1 + 8) = v11;
            *(_QWORD *)(a1 + 16) = v12;
            return result;
          }
        }
        else
        {
          v11 = v20;
        }
        *(_QWORD *)(a1 + 8) = v11;
        *(_BYTE *)(a1 + 16) = v3;
        *(_BYTE *)(a1 + 17) = v6;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        break;
    }
  }
  else
  {
LABEL_9:
    v19 = 0LL;
    v20 = a2;
    v21 = a3;
    v22 = 1;
    v23[0] = &v19;
    v23[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v14 = &off_136598;
    v15 = 1LL;
    v18 = 0LL;
    v16 = v23;
    v17 = 1LL;
    return (char **)core::option::Option<T>::map_or_else(a1, &v14);
  }
  return result;
}
