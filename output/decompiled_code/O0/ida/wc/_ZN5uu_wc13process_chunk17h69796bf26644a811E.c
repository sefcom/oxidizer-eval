unsigned __int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, _BYTE *a5)
{
  unsigned int v7; // edx
  unsigned int v8; // ebp
  _QWORD *v9; // r15
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rax
  __int64 *v15; // rcx
  bool v16; // cf
  __int64 v17; // rax
  __int64 v18; // rax
  int code_point; // eax
  unsigned int v20; // edx
  char v21; // al
  unsigned __int64 result; // rax
  unsigned __int64 v23; // rcx
  _QWORD v25[8]; // [rsp+8h] [rbp-40h] BYREF

  v25[0] = a2;
  v25[1] = a3 + a2;
  if ( (unsigned int)core::str::validations::next_code_point(v25) )
  {
    v8 = v7;
    v9 = a1 + 2;
    do
    {
      if ( (v8 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F7FD + 3 )
        core::panicking::panic_nounwind(anon_77474d128c52bab738a0ce88bc24ae41_27_llvm_9737630618734806200, 57LL);
      if ( v8 - 9 < 5 || v8 == 32 )
        goto LABEL_5;
      if ( v8 == 1114112 )
        break;
      if ( v8 < 0x80 )
      {
LABEL_42:
        if ( (*a5 & 1) == 0 )
        {
          *a5 = 1;
          if ( a1[3] == -1LL )
            core::panicking::panic_const::panic_const_add_overflow(&off_118C40);
          ++a1[3];
        }
        goto LABEL_6;
      }
      v12 = v8 >> 8;
      if ( v8 >> 8 > 0x1F )
      {
        if ( v12 != 32 )
        {
          if ( v12 != 48 )
            goto LABEL_42;
          v13 = v8 == 12288;
LABEL_37:
          if ( !v13 )
            goto LABEL_42;
          goto LABEL_5;
        }
        v21 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v8] >> 1;
      }
      else
      {
        if ( v12 )
        {
          if ( v12 != 22 )
            goto LABEL_42;
          v13 = v8 == 5760;
          goto LABEL_37;
        }
        v21 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v8];
      }
      if ( (v21 & 1) == 0 )
        goto LABEL_42;
LABEL_5:
      *a5 = 0;
LABEL_6:
      if ( v8 - 12 < 2 )
        goto LABEL_9;
      if ( v8 == 9 )
      {
        v14 = *a4 & 0xFFFFFFFFFFFFFFF8LL;
        *a4 = v14;
        v15 = (__int64 *)a4;
        v16 = __CFADD__(v14, 8LL);
        v17 = v14 + 8;
        if ( v16 )
          core::panicking::panic_const::panic_const_add_overflow(&off_118BE0);
        goto LABEL_30;
      }
      if ( v8 == 10 )
      {
LABEL_9:
        v10 = a1[4];
        if ( *a4 > v10 )
          v10 = *a4;
        a1[4] = v10;
        v11 = 0LL;
        goto LABEL_28;
      }
      if ( v8 >= 0x7F )
      {
        if ( v8 >= 0xA0 )
        {
          v18 = unicode_width::tables::charwidth::lookup_width(v8, 0LL);
          goto LABEL_27;
        }
      }
      else
      {
        v18 = 1LL;
        if ( v8 > 0x1F )
          goto LABEL_27;
      }
      v18 = 0LL;
LABEL_27:
      v16 = __CFADD__(*a4, v18);
      v11 = *a4 + v18;
      if ( v16 )
        core::panicking::panic_const::panic_const_add_overflow(&off_118BF8);
LABEL_28:
      *a4 = v11;
      if ( v8 == 10 )
      {
        v15 = a1 + 2;
        v17 = *v9 + 1LL;
        if ( *v9 == -1LL )
          core::panicking::panic_const::panic_const_add_overflow(&off_118C10);
LABEL_30:
        *v15 = v17;
      }
      if ( a1[1] == -1LL )
        core::panicking::panic_const::panic_const_add_overflow(&off_118C28);
      ++a1[1];
      code_point = core::str::validations::next_code_point(v25);
      v8 = v20;
    }
    while ( code_point );
  }
  if ( __CFADD__(*a1, a3) )
    core::panicking::panic_const::panic_const_add_overflow(&off_118BC8);
  *a1 += a3;
  result = *a4;
  v23 = a1[4];
  if ( *a4 > v23 )
    v23 = *a4;
  a1[4] = v23;
  return result;
}
