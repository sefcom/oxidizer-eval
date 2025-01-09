__int64 __fastcall uu_dd::parseargs::Parser::parse_input_flags(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rdx
  char *v10; // r14
  __int64 result; // rax
  __int64 v12; // [rsp+8h] [rbp-100h]
  _QWORD v13[2]; // [rsp+18h] [rbp-F0h] BYREF
  _BYTE v14[48]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v15; // [rsp+58h] [rbp-B0h]
  char v16; // [rsp+60h] [rbp-A8h] BYREF
  char v17; // [rsp+78h] [rbp-90h] BYREF
  char v18; // [rsp+90h] [rbp-78h] BYREF
  char v19; // [rsp+A8h] [rbp-60h] BYREF
  char v20; // [rsp+C0h] [rbp-48h] BYREF

  <char as core::str::pattern::Pattern>::into_searcher(v14, 44LL);
  v13[0] = 0LL;
  v13[1] = a4;
  v15 = 1;
  v5 = core::str::iter::SplitInternal<P>::next(v13);
  if ( !v5 )
  {
LABEL_35:
    result = a1;
    *(_QWORD *)a1 = 14LL;
    return result;
  }
  v7 = v5;
  v8 = v6;
  v12 = 11LL;
  while ( 1 )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, &unk_22CE7, 3LL) )
    {
      v10 = &v17;
      goto LABEL_37;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aDirect, 6LL) )
    {
      a2[177] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aDirectory, 9LL) )
    {
      a2[178] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aDsync, 5LL) )
    {
      a2[179] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSync, 4LL) )
    {
      a2[180] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNocache, 7LL) )
    {
      a2[181] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNonblock, 8LL) )
    {
      a2[182] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNoatime, 7LL) )
    {
      a2[183] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNoctty, 6LL) )
    {
      a2[184] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNofollow, 8LL) )
    {
      a2[185] = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNolinks, 7LL) )
    {
      v10 = &v18;
      goto LABEL_37;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aBinary, 6LL) )
    {
      v10 = &v19;
      goto LABEL_37;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aText, 4LL) )
      break;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aFullblock, 9LL) )
    {
      a2[189] = 1;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aCountBytes, 11LL) )
    {
      a2[190] = 1;
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSkipBytes, 10LL) )
    {
      a2[191] = 1;
    }
    else if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aAppend, 6LL)
           && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aSeekBytes, 10LL) )
    {
      v12 = 5LL;
      v10 = &v16;
      goto LABEL_37;
    }
LABEL_4:
    v7 = core::str::iter::SplitInternal<P>::next(v13);
    v8 = v9;
    if ( !v7 )
      goto LABEL_35;
  }
  v10 = &v20;
LABEL_37:
  <T as alloc::slice::hack::ConvertVec>::to_vec(v10, v7, v8);
  *(_QWORD *)a1 = v12;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v10;
  result = *((_QWORD *)v10 + 2);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
