__int64 __fastcall uu_dd::parseargs::Parser::parse_conv_flags(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 result; // rax
  __int128 v11; // [rsp+8h] [rbp-90h] BYREF
  __int64 v12; // [rsp+18h] [rbp-80h]
  _QWORD v13[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v14[48]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v15; // [rsp+60h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v14, 44LL);
  v13[0] = 0LL;
  v13[1] = a4;
  v15 = 1;
  v5 = core::str::iter::SplitInternal<P>::next(v13);
  if ( !v5 )
  {
LABEL_36:
    result = a1;
    *(_QWORD *)a1 = 14LL;
    return result;
  }
  v7 = v5;
  v8 = v6;
  while ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, &unk_2121A, 5LL) )
  {
    a2[160] = 1;
LABEL_4:
    v7 = core::str::iter::SplitInternal<P>::next(v13);
    v8 = v9;
    if ( !v7 )
      goto LABEL_36;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, &unk_2121F, 6LL) )
  {
    a2[161] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aIbm, 3LL) )
  {
    a2[162] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aLcase, 5LL) )
  {
    a2[164] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aUcase, 5LL) )
  {
    a2[163] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aBlock, 5LL) )
  {
    a2[165] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aUnblock, 7LL) )
  {
    a2[166] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSwab, 4LL) )
  {
    a2[167] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSync, 4LL) )
  {
    a2[168] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNoerror, 7LL) )
  {
    a2[169] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSparse, 6LL) )
  {
    a2[170] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aExcl, 4LL) )
  {
    a2[171] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNocreat, 7LL) )
  {
    a2[172] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNotrunc, 7LL) )
  {
    a2[173] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aFdatasync_0, 9LL) )
  {
    a2[174] = 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aFsync_0, 5LL) )
  {
    a2[175] = 1;
    goto LABEL_4;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, v7, v8);
  *(_QWORD *)a1 = 6LL;
  *(_OWORD *)(a1 + 8) = v11;
  result = v12;
  *(_QWORD *)(a1 + 24) = v12;
  return result;
}