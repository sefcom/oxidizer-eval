__int64 __fastcall uu_expr::syntax_tree::NumOrStr::eval_as_string(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm0
  _OWORD v4[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( __OFSUB__(0LL, *(_QWORD *)a2) )
  {
    *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 3);
    *(_OWORD *)a1 = *(__int128 *)((char *)a2 + 8);
  }
  else
  {
    v3 = *a2;
    v4[1] = a2[1];
    v4[0] = v3;
    <T as alloc::string::SpecToString>::spec_to_string(a1, v4);
    core::ptr::drop_in_place<num_bigint::bigint::BigInt>(*(_QWORD *)&v4[0], *((_QWORD *)&v4[0] + 1));
  }
  return a1;
}