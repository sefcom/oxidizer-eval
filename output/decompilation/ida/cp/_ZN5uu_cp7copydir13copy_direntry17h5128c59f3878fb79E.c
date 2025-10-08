__int64 __fastcall uu_cp::copydir::copy_direntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  char v10; // bp
  __int64 v11; // r12
  __int64 v12; // r15
  int v13; // r14d
  _OWORD *v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  _BYTE *v18; // r14
  __int128 *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned __int8 v22; // bp
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(); // rdx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v30; // [rsp+10h] [rbp-208h] BYREF
  __int64 v31; // [rsp+20h] [rbp-1F8h]
  _BYTE v32[24]; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 (__fastcall **v34)(); // [rsp+58h] [rbp-1C0h]
  __int64 v35; // [rsp+60h] [rbp-1B8h]
  __int64 v36; // [rsp+68h] [rbp-1B0h] BYREF
  char **v37; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+78h] [rbp-1A0h]
  _QWORD **v39; // [rsp+80h] [rbp-198h]
  __int64 v40; // [rsp+88h] [rbp-190h]
  __int64 v41; // [rsp+90h] [rbp-188h]
  _QWORD **v42; // [rsp+A0h] [rbp-178h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+A8h] [rbp-170h]
  __int128 v44; // [rsp+B0h] [rbp-168h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-158h]
  __int128 v46; // [rsp+D0h] [rbp-148h]
  __int64 v47; // [rsp+E0h] [rbp-138h]
  __int64 v48; // [rsp+E8h] [rbp-130h]
  __int64 v49; // [rsp+F0h] [rbp-128h]
  __int64 v50; // [rsp+F8h] [rbp-120h]
  _QWORD *v51; // [rsp+100h] [rbp-118h] BYREF
  __int128 v52; // [rsp+108h] [rbp-110h]
  __int64 (__fastcall *v53)(); // [rsp+118h] [rbp-100h]
  _BYTE dest[168]; // [rsp+120h] [rbp-F8h] BYREF
  _BYTE v55[72]; // [rsp+1D0h] [rbp-48h] BYREF

  v35 = a5;
  v50 = a2;
  *(_QWORD *)&v32[16] = *(_QWORD *)(a3 + 40);
  *(_OWORD *)v32 = *(_OWORD *)(a3 + 24);
  v31 = *(_QWORD *)(a3 + 64);
  v30 = *(_OWORD *)(a3 + 48);
  v10 = *(_BYTE *)(a3 + 72);
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *(_QWORD *)(a3 + 16);
  if ( (unsigned __int8)std::path::Path::is_symlink(v11, v12) && !*(_BYTE *)(a4 + 89) )
  {
    uu_cp::copy_link(a1, v11, v12, *((_QWORD *)&v30 + 1), v31, v35);
LABEL_26:
    v18 = v32;
    v19 = &v30;
    goto LABEL_27;
  }
  if ( !(unsigned __int8)std::path::Path::is_dir(v11, v12)
    || (v49 = *((_QWORD *)&v30 + 1),
        v48 = v31,
        std::fs::metadata(dest),
        v13 = *(_DWORD *)dest,
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
          dest,
          *((_QWORD *)&v30 + 1)),
        v13 != 2) )
  {
    if ( (unsigned __int8)std::path::Path::is_dir(v11, v12) )
    {
LABEL_10:
      v18 = (_BYTE *)(a3 + 24);
      v19 = (__int128 *)(a3 + 48);
      *(_QWORD *)a1 = 0x800000000000000CLL;
      goto LABEL_27;
    }
    uu_cp::copy_file((unsigned int)&v44, v50, v11, v12, DWORD2(v30), v31, a4, v35, a7, a8, 0);
    if ( (_QWORD)v44 == 0x800000000000000CLL )
    {
      core::ptr::drop_in_place<core::result::Result<(),uu_cp::Error>>(&v44);
      goto LABEL_10;
    }
    *(_QWORD *)&dest[48] = v47;
    *(_OWORD *)&dest[32] = v46;
    *(_OWORD *)&dest[16] = v45;
    *(_OWORD *)dest = v44;
    if ( a6 )
    {
      if ( (unsigned __int8)std::path::Path::is_symlink(v11, v12) )
      {
        if ( *(_QWORD *)dest != 0x8000000000000002LL )
        {
          core::ptr::drop_in_place<uu_cp::Error>(&v44);
          goto LABEL_10;
        }
        core::ptr::drop_in_place<std::io::error::Error>(&dest[32]);
        goto LABEL_23;
      }
    }
    else if ( *(_QWORD *)dest == 0x8000000000000002LL )
    {
      v21 = *(_QWORD *)&dest[32];
      if ( (unsigned __int8)std::io::error::Error::kind(*(_QWORD *)&dest[32]) == 1 )
      {
        v36 = v21;
        v22 = std::io::error::Error::kind(v21);
        v51 = (_QWORD *)(&dword_0 + 1);
        v52 = *(_OWORD *)&v32[8];
        LOBYTE(v53) = 1;
        v42 = &v51;
        v43 = <os_display::Quoted as core::fmt::Display>::fmt;
        v37 = &off_15E640;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v41 = 0LL;
        v39 = &v42;
        v40 = 1LL;
        core::option::Option<T>::map_or_else(v55, &v37);
        v33 = uucore::mods::error::UIoError::new(v22, v55);
        v34 = &off_15E348;
        v23 = (unsigned int)uucore::mods::error::UError::code();
        uucore::mods::error::set_exit_code(v23);
        v42 = (_QWORD **)uucore::util_name();
        v43 = v24;
        v51 = &v42;
        *(_QWORD *)&v52 = <&T as core::fmt::Display>::fmt;
        *((_QWORD *)&v52 + 1) = &v33;
        v53 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v37 = (char **)&unk_15E660;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 3);
        v41 = 0LL;
        v39 = &v51;
        v40 = 2LL;
        std::io::stdio::_eprint(&v37);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v33, v34);
        core::ptr::drop_in_place<std::io::error::Error>(&v36);
LABEL_23:
        core::ptr::drop_in_place<alloc::string::String>(&dest[8]);
        goto LABEL_10;
      }
    }
    v14 = (_OWORD *)a1;
    *(_QWORD *)(a1 + 48) = v47;
    v15 = v44;
    v16 = v45;
    v17 = v46;
    goto LABEL_25;
  }
  if ( v10 )
  {
    <uu_cp::Error as core::convert::From<&str>>::from(dest, aCannotOverwrit, 45LL);
    v14 = (_OWORD *)a1;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&dest[48];
    v15 = *(_OWORD *)dest;
    v16 = *(_OWORD *)&dest[16];
    v17 = *(_OWORD *)&dest[32];
LABEL_25:
    v14[2] = v17;
    v14[1] = v16;
    *v14 = v15;
    goto LABEL_26;
  }
  uu_cp::copydir::build_dir(
    (unsigned int)dest,
    (unsigned int)&v30,
    0,
    *(_DWORD *)(a4 + 72),
    *(unsigned __int8 *)(a4 + 74),
    v11,
    v12);
  v20 = *(_QWORD *)dest;
  if ( *(_QWORD *)dest == 0x800000000000000CLL )
  {
    if ( *(_BYTE *)(a4 + 96) )
    {
      uu_cp::context_for(&v44, *(_QWORD *)&v32[8], *(_QWORD *)&v32[16], v49, v48);
      v37 = (char **)&v44;
      v38 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_15E620;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[32] = 0LL;
      *(_QWORD *)&dest[16] = &v37;
      *(_QWORD *)&dest[24] = 1LL;
      std::io::stdio::_print(dest);
      core::ptr::drop_in_place<alloc::string::String>(&v44);
    }
    *(_QWORD *)a1 = 0x800000000000000CLL;
  }
  else
  {
    v26 = *(_OWORD *)&dest[8];
    v27 = *(_OWORD *)&dest[24];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&dest[40];
    *(_OWORD *)(a1 + 24) = v27;
    *(_OWORD *)(a1 + 8) = v26;
    *(_QWORD *)a1 = v20;
  }
  v18 = v32;
  v19 = &v30;
LABEL_27:
  core::ptr::drop_in_place<std::path::PathBuf>(v19);
  core::ptr::drop_in_place<std::path::PathBuf>(v18);
  return core::ptr::drop_in_place<std::path::PathBuf>(a3);
}