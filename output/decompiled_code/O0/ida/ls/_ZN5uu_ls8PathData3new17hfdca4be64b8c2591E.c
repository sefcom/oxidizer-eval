__int64 __fastcall uu_ls::PathData::new(__int64 a1, __int128 *a2, __int64 a3, __int64 *a4, __int64 a5, bool a6)
{
  __int64 v6; // r13
  __int128 *v7; // rbp
  const void *v8; // r15
  signed __int64 v9; // r14
  __int64 v10; // rbp
  void *v11; // r13
  void *v12; // rax
  __int64 v13; // rdx
  int v14; // ebx
  bool v15; // al
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rbp
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r15
  __int128 v30; // xmm0
  bool v32; // [rsp+Ch] [rbp-24Ch]
  __int64 v34; // [rsp+18h] [rbp-240h]
  int v35; // [rsp+20h] [rbp-238h]
  __int128 v39; // [rsp+40h] [rbp-218h]
  void *v40; // [rsp+50h] [rbp-208h]
  __int128 v41; // [rsp+58h] [rbp-200h] BYREF
  void *dest[2]; // [rsp+68h] [rbp-1F0h]
  __int64 v43; // [rsp+78h] [rbp-1E0h]
  int v44; // [rsp+90h] [rbp-1C8h]
  void *v45; // [rsp+108h] [rbp-150h] BYREF
  __int64 v46; // [rsp+110h] [rbp-148h]
  _QWORD *v47; // [rsp+118h] [rbp-140h]
  __int64 v48; // [rsp+120h] [rbp-138h]
  __int64 v49; // [rsp+128h] [rbp-130h]
  __int128 v50; // [rsp+140h] [rbp-118h] BYREF
  __int128 v51; // [rsp+150h] [rbp-108h]
  __int64 v52; // [rsp+160h] [rbp-F8h]
  __int64 v53; // [rsp+170h] [rbp-E8h]
  __int64 v54; // [rsp+178h] [rbp-E0h]
  _QWORD v55[2]; // [rsp+180h] [rbp-D8h] BYREF
  __int128 v56; // [rsp+190h] [rbp-C8h]
  __int64 v57; // [rsp+1A0h] [rbp-B8h]
  __int64 v58; // [rsp+1A8h] [rbp-B0h]
  _BYTE *v59; // [rsp+1B0h] [rbp-A8h]
  __int64 v60; // [rsp+1B8h] [rbp-A0h]
  _QWORD v61[4]; // [rsp+1C0h] [rbp-98h] BYREF
  _OWORD v62[2]; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v63; // [rsp+200h] [rbp-58h]
  __int128 v64; // [rsp+210h] [rbp-48h] BYREF
  __int64 v65; // [rsp+220h] [rbp-38h]

  v6 = a3;
  v7 = a2;
  v53 = *a4;
  if ( v53 != 0x8000000000000000LL )
  {
    v40 = (void *)a4[2];
    v39 = *(_OWORD *)a4;
    v32 = 0;
    switch ( *(_BYTE *)(a5 + 242) )
    {
      case 0:
        goto LABEL_21;
      case 1:
        goto LABEL_10;
      case 2:
        goto LABEL_18;
      case 3:
        goto LABEL_19;
    }
  }
  v8 = (const void *)*((_QWORD *)a2 + 1);
  v9 = *((_QWORD *)a2 + 2);
  if ( a6 )
  {
    core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)a2 + 1), 1LL, 1LL, *((_QWORD *)a2 + 2));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v41, v9, 0LL);
    v10 = *((_QWORD *)&v41 + 1);
    if ( !(_QWORD)v41 )
    {
      v11 = dest[0];
      core::intrinsics::copy_nonoverlapping::precondition_check(v8, dest[0], 1LL, 1LL, v9);
      memcpy(v11, v8, v9);
      *(_QWORD *)&v39 = v10;
      *((_QWORD *)&v39 + 1) = v11;
      v40 = (void *)v9;
      v32 = 0;
      v6 = a3;
      v7 = a2;
      switch ( *(_BYTE *)(a5 + 242) )
      {
        case 0:
          goto LABEL_21;
        case 1:
          goto LABEL_10;
        case 2:
          goto LABEL_18;
        case 3:
          goto LABEL_19;
      }
    }
    alloc::raw_vec::handle_error(*((_QWORD *)&v41 + 1), dest[0]);
  }
  if ( !v8 || v9 < 0 )
    goto LABEL_74;
  v12 = (void *)std::path::Path::file_name(*((_QWORD *)a2 + 1), *((_QWORD *)a2 + 2));
  if ( !v12 )
  {
    if ( !*((_QWORD *)a2 + 1) || *((__int64 *)a2 + 2) < 0 )
      goto LABEL_74;
    std::path::Path::components(&v41);
    <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v45, &v41);
    if ( (_BYTE)v45 == 10 )
LABEL_77:
      core::option::unwrap_failed(&anon_11f7478bcb2f9b4befb7b1d3f51baba0_291_llvm_2775220154043362954);
    v19 = (unsigned __int8)((_BYTE)v45 - 6);
    v13 = 0LL;
    if ( (unsigned __int8)v19 < 4u )
      v13 = v19 + 1;
    switch ( v13 )
    {
      case 0LL:
        v20 = 40LL;
        v21 = 48LL;
        goto LABEL_69;
      case 1LL:
        v12 = &anon_3be94dd0f3faa6e1be050a424a444ce8_2_llvm_3153282441382346823;
        break;
      case 2LL:
        v12 = &anon_3be94dd0f3faa6e1be050a424a444ce8_3_llvm_3153282441382346823;
        v13 = 1LL;
        break;
      case 3LL:
        v12 = &anon_3be94dd0f3faa6e1be050a424a444ce8_4_llvm_3153282441382346823;
        v13 = 2LL;
        break;
      case 4LL:
        v20 = 8LL;
        v21 = 16LL;
LABEL_69:
        v12 = *(void **)((char *)&v45 + v20);
        if ( !v12 )
          goto LABEL_77;
        v13 = *(__int64 *)((char *)&v45 + v21);
        break;
    }
  }
  std::sys::os_str::bytes::Slice::to_owned(&v41, v12, v13);
  v40 = dest[0];
  v39 = v41;
  v32 = 0;
  switch ( *(_BYTE *)(a5 + 242) )
  {
    case 0:
      goto LABEL_21;
    case 1:
LABEL_10:
      if ( !a6 )
        goto LABEL_16;
      if ( !*((_QWORD *)v7 + 1) || *((__int64 *)v7 + 2) < 0 )
        goto LABEL_74;
      std::sys::pal::unix::fs::stat(&v41);
      if ( (_QWORD)v41 == 2LL )
      {
        std::io::error::repr_bitpacked::decode_repr(&v41, *((_QWORD *)&v41 + 1));
        if ( (unsigned __int8)v41 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v41 + 8);
LABEL_16:
        v32 = 0;
        if ( !*(_QWORD *)v6 )
        {
LABEL_17:
          *(_QWORD *)&v50 = 0LL;
          v14 = 2;
LABEL_39:
          v18 = a5;
          goto LABEL_53;
        }
      }
      else
      {
        v15 = (v44 & 0xF000) == 0x4000;
LABEL_20:
        v32 = v15;
LABEL_21:
        if ( !*(_QWORD *)v6 )
          goto LABEL_17;
      }
      v16 = *(_OWORD *)(v6 + 24);
      v62[0] = *(_OWORD *)(v6 + 8);
      v63 = *(_QWORD *)(v6 + 40);
      v62[1] = v16;
      if ( *(_QWORD *)&v62[0] )
      {
        v52 = *(_QWORD *)(v6 + 40);
        v17 = *(_OWORD *)(v6 + 8);
        v51 = *(_OWORD *)(v6 + 24);
        v50 = v17;
      }
      else
      {
        *(_QWORD *)&v50 = 0LL;
        core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(v62);
      }
      if ( !(_QWORD)v50 )
      {
        v14 = 2;
        goto LABEL_39;
      }
      v18 = a5;
      if ( !*((_QWORD *)v7 + 1) || *((__int64 *)v7 + 2) < 0 )
        goto LABEL_74;
      if ( !v32 )
        goto LABEL_32;
      std::sys::pal::unix::fs::stat(&v41);
      if ( (_QWORD)v41 != 2LL )
      {
        v35 = v44;
        v14 = 1;
        goto LABEL_52;
      }
      std::io::error::repr_bitpacked::decode_repr(&v41, *((_QWORD *)&v41 + 1));
      if ( (unsigned __int8)v41 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v41 + 8);
LABEL_32:
      std::fs::DirEntry::file_type(&v45, &v50);
      if ( !(_DWORD)v45 )
      {
        v14 = 1;
        v35 = HIDWORD(v45);
        goto LABEL_52;
      }
      std::sys::pal::unix::fs::lstat(&v41);
      if ( (_QWORD)v41 != 2LL )
      {
        v35 = v44;
        v14 = 1;
        if ( !(_DWORD)v45 )
          goto LABEL_52;
        goto LABEL_50;
      }
      std::io::error::repr_bitpacked::decode_repr(&v41, *((_QWORD *)&v41 + 1));
      if ( (unsigned __int8)v41 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v41 + 8);
      v14 = 2;
      if ( (_DWORD)v45 )
      {
LABEL_50:
        std::io::error::repr_bitpacked::decode_repr(&v41, v46);
        if ( (unsigned __int8)v41 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v41 + 8);
      }
LABEL_52:
      v7 = a2;
LABEL_53:
      if ( (*(_BYTE *)(v18 + 235) & 1) == 0 )
      {
        v22 = (_BYTE *)(&dword_0 + 1);
        v23 = 0LL;
        v24 = 0LL;
        goto LABEL_62;
      }
      v25 = *((_QWORD *)v7 + 1);
      if ( !v25 || (v26 = *((_QWORD *)v7 + 2), v26 < 0) )
LABEL_74:
        core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v41, 1LL, 0LL);
      v23 = *((_QWORD *)&v41 + 1);
      if ( (_QWORD)v41 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v41 + 1), dest[0]);
      v22 = dest[0];
      core::intrinsics::copy_nonoverlapping::precondition_check(asc_3ABC0, dest[0], 1LL, 1LL, 1LL);
      *v22 = 63;
      v58 = v23;
      v59 = v22;
      v60 = 1LL;
      if ( v32 )
      {
        std::sys::pal::unix::fs::stat(&v41);
        if ( (_QWORD)v41 == 2LL )
        {
          v34 = *((_QWORD *)&v41 + 1);
          v54 = *((_QWORD *)&v41 + 1);
          std::path::Path::to_path_buf(&v64, v25, v26);
          *((_QWORD *)&v41 + 1) = v34;
          *(_OWORD *)dest = v64;
          v43 = v65;
          LOWORD(v41) = 2;
          _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
          v27 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v28 = *(_QWORD *)(v27 + 8);
          v29 = *(_QWORD *)(v27 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v28, 1LL, 1LL, v29);
          v55[0] = v28;
          v55[1] = v29;
          v61[0] = v55;
          v61[1] = <&T as core::fmt::Display>::fmt;
          v61[2] = &v41;
          v61[3] = <uu_ls::LsError as core::fmt::Display>::fmt;
          v45 = &unk_1FF1D8;
          v46 = 3LL;
          v49 = 0LL;
          v47 = v61;
          v48 = 2LL;
          std::io::stdio::_eprint(&v45);
          core::ptr::drop_in_place<uu_ls::LsError>(&v41);
        }
      }
      v24 = 1LL;
LABEL_62:
      v57 = *((_QWORD *)a2 + 2);
      v56 = *a2;
      *(_QWORD *)(a1 + 72) = 3LL;
      *(_DWORD *)(a1 + 248) = v14;
      *(_DWORD *)(a1 + 252) = v35;
      *(_QWORD *)(a1 + 288) = v52;
      v30 = v50;
      *(_OWORD *)(a1 + 272) = v51;
      *(_OWORD *)(a1 + 256) = v30;
      *(_OWORD *)a1 = v39;
      *(_QWORD *)(a1 + 16) = v40;
      *(_OWORD *)(a1 + 24) = v56;
      *(_QWORD *)(a1 + 40) = v57;
      *(_BYTE *)(a1 + 296) = v32;
      *(_QWORD *)(a1 + 48) = v23;
      *(_QWORD *)(a1 + 56) = v22;
      *(_QWORD *)(a1 + 64) = v24;
      *(_BYTE *)(a1 + 297) = a6;
      if ( v53 == 0x8000000000000000LL && *a4 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v41, a4);
        if ( *((_QWORD *)&v41 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(a4 + 2, v41, *((_QWORD *)&v41 + 1), dest[0]);
      }
      return a1;
    case 2:
LABEL_18:
      v15 = a6;
      goto LABEL_20;
    case 3:
LABEL_19:
      v15 = 1;
      goto LABEL_20;
  }
}
