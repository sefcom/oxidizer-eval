        __int128 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 result; // rax
  __int64 v28; // rcx
  __int64 v29; // [rsp+8h] [rbp-1F0h] BYREF
  __int64 v30; // [rsp+10h] [rbp-1E8h]
  __int64 v31; // [rsp+18h] [rbp-1E0h] BYREF
  __int64 v32; // [rsp+20h] [rbp-1D8h]
  __int128 v33; // [rsp+28h] [rbp-1D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-1C0h]
  __int64 v35; // [rsp+40h] [rbp-1B8h]
  __int128 *v36; // [rsp+48h] [rbp-1B0h] BYREF
  __int128 v37; // [rsp+50h] [rbp-1A8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-198h] BYREF
  __int64 v39; // [rsp+70h] [rbp-188h]
  _QWORD v40[3]; // [rsp+78h] [rbp-180h] BYREF
  __int64 v41; // [rsp+90h] [rbp-168h] BYREF
  __int64 v42; // [rsp+98h] [rbp-160h]
  __int128 v43; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-148h]
  __int128 v45; // [rsp+C0h] [rbp-138h]
  __int128 v46; // [rsp+D0h] [rbp-128h]
  __int128 v47; // [rsp+E0h] [rbp-118h]
  __int128 v48; // [rsp+F0h] [rbp-108h]
  __int128 v49; // [rsp+100h] [rbp-F8h]
  __int64 v50; // [rsp+110h] [rbp-E8h]
  __int128 v51; // [rsp+118h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+128h] [rbp-D0h]
  __int128 v53; // [rsp+130h] [rbp-C8h] BYREF
  __int128 v54; // [rsp+140h] [rbp-B8h]
  __int128 v55; // [rsp+150h] [rbp-A8h]
  __int128 v56; // [rsp+160h] [rbp-98h]
  __int128 v57; // [rsp+170h] [rbp-88h]
  __int128 v58; // [rsp+180h] [rbp-78h]
  __int128 v59; // [rsp+190h] [rbp-68h]
  __int64 v60; // [rsp+1A0h] [rbp-58h]
  _OWORD v61[5]; // [rsp+1A8h] [rbp-50h] BYREF

  v36 = a2;
  v37 = a8;
  <&mut I as core::iter::traits::iterator::Iterator>::next(&v43);
  v12 = v43;
  if ( (_QWORD)v43 == 2LL )
    core::option::unwrap_failed(&off_201F58);
  v13 = *((_QWORD *)&v43 + 1);
  v14 = v44;
  if ( (_QWORD)v43 )
  {
    a1[1] = *((_QWORD *)&v43 + 1);
    a1[2] = v14;
    *a1 = 0x8000000000000003LL;
    return core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v37);
  }
  v34 = a3;
  v31 = *((_QWORD *)&v43 + 1);
  v32 = v44;
  v40[0] = 0LL;
  v40[1] = 1LL;
  v40[2] = 0LL;
  v15 = 0;
  v30 = a4;
  do
  {
    v15 = <i32 as core::iter::range::Step>::forward_unchecked((unsigned int)v15, a2, v12, v13);
    uu_sort::chunks::RecycledChunk::new((__int64)&v43);
    a2 = &v37;
    uu_sort::chunks::read(
      (__int64)&v53,
      (__int64)&v37,
      &v43,
      1LL,
      a5,
      (__int64)v40,
      &v31,
      (__int64 *)&v36,
      v30,
      (__int64)a6);
    v16 = v53;
    if ( (_QWORD)v53 )
    {
      v18 = *((_QWORD *)&v53 + 1);
      a1[1] = v53;
      a1[2] = v18;
      *a1 = 0x8000000000000003LL;
      goto LABEL_30;
    }
    if ( !BYTE8(v53) )
    {
      v43 = v37;
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v43);
      v19 = std::sync::mpmc::Receiver<T>::recv(a7);
      v20 = v19;
      if ( v19 )
      {
        *(_QWORD *)&v43 = v19;
        v21 = std::sync::mpmc::Receiver<T>::recv(a7);
        *a1 = ((__PAIR128__(-1LL, v21) - 1) >> 64) - 0x7FFFFFFFFFFFFFFDLL;
        a1[1] = v20;
        a1[2] = v21;
      }
      else
      {
        *a1 = 0x8000000000000000LL;
      }
      goto LABEL_30;
    }
  }
  while ( v15 < 2 );
  v33 = v37;
  *(_QWORD *)&v38 = 0LL;
  *((_QWORD *)&v38 + 1) = 8LL;
  v39 = 0LL;
  if ( a6[6] == 0x8000000000000000LL )
    v17 = 0LL;
  else
    v17 = a6[7];
  v35 = v17;
  v22 = v34;
  v23 = a6[8];
  while ( 1 )
  {
    while ( 1 )
    {
      v24 = std::sync::mpmc::Receiver<T>::recv(a7);
      *(_QWORD *)&v43 = v24;
      if ( !v24 )
      {
        a1[2] = v39;
        *(_OWORD *)a1 = v38;
        core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v43);
        goto LABEL_29;
      }
      v29 = v24;
      uu_sort::tmp_dir::TmpDirWrapper::next_file((__int64)&v43, v22);
      if ( *((_QWORD *)&v43 + 1) == 0x8000000000000000LL )
      {
        *(_OWORD *)(a1 + 1) = v44;
        *a1 = 0x8000000000000003LL;
LABEL_27:
        core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v29);
        goto LABEL_28;
      }
      v61[0] = v43;
      v61[1] = v44;
      uu_sort::ext_sort::write(&v53, v29, (__int64)v61, v35, v23, v30);
      v25 = v54;
      if ( (_QWORD)v53 == 0x8000000000000000LL )
      {
        a1[1] = *((_QWORD *)&v53 + 1);
        a1[2] = v25;
        *a1 = 0x8000000000000003LL;
        goto LABEL_27;
      }
      v51 = v53;
      v52 = v54;
      alloc::vec::Vec<T,A>::push(&v38, &v51);
      uu_sort::chunks::Chunk::recycle((__int64)&v53, v29);
      if ( (_DWORD)v33 != 3 )
        break;
      core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v53);
    }
    v50 = v60;
    v49 = v59;
    v48 = v58;
    v47 = v57;
    v46 = v56;
    v45 = v55;
    v44 = v54;
    v43 = v53;
    uu_sort::chunks::read(
      (__int64)&v41,
      (__int64)&v33,
      &v43,
      0LL,
      v26,
      (__int64)v40,
      &v31,
      (__int64 *)&v36,
      v30,
      (__int64)a6);
    if ( v41 )
      break;
    if ( !(_BYTE)v42 )
    {
      core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(&v33);
      *(_QWORD *)&v33 = 3LL;
    }
  }
  v28 = v42;
  a1[1] = v41;
  a1[2] = v28;
  *a1 = 0x8000000000000003LL;
LABEL_28:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v38);
LABEL_29:
  core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(&v33);
LABEL_30:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v40);
  result = core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>(v31, v32);
  if ( v16 )
    return core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v37);
  return result;
}
