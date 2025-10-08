const char *__fastcall uu_od::parse_inputs::parse_offset_operand(const char **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r13
  unsigned int v13; // ebp
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int8 v17; // bl
  __int64 v18; // rax
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rbp
  __int64 v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  const char *result; // rax
  __int64 v28; // rcx
  const char **v29; // rdx
  char **v30; // r8
  char **v31; // r8
  int v32; // [rsp+8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+18h] [rbp-40h]
  const char **v35; // [rsp+20h] [rbp-38h]

  v32 = 0;
  v4 = core::char::methods::encode_utf8_raw(43LL, &v32);
  v5 = (unsigned __int8)core::slice::<impl [T]>::starts_with(a2, a3, v4, 1LL);
  v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
         v5,
         a3,
         a2,
         a3);
  if ( !v6 )
  {
    v30 = &off_102738;
    goto LABEL_20;
  }
  v8 = core::slice::<impl [T]>::starts_with(v6, v7, a0x, 2LL);
  v35 = a1;
  if ( v8 )
  {
LABEL_5:
    v5 |= 2uLL;
    v13 = 16;
    v14 = 1LL;
    v15 = a3;
    goto LABEL_10;
  }
  v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
         v5,
         a3,
         a2,
         a3);
  if ( !v9 )
  {
    v30 = &off_102750;
LABEL_20:
    core::str::slice_error_fail(a2, a3, v5, a3, v30);
  }
  v11 = v9;
  v12 = v10;
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v9, v10, a0x_0, 2LL) )
    goto LABEL_5;
  v32 = 0;
  v16 = core::char::methods::encode_utf8_raw(98LL, &v32);
  v17 = core::slice::<impl [T]>::ends_with(v11, v12, v16);
  v15 = a3 - v17;
  v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v5,
          v15,
          a2,
          a3);
  if ( !v18 )
  {
    v31 = &off_102768;
LABEL_18:
    core::str::slice_error_fail(a2, a3, v5, v15, v31);
  }
  v20 = v17 == 0;
  v34 = v18;
  v14 = 1LL;
  if ( !v20 )
    v14 = 512LL;
  v32 = 0;
  v21 = v19;
  v22 = core::char::methods::encode_utf8_raw(46LL, &v32);
  v23 = core::slice::<impl [T]>::ends_with(v34, v21, v22);
  v13 = 2 * v23 + 8;
  v15 -= v23;
LABEL_10:
  v24 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v5,
          v15,
          a2,
          a3);
  if ( !v24 )
  {
    v31 = &off_102780;
    goto LABEL_18;
  }
  core::num::<impl u64>::from_ascii_radix(&v32, v24, v25, v13);
  v26 = v33 * v14;
  result = 0LL;
  if ( (_BYTE)v32 )
    result = aParseFailed;
  v28 = 12LL;
  if ( !(_BYTE)v32 )
    v28 = v26;
  v29 = v35;
  *v35 = result;
  v29[1] = (const char *)v28;
  return result;
}