        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v10; // rdi
  char v11; // al
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  char **v15; // rdx

  v4 = a4;
  uu_ptx::assert_str_integrity(a2, a3, a4);
  if ( a3 != v4 && v4 != a2 )
  {
    v7 = v4 - 1;
    if ( v4 - 1 >= a2 )
      core::panicking::panic_bounds_check(v4 - 1, a2, &off_2EDE68);
    v8 = *(unsigned int *)(a1 + 4 * v4 - 4);
    if ( (unsigned int)(v8 - 9) >= 5
      && (_DWORD)v8 != 32
      && ((unsigned int)v8 < 0x80 || !(unsigned __int8)core::unicode::unicode_data::white_space::lookup(v8)) )
    {
      if ( v4 >= a2 )
      {
        v15 = &off_2EDE80;
        goto LABEL_31;
      }
      v10 = *(unsigned int *)(a1 + 4 * v4);
      if ( (unsigned int)(v10 - 9) >= 5 && (_DWORD)v10 != 32 )
      {
        if ( (unsigned int)v10 < 0x80 )
        {
          if ( v4 <= a3 )
            return v4;
        }
        else
        {
          v11 = core::unicode::unicode_data::white_space::lookup(v10);
          if ( v4 <= a3 || v11 )
            return v4;
        }
        if ( a3 < v7 )
          v7 = a3;
        while ( 1 )
        {
          v12 = v4 - 1;
          if ( v4 - 1 >= a2 )
            break;
          v13 = *(unsigned int *)(a1 + 4 * v12);
          if ( v13 <= 0x20 )
          {
            v14 = 0x100003E00LL;
            if ( _bittest64(&v14, v13) )
              return v4;
          }
          if ( (unsigned int)v13 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v13) )
            return v4;
          --v4;
          if ( v12 <= a3 )
            return v7;
        }
        --v4;
        v15 = &off_2EDE98;
LABEL_31:
        core::panicking::panic_bounds_check(v4, a2, v15);
      }
    }
  }
  return v4;
}
