unsigned __int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v5; // edx
  unsigned int v6; // r13d
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 *v11; // rcx
  bool v12; // cf
  __int64 v13; // rax
  __int64 v14; // rax
  int code_point; // eax
  unsigned int v16; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v18; // rcx
  _QWORD v20[8]; // [rsp+8h] [rbp-40h] BYREF

  v20[0] = a2;
  v20[1] = a3 + a2;
  if ( (unsigned int)core::str::validations::next_code_point(v20) )
  {
    v6 = v5;
    v7 = a1 + 2;
    do
    {
      if ( (v6 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F7FD + 3 )
        core::panicking::panic_nounwind(anon_77474d128c52bab738a0ce88bc24ae41_27_llvm_9737630618734806200, 57LL);
      if ( (int)v6 <= 11 )
      {
        if ( v6 == 9 )
        {
          v10 = *a4 & 0xFFFFFFFFFFFFFFF8LL;
          *a4 = v10;
          v11 = (__int64 *)a4;
          v12 = __CFADD__(v10, 8LL);
          v13 = v10 + 8;
          if ( v12 )
            core::panicking::panic_const::panic_const_add_overflow(&off_118BE0);
          goto LABEL_24;
        }
        if ( v6 != 10 )
          goto LABEL_15;
      }
      else if ( v6 - 12 >= 2 )
      {
        if ( v6 == 1114112 )
          break;
LABEL_15:
        if ( v6 >= 0x7F )
        {
          if ( v6 >= 0xA0 )
          {
            v14 = unicode_width::tables::charwidth::lookup_width(v6, 0LL);
            goto LABEL_21;
          }
        }
        else
        {
          v14 = 1LL;
          if ( v6 > 0x1F )
          {
LABEL_21:
            v12 = __CFADD__(*a4, v14);
            v9 = *a4 + v14;
            if ( v12 )
              core::panicking::panic_const::panic_const_add_overflow(&off_118BF8);
            goto LABEL_22;
          }
        }
        v14 = 0LL;
        goto LABEL_21;
      }
      v8 = a1[4];
      if ( *a4 > v8 )
        v8 = *a4;
      a1[4] = v8;
      v9 = 0LL;
LABEL_22:
      *a4 = v9;
      if ( v6 == 10 )
      {
        v11 = a1 + 2;
        v13 = *v7 + 1LL;
        if ( *v7 == -1LL )
          core::panicking::panic_const::panic_const_add_overflow(&off_118C10);
LABEL_24:
        *v11 = v13;
      }
      if ( a1[1] == -1LL )
        core::panicking::panic_const::panic_const_add_overflow(&off_118C28);
      ++a1[1];
      code_point = core::str::validations::next_code_point(v20);
      v6 = v16;
    }
    while ( code_point );
  }
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
