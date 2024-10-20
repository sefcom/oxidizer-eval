__int64 __fastcall uu_echo::uumain(__int64 a1, __int64 a2)
{
  unsigned __int8 flag; // bl
  unsigned __int8 v3; // bp
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char **v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 (__fastcall *v13)(); // rdx
  __int64 (__fastcall *v14)(); // rdx
  unsigned int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-3D8h] BYREF
  __int64 v21; // [rsp+8h] [rbp-3D0h]
  __int128 v22; // [rsp+20h] [rbp-3B8h] BYREF
  __int128 v23; // [rsp+30h] [rbp-3A8h]
  __int128 v24; // [rsp+40h] [rbp-398h]
  __int64 v25; // [rsp+50h] [rbp-388h]
  __int128 v26; // [rsp+60h] [rbp-378h] BYREF
  __int128 v27; // [rsp+70h] [rbp-368h]
  __int64 v28; // [rsp+80h] [rbp-358h]
  __int128 *v29; // [rsp+88h] [rbp-350h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+90h] [rbp-348h]
  _QWORD v31[2]; // [rsp+C0h] [rbp-318h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-308h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-2F8h]
  char **v34; // [rsp+E8h] [rbp-2F0h] BYREF
  _BYTE v35[56]; // [rsp+F0h] [rbp-2E8h]
  __int64 v36; // [rsp+128h] [rbp-2B0h]

  uu_echo::uu_app(&v34);
  clap_builder::builder::command::Command::get_matches_from(&v29, &v34, a1, a2);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v29, aNoNewline, 10LL);
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v29, aEnableBackslas, 23LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v34, &v29, aString, 6LL);
  v31[0] = aString;
  v31[1] = 6LL;
  if ( v34 )
  {
    v28 = *(_QWORD *)&v35[32];
    v27 = *(_OWORD *)&v35[16];
    v26 = *(_OWORD *)v35;
    *(_QWORD *)&v22 = &off_D5658;
    *((_QWORD *)&v22 + 1) = 2LL;
    *(_QWORD *)&v24 = 0LL;
    *(_QWORD *)&v23 = &v20;
    *((_QWORD *)&v23 + 1) = 2LL;
    ((void (__fastcall __noreturn *)(__int128 *, char **, __int64, _QWORD, __int64, __int64, _QWORD *, __int64 (__fastcall *)(), __int128 *, __int64 (__fastcall *)()))core::panicking::panic_fmt)(
      &v22,
      &off_D5678,
      v4,
      *(_QWORD *)&v35[32],
      v5,
      v6,
      v31,
      <&T as core::fmt::Display>::fmt,
      &v26,
      <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt);
  }
  v7 = *(char ***)v35;
  v22 = *(_OWORD *)&v35[8];
  v23 = *(_OWORD *)&v35[24];
  v24 = *(_OWORD *)&v35[40];
  v25 = v36;
  if ( *(_QWORD *)v35 )
  {
    *(_QWORD *)&v35[48] = v25;
    *(_OWORD *)&v35[32] = v24;
    *(_OWORD *)&v35[16] = v23;
    *(_OWORD *)v35 = v22;
    v34 = v7;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v26, &v34);
  }
  else
  {
    v8 = (_QWORD *)_rust_alloc(24LL, 8LL);
    if ( !v8 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    *v8 = 0LL;
    v8[1] = 1LL;
    v8[2] = 0LL;
    alloc::slice::hack::into_vec(&v26, v8, 1LL);
  }
  v9 = uu_echo::execute(flag, v3, *((_QWORD *)&v26 + 1), v27);
  v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v9);
  v12 = v11;
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v26);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
  if ( v10 )
  {
    v20 = v10;
    v21 = v12;
    *(_QWORD *)&v22 = &v20;
    *((_QWORD *)&v22 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v34 = (char **)&unk_F510;
    *(_QWORD *)v35 = 1LL;
    *(_QWORD *)&v35[24] = 0LL;
    *(_QWORD *)&v35[8] = &v22;
    *(_QWORD *)&v35[16] = 1LL;
    alloc::fmt::format::format_inner(&v32, &v34);
    v22 = v32;
    *(_QWORD *)&v23 = v33;
    if ( v33 )
    {
      v29 = (__int128 *)uucore::util_name();
      v30 = v13;
      *(_QWORD *)&v26 = &v29;
      *((_QWORD *)&v26 + 1) = <&T as core::fmt::Display>::fmt;
      v34 = (char **)&unk_D5690;
      *(_QWORD *)v35 = 2LL;
      *(_QWORD *)&v35[24] = 0LL;
      *(_QWORD *)&v35[8] = &v26;
      *(_QWORD *)&v35[16] = 1LL;
      std::io::stdio::_eprint(&v34);
      v29 = &v22;
      v30 = <alloc::string::String as core::fmt::Display>::fmt;
      v34 = (char **)&unk_D56B0;
      *(_QWORD *)v35 = 2LL;
      *(_QWORD *)&v35[24] = 0LL;
      *(_QWORD *)&v35[8] = &v29;
      *(_QWORD *)&v35[16] = 1LL;
      std::io::stdio::_eprint(&v34);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(v21 + 104))(v20) )
    {
      v29 = (__int128 *)uucore::execution_phrase();
      v30 = v14;
      *(_QWORD *)&v26 = &v29;
      *((_QWORD *)&v26 + 1) = <&T as core::fmt::Display>::fmt;
      v34 = &off_D56D0;
      *(_QWORD *)v35 = 2LL;
      *(_QWORD *)&v35[24] = 0LL;
      *(_QWORD *)&v35[8] = &v26;
      *(_QWORD *)&v35[16] = 1LL;
      std::io::stdio::_eprint(&v34);
    }
    v15 = (*(__int64 (__fastcall **)(__int64))(v21 + 96))(v20);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v22);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22);
    v16 = v20;
    v17 = v21;
    if ( *(_QWORD *)v21 )
      (*(void (__fastcall **)(__int64))v21)(v20);
    v18 = *(_QWORD *)(v17 + 8);
    if ( v18 )
      _rust_dealloc(v16, v18, *(_QWORD *)(v17 + 16));
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return v15;
}
