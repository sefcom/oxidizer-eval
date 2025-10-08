__int64 __fastcall uu_head::parse::parse_num(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r14
  int v7; // edx
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx
  bool v11; // bp
  __int64 result; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm0
  _OWORD v15[5]; // [rsp+8h] [rbp-50h] BYREF

  v4 = core::str::<impl str>::trim_matches(a2, a3);
  v6 = v5;
  *(_QWORD *)&v15[0] = v4;
  *((_QWORD *)&v15[0] + 1) = v5 + v4;
  if ( (core::str::validations::next_code_point(v15) & 1) == 0 )
  {
    result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, a2, a3);
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  if ( v7 == 43 || v7 == 45 )
  {
    v8 = v7;
    v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
           v4,
           v6);
    if ( !v9 )
      core::str::slice_error_fail(v4, v6, 1LL, v6, &off_F7AE8);
    v11 = v8 == 45;
    v6 = v10;
    v4 = v9;
  }
  else
  {
    v11 = 0;
  }
  result = core::str::<impl str>::trim_start_matches(v4, v6);
  if ( !v13 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    goto LABEL_12;
  }
  result = uucore::features::parser::parse_size::parse_size_u64_max(v15, result);
  if ( LODWORD(v15[0]) == 4 )
  {
    result = *((_QWORD *)&v15[0] + 1);
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v15[0] + 1);
LABEL_12:
    *(_BYTE *)(a1 + 16) = v11;
    *(_QWORD *)a1 = 4LL;
    return result;
  }
  v14 = v15[0];
  *(_OWORD *)(a1 + 16) = v15[1];
  *(_OWORD *)a1 = v14;
  return result;
}