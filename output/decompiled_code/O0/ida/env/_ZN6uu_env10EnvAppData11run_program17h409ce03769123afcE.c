_DWORD *__fastcall uu_env::EnvAppData::run_program(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // rdx
  __int128 *v6; // r14
  __int64 v7; // rbx
  __int128 *v8; // r12
  __int128 *v9; // r13
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // r15
  __int128 v14; // xmm0
  __int64 v15; // rax
  unsigned __int8 v16; // bh
  _DWORD *v17; // r14
  char v18; // al
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r14
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r14
  _DWORD *v33; // rax
  char **v35; // rbx
  int v36; // eax
  int v37; // edx
  int v38; // ebx
  int *v39; // rax
  int v40; // eax
  unsigned __int64 v41; // [rsp+0h] [rbp-6B8h] BYREF
  __int64 v42; // [rsp+8h] [rbp-6B0h]
  __int64 v43; // [rsp+10h] [rbp-6A8h]
  int v44; // [rsp+1Ch] [rbp-69Ch]
  int v45; // [rsp+20h] [rbp-698h] BYREF
  int v46; // [rsp+24h] [rbp-694h]
  unsigned __int64 v47; // [rsp+28h] [rbp-690h]
  unsigned __int64 v48; // [rsp+30h] [rbp-688h] BYREF
  __int64 v49; // [rsp+38h] [rbp-680h]
  __int64 v50; // [rsp+40h] [rbp-678h]
  unsigned __int64 v51; // [rsp+48h] [rbp-670h] BYREF
  int v52; // [rsp+54h] [rbp-664h] BYREF
  __int64 v53; // [rsp+58h] [rbp-660h]
  __int64 v54; // [rsp+60h] [rbp-658h]
  _QWORD v55[2]; // [rsp+68h] [rbp-650h] BYREF
  __int64 v56; // [rsp+78h] [rbp-640h] BYREF
  _QWORD v57[2]; // [rsp+80h] [rbp-638h] BYREF
  _QWORD v58[2]; // [rsp+90h] [rbp-628h] BYREF
  _QWORD v59[2]; // [rsp+A0h] [rbp-618h] BYREF
  _QWORD v60[2]; // [rsp+B0h] [rbp-608h] BYREF
  _QWORD v61[2]; // [rsp+C0h] [rbp-5F8h] BYREF
  _QWORD v62[2]; // [rsp+D0h] [rbp-5E8h] BYREF
  _QWORD v63[2]; // [rsp+E0h] [rbp-5D8h] BYREF
  _QWORD v64[2]; // [rsp+F0h] [rbp-5C8h] BYREF
  _QWORD v65[2]; // [rsp+100h] [rbp-5B8h] BYREF
  _QWORD v66[2]; // [rsp+110h] [rbp-5A8h] BYREF
  _QWORD v67[2]; // [rsp+120h] [rbp-598h] BYREF
  _QWORD v68[3]; // [rsp+130h] [rbp-588h] BYREF
  char v69; // [rsp+148h] [rbp-570h]
  _QWORD v70[3]; // [rsp+150h] [rbp-568h] BYREF
  char v71; // [rsp+168h] [rbp-550h]
  _QWORD v72[4]; // [rsp+170h] [rbp-548h] BYREF
  _QWORD v73[3]; // [rsp+190h] [rbp-528h] BYREF
  char v74; // [rsp+1A8h] [rbp-510h]
  _QWORD v75[3]; // [rsp+1B0h] [rbp-508h] BYREF
  char v76; // [rsp+1C8h] [rbp-4F0h]
  _QWORD v77[6]; // [rsp+1D0h] [rbp-4E8h] BYREF
  _QWORD v78[6]; // [rsp+200h] [rbp-4B8h] BYREF
  _QWORD v79[6]; // [rsp+230h] [rbp-488h] BYREF
  _QWORD v80[6]; // [rsp+260h] [rbp-458h] BYREF
  _QWORD v81[6]; // [rsp+290h] [rbp-428h] BYREF
  __int64 v82; // [rsp+2C0h] [rbp-3F8h] BYREF
  __int128 v83; // [rsp+2C8h] [rbp-3F0h]
  char v84; // [rsp+2D8h] [rbp-3E0h]
  _QWORD v85[6]; // [rsp+2E0h] [rbp-3D8h] BYREF
  _QWORD v86[6]; // [rsp+310h] [rbp-3A8h] BYREF
  _QWORD v87[6]; // [rsp+340h] [rbp-378h] BYREF
  _QWORD v88[6]; // [rsp+370h] [rbp-348h] BYREF
  _QWORD v89[6]; // [rsp+3A0h] [rbp-318h] BYREF
  struct sigaction act; // [rsp+3D0h] [rbp-2E8h] BYREF
  _BYTE src[208]; // [rsp+468h] [rbp-250h] BYREF
  sigset_t set; // [rsp+538h] [rbp-180h] BYREF
  _BYTE dest[256]; // [rsp+5B8h] [rbp-100h] BYREF

  v3 = *(_QWORD **)(a2 + 80);
  if ( !v3 )
    goto LABEL_62;
  if ( ((unsigned __int8)v3 & 7) != 0 )
    goto LABEL_62;
  v4 = *(_QWORD *)(a2 + 88);
  if ( v4 >> 59 )
    goto LABEL_62;
  if ( !v4 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_138EA0);
  v54 = a2;
  v44 = a3;
  v53 = a1;
  v5 = v3[1];
  v49 = *v3;
  v50 = v5;
  v48 = 0x8000000000000000LL;
  v42 = v49;
  v43 = v5;
  v41 = 0x8000000000000000LL;
  std::sys::pal::unix::process::process_common::Command::new(src);
  v6 = (__int128 *)(v3 + 2);
  memcpy(dest, src, 0xD0uLL);
  v7 = 2 * v4;
  if ( v4 != 1 )
  {
    v8 = (__int128 *)&v3[v7];
    v9 = v6;
    do
    {
      std::sys::pal::unix::process::process_common::Command::arg(dest, *(_QWORD *)v9, *((_QWORD *)v9 + 1));
      ++v9;
    }
    while ( v9 != v8 );
  }
  v10 = *(_QWORD *)(v54 + 136);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v54 + 144);
    std::sys::pal::unix::process::process_common::Command::set_arg_0(dest, *(_QWORD *)(v54 + 136), v11);
    v41 = 0x8000000000000000LL;
    v42 = v10;
    v43 = v11;
    if ( !(_BYTE)v44 )
      goto LABEL_21;
    v68[0] = 1LL;
    v68[1] = v10;
    v68[2] = v11;
    v69 = 1;
    v57[0] = v68;
    v57[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v78[0] = &off_138EB8;
    v78[1] = 2LL;
    v78[4] = 0LL;
    v78[2] = v57;
    v78[3] = 1LL;
    std::io::stdio::_eprint(v78);
  }
  else if ( !(_BYTE)v44 )
  {
    goto LABEL_21;
  }
  if ( v48 != 0x8000000000000000LL && (!v49 || v50 < 0) )
    goto LABEL_62;
  v70[0] = 1LL;
  v70[1] = v49;
  v70[2] = v50;
  v71 = 0;
  v58[0] = v70;
  v58[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v79[0] = &off_138ED8;
  v79[1] = 2LL;
  v79[4] = 0LL;
  v79[2] = v58;
  v79[3] = 1LL;
  std::io::stdio::_eprint(v79);
  v55[0] = aArg_0;
  v55[1] = 6LL;
  if ( v41 != 0x8000000000000000LL && (!v42 || v43 < 0) )
LABEL_62:
    core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_9_llvm_18365996230866053775, 162LL);
  v73[0] = 1LL;
  v73[1] = v42;
  v73[2] = v43;
  v74 = 1;
  v72[0] = v55;
  v72[1] = <&T as core::fmt::Display>::fmt;
  v72[2] = v73;
  v72[3] = <os_display::Quoted as core::fmt::Display>::fmt;
  v80[0] = &unk_138EF8;
  v80[1] = 3LL;
  v80[4] = 0LL;
  v80[2] = v72;
  v80[3] = 2LL;
  std::io::stdio::_eprint(v80);
  v12 = v7 * 8 - 16;
  v13 = 1LL;
  while ( v12 )
  {
    v56 = v13;
    v14 = *v6++;
    v82 = 1LL;
    v83 = v14;
    v84 = 1;
    v77[0] = v55;
    v77[1] = <&T as core::fmt::Display>::fmt;
    v77[2] = &v56;
    v77[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v77[4] = &v82;
    v77[5] = <os_display::Quoted as core::fmt::Display>::fmt;
    v81[0] = &unk_138F90;
    v81[1] = 4LL;
    v81[4] = 0LL;
    v81[2] = v77;
    v81[3] = 3LL;
    v12 -= 16LL;
    ++v13;
    std::io::stdio::_eprint(v81);
  }
LABEL_21:
  std::process::Command::status(&v45, dest);
  if ( v45 )
  {
    switch ( v47 & 3 )
    {
      case 0uLL:
        v15 = 16LL;
        goto LABEL_34;
      case 1uLL:
        v15 = 15LL;
LABEL_34:
        if ( *(_BYTE *)(v47 + v15) )
          goto LABEL_35;
        goto LABEL_43;
      case 2uLL:
        v18 = std::sys::pal::unix::decode_error_kind(HIDWORD(v47));
        goto LABEL_31;
      case 3uLL:
        v18 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v47));
        if ( v18 == 41 )
LABEL_78:
          core::hint::unreachable_unchecked::precondition_check();
LABEL_31:
        if ( v18 )
        {
LABEL_35:
          switch ( v47 & 3 )
          {
            case 0uLL:
              v19 = 16LL;
              goto LABEL_53;
            case 1uLL:
              v19 = 15LL;
LABEL_53:
              if ( *(_BYTE *)(v47 + v19) != 20 )
                goto LABEL_54;
              break;
            case 2uLL:
              v20 = std::sys::pal::unix::decode_error_kind(HIDWORD(v47));
              goto LABEL_42;
            case 3uLL:
              v20 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v47));
              if ( v20 == 41 )
                goto LABEL_78;
LABEL_42:
              if ( v20 == 20 )
                break;
LABEL_54:
              v51 = v47;
              v30 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              v31 = *(_QWORD *)(v30 + 8);
              v32 = *(_QWORD *)(v30 + 16);
              core::slice::raw::from_raw_parts::precondition_check(v31, 1LL, 1LL, v32);
              v60[0] = v31;
              v60[1] = v32;
              v59[0] = v60;
              v59[1] = <&T as core::fmt::Display>::fmt;
              v85[0] = &anon_e62154b07751d2d8ca3612a1a1427994_24_llvm_15614306555905002074;
              v85[1] = 2LL;
              v85[4] = 0LL;
              v85[2] = v59;
              v85[3] = 1LL;
              std::io::stdio::_eprint(v85);
              v61[0] = &v51;
              v61[1] = <std::io::error::Error as core::fmt::Debug>::fmt;
              v86[0] = &off_138F70;
              v86[1] = 2LL;
              v86[4] = 0LL;
              v86[2] = v61;
              v86[3] = 1LL;
              std::io::stdio::_eprint(v86);
              v33 = (_DWORD *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
              v17 = v33;
              if ( !v33 )
                alloc::alloc::handle_alloc_error(4LL, 4LL);
              *v33 = 126;
              std::io::error::repr_bitpacked::decode_repr(src, v51);
              if ( src[0] >= 3u )
                goto LABEL_56;
              goto LABEL_57;
          }
        }
LABEL_43:
        v21 = v49;
        v22 = v50;
        if ( v48 != 0x8000000000000000LL && (!v49 || v50 < 0) )
          goto LABEL_62;
        v23 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v24 = *(_QWORD *)(v23 + 8);
        v25 = *(_QWORD *)(v23 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v24, 1LL, 1LL, v25);
        v63[0] = v24;
        v63[1] = v25;
        v62[0] = v63;
        v62[1] = <&T as core::fmt::Display>::fmt;
        v87[0] = &anon_e62154b07751d2d8ca3612a1a1427994_24_llvm_15614306555905002074;
        v87[1] = 2LL;
        v87[4] = 0LL;
        v87[2] = v62;
        v87[3] = 1LL;
        std::io::stdio::_eprint(v87);
        v75[0] = 1LL;
        v75[1] = v21;
        v75[2] = v22;
        v76 = 1;
        v64[0] = v75;
        v64[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v88[0] = &unk_138E50;
        v88[1] = 2LL;
        v88[4] = 0LL;
        v88[2] = v64;
        v88[3] = 1LL;
        std::io::stdio::_eprint(v88);
        if ( (*(_BYTE *)(v53 + 1) & 1) == 0 )
        {
          v26 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v27 = *(_QWORD *)(v26 + 8);
          v28 = *(_QWORD *)(v26 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v27, 1LL, 1LL, v28);
          v66[0] = v27;
          v66[1] = v28;
          v65[0] = v66;
          v65[1] = <&T as core::fmt::Display>::fmt;
          v89[0] = &anon_e62154b07751d2d8ca3612a1a1427994_24_llvm_15614306555905002074;
          v89[1] = 2LL;
          v89[4] = 0LL;
          v89[2] = v65;
          v89[3] = 1LL;
          std::io::stdio::_eprint(v89);
          v67[0] = &off_138E90;
          v67[1] = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)src = &unk_138E70;
          *(_QWORD *)&src[8] = 2LL;
          *(_QWORD *)&src[32] = 0LL;
          *(_QWORD *)&src[16] = v67;
          *(_QWORD *)&src[24] = 1LL;
          std::io::stdio::_eprint(src);
        }
        v29 = (_DWORD *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
        v17 = v29;
        if ( !v29 )
          goto LABEL_64;
        *v29 = 127;
        if ( v45 == 1 )
          goto LABEL_50;
        goto LABEL_57;
    }
  }
  v16 = BYTE1(v46);
  if ( v46 )
  {
    if ( (v46 & 0x7F) == 0 )
    {
      v17 = (_DWORD *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
      if ( !v17 )
LABEL_64:
        alloc::alloc::handle_alloc_error(4LL, 4LL);
      *v17 = v16;
      if ( v45 == 1 )
      {
LABEL_50:
        std::io::error::repr_bitpacked::decode_repr(src, v47);
        if ( src[0] >= 3u )
LABEL_56:
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&src[8]);
      }
LABEL_57:
      core::ptr::drop_in_place<std::sys::pal::unix::process::process_common::Command>(dest);
      if ( v41 != 0x8000000000000000LL )
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v41);
      goto LABEL_59;
    }
    if ( (char)((v46 & 0x7F) + 1) < 2 )
    {
      v35 = &off_138F28;
      goto LABEL_67;
    }
    v36 = <nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from();
    v38 = v37;
    if ( v36 )
    {
      v52 = v37;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v52, &unk_138D18, &off_138F40);
    }
    sigfillset(&set);
    act.sa_mask = set;
    act.sa_handler = 0LL;
    act.sa_flags = 0;
    if ( sigaction(v38, &act, (struct sigaction *)src) == -1 )
    {
      v39 = _errno_location();
      if ( ((unsigned __int8)v39 & 3) != 0 )
        goto LABEL_77;
      nix::errno::consts::from_i32((unsigned int)*v39);
    }
    v40 = raise(v38);
    v35 = &off_138F58;
    if ( v40 != -1 )
      goto LABEL_67;
    v39 = _errno_location();
    if ( ((unsigned __int8)v39 & 3) == 0 )
    {
      nix::errno::consts::from_i32((unsigned int)*v39);
LABEL_67:
      core::option::unwrap_failed(v35);
    }
LABEL_77:
    core::panicking::panic_misaligned_pointer_dereference(
      4LL,
      v39,
      &anon_77e16c7defca1adeda749c3345405d55_238_llvm_10211869485132708612);
  }
  core::ptr::drop_in_place<std::sys::pal::unix::process::process_common::Command>(dest);
  if ( v41 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v41);
  v17 = 0LL;
LABEL_59:
  if ( v48 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v48);
  return v17;
}
