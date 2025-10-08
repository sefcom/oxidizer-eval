__int64 __fastcall uu_mv::handle_two_paths(
        __int64 (__fastcall *a1)(),
        __int128 *a2,
        __int64 (__fastcall *a3)(),
        __int128 *a4,
        __int64 a5)
{
  char v8; // r14
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // ebx
  int v12; // eax
  unsigned __int8 is_dir; // r15
  unsigned __int8 v14; // al
  char v15; // cl
  unsigned __int8 v16; // bl
  __int64 v17; // rax
  int v18; // ebx
  __int128 *v19; // r15
  __int128 *v20; // rsi
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(); // rcx
  __int128 *v23; // rbx
  __int64 (__fastcall *v24)(); // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 (__fastcall *v30)(); // rdx
  char yes; // al
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  _QWORD **v35; // [rsp+8h] [rbp-190h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+10h] [rbp-188h]
  __int128 *v37; // [rsp+18h] [rbp-180h]
  __int64 (__fastcall *v38)(); // [rsp+20h] [rbp-178h]
  _BYTE *v39; // [rsp+28h] [rbp-170h]
  char **v40; // [rsp+30h] [rbp-168h]
  _OWORD *v41; // [rsp+38h] [rbp-160h]
  _QWORD *v42; // [rsp+40h] [rbp-158h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+48h] [rbp-150h]
  __int128 *v44; // [rsp+50h] [rbp-148h]
  char v45; // [rsp+58h] [rbp-140h]
  __int128 *v46; // [rsp+60h] [rbp-138h]
  __int128 v47; // [rsp+68h] [rbp-130h] BYREF
  _QWORD *v48; // [rsp+78h] [rbp-120h]
  __int64 (__fastcall *v49)(); // [rsp+80h] [rbp-118h]
  char **dest; // [rsp+88h] [rbp-110h] BYREF
  __int128 v51; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v52[24]; // [rsp+A0h] [rbp-F8h]
  _QWORD *v53; // [rsp+B8h] [rbp-E0h]
  __int128 v54; // [rsp+138h] [rbp-60h] BYREF
  __int64 v55; // [rsp+148h] [rbp-50h]
  _BYTE v56[72]; // [rsp+150h] [rbp-48h] BYREF

  v8 = *(_BYTE *)(a5 + 54);
  if ( v8 == 1
    && (unsigned __int8)uucore::features::backup_control::source_is_target_backup(
                          a1,
                          a2,
                          a3,
                          a4,
                          *(_QWORD *)(a5 + 8),
                          *(_QWORD *)(a5 + 16)) )
  {
    v42 = (_QWORD *)(&dword_0 + 1);
    v43 = a3;
    v44 = a4;
    v45 = 1;
    v35 = (_QWORD **)(&dword_0 + 1);
    v36 = a1;
    v37 = a2;
    LOBYTE(v38) = 1;
    *(_QWORD *)&v47 = &v42;
    *((_QWORD *)&v47 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v48 = &v35;
    v49 = <os_display::Quoted as core::fmt::Display>::fmt;
    dest = &off_141620;
    *(_QWORD *)&v51 = 3LL;
    *((_QWORD *)&v51 + 1) = &v47;
    *(_OWORD *)v52 = 2uLL;
    core::option::Option<T>::map_or_else(v56, &dest);
    v9 = std::io::error::Error::new(0LL, v56);
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
  }
  v39 = (_BYTE *)a5;
  v41 = a4;
  std::fs::symlink_metadata(&dest);
  v11 = (int)dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, a1);
  if ( v11 == 2 )
  {
    if ( a2 && ((v12 = *((unsigned __int8 *)a2 + (_QWORD)a1 - 1), v12 == 47) || v12 == 92) )
    {
      v35 = (_QWORD **)(&dword_0 + 1);
      v36 = a1;
      v37 = a2;
      LOBYTE(v38) = 1;
      <T as alloc::string::SpecToString>::spec_to_string(&v51, &v35);
      dest = (char **)(&dword_0 + 1);
    }
    else
    {
      v35 = (_QWORD **)(&dword_0 + 1);
      v36 = a1;
      v37 = a2;
      LOBYTE(v38) = 1;
      <T as alloc::string::SpecToString>::spec_to_string(&v51, &v35);
      dest = 0LL;
    }
    return alloc::boxed::Box<T>::new(&dest);
  }
  v40 = (char **)a1;
  v46 = a2;
  is_dir = std::path::Path::is_dir(a3, v41);
  v14 = std::path::Path::is_dir(a1, a2);
  if ( v41 )
  {
    v15 = *((_BYTE *)v41 + (_QWORD)a3 - 1);
    if ( v15 == 47 )
    {
      if ( is_dir | v14 )
        goto LABEL_19;
    }
    else if ( (v15 != 92) | (unsigned __int8)(is_dir | v14) )
    {
      goto LABEL_19;
    }
    if ( !v39[48] && v39[55] != 2 )
    {
      v35 = (_QWORD **)(&dword_0 + 1);
      v36 = a3;
      v37 = v41;
      LOBYTE(v38) = 1;
      <T as alloc::string::SpecToString>::spec_to_string(&v51, &v35);
      dest = (char **)&byte_8;
      return alloc::boxed::Box<T>::new(&dest);
    }
  }
LABEL_19:
  v16 = v39[48];
  result = uu_mv::assert_not_same_file((_DWORD)v40, (_DWORD)v46, (_DWORD)a3, (_DWORD)v41, is_dir, v16, v8);
  if ( result )
    return result;
  if ( is_dir )
  {
    if ( (v16 & 1) == 0 )
    {
      std::path::Path::to_path_buf(&dest, v40, v46);
      v33 = uu_mv::move_files_into_dir(&dest, 1LL, a3, v41, v39);
      core::ptr::drop_in_place<(std::path::PathBuf,())>(dest, v51);
      return v33;
    }
    if ( (unsigned __int8)std::path::Path::is_dir(v40, v46) )
    {
      v17 = uu_mv::rename(v40, v46, a3, v41, v39, 0LL);
      dest = v40;
      *(_QWORD *)&v51 = v46;
      *((_QWORD *)&v51 + 1) = a3;
      *(_QWORD *)v52 = v41;
      return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
               v17,
               &dest);
    }
    v35 = (_QWORD **)(&dword_0 + 1);
    v36 = a3;
    v37 = v41;
    LOBYTE(v38) = 1;
    <T as alloc::string::SpecToString>::spec_to_string(&v51, &v35);
    dest = (char **)&byte_4;
    return alloc::boxed::Box<T>::new(&dest);
  }
  std::fs::metadata(&dest);
  v18 = (int)dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, a3);
  v19 = v46;
  if ( v18 != 2 )
  {
    v20 = v46;
    if ( (unsigned __int8)std::path::Path::is_dir(v40, v46) )
    {
      v22 = (__int64 (__fastcall *)())v40;
      if ( !v39[53] )
        return 0LL;
      v23 = v41;
      if ( v39[53] == 1 )
      {
        v35 = (_QWORD **)uucore::util_name(v40, v46, v21, v40);
        v36 = v24;
        v42 = &v35;
        v43 = <&T as core::fmt::Display>::fmt;
        dest = (char **)&unk_141650;
        *(_QWORD *)&v51 = 2LL;
        *((_QWORD *)&v51 + 1) = &v42;
        *(_OWORD *)v52 = 1uLL;
        std::io::stdio::_eprint(&dest);
        v35 = (_QWORD **)(&dword_0 + 1);
        v36 = a3;
        v37 = v23;
        LOBYTE(v38) = 1;
        v42 = &v35;
        v43 = <os_display::Quoted as core::fmt::Display>::fmt;
        dest = &off_141670;
        *(_QWORD *)&v51 = 2LL;
        *((_QWORD *)&v51 + 1) = &v42;
        *(_OWORD *)v52 = 1uLL;
        std::io::stdio::_eprint(&dest);
        dest = (char **)&off_141690;
        *(_QWORD *)&v51 = 1LL;
        *((_QWORD *)&v51 + 1) = 8LL;
        *(_OWORD *)v52 = 0LL;
        std::io::stdio::_eprint(&dest);
        dest = (char **)&std::io::stdio::stderr::INSTANCE;
        v25 = <std::io::stdio::Stderr as std::io::Write>::flush(&dest);
        if ( v25 )
        {
          v26 = uu_mv::handle_two_paths::{{closure}}(v25);
          if ( v26 )
          {
            *(_QWORD *)&v47 = v26;
            *((_QWORD *)&v47 + 1) = &off_141810;
            v27 = (unsigned int)<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v26);
            uucore::mods::error::set_exit_code(v27);
            v42 = (_QWORD *)uucore::util_name(v27, v20, v28, v29);
            v43 = v30;
            v35 = &v42;
            v36 = <&T as core::fmt::Display>::fmt;
            v37 = &v47;
            v38 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            dest = (char **)&unk_1416A0;
            *(_QWORD *)&v51 = 3LL;
            *((_QWORD *)&v51 + 1) = &v35;
            *(_OWORD *)v52 = 2uLL;
            std::io::stdio::_eprint(&dest);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v47,
              *((_QWORD *)&v47 + 1));
          }
        }
        yes = uucore::read_yes();
        v22 = (__int64 (__fastcall *)())v40;
        if ( !yes )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, 1LL, 0LL, v40);
          v34 = alloc::boxed::Box<T>::new(&dest);
          v9 = std::io::error::Error::_new(40LL, v34, &off_141778);
          return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        }
      }
      v42 = (_QWORD *)(&dword_0 + 1);
      v43 = v22;
      v44 = v19;
      v45 = 1;
      <T as alloc::string::SpecToString>::spec_to_string(&v54, &v42);
      v35 = (_QWORD **)(&dword_0 + 1);
      v36 = a3;
      v37 = v23;
      LOBYTE(v38) = 1;
      <T as alloc::string::SpecToString>::spec_to_string(&v47, &v35);
      *(_QWORD *)v52 = v55;
      v51 = v54;
      *(_OWORD *)&v52[8] = v47;
      v53 = v48;
      dest = (char **)&byte_5;
      return alloc::boxed::Box<T>::new(&dest);
    }
  }
  v32 = uu_mv::rename(v40, v46, a3, v41, v39, 0LL);
  if ( v32 )
    return uu_mv::handle_two_paths::{{closure}}(v32);
  else
    return 0LL;
}