__int64 __fastcall uu_realpath::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 (__fastcall **v5)(); // r14
  __int64 v6; // r15
  char flag; // bp
  unsigned __int8 v8; // bl
  char v9; // r13
  char v10; // r15
  char v11; // cl
  unsigned __int8 v12; // al
  unsigned int v13; // r12d
  int v14; // ebp
  __int128 v15; // rax
  __int128 v16; // rax
  unsigned int v17; // ebx
  __int128 v18; // kr00_16
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // r15
  int v23; // r12d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rbp
  __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // r13
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rbx
  void (__fastcall **v40)(__int64); // r15
  void (__fastcall *v41)(__int64); // rsi
  __int128 v43; // [rsp+0h] [rbp-448h] BYREF
  __int64 v44; // [rsp+10h] [rbp-438h]
  int v45; // [rsp+18h] [rbp-430h]
  int v46; // [rsp+1Ch] [rbp-42Ch]
  char **v47; // [rsp+20h] [rbp-428h] BYREF
  __int64 v48; // [rsp+28h] [rbp-420h]
  __int64 (__fastcall **v49)(); // [rsp+30h] [rbp-418h]
  int v50; // [rsp+3Ch] [rbp-40Ch]
  __int128 v51; // [rsp+40h] [rbp-408h] BYREF
  _BYTE v52[48]; // [rsp+50h] [rbp-3F8h]
  __int64 v53; // [rsp+80h] [rbp-3C8h] BYREF
  void (__fastcall **v54)(__int64); // [rsp+88h] [rbp-3C0h]
  char v55[8]; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v56; // [rsp+98h] [rbp-3B0h]
  __int64 v57; // [rsp+A0h] [rbp-3A8h]
  __int128 v58; // [rsp+A8h] [rbp-3A0h] BYREF
  int v59; // [rsp+B8h] [rbp-390h]
  __int128 v60; // [rsp+BCh] [rbp-38Ch]
  __int128 v61; // [rsp+CCh] [rbp-37Ch]
  int v62; // [rsp+DCh] [rbp-36Ch]
  _OWORD v63[4]; // [rsp+E0h] [rbp-368h] BYREF
  _QWORD v64[2]; // [rsp+128h] [rbp-320h] BYREF
  __int128 v65; // [rsp+138h] [rbp-310h] BYREF
  __int64 v66; // [rsp+148h] [rbp-300h]
  char **v67; // [rsp+150h] [rbp-2F8h] BYREF
  __int64 v68; // [rsp+158h] [rbp-2F0h]
  __int64 (__fastcall **v69)(); // [rsp+160h] [rbp-2E8h]
  __int128 v70; // [rsp+168h] [rbp-2E0h]
  __int64 v71; // [rsp+178h] [rbp-2D0h]

  uu_realpath::uu_app(&v67);
  clap_builder::builder::command::Command::try_get_matches_from(&v51, &v67, a1, a2);
  v2 = *((_QWORD *)&v51 + 1);
  if ( (_QWORD)v51 == 0x8000000000000000LL )
  {
    v67 = (char **)*((_QWORD *)&v51 + 1);
    LODWORD(v68) = 1;
    v3 = _rust_alloc(16LL, 8LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    v4 = v3;
    *(_QWORD *)v3 = v2;
    *(_DWORD *)(v3 + 8) = 1;
    v5 = &off_E7908;
    goto LABEL_13;
  }
  v60 = *(_OWORD *)&v52[4];
  v61 = *(_OWORD *)&v52[20];
  v62 = *(_DWORD *)&v52[36];
  v58 = v51;
  v59 = *(_DWORD *)v52;
  v6 = (__int64)*(&uu_realpath::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v67, &v58, aFiles, v6);
  clap_builder::parser::error::MatchesError::unwrap(&v51, aFiles, v6, &v67);
  if ( !(_QWORD)v51 )
    core::option::unwrap_failed(&off_E7888);
  v63[3] = *(_OWORD *)&v52[32];
  v63[2] = *(_OWORD *)&v52[16];
  v63[1] = *(_OWORD *)v52;
  v63[0] = v51;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v55, v63);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v58, aStrip, *(&uu_realpath::OPT_STRIP + 1));
  v8 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          &v58,
                          aZero_0,
                          *(&uu_realpath::OPT_ZERO + 1)) )
    v8 = 0;
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v58, aQuiet, *(&uu_realpath::OPT_QUIET + 1));
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          &v58,
          aLogical,
          *(&uu_realpath::OPT_LOGICAL + 1));
  v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          &v58,
          "canonicalize-existingcanonicalize-missingdescription() is deprecated; use Displayerror",
          21LL);
  v12 = 1;
  if ( !v11 )
    v12 = 2
        * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v58,
            "canonicalize-missingdescription() is deprecated; use Displayerror",
            20LL);
  v13 = 0;
  if ( !flag )
    v13 = (unsigned __int8)(v10 + 1);
  v14 = v12;
  uu_realpath::prepare_relative_options(&v67, &v58, v12, v13);
  v4 = v68;
  v5 = v69;
  if ( v67 != (char **)0x8000000000000001LL )
  {
    v44 = v71;
    v43 = v70;
    v47 = v67;
    v48 = v68;
    v49 = v69;
    if ( v57 )
    {
      v20 = v56;
      v45 = v8;
      v46 = (unsigned __int8)v13;
      if ( v9 )
      {
        v21 = 24 * v57;
        v22 = 0LL;
        v23 = v45;
        v50 = v14;
        do
        {
          v24 = 0;
          if ( v47 != (char **)0x8000000000000000LL )
            v24 = v48;
          v25 = 0LL;
          if ( (_QWORD)v43 != 0x8000000000000000LL )
            v25 = *((_QWORD *)&v43 + 1);
          v26 = uu_realpath::resolve_path(
                  *(_QWORD *)(v20 + v22 + 8),
                  *(_QWORD *)(v20 + v22 + 16),
                  v23,
                  v46,
                  v14,
                  v24,
                  (__int64)v49,
                  v25,
                  v44);
          if ( v26 && (unsigned __int64)(v26 & 3) - 2 >= 2 && (v26 & 3) != 0 )
          {
            v27 = v26 - 1;
            v28 = *(_QWORD *)(v26 - 1);
            v29 = *(_QWORD *)(v26 + 7);
            if ( *(_QWORD *)v29 )
              (*(void (__fastcall **)(__int64))v29)(v28);
            v30 = *(_QWORD *)(v29 + 8);
            if ( v30 )
              _rust_dealloc(v28, v30, *(_QWORD *)(v29 + 16));
            _rust_dealloc(v27, 24LL, 8LL);
            v23 = v45;
            v14 = v50;
          }
          v22 += 24LL;
        }
        while ( v21 != v22 );
      }
      else
      {
        v31 = 24 * v57;
        do
        {
          v32 = 0;
          if ( v47 != (char **)0x8000000000000000LL )
            v32 = v48;
          v33 = 0LL;
          if ( (_QWORD)v43 != 0x8000000000000000LL )
            v33 = *((_QWORD *)&v43 + 1);
          v34 = uu_realpath::resolve_path(
                  *(_QWORD *)(v20 + 8),
                  *(_QWORD *)(v20 + 16),
                  v45,
                  v46,
                  v14,
                  v32,
                  (__int64)v49,
                  v33,
                  v44);
          v35 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                  v34,
                  v20);
          if ( v35 )
          {
            v53 = v35;
            v54 = (void (__fastcall **)(__int64))v36;
            v37 = (*(__int64 (__fastcall **)(__int64))(v36 + 96))(v35);
            uucore::mods::error::set_exit_code(v37);
            v64[0] = uucore::util_name();
            v64[1] = v38;
            *(_QWORD *)&v51 = v64;
            *((_QWORD *)&v51 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v52 = &v53;
            *(_QWORD *)&v52[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v67 = (char **)&unk_E78A0;
            v68 = 3LL;
            v69 = (__int64 (__fastcall **)())&v51;
            v70 = 2uLL;
            std::io::stdio::_eprint(&v67);
            v39 = v53;
            v40 = v54;
            if ( *v54 )
              (*v54)(v53);
            v41 = v40[1];
            if ( v41 )
              _rust_dealloc(v39, v41, v40[2]);
          }
          v20 += 24LL;
          v31 -= 24LL;
        }
        while ( v31 );
      }
    }
    if ( (_QWORD)v43 != 0x8000000000000000LL )
    {
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v43);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v43);
    }
    if ( v47 != (char **)0x8000000000000000LL )
    {
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v47);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v47);
    }
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v55);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v55);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v58);
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v55);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v55);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v58);
  if ( !v4 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_13:
  *(_QWORD *)&v43 = v4;
  *((_QWORD *)&v43 + 1) = v5;
  *(_QWORD *)&v51 = &v43;
  *((_QWORD *)&v51 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v67 = (char **)&unk_11090;
  v68 = 1LL;
  v69 = (__int64 (__fastcall **)())&v51;
  v70 = 1uLL;
  alloc::fmt::format::format_inner(&v65, &v67);
  v51 = v65;
  *(_QWORD *)v52 = v66;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v65 + 1), v66, 1LL, 0LL) )
  {
    *(_QWORD *)&v15 = uucore::util_name();
    v63[0] = v15;
    *(_QWORD *)&v58 = v63;
    *((_QWORD *)&v58 + 1) = <&T as core::fmt::Display>::fmt;
    v67 = (char **)&unk_E7828;
    v68 = 2LL;
    v69 = (__int64 (__fastcall **)())&v58;
    v70 = 1uLL;
    std::io::stdio::_eprint(&v67);
    *(_QWORD *)&v63[0] = &v51;
    *((_QWORD *)&v63[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v67 = (char **)&unk_E7848;
    v68 = 2LL;
    v69 = (__int64 (__fastcall **)())v63;
    v70 = 1uLL;
    std::io::stdio::_eprint(&v67);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v43 + 1) + 104LL))(v43) )
  {
    *(_QWORD *)&v16 = uucore::execution_phrase();
    v63[0] = v16;
    *(_QWORD *)&v58 = v63;
    *((_QWORD *)&v58 + 1) = <&T as core::fmt::Display>::fmt;
    v67 = &off_E7868;
    v68 = 2LL;
    v69 = (__int64 (__fastcall **)())&v58;
    v70 = 1uLL;
    std::io::stdio::_eprint(&v67);
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v43 + 1) + 96LL))(v43);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v51);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v51);
  v18 = v43;
  if ( **((_QWORD **)&v43 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v43 + 1))(v43);
  v19 = *(_QWORD *)(*((_QWORD *)&v18 + 1) + 8LL);
  if ( v19 )
    _rust_dealloc(v18, v19, *(_QWORD *)(*((_QWORD *)&v18 + 1) + 16LL));
  return v17;
}
