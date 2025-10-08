unsigned __int64 __fastcall uu_ptx::trim_idx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  unsigned __int64 v9; // r13
  __int64 v10; // rdi

  v4 = a4;
  v5 = a3;
  uu_ptx::assert_str_integrity(a2, a3, a4);
  if ( v5 >= v4 )
  {
LABEL_10:
    if ( v5 < v4 )
    {
      do
      {
        v9 = v4--;
        if ( v4 >= a2 )
          core::panicking::panic_bounds_check(v9 - 1, a2, &off_2519B8);
        v10 = *(unsigned int *)(a1 + 4 * v4);
      }
      while ( ((unsigned int)(v10 - 9) < 5
            || (_DWORD)v10 == 32
            || (unsigned int)v10 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v10))
           && v5 < v4 );
    }
  }
  else
  {
    v7 = v5;
    do
    {
      if ( v7 >= a2 )
      {
        if ( v5 <= a2 )
          v5 = a2;
        core::panicking::panic_bounds_check(v5, a2, &off_2519A0);
      }
      v8 = *(unsigned int *)(a1 + 4 * v7);
      if ( (unsigned int)(v8 - 9) >= 5
        && (_DWORD)v8 != 32
        && ((unsigned int)v8 < 0x80 || !(unsigned __int8)core::unicode::unicode_data::white_space::lookup(v8)) )
      {
        v5 = v7;
        goto LABEL_10;
      }
      ++v7;
    }
    while ( v4 != v7 );
    return v4;
  }
  return v5;
}