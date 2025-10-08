__int64 __fastcall uu_split::handle_preceding_options(__int64 a1, __int64 a2, char *a3, char *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rbp
  char v10; // bl
  char v11; // bl
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  int v15; // [rsp+Ch] [rbp-3Ch] BYREF
  char *v16; // [rsp+10h] [rbp-38h]

  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, asc_1CB05, 2LL) )
  {
    v16 = a3;
    v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
           a1,
           a2);
    if ( !v6 )
      core::str::slice_error_fail(a1, a2, 2LL, a2, &off_10AE48);
    v8 = v6;
    v9 = v7;
    v10 = 1;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aBytes_0, 5LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aLineBytes, 10LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aLines, 5LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aAdditionalSuff, 17LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aFilter, 6LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aNumber, 6LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aSuffixLength, 13LL) )
    {
      v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, aSeparator, 9LL);
    }
    a3 = v16;
    *v16 = v10;
  }
  v11 = 1;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aB, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aC_0, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, asc_1CB0D, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aN, 2LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aA, 2LL) )
  {
    v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aT, 2LL);
  }
  *a4 = v11;
  v15 = 0;
  v12 = core::char::methods::encode_utf8_raw(45LL, &v15);
  result = core::slice::<impl [T]>::starts_with(a1, a2, v12, v13);
  if ( !(_BYTE)result )
  {
    *a4 = 0;
    *a3 = 0;
  }
  return result;
}