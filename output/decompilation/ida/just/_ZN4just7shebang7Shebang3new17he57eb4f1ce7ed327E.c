__int64 __fastcall just::shebang::Shebang::new(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 inclusive; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  _QWORD v21[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v22; // [rsp+40h] [rbp-78h]
  __int64 v23; // [rsp+48h] [rbp-70h]
  _QWORD v24[2]; // [rsp+50h] [rbp-68h] BYREF
  char v25[48]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v26; // [rsp+90h] [rbp-28h]

  result = core::slice::<impl [T]>::starts_with(a2, a3, asc_71382, 2LL);
  if ( !(_BYTE)result )
    goto LABEL_16;
  v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
         2LL,
         a2,
         a3);
  if ( !v6 )
    core::str::slice_error_fail(a2, a3, 2LL, a3, &off_430E30);
  v8 = v7;
  <char as core::str::pattern::Pattern>::into_searcher(v25, 10LL, v6, v7);
  v24[0] = 0LL;
  v24[1] = v8;
  v26 = 0;
  inclusive = core::str::iter::SplitInternal<P>::next_inclusive(v24);
  v11 = 1LL;
  if ( inclusive )
  {
    v12 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(inclusive, v10);
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
    v12 = 1LL;
  }
  v15 = core::str::<impl str>::trim_matches(v12, v14);
  v17 = v16;
  <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(
    v21,
    0x900000020LL,
    v15,
    v16);
  v21[6] = 0LL;
  v21[7] = v17;
  v22 = 1;
  v23 = 1LL;
  v18 = core::str::iter::SplitInternal<P>::next(v21);
  v20 = v19;
  if ( v18 )
    v11 = v18;
  else
    v20 = 0LL;
  if ( v23 )
  {
    if ( v23 == 1 )
    {
      v23 = 0LL;
      result = core::str::iter::SplitInternal<P>::get_end(v21);
      if ( !v20 )
        goto LABEL_16;
LABEL_14:
      *a1 = v11;
      a1[1] = v20;
      a1[2] = result;
      a1[3] = v19;
      return result;
    }
    --v23;
    result = core::str::iter::SplitInternal<P>::next(v21);
    if ( v20 )
      goto LABEL_14;
  }
  else
  {
    result = 0LL;
    if ( v20 )
      goto LABEL_14;
  }
LABEL_16:
  *a1 = 0LL;
  return result;
}