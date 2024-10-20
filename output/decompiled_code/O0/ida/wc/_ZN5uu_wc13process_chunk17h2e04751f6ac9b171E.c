unsigned __int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v5; // edx
  unsigned int v6; // r13d
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rax
  __int64 *v9; // rcx
  bool v10; // cf
  __int64 v11; // rax
  int code_point; // eax
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v18; // rcx
  _QWORD v20[8]; // [rsp+8h] [rbp-40h] BYREF

  v20[0] = a2;
  v20[1] = a3 + a2;
  if ( (unsigned int)core::str::validations::next_code_point(v20) )
  {
    v6 = v5;
    v7 = a1 + 2;
    while ( 1 )
    {
      if ( (v6 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F7FD + 3 )
        core::panicking::panic_nounwind(anon_77474d128c52bab738a0ce88bc24ae41_27_llvm_9737630618734806200, 57LL);
      if ( (int)v6 <= 11 )
      {
        if ( v6 == 9 )
        {
          v8 = *a4 & 0xFFFFFFFFFFFFFFF8LL;
          *a4 = v8;
          v9 = (__int64 *)a4;
          v10 = __CFADD__(v8, 8LL);
          v11 = v8 + 8;
          if ( v10 )
            core::panicking::panic_const::panic_const_add_overflow(&off_118BE0);
          goto LABEL_4;
        }
        if ( v6 == 10 )
        {
LABEL_13:
          v14 = a1[4];
          if ( *a4 > v14 )
            v14 = *a4;
          a1[4] = v14;
          v15 = 0LL;
          goto LABEL_23;
        }
      }
      else
      {
        if ( v6 - 12 < 2 )
          goto LABEL_13;
        if ( v6 == 1114112 )
          goto LABEL_26;
      }
      if ( v6 >= 0x7F )
        break;
      v16 = 1LL;
      if ( v6 <= 0x1F )
        goto LABEL_21;
LABEL_22:
      v10 = __CFADD__(*a4, v16);
      v15 = *a4 + v16;
      if ( v10 )
        core::panicking::panic_const::panic_const_add_overflow(&off_118BF8);
LABEL_23:
      *a4 = v15;
      if ( v6 != 10 )
        goto LABEL_5;
      v9 = a1 + 2;
      v11 = *v7 + 1LL;
      if ( *v7 == -1LL )
        core::panicking::panic_const::panic_const_add_overflow(&off_118C10);
LABEL_4:
      *v9 = v11;
LABEL_5:
      code_point = core::str::validations::next_code_point(v20);
      v6 = v13;
      if ( !code_point )
        goto LABEL_26;
    }
    if ( v6 >= 0xA0 )
    {
      v16 = unicode_width::tables::charwidth::lookup_width(v6, 0LL);
      goto LABEL_22;
    }
LABEL_21:
    v16 = 0LL;
    goto LABEL_22;
  }
LABEL_26:
  if ( __CFADD__(*a1, a3) )
    core::panicking::panic_const::panic_const_add_overflow(&off_118BC8);
  *a1 += a3;
  result = *a4;
  v18 = a1[4];
  if ( *a4 > v18 )
    v18 = *a4;
  a1[4] = v18;
  return result;
}
