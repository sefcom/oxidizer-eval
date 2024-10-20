__int64 __fastcall uu_mv::rename(char *a1, size_t a2, char *a3, size_t a4, __int64 a5, __int64 a6)
{
  __int64 *v9; // rdi
  const char *v10; // rsi
  int v11; // eax
  __int64 v12; // r12
  char **v13; // rax
  char ***v14; // rdi
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rbx
  bool v23; // bl
  __int64 v24; // rdx
  _BYTE v27[24]; // [rsp+18h] [rbp-750h] BYREF
  __int64 v28; // [rsp+30h] [rbp-738h]
  unsigned int v29; // [rsp+3Ch] [rbp-72Ch]
  __int128 v30; // [rsp+40h] [rbp-728h] BYREF
  __int64 v31; // [rsp+50h] [rbp-718h] BYREF
  __int64 v32; // [rsp+58h] [rbp-710h] BYREF
  _BYTE v33[176]; // [rsp+60h] [rbp-708h] BYREF
  __int64 v34; // [rsp+110h] [rbp-658h]
  __int64 v35; // [rsp+118h] [rbp-650h] BYREF
  unsigned int v36; // [rsp+120h] [rbp-648h]
  __int64 v37; // [rsp+128h] [rbp-640h] BYREF
  unsigned int v38; // [rsp+130h] [rbp-638h]
  void *v39; // [rsp+138h] [rbp-630h] BYREF
  __int128 v40; // [rsp+140h] [rbp-628h] BYREF
  __int64 v41; // [rsp+150h] [rbp-618h]
  _OWORD v42[3]; // [rsp+160h] [rbp-608h] BYREF
  __int128 v43; // [rsp+190h] [rbp-5D8h]
  __int128 v44; // [rsp+1A0h] [rbp-5C8h]
  __int128 v45; // [rsp+1B0h] [rbp-5B8h]
  __int128 v46; // [rsp+1C0h] [rbp-5A8h]
  _QWORD v47[2]; // [rsp+1D0h] [rbp-598h] BYREF
  _QWORD v48[2]; // [rsp+1E0h] [rbp-588h] BYREF
  _QWORD v49[2]; // [rsp+1F0h] [rbp-578h] BYREF
  _QWORD v50[2]; // [rsp+200h] [rbp-568h] BYREF
  _QWORD v51[2]; // [rsp+210h] [rbp-558h] BYREF
  _QWORD v52[2]; // [rsp+220h] [rbp-548h] BYREF
  _QWORD v53[2]; // [rsp+230h] [rbp-538h] BYREF
  _QWORD v54[2]; // [rsp+240h] [rbp-528h] BYREF
  _QWORD v55[2]; // [rsp+250h] [rbp-518h] BYREF
  _QWORD v56[2]; // [rsp+260h] [rbp-508h] BYREF
  char v57[8]; // [rsp+270h] [rbp-4F8h] BYREF
  char v58[8]; // [rsp+278h] [rbp-4F0h] BYREF
  _QWORD v59[3]; // [rsp+280h] [rbp-4E8h] BYREF
  char v60; // [rsp+298h] [rbp-4D0h]
  _QWORD v61[3]; // [rsp+2A0h] [rbp-4C8h] BYREF
  char v62; // [rsp+2B8h] [rbp-4B0h]
  _QWORD v63[3]; // [rsp+2C0h] [rbp-4A8h] BYREF
  char v64; // [rsp+2D8h] [rbp-490h]
  _QWORD v65[3]; // [rsp+2E0h] [rbp-488h] BYREF
  char v66; // [rsp+2F8h] [rbp-470h]
  _QWORD v67[3]; // [rsp+300h] [rbp-468h] BYREF
  char v68; // [rsp+318h] [rbp-450h]
  _QWORD v69[3]; // [rsp+320h] [rbp-448h] BYREF
  char v70; // [rsp+338h] [rbp-430h]
  _QWORD v71[3]; // [rsp+340h] [rbp-428h] BYREF
  char v72; // [rsp+358h] [rbp-410h]
  _QWORD v73[4]; // [rsp+360h] [rbp-408h] BYREF
  _QWORD v74[3]; // [rsp+380h] [rbp-3E8h] BYREF
  char v75; // [rsp+398h] [rbp-3D0h]
  _QWORD v76[3]; // [rsp+3A0h] [rbp-3C8h] BYREF
  char v77; // [rsp+3B8h] [rbp-3B0h]
  _QWORD v78[6]; // [rsp+3C0h] [rbp-3A8h] BYREF
  __int128 v79; // [rsp+3F0h] [rbp-378h] BYREF
  __int64 v80; // [rsp+400h] [rbp-368h]
  __int128 v81; // [rsp+410h] [rbp-358h] BYREF
  __int64 v82; // [rsp+420h] [rbp-348h]
  _QWORD v83[6]; // [rsp+428h] [rbp-340h] BYREF
  _QWORD v84[6]; // [rsp+458h] [rbp-310h] BYREF
  _QWORD v85[6]; // [rsp+488h] [rbp-2E0h] BYREF
  _QWORD v86[6]; // [rsp+4B8h] [rbp-2B0h] BYREF
  __int128 v87; // [rsp+4E8h] [rbp-280h] BYREF
  __int64 v88; // [rsp+4F8h] [rbp-270h]
  __int128 v89; // [rsp+500h] [rbp-268h] BYREF
  __int64 v90; // [rsp+510h] [rbp-258h]
  _QWORD v91[6]; // [rsp+518h] [rbp-250h] BYREF
  _QWORD v92[3]; // [rsp+548h] [rbp-220h] BYREF
  __int128 v93; // [rsp+560h] [rbp-208h]
  char **v94; // [rsp+578h] [rbp-1F0h] BYREF
  char **v95; // [rsp+5A8h] [rbp-1C0h] BYREF
  __int128 v96; // [rsp+5D8h] [rbp-190h] BYREF
  _BYTE dest[160]; // [rsp+5E8h] [rbp-180h] BYREF
  __int128 v98; // [rsp+688h] [rbp-E0h] BYREF
  _BYTE v99[160]; // [rsp+698h] [rbp-D0h] BYREF

  v28 = a6;
  *(_QWORD *)v27 = 0x8000000000000000LL;
  v9 = (__int64 *)v33;
  v10 = a3;
  std::sys::pal::unix::fs::stat(v33);
  if ( *(_QWORD *)v33 != 2LL )
  {
    v11 = *(unsigned __int8 *)(a5 + 55);
    if ( v11 == 1 )
    {
      if ( (*(_BYTE *)(a5 + 52) & 1) != 0 )
      {
        v59[0] = 1LL;
        v59[1] = a3;
        v59[2] = a4;
        v60 = 1;
        v47[0] = v59;
        v47[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v94 = &off_15B668;
        v13 = (char **)v47;
        v14 = &v94;
LABEL_19:
        v14[1] = (char **)(&dword_0 + 2);
        v14[4] = 0LL;
        v14[2] = v13;
        v14[3] = (char **)(&dword_0 + 1);
        std::io::stdio::_print(v14, v10);
      }
    }
    else
    {
      if ( v11 == 2 )
      {
        if ( *(_BYTE *)(a5 + 53) == 1 )
          goto LABEL_20;
        v10 = a1;
        std::sys::pal::unix::fs::stat(v33);
        v12 = *(_QWORD *)&v33[8];
        if ( *(_QWORD *)v33 == 2LL )
          goto LABEL_63;
        memcpy(dest, &v33[16], sizeof(dest));
        v96 = *(_OWORD *)v33;
        v10 = (const char *)&v96;
        std::fs::Metadata::modified(&v35, &v96);
        if ( v36 == 1000000000 )
        {
          v12 = v35;
          goto LABEL_63;
        }
        v29 = v36;
        v34 = v35;
        v10 = a3;
        std::sys::pal::unix::fs::stat(v33);
        v12 = *(_QWORD *)&v33[8];
        if ( *(_QWORD *)v33 == 2LL )
        {
LABEL_63:
          if ( *(_QWORD *)v27 != 0x8000000000000000LL )
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v27, v10);
          return v12;
        }
        memcpy(v99, &v33[16], sizeof(v99));
        v98 = *(_OWORD *)v33;
        v9 = &v37;
        v10 = (const char *)&v98;
        std::fs::Metadata::modified(&v37, &v98);
        if ( v38 == 1000000000 )
        {
          v12 = v37;
          goto LABEL_63;
        }
        v15 = (v34 > v37) - (v34 < v37);
        if ( v34 > v37 == v34 < v37 )
          v15 = (v29 > v38) - (v29 < v38);
        if ( v15 != 1 )
          goto LABEL_20;
        LOBYTE(v11) = *(_BYTE *)(a5 + 55);
      }
      if ( (_BYTE)v11 == 3 )
      {
        v61[0] = 1LL;
        v61[1] = a3;
        v61[2] = a4;
        v62 = 1;
        v48[0] = v61;
        v48[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v33 = &off_15B708;
        *(_QWORD *)&v33[8] = 1LL;
        *(_QWORD *)&v33[16] = v48;
        *(_QWORD *)&v33[24] = 1LL;
        *(_QWORD *)&v33[32] = 0LL;
        alloc::fmt::format::format_inner(&v81, v33);
        v79 = v81;
        v80 = v82;
        v10 = (const char *)&v79;
        v16 = std::io::error::Error::new(39LL, &v79);
LABEL_60:
        v12 = v16;
        goto LABEL_63;
      }
      if ( *(_BYTE *)(a5 + 53) )
      {
        if ( *(_BYTE *)(a5 + 53) != 1 )
          goto LABEL_40;
        v51[0] = uucore::util_name(v9, v10);
        v51[1] = v17;
        v50[0] = v51;
        v50[1] = <&T as core::fmt::Display>::fmt;
        v83[0] = &unk_15B480;
        v83[1] = 2LL;
        v83[4] = 0LL;
        v83[2] = v50;
        v83[3] = 1LL;
        std::io::stdio::_eprint(v83);
        v65[0] = 1LL;
        v65[1] = a3;
        v65[2] = a4;
        v66 = 1;
        v52[0] = v65;
        v52[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v84[0] = &off_15B688;
        v84[1] = 2LL;
        v84[4] = 0LL;
        v84[2] = v52;
        v84[3] = 1LL;
        std::io::stdio::_eprint(v84);
        v92[0] = &off_15B4C0;
        v92[1] = 1LL;
        v92[2] = 8LL;
        v93 = 0LL;
        std::io::stdio::_eprint(v92);
        v39 = &std::io::stdio::stderr::INSTANCE;
        v18 = <std::io::stdio::Stderr as std::io::Write>::flush(&v39);
        if ( v18 )
        {
          v32 = v18;
          v54[0] = uucore::util_name(&v39, v10);
          v54[1] = v24;
          v53[0] = v54;
          v53[1] = <&T as core::fmt::Display>::fmt;
          v85[0] = &unk_15B480;
          v85[1] = 2LL;
          v85[4] = 0LL;
          v85[2] = v53;
          v85[3] = 1LL;
          std::io::stdio::_eprint(v85);
          v55[0] = &v32;
          v55[1] = <std::io::error::Error as core::fmt::Display>::fmt;
          v86[0] = &anon_80a71568819187eb068e7dc772b8a818_49_llvm_5221707602514596811;
          v86[1] = 2LL;
          v86[4] = 0LL;
          v86[2] = v55;
          v86[3] = 1LL;
          std::io::stdio::_eprint(v86);
          std::process::exit(1);
        }
        if ( (unsigned __int8)uucore::read_yes() )
        {
LABEL_40:
          if ( *(_QWORD *)(a5 + 8) && *(__int64 *)(a5 + 16) >= 0 )
          {
            v19 = 0x8000000000000000LL;
            switch ( *(_BYTE *)(a5 + 54) )
            {
              case 0:
                goto LABEL_49;
              case 1:
                uucore::features::backup_control::simple_backup_path(v33, a3, a4);
                goto LABEL_48;
              case 2:
                uucore::features::backup_control::numbered_backup_path(v33, a3, a4);
                goto LABEL_48;
              case 3:
                uucore::features::backup_control::existing_backup_path(v33, a3, a4);
LABEL_48:
                v19 = *(_QWORD *)v33;
                v43 = *(_OWORD *)&v33[8];
LABEL_49:
                *(_QWORD *)v27 = v19;
                *(_OWORD *)&v27[8] = v43;
                if ( v19 == 0x8000000000000000LL )
                  goto LABEL_4;
                if ( !*(_QWORD *)&v27[8] || *(__int64 *)&v27[16] < 0 )
                  goto LABEL_81;
                v10 = (const char *)a4;
                v12 = uu_mv::rename_with_fallback(a3, a4, *(void **)&v27[8], *(size_t *)&v27[16]);
                if ( !v12 )
                  goto LABEL_4;
                goto LABEL_63;
            }
          }
          goto LABEL_81;
        }
        v10 = (_BYTE *)(&dword_0 + 1);
        v20 = 0LL;
        goto LABEL_59;
      }
      if ( (*(_BYTE *)(a5 + 52) & 1) != 0 )
      {
        v63[0] = 1LL;
        v63[1] = a3;
        v63[2] = a4;
        v64 = 1;
        v49[0] = v63;
        v49[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v95 = &off_15B668;
        v13 = (char **)v49;
        v14 = &v95;
        goto LABEL_19;
      }
    }
LABEL_20:
    v12 = 0LL;
    goto LABEL_63;
  }
  std::io::error::repr_bitpacked::decode_repr(v33, *(_QWORD *)&v33[8]);
  if ( v33[0] >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v33[8]);
LABEL_4:
  std::sys::pal::unix::fs::stat(v33);
  if ( *(_QWORD *)v33 == 2LL )
  {
    std::io::error::repr_bitpacked::decode_repr(v33, *(_QWORD *)&v33[8]);
    if ( v33[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v33[8]);
    goto LABEL_62;
  }
  if ( !(unsigned __int8)std::path::Path::is_dir(a3, a4) || !(unsigned __int8)std::path::Path::is_dir(a1, a2) )
    goto LABEL_62;
  std::sys::pal::unix::fs::readdir(v42, a3, a4);
  if ( BYTE8(v42[0]) == 2 )
  {
    std::io::error::repr_bitpacked::decode_repr(v42, *(_QWORD *)&v42[0]);
    if ( LOBYTE(v42[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)v42 + 8);
LABEL_58:
    v20 = 19LL;
    v10 = aDirectoryNotEm;
LABEL_59:
    v16 = std::io::error::Error::new(39LL, v10, v20);
    goto LABEL_60;
  }
  *(_QWORD *)&v33[48] = *(_QWORD *)&v42[0];
  v33[56] = BYTE8(v42[0]) & 1;
  *(_QWORD *)v33 = 2LL;
  <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v42, &v33[48]);
  v46 = v42[2];
  v45 = v42[1];
  v44 = v42[0];
  if ( (*(_QWORD *)v33 & 0xFFFFFFFFFFFFFFFDLL) != 0 )
  {
    if ( *(_QWORD *)&v33[8] )
    {
      core::ptr::drop_in_place<std::sys::pal::unix::fs::DirEntry>(&v33[8]);
    }
    else
    {
      std::io::error::repr_bitpacked::decode_repr(v57, *(_QWORD *)&v33[16]);
      if ( v57[0] >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v58);
    }
  }
  *(_OWORD *)v33 = v44;
  *(_OWORD *)&v33[32] = v46;
  *(_OWORD *)&v33[16] = v45;
  v21 = v44;
  if ( (_QWORD)v44 == 2LL )
    core::hint::unreachable_unchecked::precondition_check();
  core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<std::fs::ReadDir>>(v33);
  if ( v21 )
    goto LABEL_58;
  v10 = (const char *)a4;
  v12 = std::sys::pal::unix::fs::rmdir(a3, a4);
  if ( v12 )
    goto LABEL_63;
LABEL_62:
  v10 = (const char *)a2;
  v12 = uu_mv::rename_with_fallback(a1, a2, a3, a4);
  if ( v12 )
    goto LABEL_63;
  if ( (*(_BYTE *)(a5 + 49) & 1) != 0 )
  {
    v23 = *(_QWORD *)v27 != 0x8000000000000000LL;
    if ( *(_QWORD *)v27 == 0x8000000000000000LL )
    {
      v74[0] = 1LL;
      v74[1] = a1;
      v74[2] = a2;
      v75 = 1;
      v76[0] = 1LL;
      v76[1] = a3;
      v76[2] = a4;
      v77 = 1;
      v73[0] = v74;
      v73[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v73[2] = v76;
      v73[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v33 = &off_15B6A8;
      *(_QWORD *)&v33[8] = 2LL;
      *(_QWORD *)&v33[16] = v73;
      *(_QWORD *)&v33[24] = 2LL;
      *(_QWORD *)&v33[32] = 0LL;
      alloc::fmt::format::format_inner(&v89, v33);
      v30 = v89;
      v31 = v90;
LABEL_73:
      if ( v28 )
      {
        indicatif::multi::MultiProgress::suspend(v28, &v30);
      }
      else
      {
        v56[0] = &v30;
        v56[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v91[0] = &anon_80a71568819187eb068e7dc772b8a818_49_llvm_5221707602514596811;
        v91[1] = 2LL;
        v91[4] = 0LL;
        v91[2] = v56;
        v91[3] = 1LL;
        std::io::stdio::_print(v91, v33);
      }
      alloc::raw_vec::RawVec<T,A>::current_memory(v33, &v30);
      if ( *(_QWORD *)&v33[8] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          &v31,
          *(_QWORD *)v33,
          *(_QWORD *)&v33[8],
          *(_QWORD *)&v33[16]);
      goto LABEL_78;
    }
    v40 = *(_OWORD *)v27;
    v41 = *(_QWORD *)&v27[16];
    v67[0] = 1LL;
    v67[1] = a1;
    v67[2] = a2;
    v68 = 1;
    v69[0] = 1LL;
    v69[1] = a3;
    v69[2] = a4;
    v70 = 1;
    if ( *(_QWORD *)&v27[8] && *(__int64 *)&v27[16] >= 0 )
    {
      v71[0] = 1LL;
      v71[1] = *(_QWORD *)&v27[8];
      v71[2] = *(_QWORD *)&v27[16];
      v72 = 1;
      v78[0] = v67;
      v78[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v78[2] = v69;
      v78[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      v78[4] = v71;
      v78[5] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v33 = &off_15B6C8;
      *(_QWORD *)&v33[8] = 4LL;
      *(_QWORD *)&v33[16] = v78;
      *(_QWORD *)&v33[24] = 3LL;
      *(_QWORD *)&v33[32] = 0LL;
      alloc::fmt::format::format_inner(&v87, v33);
      v30 = v87;
      v31 = v88;
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40);
      goto LABEL_73;
    }
LABEL_81:
    core::panicking::panic_nounwind(anon_e274cffadf33dbf508504243ff687348_19_llvm_17332325210196355997, 162LL);
  }
  v23 = 0;
LABEL_78:
  v12 = 0LL;
  if ( !v23 && *(_QWORD *)v27 != 0x8000000000000000LL )
  {
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v27);
    return 0LL;
  }
  return v12;
}
