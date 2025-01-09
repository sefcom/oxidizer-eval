void __fastcall uu_expr::syntax_tree::NumOrStr::eval_as_bigint(__int64 a1, __int128 *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  _OWORD v8[3]; // [rsp+18h] [rbp-30h] BYREF

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    v7 = *((_QWORD *)a2 + 3);
    v6 = *(__int128 *)((char *)a2 + 8);
    num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(
      v8,
      *((_QWORD *)&v6 + 1),
      v7);
    v2 = (_QWORD *)(a1 + 8);
    if ( *(_QWORD *)&v8[0] == 0x8000000000000000LL )
    {
      *v2 = 2LL;
      v3 = 1LL;
    }
    else
    {
      v5 = v8[0];
      *(_OWORD *)(a1 + 24) = v8[1];
      *(_OWORD *)v2 = v5;
      v3 = 0LL;
    }
    *(_QWORD *)a1 = v3;
    core::ptr::drop_in_place<alloc::string::String>(&v6);
  }
  else
  {
    v4 = *a2;
    *(_OWORD *)(a1 + 24) = a2[1];
    *(_OWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 0LL;
  }
}
