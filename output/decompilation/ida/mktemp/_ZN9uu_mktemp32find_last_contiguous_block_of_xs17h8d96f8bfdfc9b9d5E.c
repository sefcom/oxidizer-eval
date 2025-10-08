__int64 __fastcall uu_mktemp::find_last_contiguous_block_of_xs(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax

  if ( (core::str::<impl str>::rfind(a2, a3) & 1) != 0 )
  {
    v5 = v4 + 3;
    v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
           v4 + 3,
           a2,
           a3);
    if ( !v6 )
      core::str::slice_error_fail(a2, a3, 0LL, v5, &off_F8FB8);
    v8 = core::str::<impl str>::rfind(v6, v7);
    a1[1] = core::option::Option<T>::map_or(v8, v9);
    a1[2] = v5;
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  *a1 = result;
  return result;
}