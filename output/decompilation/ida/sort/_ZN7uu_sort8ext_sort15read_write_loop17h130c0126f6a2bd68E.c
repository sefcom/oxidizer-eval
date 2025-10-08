__int64 __fastcall uu_sort::ext_sort::read_write_loop(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  char v18; // r15
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned __int64 v26; // rcx
  int v27; // r9d
  __int64 v28; // rax
  __int64 v30; // [rsp+10h] [rbp-228h] BYREF
  __int64 v31; // [rsp+18h] [rbp-220h]
  __int64 v32; // [rsp+20h] [rbp-218h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-210h]
  unsigned __int64 v34; // [rsp+30h] [rbp-208h]
  _QWORD v35[2]; // [rsp+38h] [rbp-200h] BYREF
  __int128 v36; // [rsp+48h] [rbp-1F0h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-1E0h]
  __int64 v38; // [rsp+60h] [rbp-1D8h]
  unsigned __int64 v39; // [rsp+68h] [rbp-1D0h]
  __int64 v40; // [rsp+70h] [rbp-1C8h] BYREF
  _QWORD v41[3]; // [rsp+78h] [rbp-1C0h] BYREF
  __int64 v42; // [rsp+90h] [rbp-1A8h]
  __int64 v43; // [rsp+98h] [rbp-1A0h]
  _QWORD v44[2]; // [rsp+A0h] [rbp-198h] BYREF
  _QWORD v45[3]; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-170h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-168h]
  __int128 v48; // [rsp+D8h] [rbp-160h]
  _QWORD v49[2]; // [rsp+158h] [rbp-E0h] BYREF
  __int128 v50; // [rsp+168h] [rbp-D0h]
  _BYTE v51[192]; // [rsp+178h] [rbp-C0h] BYREF

  v43 = a3;
  v13 = a9;
  v44[0] = a9;
  v44[1] = a10;
  <&mut I as core::iter::traits::iterator::Iterator>::next(&v46);
  if ( v46 == 2 )
    core::option::unwrap_failed(&off_18C700);
  v14 = v48;
  if ( (v46 & 1) != 0 )
  {
    a1[1] = v47;
    a1[2] = v14;
    *a1 = 0x8000000000000003LL;
    return core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(v44);
  }
  v30 = v47;
  v31 = v48;
  v41[0] = 0LL;
  v41[1] = 1LL;
  v41[2] = 0LL;
  uu_sort::chunks::RecycledChunk::new((__int64)&v46);
  v15 = a9;
  uu_sort::chunks::read((__int64)&v32, a9, a10, (__int64)&v46, 1, a5, (__int64)v41, (__int64)&v30, a2, a4, (__int64)a6);
  v16 = v32;
  if ( v32 )
  {
LABEL_5:
    v17 = v33;
    a1[1] = v16;
    a1[2] = v17;
    *a1 = 0x8000000000000003LL;
    v18 = 1;
    goto LABEL_18;
  }
  if ( !(_BYTE)v33 )
    goto LABEL_11;
  uu_sort::chunks::RecycledChunk::new((__int64)&v46);
  v15 = a9;
  uu_sort::chunks::read((__int64)&v32, a9, a10, (__int64)&v46, 1, a5, (__int64)v41, (__int64)&v30, a2, a4, (__int64)a6);
  v16 = v32;
  if ( v32 )
    goto LABEL_5;
  if ( (_BYTE)v33 != 1 )
  {
LABEL_11:
    v46 = a9;
    v47 = a10;
    core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v46);
    v15 = a8;
    v19 = std::sync::mpmc::Receiver<T>::recv(a7, a8);
    v20 = v19;
    *(_QWORD *)&v36 = v19;
    if ( v19 )
    {
      v32 = v19;
      v15 = a8;
      v21 = std::sync::mpmc::Receiver<T>::recv(a7, a8);
      v46 = v21;
      if ( v21 )
      {
        v22 = 0x8000000000000002LL;
      }
      else
      {
        v21 = core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v46);
        v22 = 0x8000000000000001LL;
      }
    }
    else
    {
      v21 = core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v36);
      v22 = 0x8000000000000000LL;
    }
    *a1 = v22;
    a1[1] = v20;
    a1[2] = v21;
    goto LABEL_17;
  }
  v35[0] = a9;
  v35[1] = a10;
  *(_QWORD *)&v36 = 0LL;
  *((_QWORD *)&v36 + 1) = 8LL;
  v37 = 0LL;
  v39 = 0x8000000000000000LL;
  if ( a6[6] == 0x8000000000000000LL )
    v38 = 0LL;
  else
    v38 = a6[7];
  v42 = a6[8];
  while ( 1 )
  {
    v15 = a8;
    v24 = std::sync::mpmc::Receiver<T>::recv(a7, a8);
    v25 = v24;
    v46 = v24;
    if ( !v24 )
    {
      core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v46);
      a1[2] = v37;
      *(_OWORD *)a1 = v36;
      goto LABEL_37;
    }
    v40 = v24;
    v15 = v43;
    uu_sort::tmp_dir::TmpDirWrapper::next_file(&v46, v43);
    if ( v47 == v39 )
    {
      *(_OWORD *)(a1 + 1) = v48;
LABEL_35:
      *a1 = 0x8000000000000003LL;
      core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v40);
      goto LABEL_36;
    }
    v49[0] = v46;
    v49[1] = v47;
    v50 = v48;
    v15 = v25;
    uu_sort::ext_sort::write(&v32, v25, v49, v38, v42, a4);
    v26 = v34;
    if ( v32 == v39 )
    {
      a1[1] = v33;
      a1[2] = v26;
      goto LABEL_35;
    }
    v45[0] = v32;
    v45[1] = v33;
    v45[2] = v34;
    alloc::vec::Vec<T,A>::push(&v36, v45, &off_18C718);
    uu_sort::chunks::Chunk::recycle((__int64)v51, v25);
    if ( v13 == 3 )
    {
      core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v51);
      goto LABEL_24;
    }
    v15 = v13;
    uu_sort::chunks::read(
      (__int64)&v46,
      v13,
      a10,
      (__int64)v51,
      0,
      v27,
      (__int64)v41,
      (__int64)&v30,
      a2,
      a4,
      (__int64)a6);
    v28 = v47;
    if ( v46 )
      break;
    if ( (v47 & 1) == 0 )
    {
      core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(v35);
      v35[0] = 3LL;
LABEL_24:
      v13 = 3LL;
    }
  }
  a1[1] = v46;
  a1[2] = v28;
  *a1 = 0x8000000000000003LL;
LABEL_36:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v36);
LABEL_37:
  core::ptr::drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>(v35);
LABEL_17:
  v18 = 0;
LABEL_18:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v41, v15);
  result = core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
             v30,
             v31);
  if ( v18 )
    return core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(v44);
  return result;
}