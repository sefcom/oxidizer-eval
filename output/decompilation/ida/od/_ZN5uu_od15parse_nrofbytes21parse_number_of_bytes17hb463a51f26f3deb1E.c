__int64 __fastcall uu_od::parse_nrofbytes::parse_number_of_bytes(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  int v5; // ebp
  char v6; // bl
  __int64 v7; // rax
  int v8; // edx
  unsigned __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  __int64 result; // rax
  __int64 *v15; // rbx
  __int64 v16; // rax
  int v17; // edx
  bool v18; // zf
  char v19; // [rsp+7h] [rbp-61h] BYREF
  _QWORD *v20; // [rsp+8h] [rbp-60h]
  unsigned int v21; // [rsp+14h] [rbp-54h]
  int v22; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+20h] [rbp-48h]
  _QWORD v24[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = 2LL;
  v5 = 16;
  v6 = 1;
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a2, a3, a0x, 2LL) )
    goto LABEL_5;
  v4 = 2LL;
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a2, a3, a0x_0, 2LL) )
    goto LABEL_5;
  v22 = 0;
  v7 = core::char::methods::encode_utf8_raw(48LL, &v22);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a2, a3, v7, 1LL) )
  {
    v5 = 8;
    v6 = 0;
    v4 = 0LL;
LABEL_5:
    v20 = a1;
    v24[0] = a2;
    v24[1] = a2 + a3;
    v9 = 1LL;
    v21 = v5;
    if ( (core::str::validations::next_code_point_reverse(v24) & 1) != 0 )
    {
      switch ( v8 )
      {
        case 'B':
          v10 = a3;
          if ( v6 )
            break;
          if ( (core::str::validations::next_code_point_reverse(v24) & 1) != 0 )
          {
            v10 = a3 - 2;
            switch ( v17 )
            {
              case 'E':
                v9 = 1000000000000000000LL;
                goto LABEL_9;
              case 'G':
                v9 = 1000000000LL;
                goto LABEL_9;
              case 'K':
              case 'k':
                v9 = 1000LL;
                goto LABEL_9;
              case 'M':
              case 'm':
                v9 = 1000000LL;
                goto LABEL_9;
              case 'P':
                v9 = 1000000000000000LL;
                goto LABEL_9;
              case 'T':
                v9 = 1000000000000LL;
                goto LABEL_9;
              default:
                break;
            }
          }
          result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20 + 1, a2, a3);
          *v20 = 1LL;
          return result;
        case 'E':
          v18 = v6 == 0;
          v9 = 0x1000000000000000LL;
          goto LABEL_27;
        case 'G':
          v10 = a3 - 1;
          v9 = 0x40000000LL;
          break;
        case 'K':
        case 'k':
          v10 = a3 - 1;
          v9 = 1024LL;
          break;
        case 'M':
        case 'm':
          v10 = a3 - 1;
          v9 = 0x100000LL;
          break;
        case 'P':
          v10 = a3 - 1;
          v9 = 0x4000000000000LL;
          break;
        case 'T':
          v10 = a3 - 1;
          v9 = 0x10000000000LL;
          break;
        case 'b':
          v18 = v6 == 0;
          v9 = 512LL;
LABEL_27:
          if ( !v18 )
            v9 = 1LL;
          v10 = a3 - ((unsigned __int8)v6 ^ 1u);
          break;
        default:
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v10 = a3;
    }
LABEL_9:
    v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            v4,
            v10,
            a2,
            a3);
    if ( !v11 )
      core::str::slice_error_fail(a2, a3, v4, v10, &off_1027B0);
    core::num::<impl u64>::from_ascii_radix(&v22, v11, v12, v21);
    if ( (_BYTE)v22 )
    {
      v19 = BYTE1(v22);
      v13 = v20;
      result = <T as alloc::string::SpecToString>::spec_to_string(v20 + 1, &v19);
      *v13 = 1LL;
    }
    else
    {
      v15 = v20;
      if ( is_mul_ok(v23, v9) )
      {
        v20[1] = v23 * v9;
        result = 4LL;
      }
      else
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20 + 1, a2, a3);
        result = 2LL;
      }
      *v15 = result;
    }
    return result;
  }
  v16 = std::path::<impl core::convert::AsRef<std::path::Path> for str>::as_ref(a2, a3);
  if ( !v16 )
    core::str::slice_error_fail(a2, a3, 0LL, a3, &off_102798);
  return uucore::features::parser::parse_size::parse_size_u64(a1, v16);
}