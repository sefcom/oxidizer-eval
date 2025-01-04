__int64 __fastcall uu_csplit::patterns::get_patterns(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int128 v3; // xmm0
  __int128 v5; // [rsp+0h] [rbp-68h] BYREF
  __int64 v6; // [rsp+10h] [rbp-58h]
  __int128 v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  __m256i v9; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h]

  uu_csplit::patterns::extract_patterns(&v9);
  v1 = v9.m256i_i64[0];
  v7 = *(_OWORD *)&v9.m256i_u64[1];
  v8 = v9.m256i_i64[3];
  if ( v9.m256i_i64[0] == 12 )
  {
    v5 = v7;
    v6 = v8;
    uu_csplit::patterns::validate_line_numbers(&v9, *((_QWORD *)&v7 + 1));
    if ( v9.m256i_i32[0] == 12 )
    {
      *(_QWORD *)(a1 + 24) = v6;
      *(_OWORD *)(a1 + 8) = v5;
      *(_QWORD *)a1 = 12LL;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v10;
      v3 = *(_OWORD *)v9.m256i_i8;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v9.m256i_u64[2];
      *(_OWORD *)a1 = v3;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&v5);
    }
  }
  else
  {
    v2 = v10;
    *(_QWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = v1;
    *(_QWORD *)(a1 + 32) = v2;
  }
  return a1;
}
