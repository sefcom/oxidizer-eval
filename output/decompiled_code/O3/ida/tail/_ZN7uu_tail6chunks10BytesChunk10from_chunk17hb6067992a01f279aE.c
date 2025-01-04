void *__fastcall uu_tail::chunks::BytesChunk::from_chunk(void *s, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r13
  bool v4; // cc
  unsigned __int64 v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 buffer_with; // r15
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD v15[1029]; // [rsp+0h] [rbp-2028h] BYREF

  v15[512] = 0LL;
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
    memset(v15, 0, 0x2000uLL);
    buffer_with = uu_tail::chunks::BytesChunk::get_buffer_with(a2, a3, v7, v8);
    v11 = v10;
    v12 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(
            v10,
            v15,
            0x2000LL,
            &off_1BC818);
    core::slice::<impl [T]>::copy_from_slice(v12, v13, buffer_with, v11, &off_1BC830);
    memcpy(s, v15, 0x2000uLL);
  }
  *((_QWORD *)s + 1024) = v5;
  return s;
}
