_QWORD *__fastcall uu_od::parse_inputs::parse_offset_operand(_QWORD *a1, const void *a2, size_t a3)
{
  _QWORD *v4; // rbx
  const void *v5; // rax
  size_t v6; // rdx
  __int64 v7; // r12
  _WORD *v8; // rax
  unsigned __int64 v9; // rdx
  _WORD *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r13
  unsigned __int64 v15; // rbp
  const void *v16; // rax
  size_t v17; // rdx
  __int64 v18; // rcx
  size_t v19; // rbp
  unsigned int v20; // r13d
  int v21; // eax
  __int64 v22; // rax
  size_t v23; // rdx
  __int64 v24; // r13
  size_t v25; // rbx
  const void *v26; // rax
  size_t v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rsi
  unsigned __int128 v32; // rax
  char **v34; // r8
  char **v35; // r8
  int v36; // [rsp+4h] [rbp-54h] BYREF
  _QWORD *v37; // [rsp+8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+10h] [rbp-48h]
  char v39[8]; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v40; // [rsp+20h] [rbp-38h]

  v4 = a1;
  v36 = 0;
  v5 = (const void *)core::char::methods::encode_utf8_raw(43LL, &v36, 4LL);
  v7 = v6 <= a3 && bcmp(v5, a2, v6) == 0;
  v8 = (_WORD *)core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v7,
                  a3,
                  a2,
                  a3);
  if ( !v8 )
  {
    v34 = &off_12C930;
    goto LABEL_34;
  }
  if ( v9 >= 2 && *v8 == 30768 )
    goto LABEL_13;
  v10 = (_WORD *)core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                   v7,
                   a3,
                   a2,
                   a3);
  if ( !v10 )
  {
    v34 = &off_12C948;
    goto LABEL_34;
  }
  if ( v11 >= 2 && *v10 == 22576 )
  {
LABEL_13:
    v7 |= 2uLL;
    v20 = 16;
    v38 = 1LL;
    v19 = a3;
    goto LABEL_22;
  }
  v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v7,
          a3,
          a2,
          a3);
  if ( !v12 )
  {
    v34 = &off_12C960;
LABEL_34:
    core::str::slice_error_fail(a2, a3, v7, a3, v34);
  }
  v14 = v12;
  v15 = v13;
  v36 = 0;
  v16 = (const void *)core::char::methods::encode_utf8_raw(98LL, &v36, 4LL);
  if ( v15 >= v17 )
  {
    v21 = bcmp(v16, (const void *)(v15 - v17 + v14), v17);
    v18 = 1LL;
    v19 = a3;
    if ( !v21 )
    {
      if ( !a3 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_12C978);
      v19 = a3 - 1;
      v18 = 512LL;
    }
  }
  else
  {
    v18 = 1LL;
    v19 = a3;
  }
  v38 = v18;
  v37 = a1;
  v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v7,
          v19,
          a2,
          a3);
  if ( !v22 )
  {
    v35 = &off_12C990;
LABEL_36:
    core::str::slice_error_fail(a2, a3, v7, v19, v35);
  }
  v24 = v22;
  v25 = v23;
  v36 = 0;
  v26 = (const void *)core::char::methods::encode_utf8_raw(46LL, &v36, 4LL);
  if ( v25 < v27 )
  {
    v20 = 8;
LABEL_21:
    v4 = v37;
    goto LABEL_22;
  }
  v28 = bcmp(v26, (const void *)(v25 - v27 + v24), v27);
  v20 = 8;
  if ( v28 )
    goto LABEL_21;
  v4 = v37;
  if ( !v19 )
    core::panicking::panic_const::panic_const_sub_overflow(&off_12C9A8);
  --v19;
  v20 = 10;
LABEL_22:
  v29 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v7,
          v19,
          a2,
          a3);
  if ( !v29 )
  {
    v35 = &off_12C9C0;
    goto LABEL_36;
  }
  v31 = v29;
  core::num::<impl u64>::from_str_radix(v39, v29, v30, v20);
  if ( (v39[0] & 1) != 0 )
  {
    *v4 = aParseFailed;
    v4[1] = 12LL;
  }
  else
  {
    v32 = v40 * (unsigned __int128)v38;
    if ( !is_mul_ok(v40, v38) )
      core::panicking::panic_const::panic_const_mul_overflow(&off_12C9D8, v31, *((_QWORD *)&v32 + 1));
    v4[1] = v32;
    *v4 = 0LL;
  }
  return v4;
}
