__int64 __fastcall uu_sort::KeyPosition::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 result; // rax
  __int64 v16; // rdx
  char v17; // [rsp+Bh] [rbp-FDh] BYREF
  unsigned int v18; // [rsp+Ch] [rbp-FCh]
  __int64 v19; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-F0h]
  __int64 v21; // [rsp+20h] [rbp-E8h]
  char v22; // [rsp+28h] [rbp-E0h]
  char v23; // [rsp+30h] [rbp-D8h] BYREF
  char v24; // [rsp+31h] [rbp-D7h]
  __int64 v25; // [rsp+38h] [rbp-D0h]
  __int128 v26; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h]
  _QWORD v30[4]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v32[48]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v33; // [rsp+D0h] [rbp-38h]

  v18 = a5;
  <char as core::str::pattern::Pattern>::into_searcher(v32, 46LL, a2, a3);
  v31[0] = 0LL;
  v31[1] = a3;
  v33 = 1;
  v7 = core::str::iter::SplitInternal<P>::next(v31);
  if ( v7 )
  {
    v9 = v7;
    v10 = v8;
    v11 = core::str::iter::SplitInternal<P>::next(v31);
    v13 = v12;
    core::num::<impl usize>::from_ascii_radix(&v23, v9, v10);
    if ( v23 )
    {
      if ( v24 != 2 )
      {
        v17 = v24;
        v19 = 0LL;
        v20 = v9;
        v21 = v10;
        v22 = 1;
        v30[0] = &v19;
        v30[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v30[2] = &v17;
        v30[3] = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
        *(_QWORD *)&v26 = &off_18D018;
        *((_QWORD *)&v26 + 1) = 2LL;
        v29 = 0LL;
        v27 = v30;
        v28 = 2LL;
        result = core::option::Option<T>::map_or_else(a1 + 8, &v26);
        goto LABEL_12;
      }
      v14 = -1LL;
    }
    else
    {
      v14 = v25;
      if ( !v25 )
      {
        result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, aFieldIndexCanN, 24LL);
        goto LABEL_12;
      }
    }
    *((_QWORD *)&v26 + 1) = a4;
    *(_QWORD *)&v26 = 0x8000000000000000LL;
    core::option::Option<T>::map_or(&v19, v11, v13, &v26);
    result = v20;
    if ( __OFSUB__(-v19, 1LL) )
    {
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = result;
      result = v18;
      *(_BYTE *)(a1 + 24) = v18;
      *(_QWORD *)a1 = 0LL;
      return result;
    }
    v16 = v21;
    *(_QWORD *)(a1 + 8) = v19;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = v16;
  }
  else
  {
    uu_sort::KeyPosition::new::{{closure}}(&v26, a2, a3);
    result = (__int64)v27;
    *(_OWORD *)(a1 + 8) = v26;
    *(_QWORD *)(a1 + 24) = result;
  }
LABEL_12:
  *(_QWORD *)a1 = 1LL;
  return result;
}