__int64 __fastcall uu_sort::check::check(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r12
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int128 v7; // kr00_16
  unsigned __int128 v8; // kr10_16
  void *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rbx
  char v21; // al
  __int64 v22; // rbx
  char v23; // al
  __int64 v24; // [rsp+0h] [rbp-298h] BYREF
  __int64 v25; // [rsp+8h] [rbp-290h]
  __int64 v26; // [rsp+10h] [rbp-288h]
  __int64 v27; // [rsp+18h] [rbp-280h]
  unsigned __int128 v28; // [rsp+20h] [rbp-278h] BYREF
  __int64 v29; // [rsp+30h] [rbp-268h]
  char **v30; // [rsp+40h] [rbp-258h]
  __int64 v31; // [rsp+48h] [rbp-250h]
  __int64 v32; // [rsp+50h] [rbp-248h]
  __int64 v33; // [rsp+58h] [rbp-240h]
  __int64 v34; // [rsp+60h] [rbp-238h]
  __int64 v35; // [rsp+68h] [rbp-230h]
  __int64 v36; // [rsp+70h] [rbp-228h]
  __int64 v37; // [rsp+78h] [rbp-220h] BYREF
  unsigned __int128 v38; // [rsp+80h] [rbp-218h] BYREF
  __int64 v39; // [rsp+90h] [rbp-208h]
  unsigned __int128 v40; // [rsp+98h] [rbp-200h] BYREF
  _QWORD v41[2]; // [rsp+A8h] [rbp-1F0h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-1E0h] BYREF
  unsigned __int128 v43; // [rsp+C0h] [rbp-1D8h] BYREF
  _BYTE v44[176]; // [rsp+D0h] [rbp-1C8h] BYREF
  __int64 v45; // [rsp+180h] [rbp-118h]
  __int64 v46; // [rsp+188h] [rbp-110h]
  __int64 v47; // [rsp+198h] [rbp-100h]
  __int64 v48; // [rsp+1A0h] [rbp-F8h]
  unsigned __int128 v49; // [rsp+1A8h] [rbp-F0h]
  __int64 v50; // [rsp+1B8h] [rbp-E0h]
  __int64 v51; // [rsp+1C0h] [rbp-D8h]
  _OWORD src[13]; // [rsp+1C8h] [rbp-D0h] BYREF

  v25 = a3;
  v3 = -*(_BYTE *)(a3 + 132);
  uu_sort::open(&v43, a1, a2);
  result = *((_QWORD *)&v43 + 1);
  if ( (v43 & 1) != 0 )
    return result;
  v33 = *((_QWORD *)&v43 + 1);
  v34 = *(_QWORD *)v44;
  std::sync::mpmc::sync_channel(&v43);
  v31 = a1;
  v32 = a2;
  v5 = *(_QWORD *)v44;
  v6 = *(_QWORD *)&v44[8];
  v7 = v43;
  v26 = v7 >> 64;
  v27 = v7;
  v40 = v43;
  v47 = *(_QWORD *)v44;
  v48 = *(_QWORD *)&v44[8];
  std::sync::mpmc::sync_channel(&v43, 2LL);
  v8 = v43;
  v49 = v43;
  v36 = *(_QWORD *)v44;
  v50 = *(_QWORD *)v44;
  v35 = *(_QWORD *)&v44[8];
  v51 = *(_QWORD *)&v44[8];
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v25);
  v45 = v33;
  v46 = v34;
  *(_QWORD *)&v43 = v5;
  *((_QWORD *)&v43 + 1) = v6;
  *(_OWORD *)v44 = v8;
  memcpy(&v44[16], src, 0xA0uLL);
  *(_QWORD *)&src[1] = 0x8000000000000000LL;
  *(_QWORD *)&src[0] = 0LL;
  BYTE8(src[2]) = 0;
  std::thread::Builder::spawn_unchecked(&v28, src, &v43);
  core::result::Result<T,E>::expect(src, &v28);
  core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(src);
  v9 = &GCC_except_table1590;
  if ( *(_QWORD *)(v25 + 104) < (unsigned __int64)&GCC_except_table1590 )
    v9 = *(void **)(v25 + 104);
  uu_sort::chunks::RecycledChunk::new(&v43, v9);
  std::sync::mpmc::Sender<T>::send(src, v27, v26, &v43);
  core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(src);
  uu_sort::chunks::RecycledChunk::new(&v43, v9);
  std::sync::mpmc::Sender<T>::send(src, v27, v26, &v43);
  core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(src);
  v24 = 0LL;
  v10 = v36;
  v41[0] = v36;
  v41[1] = v35;
  v11 = 0LL;
  v30 = &off_18C3F8;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = <std::sync::mpsc::IntoIter<T> as core::iter::traits::iterator::Iterator>::next(v10);
    v14 = v13;
    if ( !v13 )
    {
      core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(v41);
      core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v24);
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>(&v40);
      return 0LL;
    }
    v37 = v13;
    ++v12;
    v42 = v11;
    v24 = 0LL;
    if ( !v11 )
    {
      core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v42);
      goto LABEL_13;
    }
    *(_QWORD *)&v38 = v11;
    v15 = *(_QWORD *)(v11 + 40);
    if ( !v15 || *(_QWORD *)(v11 + 32) + 24 * v15 == 24 )
      goto LABEL_24;
    if ( !*(_QWORD *)(v14 + 40) )
    {
      v30 = &off_18C410;
LABEL_24:
      core::option::unwrap_failed(v30);
    }
    v16 = *(_QWORD **)(v14 + 32);
    if ( (char)uu_sort::compare_by(*(_QWORD *)(v11 + 32) + 24 * v15 - 24, v16, v25, v11 + 48, v14 + 48) > v3 )
      break;
    uu_sort::chunks::Chunk::recycle(&v43, v11);
    std::sync::mpmc::Sender<T>::send(src, v27, v26, &v43);
    core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(src);
LABEL_13:
    v17 = *(_QWORD *)(v14 + 32) + 24LL * *(_QWORD *)(v14 + 40);
    *(_QWORD *)&src[0] = *(_QWORD *)(v14 + 32);
    *((_QWORD *)&src[0] + 1) = v17;
    *(_QWORD *)&src[1] = 0LL;
    while ( 1 )
    {
      v18 = <itertools::tuple_impl::TupleWindows<I,T> as core::iter::traits::iterator::Iterator>::next(src);
      if ( !v18 )
        break;
      v20 = v19;
      ++v12;
      if ( (char)uu_sort::compare_by(v18, v19, v25, v14 + 48, v14 + 48) > v3 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v43, v31, v32);
        v39 = *(_QWORD *)v44;
        v38 = v43;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, *v20, v20[1]);
        *(_QWORD *)&v44[24] = v29;
        *(_OWORD *)&v44[8] = v28;
        v21 = *(_BYTE *)(v25 + 134);
        *(_QWORD *)v44 = v39;
        v43 = v38;
        *(_QWORD *)&v44[32] = v12;
        v44[40] = v21;
        v22 = alloc::boxed::Box<T>::new(&v43);
        goto LABEL_18;
      }
    }
    core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v24);
    v24 = v14;
    v11 = v14;
    v10 = v36;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v43, v31, v32);
  v29 = *(_QWORD *)v44;
  v28 = v43;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, *v16, v16[1]);
  *(_QWORD *)&v44[24] = *(_QWORD *)&src[1];
  *(_OWORD *)&v44[8] = src[0];
  v23 = *(_BYTE *)(v25 + 134);
  *(_QWORD *)v44 = v29;
  v43 = v28;
  *(_QWORD *)&v44[32] = v12;
  v44[40] = v23;
  v22 = alloc::boxed::Box<T>::new(&v43);
  core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v38);
LABEL_18:
  core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v37);
  core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(v41);
  core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v24);
  core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>(&v40);
  return v22;
}