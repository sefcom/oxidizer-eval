__int64 __fastcall uu_sort::merge::merge_without_limit(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int128 v3; // kr00_16
  unsigned __int128 v4; // kr10_16
  __int64 v5; // rbx
  __int64 v6; // r14
  __int128 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r15
  __int128 v12; // kr20_16
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 i; // rbx
  _QWORD *v16; // rcx
  __int128 v17; // xmm1
  __int64 result; // rax
  _QWORD *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-2F0h]
  __int64 v24; // [rsp+10h] [rbp-2E8h]
  __int128 v25; // [rsp+18h] [rbp-2E0h] BYREF
  _QWORD *v26; // [rsp+28h] [rbp-2D0h]
  __int64 v27; // [rsp+30h] [rbp-2C8h]
  __int64 v28; // [rsp+38h] [rbp-2C0h]
  __int128 v29; // [rsp+40h] [rbp-2B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-2A8h]
  _QWORD v31[3]; // [rsp+58h] [rbp-2A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-288h]
  __int64 v33; // [rsp+78h] [rbp-280h]
  unsigned __int64 v34; // [rsp+80h] [rbp-278h]
  __int64 v35; // [rsp+88h] [rbp-270h]
  __int128 v36; // [rsp+90h] [rbp-268h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-258h] BYREF
  _QWORD v38[3]; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-230h] BYREF
  _BYTE dest[200]; // [rsp+D0h] [rbp-228h] BYREF
  __int64 v41; // [rsp+198h] [rbp-160h] BYREF
  __int64 v42; // [rsp+1A0h] [rbp-158h]
  __int64 v43; // [rsp+1A8h] [rbp-150h]
  __int64 v44; // [rsp+1B0h] [rbp-148h]
  __int128 v45; // [rsp+1B8h] [rbp-140h]
  __int128 v46; // [rsp+1C8h] [rbp-130h]
  __int128 v47; // [rsp+1D8h] [rbp-120h]
  __int64 v48; // [rsp+1E8h] [rbp-110h]
  __int128 v49; // [rsp+1F0h] [rbp-108h] BYREF
  __int64 v50; // [rsp+200h] [rbp-F8h]
  _QWORD src[26]; // [rsp+228h] [rbp-D0h] BYREF

  v28 = a3;
  v26 = a1;
  v27 = a2;
  std::sync::mpmc::channel(dest);
  v3 = *(_OWORD *)dest;
  v23 = v3 >> 64;
  v24 = v3;
  v36 = *(_OWORD *)dest;
  v4 = *(_OWORD *)&dest[16];
  v32 = v4 >> 64;
  v33 = v4;
  v37 = *(_OWORD *)&dest[16];
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 24);
  <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(dest, v5, v6);
  *(_QWORD *)&v7 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*(_QWORD *)dest, 8LL, 120LL, &off_18C8C8);
  v29 = v7;
  v30 = 0LL;
  <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(dest, v5, v6);
  v31[0] = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*(_QWORD *)dest, 8LL, 16LL, &off_18C8E0);
  v31[1] = v8;
  v31[2] = 0LL;
  core::iter::traits::iterator::Iterator::enumerate(&v49, a2);
  v34 = 0x8000000000000001LL;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v41, &v49);
    if ( v42 == v34 )
      break;
    v35 = v41;
    v9 = v42;
    v10 = v43;
    v11 = v44;
    std::sync::mpmc::sync_channel(dest, 2LL);
    v12 = *(_OWORD *)dest;
    v25 = *(_OWORD *)dest;
    alloc::vec::Vec<T,A>::push(v31, *(_QWORD *)&dest[16], *(_QWORD *)&dest[24]);
    if ( v9 == 0x8000000000000000LL )
    {
      v19 = v26;
      v26[1] = v10;
      v19[2] = v11;
      *v19 = 3LL;
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v25);
      core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v49);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(v31);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::CompressedTmpMergeInput>>>>(&v29);
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>(&v37);
      return core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v36);
    }
    *(_QWORD *)&dest[88] = v48;
    *(_OWORD *)&dest[72] = v47;
    *(_OWORD *)&dest[56] = v46;
    *(_OWORD *)&dest[40] = v45;
    *(_OWORD *)dest = v12;
    *(_QWORD *)&dest[16] = v9;
    *(_QWORD *)&dest[24] = v10;
    *(_QWORD *)&dest[32] = v11;
    *(_QWORD *)&dest[96] = 0LL;
    *(_QWORD *)&dest[104] = 1LL;
    *(_QWORD *)&dest[112] = 0LL;
    alloc::vec::Vec<T,A>::push(&v29, dest);
    uu_sort::chunks::RecycledChunk::new((__int64)src);
    *(_QWORD *)dest = v35;
    memcpy(&dest[8], src, 0x90uLL);
    std::sync::mpmc::Sender<T>::send(src, v24, v23, dest);
    core::result::Result<T,E>::unwrap(src);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(&v49);
  v13 = v30;
  if ( v30 )
  {
    v14 = 0LL;
    do
    {
      uu_sort::chunks::RecycledChunk::new((__int64)src);
      *(_QWORD *)dest = v14;
      memcpy(&dest[8], src, 0x90uLL);
      std::sync::mpmc::Sender<T>::send(src, v24, v23, dest);
      core::result::Result<T,E>::unwrap(src);
      ++v14;
    }
    while ( v13 != v14 );
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v28);
  *(_QWORD *)dest = v33;
  *(_QWORD *)&dest[8] = v32;
  *(_OWORD *)&dest[16] = v29;
  *(_QWORD *)&dest[32] = v30;
  memcpy(&dest[40], src, 0xA0uLL);
  src[2] = 0x8000000000000000LL;
  src[0] = 0LL;
  LOBYTE(src[5]) = 0;
  std::thread::Builder::spawn_unchecked(&v41, src, dest);
  core::result::Result<T,E>::expect(&v49, &v41);
  v38[0] = 0LL;
  v38[1] = 8LL;
  v38[2] = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, v31);
  src[4] = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v41, src);
  for ( i = v42; v42 != 3; i = v42 )
  {
    v20 = v41;
    v21 = v43;
    *(_QWORD *)&v25 = i;
    *((_QWORD *)&v25 + 1) = v43;
    v22 = std::sync::mpmc::Receiver<T>::recv(i, v43);
    v39 = v22;
    if ( v22 )
    {
      *(_QWORD *)dest = 1LL;
      *(_QWORD *)&dest[8] = 1LL;
      *(_QWORD *)&dest[16] = v22;
      *(_OWORD *)&dest[16] = (unsigned __int64)alloc::boxed::Box<T>::new(dest);
      *(_QWORD *)dest = i;
      *(_QWORD *)&dest[8] = v21;
      *(_QWORD *)&dest[32] = v20;
      alloc::vec::Vec<T,A>::push(v38, dest);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v39);
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v25);
    }
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v41, src);
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>(src);
  binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(dest, v38, v28);
  v16 = v26;
  v26[8] = v50;
  *((_OWORD *)v16 + 3) = v49;
  v17 = *(_OWORD *)&dest[16];
  *((_OWORD *)v16 + 1) = *(_OWORD *)dest;
  *((_OWORD *)v16 + 2) = v17;
  *v16 = v24;
  result = v23;
  v16[1] = v23;
  v16[9] = 0LL;
  return result;
}