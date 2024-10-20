unsigned __int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, _BYTE *a5)
{
  unsigned int v7; // edx
  unsigned int v8; // ebp
  _QWORD *v9; // r15
  unsigned __int64 v10; // rax
  __int64 *v11; // rcx
  bool v12; // cf
  __int64 v13; // rax
  int code_point; // eax
  unsigned int v15; // edx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  bool v19; // zf
  __int64 v20; // rax
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
        goto LABEL_8;
      if ( v8 == 1114112 )
        break;
      if ( v8 < 0x80 )
      {
LABEL_40:
        if ( (*a5 & 1) == 0 )
        {
          *a5 = 1;
          if ( a1[3] == -1LL )
            core::panicking::panic_const::panic_const_add_overflow(&off_118C40);
          ++a1[3];
        }
        goto LABEL_9;
      }
      v18 = v8 >> 8;
      if ( v8 >> 8 > 0x1F )
      {
        if ( v18 != 32 )
        {
          if ( v18 != 48 )
            goto LABEL_40;
          v19 = v8 == 12288;
LABEL_35:
          if ( !v19 )
            goto LABEL_40;
          goto LABEL_8;
        }
        v21 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v8] >> 1;
      }
      else
      {
        if ( v18 )
        {
          if ( v18 != 22 )
            goto LABEL_40;
          v19 = v8 == 5760;
          goto LABEL_35;
        }
        v21 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v8];
      }
      if ( (v21 & 1) == 0 )
        goto LABEL_40;
LABEL_8:
      *a5 = 0;
LABEL_9:
      if ( v8 - 12 >= 2 )
      {
        if ( v8 == 9 )
        {
          v10 = *a4 & 0xFFFFFFFFFFFFFFF8LL;
          *a4 = v10;
          v11 = (__int64 *)a4;
          v12 = __CFADD__(v10, 8LL);
          v13 = v10 + 8;
          if ( v12 )
            core::panicking::panic_const::panic_const_add_overflow(&off_118BE0);
          goto LABEL_4;
        }
        if ( v8 != 10 )
        {
          if ( v8 >= 0x7F )
          {
            if ( v8 < 0xA0 )
              goto LABEL_27;
            v20 = unicode_width::tables::charwidth::lookup_width(v8, 0LL);
          }
          else
          {
            v20 = 1LL;
            if ( v8 <= 0x1F )
LABEL_27:
              v20 = 0LL;
          }
          v12 = __CFADD__(*a4, v20);
          v17 = *a4 + v20;
          if ( v12 )
            core::panicking::panic_const::panic_const_add_overflow(&off_118BF8);
          goto LABEL_29;
        }
      }
      v16 = a1[4];
      if ( *a4 > v16 )
        v16 = *a4;
      a1[4] = v16;
      v17 = 0LL;
LABEL_29:
      *a4 = v17;
      if ( v8 != 10 )
        goto LABEL_5;
      v11 = a1 + 2;
      v13 = *v9 + 1LL;
      if ( *v9 == -1LL )
        core::panicking::panic_const::panic_const_add_overflow(&off_118C10);
LABEL_4:
      *v11 = v13;
LABEL_5:
      code_point = core::str::validations::next_code_point(v25);
      v8 = v15;
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
