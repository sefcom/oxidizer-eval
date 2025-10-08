__int64 __fastcall uu_ln::link(__int128 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r15d
  char v7; // bp
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int128 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int128 v16; // rax
  char ***p_dest; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // bl
  __int128 v30; // [rsp+0h] [rbp-198h] BYREF
  __int128 **v31; // [rsp+10h] [rbp-188h]
  __int64 (__fastcall *v32)(); // [rsp+18h] [rbp-180h]
  __int64 v33; // [rsp+28h] [rbp-170h]
  __int128 v34; // [rsp+30h] [rbp-168h] BYREF
  __int64 v35; // [rsp+40h] [rbp-158h]
  char v36; // [rsp+48h] [rbp-150h]
  unsigned __int64 v37; // [rsp+50h] [rbp-148h] BYREF
  __int128 v38; // [rsp+58h] [rbp-140h]
  _BYTE v39[24]; // [rsp+68h] [rbp-130h] BYREF
  char **dest; // [rsp+80h] [rbp-118h] BYREF
  __int128 v41; // [rsp+88h] [rbp-110h]
  _BYTE v42[24]; // [rsp+98h] [rbp-100h]
  __int128 **v43; // [rsp+B0h] [rbp-E8h]
  __int128 *v44; // [rsp+130h] [rbp-68h] BYREF
  __int64 (__fastcall **v45)(); // [rsp+138h] [rbp-60h]
  __int128 *v46; // [rsp+140h] [rbp-58h]
  __int64 (__fastcall *v47)(); // [rsp+148h] [rbp-50h]
  __int128 v48; // [rsp+150h] [rbp-48h] BYREF
  __int128 **v49; // [rsp+160h] [rbp-38h]

  v33 = a4;
  *(_QWORD *)v39 = 0x8000000000000000LL;
  if ( *(_BYTE *)(a4 + 49) )
  {
    uu_ln::relative_path(&v37, a1, *((__int64 *)&a1 + 1), a2, a3);
  }
  else
  {
    v38 = a1;
    v37 = 0x8000000000000000LL;
  }
  if ( (unsigned __int8)std::path::Path::is_symlink(a2, a3)
    || (std::fs::metadata(&dest),
        v6 = (int)dest,
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, a2),
        v6 != 2) )
  {
    v7 = *(_BYTE *)(v33 + 55);
    v8 = 0x8000000000000000LL;
    switch ( v7 )
    {
      case 0:
        goto LABEL_11;
      case 1:
        uu_ln::simple_backup_path(&dest, a2, a3, *(_QWORD *)(v33 + 8), *(_QWORD *)(v33 + 16));
        goto LABEL_10;
      case 2:
        uu_ln::numbered_backup_path(&dest, a2, a3);
        goto LABEL_10;
      case 3:
        uu_ln::existing_backup_path(&dest, a2, a3, *(_QWORD *)(v33 + 8), *(_QWORD *)(v33 + 16));
LABEL_10:
        v8 = (unsigned __int64)dest;
        v30 = v41;
LABEL_11:
        core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(v39);
        *(_QWORD *)v39 = v8;
        *(_OWORD *)&v39[8] = v30;
        if ( v7 != 3 || *(_BYTE *)(v33 + 48) )
          goto LABEL_16;
        if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a1, *((_QWORD *)&a1 + 1), a2, a3) )
          goto LABEL_14;
        v8 = *(_QWORD *)v39;
LABEL_16:
        if ( v8 != 0x8000000000000000LL )
        {
          v10 = std::fs::rename(a2, a3, v39);
          v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                  v10,
                  a2,
                  a3);
          if ( v11 )
            goto LABEL_39;
        }
        if ( !*(_BYTE *)(v33 + 54) )
          goto LABEL_30;
        if ( *(_BYTE *)(v33 + 54) == 1 )
        {
          *(_QWORD *)&v12 = uucore::util_name();
          v30 = v12;
          *(_QWORD *)&v34 = &v30;
          *((_QWORD *)&v34 + 1) = <&T as core::fmt::Display>::fmt;
          dest = (char **)&unk_F6038;
          *(_QWORD *)&v41 = 2LL;
          *((_QWORD *)&v41 + 1) = &v34;
          *(_OWORD *)v42 = 1uLL;
          std::io::stdio::_eprint(&dest);
          *(_QWORD *)&v30 = 1LL;
          *((_QWORD *)&v30 + 1) = a2;
          v31 = (__int128 **)a3;
          LOBYTE(v32) = 1;
          *(_QWORD *)&v34 = &v30;
          *((_QWORD *)&v34 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          dest = &off_F6110;
          *(_QWORD *)&v41 = 2LL;
          *((_QWORD *)&v41 + 1) = &v34;
          *(_OWORD *)v42 = 1uLL;
          std::io::stdio::_eprint(&dest);
          dest = (char **)&off_F6130;
          *(_QWORD *)&v41 = 1LL;
          *((_QWORD *)&v41 + 1) = 8LL;
          *(_OWORD *)v42 = 0LL;
          std::io::stdio::_eprint(&dest);
          dest = (char **)&std::io::stdio::stderr::INSTANCE;
          v13 = <std::io::stdio::Stderr as std::io::Write>::flush(&dest);
          if ( v13 )
          {
            v14 = uu_ln::link::{{closure}}(v13);
            if ( v14 )
            {
              v44 = (__int128 *)v14;
              v45 = &off_F6348;
              v15 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v14);
              uucore::mods::error::set_exit_code(v15);
              *(_QWORD *)&v16 = uucore::util_name();
              v34 = v16;
              *(_QWORD *)&v30 = &v34;
              *((_QWORD *)&v30 + 1) = <&T as core::fmt::Display>::fmt;
              v31 = &v44;
              v32 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
              dest = (char **)&unk_F6140;
              *(_QWORD *)&v41 = 3LL;
              *((_QWORD *)&v41 + 1) = &v30;
              *(_OWORD *)v42 = 2uLL;
              std::io::stdio::_eprint(&dest);
              core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
                v44,
                v45);
            }
          }
          if ( (unsigned __int8)uucore::read_yes() )
          {
            dest = (char **)std::fs::remove_file(a2, a3);
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&dest);
            goto LABEL_30;
          }
          dest = (char **)(&dword_0 + 1);
          v9 = alloc::boxed::Box<T>::new(&dest);
        }
        else
        {
          if ( (unsigned __int8)std::path::Path::is_symlink(a2, a3)
            || !(unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a1, *((_QWORD *)&a1 + 1), a2, a3) )
          {
            dest = (char **)std::fs::remove_file(a2, a3);
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&dest);
            goto LABEL_30;
          }
LABEL_14:
          std::path::Path::to_path_buf(&v34, a1, *((_QWORD *)&a1 + 1));
          std::path::Path::to_path_buf(&v30, a2, a3);
          *(_QWORD *)v42 = v35;
          v41 = v34;
          *(_OWORD *)&v42[8] = v30;
          v43 = v31;
          dest = (char **)(&dword_0 + 2);
          v9 = alloc::boxed::Box<T>::new(&dest);
        }
        v11 = v9;
        break;
    }
    goto LABEL_39;
  }
LABEL_30:
  if ( *(_BYTE *)(v33 + 48) )
  {
    p_dest = (char ***)a2;
    v18 = std::os::unix::fs::symlink(&v37, a2, a3);
    if ( v18 )
    {
      v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
LABEL_39:
      core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&v37);
      core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(v39);
      return v11;
    }
  }
  else
  {
    if ( *(_BYTE *)(v33 + 50) && (unsigned __int8)std::path::Path::is_symlink(v38, *((_QWORD *)&v38 + 1)) )
    {
      std::fs::canonicalize(&dest, &v37);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v30,
        &dest,
        v38,
        *((_QWORD *)&v38 + 1));
      v11 = *((_QWORD *)&v30 + 1);
      if ( (_QWORD)v30 == 0x8000000000000000LL )
        goto LABEL_39;
      v48 = v30;
      v49 = v31;
    }
    else
    {
      std::path::Path::to_path_buf(&v48, v38, *((_QWORD *)&v38 + 1));
    }
    v23 = std::fs::hard_link(&v48, a2, a3);
    dest = (char **)&v37;
    *(_QWORD *)&v41 = a2;
    *((_QWORD *)&v41 + 1) = a3;
    p_dest = &dest;
    v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
            v23,
            &dest);
    if ( v11 )
      goto LABEL_39;
  }
  if ( *(_BYTE *)(v33 + 53) )
  {
    *(_QWORD *)&v34 = 1LL;
    *((_QWORD *)&v34 + 1) = a2;
    v35 = a3;
    v36 = 1;
    LOBYTE(v32) = 1;
    v44 = &v34;
    v45 = (__int64 (__fastcall **)())<os_display::Quoted as core::fmt::Display>::fmt;
    v46 = &v30;
    v47 = <os_display::Quoted as core::fmt::Display>::fmt;
    dest = (char **)&unk_F6170;
    *(_QWORD *)&v41 = 2LL;
    *((_QWORD *)&v41 + 1) = &v44;
    *(_OWORD *)v42 = 2uLL;
    std::io::stdio::_print(&dest, p_dest, v19, v20, v21, v22, 1LL, v38, *((_QWORD *)&v38 + 1), v32);
    if ( *(_QWORD *)v39 != 0x8000000000000000LL )
    {
      v35 = *(_QWORD *)&v39[16];
      v34 = *(_OWORD *)v39;
      LOBYTE(v32) = 1;
      v44 = &v30;
      v45 = (__int64 (__fastcall **)())<os_display::Quoted as core::fmt::Display>::fmt;
      dest = &off_F61A0;
      *(_QWORD *)&v41 = 2LL;
      *((_QWORD *)&v41 + 1) = &v44;
      *(_OWORD *)v42 = 1uLL;
      std::io::stdio::_print(
        &dest,
        p_dest,
        v25,
        *(_QWORD *)&v39[16],
        v27,
        v28,
        1LL,
        *(_QWORD *)&v39[8],
        *(_QWORD *)&v39[16],
        v32);
      core::ptr::drop_in_place<std::path::PathBuf>(&v34);
      v29 = 1;
      goto LABEL_46;
    }
    dest = (char **)&off_F6190;
    *(_QWORD *)&v41 = 1LL;
    *((_QWORD *)&v41 + 1) = 8LL;
    *(_OWORD *)v42 = 0LL;
    std::io::stdio::_print(&dest, p_dest, v25, v26, v27, v28, v30, *((_QWORD *)&v30 + 1), v31, v32);
  }
  v29 = 0;
LABEL_46:
  core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&v37);
  v11 = 0LL;
  if ( !v29 && *(_QWORD *)v39 != 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<std::path::PathBuf>(v39);
    return 0LL;
  }
  return v11;
}