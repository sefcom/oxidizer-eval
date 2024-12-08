__int64 __fastcall uu_sort::KeyPosition::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  __int128 v19; // xmm0
  __int64 v20; // r15
  __int64 v21; // rdx
  char v22; // [rsp+Bh] [rbp-11Dh] BYREF
  unsigned int v23; // [rsp+Ch] [rbp-11Ch]
  __int64 v24; // [rsp+10h] [rbp-118h] BYREF
  __int64 v25; // [rsp+18h] [rbp-110h]
  __int64 v26; // [rsp+20h] [rbp-108h]
  char v27; // [rsp+28h] [rbp-100h]
  _BYTE v28[8]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-F0h]
  __int128 v30; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD *v31; // [rsp+50h] [rbp-D8h]
  __int64 v32; // [rsp+58h] [rbp-D0h]
  __int64 v33; // [rsp+60h] [rbp-C8h]
  _QWORD v34[4]; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+90h] [rbp-98h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-88h]
  _QWORD v37[2]; // [rsp+B0h] [rbp-78h] BYREF
  _BYTE v38[48]; // [rsp+C0h] [rbp-68h] BYREF
  __int16 v39; // [rsp+F0h] [rbp-38h]

  v23 = a5;
  <char as core::str::pattern::Pattern>::into_searcher(v38, 46LL, a2, a3);
  v37[0] = 0LL;
  v37[1] = a3;
  v39 = 1;
  v7 = core::str::iter::SplitInternal<P>::next(v37);
  if ( !v7 )
  {
    uu_sort::KeyPosition::new::{{closure}}(&v30, a2, a3);
    v19 = v30;
    result = (__int64)v31;
    goto LABEL_5;
  }
  v9 = v7;
  v10 = v8;
  v11 = core::str::iter::SplitInternal<P>::next(v37);
  v13 = v12;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v28, v9, v10);
  if ( v28[0] )
  {
    v22 = v28[1];
    v24 = 0LL;
    v25 = v9;
    v26 = v10;
    v27 = 1;
    v34[0] = &v24;
    v34[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v34[2] = &v22;
    v34[3] = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
    *(_QWORD *)&v30 = &off_1FEF18;
    *((_QWORD *)&v30 + 1) = 2LL;
    v33 = 0LL;
    v31 = v34;
    v32 = 2LL;
    core::option::Option<T>::map_or_else(&v35, &v30, v14, v15, v16, v17);
    result = v36;
    v19 = v35;
LABEL_5:
    *(_OWORD *)(a1 + 8) = v19;
    *(_QWORD *)(a1 + 24) = result;
LABEL_6:
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v20 = v29;
  if ( !v29 )
  {
    result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 8, aFieldIndexCanN, 24LL);
    goto LABEL_6;
  }
  *((_QWORD *)&v30 + 1) = a4;
  *(_QWORD *)&v30 = 0x8000000000000000LL;
  core::option::Option<T>::map_or(&v24, v11, v13, &v30);
  result = v25;
  if ( v24 != 0x8000000000000000LL )
  {
    v21 = v26;
    *(_QWORD *)(a1 + 8) = v24;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = v21;
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 8) = v20;
  *(_QWORD *)(a1 + 16) = result;
  result = v23;
  *(_BYTE *)(a1 + 24) = v23;
  *(_QWORD *)a1 = 0LL;
  return result;
}
