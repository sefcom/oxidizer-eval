void *__fastcall uu_tail::chunks::BytesChunk::from_chunk(void *s, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r13
  bool v4; // cc
  unsigned __int64 v5; // r13
  __int64 buffer_with; // r15
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD v13[1029]; // [rsp+0h] [rbp-2028h] BYREF

  v13[512] = 0LL;
  v3 = *(_QWORD *)(a2 + 0x2000);
  v4 = v3 <= a3;
  v5 = v3 - a3;
  if ( v4 )
  {
    v5 = 0LL;
    memset(s, 0, 0x2000uLL);
  }
  else
  {
    memset(v13, 0, 0x2000uLL);
    buffer_with = uu_tail::chunks::BytesChunk::get_buffer_with(a2, a3);
    v9 = v8;
    v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(
            v8,
            v13,
            0x2000LL,
            &off_173258);
    core::slice::<impl [T]>::copy_from_slice(v10, v11, buffer_with, v9, &off_173270);
    memcpy(s, v13, 0x2000uLL);
  }
  *((_QWORD *)s + 1024) = v5;
  return s;
}