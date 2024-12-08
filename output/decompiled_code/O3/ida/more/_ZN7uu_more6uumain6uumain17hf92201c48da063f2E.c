__int64 __fastcall uu_more::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 i; // rax
  char **v6; // rsi
  __int64 v7; // rbx
  __int64 *v8; // r13
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 *v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 (__fastcall *v16)(); // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 (__fastcall *v20)(); // rdx
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 (__fastcall *v24)(); // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // r15d
  int v29; // ebp
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // rdi
  __int64 v33; // rdx
  int v34; // r9d
  __int64 v36; // [rsp+18h] [rbp-4D0h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+20h] [rbp-4C8h]
  _QWORD **v38; // [rsp+28h] [rbp-4C0h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+30h] [rbp-4B8h]
  __int64 *v40; // [rsp+38h] [rbp-4B0h]
  __int64 (__fastcall *v41)(); // [rsp+40h] [rbp-4A8h]
  _QWORD *v42; // [rsp+48h] [rbp-4A0h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+50h] [rbp-498h]
  __int64 *v44; // [rsp+58h] [rbp-490h]
  __int64 (__fastcall *v45)(); // [rsp+60h] [rbp-488h]
  __int64 v46; // [rsp+68h] [rbp-480h] BYREF
  __int64 v47; // [rsp+70h] [rbp-478h]
  __int64 v48; // [rsp+78h] [rbp-470h]
  __int64 v49; // [rsp+80h] [rbp-468h] BYREF
  __int64 v50; // [rsp+88h] [rbp-460h] BYREF
  unsigned __int64 v51; // [rsp+90h] [rbp-458h]
  __int128 v52; // [rsp+98h] [rbp-450h] BYREF
  _BYTE v53[40]; // [rsp+A8h] [rbp-440h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-418h]
  __int64 v55; // [rsp+E0h] [rbp-408h]
  __int64 v56; // [rsp+E8h] [rbp-400h]
  _DWORD v57[2]; // [rsp+F0h] [rbp-3F8h] BYREF
  __int64 v58; // [rsp+F8h] [rbp-3F0h]
  _OWORD v59[3]; // [rsp+100h] [rbp-3E8h] BYREF
  __int64 v60; // [rsp+130h] [rbp-3B8h]
  _BYTE v61[40]; // [rsp+140h] [rbp-3A8h] BYREF
  __int128 v62; // [rsp+168h] [rbp-380h] BYREF
  _QWORD *v63; // [rsp+178h] [rbp-370h]
  __int128 v64; // [rsp+180h] [rbp-368h] BYREF
  _QWORD *v65; // [rsp+190h] [rbp-358h]
  __int128 v66; // [rsp+198h] [rbp-350h] BYREF
  _QWORD *v67; // [rsp+1A8h] [rbp-340h]
  _OWORD v68[3]; // [rsp+1B0h] [rbp-338h] BYREF
  __int64 v69; // [rsp+1E0h] [rbp-308h]
  __int64 v70; // [rsp+1E8h] [rbp-300h]
  __int128 v71; // [rsp+1F0h] [rbp-2F8h] BYREF
  _QWORD *v72; // [rsp+200h] [rbp-2E8h]
  __int64 v73; // [rsp+208h] [rbp-2E0h]
  __int64 v74; // [rsp+210h] [rbp-2D8h]

  v2 = alloc::boxed::Box<T>::new();
  std::panicking::set_hook(v2, &unk_1602A8);
  uu_more::uu_app(&v71);
  clap_builder::builder::command::Command::try_get_matches_from(&v52, &v71, a1, a2);
  if ( (_QWORD)v52 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v52 + 1));
  v60 = *(_QWORD *)&v53[32];
  v59[2] = *(_OWORD *)&v53[16];
  v59[1] = *(_OWORD *)v53;
  v59[0] = v52;
  uu_more::Options::from(v61, v59);
  v46 = 0LL;
  v47 = 1LL;
  v48 = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v71, v59, aFiles, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(v68, aFiles, 5LL, &v71);
  if ( *(_QWORD *)&v68[0] )
  {
    v4 = v70;
    v49 = uu_more::setup_term();
    v51 = core::iter::traits::exact_size::ExactSizeIterator::len(v4);
    v55 = v69;
    v54 = v68[2];
    *(_OWORD *)&v53[24] = v68[1];
    *(_OWORD *)&v53[8] = v68[0];
    v56 = v4;
    for ( i = 0LL; ; i = v52 )
    {
      v7 = *((_QWORD *)&v52 + 1);
      v8 = *(__int64 **)v53;
      *(_QWORD *)&v52 = 0LL;
      if ( !i )
      {
        v9 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v53[8]);
        if ( v9 )
        {
          v7 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(
                 *(_QWORD *)(v9 + 8),
                 *(_QWORD *)(v9 + 16));
          v8 = v10;
        }
        else
        {
          v7 = 0LL;
        }
      }
      v11 = (__int64 *)core::option::Option<T>::get_or_insert_with(&v52, &v53[8]);
      if ( !v7 )
      {
        uu_more::reset_term(&v49);
        goto LABEL_26;
      }
      v12 = v11;
      v13 = *v11;
      if ( (unsigned __int8)std::path::Path::is_dir(v7, v8) )
      {
        v14 = crossterm::terminal::disable_raw_mode();
        core::result::Result<T,E>::unwrap(v14, &off_160450);
        v38 = (_QWORD **)(&dword_0 + 1);
        v39 = (__int64 (__fastcall *)())v7;
        v40 = v8;
        LOBYTE(v41) = 1;
        v42 = &v38;
        v43 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v71 = &unk_160468;
        *((_QWORD *)&v71 + 1) = 2LL;
        v74 = 0LL;
        v72 = &v42;
        v73 = 1LL;
        core::option::Option<T>::map_or_else(&v62, &v71);
        LODWORD(v73) = 0;
        v71 = v62;
        v72 = v63;
        v36 = alloc::boxed::Box<T>::new(&v71);
        v37 = &off_1604C0;
        v15 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v36);
        uucore::mods::error::set_exit_code(v15);
        v42 = (_QWORD *)uucore::util_name();
        v43 = v16;
        v38 = &v42;
        v39 = <&T as core::fmt::Display>::fmt;
        v40 = &v36;
        v41 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v71 = &unk_1603B8;
        *((_QWORD *)&v71 + 1) = 3LL;
        v74 = 0LL;
        v72 = &v38;
        v73 = 2LL;
        std::io::stdio::_eprint(&v71);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v36,
          v37);
        v17 = crossterm::terminal::enable_raw_mode();
        v6 = &off_160530;
LABEL_5:
        core::result::Result<T,E>::unwrap(v17, v6);
        continue;
      }
      std::fs::metadata(&v71, v7, v8);
      if ( (_DWORD)v71 == 2 )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v71);
        v18 = crossterm::terminal::disable_raw_mode();
        core::result::Result<T,E>::unwrap(v18, &off_160400);
        v38 = (_QWORD **)(&dword_0 + 1);
        v39 = (__int64 (__fastcall *)())v7;
        v40 = v8;
        LOBYTE(v41) = 1;
        v42 = &v38;
        v43 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v71 = &off_160418;
        *((_QWORD *)&v71 + 1) = 2LL;
        v74 = 0LL;
        v72 = &v42;
        v73 = 1LL;
        core::option::Option<T>::map_or_else(&v64, &v71);
        LODWORD(v73) = 0;
        v71 = v64;
        v72 = v65;
        v36 = alloc::boxed::Box<T>::new(&v71);
        v37 = &off_160348;
        v19 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v36);
        uucore::mods::error::set_exit_code(v19);
        v42 = (_QWORD *)uucore::util_name();
        v43 = v20;
        v38 = &v42;
        v39 = <&T as core::fmt::Display>::fmt;
        v40 = &v36;
        v41 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v71 = &unk_1603B8;
        *((_QWORD *)&v71 + 1) = 3LL;
        v74 = 0LL;
        v72 = &v38;
        v73 = 2LL;
        std::io::stdio::_eprint(&v71);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v36,
          v37);
        v17 = crossterm::terminal::enable_raw_mode();
        v6 = &off_160438;
        goto LABEL_5;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v71);
      std::fs::File::open(v57, v7, v8);
      if ( v57[0] )
      {
        v21 = v58;
        v50 = v58;
        v22 = crossterm::terminal::disable_raw_mode();
        core::result::Result<T,E>::unwrap(v22, &off_1602F0);
        v38 = (_QWORD **)(&dword_0 + 1);
        v39 = (__int64 (__fastcall *)())v7;
        v40 = v8;
        LOBYTE(v41) = 1;
        LOBYTE(v36) = std::io::error::Error::kind(v21);
        v42 = &v38;
        v43 = <os_display::Quoted as core::fmt::Display>::fmt;
        v44 = &v36;
        v45 = <std::io::error::ErrorKind as core::fmt::Display>::fmt;
        *(_QWORD *)&v71 = &off_160308;
        *((_QWORD *)&v71 + 1) = 2LL;
        v74 = 0LL;
        v72 = &v42;
        v73 = 2LL;
        core::option::Option<T>::map_or_else(&v66, &v71);
        LODWORD(v73) = 0;
        v71 = v66;
        v72 = v67;
        v36 = alloc::boxed::Box<T>::new(&v71);
        v37 = &off_160348;
        v23 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v36);
        uucore::mods::error::set_exit_code(v23);
        v42 = (_QWORD *)uucore::util_name();
        v43 = v24;
        v38 = &v42;
        v39 = <&T as core::fmt::Display>::fmt;
        v40 = &v36;
        v41 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v71 = &unk_1603B8;
        *((_QWORD *)&v71 + 1) = 3LL;
        v74 = 0LL;
        v72 = &v38;
        v73 = 2LL;
        std::io::stdio::_eprint(&v71);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v36,
          v37);
        v25 = crossterm::terminal::enable_raw_mode();
        core::result::Result<T,E>::unwrap(v25, &off_1603E8);
        core::ptr::drop_in_place<std::io::error::Error>(&v50);
        continue;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v71, 0x2000LL, v57[1]);
      v26 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(&v71, &v46);
      core::result::Result<T,E>::unwrap(v26, v27, &off_1602D8);
      v28 = v47;
      v29 = v48;
      std::sys::os_str::bytes::Slice::to_str(&v38, v7, v8);
      v30 = 0;
      if ( !v38 )
        break;
      v31 = 0;
      if ( v13 )
        goto LABEL_22;
LABEL_23:
      LOBYTE(v30) = v51 >= 2;
      v3 = uu_more::more(v28, v29, (unsigned int)&v49, v30, v31, (_DWORD)v40, v13);
      if ( v3 )
      {
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v71);
        goto LABEL_33;
      }
      v48 = 0LL;
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v71);
    }
    v31 = (int)v39;
    if ( !v13 )
      goto LABEL_23;
LABEL_22:
    v13 = *v12;
    goto LABEL_23;
  }
  *(_QWORD *)&v71 = std::io::stdio::stdin();
  v32 = <std::io::stdio::Stdin as std::io::Read>::read_to_string(&v71, &v46);
  core::result::Result<T,E>::unwrap(v32, v33, &off_160548);
  if ( !v48 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v52);
    v72 = *(_QWORD **)v53;
    v71 = v52;
    LODWORD(v73) = 1;
    v3 = alloc::boxed::Box<T>::new(&v71);
    goto LABEL_33;
  }
  *(_QWORD *)&v71 = uu_more::setup_term();
  v3 = uu_more::more(v47, v48, (unsigned int)&v71, 0, 0, v34, 0LL);
  if ( v3 )
  {
LABEL_33:
    core::ptr::drop_in_place<alloc::string::String>(&v46);
    core::ptr::drop_in_place<uu_more::Options>(v61);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v59);
  }
  else
  {
    uu_more::reset_term(&v71);
LABEL_26:
    core::ptr::drop_in_place<alloc::string::String>(&v46);
    core::ptr::drop_in_place<uu_more::Options>(v61);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v59);
    return 0LL;
  }
  return v3;
}
