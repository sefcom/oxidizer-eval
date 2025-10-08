__int64 __fastcall uu_dd::read_helper(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int128 v11; // xmm0
  __int64 result; // rax
  __m256i v13; // [rsp+8h] [rbp-80h] BYREF
  __int64 v14; // [rsp+28h] [rbp-60h] BYREF
  __int64 v15; // [rsp+30h] [rbp-58h]
  __int128 v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+48h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+60h] [rbp-28h]

  alloc::vec::Vec<T,A>::resize(a3, a4, 221LL);
  v8 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(v8 + 104) != 1 )
  {
    uu_dd::Input::fill_consecutive((__int64)&v14, a2, (__int64)a3, v5, v6, v7);
    v9 = v15;
    if ( (v14 & 1) == 0 )
      goto LABEL_3;
LABEL_10:
    *(_QWORD *)(a1 + 8) = v9;
    result = 1LL;
    goto LABEL_11;
  }
  uu_dd::Input::fill_blocks((__int64)&v14, a2, (__int64)a3, *(_BYTE *)(v8 + 105));
  v9 = v15;
  if ( (v14 & 1) != 0 )
    goto LABEL_10;
LABEL_3:
  v13.m256i_i64[3] = v17;
  *(_OWORD *)&v13.m256i_u64[1] = v16;
  v13.m256i_i64[0] = v9;
  if ( __PAIR128__(v16, v9) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(v10 + 106) )
    {
      uu_dd::read_helper::perform_swab(a3[1], a3[2]);
      v10 = *(_QWORD *)(a2 + 8);
    }
    if ( *(_BYTE *)(v10 + 80) != 7 )
    {
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v14, a3[1], a3[2]);
      uu_dd::blocks::conv_block_unblock_helper((__int64)&v18, &v14, v10 + 80, (__int64)&v13);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*a3, a3[1]);
      a3[2] = v19;
      *(_OWORD *)a3 = v18;
    }
  }
  v11 = *(_OWORD *)v13.m256i_i8;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v13.m256i_u64[2];
  *(_OWORD *)(a1 + 8) = v11;
  result = 0LL;
LABEL_11:
  *(_QWORD *)a1 = result;
  return result;
}