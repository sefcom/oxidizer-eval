__int64 __fastcall uu_nice::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v4; // ebp
  int *v5; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rax
  char v13; // cl
  unsigned __int64 v14; // rax
  __int64 v15; // r15
  __int64 (__fastcall *v16)(); // rdx
  unsigned __int64 v17; // r14
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // [rsp+4h] [rbp-404h] BYREF
  _QWORD *v22; // [rsp+8h] [rbp-400h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+10h] [rbp-3F8h]
  unsigned __int64 v24; // [rsp+18h] [rbp-3F0h] BYREF
  __int64 v25; // [rsp+20h] [rbp-3E8h]
  __int64 v26; // [rsp+28h] [rbp-3E0h]
  char **argv[2]; // [rsp+30h] [rbp-3D8h] BYREF
  _BYTE v28[48]; // [rsp+40h] [rbp-3C8h]
  _QWORD v29[2]; // [rsp+70h] [rbp-398h] BYREF
  __int64 v30; // [rsp+80h] [rbp-388h] BYREF
  _QWORD v31[2]; // [rsp+88h] [rbp-380h] BYREF
  int v32; // [rsp+98h] [rbp-370h]
  __int128 v33; // [rsp+9Ch] [rbp-36Ch]
  __int128 v34; // [rsp+ACh] [rbp-35Ch]
  int v35; // [rsp+BCh] [rbp-34Ch]
  __int128 v36; // [rsp+C0h] [rbp-348h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-338h]
  __int128 v38; // [rsp+D8h] [rbp-330h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-320h]
  _BYTE v40[32]; // [rsp+F0h] [rbp-318h] BYREF
  __int128 dest; // [rsp+110h] [rbp-2F8h] BYREF
  __int128 v42; // [rsp+120h] [rbp-2E8h]
  __int128 v43; // [rsp+130h] [rbp-2D8h]
  __int128 v44; // [rsp+140h] [rbp-2C8h]

  uu_nice::standardize_nice_args((__int64)v40, a1, a2);
  uu_nice::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(argv, &dest, v40);
  if ( __OFSUB__(-(__int64)argv[0], 1LL) )
    return alloc::boxed::Box<T>::new(argv[1], 125LL, v2, -(__int64)argv[0]);
  v33 = *(_OWORD *)&v28[4];
  v34 = *(_OWORD *)&v28[20];
  v35 = *(_DWORD *)&v28[36];
  v31[0] = argv[0];
  v31[1] = argv[1];
  v32 = *(_DWORD *)v28;
  nix::errno::<impl nix::errno::consts::Errno>::clear();
  v4 = getpriority(PRIO_PROCESS, 0);
  v21 = v4;
  v5 = _errno_location();
  v6 = ((unsigned __int64)(unsigned int)*v5 << 32) | 2;
  std::io::error::repr_bitpacked::decode_repr(&dest, v6);
  if ( (_BYTE)dest )
    core::option::unwrap_failed(&off_DAF40);
  if ( DWORD1(dest) )
  {
    core::ptr::drop_in_place<std::io::error::Error>(v6);
    v24 = ((unsigned __int64)(unsigned int)*v5 << 32) | 2;
    argv[0] = (char **)&v24;
    argv[1] = (char **)<std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_DAED0;
    *((_QWORD *)&dest + 1) = 1LL;
    *(_QWORD *)&v43 = 0LL;
    *(_QWORD *)&v42 = argv;
    *((_QWORD *)&v42 + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v36, &dest);
    core::ptr::drop_in_place<std::io::error::Error>(v24);
    DWORD2(v42) = 125;
    dest = v36;
    *(_QWORD *)&v42 = v37;
    v7 = alloc::boxed::Box<T>::new(&dest);
LABEL_6:
    v8 = v7;
LABEL_7:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v31);
    return v8;
  }
  core::ptr::drop_in_place<std::io::error::Error>(v6);
  v9 = (__int64)*(&uu_nice::options::ADJUSTMENT + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v31, aAdjustment_0, v9);
  v10 = clap_builder::parser::error::MatchesError::unwrap(aAdjustment_0, v9, &dest);
  v11 = v10;
  if ( v10 )
  {
    v30 = v10;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                             v31,
                             aCommand,
                             *(&uu_nice::options::COMMAND + 1)) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(argv, aACommandMustBe, 43LL);
      *(_QWORD *)&v42 = *(_QWORD *)v28;
      dest = *(_OWORD *)argv;
      DWORD2(v42) = 125;
      v8 = alloc::boxed::Box<T>::new(&dest);
      goto LABEL_7;
    }
    v12 = core::num::<impl i32>::from_ascii_radix(*(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
    if ( (v12 & 1) != 0 )
    {
      LOBYTE(v24) = BYTE1(v12);
      argv[0] = (char **)&v30;
      argv[1] = (char **)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)v28 = &v24;
      *(_QWORD *)&v28[8] = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_DAEE0;
      *((_QWORD *)&dest + 1) = 2LL;
      *(_QWORD *)&v43 = 0LL;
      *(_QWORD *)&v42 = argv;
      *((_QWORD *)&v42 + 1) = 2LL;
      core::option::Option<T>::map_or_else(&v38, &dest);
      DWORD2(v42) = 125;
      dest = v38;
      *(_QWORD *)&v42 = v39;
      v7 = alloc::boxed::Box<T>::new(&dest);
      goto LABEL_6;
    }
    v14 = HIDWORD(v12);
  }
  else
  {
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
            v31,
            aCommand,
            *(&uu_nice::options::COMMAND + 1));
    LODWORD(v14) = 10;
    if ( !v13 )
    {
      argv[0] = (char **)&v21;
      argv[1] = (char **)core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      *(_QWORD *)&dest = &unk_DAE78;
      *((_QWORD *)&dest + 1) = 2LL;
      *(_QWORD *)&v43 = 0LL;
      *(_QWORD *)&v42 = argv;
      *((_QWORD *)&v42 + 1) = 1LL;
      std::io::stdio::_print(&dest);
      goto LABEL_24;
    }
  }
  v21 = v14 + v4;
  if ( setpriority(PRIO_PROCESS, 0, v14 + v4) == -1 )
  {
    v29[0] = &std::io::stdio::stderr::INSTANCE;
    v24 = uucore::util_name();
    v25 = v19;
    v22 = (_QWORD *)(((unsigned __int64)(unsigned int)*v5 << 32) | 2);
    argv[0] = (char **)&v24;
    argv[1] = (char **)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)v28 = &v22;
    *(_QWORD *)&v28[8] = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_DAF00;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v43 = 0LL;
    *(_QWORD *)&v42 = argv;
    *((_QWORD *)&v42 + 1) = 2LL;
    v20 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(v29, &dest);
    if ( !v20 )
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0LL);
      core::ptr::drop_in_place<std::io::error::Error>(v22);
      goto LABEL_18;
    }
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v20);
    core::ptr::drop_in_place<std::io::error::Error>(v22);
    uucore::mods::error::set_exit_code(125LL);
LABEL_24:
    v8 = 0LL;
    goto LABEL_7;
  }
LABEL_18:
  v15 = (__int64)*(&uu_nice::options::COMMAND + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v31, aCommand, v15);
  clap_builder::parser::error::MatchesError::unwrap(argv, aCommand, v15, &dest);
  if ( !argv[0] )
    core::option::unwrap_failed(&off_DAFE0);
  v44 = *(_OWORD *)&v28[32];
  v43 = *(_OWORD *)&v28[16];
  v42 = *(_OWORD *)v28;
  dest = *(_OWORD *)argv;
  core::iter::traits::iterator::Iterator::collect(&v24, &dest);
  core::iter::traits::iterator::Iterator::collect(argv, v25, v25 + 16 * v26);
  alloc::vec::Vec<T,A>::push(argv);
  if ( !*(_QWORD *)v28 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_DB010);
  execvp(*(const char **)argv[1], argv[1]);
  v22 = (_QWORD *)uucore::util_name();
  v23 = v16;
  v29[0] = &v22;
  v29[1] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&dest = &unk_DAE58;
  *((_QWORD *)&dest + 1) = 2LL;
  *(_QWORD *)&v43 = 0LL;
  *(_QWORD *)&v42 = v29;
  *((_QWORD *)&v42 + 1) = 1LL;
  std::io::stdio::_eprint(&dest);
  v29[0] = ((unsigned __int64)(unsigned int)*v5 << 32) | 2;
  v22 = v29;
  v23 = <std::io::error::Error as core::fmt::Display>::fmt;
  *(_QWORD *)&dest = &off_DAF20;
  *((_QWORD *)&dest + 1) = 2LL;
  *(_QWORD *)&v43 = 0LL;
  *(_QWORD *)&v42 = &v22;
  *((_QWORD *)&v42 + 1) = 1LL;
  std::io::stdio::_eprint(&dest);
  core::ptr::drop_in_place<std::io::error::Error>(v29[0]);
  v17 = ((unsigned __int64)(unsigned int)*v5 << 32) | 2;
  std::io::error::repr_bitpacked::decode_repr(&dest, v17);
  if ( (_BYTE)dest )
    core::option::unwrap_failed(&off_DB028);
  v18 = DWORD1(dest);
  core::ptr::drop_in_place<std::io::error::Error>(v17);
  uucore::mods::error::set_exit_code((v18 == 2) | 0x7Eu);
  core::ptr::drop_in_place<alloc::vec::Vec<usize>>(argv[0], argv[1]);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::ffi::c_str::CString>>(&v24);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v31);
  return 0LL;
}