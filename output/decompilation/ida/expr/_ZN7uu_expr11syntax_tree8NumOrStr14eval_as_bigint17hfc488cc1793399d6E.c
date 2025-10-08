__int64 __fastcall uu_expr::syntax_tree::NumOrStr::eval_as_bigint(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  _OWORD v7[3]; // [rsp+8h] [rbp-30h] BYREF

  result = 0LL;
  if ( __OFSUB__(0LL, *a2) )
  {
    num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(v7, a2[2], a2[3]);
    v3 = (_QWORD *)(a1 + 8);
    if ( *(_QWORD *)&v7[0] == 0x8000000000000000LL )
    {
      *v3 = 2LL;
      v4 = 1LL;
    }
    else
    {
      v6 = v7[0];
      *(_OWORD *)(a1 + 24) = v7[1];
      *(_OWORD *)v3 = v6;
      v4 = 0LL;
    }
    *(_QWORD *)a1 = v4;
    return core::ptr::drop_in_place<alloc::string::String>(a2 + 1);
  }
  else
  {
    v5 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 24) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}