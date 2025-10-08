unsigned __int64 __fastcall uu_ptx::trim_broken_word_right(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 v13; // rax

  v4 = a4;
  uu_ptx::assert_str_integrity(a2, a3, a4);
  if ( a3 != v4 && v4 != a2 )
  {
    v7 = v4 - 1;
    if ( v4 - 1 >= a2 )
      core::panicking::panic_bounds_check(v4 - 1, a2, &off_251958);
    v8 = *(unsigned int *)(a1 + 4 * v4 - 4);
    if ( (unsigned int)(v8 - 9) >= 5
      && (_DWORD)v8 != 32
      && ((unsigned int)v8 < 0x80 || !(unsigned __int8)core::unicode::unicode_data::white_space::lookup(v8)) )
    {
      if ( v4 >= a2 )
        core::panicking::panic_bounds_check(v4, a2, &off_251970);
      v10 = *(unsigned int *)(a1 + 4 * v4);
      if ( (unsigned int)(v10 - 9) >= 5 && (_DWORD)v10 != 32 )
      {
        if ( (unsigned int)v10 < 0x80 )
        {
          if ( a3 >= v4 )
            return v4;
        }
        else if ( (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v10) | (a3 >= v4) )
        {
          return v4;
        }
        if ( a3 < v7 )
          v7 = a3;
        while ( 1 )
        {
          v11 = v4 - 1;
          if ( v4 - 1 >= a2 )
            core::panicking::panic_bounds_check(v4 - 1, a2, &off_251988);
          v12 = *(unsigned int *)(a1 + 4 * v11);
          if ( v12 <= 0x20 )
          {
            v13 = 0x100003E00LL;
            if ( _bittest64(&v13, v12) )
              break;
          }
          if ( (unsigned int)v12 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v12) )
            break;
          --v4;
          if ( a3 >= v11 )
            return v7;
        }
      }
    }
  }
  return v4;
}