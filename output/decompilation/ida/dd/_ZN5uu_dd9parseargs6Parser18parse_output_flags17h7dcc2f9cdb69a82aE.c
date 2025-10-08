__int64 __fastcall uu_dd::parseargs::Parser::parse_output_flags(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-C8h]
  __int128 v14; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B0h]
  __int128 v16; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-98h]
  __int128 v18; // [rsp+68h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-80h]
  _QWORD v20[2]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v21[48]; // [rsp+90h] [rbp-68h] BYREF
  __int16 v22; // [rsp+C0h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v21, 44LL);
  v20[0] = 0LL;
  v20[1] = a4;
  v22 = 1;
  v5 = core::str::iter::SplitInternal<P>::next(v20);
  if ( !v5 )
  {
LABEL_34:
    result = a1;
    *(_QWORD *)a1 = 14LL;
    return result;
  }
  v7 = v5;
  v8 = v6;
  while ( 1 )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aCiodirect, 3LL) )
    {
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, a3, a4);
      *(_QWORD *)a1 = 11LL;
      return result;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, &aCiodirect[3], 6LL) )
    {
      a2[195] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aDirectory, 9LL) )
    {
      a2[196] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aDsync, 5LL) )
    {
      a2[197] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSync, 4LL) )
    {
      a2[198] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNocache, 7LL) )
    {
      a2[199] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNonblock, 8LL) )
    {
      a2[200] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNoatime, 7LL) )
    {
      a2[201] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNoctty, 6LL) )
    {
      a2[202] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNofollow, 8LL) )
    {
      a2[203] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNolinks, 7LL) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v14, v7, v8);
      *(_QWORD *)a1 = 11LL;
      *(_OWORD *)(a1 + 8) = v14;
      result = v15;
      *(_QWORD *)(a1 + 24) = v15;
      return result;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aBinary, 6LL) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, v7, v8);
      *(_QWORD *)a1 = 11LL;
      *(_OWORD *)(a1 + 8) = v16;
      result = v17;
      *(_QWORD *)(a1 + 24) = v17;
      return result;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aText, 4LL) )
      break;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aAppend, 6LL) )
    {
      a2[193] = 1;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSeekBytes, 10LL) )
    {
      a2[207] = 1;
    }
    else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aFullblock, 9LL)
           && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aCountBytes, 11LL)
           && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSkipBytes, 10LL) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v12, v7, v8);
      *(_QWORD *)a1 = 5LL;
      *(_OWORD *)(a1 + 8) = v12;
      result = v13;
      *(_QWORD *)(a1 + 24) = v13;
      return result;
    }
LABEL_4:
    v7 = core::str::iter::SplitInternal<P>::next(v20);
    v8 = v9;
    if ( !v7 )
      goto LABEL_34;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, v7, v8);
  *(_QWORD *)a1 = 11LL;
  *(_OWORD *)(a1 + 8) = v18;
  result = v19;
  *(_QWORD *)(a1 + 24) = v19;
  return result;
}