void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> uu_ls::dired::add_total(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // cf
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax

  v2 = a1[6];
  if ( v2 )
  {
    v3 = __CFADD__(a2, 2LL);
    v4 = a2 + 2;
    if ( v3 )
      core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_46_llvm_11807341281290569930);
    v3 = __CFADD__(v2, v4);
    v5 = v2 + v4;
    if ( v3 )
      core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_47_llvm_11807341281290569930);
  }
  else
  {
    v6 = a1[1];
    if ( !v6 || (v6 & 7) != 0 || (v7 = a1[2], v7 >> 59) )
      core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
    if ( v7 )
    {
      v8 = *(_QWORD *)(16 * v7 + v6 - 8) + 1LL;
      if ( !v8 )
        core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_28_llvm_11807341281290569930);
      v3 = __CFADD__(v8, a2);
      a2 += v8;
      if ( v3 )
        goto LABEL_13;
    }
    v3 = __CFADD__(a2, 2LL);
    v5 = a2 + 2;
    if ( v3 )
LABEL_13:
      core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_45_llvm_11807341281290569930);
  }
  a1[6] = v5;
}
