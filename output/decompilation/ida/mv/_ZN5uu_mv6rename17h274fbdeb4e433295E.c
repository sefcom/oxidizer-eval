__int64 __fastcall uu_mv::rename(__int64 a1, __int64 a2, __int128 *a3, __int128 *a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v8; // r14
  __int128 *v9; // rsi
  int v10; // ebx
  __int128 *v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rdx
  int v18; // eax
  __int128 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rbp
  _QWORD *v28; // rax
  __int128 *v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v33; // [rsp+0h] [rbp-2E8h]
  __int128 *v38; // [rsp+28h] [rbp-2C0h] BYREF
  __int64 (__fastcall **v39)(); // [rsp+30h] [rbp-2B8h]
  __int128 *v40; // [rsp+38h] [rbp-2B0h]
  __int64 (__fastcall *v41)(); // [rsp+40h] [rbp-2A8h]
  __int64 v42; // [rsp+48h] [rbp-2A0h]
  __int128 v43; // [rsp+50h] [rbp-298h] BYREF
  _QWORD src[20]; // [rsp+60h] [rbp-288h] BYREF
  __int128 v45; // [rsp+100h] [rbp-1E8h] BYREF
  _QWORD v46[20]; // [rsp+110h] [rbp-1D8h] BYREF
  __int128 v47; // [rsp+1B8h] [rbp-130h] BYREF
  __int64 v48; // [rsp+1C8h] [rbp-120h]
  char v49; // [rsp+1D0h] [rbp-118h]
  __int128 v50; // [rsp+1D8h] [rbp-110h] BYREF
  _QWORD dest[20]; // [rsp+1E8h] [rbp-100h] BYREF
  __int128 v52; // [rsp+288h] [rbp-60h] BYREF
  __int64 v53; // [rsp+298h] [rbp-50h]
  _BYTE v54[72]; // [rsp+2A0h] [rbp-48h] BYREF

  v8 = 0x8000000000000000LL;
  v9 = a3;
  std::fs::metadata(&v43);
  v10 = v43;
  v11 = &v43;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v43, v9);
  if ( v10 == 2 )
  {
LABEL_2:
    v13 = 0x8000000000000000LL;
    goto LABEL_3;
  }
  v17 = a5;
  switch ( *(_BYTE *)(a5 + 55) )
  {
    case 0:
      v18 = *(unsigned __int8 *)(a5 + 53);
      if ( !*(_BYTE *)(a5 + 53) )
        goto LABEL_47;
      goto LABEL_12;
    case 1:
      if ( *(_BYTE *)(a5 + 52) == 1 )
      {
        *(_QWORD *)&v45 = 1LL;
        *((_QWORD *)&v45 + 1) = a3;
        v46[0] = a4;
        LOBYTE(v46[1]) = 1;
        *(_QWORD *)&v50 = &v45;
        *((_QWORD *)&v50 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v43 = &off_1419A0;
        *((_QWORD *)&v43 + 1) = 2LL;
        src[0] = &v50;
        *(_OWORD *)&src[1] = 1uLL;
        std::io::stdio::_print(&v43);
      }
      goto LABEL_49;
    case 2:
      std::fs::metadata(&v43);
      v16 = *((_QWORD *)&v43 + 1);
      if ( (_QWORD)v43 == 2LL )
        goto LABEL_50;
      memcpy(dest, src, sizeof(dest));
      v50 = v43;
      std::fs::Metadata::modified(&v45, &v50);
      v16 = v45;
      if ( DWORD2(v45) == 1000000000 )
        goto LABEL_50;
      LODWORD(v42) = DWORD2(v45);
      std::fs::metadata(&v43);
      v29 = (__int128 *)*((_QWORD *)&v43 + 1);
      if ( (_QWORD)v43 == 2LL
        || (memcpy(v46, src, sizeof(v46)),
            v45 = v43,
            v11 = (__int128 *)&v38,
            v9 = &v45,
            std::fs::Metadata::modified(&v38, &v45),
            v29 = v38,
            v12 = (unsigned int)v42,
            (_DWORD)v39 == 1000000000) )
      {
        v16 = (__int64)v29;
        goto LABEL_50;
      }
      if ( (__int128 *)v16 == v38 )
      {
        if ( (unsigned int)v42 <= (unsigned int)v39 )
        {
LABEL_49:
          v16 = 0LL;
          goto LABEL_50;
        }
      }
      else if ( v16 <= (__int64)v38 )
      {
        goto LABEL_49;
      }
      v17 = a5;
      v18 = *(unsigned __int8 *)(a5 + 53);
      if ( !*(_BYTE *)(a5 + 53) )
      {
LABEL_47:
        if ( *(_BYTE *)(a5 + 52) )
        {
          *(_QWORD *)&v45 = 1LL;
          *((_QWORD *)&v45 + 1) = a3;
          v46[0] = a4;
          LOBYTE(v46[1]) = 1;
          *(_QWORD *)&v50 = &v45;
          *((_QWORD *)&v50 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v43 = &off_1419A0;
          *((_QWORD *)&v43 + 1) = 2LL;
          src[0] = &v50;
          *(_OWORD *)&src[1] = 1uLL;
          std::io::stdio::_print(&v43);
        }
        goto LABEL_49;
      }
LABEL_12:
      if ( v18 == 1 )
      {
        *(_QWORD *)&v19 = uucore::util_name(v11, v9, v17, v12);
        v45 = v19;
        *(_QWORD *)&v50 = &v45;
        *((_QWORD *)&v50 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v43 = &unk_141650;
        *((_QWORD *)&v43 + 1) = 2LL;
        src[0] = &v50;
        *(_OWORD *)&src[1] = 1uLL;
        std::io::stdio::_eprint(&v43);
        *(_QWORD *)&v45 = 1LL;
        *((_QWORD *)&v45 + 1) = a3;
        v46[0] = a4;
        LOBYTE(v46[1]) = 1;
        *(_QWORD *)&v50 = &v45;
        *((_QWORD *)&v50 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v43 = &off_1419D0;
        *((_QWORD *)&v43 + 1) = 2LL;
        src[0] = &v50;
        *(_OWORD *)&src[1] = 1uLL;
        std::io::stdio::_eprint(&v43);
        *(_QWORD *)&v43 = &off_141690;
        *((_QWORD *)&v43 + 1) = 1LL;
        src[0] = 8LL;
        *(_OWORD *)&src[1] = 0LL;
        std::io::stdio::_eprint(&v43);
        *(_QWORD *)&v43 = &std::io::stdio::stderr::INSTANCE;
        v20 = <std::io::stdio::Stderr as std::io::Write>::flush(&v43);
        if ( v20 )
        {
          v21 = uu_mv::handle_two_paths::{{closure}}(v20);
          if ( v21 )
          {
            v38 = (__int128 *)v21;
            v39 = &off_141810;
            v22 = (unsigned int)<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v21);
            uucore::mods::error::set_exit_code(v22);
            *(_QWORD *)&v50 = uucore::util_name(v22, v9, v23, v24);
            *((_QWORD *)&v50 + 1) = v25;
            *(_QWORD *)&v45 = &v50;
            *((_QWORD *)&v45 + 1) = <&T as core::fmt::Display>::fmt;
            v46[0] = &v38;
            v46[1] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)&v43 = &unk_1416A0;
            *((_QWORD *)&v43 + 1) = 3LL;
            src[0] = &v45;
            *(_OWORD *)&src[1] = 2uLL;
            std::io::stdio::_eprint(&v43);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v38,
              v39);
          }
        }
        if ( !(unsigned __int8)uucore::read_yes() )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v45, 1LL, 0LL, v26);
          src[0] = v46[0];
          v43 = v45;
          v30 = alloc::boxed::Box<T>::new(&v43);
LABEL_30:
          v16 = std::io::error::Error::_new(40LL, v30, &off_141778);
          goto LABEL_50;
        }
      }
      uucore::features::backup_control::get_backup_path(
        &v43,
        *(unsigned __int8 *)(a5 + 54),
        a3,
        a4,
        *(_QWORD *)(a5 + 8),
        *(_QWORD *)(a5 + 16));
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(0x8000000000000000LL);
      v33 = *((_QWORD *)&v43 + 1);
      v27 = v43;
      v42 = src[0];
      if ( (_QWORD)v43 == 0x8000000000000000LL )
        goto LABEL_2;
      v16 = uu_mv::rename_with_fallback(a3, a4, *((_QWORD *)&v43 + 1), src[0], a6);
      if ( v16 )
      {
        v8 = v27;
        goto LABEL_50;
      }
      v13 = v27;
LABEL_3:
      std::fs::metadata(&v43);
      v14 = v43;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v43, a3);
      if ( v14 != 2
        && (unsigned __int8)std::path::Path::is_dir(a3, a4)
        && (unsigned __int8)std::path::Path::is_dir(a1, a2) )
      {
        if ( !(unsigned __int8)uu_mv::is_empty_dir(a3, a4) )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v45, aDirectoryNotEm, 19LL, v15);
          src[0] = v46[0];
          v43 = v45;
          v31 = alloc::boxed::Box<T>::new(&v43);
          v16 = std::io::error::Error::_new(40LL, v31, &off_141778);
          goto LABEL_9;
        }
        v16 = std::fs::remove_dir(a3, a4);
        if ( v16 )
          goto LABEL_9;
      }
      v16 = uu_mv::rename_with_fallback(a1, a2, a3, a4, a6);
      if ( v16 )
      {
LABEL_9:
        v8 = v13;
LABEL_50:
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v8);
        return v16;
      }
      if ( !*(_BYTE *)(a5 + 49) )
      {
        if ( v13 != 0x8000000000000000LL )
          core::ptr::drop_in_place<std::path::PathBuf>(v13, v33);
        return 0LL;
      }
      if ( v13 == 0x8000000000000000LL )
      {
        *(_QWORD *)&v50 = 1LL;
        *((_QWORD *)&v50 + 1) = a1;
        dest[0] = a2;
        LOBYTE(dest[1]) = 1;
        *(_QWORD *)&v45 = 1LL;
        *((_QWORD *)&v45 + 1) = a3;
        v46[0] = a4;
        LOBYTE(v46[1]) = 1;
        v38 = &v50;
        v39 = (__int64 (__fastcall **)())<os_display::Quoted as core::fmt::Display>::fmt;
        v40 = &v45;
        v41 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v43 = &off_141A30;
        *((_QWORD *)&v43 + 1) = 2LL;
        src[0] = &v38;
        *(_OWORD *)&src[1] = 2uLL;
        core::option::Option<T>::map_or_else(&v47, &v43);
        v45 = v47;
        v46[0] = v48;
        v28 = a6;
        if ( a6 )
          goto LABEL_23;
LABEL_37:
        *(_QWORD *)&v50 = &v45;
        *((_QWORD *)&v50 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v43 = &unk_141A50;
        *((_QWORD *)&v43 + 1) = 2LL;
        src[0] = &v50;
        *(_OWORD *)&src[1] = 1uLL;
        std::io::stdio::_print(&v43);
        goto LABEL_38;
      }
      *(_QWORD *)&v47 = 1LL;
      *((_QWORD *)&v47 + 1) = a1;
      v48 = a2;
      v49 = 1;
      v38 = (_OWORD *)(&dword_0 + 1);
      v39 = (__int64 (__fastcall **)())a3;
      v40 = a4;
      LOBYTE(v41) = 1;
      *(_QWORD *)&v50 = 1LL;
      *((_QWORD *)&v50 + 1) = v33;
      dest[0] = v42;
      LOBYTE(dest[1]) = 1;
      *(_QWORD *)&v43 = &v47;
      *((_QWORD *)&v43 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      src[0] = &v38;
      src[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      src[2] = &v50;
      src[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v45 = &off_1419F0;
      *((_QWORD *)&v45 + 1) = 4LL;
      v46[2] = 0LL;
      v46[0] = &v43;
      v46[1] = 3LL;
      core::option::Option<T>::map_or_else(&v52, &v45);
      v45 = v52;
      v46[0] = v53;
      core::ptr::drop_in_place<std::path::PathBuf>(v13, v33);
      v28 = a6;
      if ( !a6 )
        goto LABEL_37;
LABEL_23:
      indicatif::multi::MultiProgress::suspend(*v28, &v45);
LABEL_38:
      core::ptr::drop_in_place<alloc::string::String>(&v45);
      return 0LL;
    case 3:
      *(_QWORD *)&v45 = 1LL;
      *((_QWORD *)&v45 + 1) = a3;
      v46[0] = a4;
      LOBYTE(v46[1]) = 1;
      *(_QWORD *)&v50 = &v45;
      *((_QWORD *)&v50 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v43 = &off_1419C0;
      *((_QWORD *)&v43 + 1) = 1LL;
      src[0] = &v50;
      *(_OWORD *)&src[1] = 1uLL;
      core::option::Option<T>::map_or_else(v54, &v43);
      v30 = alloc::boxed::Box<T>::new(v54);
      goto LABEL_30;
  }
}