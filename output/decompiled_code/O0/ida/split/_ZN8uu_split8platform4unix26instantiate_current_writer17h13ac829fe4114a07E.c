        char a5)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v12; // r12
  _DWORD *v13; // r13
  __int64 v14; // r12
  _DWORD *v15; // r13
  __int64 v16; // r15
  __int64 v17; // r14
  int v18; // ebp
  __int64 v19; // r14
  _OWORD *v20; // rax
  _DWORD *v21; // r14
  __int128 v22; // xmm0
  __int64 (__fastcall **v23)(); // r15
  __int64 v24; // rdi
  char *v25; // rax
  int v26; // ebp
  _DWORD *v27; // rax
  _QWORD *v28; // rax
  __int128 v30; // [rsp+0h] [rbp-278h] BYREF
  __int128 v31; // [rsp+10h] [rbp-268h]
  __int128 v32; // [rsp+20h] [rbp-258h] BYREF
  _DWORD *v33; // [rsp+30h] [rbp-248h]
  __int64 v34; // [rsp+40h] [rbp-238h] BYREF
  int v35; // [rsp+48h] [rbp-230h]
  __int16 v36; // [rsp+4Ch] [rbp-22Ch]
  __int128 v37; // [rsp+50h] [rbp-228h] BYREF
  __int128 v38; // [rsp+60h] [rbp-218h]
  __int64 v39; // [rsp+70h] [rbp-208h]
  _DWORD *v40; // [rsp+78h] [rbp-200h]
  __int64 v41; // [rsp+80h] [rbp-1F8h]
  __int64 v42; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v43; // [rsp+98h] [rbp-1E0h]
  __int128 v44; // [rsp+A0h] [rbp-1D8h]
  __int64 v45; // [rsp+B0h] [rbp-1C8h] BYREF
  int v46; // [rsp+B8h] [rbp-1C0h]
  __int16 v47; // [rsp+BCh] [rbp-1BCh]
  _QWORD *v48; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 v49; // [rsp+C8h] [rbp-1B0h]
  __int64 v50; // [rsp+D8h] [rbp-1A0h]
  __int128 v51; // [rsp+E0h] [rbp-198h]
  __int64 v52; // [rsp+F0h] [rbp-188h]
  _QWORD v53[2]; // [rsp+F8h] [rbp-180h] BYREF
  int v54; // [rsp+108h] [rbp-170h] BYREF
  char v55; // [rsp+10Ch] [rbp-16Ch] BYREF
  __int64 v56; // [rsp+110h] [rbp-168h]
  int v57; // [rsp+118h] [rbp-160h] BYREF
  char v58; // [rsp+11Ch] [rbp-15Ch] BYREF
  __int64 v59; // [rsp+120h] [rbp-158h]
  _BYTE v60[28]; // [rsp+128h] [rbp-150h]
  int v61; // [rsp+144h] [rbp-134h]
  __int64 v62; // [rsp+148h] [rbp-130h]
  __int128 v63; // [rsp+150h] [rbp-128h]
  __int128 dest; // [rsp+160h] [rbp-118h] BYREF
  _QWORD *v65; // [rsp+170h] [rbp-108h]
  __int64 v66; // [rsp+178h] [rbp-100h]
  __int64 v67; // [rsp+180h] [rbp-F8h]
  __int128 v68; // [rsp+230h] [rbp-48h]

  v53[0] = a3;
  v53[1] = a4;
  if ( *a2 != 0x8000000000000000LL )
  {
    v8 = a2[1];
    if ( !v8 || (v9 = a2[2], v9 < 0) )
      core::panicking::panic_nounwind(anon_a1369f34f0af36e085eaa2e09186d83a_17_llvm_8562216672536282045, 162LL);
    std::env::_var(&v30, &unk_1A3D8, 4LL);
    std::env::set_var(&unk_1A3D8, 4LL, a3, a4);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v32, 4LL, 0LL);
    v12 = *((_QWORD *)&v32 + 1);
    if ( (_QWORD)v32 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v32 + 1), v33);
    v13 = v33;
    core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1A3D8, v33, 1LL, 1LL, 4LL);
    *v13 = 1162627398;
    v39 = v12;
    v40 = v13;
    v41 = 4LL;
    v37 = v30;
    v38 = v31;
    std::env::_var(&v48, aShell, 5LL);
    if ( v48 )
    {
      v33 = (_DWORD *)v50;
      v32 = v49;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v30, 7LL, 0LL);
      v14 = *((_QWORD *)&v30 + 1);
      if ( (_QWORD)v30 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v30 + 1), v31);
      v15 = (_DWORD *)v31;
      core::intrinsics::copy_nonoverlapping::precondition_check(
        &anon_791dd9c0d2c869e43c67d741dd94c45b_37_llvm_17242572455711829746,
        v31,
        1LL,
        1LL,
        7LL);
      *(_DWORD *)((char *)v15 + 3) = 1752379246;
      *v15 = 1852400175;
      *(_QWORD *)&v51 = v14;
      *((_QWORD *)&v51 + 1) = v15;
      v52 = 7LL;
      if ( (_QWORD)v32 != 0x8000000000000000LL )
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32);
    }
    else
    {
      v52 = v50;
      v51 = v49;
    }
    std::process::Command::new(&dest);
    std::sys::pal::unix::process::process_common::Command::arg(&dest, aC_0, 2LL);
    std::sys::pal::unix::process::process_common::Command::arg(&dest, v8, v9);
    std::sys::pal::unix::process::process_common::Command::stdin(&dest, 2LL);
    std::process::Command::spawn(&v42, &dest);
    if ( (_DWORD)v42 )
    {
      v17 = v43;
      core::ptr::drop_in_place<std::sys::pal::unix::process::process_common::Command>(&dest);
      core::ptr::drop_in_place<uu_split::platform::unix::WithEnvVarSet>(&v37);
      *(_QWORD *)(a1 + 8) = v17;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return a1;
    }
    v18 = HIDWORD(v42);
    v19 = v43;
    v61 = HIDWORD(v42);
    v62 = v43;
    v63 = v44;
    core::ptr::drop_in_place<std::sys::pal::unix::process::process_common::Command>(&dest);
    v68 = v63;
    core::ptr::drop_in_place<uu_split::platform::unix::WithEnvVarSet>(&v37);
    *(_DWORD *)v60 = v18;
    *(_QWORD *)&v60[4] = v19;
    *(_OWORD *)&v60[12] = v68;
    v20 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 28LL, 0LL);
    v21 = v20;
    if ( !v20 )
      alloc::alloc::handle_alloc_error(4LL, 28LL);
    v22 = *(_OWORD *)v60;
    *(_OWORD *)((char *)v20 + 12) = *(_OWORD *)&v60[12];
    *v20 = v22;
    *(_QWORD *)&v37 = v20;
    v23 = &off_136178;
    *((_QWORD *)&v37 + 1) = &off_136178;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&dest, 0x2000LL, 0LL);
    v24 = *((_QWORD *)&dest + 1);
    if ( (_QWORD)dest )
      alloc::raw_vec::handle_error(*((_QWORD *)&dest + 1), v65);
LABEL_27:
    v28 = v65;
    *(_QWORD *)a1 = v24;
    *(_QWORD *)(a1 + 8) = v28;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = v21;
    *(_QWORD *)(a1 + 40) = v23;
    return a1;
  }
  if ( !a5 )
  {
    v45 = 0x1B600000000LL;
    v46 = 0x10000;
    v47 = 0;
    std::fs::OpenOptions::_open(&v57, &v45, a3, a4);
    if ( v57 )
    {
      v6 = v59;
      v42 = v59;
      v48 = v53;
      *(_QWORD *)&v49 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &anon_791dd9c0d2c869e43c67d741dd94c45b_55_llvm_17242572455711829746;
      *((_QWORD *)&dest + 1) = 2LL;
      v65 = &v48;
      v66 = 1LL;
      v67 = 0LL;
      alloc::fmt::format::format_inner(&v37, &dest);
      dest = v37;
      v65 = (_QWORD *)v38;
      v7 = std::io::error::Error::new(39LL, &dest);
      goto LABEL_14;
    }
    v25 = &v58;
    goto LABEL_25;
  }
  v34 = 0x1B600000000LL;
  v35 = 16777472;
  v36 = 1;
  std::fs::OpenOptions::_open(&v54, &v34, a3, a4);
  if ( !v54 )
  {
    v25 = &v55;
LABEL_25:
    v26 = *(_DWORD *)v25;
    v27 = (_DWORD *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
    v21 = v27;
    if ( !v27 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *v27 = v26;
    *(_QWORD *)&v37 = v27;
    v23 = &off_136128;
    *((_QWORD *)&v37 + 1) = &off_136128;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&dest, 0x2000LL, 0LL);
    v24 = *((_QWORD *)&dest + 1);
    if ( (_QWORD)dest )
      alloc::raw_vec::handle_error(*((_QWORD *)&dest + 1), v65);
    goto LABEL_27;
  }
  v6 = v56;
  v42 = v56;
  v48 = v53;
  *(_QWORD *)&v49 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&dest = &anon_791dd9c0d2c869e43c67d741dd94c45b_53_llvm_17242572455711829746;
  *((_QWORD *)&dest + 1) = 2LL;
  v65 = &v48;
  v66 = 1LL;
  v67 = 0LL;
  alloc::fmt::format::format_inner(&v37, &dest);
  dest = v37;
  v65 = (_QWORD *)v38;
  v7 = std::io::error::Error::new(39LL, &dest);
LABEL_14:
  v16 = v7;
  std::io::error::repr_bitpacked::decode_repr(&v30, v6);
  if ( (unsigned __int8)v30 >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v30 + 8);
  *(_QWORD *)(a1 + 8) = v16;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}
