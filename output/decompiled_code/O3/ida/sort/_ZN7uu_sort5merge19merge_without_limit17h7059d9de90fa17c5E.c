__int64 __fastcall uu_sort::merge::merge_without_limit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r13
  __int64 i; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 result; // rax
  __int128 v14; // xmm2
  _QWORD *v15; // rax
  double v16; // xmm0_8
  __int64 v17; // rbp
  __int64 v18; // rax
  __int128 v19; // [rsp+8h] [rbp-280h] BYREF
  __int64 v20; // [rsp+18h] [rbp-270h]
  __int64 v21; // [rsp+20h] [rbp-268h]
  __int64 v22; // [rsp+28h] [rbp-260h]
  __int64 v23; // [rsp+30h] [rbp-258h]
  __int128 v24; // [rsp+38h] [rbp-250h] BYREF
  __int128 v25; // [rsp+48h] [rbp-240h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-230h]
  __int128 v27; // [rsp+60h] [rbp-228h] BYREF
  __int64 v28; // [rsp+70h] [rbp-218h]
  __int128 v29; // [rsp+78h] [rbp-210h] BYREF
  _QWORD v30[3]; // [rsp+88h] [rbp-200h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-1E0h]
  __int64 v33; // [rsp+B0h] [rbp-1D8h]
  __int64 v34; // [rsp+D0h] [rbp-1B8h]
  __int128 v35; // [rsp+D8h] [rbp-1B0h] BYREF
  _BYTE v36[40]; // [rsp+E8h] [rbp-1A0h] BYREF
  _OWORD dest[10]; // [rsp+110h] [rbp-178h] BYREF
  _OWORD src[13]; // [rsp+1B0h] [rbp-D8h] BYREF

  v23 = a3;
  v34 = a2;
  std::sync::mpmc::channel(v36);
  v24 = *(_OWORD *)v36;
  v35 = *(_OWORD *)&v36[16];
  core::iter::traits::iterator::Iterator::size_hint(src);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v36, *(_QWORD *)&src[0], 0LL);
  if ( *(_QWORD *)v36 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v36[8], *(_QWORD *)&v36[16]);
  v25 = *(_OWORD *)&v36[8];
  v26 = 0LL;
  core::iter::traits::iterator::Iterator::size_hint(src);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v36, *(_QWORD *)&src[0], 0LL);
  v22 = a1;
  if ( *(_QWORD *)v36 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v36[8], *(_QWORD *)&v36[16]);
  v30[0] = *(_QWORD *)&v36[8];
  v30[1] = *(_QWORD *)&v36[16];
  v30[2] = 0LL;
  core::iter::traits::iterator::Iterator::enumerate(&v31, a2);
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v19, &v31);
    v3 = *((_QWORD *)&v19 + 1);
    if ( *((_QWORD *)&v19 + 1) == 2LL )
      break;
    v4 = v19;
    v5 = v20;
    v6 = v21;
    std::sync::mpmc::sync_channel(v36, 2LL);
    v27 = *(_OWORD *)v36;
    alloc::vec::Vec<T,A>::push(v30, *(_QWORD *)&v36[16], *(_QWORD *)&v36[24]);
    if ( v3 )
    {
      v15 = (_QWORD *)v22;
      *(_QWORD *)(v22 + 8) = v5;
      v15[2] = v6;
      *v15 = 3LL;
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v27);
      v16 = core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::merge::merge::{{closure}}>>>>(&v31);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(v30, v16);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainMergeInput<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>>>>>(&v25);
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v35);
      return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v24);
    }
    *(_OWORD *)v36 = v27;
    *(_QWORD *)&v36[16] = 0LL;
    *(_QWORD *)&v36[24] = 1LL;
    *(_QWORD *)&v36[32] = 0LL;
    *(_QWORD *)&dest[0] = v5;
    *((_QWORD *)&dest[0] + 1) = v6;
    alloc::vec::Vec<T,A>::push(&v25, v36);
    uu_sort::chunks::RecycledChunk::new(src, 0x2000LL);
    *(_QWORD *)v36 = v4;
    *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
    dest[4] = src[6];
    dest[3] = src[5];
    dest[2] = src[4];
    dest[1] = src[3];
    dest[0] = src[2];
    *(_OWORD *)&v36[24] = src[1];
    *(_OWORD *)&v36[8] = src[0];
    std::sync::mpmc::Sender<T>::send(src, &v24, v36);
    core::result::Result<T,E>::unwrap(src, &off_1FF8C8);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::merge::merge::{{closure}}>>>>(&v31);
  v7 = v26;
  if ( v26 )
  {
    v8 = 0LL;
    do
    {
      v9 = <usize as core::iter::range::Step>::forward_unchecked(v8);
      uu_sort::chunks::RecycledChunk::new(src, 0x2000LL);
      *(_QWORD *)v36 = v8;
      *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
      dest[4] = src[6];
      dest[3] = src[5];
      dest[2] = src[4];
      dest[1] = src[3];
      dest[0] = src[2];
      *(_OWORD *)&v36[24] = src[1];
      *(_OWORD *)&v36[8] = src[0];
      std::sync::mpmc::Sender<T>::send(src, &v24, v36);
      core::result::Result<T,E>::unwrap(src, &off_1FF8B0);
      v8 = v9;
    }
    while ( v9 < v7 );
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v23);
  *(_OWORD *)v36 = v35;
  *(_OWORD *)&v36[16] = v25;
  *(_QWORD *)&v36[32] = v26;
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[1] = 0x8000000000000000LL;
  *(_QWORD *)&src[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v31, src, v36);
  core::result::Result<T,E>::expect(&v27, &v31);
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = 8LL;
  v20 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, v30);
  *(_QWORD *)&src[2] = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v31, src);
  for ( i = v32; v32 != 3; i = v32 )
  {
    v17 = v31;
    *(_QWORD *)&v29 = i;
    *((_QWORD *)&v29 + 1) = v33;
    v18 = std::sync::mpmc::Receiver<T>::recv(&v29);
    if ( v18 )
    {
      *(_QWORD *)v36 = 1LL;
      *(_QWORD *)&v36[8] = 1LL;
      *(_QWORD *)&v36[16] = v18;
      *(_OWORD *)&v36[16] = (unsigned __int64)alloc::boxed::Box<T>::new(v36);
      *(_OWORD *)v36 = v29;
      *(_QWORD *)&v36[32] = v17;
      alloc::vec::Vec<T,A>::push(&v19, v36);
    }
    else
    {
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v29);
    }
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v31, src);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(src);
  *(_QWORD *)&src[1] = v20;
  src[0] = v19;
  binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(v36, src, v23, 1LL);
  v11 = v22;
  v12 = v24;
  *(_OWORD *)(v22 + 48) = v27;
  result = v28;
  *(_QWORD *)(v11 + 64) = v28;
  v14 = *(_OWORD *)&v36[16];
  *(_OWORD *)(v11 + 16) = *(_OWORD *)v36;
  *(_OWORD *)(v11 + 32) = v14;
  *(_OWORD *)v11 = v12;
  *(_QWORD *)(v11 + 72) = 0LL;
  return result;
}
