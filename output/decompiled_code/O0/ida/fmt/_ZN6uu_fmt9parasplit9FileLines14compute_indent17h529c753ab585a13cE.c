        unsigned __int64 a5)
{
  unsigned __int64 v5; // r15
  _BYTE *v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  char v16; // al
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // kr00_8
  char v22; // al
  bool v23; // cf
  unsigned __int64 *result; // rax
  _BYTE *v25; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+10h] [rbp-48h]
  unsigned __int64 *v28; // [rsp+18h] [rbp-40h]
  __int64 v29; // [rsp+20h] [rbp-38h]

  v29 = a2;
  v28 = a1;
  v5 = (unsigned __int64)&a3[a4];
  v25 = a3;
  v26 = (unsigned __int64)&a3[a4];
  v27 = 0LL;
  if ( a4 < 0 )
LABEL_42:
    core::panicking::panic_nounwind(anon_eb383e42050b34441b79b108c433df0c_14_llvm_15449580914761616774, 71LL);
  v7 = a3;
  v8 = 0LL;
  v9 = 0LL;
  while ( (unsigned int)core::str::validations::next_code_point(&v25) )
  {
    if ( ((unsigned int)v10 ^ 0xD800) - 2048 >= 0x10F800 )
      core::panicking::panic_nounwind(anon_6de62410172ed548f47511db1f84ebf1_20_llvm_6488061759137378937, 57LL);
    v11 = v25;
    v12 = v26;
    if ( v26 < (unsigned __int64)v25 )
      goto LABEL_42;
    v13 = v27;
    v27 += (unsigned __int64)&v25[v5 - (_QWORD)&v7[v26]];
    if ( (_DWORD)v10 == 1114112 )
      break;
    if ( v13 == a5 )
      v8 = v9;
    if ( v13 >= a5 )
    {
      v14 = 1LL;
      if ( (unsigned int)(v10 - 10) < 4 )
        goto LABEL_38;
      if ( (_DWORD)v10 != 9 )
      {
        if ( (_DWORD)v10 != 32 )
        {
          if ( (unsigned int)v10 < 0x80 )
            goto LABEL_41;
          v15 = (unsigned int)v10 >> 8;
          if ( (unsigned int)v10 >> 8 <= 0x1F )
          {
            if ( v15 )
            {
              if ( v15 != 22 )
                goto LABEL_41;
              v16 = (_DWORD)v10 == 5760;
              goto LABEL_35;
            }
            v11 = core::unicode::unicode_data::white_space::WHITESPACE_MAP;
            v22 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v10];
LABEL_34:
            v16 = v22 & 1;
            goto LABEL_35;
          }
          if ( v15 == 32 )
          {
            v11 = core::unicode::unicode_data::white_space::WHITESPACE_MAP;
            v22 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v10] >> 1;
            goto LABEL_34;
          }
          if ( v15 != 48 )
            goto LABEL_41;
          v16 = (_DWORD)v10 == 12288;
LABEL_35:
          if ( !v16 )
            goto LABEL_41;
LABEL_36:
          v14 = 1LL;
          if ( (unsigned int)v10 >= 0xA0 )
          {
            v11 = 0LL;
            v14 = unicode_width::tables::charwidth::lookup_width((unsigned int)v10, 0LL);
          }
        }
LABEL_38:
        v23 = __CFADD__(v14, v9);
        v9 += v14;
        if ( v23 )
          core::panicking::panic_const::panic_const_add_overflow(&off_114798, v11, v10, v13);
        v11 = v25;
        v12 = v26;
        goto LABEL_4;
      }
    }
    else if ( (_DWORD)v10 != 9 )
    {
      goto LABEL_36;
    }
    v17 = *(_QWORD *)(*(_QWORD *)v29 + 64LL);
    if ( !v17 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_114768, v25, v10, 0LL);
    if ( (v17 | v9) >> 32 )
    {
      v18 = v9 % v17;
      v19 = v9 / v17 + 1;
      if ( v9 / v17 == -1LL )
        goto LABEL_45;
    }
    else
    {
      v18 = (unsigned int)v9 % (unsigned int)v17;
      v19 = (unsigned int)v9 / (unsigned int)v17 + 1LL;
      if ( (unsigned int)v9 / (unsigned int)v17 == -1LL )
LABEL_45:
        core::panicking::panic_const::panic_const_add_overflow(&off_114780, v25, v18, v17);
    }
    v21 = v19;
    v20 = v17 * (unsigned __int128)(unsigned __int64)v19;
    if ( !is_mul_ok(v17, v21) )
      core::panicking::panic_const::panic_const_mul_overflow(&off_114780, v25, *((_QWORD *)&v20 + 1));
    v9 = v20;
LABEL_4:
    v7 = v11;
    v5 = v12;
    if ( v12 < (unsigned __int64)v11 )
      goto LABEL_42;
  }
  v13 = 0LL;
LABEL_41:
  result = v28;
  *v28 = v13;
  result[1] = v8;
  result[2] = v9;
  return result;
}
