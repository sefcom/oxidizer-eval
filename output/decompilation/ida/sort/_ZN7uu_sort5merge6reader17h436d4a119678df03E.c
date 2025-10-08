__int64 __fastcall uu_sort::merge::reader(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // r15
  __int64 result; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // rbp
  __int128 *v19; // r14
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // r13
  __int64 v23; // r14
  int v25; // [rsp+10h] [rbp-108h]
  __int64 v26; // [rsp+18h] [rbp-100h] BYREF
  _OWORD v27[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v28; // [rsp+40h] [rbp-D8h]
  unsigned __int64 dest; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD v30[24]; // [rsp+58h] [rbp-C0h] BYREF

  v8 = a2;
  <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&dest);
  result = 0LL;
  if ( !__OFSUB__(0LL, v30[0]) )
  {
    v11 = 0x8000000000000000LL;
    v25 = a5;
    do
    {
      if ( dest >= a3 )
        core::panicking::panic_bounds_check(dest, a3, &off_18C970);
      v12 = *(_QWORD *)(v8 + 56 * dest);
      if ( v12 == 3 )
      {
        core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v30);
      }
      else
      {
        v13 = (_QWORD *)(v8 + 56 * dest);
        uu_sort::chunks::read(
          (unsigned int)&v26,
          v12,
          v13[1],
          (unsigned int)v30,
          (_DWORD)v13 + 16,
          (_DWORD)v13 + 40,
          v25,
          a4);
        result = v26;
        if ( v26 )
          return result;
        if ( !LOBYTE(v27[0]) )
        {
          v14 = *v13;
          *v13 = 3LL;
          if ( v14 == 3 )
            core::option::unwrap_failed(&off_18C988);
          v15 = a1;
          v16 = a3;
          v17 = v11;
          v18 = a4;
          v19 = (__int128 *)(v13 + 1);
          v26 = v14;
          v20 = *v19;
          v21 = v19[1];
          v28 = v19[2];
          v27[1] = v21;
          v27[0] = v20;
          v23 = *((_QWORD *)&v28 + 1);
          v22 = v28;
          core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v26);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>((char *)v27 + 8, v12);
          <uu_sort::merge::PlainMergeInput<R> as uu_sort::merge::MergeInput>::finished_reading(v22, v23);
          a4 = v18;
          v11 = v17;
          a3 = v16;
          a1 = v15;
          v8 = a2;
        }
      }
      <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&dest);
    }
    while ( v30[0] != v11 );
    return 0LL;
  }
  return result;
}