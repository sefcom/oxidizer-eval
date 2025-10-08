__int64 __fastcall uu_sort::Line::create(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // r12
  __int64 v16; // r13
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // r15
  double v20; // r14
  char v21; // cl
  __int64 result; // rax
  __int64 v24; // [rsp+8h] [rbp-80h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h] BYREF
  double v28; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+48h] [rbp-40h]
  unsigned __int8 v30; // [rsp+50h] [rbp-38h]

  v8 = a3;
  *(_QWORD *)(a6 + 16) = 0LL;
  if ( !*(_BYTE *)(a7 + 96) )
  {
    if ( *(_BYTE *)(a7 + 152) )
      goto LABEL_3;
LABEL_6:
    v12 = v8;
    if ( (unsigned __int8)core::str::pattern::Pattern::is_contained_in(a2, v8) )
    {
      v13 = 0LL;
    }
    else
    {
      core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v27, a2, v12);
      v13 = (unsigned __int8)v27 ^ 1LL;
    }
    alloc::vec::Vec<T,A>::push(a5 + 72, v13);
    v8 = v12;
    v24 = a2;
    v10 = *(_QWORD *)(a7 + 16);
    if ( !v10 )
      goto LABEL_20;
    goto LABEL_10;
  }
  uu_sort::tokenize(a2, a3, *(unsigned int *)(a7 + 120), a6);
  v8 = a3;
  if ( !*(_BYTE *)(a7 + 152) )
    goto LABEL_6;
LABEL_3:
  v24 = a2;
  v10 = *(_QWORD *)(a7 + 16);
  if ( !v10 )
    goto LABEL_20;
LABEL_10:
  v14 = *(_QWORD *)(a7 + 8);
  v26 = *(_QWORD *)(a6 + 8);
  v15 = *(_QWORD *)(a6 + 16);
  v16 = 56 * v10;
  do
  {
    v18 = v8;
    uu_sort::FieldSelector::get_selection(&v27, v14, v24, v8, v26, v15);
    v19 = v27;
    v20 = v28;
    v21 = v30 - 2;
    if ( (unsigned __int8)(v30 - 2) >= 3u )
      v21 = 1;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        alloc::vec::Vec<T,A>::push(a5 + 24, v29, v30);
        alloc::vec::Vec<T,A>::push(a5, v19, *(_QWORD *)&v20, &off_18CE38);
      }
      else if ( *(_BYTE *)(v14 + 55) )
      {
        alloc::vec::Vec<T,A>::push(a5, v27, *(_QWORD *)&v28, &off_18CE50);
      }
    }
    else
    {
      alloc::vec::Vec<T,A>::push(a5 + 48, v27, v28);
    }
    v14 += 56LL;
    v17 = v16 == 56;
    v16 -= 56LL;
    v8 = v18;
  }
  while ( !v17 );
LABEL_20:
  *a1 = v24;
  a1[1] = v8;
  result = a4;
  a1[2] = a4;
  return result;
}