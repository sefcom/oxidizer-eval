__int64 __fastcall uu_sort::check::check(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r15
  __int64 v5; // r14
  unsigned __int128 v6; // kr00_16
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r13
  unsigned __int128 v9; // kr10_16
  int v10; // r13d
  __int64 v11; // r12
  __int64 i; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rbp
  _QWORD *v22; // rbx
  char v23; // al
  char v25; // al
  _QWORD *v26; // [rsp+8h] [rbp-270h] BYREF
  __int64 v27; // [rsp+10h] [rbp-268h]
  _QWORD *v28; // [rsp+18h] [rbp-260h] BYREF
  char **v29; // [rsp+20h] [rbp-258h]
  __int64 v30; // [rsp+28h] [rbp-250h]
  unsigned __int128 v31; // [rsp+30h] [rbp-248h] BYREF
  __int64 v32; // [rsp+40h] [rbp-238h]
  unsigned __int128 v33; // [rsp+50h] [rbp-228h] BYREF
  __int64 v34; // [rsp+60h] [rbp-218h]
  __int64 v35; // [rsp+68h] [rbp-210h]
  __int64 v36; // [rsp+70h] [rbp-208h]
  __int64 v37; // [rsp+78h] [rbp-200h]
  unsigned __int128 v38; // [rsp+80h] [rbp-1F8h] BYREF
  _QWORD v39[2]; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-1D8h]
  unsigned __int128 v41; // [rsp+A8h] [rbp-1D0h] BYREF
  unsigned __int128 v42; // [rsp+B8h] [rbp-1C0h]
  _QWORD dest[22]; // [rsp+C8h] [rbp-1B0h] BYREF
  unsigned __int128 v44; // [rsp+178h] [rbp-100h]
  unsigned __int128 v45; // [rsp+188h] [rbp-F0h]
  unsigned __int128 v46; // [rsp+198h] [rbp-E0h]
  _OWORD src[13]; // [rsp+1A8h] [rbp-D0h] BYREF

  v4 = -*(_BYTE *)(a3 + 132);
  uu_sort::open(&v41, a1, a2);
  v5 = *((_QWORD *)&v41 + 1);
  if ( (_QWORD)v41 )
    return v5;
  v35 = a2;
  v27 = a3;
  v36 = *((_QWORD *)&v41 + 1);
  v37 = v42;
  std::sync::mpmc::sync_channel(&v41, 2LL);
  v30 = a1;
  v6 = v42;
  v38 = v41;
  v44 = v42;
  std::sync::mpmc::sync_channel(&v41, 2LL);
  v7 = *((_QWORD *)&v41 + 1);
  v8 = v41;
  v45 = v41;
  v9 = v42;
  v40 = v9 >> 64;
  v29 = (char **)v9;
  v46 = v42;
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, a3);
  dest[20] = v36;
  dest[21] = v37;
  v41 = v6;
  v42 = __PAIR128__(v7, v8);
  memcpy(dest, src, 0xA0uLL);
  *(_QWORD *)&src[1] = 0x8000000000000000LL;
  *(_QWORD *)&src[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v31, src, &v41);
  core::result::Result<T,E>::expect(src, &v31);
  core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(src);
  v10 = 0;
  do
  {
    v10 = <i32 as core::iter::range::Step>::forward_unchecked((unsigned int)v10);
    uu_sort::chunks::RecycledChunk::new((__int64)&v41);
    std::sync::mpmc::Sender<T>::send(src, &v38, &v41);
    core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(src);
  }
  while ( v10 < 2 );
  v26 = 0LL;
  v39[0] = v29;
  v39[1] = v40;
  v11 = 0LL;
  v29 = &off_200160;
  for ( i = v30; ; i = v30 )
  {
    v13 = (_QWORD *)<std::sync::mpsc::IntoIter<T> as core::iter::traits::iterator::Iterator>::next();
    if ( !v13 )
    {
      core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(v39);
      core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&v26);
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>(&v38);
      return 0LL;
    }
    v28 = v13;
    ++v11;
    v14 = v26;
    v26 = 0LL;
    if ( v14 )
      break;
LABEL_11:
    v17 = v13[4];
    v18 = v17 + 24LL * v13[5];
    *(_QWORD *)&src[0] = v17;
    *((_QWORD *)&src[0] + 1) = v18;
    *(_QWORD *)&src[1] = 0LL;
    while ( 1 )
    {
      v19 = <itertools::tuple_impl::TupleWindows<I,T> as core::iter::traits::iterator::Iterator>::next(src);
      if ( !v19 )
        break;
      v21 = (_QWORD *)v20;
      ++v11;
      if ( (char)uu_sort::compare_by(v19, v20, v27, v28 + 6, v28 + 6) > v4 )
      {
        std::sys::os_str::bytes::Slice::to_owned(&v41, v30);
        v34 = v42;
        v33 = v41;
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v31, *v21, v21[1]);
        dest[3] = v32;
        *(_OWORD *)&dest[1] = v31;
        v23 = *(_BYTE *)(v27 + 134);
        dest[0] = v34;
        v42 = v33;
        *((_QWORD *)&v41 + 1) = v11;
        BYTE1(v41) = v23;
        LOBYTE(v41) = 0;
        v5 = alloc::boxed::Box<T>::new(&v41);
        goto LABEL_16;
      }
    }
    v22 = v28;
    core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&v26);
    v26 = v22;
  }
  *(_QWORD *)&v33 = v14;
  v15 = v14[5];
  if ( !v15 )
    goto LABEL_21;
  if ( !v13[5] )
  {
    v29 = &off_200178;
LABEL_21:
    core::option::unwrap_failed(v29);
  }
  v16 = (_QWORD *)v13[4];
  if ( (char)uu_sort::compare_by(v14[4] + 24 * v15 - 24, (__int64)v16, v27, v14 + 6, v13 + 6) <= v4 )
  {
    uu_sort::chunks::Chunk::recycle((__int64)&v41, v33);
    std::sync::mpmc::Sender<T>::send(src, &v38, &v41);
    core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(src);
    v13 = v28;
    goto LABEL_11;
  }
  std::sys::os_str::bytes::Slice::to_owned(&v41, i);
  v32 = v42;
  v31 = v41;
  <T as alloc::slice::hack::ConvertVec>::to_vec(src, *v16, v16[1]);
  dest[3] = *(_QWORD *)&src[1];
  *(_OWORD *)&dest[1] = src[0];
  v25 = *(_BYTE *)(v27 + 134);
  dest[0] = v32;
  v42 = v31;
  *((_QWORD *)&v41 + 1) = v11;
  BYTE1(v41) = v25;
  LOBYTE(v41) = 0;
  v5 = alloc::boxed::Box<T>::new(&v41);
  core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v33);
LABEL_16:
  core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v28);
  core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(v39);
  core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&v26);
  core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>(&v38);
  return v5;
}
