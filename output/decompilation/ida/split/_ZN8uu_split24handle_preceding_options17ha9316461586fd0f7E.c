__int64 __fastcall uu_split::handle_preceding_options(__int64 a1, __int64 a2, char *a3, char *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rbp
  char v10; // bl
  char v11; // bl
  __int64 v12; // rax
  __int64 result; // rax
  int v14; // [rsp+Ch] [rbp-3Ch] BYREF
  char *v15; // [rsp+10h] [rbp-38h]

  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, asc_21149, 2LL) )
  {
    v15 = a3;
    v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
           a1,
           a2);
    if ( !v6 )
      core::str::slice_error_fail(a1, a2, 2LL, a2, &off_1482E0);
    v8 = v6;
    v9 = v7;
    v10 = 1;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             v6,
                             v7,
                             anon_94f0aa2b13bdb41c7ee8957331b484de_12_llvm_15137177309397333750,
                             5LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             v8,
                             v9,
                             anon_94f0aa2b13bdb41c7ee8957331b484de_13_llvm_15137177309397333750,
                             10LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             v8,
                             v9,
                             anon_94f0aa2b13bdb41c7ee8957331b484de_14_llvm_15137177309397333750,
                             5LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             v8,
                             v9,
                             anon_94f0aa2b13bdb41c7ee8957331b484de_15_llvm_15137177309397333750,
                             17LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aFilter, 6LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             v8,
                             v9,
                             anon_94f0aa2b13bdb41c7ee8957331b484de_17_llvm_15137177309397333750,
                             6LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             v8,
                             v9,
                             anon_94f0aa2b13bdb41c7ee8957331b484de_22_llvm_15137177309397333750,
                             13LL) )
    {
      v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aSeparator, 9LL);
    }
    a3 = v15;
    *v15 = v10;
  }
  v11 = 1;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aB, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aC, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, asc_21151, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aN, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aA, 2LL) )
  {
    v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aT, 2LL);
  }
  *a4 = v11;
  v14 = 0;
  v12 = core::char::methods::encode_utf8_raw(&v14);
  result = core::slice::<impl [T]>::starts_with(a1, a2, v12, 1LL);
  if ( !(_BYTE)result )
  {
    *a4 = 0;
    *a3 = 0;
  }
  return result;
}
