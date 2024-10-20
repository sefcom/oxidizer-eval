unsigned __int64 __fastcall uu_env::native_int_str::get_char_from_native_int(char a1)
{
  unsigned __int64 result; // rax
  unsigned int v2; // edx
  char v3; // [rsp+7h] [rbp-31h] BYREF
  _QWORD v4[2]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v5; // [rsp+18h] [rbp-20h] BYREF
  __int64 v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  v3 = a1;
  core::str::converts::from_utf8(&v5, &v3, 1LL);
  result = (unsigned __int64)&loc_110000;
  if ( !v5 && v6 )
  {
    v4[0] = v6;
    v4[1] = v6 + v7;
    if ( !(unsigned int)core::str::validations::next_code_point(v4) )
      goto LABEL_7;
    result = v2;
    if ( (v2 ^ 0xD800) - 2048 >= 0x10F800 )
      core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_4_llvm_18365996230866053775, 57LL);
    if ( v2 == (_DWORD)&loc_110000 )
LABEL_7:
      core::option::unwrap_failed(&anon_1c6f9a5923c36a430a7b9bb24b2ecad8_44_llvm_11312083278200569487);
  }
  return result;
}
