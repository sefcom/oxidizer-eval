__int64 __fastcall uu_sort::FieldSelector::parse(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int128 v7; // kr00_16
  __int128 v8; // kr10_16
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v13; // [rsp+0h] [rbp-128h] BYREF
  __int128 v14; // [rsp+10h] [rbp-118h]
  __int64 v15; // [rsp+28h] [rbp-100h]
  __int64 v16; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v17; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v18; // [rsp+48h] [rbp-E0h]
  __int128 v19; // [rsp+58h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+68h] [rbp-C0h]
  __int128 v21; // [rsp+78h] [rbp-B0h]
  __int64 v22; // [rsp+88h] [rbp-A0h]
  _OWORD v23[2]; // [rsp+90h] [rbp-98h] BYREF
  _QWORD v24[2]; // [rsp+B0h] [rbp-78h] BYREF
  _BYTE v25[48]; // [rsp+C0h] [rbp-68h] BYREF
  __int16 v26; // [rsp+F0h] [rbp-38h]

  v16 = a4;
  v15 = a2;
  <char as core::str::pattern::Pattern>::into_searcher(v25, 44LL, a2, a3);
  v24[0] = 0LL;
  v24[1] = a3;
  v26 = 1;
  v5 = core::str::iter::SplitInternal<P>::next(v24);
  if ( !v5 )
    core::option::unwrap_failed(&off_1FFAA8);
  uu_sort::FieldSelector::split_key_options(&v19, v5, v6);
  v7 = v19;
  v8 = v20;
  v9 = core::str::iter::SplitInternal<P>::next(v24);
  if ( v9 )
  {
    core::ops::function::FnOnce::call_once(&v17, v9);
    if ( *((_QWORD *)&v8 + 1) )
      goto LABEL_10;
  }
  else
  {
    *(_QWORD *)&v17 = 0LL;
    if ( *((_QWORD *)&v8 + 1) )
      goto LABEL_10;
  }
  if ( (_QWORD)v17
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, *((_QWORD *)&v18 + 1), 1LL, 0LL) )
  {
LABEL_10:
    v23[0] = v7;
    v23[1] = v8;
    v14 = v18;
    v13 = v17;
    ((void (__fastcall *)(__int128 *, _OWORD *, __int128 *))uu_sort::FieldSelector::parse_with_options)(&v19, v23, &v13);
    if ( HIBYTE(v22) != 2 )
      goto LABEL_9;
LABEL_11:
    *(_QWORD *)&v14 = v20;
    v13 = v19;
    *(_QWORD *)a1 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *))uu_sort::FieldSelector::parse::{{closure}})(
                      v15,
                      a3,
                      &v13);
    *(_QWORD *)(a1 + 8) = &off_1FF678;
    *(_BYTE *)(a1 + 55) = 2;
    return a1;
  }
  v13 = v7;
  *(_QWORD *)&v14 = &v16;
  *((_QWORD *)&v14 + 1) = &v17;
  ((void (__fastcall *)(__int128 *, __int128 *))uu_sort::FieldSelector::parse::{{closure}})(&v19, &v13);
  if ( HIBYTE(v22) == 2 )
    goto LABEL_11;
LABEL_9:
  *(_QWORD *)(a1 + 48) = v22;
  v10 = v19;
  v11 = v20;
  *(_OWORD *)(a1 + 32) = v21;
  *(_OWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v10;
  return a1;
}
