unsigned __int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, _BYTE *a5)
{
  unsigned int v8; // edx
  unsigned int v9; // eax
  bool v10; // zf
  char v11; // al
  bool v12; // cf
  __int64 v13; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rcx
  _QWORD v16[8]; // [rsp+8h] [rbp-40h] BYREF

  v16[0] = a2;
  v16[1] = a3 + a2;
  while ( (unsigned int)core::str::validations::next_code_point(v16) )
  {
    if ( (v8 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F7FD + 3 )
      core::panicking::panic_nounwind(anon_77474d128c52bab738a0ce88bc24ae41_27_llvm_9737630618734806200, 57LL);
    if ( v8 - 9 < 5 || v8 == 32 )
      goto LABEL_4;
    if ( v8 == 1114112 )
      break;
    if ( v8 < 0x80 )
    {
LABEL_23:
      if ( (*a5 & 1) == 0 )
      {
        *a5 = 1;
        if ( a1[3] == -1LL )
          core::panicking::panic_const::panic_const_add_overflow(&off_118C40);
        ++a1[3];
      }
      goto LABEL_5;
    }
    v9 = v8 >> 8;
    if ( v8 >> 8 > 0x1F )
    {
      if ( v9 != 32 )
      {
        if ( v9 != 48 )
          goto LABEL_23;
        v10 = v8 == 12288;
LABEL_18:
        if ( !v10 )
          goto LABEL_23;
        goto LABEL_4;
      }
      v11 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v8] >> 1;
    }
    else
    {
      if ( v9 )
      {
        if ( v9 != 22 )
          goto LABEL_23;
        v10 = v8 == 5760;
        goto LABEL_18;
      }
      v11 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v8];
    }
    if ( (v11 & 1) == 0 )
      goto LABEL_23;
LABEL_4:
    *a5 = 0;
LABEL_5:
    if ( a1[1] == -1LL )
      core::panicking::panic_const::panic_const_add_overflow(&off_118C28);
    ++a1[1];
  }
  v12 = __CFADD__(*a1, a3);
  v13 = *a1 + a3;
  if ( v12 )
    core::panicking::panic_const::panic_const_add_overflow(&off_118BC8);
  *a1 = v13;
  result = *a4;
  v15 = a1[4];
  if ( *a4 > v15 )
    v15 = *a4;
  a1[4] = v15;
  return result;
}
