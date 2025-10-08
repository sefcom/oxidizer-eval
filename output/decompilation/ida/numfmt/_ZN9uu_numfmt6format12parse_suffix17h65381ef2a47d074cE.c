__int64 __fastcall uu_numfmt::format::parse_suffix(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r13
  __int64 v5; // rax
  unsigned __int8 v6; // bp
  int v7; // edx
  __int64 result; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  _QWORD *v13; // rcx
  _QWORD v14[2]; // [rsp+8h] [rbp-A0h] BYREF
  char **v15; // [rsp+18h] [rbp-90h] BYREF
  __int64 v16; // [rsp+20h] [rbp-88h]
  _QWORD *v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+48h] [rbp-60h] BYREF
  __int64 v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  char v23; // [rsp+60h] [rbp-48h]
  _QWORD v24[8]; // [rsp+68h] [rbp-40h] BYREF

  if ( !a3 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aInvalidNumber_0, 18LL);
  LODWORD(v15) = 0;
  v5 = core::char::methods::encode_utf8_raw(105LL, &v15);
  v6 = core::slice::<impl [T]>::ends_with(a2, a3, v5, 1LL);
  v14[0] = a2;
  v14[1] = a2 + a3;
  if ( v6 )
    core::str::validations::next_code_point_reverse(v14);
  if ( (core::str::validations::next_code_point_reverse(v14) & 1) == 0 )
  {
LABEL_9:
    v20 = 0LL;
    v21 = a2;
    v22 = a3;
    v23 = 1;
    v24[0] = &v20;
    v24[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v15 = &off_1023A0;
    v16 = 1LL;
    v19 = 0LL;
    v17 = v24;
    v18 = 1LL;
    return core::option::Option<T>::map_or_else(a1, &v15);
  }
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
      v9 = ~(unsigned __int64)v6;
      break;
    default:
      if ( ((unsigned int)(v7 - 58) < 0xFFFFFFF6) | v6 )
        goto LABEL_9;
      v6 = 2;
      v9 = 0LL;
      break;
  }
  v10 = a3 + v9;
  v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          v10,
          a2,
          a3);
  if ( !v11 )
    core::str::slice_error_fail(a2, a3, 0LL, v10, &off_1023B0);
  result = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v20, v11);
  if ( (_BYTE)v20 )
  {
    uu_numfmt::format::parse_suffix::{{closure}}(&v15, a2, a3);
    result = (__int64)v15;
    v12 = v16;
    if ( v15 != (char **)0x8000000000000000LL )
    {
      v13 = v17;
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 8) = v12;
      *(_QWORD *)(a1 + 16) = v13;
      return result;
    }
  }
  else
  {
    v12 = v21;
  }
  *(_QWORD *)(a1 + 8) = v12;
  *(_BYTE *)(a1 + 16) = v3;
  *(_BYTE *)(a1 + 17) = v6;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}