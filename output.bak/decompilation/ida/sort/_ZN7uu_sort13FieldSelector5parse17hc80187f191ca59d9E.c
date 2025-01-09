__int64 __fastcall uu_sort::FieldSelector::parse(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // kr00_16
  __int128 v11; // kr10_16
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v23; // [rsp+0h] [rbp-128h] BYREF
  __int128 v24; // [rsp+10h] [rbp-118h]
  __int64 v25; // [rsp+28h] [rbp-100h]
  __int64 v26; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v27; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v28; // [rsp+48h] [rbp-E0h]
  __int128 v29; // [rsp+58h] [rbp-D0h] BYREF
  __int128 v30; // [rsp+68h] [rbp-C0h]
  __int128 v31; // [rsp+78h] [rbp-B0h]
  __int64 v32; // [rsp+88h] [rbp-A0h]
  _OWORD v33[2]; // [rsp+90h] [rbp-98h] BYREF
  _QWORD v34[2]; // [rsp+B0h] [rbp-78h] BYREF
  _BYTE v35[48]; // [rsp+C0h] [rbp-68h] BYREF
  __int16 v36; // [rsp+F0h] [rbp-38h]

  v26 = a4;
  v25 = a2;
  <char as core::str::pattern::Pattern>::into_searcher(v35, 44LL, a2, a3);
  v34[0] = 0LL;
  v34[1] = a3;
  v36 = 1;
  v5 = core::str::iter::SplitInternal<P>::next(v34);
  if ( !v5 )
    core::option::unwrap_failed(&off_1FFAA8);
  uu_sort::FieldSelector::split_key_options(&v29, v5, v6, v7, v8, v9);
  v10 = v29;
  v11 = v30;
  v12 = core::str::iter::SplitInternal<P>::next(v34);
  if ( v12 )
  {
    core::ops::function::FnOnce::call_once(&v27, v12);
    if ( *((_QWORD *)&v11 + 1) )
      goto LABEL_10;
  }
  else
  {
    *(_QWORD *)&v27 = 0LL;
    if ( *((_QWORD *)&v11 + 1) )
      goto LABEL_10;
  }
  if ( (_QWORD)v27
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v28, *((_QWORD *)&v28 + 1), 1LL, 0LL) )
  {
LABEL_10:
    v33[0] = v10;
    v33[1] = v11;
    v24 = v28;
    v23 = v27;
    uu_sort::FieldSelector::parse_with_options((__int64)&v29, (__int64 *)v33, (__int64 *)&v23);
    if ( HIBYTE(v32) != 2 )
      goto LABEL_9;
LABEL_11:
    *(_QWORD *)&v24 = v30;
    v23 = v29;
    *(_QWORD *)a1 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, __int64, __int64, __int64))uu_sort::FieldSelector::parse::{{closure}})(
                      v25,
                      a3,
                      &v23,
                      v17,
                      v18,
                      v19);
    *(_QWORD *)(a1 + 8) = &off_1FF678;
    *(_BYTE *)(a1 + 55) = 2;
    return a1;
  }
  v23 = v10;
  *(_QWORD *)&v24 = &v26;
  *((_QWORD *)&v24 + 1) = &v27;
  ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))uu_sort::FieldSelector::parse::{{closure}})(
    &v29,
    &v23,
    v13,
    v14,
    v15,
    v16);
  if ( HIBYTE(v32) == 2 )
    goto LABEL_11;
LABEL_9:
  *(_QWORD *)(a1 + 48) = v32;
  v20 = v29;
  v21 = v30;
  *(_OWORD *)(a1 + 32) = v31;
  *(_OWORD *)(a1 + 16) = v21;
  *(_OWORD *)a1 = v20;
  return a1;
}
