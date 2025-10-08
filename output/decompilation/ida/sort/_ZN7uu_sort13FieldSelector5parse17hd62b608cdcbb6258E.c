__int64 __fastcall uu_sort::FieldSelector::parse(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int128 v7; // kr00_16
  __int128 v8; // kr10_16
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v14; // [rsp+8h] [rbp-100h] BYREF
  __int128 v15; // [rsp+18h] [rbp-F0h]
  __int64 v16; // [rsp+28h] [rbp-E0h]
  __int64 v17; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+48h] [rbp-C0h]
  __int128 v20; // [rsp+58h] [rbp-B0h]
  __int64 v21; // [rsp+68h] [rbp-A0h]
  _QWORD v22[4]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v23[2]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v24[48]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v25; // [rsp+D0h] [rbp-38h]

  v17 = a4;
  v16 = a2;
  <char as core::str::pattern::Pattern>::into_searcher(v24, 44LL, a2, a3);
  v23[0] = 0LL;
  v23[1] = a3;
  v25 = 1;
  v5 = core::str::iter::SplitInternal<P>::next(v23);
  if ( !v5 )
    core::option::unwrap_failed(&off_18D080);
  uu_sort::FieldSelector::split_key_options(&v18, v5, v6);
  v7 = v18;
  v8 = v19;
  v9 = core::str::iter::SplitInternal<P>::next(v23);
  if ( v9 )
  {
    uu_sort::FieldSelector::split_key_options(v22, v9, v10);
    if ( *((_QWORD *)&v8 + 1) )
      goto LABEL_10;
  }
  else
  {
    v22[0] = 0LL;
    if ( *((_QWORD *)&v8 + 1) )
      goto LABEL_10;
  }
  if ( v22[0] && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22[2], v22[3], 1LL, 0LL) )
  {
LABEL_10:
    v14 = v7;
    v15 = v8;
    uu_sort::FieldSelector::parse_with_options(&v18, &v14, v22);
    if ( HIBYTE(v21) != 2 )
      goto LABEL_9;
LABEL_11:
    *(_QWORD *)a1 = uu_sort::FieldSelector::parse::{{closure}}(v16, a3, &v18);
    *(_QWORD *)(a1 + 8) = &off_18C448;
    *(_BYTE *)(a1 + 55) = 2;
    return a1;
  }
  v14 = v7;
  *(_QWORD *)&v15 = &v17;
  *((_QWORD *)&v15 + 1) = v22;
  uu_sort::FieldSelector::parse::{{closure}}(&v18, &v14);
  if ( HIBYTE(v21) == 2 )
    goto LABEL_11;
LABEL_9:
  *(_QWORD *)(a1 + 48) = v21;
  v11 = v18;
  v12 = v19;
  *(_OWORD *)(a1 + 32) = v20;
  *(_OWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  return a1;
}