__int64 __fastcall uu_expr::syntax_tree::NumOrStr::eval_as_string(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  _OWORD v4[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 3);
    *(_OWORD *)a1 = *(__int128 *)((char *)a2 + 8);
  }
  else
  {
    v2 = *a2;
    v4[1] = a2[1];
    v4[0] = v2;
    ((void (__fastcall *)(__int64, _OWORD *))<T as alloc::string::ToString>::to_string)(a1, v4);
    core::ptr::drop_in_place<num_bigint::bigint::BigInt>(v4);
  }
  return a1;
}
