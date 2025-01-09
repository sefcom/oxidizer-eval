const char *__fastcall uu_od::parse_inputs::parse_offset_operand(const char **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int8 v14; // bl
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbp
  bool v18; // zf
  __int64 v19; // rax
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  const char *result; // rax
  __int64 v25; // rcx
  const char **v26; // rdx
  char **v27; // r8
  int v28; // [rsp+8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+10h] [rbp-48h]
  __int64 v30; // [rsp+18h] [rbp-40h]
  const char **v31; // [rsp+20h] [rbp-38h]

  v28 = 0;
  v4 = core::char::methods::encode_utf8_raw(43LL, &v28);
  v5 = (unsigned __int8)core::slice::<impl [T]>::starts_with(a2, a3, v4, 1LL);
  v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
         v5,
         a3,
         a2,
         a3);
  if ( !v6 )
    core::str::slice_error_fail(a2, a3, v5, a3, &off_141F00);
  v8 = v6;
  v9 = v7;
  v31 = a1;
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v6, v7, a0x_1, 2LL)
    || (unsigned __int8)core::slice::<impl [T]>::starts_with(v8, v9, a0x_2, 2LL) )
  {
    v5 |= 2uLL;
    v10 = 1LL;
    v11 = 16;
    v12 = a3;
  }
  else
  {
    v28 = 0;
    v13 = core::char::methods::encode_utf8_raw(98LL, &v28);
    v14 = core::slice::<impl [T]>::ends_with(v8, v9, v13, 1LL);
    v12 = a3 - v14;
    v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            v5,
            v12,
            a2,
            a3);
    v30 = v16;
    if ( !v15 )
    {
      v27 = &off_141F18;
LABEL_17:
      core::str::slice_error_fail(a2, a3, v5, v12, v27);
    }
    v17 = v15;
    v18 = v14 == 0;
    v10 = 512LL;
    if ( v18 )
      v10 = 1LL;
    v28 = 0;
    v19 = core::char::methods::encode_utf8_raw(46LL, &v28);
    v20 = core::slice::<impl [T]>::ends_with(v17, v30, v19, 1LL);
    v12 -= v20;
    v11 = 2 * v20 + 8;
  }
  v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v5,
          v12,
          a2,
          a3);
  if ( !v21 )
  {
    v27 = &off_141F30;
    goto LABEL_17;
  }
  core::num::<impl u64>::from_str_radix(&v28, v21, v22, v11);
  v23 = v29 * v10;
  result = 0LL;
  v25 = 12LL;
  if ( (_BYTE)v28 )
    result = aParseFailed;
  else
    v25 = v23;
  v26 = v31;
  v31[1] = (const char *)v25;
  *v26 = result;
  return result;
}
