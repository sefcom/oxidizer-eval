__int64 __fastcall uu_tail::tail_file(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v12; // r13d
  __int128 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 result; // rax
  __int64 v18; // r13
  __int64 v19; // rdi
  __int128 v20; // rax
  void *v21; // rdx
  __int64 v22; // rax
  __int128 v23; // rax
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // r15d
  __int64 v28; // r13
  __int64 (__fastcall *v29)(); // r13
  __int64 v30; // rax
  __int64 (__fastcall **p_dest)(); // rdi
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(); // rdx
  __int64 v38; // rax
  __int64 v40; // [rsp+8h] [rbp-180h]
  __int64 v41; // [rsp+8h] [rbp-180h]
  __int128 v42; // [rsp+10h] [rbp-178h] BYREF
  __int128 v43; // [rsp+20h] [rbp-168h]
  __int128 v44; // [rsp+30h] [rbp-158h]
  __int64 v45; // [rsp+48h] [rbp-140h]
  __int64 v46; // [rsp+50h] [rbp-138h]
  __int128 *v47; // [rsp+58h] [rbp-130h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+60h] [rbp-128h]
  __int128 *v49; // [rsp+68h] [rbp-120h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+70h] [rbp-118h]
  __int64 v51; // [rsp+80h] [rbp-108h]
  _QWORD v52[2]; // [rsp+88h] [rbp-100h] BYREF
  __int64 (__fastcall *v53)(); // [rsp+98h] [rbp-F0h] BYREF
  __int128 dest; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v55; // [rsp+B0h] [rbp-D8h]
  __int128 v56; // [rsp+C0h] [rbp-C8h]
  __int64 v57; // [rsp+100h] [rbp-88h]

  v46 = a1;
  std::fs::metadata(&dest);
  v12 = dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest);
  if ( v12 == 2 )
  {
    uucore::mods::error::set_exit_code(1LL);
    *(_QWORD *)&v13 = uucore::util_name(1LL, a4);
    v42 = v13;
    v49 = &v42;
    v50 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_1734A0;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v56 = 0LL;
    *(_QWORD *)&v55 = &v49;
    *((_QWORD *)&v55 + 1) = 1LL;
    std::io::stdio::_eprint(&dest);
    *(_QWORD *)&v42 = a3;
    *((_QWORD *)&v42 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v43 = &off_173800;
    *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_173980;
    *((_QWORD *)&dest + 1) = 3LL;
    *(_QWORD *)&v56 = 0LL;
    *(_QWORD *)&v55 = &v42;
    *((_QWORD *)&v55 + 1) = 2LL;
    std::io::stdio::_eprint(&dest);
    v14 = a3[1];
    v15 = a3[2];
    v16 = a6;
LABEL_3:
    result = uu_tail::follow::watch::Observer::add_bad_path(v16, a4, a5, v14, v15);
    goto LABEL_4;
  }
  v45 = a6;
  if ( (unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    v51 = a5;
    uucore::mods::error::set_exit_code(1LL);
    v18 = a3[1];
    v19 = a2;
    v40 = a3[2];
    uu_tail::paths::HeaderPrinter::print_input(v19, v18, v40);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v49, aIsADirectory, 14LL);
    *(_QWORD *)&v20 = uucore::util_name(&v49, aIsADirectory);
    v42 = v20;
    v47 = &v42;
    v48 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_1734A0;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v56 = 0LL;
    *(_QWORD *)&v55 = &v47;
    *((_QWORD *)&v55 + 1) = 1LL;
    std::io::stdio::_eprint(&dest);
    *(_QWORD *)&v42 = a3;
    *((_QWORD *)&v42 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v43 = &v49;
    *((_QWORD *)&v43 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_1739B0;
    *((_QWORD *)&dest + 1) = 3LL;
    *(_QWORD *)&v56 = 0LL;
    *(_QWORD *)&v55 = &v42;
    *((_QWORD *)&v55 + 1) = 2LL;
    std::io::stdio::_eprint(&dest);
    if ( *(_BYTE *)(v46 + 76) != 2 )
    {
      v21 = &dword_0 + 1;
      if ( !*(_BYTE *)(v46 + 72) )
        v21 = &unk_25163;
      v22 = 24LL;
      if ( *(_BYTE *)(v46 + 72) )
        v22 = 0LL;
      v52[0] = v21;
      v52[1] = v22;
      *(_QWORD *)&v23 = uucore::util_name(&dest, aIsADirectory);
      v42 = v23;
      v47 = &v42;
      v48 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_1734A0;
      *((_QWORD *)&dest + 1) = 2LL;
      *(_QWORD *)&v56 = 0LL;
      *(_QWORD *)&v55 = &v47;
      *((_QWORD *)&v55 + 1) = 1LL;
      std::io::stdio::_eprint(&dest);
      *(_QWORD *)&v42 = a3;
      *((_QWORD *)&v42 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v43 = v52;
      *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_1739E0;
      *((_QWORD *)&dest + 1) = 3LL;
      *(_QWORD *)&v56 = 0LL;
      *(_QWORD *)&v55 = &v42;
      *((_QWORD *)&v55 + 1) = 2LL;
      std::io::stdio::_eprint(&dest);
    }
    v24 = *(_BYTE *)(v45 + 142);
    if ( v24 != 2 && (v24 & 1) != 0 && *(_BYTE *)(v45 + 140) == 1 )
    {
      v25 = uu_tail::follow::watch::Observer::add_bad_path(v45, a4, v51, v18, v40);
      if ( !v25 )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v49);
        return 0LL;
      }
      v26 = v25;
    }
    else
    {
      v26 = 0LL;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v49);
    return v26;
  }
  if ( !(unsigned __int8)uu_tail::paths::Input::is_tailable(a3) )
  {
    v14 = a3[1];
    v15 = a3[2];
    v16 = v45;
    goto LABEL_3;
  }
  std::fs::metadata(&dest);
  v27 = dest;
  if ( (_QWORD)dest == 2LL )
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest);
  else
    LOBYTE(v51) = v57 == 0;
  v28 = v46;
  std::fs::File::open(&v47, a4, a5);
  if ( (_DWORD)v47 == 1 )
  {
    v29 = v48;
    if ( (unsigned __int8)std::io::error::Error::kind(v48) == 1 )
    {
      v53 = v29;
      v30 = uu_tail::follow::watch::Observer::add_bad_path(v45, a4, a5, a3[1], a3[2]);
      if ( !v30 )
      {
        v52[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                   v29,
                   a3);
        uucore::mods::error::set_exit_code(1LL);
        v49 = (__int128 *)uucore::util_name(1LL, a3);
        v50 = v37;
        *(_QWORD *)&v42 = &v49;
        *((_QWORD *)&v42 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v43 = v52;
        *((_QWORD *)&v43 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_1736E0;
        *((_QWORD *)&dest + 1) = 3LL;
        *(_QWORD *)&v56 = 0LL;
        *(_QWORD *)&v55 = &v42;
        *((_QWORD *)&v55 + 1) = 2LL;
        std::io::stdio::_eprint(&dest);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v52[0]);
        return 0LL;
      }
      p_dest = &v53;
    }
    else
    {
      *(_QWORD *)&dest = v29;
      v30 = uu_tail::follow::watch::Observer::add_bad_path(v45, a4, a5, a3[1], a3[2]);
      if ( !v30 )
        return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                 v29,
                 a3);
      p_dest = (__int64 (__fastcall **)())&dest;
    }
    v36 = v30;
    core::ptr::drop_in_place<std::io::error::Error>(p_dest);
    return v36;
  }
  LODWORD(v49) = HIDWORD(v47);
  v32 = a3[2];
  v33 = a2;
  v46 = a3[1];
  v41 = v32;
  uu_tail::paths::HeaderPrinter::print_input(v33, v46, v32);
  if ( *(_BYTE *)(v28 + 75) )
    goto LABEL_35;
  v34 = 0LL;
  if ( __OFSUB__(0LL, a3[3]) )
    v34 = a7;
  if ( !(unsigned __int8)<std::fs::File as uu_tail::paths::FileExtTail>::is_seekable(&v49, v34) )
    goto LABEL_35;
  if ( v27 == 2 )
    core::option::unwrap_failed(&off_173A10);
  if ( (v51 & 1) != 0 )
  {
LABEL_35:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&dest, (unsigned int)v49);
    v44 = v56;
    v43 = v55;
    v42 = dest;
    v35 = uu_tail::unbounded_tail(&v42, v28);
    if ( v35 )
    {
      v36 = v35;
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v42);
      return v36;
    }
  }
  else
  {
    uu_tail::bounded_tail(&v49, v28);
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&dest, (unsigned int)v49);
    v44 = v56;
    v43 = v55;
    v42 = dest;
  }
  v56 = v44;
  v55 = v43;
  dest = v42;
  v38 = alloc::boxed::Box<T>::new(&dest);
  result = uu_tail::follow::watch::Observer::add_path(v45, a4, a5, v46, v41, v38, (__int64)&off_173408, 1);
LABEL_4:
  if ( !result )
    return 0LL;
  return result;
}