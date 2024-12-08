__int64 __fastcall uu_seq::numberparse::parse_hexadecimal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // bp
  __int64 v6; // rax
  __int64 v7; // rdx
  char **v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  __int128 v20; // xmm0
  int v21; // esi
  int v22; // esi
  __m256i v23; // [rsp+0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+20h] [rbp-68h]
  __m256i v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+50h] [rbp-38h]

  v23.m256i_i32[0] = 0;
  v4 = core::char::methods::encode_utf8_raw(45LL, &v23);
  v5 = core::slice::<impl [T]>::starts_with(a2, a3, v4, 1LL);
  if ( v5 )
  {
    v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(3LL);
    if ( !v6 )
    {
      v8 = &off_1468F0;
      v9 = 3LL;
      goto LABEL_24;
    }
  }
  else
  {
    v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(2LL);
    if ( !v6 )
    {
      v8 = &off_1468D8;
      v9 = 2LL;
LABEL_24:
      core::str::slice_error_fail(a2, a3, v9, a3, v8);
    }
  }
  v10 = v6;
  v11 = v7;
  v23.m256i_i32[0] = 0;
  v12 = core::char::methods::encode_utf8_raw(45LL, &v23);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, v12, 1LL)
    || (v23.m256i_i32[0] = 0,
        v13 = core::char::methods::encode_utf8_raw(43LL, &v23),
        (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, v13, 1LL)) )
  {
    *(_BYTE *)(a1 + 8) = 0;
LABEL_8:
    *(_QWORD *)a1 = 0x8000000000000004LL;
    return a1;
  }
  num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(
    &v23,
    v10,
    v11,
    16LL);
  if ( v23.m256i_i64[0] == 0x8000000000000000LL )
  {
    *(_BYTE *)(a1 + 8) = 2;
    goto LABEL_8;
  }
  v17 = v23.m256i_u8[8];
  v18 = v23.m256i_i64[3];
  v25.m256i_i64[3] = v23.m256i_i64[3];
  *(_OWORD *)((char *)&v25.m256i_u64[1] + 1) = *(_OWORD *)((char *)&v23.m256i_u64[1] + 1);
  v25.m256i_i64[0] = v23.m256i_i64[0];
  v25.m256i_i8[8] = v23.m256i_i8[8];
  v26 = 0LL;
  v23 = (__m256i)ymmword_1BCF8;
  v24 = 0LL;
  v19 = ((__int64 (__fastcall *)(__m256i *, __m256i *, __int64, __int64, __int64, __int64))bigdecimal::impl_cmp::<impl core::cmp::PartialEq for bigdecimal::BigDecimal>::eq)(
          &v25,
          &v23,
          v18,
          v17,
          v15,
          v16);
  if ( v5 )
  {
    if ( v19 )
    {
      *(_QWORD *)a1 = 0x8000000000000002LL;
      *(_QWORD *)(a1 + 40) = 2LL;
      *(_QWORD *)(a1 + 48) = 0LL;
      core::ptr::drop_in_place<bigdecimal::BigDecimal>(&v25);
    }
    else
    {
      v21 = v25.m256i_u8[24];
      *(_QWORD *)(a1 + 16) = v25.m256i_i64[2];
      *(_OWORD *)a1 = *(_OWORD *)v25.m256i_i8;
      if ( v21 )
        *(_BYTE *)(a1 + 24) = v21 == 1;
      else
        *(_BYTE *)(a1 + 24) = 2;
      v22 = *(__int32 *)((char *)&v25.m256i_i32[6] + 1);
      *(_DWORD *)(a1 + 28) = v25.m256i_i32[7];
      *(_DWORD *)(a1 + 25) = v22;
      *(_OWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 48) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v26;
    v20 = *(_OWORD *)v25.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v25.m256i_u64[2];
    *(_OWORD *)a1 = v20;
    *(_OWORD *)(a1 + 40) = 0LL;
  }
  core::ptr::drop_in_place<bigdecimal::BigDecimal>(&v23);
  return a1;
}
