__int64 __fastcall uu_csplit::patterns::get_patterns(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+10h] [rbp-58h]
  __int128 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  __m256i v11; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h]

  uu_csplit::patterns::extract_patterns((__int64)&v11, a2, a3);
  v3 = v11.m256i_i64[0];
  v9 = *(_OWORD *)&v11.m256i_u64[1];
  v10 = v11.m256i_i64[3];
  if ( v11.m256i_i64[0] == 12 )
  {
    v7 = v9;
    v8 = v10;
    uu_csplit::patterns::validate_line_numbers((__int64)&v11, *((__int64 *)&v9 + 1), v10);
    if ( v11.m256i_i32[0] == 12 )
    {
      *(_QWORD *)(a1 + 24) = v8;
      *(_OWORD *)(a1 + 8) = v7;
      *(_QWORD *)a1 = 12LL;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v12;
      v5 = *(_OWORD *)v11.m256i_i8;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v11.m256i_u64[2];
      *(_OWORD *)a1 = v5;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&v7);
    }
  }
  else
  {
    v4 = v12;
    *(_QWORD *)(a1 + 24) = v10;
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 32) = v4;
  }
  return a1;
}
