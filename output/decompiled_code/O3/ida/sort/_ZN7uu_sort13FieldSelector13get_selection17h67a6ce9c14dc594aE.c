        double a7)
{
  __int64 v9; // rcx
  __int64 range; // rbx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 result; // rax
  __int64 v17; // r13
  __int64 v18; // r12
  char v19; // bp
  __int64 v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  char **v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // [rsp+8h] [rbp-60h] BYREF
  double v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+2Ch] [rbp-3Ch] BYREF
  bool v32; // [rsp+34h] [rbp-34h]

  v9 = 0LL;
  if ( *(_BYTE *)(a2 + 54) )
    v9 = a5;
  range = uu_sort::FieldSelector::get_range(a2, a3, a4, v9, a6);
  v12 = v11;
  v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          range,
          v11,
          a3,
          a4);
  if ( !v13 )
  {
    v24 = &off_1FFAE0;
    v25 = a3;
LABEL_18:
    v26 = a4;
    goto LABEL_20;
  }
  v15 = v13;
  result = *(unsigned __int8 *)(a2 + 53);
  if ( (unsigned int)result < 2 )
  {
    v32 = (_BYTE)result == 1;
    v31 = 0x2E00110000LL;
    v17 = v14;
    uu_sort::numeric_str_cmp::NumInfo::parse(&v27, v15, v14, &v31);
    v18 = v27;
    v19 = LOBYTE(v28);
    range = v29;
    v12 = v30;
    result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
               v29,
               v30,
               v15,
               v17);
    if ( result )
    {
      v21 = a1;
      *a1 = result;
      a1[1] = v20;
      a1[2] = v18;
      goto LABEL_16;
    }
    v24 = &off_1FFAF8;
    v25 = v15;
    v26 = v17;
LABEL_20:
    core::str::slice_error_fail(v25, v26, range, v12, v24);
  }
  if ( (_DWORD)result != 2 )
  {
    v21 = a1;
    *a1 = v15;
    a1[1] = v14;
    v19 = 4;
    goto LABEL_16;
  }
  a4 = v14;
  range = uu_sort::get_leading_gen(v15, v14);
  v12 = v22;
  v23 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          range,
          v22,
          v15,
          a4);
  if ( !v23 )
  {
    v24 = &off_1FFB10;
    v25 = v15;
    goto LABEL_18;
  }
  core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v27, v23);
  if ( (_BYTE)v27 )
  {
    result = 0LL;
    v21 = a1;
  }
  else
  {
    a7 = v28;
    v21 = a1;
    if ( v28 > -INFINITY )
      result = 3 - ((v28 < INFINITY) - 1LL);
    else
      result = 2LL;
  }
  *v21 = result;
  *((double *)v21 + 1) = a7;
  v19 = 2;
LABEL_16:
  *((_BYTE *)v21 + 24) = v19;
  return result;
}
