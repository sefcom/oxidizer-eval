__int64 __fastcall uu_sort::merge::reader(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // rbp
  signed __int64 v15; // rax
  __int64 v16; // rcx
  signed __int64 v17; // rtt
  char v18; // al
  __int64 v19; // rbx
  void *v20; // r12
  void *v21; // r14
  int v22; // ebp
  __int64 v23; // r13
  char v24; // [rsp+7h] [rbp-131h] BYREF
  __int64 v25; // [rsp+8h] [rbp-130h] BYREF
  unsigned __int64 v26; // [rsp+10h] [rbp-128h]
  __int64 v27; // [rsp+18h] [rbp-120h]
  void *src[2]; // [rsp+20h] [rbp-118h]
  int fd[4]; // [rsp+30h] [rbp-108h]
  __int64 v30; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v31[48]; // [rsp+48h] [rbp-F0h] BYREF
  __int128 v32; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v33; // [rsp+88h] [rbp-B0h] BYREF
  _QWORD v34[21]; // [rsp+90h] [rbp-A8h] BYREF

  v25 = a1;
  <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v33, &v25);
  if ( v34[0] != 0x8000000000000000LL )
  {
    v27 = a5;
    v26 = a3;
    do
    {
      if ( v33 >= a3 )
        core::panicking::panic_bounds_check(v33, a3, &off_193458);
      if ( *(_DWORD *)(a2 + 72 * v33) == 3 )
      {
        core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v34);
      }
      else
      {
        v9 = a2 + 72 * v33;
        uu_sort::chunks::read(
          (unsigned int)&v30,
          v9,
          (unsigned int)v34,
          0,
          (unsigned int)&v24,
          v9 + 48,
          v9 + 40,
          (unsigned int)&v24,
          v27,
          a4);
        result = v30;
        if ( v30 )
          return result;
        if ( !v31[0] )
        {
          v10 = *(_QWORD *)v9;
          *(_QWORD *)v9 = 3LL;
          if ( v10 == 3 )
            core::option::unwrap_failed(&off_193470);
          v30 = v10;
          v11 = *(_OWORD *)(v9 + 8);
          v12 = *(_OWORD *)(v9 + 24);
          v13 = *(_OWORD *)(v9 + 40);
          v32 = *(_OWORD *)(v9 + 56);
          *(_OWORD *)&v31[32] = v13;
          *(_OWORD *)&v31[16] = v12;
          *(_OWORD *)v31 = v11;
          *(_OWORD *)fd = *(_OWORD *)&v31[24];
          *(_OWORD *)src = *(_OWORD *)&v31[8];
          if ( v10 )
          {
            if ( v10 == 1 )
              std::sync::mpmc::counter::Sender<C>::release(v31);
            else
              std::sync::mpmc::counter::Sender<C>::release(v31);
          }
          else
          {
            v14 = *(_QWORD *)v31;
            if ( !_InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v31 + 512LL)) )
            {
              v15 = *(_QWORD *)(v14 + 128);
              v16 = *(_QWORD *)(v14 + 400);
              do
              {
                v17 = v15;
                v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 128), v16 | v15, v15);
              }
              while ( v17 != v15 );
              if ( (v15 & *(_QWORD *)(v14 + 400)) == 0 )
                std::sync::mpmc::waker::SyncWaker::disconnect(v14 + 320);
              v18 = *(_BYTE *)(v14 + 528);
              *(_BYTE *)(v14 + 528) = 1;
              if ( v18 )
                core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v14);
            }
          }
          v19 = a4;
          if ( *(_QWORD *)&v31[40] )
            _rust_dealloc(v32, *(_QWORD *)&v31[40], 1LL);
          v20 = src[0];
          v21 = src[1];
          v22 = fd[2];
          v23 = std::sys::pal::unix::fs::unlink(src[1], *(size_t *)fd);
          if ( v20 )
            _rust_dealloc(v21, v20, 1LL);
          v30 = v23;
          if ( v23 )
            core::ptr::drop_in_place<std::io::error::Error>(&v30);
          close(v22);
          a4 = v19;
          a3 = v26;
        }
      }
      <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v33, &v25);
    }
    while ( v34[0] != 0x8000000000000000LL );
  }
  return 0LL;
}
