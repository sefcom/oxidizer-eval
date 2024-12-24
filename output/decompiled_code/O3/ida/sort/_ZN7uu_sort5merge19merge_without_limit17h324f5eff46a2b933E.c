__int64 __fastcall uu_sort::merge::merge_without_limit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  double v9; // xmm0_8
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r13
  __int64 i; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 result; // rax
  __int128 v17; // xmm2
  _QWORD *v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-260h] BYREF
  __int64 v22; // [rsp+10h] [rbp-258h]
  __int64 v23; // [rsp+18h] [rbp-250h]
  __int64 v24; // [rsp+20h] [rbp-248h]
  __int64 v25; // [rsp+28h] [rbp-240h]
  __int64 v26; // [rsp+30h] [rbp-238h]
  __int128 v27; // [rsp+38h] [rbp-230h] BYREF
  __int128 v28; // [rsp+48h] [rbp-220h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-210h]
  __int128 v30; // [rsp+60h] [rbp-208h] BYREF
  __int64 v31; // [rsp+70h] [rbp-1F8h]
  __int128 v32; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v33; // [rsp+88h] [rbp-1E0h]
  __int128 v34; // [rsp+90h] [rbp-1D8h] BYREF
  _QWORD v35[3]; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-1B0h] BYREF
  _BYTE v37[40]; // [rsp+C8h] [rbp-1A0h] BYREF
  _OWORD dest[10]; // [rsp+F0h] [rbp-178h] BYREF
  _OWORD src[13]; // [rsp+190h] [rbp-D8h] BYREF

  v26 = a4;
  std::sync::mpmc::channel(v37);
  v27 = *(_OWORD *)v37;
  v36 = *(_OWORD *)&v37[16];
  <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(src, a2, a3);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v37, *(_QWORD *)&src[0], 0LL);
  if ( *(_QWORD *)v37 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v37[8], *(_QWORD *)&v37[16]);
  v28 = *(_OWORD *)&v37[8];
  v29 = 0LL;
  <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(src, a2, a3);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v37, *(_QWORD *)&src[0], 0LL);
  v25 = a1;
  if ( *(_QWORD *)v37 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v37[8], *(_QWORD *)&v37[16]);
  v35[0] = *(_QWORD *)&v37[8];
  v35[1] = *(_QWORD *)&v37[16];
  v35[2] = 0LL;
  core::iter::traits::iterator::Iterator::enumerate(&v30, a2, a3);
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21, &v30);
    v5 = v22;
    if ( v22 == 2 )
      break;
    v6 = v21;
    v7 = v23;
    v8 = v24;
    std::sync::mpmc::sync_channel(v37, 2LL);
    v9 = *(double *)v37;
    v32 = *(_OWORD *)v37;
    alloc::vec::Vec<T,A>::push(v35, *(_QWORD *)&v37[16], *(_QWORD *)&v37[24]);
    if ( v5 )
    {
      v18 = (_QWORD *)v25;
      *(_QWORD *)(v25 + 8) = v7;
      v18[2] = v8;
      *v18 = 3LL;
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v32);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(v35, v9);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainMergeInput<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>>>>>(&v28);
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v36);
      return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v27);
    }
    *(_OWORD *)v37 = v32;
    *(_QWORD *)&v37[16] = 0LL;
    *(_QWORD *)&v37[24] = 1LL;
    *(_QWORD *)&v37[32] = 0LL;
    *(_QWORD *)&dest[0] = v7;
    *((_QWORD *)&dest[0] + 1) = v8;
    alloc::vec::Vec<T,A>::push(&v28, v37);
    uu_sort::chunks::RecycledChunk::new((__int64)src);
    *(_QWORD *)v37 = v6;
    *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
    dest[4] = src[6];
    dest[3] = src[5];
    dest[2] = src[4];
    dest[1] = src[3];
    dest[0] = src[2];
    *(_OWORD *)&v37[24] = src[1];
    *(_OWORD *)&v37[8] = src[0];
    std::sync::mpmc::Sender<T>::send(src, &v27, v37);
    core::result::Result<T,E>::unwrap(src, &off_1FF8C8);
  }
  v10 = v29;
  if ( v29 )
  {
    v11 = 0LL;
    do
    {
      v12 = <usize as core::iter::range::Step>::forward_unchecked(v11);
      uu_sort::chunks::RecycledChunk::new((__int64)src);
      *(_QWORD *)v37 = v11;
      *(_QWORD *)&dest[5] = *(_QWORD *)&src[7];
      dest[4] = src[6];
      dest[3] = src[5];
      dest[2] = src[4];
      dest[1] = src[3];
      dest[0] = src[2];
      *(_OWORD *)&v37[24] = src[1];
      *(_OWORD *)&v37[8] = src[0];
      std::sync::mpmc::Sender<T>::send(src, &v27, v37);
      core::result::Result<T,E>::unwrap(src, &off_1FF8B0);
      v11 = v12;
    }
    while ( v12 < v10 );
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v26);
  *(_OWORD *)v37 = v36;
  *(_OWORD *)&v37[16] = v28;
  *(_QWORD *)&v37[32] = v29;
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[1] = 0x8000000000000000LL;
  *(_QWORD *)&src[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v21, src, v37);
  core::result::Result<T,E>::expect(&v32, &v21);
  *(_QWORD *)&v30 = 0LL;
  *((_QWORD *)&v30 + 1) = 8LL;
  v31 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, v35);
  *(_QWORD *)&src[2] = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21, src);
  for ( i = v22; v22 != 3; i = v22 )
  {
    v19 = v21;
    *(_QWORD *)&v34 = i;
    *((_QWORD *)&v34 + 1) = v23;
    v20 = std::sync::mpmc::Receiver<T>::recv(&v34);
    if ( v20 )
    {
      *(_QWORD *)v37 = 1LL;
      *(_QWORD *)&v37[8] = 1LL;
      *(_QWORD *)&v37[16] = v20;
      *(_OWORD *)&v37[16] = (unsigned __int64)alloc::boxed::Box<T>::new(v37);
      *(_OWORD *)v37 = v34;
      *(_QWORD *)&v37[32] = v19;
      alloc::vec::Vec<T,A>::push(&v30, v37);
    }
    else
    {
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v34);
    }
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21, src);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(src);
  *(_QWORD *)&src[1] = v31;
  src[0] = v30;
  binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(v37, src, v26, 1LL);
  v14 = v25;
  v15 = v27;
  *(_OWORD *)(v25 + 48) = v32;
  result = v33;
  *(_QWORD *)(v14 + 64) = v33;
  v17 = *(_OWORD *)&v37[16];
  *(_OWORD *)(v14 + 16) = *(_OWORD *)v37;
  *(_OWORD *)(v14 + 32) = v17;
  *(_OWORD *)v14 = v15;
  *(_QWORD *)(v14 + 72) = 0LL;
  return result;
}
