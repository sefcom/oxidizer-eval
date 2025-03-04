__int64 __fastcall uu_sort::KeyPosition::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 result; // rax
  __int128 v15; // xmm0
  __int64 v16; // r15
  __int64 v17; // rdx
  __int128 v19; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-98h]
  __int64 v21; // [rsp+28h] [rbp-90h] BYREF
  __int64 v22; // [rsp+30h] [rbp-88h]
  __int64 v23; // [rsp+38h] [rbp-80h]
  _QWORD v24[2]; // [rsp+40h] [rbp-78h] BYREF
  char v25[48]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v26; // [rsp+80h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v25, 46LL, a2, a3);
  v24[0] = 0LL;
  v24[1] = a3;
  v26 = 1;
  v7 = core::str::iter::SplitInternal<P>::next(v24);
  if ( !v7 )
  {
    uu_sort::KeyPosition::new::{{closure}}(&v19, a2, a3);
    v15 = v19;
    result = v20;
    goto LABEL_5;
  }
  v9 = v7;
  v10 = v8;
  v11 = core::str::iter::SplitInternal<P>::next(v24);
  v13 = v12;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v21, v9, v10);
  if ( (_BYTE)v21 )
  {
    uu_sort::KeyPosition::new::{{closure}}(&v19, v9, v10, BYTE1(v21));
    result = v20;
    v15 = v19;
LABEL_5:
    *(_OWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 24) = result;
LABEL_6:
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v16 = v22;
  if ( !v22 )
  {
    result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 8, aFieldIndexCanN, 24LL);
    goto LABEL_6;
  }
  *((_QWORD *)&v19 + 1) = a4;
  *(_QWORD *)&v19 = 0x8000000000000000LL;
  core::option::Option<T>::map_or(&v21, v11, v13, &v19);
  result = v22;
  if ( v21 != 0x8000000000000000LL )
  {
    v17 = v23;
    *(_QWORD *)(a1 + 8) = v21;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = v17;
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 8) = v16;
  *(_QWORD *)(a1 + 16) = result;
  result = a5;
  *(_BYTE *)(a1 + 24) = a5;
  *(_QWORD *)a1 = 0LL;
  return result;
}
