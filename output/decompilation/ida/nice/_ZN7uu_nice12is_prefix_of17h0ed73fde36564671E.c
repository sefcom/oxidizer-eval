__int64 __fastcall uu_nice::is_prefix_of(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx

  if ( a2 < a5 || a2 > a4 )
    return 0LL;
  v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(a2, a3, a4);
  if ( !v8 )
    core::str::slice_error_fail(a3, a4, 0LL, a2, &off_DBA80);
  return <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, a1, a2);
}