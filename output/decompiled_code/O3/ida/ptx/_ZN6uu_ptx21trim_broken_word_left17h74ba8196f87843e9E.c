        unsigned __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // rdi
  __int64 v9; // rdi
  char v10; // al
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  char **v15; // rdx

  v5 = a3;
  uu_ptx::assert_str_integrity(a2, a3, a4);
  if ( v5 && v5 != a4 )
  {
    if ( v5 >= a2 )
    {
      v15 = &off_2EE700;
      goto LABEL_28;
    }
    v7 = *(unsigned int *)(a1 + 4 * v5);
    if ( (unsigned int)(v7 - 9) >= 5
      && (_DWORD)v7 != 32
      && ((unsigned int)v7 < 0x80 || !(unsigned __int8)core::unicode::unicode_data::white_space::lookup(v7)) )
    {
      v9 = *(unsigned int *)(a1 + 4 * v5 - 4);
      if ( (unsigned int)(v9 - 9) >= 5 && (_DWORD)v9 != 32 )
      {
        if ( (unsigned int)v9 < 0x80 )
        {
          if ( v5 >= a4 )
            return v5;
        }
        else
        {
          v10 = core::unicode::unicode_data::white_space::lookup(v9);
          if ( v5 >= a4 || v10 )
            return v5;
        }
        v11 = v5 + 1;
        if ( a4 > v5 + 1 )
          v11 = a4;
        v12 = v5;
        while ( v12 < a2 )
        {
          v13 = *(unsigned int *)(a1 + 4 * v12);
          if ( v13 <= 0x20 )
          {
            v14 = 0x100003E00LL;
            if ( _bittest64(&v14, v13) )
              return v12;
          }
          if ( (unsigned int)v13 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v13) )
            return v12;
          if ( ++v12 >= a4 )
            return v11;
        }
        if ( v5 <= a2 )
          v5 = a2;
        v15 = &off_2EE718;
LABEL_28:
        core::panicking::panic_bounds_check(v5, a2, v15);
      }
    }
  }
  return v5;
}
