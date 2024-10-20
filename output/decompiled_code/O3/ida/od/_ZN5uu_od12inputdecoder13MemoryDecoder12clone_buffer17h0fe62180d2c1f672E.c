unsigned __int64 __fastcall uu_od::inputdecoder::MemoryDecoder::clone_buffer(_QWORD *a1, size_t *a2)
{
  const void *v3; // rsi
  size_t v4; // r12
  size_t v5; // r14
  size_t v6; // r13
  unsigned __int64 v7; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r15
  _BYTE *v10; // rdi

  v3 = *(const void **)(*a1 + 8LL);
  v4 = *(_QWORD *)(*a1 + 16LL);
  a2[2] = 0LL;
  if ( *a2 < v4 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, 0LL, v4);
    v5 = a2[2];
  }
  else
  {
    v5 = 0LL;
  }
  v6 = a2[1];
  memcpy((void *)(v5 + v6), v3, v4);
  v7 = v4 + v5;
  a2[2] = v7;
  result = a1[1];
  v9 = result - v7;
  if ( result > v7 )
  {
    if ( *a2 - v7 < v9 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, v7, v9);
      v6 = a2[1];
      v7 = a2[2];
    }
    v10 = (_BYTE *)(v7 + v6);
    if ( v9 >= 2 )
    {
      memset(v10, 0, v9 - 1);
      v7 = v9 + v7 - 1;
      v10 = (_BYTE *)(v7 + v6);
    }
    *v10 = 0;
    result = v7 + 1;
  }
  a2[2] = result;
  return result;
}
