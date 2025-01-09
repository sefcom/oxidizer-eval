__int64 __fastcall uu_fmt::linebreak::slice_if_fresh(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        unsigned __int8 a7,
        char a8,
        char a9)
{
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi

  if ( a2 )
  {
    v10 = a3;
    v11 = a4;
    result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
               a5,
               a3,
               a4);
    if ( !result )
      core::str::slice_error_fail(v10, v11, a5, v11, &off_1268A0);
    a4 = v13;
    v14 = 0LL;
    a3 = result;
  }
  else
  {
    result = a7;
    v14 = 0LL;
    if ( a7 )
      v14 = (unsigned __int8)(a8 | a7 & a9) + 1LL;
    if ( a6 )
      v14 = (unsigned __int8)(a8 | a7 & a9) + 1LL;
  }
  *a1 = v14;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
