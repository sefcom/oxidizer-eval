        __int64 a11)
{
  __int64 v15; // rax
  size_t v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  char v19; // bp
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  int v28; // r15d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbp
  char *v32; // r13
  __int64 v33; // r12
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int16 v37; // [rsp+Ah] [rbp-2AEh] BYREF
  char v38; // [rsp+Ch] [rbp-2ACh]
  __int16 v39; // [rsp+Eh] [rbp-2AAh] BYREF
  _DWORD v40[2]; // [rsp+10h] [rbp-2A8h] BYREF
  __int64 v41; // [rsp+18h] [rbp-2A0h]
  __int64 v42; // [rsp+20h] [rbp-298h] BYREF
  int fd[2]; // [rsp+28h] [rbp-290h]
  __int128 v44; // [rsp+30h] [rbp-288h]
  __int128 v45; // [rsp+40h] [rbp-278h]
  __int128 v46; // [rsp+50h] [rbp-268h]
  _QWORD v47[4]; // [rsp+60h] [rbp-258h] BYREF
  char *path[2]; // [rsp+80h] [rbp-238h] BYREF
  __int128 v49; // [rsp+90h] [rbp-228h]
  _QWORD v50[2]; // [rsp+A0h] [rbp-218h] BYREF
  __int64 dest; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-200h] BYREF
  _QWORD *v53; // [rsp+C0h] [rbp-1F8h]
  __int64 v54; // [rsp+C8h] [rbp-1F0h]
  __int64 *v55; // [rsp+D0h] [rbp-1E8h]
  __int64 (__fastcall **v56)(); // [rsp+D8h] [rbp-1E0h]
  __int64 v57; // [rsp+E0h] [rbp-1D8h]
  char v58; // [rsp+E8h] [rbp-1D0h]
  _OWORD v59[2]; // [rsp+160h] [rbp-158h] BYREF
  _QWORD v60[3]; // [rsp+180h] [rbp-138h] BYREF
  char v61; // [rsp+198h] [rbp-120h]
  __int128 v62; // [rsp+1A0h] [rbp-118h]
  __int128 v63; // [rsp+1B0h] [rbp-108h]
  __int128 v64; // [rsp+1C0h] [rbp-F8h]
  __int128 v65; // [rsp+1D8h] [rbp-E0h] BYREF
  __int64 v66; // [rsp+1E8h] [rbp-D0h]
  __int64 v67; // [rsp+1F0h] [rbp-C8h] BYREF
  __int16 v68; // [rsp+1F8h] [rbp-C0h]
  char v69; // [rsp+1FAh] [rbp-BEh]
  __int128 v70; // [rsp+1FBh] [rbp-BDh]
  __int128 v71; // [rsp+20Bh] [rbp-ADh]
  _BYTE v72[21]; // [rsp+21Bh] [rbp-9Dh]
  __int64 v73; // [rsp+230h] [rbp-88h] BYREF
  __int128 v74; // [rsp+238h] [rbp-80h]
  __int64 v75; // [rsp+248h] [rbp-70h] BYREF
  __int128 v76; // [rsp+250h] [rbp-68h]
  __int128 v77; // [rsp+260h] [rbp-58h]
  __int128 v78; // [rsp+270h] [rbp-48h]
  __int64 v79; // [rsp+280h] [rbp-38h]

  if ( (*(_BYTE *)(a6 + 68) & 1) == 0 )
    goto LABEL_10;
  v15 = std::path::Path::parent(a4, a5);
  if ( !v15 )
  {
    v15 = (__int64)a4;
    v16 = a5;
  }
  LODWORD(dest) = 511;
  BYTE4(dest) = 1;
  v17 = std::fs::DirBuilder::_create(&dest, v15, v16);
  if ( !v17 )
  {
LABEL_10:
    if ( a5 )
    {
      if ( a4 )
      {
        v18 = (unsigned __int8)a4[a5 - 1];
        if ( (v18 == 47 || v18 == 92) && !(unsigned __int8)std::path::Path::is_dir(a4, a5) )
        {
          std::path::Path::to_path_buf(&v65, a4);
          *(_QWORD *)a1 = 12LL;
          *(_OWORD *)(a1 + 8) = v65;
          *(_QWORD *)(a1 + 24) = v66;
          return a1;
        }
      }
    }
    if ( a3 == 9 && !(*(_QWORD *)a2 ^ 0x6C756E2F7665642FLL | *(unsigned __int8 *)(a2 + 8) ^ 0x6CLL) )
    {
      dest = 0x1B600000000LL;
      LODWORD(v52) = 16777472;
      WORD2(v52) = 1;
      std::fs::OpenOptions::_open(v40, &dest, a4, a5);
      v47[0] = a4;
      v47[1] = a5;
      v42 = 0LL;
      *(_QWORD *)fd = 1LL;
      *(_QWORD *)&v44 = 0LL;
      v57 = 32LL;
      v58 = 3;
      dest = 0LL;
      v53 = 0LL;
      v55 = &v42;
      v56 = &anon_66827f6b5e96d838f084441030a41a9e_11_llvm_16861867776640412384;
      if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(v47, &dest) )
        core::result::unwrap_failed(
          anon_66827f6b5e96d838f084441030a41a9e_12_llvm_16861867776640412384,
          55LL,
          v59,
          &anon_30ecf5788dc16ea493c1f299142c4ef1_19_llvm_10347183305587337279,
          &anon_66827f6b5e96d838f084441030a41a9e_14_llvm_16861867776640412384);
      v22 = v42;
      v23 = *(_QWORD *)fd;
      if ( v40[0] )
      {
        if ( v42 != 0x8000000000000000LL )
        {
          v24 = v44;
          v25 = v41;
          *(_QWORD *)a1 = 3LL;
          *(_QWORD *)(a1 + 8) = v22;
          *(_QWORD *)(a1 + 16) = v23;
          *(_QWORD *)(a1 + 24) = v24;
          *(_QWORD *)(a1 + 32) = v25;
          return a1;
        }
      }
      else
      {
        v28 = v40[1];
        if ( v42 )
          _rust_dealloc(*(_QWORD *)fd, v42, 1LL);
        LODWORD(v23) = v28;
      }
      std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v23);
      close(v23);
      *(_QWORD *)a1 = 13LL;
      return a1;
    }
    if ( !a10 || (*(_BYTE *)(a6 + 70) & 1) == 0 || (*(_BYTE *)(a6 + 63) & 1) != 0 )
    {
      if ( a9 )
      {
        uu_cp::copy_link(&v75, a2, a3, a4, a5, a11);
        if ( v75 != 13 )
        {
          *(_QWORD *)a1 = v75;
          v20 = v77;
          v21 = v78;
          *(_OWORD *)(a1 + 8) = v76;
          *(_OWORD *)(a1 + 24) = v20;
          *(_OWORD *)(a1 + 40) = v21;
          *(_QWORD *)(a1 + 56) = v79;
          return a1;
        }
      }
      else
      {
        uu_cp::platform::linux::copy_on_write(
          &v67,
          a2,
          a3,
          a4,
          a5,
          *(unsigned __int8 *)(a6 + 75),
          *(unsigned __int8 *)(a6 + 74),
          a7,
          a8,
          a10);
        if ( v67 != 13 )
        {
          *(_QWORD *)a1 = v67;
          *(_WORD *)(a1 + 8) = v68;
          *(_BYTE *)(a1 + 10) = v69;
          v26 = v71;
          v27 = *(_OWORD *)v72;
          *(_OWORD *)(a1 + 11) = v70;
          *(_OWORD *)(a1 + 27) = v26;
          *(_OWORD *)(a1 + 43) = v27;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)&v72[13];
          return a1;
        }
        v38 = v69;
        v37 = v68;
        if ( (*(_BYTE *)(a6 + 62) & 1) == 0 && (*(_BYTE *)(a6 + 71) & 1) != 0 )
        {
          uu_cp::show_debug((char *)&v37);
          *(_QWORD *)a1 = 13LL;
          return a1;
        }
      }
LABEL_43:
      *(_QWORD *)a1 = 13LL;
      return a1;
    }
    v19 = *(_BYTE *)(a6 + 71);
    v39 = *(_WORD *)(a6 + 60);
    std::sys::pal::unix::fs::stat(&dest);
    if ( dest == 2 )
    {
      std::io::error::repr_bitpacked::decode_repr(&dest, v52);
      if ( (unsigned __int8)dest >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v52);
    }
    else
    {
      uu_cp::OverwriteMode::verify((__int64)&v42, &v39, (__int64)a4, a5, v19 & 1);
      v29 = v42;
      if ( v42 != 13 )
      {
        v31 = *(_QWORD *)fd;
        v62 = v44;
        v63 = v45;
        v64 = v46;
        goto LABEL_48;
      }
      v30 = std::sys::pal::unix::fs::unlink(a4, a5);
      if ( v30 )
      {
        v31 = v30;
        v29 = 2LL;
        goto LABEL_48;
      }
    }
    <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(path, a4, a5);
    if ( path[0] != (char *)0x8000000000000000LL )
    {
      v59[1] = v49;
      v59[0] = *(_OWORD *)path;
      core::result::unwrap_failed(aCalledResultUn_0, 43LL, v59, &off_181B90, &off_182478);
    }
    v32 = path[1];
    v33 = v49;
    v47[2] = path[1];
    v47[3] = v49;
    if ( mkfifo(path[1], 0x1B6u) != -1 )
    {
      if ( v33 )
      {
        _rust_dealloc(v32, v33, 1LL);
        goto LABEL_43;
      }
LABEL_51:
      core::panicking::panic_nounwind(anon_a22da79b43619ae942507c317967e4bd_26_llvm_9743543941596806070, 101LL);
    }
    v60[0] = 1LL;
    v60[1] = a4;
    v60[2] = a5;
    v61 = 1;
    v50[0] = v60;
    v50[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    dest = (__int64)&off_182490;
    v52 = 2LL;
    v53 = v50;
    v54 = 1LL;
    v55 = 0LL;
    alloc::fmt::format::format_inner(&v73, &dest);
    v31 = v73;
    v62 = v74;
    if ( !v33 )
      goto LABEL_51;
    _rust_dealloc(v32, v33, 1LL);
    v29 = 4LL;
LABEL_48:
    *(_QWORD *)a1 = v29;
    *(_QWORD *)(a1 + 8) = v31;
    v35 = v63;
    v36 = v64;
    *(_OWORD *)(a1 + 16) = v62;
    *(_OWORD *)(a1 + 32) = v35;
    *(_OWORD *)(a1 + 48) = v36;
    return a1;
  }
  *(_QWORD *)a1 = 2LL;
  *(_QWORD *)(a1 + 8) = v17;
  return a1;
}
