__int64 __fastcall uu_expr::syntax_tree::StringOp::eval::{{closure}}(__int64 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // r15

  if ( *((_DWORD *)a1 + 5) < 2u || (v1 = *(int *)(a1[3] + 4), v1 == -1LL) )
    core::option::unwrap_failed(&off_16A930);
  v2 = a1[4];
  v3 = *(int *)(v2 + 4);
  v4 = *a1;
  v5 = a1[1];
  if ( (unsigned int)v1 > (unsigned int)v3 )
LABEL_12:
    core::str::slice_error_fail(
      *a1,
      v5,
      v1,
      *(int *)(v2 + 4),
      &anon_5175d7158facda4afbedcba092ff25c1_10_llvm_18434958393771698914);
  if ( (_DWORD)v1 )
  {
    if ( v5 <= v1 )
    {
      if ( v5 != v1 )
        goto LABEL_12;
    }
    else if ( *(char *)(v4 + v1) <= -65 )
    {
      goto LABEL_12;
    }
  }
  if ( (_DWORD)v3 )
  {
    if ( v5 <= v3 )
    {
      if ( v5 != v3 )
        goto LABEL_12;
    }
    else if ( *(char *)(v4 + v3) <= -65 )
    {
      goto LABEL_12;
    }
  }
  v6 = v1 + v4;
  onig_region_free(a1 + 2);
  return v6;
}
