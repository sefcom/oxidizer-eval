__int64 __fastcall uu_tail::tail_file(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v11; // r13d
  __int128 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 result; // rax
  __int128 v17; // rax
  void *v18; // rdx
  __int64 v19; // rcx
  __int128 v20; // rax
  __int64 v21; // rax
  int v22; // r12d
  __int64 v23; // r13
  __int64 (__fastcall *v24)(); // r13
  __int64 v25; // rax
  __int64 (__fastcall **v26)(); // rdi
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 (__fastcall *v34)(); // rdx
  __int64 v35; // [rsp+8h] [rbp-170h]
  __int128 v36; // [rsp+10h] [rbp-168h] BYREF
  __int128 v37; // [rsp+20h] [rbp-158h]
  __int128 v38; // [rsp+30h] [rbp-148h]
  __int128 *v39; // [rsp+40h] [rbp-138h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+48h] [rbp-130h]
  __int128 *v41; // [rsp+58h] [rbp-120h] BYREF
  __int64 (__fastcall *v42)(); // [rsp+60h] [rbp-118h]
  __int64 v43; // [rsp+68h] [rbp-110h]
  _QWORD v44[2]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v45; // [rsp+80h] [rbp-F8h]
  __int64 (__fastcall *v46)(); // [rsp+88h] [rbp-F0h] BYREF
  __int128 v47; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v48; // [rsp+A0h] [rbp-D8h]
  __int128 v49; // [rsp+B0h] [rbp-C8h]
  __int64 v50; // [rsp+F0h] [rbp-88h]
  __int64 v51; // [rsp+140h] [rbp-38h]

  v45 = a2;
  v43 = a1;
  std::fs::metadata(&v47, a4, a5);
  v11 = v47;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v47);
  if ( v11 == 2 )
  {
    uucore::mods::error::set_exit_code(1LL);
    *(_QWORD *)&v12 = uucore::util_name();
    v36 = v12;
    v39 = &v36;
    v40 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v47 = &unk_1BB798;
    *((_QWORD *)&v47 + 1) = 2LL;
    *(_QWORD *)&v49 = 0LL;
    *(_QWORD *)&v48 = &v39;
    *((_QWORD *)&v48 + 1) = 1LL;
    std::io::stdio::_eprint(&v47);
    *(_QWORD *)&v36 = a3;
    *((_QWORD *)&v36 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v37 = &off_1BB9C0;
    *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v47 = &off_1BB7B8;
    *((_QWORD *)&v47 + 1) = 3LL;
    *(_QWORD *)&v49 = 0LL;
    *(_QWORD *)&v48 = &v36;
    *((_QWORD *)&v48 + 1) = 2LL;
    std::io::stdio::_eprint(&v47);
    v13 = a3[1];
    v14 = a3[2];
    v15 = a6;
    return uu_tail::follow::watch::Observer::add_bad_path(v15, a4, a5, v13, v14, 0);
  }
  v35 = a6;
  if ( (unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    uucore::mods::error::set_exit_code(1LL);
    uu_tail::paths::HeaderPrinter::print_input(v45, (__int64)a3);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v39);
    *(_QWORD *)&v17 = uucore::util_name();
    v36 = v17;
    v41 = &v36;
    v42 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v47 = &unk_1BB798;
    *((_QWORD *)&v47 + 1) = 2LL;
    *(_QWORD *)&v49 = 0LL;
    *(_QWORD *)&v48 = &v41;
    *((_QWORD *)&v48 + 1) = 1LL;
    std::io::stdio::_eprint(&v47);
    *(_QWORD *)&v36 = a3;
    *((_QWORD *)&v36 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v37 = &v39;
    *((_QWORD *)&v37 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v47 = &off_1BB7E8;
    *((_QWORD *)&v47 + 1) = 3LL;
    *(_QWORD *)&v49 = 0LL;
    *(_QWORD *)&v48 = &v36;
    *((_QWORD *)&v48 + 1) = 2LL;
    std::io::stdio::_eprint(&v47);
    if ( *(_BYTE *)(v43 + 76) != 2 )
    {
      v18 = &dword_0 + 1;
      if ( !*(_BYTE *)(v43 + 72) )
        v18 = &unk_29039;
      v19 = 24LL;
      if ( *(_BYTE *)(v43 + 72) )
        v19 = 0LL;
      v44[0] = v18;
      v44[1] = v19;
      *(_QWORD *)&v20 = uucore::util_name();
      v36 = v20;
      v41 = &v36;
      v42 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v47 = &unk_1BB798;
      *((_QWORD *)&v47 + 1) = 2LL;
      *(_QWORD *)&v49 = 0LL;
      *(_QWORD *)&v48 = &v41;
      *((_QWORD *)&v48 + 1) = 1LL;
      std::io::stdio::_eprint(&v47);
      *(_QWORD *)&v36 = a3;
      *((_QWORD *)&v36 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v37 = v44;
      *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v47 = &unk_1BB818;
      *((_QWORD *)&v47 + 1) = 3LL;
      *(_QWORD *)&v49 = 0LL;
      *(_QWORD *)&v48 = &v36;
      *((_QWORD *)&v48 + 1) = 2LL;
      std::io::stdio::_eprint(&v47);
    }
    v21 = 0LL;
    if ( (*(_BYTE *)(a6 + 142) & 1) == 0
      || !*(_BYTE *)(a6 + 140)
      || (v21 = uu_tail::follow::watch::Observer::add_bad_path(a6, a4, a5, a3[1], a3[2], 0)) != 0 )
    {
      v27 = v21;
      core::ptr::drop_in_place<alloc::string::String>(&v39);
      return v27;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v39);
    return 0LL;
  }
  if ( !(unsigned __int8)uu_tail::paths::Input::is_tailable(a3) )
  {
    v13 = a3[1];
    v14 = a3[2];
    v15 = a6;
    return uu_tail::follow::watch::Observer::add_bad_path(v15, a4, a5, v13, v14, 0);
  }
  std::fs::metadata(&v47, a4, a5);
  v22 = v47;
  if ( (_QWORD)v47 == 2LL )
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v47);
  else
    v51 = v50;
  v23 = v43;
  std::fs::File::open(&v41, a4, a5);
  if ( !(_DWORD)v41 )
  {
    LODWORD(v39) = HIDWORD(v41);
    uu_tail::paths::HeaderPrinter::print_input(v45, (__int64)a3);
    if ( *(_BYTE *)(v23 + 75) )
      goto LABEL_33;
    v28 = 0LL;
    if ( a3[3] == 0x8000000000000000LL )
      v28 = a7;
    if ( !(unsigned __int8)<std::fs::File as uu_tail::paths::FileExtTail>::is_seekable(&v39, v28) )
      goto LABEL_33;
    if ( v22 == 2 )
      core::option::unwrap_failed(&off_1BB878);
    if ( v51 )
    {
      uu_tail::bounded_tail((__int64)&v39, v23);
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v36, 0x2000LL, (unsigned int)v39);
    }
    else
    {
LABEL_33:
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v36, 0x2000LL, (unsigned int)v39);
      v29 = uu_tail::unbounded_tail((__int64)&v36, v23);
      if ( v29 )
      {
        v30 = v29;
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v36);
        return v30;
      }
    }
    v31 = a3[1];
    v32 = a3[2];
    v49 = v38;
    v48 = v37;
    v47 = v36;
    v33 = alloc::boxed::Box<T>::new(&v47);
    result = uu_tail::follow::watch::Observer::add_path(v35, a4, a5, v31, v32, v33, (__int64)&off_1BB890, 1u);
    if ( result )
      return result;
    return 0LL;
  }
  v24 = v42;
  if ( (unsigned __int8)std::io::error::Error::kind(v42) != 1 )
  {
    *(_QWORD *)&v47 = v24;
    v25 = uu_tail::follow::watch::Observer::add_bad_path(a6, a4, a5, a3[1], a3[2], 0);
    if ( !v25 )
      return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
               v24,
               a3);
    v26 = (__int64 (__fastcall **)())&v47;
    goto LABEL_37;
  }
  v46 = v24;
  v25 = uu_tail::follow::watch::Observer::add_bad_path(a6, a4, a5, a3[1], a3[2], 0);
  if ( v25 )
  {
    v26 = &v46;
LABEL_37:
    v30 = v25;
    core::ptr::drop_in_place<std::io::error::Error>(v26);
    return v30;
  }
  v44[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
             v24,
             a3);
  uucore::mods::error::set_exit_code(1LL);
  v39 = (__int128 *)uucore::util_name();
  v40 = v34;
  *(_QWORD *)&v36 = &v39;
  *((_QWORD *)&v36 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v37 = v44;
  *((_QWORD *)&v37 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v47 = &unk_1BB848;
  *((_QWORD *)&v47 + 1) = 3LL;
  *(_QWORD *)&v49 = 0LL;
  *(_QWORD *)&v48 = &v36;
  *((_QWORD *)&v48 + 1) = 2LL;
  std::io::stdio::_eprint(&v47);
  core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v44[0]);
  return 0LL;
}
