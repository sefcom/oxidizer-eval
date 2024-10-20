bool __fastcall uu_ls::is_color_compatible_term::{{closure}}::{{closure}}(const void ***a1, char **a2)
{
  char *v2; // rbx
  size_t v3; // r14
  char v4; // cl
  bool result; // al
  const void *v6; // rax
  size_t v7; // rdx
  unsigned __int64 v8; // rcx
  int v9[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v2 = *a2;
  v3 = (size_t)a2[1];
  v4 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(**a1, (*a1)[1], *a2, v3);
  result = 1;
  if ( !v4 )
  {
    v9[0] = 0;
    v6 = (const void *)core::char::methods::encode_utf8_raw(42LL, v9, 4LL);
    if ( v3 < v7 || bcmp(v6, &v2[v3 - v7], v7) )
      return 0;
    if ( !v3 )
      core::panicking::panic_const::panic_const_sub_overflow(&anon_11f7478bcb2f9b4befb7b1d3f51baba0_103_llvm_2775220154043362954);
    v8 = v3 - 1;
    if ( v3 != 1 && v2[v8] < -64 || !v2 )
      core::str::slice_error_fail(v2, v3, 0LL, v8, &anon_11f7478bcb2f9b4befb7b1d3f51baba0_104_llvm_2775220154043362954);
    return (unsigned __int64)(*a1)[1] >= v8 && bcmp(v2, **a1, v3 - 1) == 0;
  }
  return result;
}
