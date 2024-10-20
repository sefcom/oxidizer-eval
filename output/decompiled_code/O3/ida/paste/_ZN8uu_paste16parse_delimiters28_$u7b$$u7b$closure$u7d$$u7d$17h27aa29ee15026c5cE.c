__int64 __fastcall uu_paste::parse_delimiters::{{closure}}(_BYTE *src, _QWORD *a2, unsigned int a3)
{
  size_t v3; // r15
  void *v4; // rax
  void *v5; // r12
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rcx

  if ( a3 >= 0x80 )
  {
    if ( a3 >= 0x800 )
    {
      if ( a3 >= (unsigned int)&xmmword_10000 )
      {
        *src = (a3 >> 18) & 7 | 0xF0;
        src[1] = (a3 >> 12) & 0x3F | 0x80;
        src[2] = (a3 >> 6) & 0x3F | 0x80;
        src[3] = a3 & 0x3F | 0x80;
        v3 = 4LL;
      }
      else
      {
        *src = (a3 >> 12) | 0xE0;
        src[1] = (a3 >> 6) & 0x3F | 0x80;
        src[2] = a3 & 0x3F | 0x80;
        v3 = 3LL;
      }
    }
    else
    {
      *src = (a3 >> 6) | 0xC0;
      src[1] = a3 & 0x3F | 0x80;
      v3 = 2LL;
    }
  }
  else
  {
    *src = a3;
    v3 = 1LL;
  }
  v4 = (void *)_rust_alloc(v3, 1LL);
  if ( !v4 )
    alloc::raw_vec::handle_error(1LL, v3);
  v5 = v4;
  memcpy(v4, src, v3);
  v6 = a2[2];
  if ( v6 == *a2 )
    alloc::raw_vec::RawVec<T,A>::grow_one(a2);
  result = a2[1];
  v8 = 16 * v6;
  *(_QWORD *)(result + v8) = v5;
  *(_QWORD *)(result + v8 + 8) = v3;
  a2[2] = v6 + 1;
  return result;
}
