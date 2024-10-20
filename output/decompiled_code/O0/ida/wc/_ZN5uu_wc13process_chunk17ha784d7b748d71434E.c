unsigned __int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, _BYTE *a5)
{
  unsigned int v8; // edx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rax
  bool v14; // cf
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v19; // rcx
  _QWORD v20[8]; // [rsp+8h] [rbp-40h] BYREF

  v20[0] = a2;
  v20[1] = a3 + a2;
  while ( (unsigned int)core::str::validations::next_code_point(v20) )
  {
    if ( (v8 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F7FD + 3 )
      core::panicking::panic_nounwind(anon_77474d128c52bab738a0ce88bc24ae41_27_llvm_9737630618734806200, 57LL);
    if ( v8 - 9 < 5 || v8 == 32 )
      goto LABEL_4;
    if ( v8 == 1114112 )
      break;
    if ( v8 < 0x80 )
    {
LABEL_38:
      if ( (*a5 & 1) == 0 )
      {
        *a5 = 1;
        if ( a1[3] == -1LL )
          core::panicking::panic_const::panic_const_add_overflow(&off_118C40);
        ++a1[3];
      }
      goto LABEL_5;
    }
    v11 = v8 >> 8;
    if ( v8 >> 8 > 0x1F )
    {
      if ( v11 != 32 )
      {
        if ( v11 != 48 )
          goto LABEL_38;
        v12 = v8 == 12288;
LABEL_33:
        if ( !v12 )
          goto LABEL_38;
        goto LABEL_4;
      }
      v16 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v8] >> 1;
    }
    else
    {
      if ( v11 )
      {
        if ( v11 != 22 )
          goto LABEL_38;
        v12 = v8 == 5760;
        goto LABEL_33;
      }
      v16 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v8];
    }
    if ( (v16 & 1) == 0 )
      goto LABEL_38;
LABEL_4:
    *a5 = 0;
LABEL_5:
    if ( v8 - 12 >= 2 )
    {
      if ( v8 == 9 )
      {
        v13 = *a4 & 0xFFFFFFFFFFFFFFF8LL;
        *a4 = v13;
        v14 = __CFADD__(v13, 8LL);
        v10 = v13 + 8;
        if ( v14 )
          core::panicking::panic_const::panic_const_add_overflow(&off_118BE0);
        goto LABEL_27;
      }
      if ( v8 != 10 )
      {
        if ( v8 >= 0x7F )
        {
          if ( v8 < 0xA0 )
            goto LABEL_25;
          v15 = unicode_width::tables::charwidth::lookup_width(v8, 0LL);
        }
        else
        {
          v15 = 1LL;
          if ( v8 <= 0x1F )
LABEL_25:
            v15 = 0LL;
        }
        v14 = __CFADD__(*a4, v15);
        v10 = *a4 + v15;
        if ( v14 )
          core::panicking::panic_const::panic_const_add_overflow(&off_118BF8);
        goto LABEL_27;
      }
    }
    v9 = a1[4];
    if ( *a4 > v9 )
      v9 = *a4;
    a1[4] = v9;
    v10 = 0LL;
LABEL_27:
    *a4 = v10;
    if ( a1[1] == -1LL )
      core::panicking::panic_const::panic_const_add_overflow(&off_118C28);
    ++a1[1];
  }
  v14 = __CFADD__(*a1, a3);
  v17 = *a1 + a3;
  if ( v14 )
    core::panicking::panic_const::panic_const_add_overflow(&off_118BC8);
  *a1 = v17;
  result = *a4;
  v19 = a1[4];
  if ( *a4 > v19 )
    v19 = *a4;
  a1[4] = v19;
  return result;
}
