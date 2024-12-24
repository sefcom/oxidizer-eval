        __int128 a8)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r8
  __int64 result; // rax
  __int64 v26; // rcx
  __int64 v27; // [rsp+10h] [rbp-218h] BYREF
  _QWORD *v28; // [rsp+18h] [rbp-210h]
  __int64 v29; // [rsp+20h] [rbp-208h]
  __int64 v30; // [rsp+28h] [rbp-200h] BYREF
  __int64 v31; // [rsp+30h] [rbp-1F8h]
  __int128 v32; // [rsp+38h] [rbp-1F0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-1E0h]
  __int128 *v34; // [rsp+50h] [rbp-1D8h] BYREF
  __int128 v35; // [rsp+58h] [rbp-1D0h] BYREF
  __int128 v36; // [rsp+68h] [rbp-1C0h] BYREF
  __int64 v37; // [rsp+78h] [rbp-1B0h]
  _QWORD v38[3]; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v39; // [rsp+98h] [rbp-190h]
  __int64 v40; // [rsp+A0h] [rbp-188h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-180h]
  __int128 v42; // [rsp+B0h] [rbp-178h] BYREF
  __m256i v43; // [rsp+C0h] [rbp-168h]
  __int128 v44; // [rsp+E0h] [rbp-148h]
  __int128 v45; // [rsp+F0h] [rbp-138h]
  __int128 v46; // [rsp+100h] [rbp-128h]
  __int128 v47; // [rsp+110h] [rbp-118h]
  __int64 v48; // [rsp+120h] [rbp-108h]
  __int128 v49; // [rsp+130h] [rbp-F8h] BYREF
  __m256i v50; // [rsp+140h] [rbp-E8h]
  __int128 v51; // [rsp+160h] [rbp-C8h]
  __int128 v52; // [rsp+170h] [rbp-B8h]
  __int128 v53; // [rsp+180h] [rbp-A8h]
  __int128 v54; // [rsp+190h] [rbp-98h]
  __int64 v55; // [rsp+1A0h] [rbp-88h]
  _OWORD v56[2]; // [rsp+1A8h] [rbp-80h] BYREF
  __int128 v57; // [rsp+1C8h] [rbp-60h] BYREF
  __m256i v58; // [rsp+1D8h] [rbp-50h]

  v39 = a3;
  v34 = a2;
  v35 = a8;
  <&mut I as core::iter::traits::iterator::Iterator>::next(&v42);
  v11 = v42;
  if ( (_QWORD)v42 == 2LL )
    core::option::unwrap_failed(&off_201F58);
  v12 = *((_QWORD *)&v42 + 1);
  v13 = v43.m256i_i64[0];
  if ( (_QWORD)v42 )
  {
    a1[1] = *((_QWORD *)&v42 + 1);
    a1[2] = v13;
    *a1 = 0x8000000000000003LL;
    return core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v35);
  }
  v28 = a6;
  v30 = *((_QWORD *)&v42 + 1);
  v31 = v43.m256i_i64[0];
  v38[0] = 0LL;
  v38[1] = 1LL;
  v38[2] = 0LL;
  v14 = 0;
  v29 = a4;
  do
  {
    v14 = <i32 as core::iter::range::Step>::forward_unchecked((unsigned int)v14, a2, v11, v12);
    uu_sort::chunks::RecycledChunk::new((__int64)&v42);
    a2 = &v35;
    uu_sort::chunks::read(
      (__int64)&v49,
      (__int64)&v35,
      &v42,
      1LL,
      a5,
      (__int64)v38,
      &v30,
      (__int64 *)&v34,
      v29,
      (__int64)v28);
    v15 = v49;
    if ( (_QWORD)v49 )
    {
      v17 = *((_QWORD *)&v49 + 1);
      a1[1] = v49;
      a1[2] = v17;
      *a1 = 0x8000000000000003LL;
      goto LABEL_30;
    }
    if ( !BYTE8(v49) )
    {
      v42 = v35;
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v42);
      v18 = std::sync::mpmc::Receiver<T>::recv(a7);
      v19 = v18;
      if ( v18 )
      {
        *(_QWORD *)&v42 = v18;
        v20 = std::sync::mpmc::Receiver<T>::recv(a7);
        *a1 = ((__PAIR128__(-1LL, v20) - 1) >> 64) - 0x7FFFFFFFFFFFFFFDLL;
        a1[1] = v19;
        a1[2] = v20;
      }
      else
      {
        *a1 = 0x8000000000000000LL;
      }
      goto LABEL_30;
    }
  }
  while ( v14 < 2 );
  v32 = v35;
  *(_QWORD *)&v36 = 0LL;
  *((_QWORD *)&v36 + 1) = 8LL;
  v37 = 0LL;
  if ( v28[6] == 0x8000000000000000LL )
    v16 = 0LL;
  else
    v16 = v28[7];
  v33 = v16;
  v21 = v28[8];
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = std::sync::mpmc::Receiver<T>::recv(a7);
      *(_QWORD *)&v42 = v22;
      if ( !v22 )
      {
        a1[2] = v37;
        *(_OWORD *)a1 = v36;
        core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v42);
        goto LABEL_29;
      }
      v27 = v22;
      uu_sort::tmp_dir::TmpDirWrapper::next_file((__int64)&v49, v39);
      if ( *((_QWORD *)&v49 + 1) == 0x8000000000000000LL )
      {
        *(_OWORD *)(a1 + 1) = *(_OWORD *)v50.m256i_i8;
        *a1 = 0x8000000000000003LL;
LABEL_27:
        core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v27);
        goto LABEL_28;
      }
      v56[0] = v49;
      v56[1] = *(_OWORD *)v50.m256i_i8;
      uu_sort::ext_sort::write(&v42, v27, (__int64)v56, v33, v21, v29);
      v23 = v43.m256i_i64[0];
      if ( (_QWORD)v42 == 0x8000000000000000LL )
      {
        a1[1] = *((_QWORD *)&v42 + 1);
        a1[2] = v23;
        *a1 = 0x8000000000000003LL;
        goto LABEL_27;
      }
      v58 = v43;
      v57 = v42;
      alloc::vec::Vec<T,A>::push(&v36, &v57);
      uu_sort::chunks::Chunk::recycle((__int64)&v49, v27);
      if ( (_DWORD)v32 != 3 )
        break;
      core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v49);
    }
    v48 = v55;
    v47 = v54;
    v46 = v53;
    v45 = v52;
    v44 = v51;
    v43 = v50;
    v42 = v49;
    uu_sort::chunks::read(
      (__int64)&v40,
      (__int64)&v32,
      &v42,
      0LL,
      v24,
      (__int64)v38,
      &v30,
      (__int64 *)&v34,
      v29,
      (__int64)v28);
    if ( v40 )
      break;
    if ( !(_BYTE)v41 )
    {
      core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(&v32);
      *(_QWORD *)&v32 = 3LL;
    }
  }
  v26 = v41;
  a1[1] = v40;
  a1[2] = v26;
  *a1 = 0x8000000000000003LL;
LABEL_28:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(&v36);
LABEL_29:
  core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(&v32);
LABEL_30:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v38);
  result = core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>(v30, v31);
  if ( v15 )
    return core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v35);
  return result;
}
