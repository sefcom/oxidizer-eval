__int64 __fastcall uu_dd::read_helper(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // r12
  __int128 v8; // xmm0
  __m256i v9; // [rsp+8h] [rbp-80h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h] BYREF
  __m256i v11; // [rsp+30h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]

  alloc::vec::Vec<T,A>::resize(a3, a4, 221LL);
  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(v5 + 104) )
    uu_dd::Input::fill_blocks((__int64)&v10, a2, a3, *(_BYTE *)(v5 + 105));
  else
    uu_dd::Input::fill_consecutive((__int64)&v10, a2, a3);
  result = v11.m256i_i64[0];
  if ( v10 )
  {
    *(_QWORD *)(a1 + 8) = v11.m256i_i64[0];
    result = 1LL;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v9 = v11;
    if ( __PAIR128__(v11.m256i_u64[0], 0LL) == v11.m256i_u64[1] )
    {
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v9.m256i_u64[2];
      *(_OWORD *)(a1 + 8) = 0uLL;
      result = 0LL;
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)(v7 + 106) )
      {
        result = uu_dd::read_helper::perform_swab(*(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16));
        v7 = *(_QWORD *)(a2 + 8);
      }
      if ( *(_BYTE *)(v7 + 80) != 7 )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v10, a3);
        uu_dd::blocks::conv_block_unblock_helper(&v12, &v10, v7 + 80, &v9);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a3);
        result = v13;
        *(_QWORD *)(a3 + 16) = v13;
        *(_OWORD *)a3 = v12;
      }
      v8 = *(_OWORD *)v9.m256i_i8;
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v9.m256i_u64[2];
      *(_OWORD *)(a1 + 8) = v8;
      *(_QWORD *)a1 = 0LL;
    }
  }
  return result;
}
