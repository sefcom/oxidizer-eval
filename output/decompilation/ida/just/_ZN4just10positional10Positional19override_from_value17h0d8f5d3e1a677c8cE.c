unsigned __int64 __fastcall just::positional::Positional::override_from_value(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r12
  __int128 v12; // xmm0
  unsigned __int64 result; // rax
  __int128 v14; // [rsp+0h] [rbp-98h] BYREF
  __int64 v15; // [rsp+10h] [rbp-88h]
  __int128 v16; // [rsp+18h] [rbp-80h]
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int128 v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+48h] [rbp-50h]
  __int128 v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h]

  if ( (core::str::<impl str>::find(a2, a3, 61LL) & 1) == 0 )
    goto LABEL_6;
  v5 = v4;
  core::str::<impl str>::split_at_checked(&v14, a2, a3, v4);
  v6 = v14;
  if ( !(_QWORD)v14 )
    core::str::slice_error_fail(a2, a3, 0LL, v5, &off_430A50);
  v7 = *((_QWORD *)&v14 + 1);
  v8 = v15;
  v9 = v16;
  v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          1LL,
          v15,
          v16);
  if ( !v10 )
    core::str::slice_error_fail(v8, v9, 1LL, v9, &off_430AB0);
  v11 = v10;
  if ( just::lexer::Lexer::is_identifier(v6, v7) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, v6);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v20, v11);
    v17 = v21;
    v16 = v20;
    v15 = v19;
    v12 = v18;
    v14 = v18;
    *(_QWORD *)(a1 + 32) = *((_QWORD *)&v20 + 1);
    *(_QWORD *)(a1 + 40) = v17;
    *(_QWORD *)(a1 + 16) = v15;
    result = v16;
    *(_QWORD *)(a1 + 24) = v16;
    *(_OWORD *)a1 = v12;
  }
  else
  {
LABEL_6:
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}