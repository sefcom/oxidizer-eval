__int64 __fastcall fd::filter::owner::OwnerFilter::from_string(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-E8h]
  __int64 v14; // [rsp+18h] [rbp-E0h]
  __int64 v15; // [rsp+20h] [rbp-D8h]
  _QWORD v16[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-B8h] BYREF
  __m128 v18; // [rsp+50h] [rbp-A8h]
  _QWORD v19[2]; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v20[48]; // [rsp+78h] [rbp-80h] BYREF
  __int16 v21; // [rsp+A8h] [rbp-50h]
  _BYTE v22[72]; // [rsp+B0h] [rbp-48h] BYREF

  v16[0] = a2;
  v16[1] = a3;
  <char as core::str::pattern::Pattern>::into_searcher(v20, 58LL, a2, a3);
  v19[0] = 0LL;
  v19[1] = a3;
  v21 = 1;
  v4 = core::str::iter::SplitInternal<P>::next(v19);
  v6 = v5;
  v7 = core::str::iter::SplitInternal<P>::next(v19);
  v9 = v8;
  if ( core::str::iter::SplitInternal<P>::next(v19) )
  {
    v17[0] = v16;
    v17[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v12 = &off_402308;
    *((_QWORD *)&v12 + 1) = 2LL;
    v15 = 0LL;
    v13 = v17;
    v14 = 1LL;
    core::option::Option<T>::map_or_else(v22, 0LL, v10, &v12);
    result = anyhow::error::<impl anyhow::Error>::msg(v22);
    goto LABEL_5;
  }
  fd::filter::owner::Check<T>::parse(&v12, v4, v6);
  if ( (v12 & 1) != 0
    || (v18 = (__m128)*(unsigned __int64 *)((char *)&v12 + 4),
        result = fd::filter::owner::Check<T>::parse(&v12, v7, v9),
        (_DWORD)v12 == 1) )
  {
    result = *((_QWORD *)&v12 + 1);
LABEL_5:
    *(_QWORD *)(a1 + 8) = result;
    *(_DWORD *)a1 = 3;
    return result;
  }
  *(__m128 *)a1 = _mm_movelh_ps(v18, (__m128)*(unsigned __int64 *)((char *)&v12 + 4));
  return result;
}