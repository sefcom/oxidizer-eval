unsigned __int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  bool v10; // cf
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rcx
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[0] = a2;
  for ( v15[1] = a3 + a2; (unsigned int)core::str::validations::next_code_point(v15); *a4 = v8 )
  {
    if ( (v6 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F7FD + 3 )
      core::panicking::panic_nounwind(anon_77474d128c52bab738a0ce88bc24ae41_27_llvm_9737630618734806200, 57LL);
    if ( (int)v6 > 11 )
    {
      if ( v6 - 12 < 2 )
        goto LABEL_4;
      if ( v6 == 1114112 )
        break;
    }
    else
    {
      if ( v6 == 9 )
      {
        v9 = *a4 & 0xFFFFFFFFFFFFFFF8LL;
        *a4 = v9;
        v10 = __CFADD__(v9, 8LL);
        v8 = v9 + 8;
        if ( v10 )
          core::panicking::panic_const::panic_const_add_overflow(&off_118BE0);
        continue;
      }
      if ( v6 == 10 )
      {
LABEL_4:
        v7 = a1[4];
        if ( *a4 > v7 )
          v7 = *a4;
        a1[4] = v7;
        v8 = 0LL;
        continue;
      }
    }
    if ( v6 >= 0x7F )
    {
      if ( v6 >= 0xA0 )
      {
        v11 = unicode_width::tables::charwidth::lookup_width(v6, 0LL);
LABEL_21:
        v10 = __CFADD__(*a4, v11);
        v8 = *a4 + v11;
        if ( v10 )
          core::panicking::panic_const::panic_const_add_overflow(&off_118BF8);
        continue;
      }
    }
    else
    {
      v11 = 1LL;
      if ( v6 > 0x1F )
        goto LABEL_21;
    }
    v8 = *a4;
  }
  v10 = __CFADD__(*a1, a3);
  v12 = *a1 + a3;
  if ( v10 )
    core::panicking::panic_const::panic_const_add_overflow(&off_118BC8);
  *a1 = v12;
  result = *a4;
  v14 = a1[4];
  if ( *a4 > v14 )
    v14 = *a4;
  a1[4] = v14;
  return result;
}
