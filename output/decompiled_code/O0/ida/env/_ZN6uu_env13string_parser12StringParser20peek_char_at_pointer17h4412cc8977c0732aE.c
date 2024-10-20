        unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v6; // r12
  char *v7; // r12
  int char_from_native_int; // eax
  _QWORD v10[3]; // [rsp+8h] [rbp-60h] BYREF
  __int128 v11; // [rsp+20h] [rbp-48h]

  v3 = a2[1];
  v4 = v3 - a3;
  if ( v3 < a3 )
  {
    v10[0] = &anon_2e379de88427cfdda108dad8baf8b250_39_llvm_16806681140142669859;
    v10[1] = 1LL;
    v10[2] = 8LL;
    v11 = 0LL;
    core::panicking::panic_fmt(v10, &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_53_llvm_11312083278200569487);
  }
  v6 = *a2;
  core::slice::raw::from_raw_parts::precondition_check(*a2, 1LL, 1LL, a3);
  v7 = (char *)(a3 + v6);
  core::slice::raw::from_raw_parts::precondition_check(v7, 1LL, 1LL, v4);
  if ( v3 == a3 )
  {
    *(_QWORD *)a1 = a2[4];
    *(_BYTE *)(a1 + 8) = 0;
  }
  else
  {
    char_from_native_int = uu_env::native_int_str::get_char_from_native_int(*v7);
    if ( char_from_native_int == (_DWORD)&loc_110000 )
      *(_DWORD *)a1 = 65533;
    else
      *(_DWORD *)a1 = char_from_native_int;
    *(_BYTE *)(a1 + 8) = 2;
  }
  return a1;
}
