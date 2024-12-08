__int64 __fastcall uu_sort::merge::merge_without_limit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 i; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 result; // rax
  __int128 v13; // xmm2
  _QWORD *v14; // rax
  double v15; // xmm0_8
  __int64 v16; // rbp
  __int64 v17; // rax
  __int128 v18; // [rsp+8h] [rbp-2F0h] BYREF
  __int64 v19; // [rsp+18h] [rbp-2E0h]
  __int64 v20; // [rsp+20h] [rbp-2D8h]
  __int128 v21; // [rsp+28h] [rbp-2D0h] BYREF
  __int128 v22; // [rsp+38h] [rbp-2C0h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-2B0h]
  _QWORD v24[4]; // [rsp+50h] [rbp-2A8h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp-288h]
  __int128 v26; // [rsp+78h] [rbp-280h] BYREF
  __int128 v27; // [rsp+88h] [rbp-270h] BYREF
  __int64 v28; // [rsp+98h] [rbp-260h]
  _OWORD src[10]; // [rsp+B0h] [rbp-248h] BYREF
  _BYTE v30[40]; // [rsp+158h] [rbp-1A0h] BYREF
  _OWORD dest[10]; // [rsp+180h] [rbp-178h] BYREF
  _BYTE v32[80]; // [rsp+220h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+270h] [rbp-88h] BYREF
  __int128 v34; // [rsp+278h] [rbp-80h]
  __int128 v35; // [rsp+288h] [rbp-70h]
  __int128 v36; // [rsp+298h] [rbp-60h]
  __int128 v37; // [rsp+2A8h] [rbp-50h]
  __int128 v38; // [rsp+2B8h] [rbp-40h]

  v20 = a3;
  v24[3] = a2;
  std::sync::mpmc::channel(v30);
  v21 = *(_OWORD *)v30;
  v26 = *(_OWORD *)&v30[16];
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 24);
  <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(src, v3, v4);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v30, *(_QWORD *)&src[0], 0LL);
  if ( *(_QWORD *)v30 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v30[8], *(_QWORD *)&v30[16]);
  v22 = *(_OWORD *)&v30[8];
  v23 = 0LL;
  <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(src, v3, v4);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v30, *(_QWORD *)&src[0], 0LL);
  v19 = a1;
  if ( *(_QWORD *)v30 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v30[8], *(_QWORD *)&v30[16]);
  v24[0] = *(_QWORD *)&v30[8];
  v24[1] = *(_QWORD *)&v30[16];
  v24[2] = 0LL;
  core::iter::traits::iterator::Iterator::enumerate(&v27, a2);
  v25 = 0x8000000000000001LL;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v33, &v27);
    if ( (_QWORD)v34 == v25 )
      break;
    v5 = v33;
    *(_OWORD *)&v32[64] = v38;
    *(_OWORD *)&v32[48] = v37;
    *(_OWORD *)&v32[32] = v36;
    *(_OWORD *)&v32[16] = v35;
    *(_OWORD *)v32 = v34;
    std::sync::mpmc::sync_channel(v30, 2LL);
    v18 = *(_OWORD *)v30;
    alloc::vec::Vec<T,A>::push(v24, *(_QWORD *)&v30[16], *(_QWORD *)&v30[24]);
    if ( *(_QWORD *)v32 == 0x8000000000000000LL )
    {
      v14 = (_QWORD *)v19;
      *(_OWORD *)(v19 + 8) = *(_OWORD *)&v32[8];
      *v14 = 3LL;
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v18);
      v15 = core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>(&v27);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(v24, v15);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::CompressedTmpMergeInput>>>>(&v22);
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v26);
      return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v21);
    }
    dest[3] = *(unsigned __int64 *)&v32[72];
    dest[2] = *(_OWORD *)&v32[56];
    dest[1] = *(_OWORD *)&v32[40];
    dest[0] = *(_OWORD *)&v32[24];
    *(_OWORD *)v30 = v18;
    *(_QWORD *)&v30[16] = *(_QWORD *)v32;
    *(_OWORD *)&v30[24] = *(_OWORD *)&v32[8];
    dest[4] = 1uLL;
    alloc::vec::Vec<T,A>::push(&v22, v30);
    uu_sort::chunks::RecycledChunk::new(src, 0x2000LL);
    *(_QWORD *)v30 = v5;
    *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
    dest[4] = src[6];
    dest[3] = src[5];
    dest[2] = src[4];
    dest[1] = src[3];
    dest[0] = src[2];
    *(_OWORD *)&v30[24] = src[1];
    *(_OWORD *)&v30[8] = src[0];
    std::sync::mpmc::Sender<T>::send(src, &v21, v30);
    core::result::Result<T,E>::unwrap(src, &off_1FF8C8);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>(&v27);
  v6 = v23;
  if ( v23 )
  {
    v7 = 0LL;
    do
    {
      v8 = <usize as core::iter::range::Step>::forward_unchecked(v7);
      uu_sort::chunks::RecycledChunk::new(src, 0x2000LL);
      *(_QWORD *)v30 = v7;
      *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
      dest[4] = src[6];
      dest[3] = src[5];
      dest[2] = src[4];
      dest[1] = src[3];
      dest[0] = src[2];
      *(_OWORD *)&v30[24] = src[1];
      *(_OWORD *)&v30[8] = src[0];
      std::sync::mpmc::Sender<T>::send(src, &v21, v30);
      core::result::Result<T,E>::unwrap(src, &off_1FF8B0);
      v7 = v8;
    }
    while ( v8 < v6 );
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v20);
  *(_OWORD *)v30 = v26;
  *(_OWORD *)&v30[16] = v22;
  *(_QWORD *)&v30[32] = v23;
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[1] = 0x8000000000000000LL;
  *(_QWORD *)&src[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v33, src, v30);
  core::result::Result<T,E>::expect(&v27, &v33);
  *(_QWORD *)v32 = 0LL;
  *(_QWORD *)&v32[8] = 8LL;
  *(_QWORD *)&v32[16] = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, v24);
  *(_QWORD *)&src[2] = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v33, src);
  for ( i = v34; (_QWORD)v34 != 3LL; i = v34 )
  {
    v16 = v33;
    *(_QWORD *)&v18 = i;
    *((_QWORD *)&v18 + 1) = *((_QWORD *)&v34 + 1);
    v17 = std::sync::mpmc::Receiver<T>::recv(&v18);
    if ( v17 )
    {
      *(_QWORD *)v30 = 1LL;
      *(_QWORD *)&v30[8] = 1LL;
      *(_QWORD *)&v30[16] = v17;
      *(_OWORD *)&v30[16] = (unsigned __int64)alloc::boxed::Box<T>::new(v30);
      *(_OWORD *)v30 = v18;
      *(_QWORD *)&v30[32] = v16;
      alloc::vec::Vec<T,A>::push(v32, v30);
    }
    else
    {
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v18);
    }
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v33, src);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(src);
  *(_QWORD *)&src[1] = *(_QWORD *)&v32[16];
  src[0] = *(_OWORD *)v32;
  binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(v30, src, v20, 1LL);
  v10 = v19;
  v11 = v21;
  *(_OWORD *)(v19 + 48) = v27;
  result = v28;
  *(_QWORD *)(v10 + 64) = v28;
  v13 = *(_OWORD *)&v30[16];
  *(_OWORD *)(v10 + 16) = *(_OWORD *)v30;
  *(_OWORD *)(v10 + 32) = v13;
  *(_OWORD *)v10 = v11;
  *(_QWORD *)(v10 + 72) = 0LL;
  return result;
}
