void *__fastcall uu_env::variable_parser::VariableParser::get_current_char(__int64 a1)
{
  _QWORD *v1; // rax
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  __int64 v4; // r14
  unsigned __int8 *v5; // r14
  void *result; // rax
  unsigned int char_from_native_int; // ecx
  _QWORD v8[3]; // [rsp+8h] [rbp-50h] BYREF
  __int128 v9; // [rsp+20h] [rbp-38h]

  v1 = *(_QWORD **)a1;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v3 < v2 )
  {
    v8[0] = &anon_2e379de88427cfdda108dad8baf8b250_39_llvm_16806681140142669859;
    v8[1] = 1LL;
    v8[2] = 8LL;
    v9 = 0LL;
    core::panicking::panic_fmt(v8, &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_53_llvm_11312083278200569487);
  }
  v4 = *v1;
  core::slice::raw::from_raw_parts::precondition_check(*v1, 1LL, 1LL, v2);
  v5 = (unsigned __int8 *)(v2 + v4);
  core::slice::raw::from_raw_parts::precondition_check(v5, 1LL, 1LL, v3 - v2);
  result = &loc_110000;
  if ( v3 != v2 )
  {
    char_from_native_int = uu_env::native_int_str::get_char_from_native_int(*v5);
    result = &unk_FFFD;
    if ( char_from_native_int != (_DWORD)&loc_110000 )
      return (void *)char_from_native_int;
  }
  return result;
}
