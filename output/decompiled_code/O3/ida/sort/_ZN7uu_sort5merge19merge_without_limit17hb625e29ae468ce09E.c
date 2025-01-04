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
  __int128 v16; // [rsp+0h] [rbp-338h] BYREF
  __int64 v17; // [rsp+10h] [rbp-328h]
  __int64 v18; // [rsp+18h] [rbp-320h]
  __int128 v19; // [rsp+20h] [rbp-318h] BYREF
  __int128 v20; // [rsp+30h] [rbp-308h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-2F8h]
  _QWORD v22[4]; // [rsp+48h] [rbp-2F0h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-2D0h]
  __int128 v24; // [rsp+70h] [rbp-2C8h] BYREF
  _OWORD src[10]; // [rsp+80h] [rbp-2B8h] BYREF
  _BYTE v26[40]; // [rsp+128h] [rbp-210h] BYREF
  _OWORD dest[10]; // [rsp+150h] [rbp-1E8h] BYREF
  _BYTE v28[80]; // [rsp+1F0h] [rbp-148h] BYREF
  __int64 v29; // [rsp+248h] [rbp-F0h] BYREF
  __int64 v30; // [rsp+250h] [rbp-E8h]
  __int64 v31; // [rsp+258h] [rbp-E0h]
  _BYTE v32[24]; // [rsp+2B0h] [rbp-88h] BYREF
  __int128 v33; // [rsp+2C8h] [rbp-70h]
  __int128 v34; // [rsp+2D8h] [rbp-60h]
  __int128 v35; // [rsp+2E8h] [rbp-50h]
  __int128 v36; // [rsp+2F8h] [rbp-40h]

  v18 = a3;
  v22[3] = a2;
  std::sync::mpmc::channel(v26);
  v19 = *(_OWORD *)v26;
  v24 = *(_OWORD *)&v26[16];
  core::iter::traits::iterator::Iterator::size_hint(src);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v26, *(_QWORD *)&src[0], 0LL);
  if ( *(_QWORD *)v26 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v26[8], *(_QWORD *)&v26[16]);
  v20 = *(_OWORD *)&v26[8];
  v21 = 0LL;
  core::iter::traits::iterator::Iterator::size_hint(src);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v26, *(_QWORD *)&src[0], 0LL);
  v17 = a1;
  if ( *(_QWORD *)v26 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v26[8], *(_QWORD *)&v26[16]);
  v22[0] = *(_QWORD *)&v26[8];
  v22[1] = *(_QWORD *)&v26[16];
  v22[2] = 0LL;
  core::iter::traits::iterator::Iterator::enumerate(&v29, a2);
  v23 = 0x8000000000000001LL;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v32, &v29);
    if ( *(_QWORD *)&v32[8] == v23 )
      break;
    v3 = *(_QWORD *)v32;
    *(_OWORD *)&v28[64] = v36;
    *(_OWORD *)&v28[48] = v35;
    *(_OWORD *)&v28[32] = v34;
    *(_OWORD *)&v28[16] = v33;
    *(_OWORD *)v28 = *(_OWORD *)&v32[8];
    std::sync::mpmc::sync_channel(v26, 2LL);
    v16 = *(_OWORD *)v26;
    alloc::vec::Vec<T,A>::push(v22, *(_QWORD *)&v26[16], *(_QWORD *)&v26[24]);
    if ( *(_QWORD *)v28 == 0x8000000000000000LL )
    {
      v12 = (_QWORD *)v17;
      *(_OWORD *)(v17 + 8) = *(_OWORD *)&v28[8];
      *v12 = 3LL;
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v16);
      v13 = core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>>(&v29);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(v22, v13);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::CompressedTmpMergeInput>>>>(&v20);
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v24);
      return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v19);
    }
    dest[3] = *(unsigned __int64 *)&v28[72];
    dest[2] = *(_OWORD *)&v28[56];
    dest[1] = *(_OWORD *)&v28[40];
    dest[0] = *(_OWORD *)&v28[24];
    *(_OWORD *)v26 = v16;
    *(_QWORD *)&v26[16] = *(_QWORD *)v28;
    *(_OWORD *)&v26[24] = *(_OWORD *)&v28[8];
    dest[4] = 1uLL;
    alloc::vec::Vec<T,A>::push(&v20, v26);
    uu_sort::chunks::RecycledChunk::new(src, 0x2000LL);
    *(_QWORD *)v26 = v3;
    *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
    dest[4] = src[6];
    dest[3] = src[5];
    dest[2] = src[4];
    dest[1] = src[3];
    dest[0] = src[2];
    *(_OWORD *)&v26[24] = src[1];
    *(_OWORD *)&v26[8] = src[0];
    std::sync::mpmc::Sender<T>::send(src, &v19, v26);
    core::result::Result<T,E>::unwrap(src, &off_2003F0);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>>(&v29);
  v4 = v21;
  if ( v21 )
  {
    v5 = 0LL;
    do
    {
      v6 = <usize as core::iter::range::Step>::forward_unchecked(v5);
      uu_sort::chunks::RecycledChunk::new(src, 0x2000LL);
      *(_QWORD *)v26 = v5;
      *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
      dest[4] = src[6];
      dest[3] = src[5];
      dest[2] = src[4];
      dest[1] = src[3];
      dest[0] = src[2];
      *(_OWORD *)&v26[24] = src[1];
      *(_OWORD *)&v26[8] = src[0];
      std::sync::mpmc::Sender<T>::send(src, &v19, v26);
      core::result::Result<T,E>::unwrap(src, &off_2003D8);
      v5 = v6;
    }
    while ( v6 < v4 );
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v18);
  *(_OWORD *)v26 = v24;
  *(_OWORD *)&v26[16] = v20;
  *(_QWORD *)&v26[32] = v21;
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[1] = 0x8000000000000000LL;
  *(_QWORD *)&src[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v29, src, v26);
  core::result::Result<T,E>::expect(v28, &v29);
  *(_QWORD *)v32 = 0LL;
  *(_QWORD *)&v32[8] = 8LL;
  *(_QWORD *)&v32[16] = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, v22);
  *(_QWORD *)&src[2] = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v29, src);
  for ( i = v30; v30 != 3; i = v30 )
  {
    v14 = v29;
    *(_QWORD *)&v16 = i;
    *((_QWORD *)&v16 + 1) = v31;
    v15 = std::sync::mpmc::Receiver<T>::recv(&v16);
    if ( v15 )
    {
      *(_QWORD *)v26 = 1LL;
      *(_QWORD *)&v26[8] = 1LL;
      *(_QWORD *)&v26[16] = v15;
      *(_OWORD *)&v26[16] = (unsigned __int64)alloc::boxed::Box<T>::new(v26);
      *(_OWORD *)v26 = v16;
      *(_QWORD *)&v26[32] = v14;
      alloc::vec::Vec<T,A>::push(v32, v26);
    }
    else
    {
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v16);
    }
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v29, src);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(src);
  *(_QWORD *)&src[1] = *(_QWORD *)&v32[16];
  src[0] = *(_OWORD *)v32;
  binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(v26, src, v18, 1LL);
  v8 = v17;
  v9 = v19;
  *(_OWORD *)(v17 + 48) = *(_OWORD *)v28;
  result = *(_QWORD *)&v28[16];
  *(_QWORD *)(v8 + 64) = *(_QWORD *)&v28[16];
  v11 = *(_OWORD *)&v26[16];
  *(_OWORD *)(v8 + 16) = *(_OWORD *)v26;
  *(_OWORD *)(v8 + 32) = v11;
  *(_OWORD *)v8 = v9;
  *(_QWORD *)(v8 + 72) = 0LL;
  return result;
}
