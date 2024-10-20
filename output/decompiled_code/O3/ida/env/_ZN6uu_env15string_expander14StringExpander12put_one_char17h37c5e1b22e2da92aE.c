__int64 __fastcall uu_env::string_expander::StringExpander::put_one_char(_QWORD *a1, unsigned int a2)
{
  size_t v2; // r14
  void *v3; // rax
  const void *v4; // r15
  __int64 v5; // r12
  int src; // [rsp+0h] [rbp-24h] BYREF

  src = 0;
  if ( a2 >= 0x80 )
  {
    if ( a2 >= 0x800 )
    {
      if ( a2 >= (unsigned int)&unk_10000 )
      {
        LOBYTE(src) = (a2 >> 18) & 7 | 0xF0;
        BYTE1(src) = (a2 >> 12) & 0x3F | 0x80;
        BYTE2(src) = (a2 >> 6) & 0x3F | 0x80;
        HIBYTE(src) = a2 & 0x3F | 0x80;
        v2 = 4LL;
      }
      else
      {
        LOBYTE(src) = (a2 >> 12) | 0xE0;
        BYTE1(src) = (a2 >> 6) & 0x3F | 0x80;
        BYTE2(src) = a2 & 0x3F | 0x80;
        v2 = 3LL;
      }
    }
    else
    {
      LOBYTE(src) = (a2 >> 6) | 0xC0;
      BYTE1(src) = a2 & 0x3F | 0x80;
      v2 = 2LL;
    }
  }
  else
  {
    LOBYTE(src) = a2;
    v2 = 1LL;
  }
  v3 = (void *)_rust_alloc(v2, 1LL);
  if ( !v3 )
    alloc::raw_vec::handle_error(1LL, v2);
  v4 = v3;
  memcpy(v3, &src, v2);
  v5 = a1[2];
  if ( *a1 - v5 < v2 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, a1[2], v2);
    v5 = a1[2];
  }
  memcpy((void *)(v5 + a1[1]), v4, v2);
  a1[2] = v2 + v5;
  return _rust_dealloc(v4, v2, 1LL);
}
