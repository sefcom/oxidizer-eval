unsigned __int64 __fastcall uu_ptx::trim_broken_word_left(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // rdi
  unsigned __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  char v14; // cl

  v5 = a3;
  uu_ptx::assert_str_integrity(a2, a3, a4);
  if ( v5 == a4 || v5 == 0 )
    return v5;
  if ( v5 >= a2 )
    core::panicking::panic_bounds_check(v5, a2, &off_251928);
  v7 = *(unsigned int *)(a1 + 4 * v5);
  if ( (unsigned int)(v7 - 9) < 5
    || (_DWORD)v7 == 32
    || (unsigned int)v7 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v7) )
  {
    return v5;
  }
  v9 = *(unsigned int *)(a1 + 4 * v5 - 4);
  if ( (unsigned int)(v9 - 9) < 5 || (_DWORD)v9 == 32 )
    return v5;
  if ( (unsigned int)v9 < 0x80 )
  {
    if ( v5 < a4 )
      goto LABEL_15;
    return v5;
  }
  if ( (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v9) | (v5 >= a4) )
    return v5;
LABEL_15:
  v10 = v5 + 1;
  if ( a4 > v5 + 1 )
    v10 = a4;
  result = v5;
  while ( 1 )
  {
    if ( result >= a2 )
    {
      if ( v5 <= a2 )
        v5 = a2;
      core::panicking::panic_bounds_check(v5, a2, &off_251940);
    }
    v11 = *(unsigned int *)(a1 + 4 * result);
    if ( v11 <= 0x20 )
    {
      v12 = 0x100003E00LL;
      if ( _bittest64(&v12, v11) )
        break;
    }
    if ( (unsigned int)v11 >= 0x80 )
    {
      v13 = result;
      v14 = core::unicode::unicode_data::white_space::lookup(v11);
      result = v13;
      if ( v14 )
        break;
    }
    if ( ++result >= a4 )
      return v10;
  }
  return result;
}