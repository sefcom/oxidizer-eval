unsigned __int64 *__fastcall turborepo_lsp::strip_lit_prefix(unsigned __int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx

  v5 = 0x8000000000000000LL;
  v6 = <&str as core::str::pattern::Pattern>::strip_prefix_of(a3, a4, a2[1], a2[2]);
  if ( v6 )
  {
    v8 = a2[3] + a4;
    v9 = a2[4];
    a1[1] = v6;
    a1[2] = v7;
    a1[3] = v8;
    a1[4] = v9;
  }
  else
  {
    v5 = 0x8000000000000001LL;
  }
  *a1 = v5;
  return a1;
}