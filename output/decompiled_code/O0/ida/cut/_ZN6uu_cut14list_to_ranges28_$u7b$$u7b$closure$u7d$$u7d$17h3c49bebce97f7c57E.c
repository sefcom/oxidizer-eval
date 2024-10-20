__int64 __fastcall uu_cut::list_to_ranges::{{closure}}(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v8; // [rsp+0h] [rbp-28h]
  __int64 v9; // [rsp+8h] [rbp-20h]
  __int64 v10; // [rsp+10h] [rbp-18h]

  v3 = a2[1];
  if ( !v3 || (v3 & 7) != 0 || a2[2] >> 59 )
    core::panicking::panic_nounwind(anon_8a413ea3e55ef2f27523b53f9db0d00f_41_llvm_16715495509781371082, 162LL);
  uucore::features::ranges::complement();
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 >> 60 )
      core::panicking::panic_nounwind(anon_e35df09c849da53666b7f0d1efcf50e2_48_llvm_2415788926865362063, 69LL);
    v5 = 16 * v4;
    v8 = a2[1];
    v9 = 8LL;
    v6 = 16LL;
  }
  else
  {
    v6 = 8LL;
    v5 = 0LL;
  }
  *(unsigned __int64 *)((char *)&v8 + v6) = v5;
  if ( v9 && v10 )
    _rust_dealloc(v8);
  return a1;
}
