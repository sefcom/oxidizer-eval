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
  __int128 v18; // [rsp+8h] [rbp-290h] BYREF
  __int64 v19; // [rsp+18h] [rbp-280h]
  __int64 v20; // [rsp+20h] [rbp-278h]
  __int128 v21; // [rsp+28h] [rbp-270h] BYREF
  __int128 v22; // [rsp+38h] [rbp-260h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-250h]
  __m256i v24; // [rsp+50h] [rbp-248h] BYREF
  __int128 v25; // [rsp+78h] [rbp-220h] BYREF
  __int64 v26; // [rsp+88h] [rbp-210h]
  __int64 v27; // [rsp+A0h] [rbp-1F8h] BYREF
  __m256i v28; // [rsp+A8h] [rbp-1F0h]
  _QWORD v29[4]; // [rsp+C8h] [rbp-1D0h] BYREF
  __int128 v30; // [rsp+E8h] [rbp-1B0h] BYREF
  _BYTE v31[40]; // [rsp+F8h] [rbp-1A0h] BYREF
  _OWORD dest[10]; // [rsp+120h] [rbp-178h] BYREF
  _OWORD src[13]; // [rsp+1C0h] [rbp-D8h] BYREF

  v20 = a3;
  v29[3] = a2;
  std::sync::mpmc::channel(v31);
  v21 = *(_OWORD *)v31;
  v30 = *(_OWORD *)&v31[16];
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 24);
  <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(src, v3, v4);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v31, *(_QWORD *)&src[0], 0LL);
  if ( *(_QWORD *)v31 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v31[8], *(_QWORD *)&v31[16]);
  v22 = *(_OWORD *)&v31[8];
  v23 = 0LL;
  <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(src, v3, v4);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v31, *(_QWORD *)&src[0], 0LL);
  v19 = a1;
  if ( *(_QWORD *)v31 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v31[8], *(_QWORD *)&v31[16]);
  v29[0] = *(_QWORD *)&v31[8];
  v29[1] = *(_QWORD *)&v31[16];
  v29[2] = 0LL;
  core::iter::traits::iterator::Iterator::enumerate(&v25, a2);
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, &v25);
    if ( v28.m256i_i64[0] == 0x8000000000000001LL )
      break;
    v5 = v27;
    v24 = v28;
    std::sync::mpmc::sync_channel(v31, 2LL);
    v18 = *(_OWORD *)v31;
    alloc::vec::Vec<T,A>::push(v29, *(_QWORD *)&v31[16], *(_QWORD *)&v31[24]);
    if ( v24.m256i_i64[0] == 0x8000000000000000LL )
    {
      v14 = (_QWORD *)v19;
      *(_OWORD *)(v19 + 8) = *(_OWORD *)&v24.m256i_u64[1];
      *v14 = 3LL;
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v18);
      v15 = core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>(&v25);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(v29, v15);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>>(&v22);
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v30);
      return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v21);
    }
    *(_OWORD *)v31 = v18;
    *(_QWORD *)&v31[16] = v24.m256i_i64[0];
    *(_OWORD *)&v31[24] = *(_OWORD *)&v24.m256i_u64[1];
    dest[0] = v24.m256i_u64[3];
    dest[1] = 1uLL;
    alloc::vec::Vec<T,A>::push(&v22, v31);
    uu_sort::chunks::RecycledChunk::new(src, 0x2000LL);
    *(_QWORD *)v31 = v5;
    *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
    dest[4] = src[6];
    dest[3] = src[5];
    dest[2] = src[4];
    dest[1] = src[3];
    dest[0] = src[2];
    *(_OWORD *)&v31[24] = src[1];
    *(_OWORD *)&v31[8] = src[0];
    std::sync::mpmc::Sender<T>::send(src, &v21, v31);
    core::result::Result<T,E>::unwrap(src, &off_1FF8C8);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>(&v25);
  v6 = v23;
  if ( v23 )
  {
    v7 = 0LL;
    do
    {
      v8 = <usize as core::iter::range::Step>::forward_unchecked(v7);
      uu_sort::chunks::RecycledChunk::new(src, 0x2000LL);
      *(_QWORD *)v31 = v7;
      *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
      dest[4] = src[6];
      dest[3] = src[5];
      dest[2] = src[4];
      dest[1] = src[3];
      dest[0] = src[2];
      *(_OWORD *)&v31[24] = src[1];
      *(_OWORD *)&v31[8] = src[0];
      std::sync::mpmc::Sender<T>::send(src, &v21, v31);
      core::result::Result<T,E>::unwrap(src, &off_1FF8B0);
      v7 = v8;
    }
    while ( v8 < v6 );
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v20);
  *(_OWORD *)v31 = v30;
  *(_OWORD *)&v31[16] = v22;
  *(_QWORD *)&v31[32] = v23;
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[1] = 0x8000000000000000LL;
  *(_QWORD *)&src[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v27, src, v31);
  core::result::Result<T,E>::expect(&v24, &v27);
  *(_QWORD *)&v25 = 0LL;
  *((_QWORD *)&v25 + 1) = 8LL;
  v26 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, v29);
  *(_QWORD *)&src[2] = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, src);
  for ( i = v28.m256i_i64[0]; v28.m256i_i64[0] != 3; i = v28.m256i_i64[0] )
  {
    v16 = v27;
    *(_QWORD *)&v18 = i;
    *((_QWORD *)&v18 + 1) = v28.m256i_i64[1];
    v17 = std::sync::mpmc::Receiver<T>::recv(&v18);
    if ( v17 )
    {
      *(_QWORD *)v31 = 1LL;
      *(_QWORD *)&v31[8] = 1LL;
      *(_QWORD *)&v31[16] = v17;
      *(_OWORD *)&v31[16] = (unsigned __int64)alloc::boxed::Box<T>::new(v31);
      *(_OWORD *)v31 = v18;
      *(_QWORD *)&v31[32] = v16;
      alloc::vec::Vec<T,A>::push(&v25, v31);
    }
    else
    {
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v18);
    }
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, src);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(src);
  *(_QWORD *)&src[1] = v26;
  src[0] = v25;
  binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(v31, src, v20, 1LL);
  v10 = v19;
  v11 = v21;
  *(_OWORD *)(v19 + 48) = *(_OWORD *)v24.m256i_i8;
  result = v24.m256i_i64[2];
  *(_QWORD *)(v10 + 64) = v24.m256i_i64[2];
  v13 = *(_OWORD *)&v31[16];
  *(_OWORD *)(v10 + 16) = *(_OWORD *)v31;
  *(_OWORD *)(v10 + 32) = v13;
  *(_OWORD *)v10 = v11;
  *(_QWORD *)(v10 + 72) = 0LL;
  return result;
}
