        char a5)
{
  bool result; // al
  char *v9; // r12
  unsigned int v10; // edx
  unsigned int v11; // r13d
  char *v12; // r14
  int v13; // eax
  unsigned int v14; // edx
  char *v15; // rax
  char *v16; // rcx
  unsigned __int64 v17; // rbp
  unsigned int v18; // ecx
  bool v19; // zf
  char v20; // al
  void *s1a; // [rsp+0h] [rbp-58h]
  char *v22; // [rsp+8h] [rbp-50h] BYREF
  char *v23; // [rsp+10h] [rbp-48h]
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]
  size_t na; // [rsp+20h] [rbp-38h]

  na = n;
  if ( a4 < n )
  {
    s1a = s1;
    if ( a5 )
      return 0;
    goto LABEL_6;
  }
  result = bcmp(s1, s2, n) == 0;
  if ( !result )
  {
    s1a = s1;
    if ( !a5 )
    {
LABEL_6:
      v9 = &s2[a4];
      v22 = s2;
      v23 = &s2[a4];
      v24 = 0LL;
      if ( (a4 & 0x8000000000000000LL) != 0LL )
LABEL_41:
        core::panicking::panic_nounwind(anon_eb383e42050b34441b79b108c433df0c_14_llvm_15449580914761616774, 71LL);
      if ( !(unsigned int)core::str::validations::next_code_point(&v22) )
        return 0;
      v11 = v10;
      v12 = s2;
      while ( 1 )
      {
        if ( (v11 ^ 0xD800) - 2048 >= 0x10F800 )
          core::panicking::panic_nounwind(anon_6de62410172ed548f47511db1f84ebf1_20_llvm_6488061759137378937, 57LL);
        v15 = v9;
        v16 = v12;
        v12 = v22;
        v9 = v23;
        if ( v23 < v22 )
          goto LABEL_41;
        v17 = v24;
        v24 += (unsigned __int64)&v22[v15 - &v16[(_QWORD)v23]];
        if ( v11 == 1114112 )
          return 0;
        if ( v17 )
        {
          if ( a4 <= v17 )
          {
            if ( a4 != v17 )
              goto LABEL_40;
          }
          else if ( s2[v17] < -64 )
          {
            goto LABEL_40;
          }
        }
        if ( a4 < v17 )
          core::panicking::panic_nounwind(anon_3b19d6da1157f8a5be874edba1fa8efa_12_llvm_3026733004089231496, 102LL);
        if ( !s2 )
LABEL_40:
          core::str::slice_error_fail(s2, a4, v17, a4, &off_114750);
        if ( a4 - v17 >= na && !bcmp(s1a, &s2[v17], na) )
          return 1;
        if ( v11 - 9 >= 5 && v11 != 32 )
        {
          if ( v11 < 0x80 )
            return 0;
          v18 = v11 >> 8;
          result = 0;
          if ( v11 >> 8 > 0x1F )
          {
            if ( v18 != 32 )
            {
              if ( v18 != 48 )
                return result;
              v19 = v11 == 12288;
LABEL_33:
              if ( !v19 )
                return 0;
              goto LABEL_10;
            }
            v20 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v11] >> 1;
          }
          else
          {
            if ( v18 )
            {
              if ( v18 != 22 )
                return result;
              v19 = v11 == 5760;
              goto LABEL_33;
            }
            v20 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v11];
          }
          if ( (v20 & 1) == 0 )
            return 0;
        }
LABEL_10:
        v13 = core::str::validations::next_code_point(&v22);
        v11 = v14;
        if ( !v13 )
          return 0;
      }
    }
  }
  return result;
}
