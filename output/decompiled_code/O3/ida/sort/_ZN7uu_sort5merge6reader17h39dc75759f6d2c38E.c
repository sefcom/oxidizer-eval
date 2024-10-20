__int64 __fastcall uu_sort::merge::reader(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 result; // rax
  __int64 *v10; // r13
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // r13
  __int64 v15; // r12
  signed __int64 v16; // rax
  __int64 v17; // rcx
  signed __int64 v18; // rtt
  char v19; // al
  __int64 v20; // rsi
  char v21; // [rsp+Fh] [rbp-F9h] BYREF
  __int64 v22; // [rsp+10h] [rbp-F8h]
  __int64 v23; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v24; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v25; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v26; // [rsp+38h] [rbp-D0h]
  __int128 v27; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v29[21]; // [rsp+60h] [rbp-A8h] BYREF

  v23 = a1;
  <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v28, &v23);
  while ( v29[0] != 0x8000000000000000LL )
  {
    if ( v28 >= a3 )
      core::panicking::panic_bounds_check(v28, a3, &off_193458);
    if ( *(_DWORD *)(a2 + 56 * v28) == 3 )
    {
      core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v29);
    }
    else
    {
      v10 = (__int64 *)(a2 + 56 * v28);
      uu_sort::chunks::read(
        (unsigned int)&v24,
        (_DWORD)v10,
        (unsigned int)v29,
        0,
        (unsigned int)&v21,
        (_DWORD)v10 + 16,
        (__int64)(v10 + 5),
        (unsigned int)&v21,
        a5,
        a4);
      result = v24;
      if ( v24 )
        return result;
      if ( !(_BYTE)v25 )
      {
        v11 = *v10;
        *v10 = 3LL;
        if ( v11 == 3 )
          core::option::unwrap_failed(&off_193470);
        v24 = v11;
        v12 = *(_OWORD *)(v10 + 1);
        v13 = *(_OWORD *)(v10 + 3);
        v27 = *(_OWORD *)(v10 + 5);
        v26 = v13;
        v25 = v12;
        v14 = *((_QWORD *)&v27 + 1);
        v22 = v27;
        if ( v11 )
        {
          if ( v11 == 1 )
            std::sync::mpmc::counter::Sender<C>::release(&v25);
          else
            std::sync::mpmc::counter::Sender<C>::release(&v25);
        }
        else
        {
          v15 = v25;
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(v25 + 512)) )
          {
            v16 = *(_QWORD *)(v15 + 128);
            v17 = *(_QWORD *)(v15 + 400);
            do
            {
              v18 = v16;
              v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 128), v17 | v16, v16);
            }
            while ( v18 != v16 );
            if ( (v16 & *(_QWORD *)(v15 + 400)) == 0 )
              std::sync::mpmc::waker::SyncWaker::disconnect(v15 + 320);
            v19 = *(_BYTE *)(v15 + 528);
            *(_BYTE *)(v15 + 528) = 1;
            if ( v19 )
              core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v15);
          }
        }
        if ( *((_QWORD *)&v25 + 1) )
          _rust_dealloc(v26, *((_QWORD *)&v25 + 1), 1LL);
        if ( *(_QWORD *)v14 )
          (*(void (__fastcall **)(__int64))v14)(v22);
        v20 = *(_QWORD *)(v14 + 8);
        if ( v20 )
          _rust_dealloc(v22, v20, *(_QWORD *)(v14 + 16));
      }
    }
    <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v28, &v23);
  }
  return 0LL;
}
