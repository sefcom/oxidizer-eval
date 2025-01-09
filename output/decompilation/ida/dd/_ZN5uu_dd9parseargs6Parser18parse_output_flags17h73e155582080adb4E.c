__int64 __fastcall uu_dd::parseargs::Parser::parse_output_flags(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r13
  char v9; // al
  _BYTE *v10; // rcx
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  __int64 v21; // rdx
  __int64 result; // rax
  __int128 v24; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+70h] [rbp-C8h]
  __int128 v26; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+88h] [rbp-B0h]
  __int128 v28; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-98h]
  __int128 v30; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-80h]
  _QWORD v32[2]; // [rsp+C0h] [rbp-78h] BYREF
  _BYTE v33[48]; // [rsp+D0h] [rbp-68h] BYREF
  __int16 v34; // [rsp+100h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v33, 44LL);
  v32[0] = 0LL;
  v32[1] = a4;
  v34 = 1;
  v5 = core::str::iter::SplitInternal<P>::next(v32);
  if ( !v5 )
  {
LABEL_25:
    result = a1;
    *(_QWORD *)a1 = 14LL;
    return result;
  }
  v7 = v5;
  v8 = v6;
  while ( 1 )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, &unk_22CE7, 3LL) )
    {
      result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 8, a3, a4);
      *(_QWORD *)a1 = 11LL;
      return result;
    }
    v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aDirect, 6LL);
    v10 = a2 + 195;
    if ( v9 )
      goto LABEL_18;
    v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aDirectory, 9LL);
    v10 = a2 + 196;
    if ( v11 )
      goto LABEL_18;
    v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aDsync, 5LL);
    v10 = a2 + 197;
    if ( v12 )
      goto LABEL_18;
    v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSync, 4LL);
    v10 = a2 + 198;
    if ( v13 )
      goto LABEL_18;
    v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNocache, 7LL);
    v10 = a2 + 199;
    if ( v14 )
      goto LABEL_18;
    v15 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNonblock, 8LL);
    v10 = a2 + 200;
    if ( v15
      || (v16 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNoatime, 7LL), v10 = a2 + 201, v16)
      || (v17 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNoctty, 6LL), v10 = a2 + 202, v17)
      || (v18 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNofollow, 8LL), v10 = a2 + 203, v18) )
    {
LABEL_18:
      *v10 = 1;
      goto LABEL_19;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNolinks, 7LL) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v26, v7, v8);
      *(_QWORD *)a1 = 11LL;
      *(_OWORD *)(a1 + 8) = v26;
      result = v27;
      *(_QWORD *)(a1 + 24) = v27;
      return result;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aBinary, 6LL) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v28, v7, v8);
      *(_QWORD *)a1 = 11LL;
      *(_OWORD *)(a1 + 8) = v28;
      result = v29;
      *(_QWORD *)(a1 + 24) = v29;
      return result;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aText, 4LL) )
      break;
    v19 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aAppend, 6LL);
    v10 = a2 + 193;
    if ( v19 )
      goto LABEL_18;
    v20 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSeekBytes, 10LL);
    v10 = a2 + 207;
    if ( v20 )
      goto LABEL_18;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aFullblock, 9LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aCountBytes, 11LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSkipBytes, 10LL) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v24, v7, v8);
      *(_QWORD *)a1 = 5LL;
      *(_OWORD *)(a1 + 8) = v24;
      result = v25;
      *(_QWORD *)(a1 + 24) = v25;
      return result;
    }
LABEL_19:
    v7 = core::str::iter::SplitInternal<P>::next(v32);
    v8 = v21;
    if ( !v7 )
      goto LABEL_25;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v30, v7, v8);
  *(_QWORD *)a1 = 11LL;
  *(_OWORD *)(a1 + 8) = v30;
  result = v31;
  *(_QWORD *)(a1 + 24) = v31;
  return result;
}
