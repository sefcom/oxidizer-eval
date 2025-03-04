__int64 __fastcall uu_tail::tail_file(
        __int64 a1,
        _BYTE *a2,
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
  __int128 v18; // rax
  void *v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // rax
  __int64 v22; // rax
  int v23; // r12d
  __int64 v24; // r13
  __int64 (__fastcall *v25)(); // r13
  __int64 v26; // rax
  __int64 (__fastcall **v27)(); // rdi
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 (__fastcall *v35)(); // rdx
  __int64 v36; // [rsp+8h] [rbp-170h]
  __int128 v37; // [rsp+10h] [rbp-168h] BYREF
  __int128 v38; // [rsp+20h] [rbp-158h]
  __int128 v39; // [rsp+30h] [rbp-148h]
  __int128 *v40; // [rsp+40h] [rbp-138h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+48h] [rbp-130h]
  __int128 *v42; // [rsp+58h] [rbp-120h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+60h] [rbp-118h]
  __int64 v44; // [rsp+68h] [rbp-110h]
  _QWORD v45[2]; // [rsp+70h] [rbp-108h] BYREF
  _BYTE *v46; // [rsp+80h] [rbp-F8h]
  __int64 (__fastcall *v47)(); // [rsp+88h] [rbp-F0h] BYREF
  __int128 v48; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v49; // [rsp+A0h] [rbp-D8h]
  __int128 v50; // [rsp+B0h] [rbp-C8h]
  __int64 v51; // [rsp+F0h] [rbp-88h]
  __int64 v52; // [rsp+140h] [rbp-38h]

  v46 = a2;
  v44 = a1;
  std::fs::metadata(&v48, a4, a5);
  v12 = v48;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v48);
  if ( v12 == 2 )
  {
    uucore::mods::error::set_exit_code(1LL);
    *(_QWORD *)&v13 = uucore::util_name(1LL, a4);
    v37 = v13;
    v40 = &v37;
    v41 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v48 = &unk_1BB798;
    *((_QWORD *)&v48 + 1) = 2LL;
    *(_QWORD *)&v50 = 0LL;
    *(_QWORD *)&v49 = &v40;
    *((_QWORD *)&v49 + 1) = 1LL;
    std::io::stdio::_eprint(&v48);
    *(_QWORD *)&v37 = a3;
    *((_QWORD *)&v37 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v38 = &off_1BB9C0;
    *((_QWORD *)&v38 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v48 = &off_1BB7B8;
    *((_QWORD *)&v48 + 1) = 3LL;
    *(_QWORD *)&v50 = 0LL;
    *(_QWORD *)&v49 = &v37;
    *((_QWORD *)&v49 + 1) = 2LL;
    std::io::stdio::_eprint(&v48);
    v14 = a3[1];
    v15 = a3[2];
    v16 = a6;
    return uu_tail::follow::watch::Observer::add_bad_path(v16, a4, a5, v14, v15, 0);
  }
  v36 = a6;
  if ( (unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    uucore::mods::error::set_exit_code(1LL);
    uu_tail::paths::HeaderPrinter::print_input(v46, (__int64)a3);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v40);
    *(_QWORD *)&v18 = uucore::util_name(&v40, a3);
    v37 = v18;
    v42 = &v37;
    v43 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v48 = &unk_1BB798;
    *((_QWORD *)&v48 + 1) = 2LL;
    *(_QWORD *)&v50 = 0LL;
    *(_QWORD *)&v49 = &v42;
    *((_QWORD *)&v49 + 1) = 1LL;
    std::io::stdio::_eprint(&v48);
    *(_QWORD *)&v37 = a3;
    *((_QWORD *)&v37 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v38 = &v40;
    *((_QWORD *)&v38 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v48 = &off_1BB7E8;
    *((_QWORD *)&v48 + 1) = 3LL;
    *(_QWORD *)&v50 = 0LL;
    *(_QWORD *)&v49 = &v37;
    *((_QWORD *)&v49 + 1) = 2LL;
    std::io::stdio::_eprint(&v48);
    if ( *(_BYTE *)(v44 + 76) != 2 )
    {
      v19 = &dword_0 + 1;
      if ( !*(_BYTE *)(v44 + 72) )
        v19 = &unk_29039;
      v20 = 24LL;
      if ( *(_BYTE *)(v44 + 72) )
        v20 = 0LL;
      v45[0] = v19;
      v45[1] = v20;
      *(_QWORD *)&v21 = uucore::util_name(&v48, a3);
      v37 = v21;
      v42 = &v37;
      v43 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v48 = &unk_1BB798;
      *((_QWORD *)&v48 + 1) = 2LL;
      *(_QWORD *)&v50 = 0LL;
      *(_QWORD *)&v49 = &v42;
      *((_QWORD *)&v49 + 1) = 1LL;
      std::io::stdio::_eprint(&v48);
      *(_QWORD *)&v37 = a3;
      *((_QWORD *)&v37 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v38 = v45;
      *((_QWORD *)&v38 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v48 = &unk_1BB818;
      *((_QWORD *)&v48 + 1) = 3LL;
      *(_QWORD *)&v50 = 0LL;
      *(_QWORD *)&v49 = &v37;
      *((_QWORD *)&v49 + 1) = 2LL;
      std::io::stdio::_eprint(&v48);
    }
    v22 = 0LL;
    if ( (*(_BYTE *)(a6 + 142) & 1) == 0
      || !*(_BYTE *)(a6 + 140)
      || (v22 = uu_tail::follow::watch::Observer::add_bad_path(a6, a4, a5, a3[1], a3[2], 0)) != 0 )
    {
      v28 = v22;
      core::ptr::drop_in_place<alloc::string::String>(&v40);
      return v28;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v40);
    return 0LL;
  }
  if ( !uu_tail::paths::Input::is_tailable(a3) )
  {
    v14 = a3[1];
    v15 = a3[2];
    v16 = a6;
    return uu_tail::follow::watch::Observer::add_bad_path(v16, a4, a5, v14, v15, 0);
  }
  std::fs::metadata(&v48, a4, a5);
  v23 = v48;
  if ( (_QWORD)v48 == 2LL )
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v48);
  else
    v52 = v51;
  v24 = v44;
  std::fs::File::open(&v42, a4, a5);
  if ( !(_DWORD)v42 )
  {
    LODWORD(v40) = HIDWORD(v42);
    uu_tail::paths::HeaderPrinter::print_input(v46, (__int64)a3);
    if ( *(_BYTE *)(v24 + 75) )
      goto LABEL_33;
    v29 = 0LL;
    if ( a3[3] == 0x8000000000000000LL )
      v29 = a7;
    if ( !(unsigned __int8)<std::fs::File as uu_tail::paths::FileExtTail>::is_seekable(&v40, v29) )
      goto LABEL_33;
    if ( v23 == 2 )
      core::option::unwrap_failed(&off_1BB878);
    if ( v52 )
    {
      uu_tail::bounded_tail((__int64)&v40, v24);
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v37, 0x2000LL, (unsigned int)v40);
    }
    else
    {
LABEL_33:
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v37, 0x2000LL, (unsigned int)v40);
      v30 = uu_tail::unbounded_tail((__int64)&v37, v24);
      if ( v30 )
      {
        v31 = v30;
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v37);
        return v31;
      }
    }
    v32 = a3[1];
    v33 = a3[2];
    v50 = v39;
    v49 = v38;
    v48 = v37;
    v34 = alloc::boxed::Box<T>::new(&v48);
    result = uu_tail::follow::watch::Observer::add_path(v36, a4, a5, v32, v33, v34, (__int64)&off_1BB890, 1);
    if ( result )
      return result;
    return 0LL;
  }
  v25 = v43;
  if ( (unsigned __int8)std::io::error::Error::kind(v43) != 1 )
  {
    *(_QWORD *)&v48 = v25;
    v26 = uu_tail::follow::watch::Observer::add_bad_path(a6, a4, a5, a3[1], a3[2], 0);
    if ( !v26 )
      return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
               v25,
               a3);
    v27 = (__int64 (__fastcall **)())&v48;
    goto LABEL_37;
  }
  v47 = v25;
  v26 = uu_tail::follow::watch::Observer::add_bad_path(a6, a4, a5, a3[1], a3[2], 0);
  if ( v26 )
  {
    v27 = &v47;
LABEL_37:
    v31 = v26;
    core::ptr::drop_in_place<std::io::error::Error>(v27);
    return v31;
  }
  v45[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
             v25,
             a3);
  uucore::mods::error::set_exit_code(1LL);
  v40 = (__int128 *)uucore::util_name(1LL, a3);
  v41 = v35;
  *(_QWORD *)&v37 = &v40;
  *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v38 = v45;
  *((_QWORD *)&v38 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v48 = &unk_1BB848;
  *((_QWORD *)&v48 + 1) = 3LL;
  *(_QWORD *)&v50 = 0LL;
  *(_QWORD *)&v49 = &v37;
  *((_QWORD *)&v49 + 1) = 2LL;
  std::io::stdio::_eprint(&v48);
  core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v45[0]);
  return 0LL;
}
