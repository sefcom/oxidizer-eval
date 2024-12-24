__int64 __fastcall uu_sort::merge::merge_without_limit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 i; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int64 result; // rax
  __int128 v11; // xmm2
  _QWORD *v12; // rax
  double v13; // xmm0_8
  __int64 v14; // rbp
  __int64 v15; // rax
  __int128 v16; // [rsp+8h] [rbp-2A0h] BYREF
  __int64 v17; // [rsp+18h] [rbp-290h]
  __int64 v18; // [rsp+20h] [rbp-288h]
  __int128 v19; // [rsp+28h] [rbp-280h] BYREF
  __int128 v20; // [rsp+38h] [rbp-270h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-260h]
  __m256i v22; // [rsp+50h] [rbp-258h] BYREF
  _QWORD v23[3]; // [rsp+78h] [rbp-230h] BYREF
  _BYTE v24[40]; // [rsp+90h] [rbp-218h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-1F0h]
  __int128 v26; // [rsp+C0h] [rbp-1E8h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-1D8h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-1D0h]
  __int64 v29; // [rsp+E0h] [rbp-1C8h]
  _BYTE v30[40]; // [rsp+108h] [rbp-1A0h] BYREF
  _OWORD dest[10]; // [rsp+130h] [rbp-178h] BYREF
  _OWORD src[13]; // [rsp+1D0h] [rbp-D8h] BYREF

  v18 = a3;
  v25 = a2;
  std::sync::mpmc::channel(v30);
  v19 = *(_OWORD *)v30;
  v26 = *(_OWORD *)&v30[16];
  core::iter::traits::iterator::Iterator::size_hint(src);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v30, *(_QWORD *)&src[0], 0LL);
  if ( *(_QWORD *)v30 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v30[8], *(_QWORD *)&v30[16]);
  v20 = *(_OWORD *)&v30[8];
  v21 = 0LL;
  core::iter::traits::iterator::Iterator::size_hint(src);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v30, *(_QWORD *)&src[0], 0LL);
  v17 = a1;
  if ( *(_QWORD *)v30 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v30[8], *(_QWORD *)&v30[16]);
  v23[0] = *(_QWORD *)&v30[8];
  v23[1] = *(_QWORD *)&v30[16];
  v23[2] = 0LL;
  core::iter::traits::iterator::Iterator::enumerate(&v27, a2);
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v24, &v27);
    if ( *(_QWORD *)&v24[8] == 0x8000000000000001LL )
      break;
    v3 = *(_QWORD *)v24;
    v22 = *(__m256i *)&v24[8];
    std::sync::mpmc::sync_channel(v30, 2LL);
    v16 = *(_OWORD *)v30;
    alloc::vec::Vec<T,A>::push(v23, *(_QWORD *)&v30[16], *(_QWORD *)&v30[24]);
    if ( v22.m256i_i64[0] == 0x8000000000000000LL )
    {
      v12 = (_QWORD *)v17;
      *(_OWORD *)(v17 + 8) = *(_OWORD *)&v22.m256i_u64[1];
      *v12 = 3LL;
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v16);
      v13 = core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>>(&v27);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(v23, v13);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>>(&v20);
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v26);
      return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v19);
    }
    *(_OWORD *)v30 = v16;
    *(_QWORD *)&v30[16] = v22.m256i_i64[0];
    *(_OWORD *)&v30[24] = *(_OWORD *)&v22.m256i_u64[1];
    dest[0] = v22.m256i_u64[3];
    dest[1] = 1uLL;
    alloc::vec::Vec<T,A>::push(&v20, v30);
    uu_sort::chunks::RecycledChunk::new((__int64)src);
    *(_QWORD *)v30 = v3;
    *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
    dest[4] = src[6];
    dest[3] = src[5];
    dest[2] = src[4];
    dest[1] = src[3];
    dest[0] = src[2];
    *(_OWORD *)&v30[24] = src[1];
    *(_OWORD *)&v30[8] = src[0];
    std::sync::mpmc::Sender<T>::send(src, &v19, v30);
    core::result::Result<T,E>::unwrap(src, &off_1FF8C8);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>>(&v27);
  v4 = v21;
  if ( v21 )
  {
    v5 = 0LL;
    do
    {
      v6 = <usize as core::iter::range::Step>::forward_unchecked(v5);
      uu_sort::chunks::RecycledChunk::new((__int64)src);
      *(_QWORD *)v30 = v5;
      *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
      dest[4] = src[6];
      dest[3] = src[5];
      dest[2] = src[4];
      dest[1] = src[3];
      dest[0] = src[2];
      *(_OWORD *)&v30[24] = src[1];
      *(_OWORD *)&v30[8] = src[0];
      std::sync::mpmc::Sender<T>::send(src, &v19, v30);
      core::result::Result<T,E>::unwrap(src, &off_1FF8B0);
      v5 = v6;
    }
    while ( v6 < v4 );
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v18);
  *(_OWORD *)v30 = v26;
  *(_OWORD *)&v30[16] = v20;
  *(_QWORD *)&v30[32] = v21;
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[1] = 0x8000000000000000LL;
  *(_QWORD *)&src[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v27, src, v30);
  core::result::Result<T,E>::expect(&v22, &v27);
  *(_QWORD *)v24 = 0LL;
  *(_QWORD *)&v24[8] = 8LL;
  *(_QWORD *)&v24[16] = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, v23);
  *(_QWORD *)&src[2] = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, src);
  for ( i = v28; v28 != 3; i = v28 )
  {
    v14 = v27;
    *(_QWORD *)&v16 = i;
    *((_QWORD *)&v16 + 1) = v29;
    v15 = std::sync::mpmc::Receiver<T>::recv(&v16);
    if ( v15 )
    {
      *(_QWORD *)v30 = 1LL;
      *(_QWORD *)&v30[8] = 1LL;
      *(_QWORD *)&v30[16] = v15;
      *(_OWORD *)&v30[16] = (unsigned __int64)alloc::boxed::Box<T>::new(v30);
      *(_OWORD *)v30 = v16;
      *(_QWORD *)&v30[32] = v14;
      alloc::vec::Vec<T,A>::push(v24, v30);
    }
    else
    {
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v16);
    }
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, src);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(src);
  *(_QWORD *)&src[1] = *(_QWORD *)&v24[16];
  src[0] = *(_OWORD *)v24;
  binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(v30, src, v18, 1LL);
  v8 = v17;
  v9 = v19;
  *(_OWORD *)(v17 + 48) = *(_OWORD *)v22.m256i_i8;
  result = v22.m256i_i64[2];
  *(_QWORD *)(v8 + 64) = v22.m256i_i64[2];
  v11 = *(_OWORD *)&v30[16];
  *(_OWORD *)(v8 + 16) = *(_OWORD *)v30;
  *(_OWORD *)(v8 + 32) = v11;
  *(_OWORD *)v8 = v9;
  *(_QWORD *)(v8 + 72) = 0LL;
  return result;
}
