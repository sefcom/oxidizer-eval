__int64 __fastcall uu_sort::merge::reader(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rbx
  signed __int64 v17; // rax
  __int64 v18; // rcx
  signed __int64 v19; // rtt
  char v20; // al
  void *v21; // rbx
  void *v22; // rbp
  size_t v23; // r15
  size_t v24; // r12
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r15
  char v28; // [rsp+7h] [rbp-1A1h] BYREF
  __int64 v29; // [rsp+8h] [rbp-1A0h] BYREF
  __int64 v30; // [rsp+10h] [rbp-198h]
  __int64 v31; // [rsp+18h] [rbp-190h]
  unsigned __int64 v32; // [rsp+20h] [rbp-188h]
  __int64 v33; // [rsp+28h] [rbp-180h]
  void *src[2]; // [rsp+30h] [rbp-178h]
  size_t n[2]; // [rsp+40h] [rbp-168h]
  __int128 v36; // [rsp+50h] [rbp-158h]
  __m256i v37; // [rsp+60h] [rbp-148h]
  _BYTE v38[104]; // [rsp+80h] [rbp-128h] BYREF
  __int128 v39; // [rsp+E8h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+F8h] [rbp-B0h] BYREF
  _QWORD v41[21]; // [rsp+100h] [rbp-A8h] BYREF

  v8 = a2;
  v29 = a1;
  <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v40, &v29);
  if ( v41[0] != 0x8000000000000000LL )
  {
    v33 = a5;
    v32 = a3;
    v31 = a4;
    v30 = a2;
    do
    {
      if ( v40 >= a3 )
        core::panicking::panic_bounds_check(v40, a3, &off_193458);
      if ( *(_DWORD *)(v8 + 120 * v40) == 3 )
      {
        core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v41);
      }
      else
      {
        v11 = (__int64 *)(v8 + 120 * v40);
        uu_sort::chunks::read(
          (unsigned int)v38,
          (_DWORD)v11,
          (unsigned int)v41,
          0,
          (unsigned int)&v28,
          (_DWORD)v11 + 96,
          (__int64)v11 + 92,
          (unsigned int)&v28,
          v33,
          a4);
        v9 = *(_QWORD *)v38;
        if ( *(_QWORD *)v38 )
          return v9;
        if ( !v38[8] )
        {
          v12 = *v11;
          *v11 = 3LL;
          if ( v12 == 3 )
            core::option::unwrap_failed(&off_193470);
          *(_QWORD *)v38 = v12;
          v39 = *(_OWORD *)(v11 + 13);
          *(_OWORD *)&v38[88] = *(_OWORD *)(v11 + 11);
          *(_OWORD *)&v38[72] = *(_OWORD *)(v11 + 9);
          v13 = *(_OWORD *)(v11 + 1);
          v14 = *(_OWORD *)(v11 + 3);
          v15 = *(_OWORD *)(v11 + 5);
          *(_OWORD *)&v38[56] = *(_OWORD *)(v11 + 7);
          *(_OWORD *)&v38[40] = v15;
          *(_OWORD *)&v38[24] = v14;
          *(_OWORD *)&v38[8] = v13;
          v37 = *(__m256i *)&v38[64];
          v36 = *(_OWORD *)&v38[48];
          *(_OWORD *)n = *(_OWORD *)&v38[32];
          *(_OWORD *)src = *(_OWORD *)&v38[16];
          if ( v12 )
          {
            if ( v12 == 1 )
              std::sync::mpmc::counter::Sender<C>::release(&v38[8]);
            else
              std::sync::mpmc::counter::Sender<C>::release(&v38[8]);
          }
          else
          {
            v16 = *(_QWORD *)&v38[8];
            if ( !_InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)&v38[8] + 512LL)) )
            {
              v17 = *(_QWORD *)(v16 + 128);
              v18 = *(_QWORD *)(v16 + 400);
              do
              {
                v19 = v17;
                v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 128), v18 | v17, v17);
              }
              while ( v19 != v17 );
              if ( (v17 & *(_QWORD *)(v16 + 400)) == 0 )
                std::sync::mpmc::waker::SyncWaker::disconnect(v16 + 320);
              v20 = *(_BYTE *)(v16 + 528);
              *(_BYTE *)(v16 + 528) = 1;
              if ( v20 )
                core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v16);
            }
          }
          if ( *(_QWORD *)&v38[96] )
            _rust_dealloc(v39, *(_QWORD *)&v38[96], 1LL);
          v21 = src[0];
          v22 = src[1];
          v23 = n[0];
          v24 = n[1];
          v26 = *((_QWORD *)&v36 + 1);
          v25 = v36;
          *(_OWORD *)&v38[12] = *(_OWORD *)((char *)&v37.m256i_u64[1] + 4);
          *(_OWORD *)v38 = *(_OWORD *)v37.m256i_i8;
          close(v37.m256i_i32[7]);
          v9 = uu_sort::merge::check_child_success(v38, v25, v26);
          if ( v9 )
          {
            if ( v21 )
              _rust_dealloc(v22, v21, 1LL);
          }
          else
          {
            v27 = std::sys::pal::unix::fs::unlink(v22, v23);
            if ( v21 )
              _rust_dealloc(v22, v21, 1LL);
            *(_QWORD *)v38 = v27;
            if ( v27 )
              core::ptr::drop_in_place<std::io::error::Error>(v38);
          }
          if ( v24 )
            _rust_dealloc(v25, v24, 1LL);
          a3 = v32;
          a4 = v31;
          v8 = v30;
          if ( v9 )
            return v9;
        }
      }
      <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v40, &v29);
    }
    while ( v41[0] != 0x8000000000000000LL );
  }
  return 0LL;
}
