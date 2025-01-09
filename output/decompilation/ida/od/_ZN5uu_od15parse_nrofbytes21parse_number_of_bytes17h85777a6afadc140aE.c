__int64 *__fastcall uu_od::parse_nrofbytes::parse_number_of_bytes(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r13
  __int64 v5; // r12
  int v6; // ebp
  char v7; // bl
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // edx
  unsigned __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  char v20; // [rsp+7h] [rbp-61h] BYREF
  __int64 *v21; // [rsp+8h] [rbp-60h]
  unsigned int v22; // [rsp+14h] [rbp-54h]
  int v23; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+20h] [rbp-48h]
  _QWORD v25[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = a1;
  v5 = 2LL;
  v6 = 16;
  v7 = 1;
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a2, a3, a0x_3, 2LL)
    || (v5 = 2LL, (unsigned __int8)core::slice::<impl [T]>::starts_with(a2, a3, a0x_4, 2LL)) )
  {
LABEL_5:
    v21 = a1;
    v25[0] = a2;
    v25[1] = a2 + a3;
    v11 = 1LL;
    v22 = v6;
    if ( (unsigned int)core::str::validations::next_code_point_reverse(v25) )
    {
      switch ( v10 )
      {
        case 'B':
          v12 = a3;
          if ( v7 )
            goto LABEL_25;
          if ( (unsigned int)core::str::validations::next_code_point_reverse(v25) )
          {
            v12 = a3 - 2;
            switch ( v14 )
            {
              case 'E':
                v11 = 1000000000000000000LL;
                goto LABEL_25;
              case 'G':
                v11 = 1000000000LL;
                goto LABEL_25;
              case 'K':
              case 'k':
                v11 = 1000LL;
                goto LABEL_25;
              case 'M':
              case 'm':
                v11 = (unsigned __int64)<T as alloc::slice::hack::ConvertVec>::to_vec;
                goto LABEL_25;
              case 'P':
                v11 = 1000000000000000LL;
                goto LABEL_25;
              case 'T':
                v11 = 1000000000000LL;
                goto LABEL_25;
              default:
                break;
            }
          }
          v4 = v21;
          <T as alloc::slice::hack::ConvertVec>::to_vec(v21 + 1, a2, a3);
          *v21 = 1LL;
          break;
        case 'E':
          v12 = a3 - ((unsigned __int8)v7 ^ 1u);
          v11 = 0x1000000000000000LL;
          if ( v7 )
            v11 = 1LL;
          goto LABEL_25;
        case 'G':
          v12 = a3 - 1;
          v11 = 0x40000000LL;
          goto LABEL_25;
        case 'K':
        case 'k':
          v12 = a3 - 1;
          v11 = 1024LL;
          goto LABEL_25;
        case 'M':
        case 'm':
          v12 = a3 - 1;
          v11 = 0x100000LL;
          goto LABEL_25;
        case 'P':
          v12 = a3 - 1;
          v11 = 0x4000000000000LL;
          goto LABEL_25;
        case 'T':
          v12 = a3 - 1;
          v11 = 0x10000000000LL;
          goto LABEL_25;
        case 'b':
          v12 = a3 - ((unsigned __int8)v7 ^ 1u);
          v11 = 512LL;
          if ( v7 )
            v11 = 1LL;
          goto LABEL_25;
        default:
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v12 = a3;
LABEL_25:
      v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              v5,
              v12,
              a2,
              a3);
      if ( !v15 )
        core::str::slice_error_fail(a2, a3, v5, v12, &off_143340);
      core::num::<impl u64>::from_str_radix(&v23, v15, v16, v22);
      if ( (_BYTE)v23 )
      {
        v20 = BYTE1(v23);
        v4 = v21;
        <T as alloc::string::ToString>::to_string(v21 + 1, &v20);
        *v4 = 1LL;
      }
      else
      {
        v17 = v24 * v11;
        if ( is_mul_ok(v24, v11) )
        {
          v4 = v21;
          v21[1] = v17;
          v18 = 3LL;
        }
        else
        {
          v4 = v21;
          <T as alloc::slice::hack::ConvertVec>::to_vec(v21 + 1, a2, a3);
          v18 = 2LL;
        }
        *v4 = v18;
      }
    }
    return v4;
  }
  v23 = 0;
  v8 = core::char::methods::encode_utf8_raw(48LL, &v23);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a2, a3, v8, v9) )
  {
    v6 = 8;
    v5 = 0LL;
    v7 = 0;
    goto LABEL_5;
  }
  v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          a2,
          a3);
  if ( !v13 )
    core::str::slice_error_fail(a2, a3, 0LL, a3, &off_143328);
  uucore::parser::parse_size::parse_size_u64(a1, v13);
  return v4;
}
