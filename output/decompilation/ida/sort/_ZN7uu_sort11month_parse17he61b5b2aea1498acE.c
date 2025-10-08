__int64 __fastcall uu_sort::month_parse(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  char **v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx

  v1 = core::str::<impl str>::trim_matches(a1);
  v3 = v1;
  v4 = v2;
  if ( v2 <= 3 )
  {
    if ( v2 != 3 )
      return 0LL;
  }
  else if ( *(char *)(v1 + 3) <= -65 )
  {
    goto LABEL_9;
  }
  v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
         3LL,
         v1,
         v2);
  if ( !v5 )
    goto LABEL_65;
  if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v5, v6, aJan, 3LL) )
  {
    v7 = &off_18D3D8;
    return *((unsigned __int8 *)v7 + 16);
  }
  if ( v4 < 4 )
  {
LABEL_10:
    v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
           3LL,
           v3,
           v4);
    if ( !v8 )
      goto LABEL_65;
    if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v8, v9, aFeb, 3LL) )
    {
      v7 = &off_18D3F0;
      return *((unsigned __int8 *)v7 + 16);
    }
    if ( v4 < 4 )
      goto LABEL_15;
    goto LABEL_14;
  }
LABEL_9:
  if ( *(char *)(v3 + 3) >= -64 )
    goto LABEL_10;
LABEL_14:
  if ( *(char *)(v3 + 3) < -64 )
    goto LABEL_19;
LABEL_15:
  v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          3LL,
          v3,
          v4);
  if ( !v10 )
    goto LABEL_65;
  if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v10, v11, aMar, 3LL) )
  {
    v7 = &off_18D408;
    return *((unsigned __int8 *)v7 + 16);
  }
  if ( v4 >= 4 )
  {
LABEL_19:
    if ( *(char *)(v3 + 3) < -64 )
      goto LABEL_24;
  }
  v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          3LL,
          v3,
          v4);
  if ( !v12 )
    goto LABEL_65;
  if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v12, v13, aApr, 3LL) )
  {
    v7 = &off_18D420;
    return *((unsigned __int8 *)v7 + 16);
  }
  if ( v4 < 4 )
  {
LABEL_25:
    v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
            3LL,
            v3,
            v4);
    if ( !v14 )
      goto LABEL_65;
    if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v14, v15, aMay, 3LL) )
    {
      v7 = &off_18D438;
      return *((unsigned __int8 *)v7 + 16);
    }
    if ( v4 < 4 )
      goto LABEL_30;
    goto LABEL_29;
  }
LABEL_24:
  if ( *(char *)(v3 + 3) >= -64 )
    goto LABEL_25;
LABEL_29:
  if ( *(char *)(v3 + 3) < -64 )
    goto LABEL_34;
LABEL_30:
  v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          3LL,
          v3,
          v4);
  if ( !v16 )
    goto LABEL_65;
  if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v16, v17, aJun, 3LL) )
  {
    v7 = &off_18D450;
    return *((unsigned __int8 *)v7 + 16);
  }
  if ( v4 >= 4 )
  {
LABEL_34:
    if ( *(char *)(v3 + 3) < -64 )
      goto LABEL_39;
  }
  v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          3LL,
          v3,
          v4);
  if ( !v18 )
    goto LABEL_65;
  if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v18, v19, aJul, 3LL) )
  {
    v7 = &off_18D468;
    return *((unsigned __int8 *)v7 + 16);
  }
  if ( v4 < 4 )
  {
LABEL_40:
    v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
            3LL,
            v3,
            v4);
    if ( !v20 )
      goto LABEL_65;
    if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v20, v21, aAug, 3LL) )
    {
      v7 = &off_18D480;
      return *((unsigned __int8 *)v7 + 16);
    }
    if ( v4 < 4 )
      goto LABEL_45;
    goto LABEL_44;
  }
LABEL_39:
  if ( *(char *)(v3 + 3) >= -64 )
    goto LABEL_40;
LABEL_44:
  if ( *(char *)(v3 + 3) < -64 )
    goto LABEL_49;
LABEL_45:
  v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          3LL,
          v3,
          v4);
  if ( !v22 )
    goto LABEL_65;
  if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v22, v23, aSep, 3LL) )
  {
    v7 = &off_18D498;
    return *((unsigned __int8 *)v7 + 16);
  }
  if ( v4 >= 4 )
  {
LABEL_49:
    if ( *(char *)(v3 + 3) < -64 )
      goto LABEL_54;
  }
  v24 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          3LL,
          v3,
          v4);
  if ( !v24 )
    goto LABEL_65;
  if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v24, v25, aOct, 3LL) )
  {
    v7 = &off_18D4B0;
    return *((unsigned __int8 *)v7 + 16);
  }
  if ( v4 < 4 )
  {
LABEL_55:
    v26 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
            3LL,
            v3,
            v4);
    if ( !v26 )
      goto LABEL_65;
    if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v26, v27, aNov, 3LL) )
    {
      v7 = &off_18D4C8;
      return *((unsigned __int8 *)v7 + 16);
    }
    if ( v4 < 4 )
      goto LABEL_60;
    goto LABEL_59;
  }
LABEL_54:
  if ( *(char *)(v3 + 3) >= -64 )
    goto LABEL_55;
LABEL_59:
  if ( *(char *)(v3 + 3) < -64 )
    return 0LL;
LABEL_60:
  v28 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          3LL,
          v3,
          v4);
  if ( !v28 )
LABEL_65:
    core::str::slice_error_fail(v3, v4, 0LL, 3LL, &off_18D4F8);
  if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v28, v29, aDec, 3LL) )
  {
    v7 = &off_18D4E0;
    return *((unsigned __int8 *)v7 + 16);
  }
  return 0LL;
}