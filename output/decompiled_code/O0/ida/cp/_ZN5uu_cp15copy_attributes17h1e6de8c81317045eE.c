__int64 __fastcall uu_cp::copy_attributes(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t a5, _BYTE *a6)
{
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // r15
  int v13; // ebp
  unsigned int v14; // r14d
  int v15; // r15d
  __int64 v16; // rbp
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rax
  __int64 v21; // r12
  size_t v22; // r15
  const void *v23; // r12
  __int64 v24; // r13
  void *v25; // rbp
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v36; // [rsp+0h] [rbp-438h]
  __int64 v37; // [rsp+8h] [rbp-430h]
  __int64 v42; // [rsp+30h] [rbp-408h]
  void *v43[2]; // [rsp+40h] [rbp-3F8h] BYREF
  _QWORD v44[2]; // [rsp+50h] [rbp-3E8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-3D8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-3D0h]
  __int64 v47; // [rsp+70h] [rbp-3C8h]
  __int64 v48; // [rsp+78h] [rbp-3C0h]
  __int64 v49; // [rsp+80h] [rbp-3B8h]
  __int64 v50; // [rsp+88h] [rbp-3B0h]
  __int128 v51; // [rsp+90h] [rbp-3A8h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-398h]
  __int128 v53; // [rsp+B0h] [rbp-388h]
  __int128 v54; // [rsp+C0h] [rbp-378h]
  __int128 v55; // [rsp+D0h] [rbp-368h] BYREF
  __int128 v56; // [rsp+E0h] [rbp-358h]
  _OWORD src[9]; // [rsp+F0h] [rbp-348h] BYREF
  __int64 v58; // [rsp+180h] [rbp-2B8h]
  _BYTE v59[64]; // [rsp+188h] [rbp-2B0h] BYREF
  _BYTE v60[176]; // [rsp+1C8h] [rbp-270h] BYREF
  __int64 v61; // [rsp+278h] [rbp-1C0h] BYREF
  __int64 v62; // [rsp+280h] [rbp-1B8h]
  __int64 v63; // [rsp+288h] [rbp-1B0h]
  __int64 v64; // [rsp+298h] [rbp-1A0h] BYREF
  __int64 v65; // [rsp+2A0h] [rbp-198h]
  __int64 v66; // [rsp+2A8h] [rbp-190h]
  __int64 v67; // [rsp+2B0h] [rbp-188h] BYREF
  __int64 v68; // [rsp+2B8h] [rbp-180h]
  __int64 v69; // [rsp+2C0h] [rbp-178h]
  __int128 v70; // [rsp+2C8h] [rbp-170h] BYREF
  size_t n; // [rsp+2D8h] [rbp-160h]
  _QWORD v72[4]; // [rsp+2E0h] [rbp-158h] BYREF
  _QWORD v73[3]; // [rsp+300h] [rbp-138h] BYREF
  char v74; // [rsp+318h] [rbp-120h]
  _QWORD v75[3]; // [rsp+320h] [rbp-118h] BYREF
  char v76; // [rsp+338h] [rbp-100h]
  __int128 v77; // [rsp+340h] [rbp-F8h]
  __int128 v78; // [rsp+350h] [rbp-E8h]
  __int128 v79; // [rsp+360h] [rbp-D8h]
  __int64 v80; // [rsp+370h] [rbp-C8h]
  __int128 v81; // [rsp+380h] [rbp-B8h]
  __int128 v82; // [rsp+390h] [rbp-A8h]
  __int128 v83; // [rsp+3A0h] [rbp-98h]
  __int64 v84; // [rsp+3B0h] [rbp-88h]
  __int128 v85; // [rsp+3C0h] [rbp-78h]
  __int128 v86; // [rsp+3D8h] [rbp-60h]
  __int128 v87; // [rsp+3E8h] [rbp-50h]
  __int128 v88; // [rsp+3F8h] [rbp-40h]

  v6 = a3;
  v73[0] = 1LL;
  v73[1] = a2;
  v73[2] = a3;
  v74 = 1;
  v75[0] = 1LL;
  v75[1] = a4;
  v75[2] = a5;
  v76 = 1;
  v72[0] = v73;
  v72[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v72[2] = v75;
  v72[3] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v55 = &anon_edd0bd9b3106a806526586a6c9f9e2d7_208_llvm_17885426612345091974;
  *((_QWORD *)&v55 + 1) = 2LL;
  *(_QWORD *)&v56 = v72;
  *((_QWORD *)&v56 + 1) = 2LL;
  *(_QWORD *)&src[0] = 0LL;
  alloc::fmt::format::format_inner(&v64, &v55);
  v7 = v65;
  if ( !v65 || (v8 = v66, v66 < 0) )
    core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571, 162LL);
  v37 = v64;
  std::sys::pal::unix::fs::lstat(&v55);
  if ( (_QWORD)v55 == 2LL )
  {
    *(_QWORD *)v60 = v7;
    *(_QWORD *)&v60[8] = v8;
    *(_QWORD *)&v60[16] = *((_QWORD *)&v55 + 1);
    <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(&v55, v60);
    v9 = v55;
    v10 = v56;
    v11 = src[0];
    *(_OWORD *)(a1 + 48) = src[1];
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
    goto LABEL_58;
  }
  v49 = *((_QWORD *)&src[4] + 1);
  v12 = *((_QWORD *)&src[5] + 1);
  v50 = *(_QWORD *)&src[5];
  v13 = src[6];
  v42 = v6;
  if ( (*a6 & 1) != 0 )
  {
    v14 = HIDWORD(src[1]);
    v58 = LODWORD(src[2]);
    std::sys::pal::unix::fs::lstat(&v55);
    v48 = v12;
    v15 = v13;
    v16 = *((_QWORD *)&v55 + 1);
    if ( (_QWORD)v55 == 2LL )
    {
      *(_QWORD *)&v55 = v7;
      *((_QWORD *)&v55 + 1) = v8;
      *(_QWORD *)&v56 = v16;
      <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(v59, &v55);
      v6 = v42;
      v13 = v15;
      v12 = v48;
      if ( (a6[1] & 1) != 0 )
      {
        if ( *(_QWORD *)v59 != 13LL )
        {
          v80 = *(_QWORD *)&v59[56];
          v79 = *(_OWORD *)&v59[40];
          v78 = *(_OWORD *)&v59[24];
          v77 = *(_OWORD *)&v59[8];
          *(_QWORD *)a1 = *(_QWORD *)v59;
          v18 = v78;
          v19 = v79;
          *(_OWORD *)(a1 + 8) = v77;
          *(_OWORD *)(a1 + 24) = v18;
          *(_OWORD *)(a1 + 40) = v19;
          *(_QWORD *)(a1 + 56) = v80;
          goto LABEL_58;
        }
      }
      else if ( *(_QWORD *)v59 != 13LL )
      {
        v54 = *(_OWORD *)&v59[48];
        v53 = *(_OWORD *)&v59[32];
        v52 = *(_OWORD *)&v59[16];
        v51 = *(_OWORD *)v59;
        uu_cp::show_error_if_needed(&v51);
        core::ptr::drop_in_place<uu_cp::Error>(&v51);
      }
    }
    else
    {
      v85 = v56;
      memcpy(&v60[32], src, 0x90uLL);
      *(_OWORD *)v60 = v55;
      *(_OWORD *)&v60[16] = v56;
      uucore::features::perms::wrap_chown(&v61, a4, a5, v60, 1LL, v14, 1LL, v58, 0LL, 0LL, 0LL);
      v6 = v42;
      v13 = v15;
      v12 = v48;
      if ( v62 )
        _rust_dealloc(v63, v62, 1LL);
      *(_QWORD *)v59 = 13LL;
    }
  }
  if ( (a6[2] & 1) != 0 && !(unsigned __int8)std::path::Path::is_symlink(a4, a5) )
  {
    v17 = std::sys::pal::unix::fs::set_perm(a4, a5);
    if ( v17 )
    {
      *(_QWORD *)&v51 = v7;
      *((_QWORD *)&v51 + 1) = v8;
      *(_QWORD *)&v52 = v17;
      <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(v60, &v51);
      if ( (a6[3] & 1) != 0 )
      {
        if ( *(_QWORD *)v60 != 13LL )
        {
          v84 = *(_QWORD *)&v60[56];
          v83 = *(_OWORD *)&v60[40];
          v82 = *(_OWORD *)&v60[24];
          v81 = *(_OWORD *)&v60[8];
          *(_QWORD *)a1 = *(_QWORD *)v60;
          v31 = v82;
          v32 = v83;
          *(_OWORD *)(a1 + 8) = v81;
          *(_OWORD *)(a1 + 24) = v31;
          *(_OWORD *)(a1 + 40) = v32;
          *(_QWORD *)(a1 + 56) = v84;
          goto LABEL_58;
        }
      }
      else if ( *(_QWORD *)v60 != 13LL )
      {
        src[1] = *(_OWORD *)&v60[48];
        src[0] = *(_OWORD *)&v60[32];
        v56 = *(_OWORD *)&v60[16];
        v55 = *(_OWORD *)v60;
        uu_cp::show_error_if_needed(&v55);
        core::ptr::drop_in_place<uu_cp::Error>(&v55);
      }
    }
  }
  if ( (a6[4] & 1) != 0 )
  {
    if ( (unsigned __int8)std::path::Path::is_symlink(a4, a5) )
    {
      *((_QWORD *)&v51 + 1) = v49;
      LODWORD(v52) = v50;
      *(_QWORD *)&v51 = 1LL;
      *(_QWORD *)&v60[8] = v12;
      *(_DWORD *)&v60[16] = v13;
      *(_QWORD *)v60 = 1LL;
      v20 = filetime::imp::linux::set_times(a4, a5, &v51, v60, 1LL);
    }
    else
    {
      *((_QWORD *)&v51 + 1) = v49;
      LODWORD(v52) = v50;
      *(_QWORD *)&v51 = 1LL;
      *(_QWORD *)&v60[8] = v12;
      *(_DWORD *)&v60[16] = v13;
      *(_QWORD *)v60 = 1LL;
      v20 = filetime::imp::linux::set_times(a4, a5, &v51, v60, 0LL);
    }
    if ( v20 )
    {
      if ( (a6[5] & 1) != 0 )
      {
        *(_QWORD *)a1 = 2LL;
        *(_QWORD *)(a1 + 8) = v20;
        goto LABEL_58;
      }
      *(_QWORD *)&v55 = 2LL;
      *((_QWORD *)&v55 + 1) = v20;
      uu_cp::show_error_if_needed(&v55);
      core::ptr::drop_in_place<uu_cp::Error>(&v55);
    }
  }
  if ( (a6[10] & 1) == 0 )
    goto LABEL_57;
  xattr::sys::linux_macos::list_path(&v67, a2, v6, 0LL);
  v36 = v7;
  v21 = v68;
  if ( v67 )
  {
    v45 = v67;
    v46 = v68;
    v47 = v69;
    while ( 1 )
    {
      <xattr::sys::linux_macos::XAttrs as core::iter::traits::iterator::Iterator>::next(&v70, &v45);
      if ( (_QWORD)v70 == 0x8000000000000000LL )
        break;
      *(_OWORD *)v43 = v70;
      v22 = n;
      v44[0] = n;
      v23 = (const void *)*((_QWORD *)&v70 + 1);
      core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v70 + 1), 1LL, 1LL, n);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v60, v22, 0LL);
      v24 = *(_QWORD *)&v60[8];
      if ( *(_QWORD *)v60 )
        alloc::raw_vec::handle_error(*(_QWORD *)&v60[8], *(_QWORD *)&v60[16]);
      v25 = *(void **)&v60[16];
      core::intrinsics::copy_nonoverlapping::precondition_check(v23, *(_QWORD *)&v60[16], 1LL, 1LL, v22);
      memcpy(v25, v23, v22);
      *(_QWORD *)v59 = v24;
      *(_QWORD *)&v59[8] = v25;
      *(_QWORD *)&v59[16] = v22;
      xattr::get(&v61, a2, v42, v59);
      v26 = v61;
      v21 = v62;
      if ( v61 == 0x8000000000000001LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(v60, v43);
        if ( *(_QWORD *)&v60[8] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            v44,
            *(_QWORD *)v60,
            *(_QWORD *)&v60[8],
            *(_QWORD *)&v60[16]);
        goto LABEL_53;
      }
      if ( v61 == 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(v60, v43);
        if ( *(_QWORD *)&v60[8] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            v44,
            *(_QWORD *)v60,
            *(_QWORD *)&v60[8],
            *(_QWORD *)&v60[16]);
      }
      else
      {
        *(_QWORD *)&v52 = v44[0];
        v51 = *(_OWORD *)v43;
        if ( !v62 || v63 < 0 )
          core::panicking::panic_nounwind(anon_450ec42599d131561eaff9b0756cd647_14_llvm_2107969801384479147, 162LL);
        v27 = <core::ops::range::RangeFull as core::slice::index::SliceIndex<[T]>>::index(v62, v63, &off_182258);
        v29 = xattr::set(a4, a5, &v51, v27, v28);
        if ( v29 )
        {
          if ( v26 )
          {
            v30 = v21;
            v21 = v29;
            _rust_dealloc(v30, v26, 1LL);
          }
          else
          {
            v21 = v29;
          }
LABEL_53:
          if ( v46 )
            _rust_dealloc(v45, v46, 1LL);
          goto LABEL_55;
        }
        if ( v26 )
          _rust_dealloc(v21, v26, 1LL);
      }
    }
    if ( v46 )
      _rust_dealloc(v45, v46, 1LL);
    v7 = v36;
    goto LABEL_57;
  }
LABEL_55:
  if ( (a6[11] & 1) == 0 )
  {
    *(_QWORD *)&v55 = 2LL;
    *((_QWORD *)&v55 + 1) = v21;
    v56 = v86;
    src[0] = v87;
    src[1] = v88;
    uu_cp::show_error_if_needed(&v55);
    v7 = v36;
    core::ptr::drop_in_place<uu_cp::Error>(&v55);
LABEL_57:
    *(_QWORD *)a1 = 13LL;
    goto LABEL_58;
  }
  *(_QWORD *)a1 = 2LL;
  *(_QWORD *)(a1 + 8) = v21;
  v34 = v87;
  v35 = v88;
  *(_OWORD *)(a1 + 16) = v86;
  *(_OWORD *)(a1 + 32) = v34;
  *(_OWORD *)(a1 + 48) = v35;
  v7 = v36;
LABEL_58:
  if ( v37 )
    _rust_dealloc(v7, v37, 1LL);
  return a1;
}
