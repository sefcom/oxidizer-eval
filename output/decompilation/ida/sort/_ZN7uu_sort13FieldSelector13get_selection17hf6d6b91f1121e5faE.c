__int64 __fastcall uu_sort::FieldSelector::get_selection(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
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
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  char **v27; // r8
  __int64 v28; // rdi
  __int64 v29; // [rsp+8h] [rbp-60h] BYREF
  double v30; // [rsp+10h] [rbp-58h]
  __int64 v31; // [rsp+18h] [rbp-50h]
  __int64 v32; // [rsp+20h] [rbp-48h]
  __int64 v33; // [rsp+2Ch] [rbp-3Ch] BYREF
  bool v34; // [rsp+34h] [rbp-34h]

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
    v27 = &off_18D0B8;
    v28 = a3;
    goto LABEL_18;
  }
  v15 = v13;
  result = *(unsigned __int8 *)(a2 + 53);
  if ( (unsigned int)result >= 2 )
  {
    if ( (_DWORD)result != 2 )
    {
      v23 = a1;
      *a1 = v15;
      a1[1] = v14;
      v19 = 4;
      goto LABEL_16;
    }
    a4 = v14;
    range = uu_sort::get_leading_gen(v15, v14);
    v12 = v24;
    v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            range,
            v24,
            v15,
            a4);
    if ( v25 )
    {
      core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v29, v25, v26);
      if ( (_BYTE)v29 )
      {
        result = 0LL;
        v23 = a1;
      }
      else
      {
        a7 = v30;
        v23 = a1;
        if ( v30 > -INFINITY )
          result = 3 - ((v30 < INFINITY) - 1LL);
        else
          result = 2LL;
      }
      *v23 = result;
      *((double *)v23 + 1) = a7;
      v19 = 2;
      goto LABEL_16;
    }
    v27 = &off_18D0E8;
    v28 = v15;
LABEL_18:
    core::str::slice_error_fail(v28, a4, range, v12, v27);
  }
  v34 = (_BYTE)result == 1;
  v33 = 0x2E00110000LL;
  v17 = v14;
  uu_sort::numeric_str_cmp::NumInfo::parse(&v29, v15, v14, &v33);
  v18 = v29;
  v19 = LOBYTE(v30);
  v20 = v31;
  v21 = v32;
  result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
             v31,
             v32,
             v15,
             v17);
  if ( !result )
    core::str::slice_error_fail(v15, v17, v20, v21, &off_18D0D0);
  v23 = a1;
  *a1 = result;
  a1[1] = v22;
  a1[2] = v18;
LABEL_16:
  *((_BYTE *)v23 + 24) = v19;
  return result;
}