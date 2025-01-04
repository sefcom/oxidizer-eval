__int64 __fastcall uu_sort::check::check(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int128 v8; // kr10_16
  unsigned __int128 v9; // kr00_16
  void *v10; // r14
  int v11; // r13d
  __int64 v12; // r12
  __int64 i; // rbp
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rbp
  _QWORD *v23; // rbx
  char v24; // al
  char v26; // al
  _QWORD *v27; // [rsp+8h] [rbp-270h] BYREF
  __int64 v28; // [rsp+10h] [rbp-268h]
  _QWORD *v29; // [rsp+18h] [rbp-260h] BYREF
  char **v30; // [rsp+20h] [rbp-258h]
  __int64 v31; // [rsp+28h] [rbp-250h]
  unsigned __int128 v32; // [rsp+30h] [rbp-248h] BYREF
  __int64 v33; // [rsp+40h] [rbp-238h]
  unsigned __int128 v34; // [rsp+50h] [rbp-228h] BYREF
  __int64 v35; // [rsp+60h] [rbp-218h]
  __int64 v36; // [rsp+68h] [rbp-210h]
  __int64 v37; // [rsp+70h] [rbp-208h]
  __int64 v38; // [rsp+78h] [rbp-200h]
  unsigned __int128 v39; // [rsp+80h] [rbp-1F8h] BYREF
  _QWORD v40[2]; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-1D8h]
  unsigned __int128 v42; // [rsp+A8h] [rbp-1D0h] BYREF
  unsigned __int128 v43; // [rsp+B8h] [rbp-1C0h]
  _QWORD dest[22]; // [rsp+C8h] [rbp-1B0h] BYREF
  unsigned __int128 v45; // [rsp+178h] [rbp-100h]
  unsigned __int128 v46; // [rsp+188h] [rbp-F0h]
  unsigned __int128 v47; // [rsp+198h] [rbp-E0h]
  _OWORD src[13]; // [rsp+1A8h] [rbp-D0h] BYREF

  v4 = -*(_BYTE *)(a3 + 132);
  uu_sort::open(&v42, a1, a2);
  v5 = *((_QWORD *)&v42 + 1);
  if ( (_QWORD)v42 )
    return v5;
  v36 = a2;
  v28 = a3;
  v37 = *((_QWORD *)&v42 + 1);
  v38 = v43;
  std::sync::mpmc::sync_channel(&v42, 2LL);
  v31 = a1;
  v6 = *((_QWORD *)&v43 + 1);
  v7 = v43;
  v39 = v42;
  v45 = v43;
  std::sync::mpmc::sync_channel(&v42, 2LL);
  v8 = v42;
  v46 = v42;
  v9 = v43;
  v41 = v9 >> 64;
  v30 = (char **)v9;
  v47 = v43;
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, a3);
  dest[20] = v37;
  dest[21] = v38;
  v42 = __PAIR128__(v6, v7);
  v43 = v8;
  memcpy(dest, src, 0xA0uLL);
  *(_QWORD *)&src[1] = 0x8000000000000000LL;
  *(_QWORD *)&src[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v32, src, &v42);
  core::result::Result<T,E>::expect(src, &v32);
  core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(src);
  v10 = &unk_19000;
  if ( *(_QWORD *)(a3 + 104) < (unsigned __int64)&unk_19000 )
    v10 = *(void **)(v28 + 104);
  v11 = 0;
  do
  {
    v11 = <i32 as core::iter::range::Step>::forward_unchecked((unsigned int)v11);
    uu_sort::chunks::RecycledChunk::new(&v42, v10);
    std::sync::mpmc::Sender<T>::send(src, &v39, &v42);
    core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(src);
  }
  while ( v11 < 2 );
  v27 = 0LL;
  v40[0] = v30;
  v40[1] = v41;
  v12 = 0LL;
  v30 = &off_200EA0;
  for ( i = v31; ; i = v31 )
  {
    v14 = (_QWORD *)<std::sync::mpsc::IntoIter<T> as core::iter::traits::iterator::Iterator>::next();
    if ( !v14 )
    {
      core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(v40);
      core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&v27);
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>(&v39);
      return 0LL;
    }
    v29 = v14;
    ++v12;
    v15 = v27;
    v27 = 0LL;
    if ( v15 )
      break;
LABEL_13:
    v18 = v14[4];
    v19 = v18 + 24LL * v14[5];
    *(_QWORD *)&src[0] = v18;
    *((_QWORD *)&src[0] + 1) = v19;
    *(_QWORD *)&src[1] = 0LL;
    while ( 1 )
    {
      v20 = <itertools::tuple_impl::TupleWindows<I,T> as core::iter::traits::iterator::Iterator>::next(src);
      if ( !v20 )
        break;
      v22 = (_QWORD *)v21;
      ++v12;
      if ( (char)uu_sort::compare_by(v20, v21, v28, v29 + 6, v29 + 6) > v4 )
      {
        std::sys::os_str::bytes::Slice::to_owned(&v42, v31);
        v35 = v43;
        v34 = v42;
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v32, *v22, v22[1]);
        dest[3] = v33;
        *(_OWORD *)&dest[1] = v32;
        v24 = *(_BYTE *)(v28 + 134);
        dest[0] = v35;
        v43 = v34;
        *((_QWORD *)&v42 + 1) = v12;
        BYTE1(v42) = v24;
        LOBYTE(v42) = 0;
        v5 = alloc::boxed::Box<T>::new(&v42);
        goto LABEL_18;
      }
    }
    v23 = v29;
    core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&v27);
    v27 = v23;
  }
  *(_QWORD *)&v34 = v15;
  v16 = v15[5];
  if ( !v16 )
    goto LABEL_23;
  if ( !v14[5] )
  {
    v30 = &off_200EB8;
LABEL_23:
    core::option::unwrap_failed(v30);
  }
  v17 = (_QWORD *)v14[4];
  if ( (char)uu_sort::compare_by(v15[4] + 24 * v16 - 24, (__int64)v17, v28, v15 + 6, v14 + 6) <= v4 )
  {
    uu_sort::chunks::Chunk::recycle(&v42, v34);
    std::sync::mpmc::Sender<T>::send(src, &v39, &v42);
    core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(src);
    v14 = v29;
    goto LABEL_13;
  }
  std::sys::os_str::bytes::Slice::to_owned(&v42, i);
  v33 = v43;
  v32 = v42;
  <T as alloc::slice::hack::ConvertVec>::to_vec(src, *v17, v17[1]);
  dest[3] = *(_QWORD *)&src[1];
  *(_OWORD *)&dest[1] = src[0];
  v26 = *(_BYTE *)(v28 + 134);
  dest[0] = v33;
  v43 = v32;
  *((_QWORD *)&v42 + 1) = v12;
  BYTE1(v42) = v26;
  LOBYTE(v42) = 0;
  v5 = alloc::boxed::Box<T>::new(&v42);
  core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v34);
LABEL_18:
  core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v29);
  core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(v40);
  core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&v27);
  core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>(&v39);
  return v5;
}
