__int64 __fastcall uu_more::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 i; // rax
  char **v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
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
  __int64 v28; // r15
  __int64 v29; // rbp
  int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v36; // [rsp+8h] [rbp-4E0h]
  __int64 v37; // [rsp+18h] [rbp-4D0h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+20h] [rbp-4C8h]
  _QWORD **v39; // [rsp+28h] [rbp-4C0h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+30h] [rbp-4B8h]
  __int64 *v41; // [rsp+38h] [rbp-4B0h]
  __int64 (__fastcall *v42)(); // [rsp+40h] [rbp-4A8h]
  _QWORD *v43; // [rsp+48h] [rbp-4A0h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+50h] [rbp-498h]
  __int64 *v45; // [rsp+58h] [rbp-490h]
  __int64 (__fastcall *v46)(); // [rsp+60h] [rbp-488h]
  __int64 v47; // [rsp+68h] [rbp-480h] BYREF
  __int64 v48; // [rsp+70h] [rbp-478h]
  __int64 v49; // [rsp+78h] [rbp-470h]
  __int64 v50; // [rsp+80h] [rbp-468h] BYREF
  __int64 v51; // [rsp+88h] [rbp-460h] BYREF
  unsigned __int64 v52; // [rsp+90h] [rbp-458h]
  __int128 v53; // [rsp+98h] [rbp-450h] BYREF
  _BYTE v54[40]; // [rsp+A8h] [rbp-440h] BYREF
  __int128 v55; // [rsp+D0h] [rbp-418h]
  __int64 v56; // [rsp+E0h] [rbp-408h]
  __int64 v57; // [rsp+E8h] [rbp-400h]
  _DWORD v58[2]; // [rsp+F0h] [rbp-3F8h] BYREF
  __int64 v59; // [rsp+F8h] [rbp-3F0h]
  _OWORD v60[3]; // [rsp+100h] [rbp-3E8h] BYREF
  __int64 v61; // [rsp+130h] [rbp-3B8h]
  _BYTE v62[40]; // [rsp+140h] [rbp-3A8h] BYREF
  __int128 v63; // [rsp+168h] [rbp-380h] BYREF
  _QWORD *v64; // [rsp+178h] [rbp-370h]
  __int128 v65; // [rsp+180h] [rbp-368h] BYREF
  _QWORD *v66; // [rsp+190h] [rbp-358h]
  __int128 v67; // [rsp+198h] [rbp-350h] BYREF
  _QWORD *v68; // [rsp+1A8h] [rbp-340h]
  _OWORD v69[3]; // [rsp+1B0h] [rbp-338h] BYREF
  __int64 v70; // [rsp+1E0h] [rbp-308h]
  __int64 v71; // [rsp+1E8h] [rbp-300h]
  __int128 v72; // [rsp+1F0h] [rbp-2F8h] BYREF
  _QWORD *v73; // [rsp+200h] [rbp-2E8h]
  __int64 v74; // [rsp+208h] [rbp-2E0h]
  __int64 v75; // [rsp+210h] [rbp-2D8h]

  v2 = alloc::boxed::Box<T>::new();
  std::panicking::set_hook(v2, &unk_1602A8);
  uu_more::uu_app(&v72);
  clap_builder::builder::command::Command::try_get_matches_from(&v53, &v72, a1, a2);
  if ( (_QWORD)v53 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v53 + 1));
  v61 = *(_QWORD *)&v54[32];
  v60[2] = *(_OWORD *)&v54[16];
  v60[1] = *(_OWORD *)v54;
  v60[0] = v53;
  uu_more::Options::from((__int64)v62, (__int64)v60);
  v47 = 0LL;
  v48 = 1LL;
  v49 = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v72, v60, aFiles, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(v69, aFiles, 5LL, &v72);
  if ( *(_QWORD *)&v69[0] )
  {
    v4 = v71;
    v50 = uu_more::setup_term();
    v52 = core::iter::traits::exact_size::ExactSizeIterator::len(v4);
    v56 = v70;
    v55 = v69[2];
    *(_OWORD *)&v54[24] = v69[1];
    *(_OWORD *)&v54[8] = v69[0];
    v57 = v4;
    for ( i = 0LL; ; i = v53 )
    {
      v7 = *((_QWORD *)&v53 + 1);
      v8 = *(_QWORD *)v54;
      *(_QWORD *)&v53 = 0LL;
      if ( !i )
      {
        v9 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v54[8]);
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
      v11 = (__int64 *)core::option::Option<T>::get_or_insert_with(&v53, &v54[8]);
      if ( !v7 )
      {
        uu_more::reset_term((__int64)&v50);
        goto LABEL_26;
      }
      v12 = v11;
      v13 = *v11;
      if ( (unsigned __int8)std::path::Path::is_dir(v7, v8) )
      {
        v14 = crossterm::terminal::disable_raw_mode();
        core::result::Result<T,E>::unwrap(v14, &off_160450);
        v39 = (_QWORD **)(&dword_0 + 1);
        v40 = (__int64 (__fastcall *)())v7;
        v41 = (__int64 *)v8;
        LOBYTE(v42) = 1;
        v43 = &v39;
        v44 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v72 = &unk_160468;
        *((_QWORD *)&v72 + 1) = 2LL;
        v75 = 0LL;
        v73 = &v43;
        v74 = 1LL;
        core::option::Option<T>::map_or_else(&v63, &v72);
        LODWORD(v74) = 0;
        v72 = v63;
        v73 = v64;
        v37 = alloc::boxed::Box<T>::new(&v72);
        v38 = &off_1604C0;
        v15 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v37);
        uucore::mods::error::set_exit_code(v15);
        v43 = (_QWORD *)uucore::util_name();
        v44 = v16;
        v39 = &v43;
        v40 = <&T as core::fmt::Display>::fmt;
        v41 = &v37;
        v42 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v72 = &unk_1603B8;
        *((_QWORD *)&v72 + 1) = 3LL;
        v75 = 0LL;
        v73 = &v39;
        v74 = 2LL;
        std::io::stdio::_eprint(&v72);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v37,
          v38);
        v17 = crossterm::terminal::enable_raw_mode();
        v6 = &off_160530;
LABEL_5:
        core::result::Result<T,E>::unwrap(v17, v6);
        continue;
      }
      std::fs::metadata(&v72, v7, v8);
      if ( (_DWORD)v72 == 2 )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v72);
        v18 = crossterm::terminal::disable_raw_mode();
        core::result::Result<T,E>::unwrap(v18, &off_160400);
        v39 = (_QWORD **)(&dword_0 + 1);
        v40 = (__int64 (__fastcall *)())v7;
        v41 = (__int64 *)v8;
        LOBYTE(v42) = 1;
        v43 = &v39;
        v44 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v72 = &off_160418;
        *((_QWORD *)&v72 + 1) = 2LL;
        v75 = 0LL;
        v73 = &v43;
        v74 = 1LL;
        core::option::Option<T>::map_or_else(&v65, &v72);
        LODWORD(v74) = 0;
        v72 = v65;
        v73 = v66;
        v37 = alloc::boxed::Box<T>::new(&v72);
        v38 = &off_160348;
        v19 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v37);
        uucore::mods::error::set_exit_code(v19);
        v43 = (_QWORD *)uucore::util_name();
        v44 = v20;
        v39 = &v43;
        v40 = <&T as core::fmt::Display>::fmt;
        v41 = &v37;
        v42 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v72 = &unk_1603B8;
        *((_QWORD *)&v72 + 1) = 3LL;
        v75 = 0LL;
        v73 = &v39;
        v74 = 2LL;
        std::io::stdio::_eprint(&v72);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v37,
          v38);
        v17 = crossterm::terminal::enable_raw_mode();
        v6 = &off_160438;
        goto LABEL_5;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v72);
      std::fs::File::open(v58, v7, v8);
      if ( v58[0] )
      {
        v21 = v59;
        v51 = v59;
        v22 = crossterm::terminal::disable_raw_mode();
        core::result::Result<T,E>::unwrap(v22, &off_1602F0);
        v39 = (_QWORD **)(&dword_0 + 1);
        v40 = (__int64 (__fastcall *)())v7;
        v41 = (__int64 *)v8;
        LOBYTE(v42) = 1;
        LOBYTE(v37) = std::io::error::Error::kind(v21);
        v43 = &v39;
        v44 = <os_display::Quoted as core::fmt::Display>::fmt;
        v45 = &v37;
        v46 = <std::io::error::ErrorKind as core::fmt::Display>::fmt;
        *(_QWORD *)&v72 = &off_160308;
        *((_QWORD *)&v72 + 1) = 2LL;
        v75 = 0LL;
        v73 = &v43;
        v74 = 2LL;
        core::option::Option<T>::map_or_else(&v67, &v72);
        LODWORD(v74) = 0;
        v72 = v67;
        v73 = v68;
        v37 = alloc::boxed::Box<T>::new(&v72);
        v38 = &off_160348;
        v23 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v37);
        uucore::mods::error::set_exit_code(v23);
        v43 = (_QWORD *)uucore::util_name();
        v44 = v24;
        v39 = &v43;
        v40 = <&T as core::fmt::Display>::fmt;
        v41 = &v37;
        v42 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v72 = &unk_1603B8;
        *((_QWORD *)&v72 + 1) = 3LL;
        v75 = 0LL;
        v73 = &v39;
        v74 = 2LL;
        std::io::stdio::_eprint(&v72);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v37,
          v38);
        v25 = crossterm::terminal::enable_raw_mode();
        core::result::Result<T,E>::unwrap(v25, &off_1603E8);
        core::ptr::drop_in_place<std::io::error::Error>(&v51);
        continue;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v72, 0x2000LL, v58[1]);
      v26 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(&v72, &v47);
      core::result::Result<T,E>::unwrap(v26, v27, &off_1602D8);
      v28 = v48;
      v29 = v49;
      std::sys::os_str::bytes::Slice::to_str(&v39, v7, v8);
      v30 = 0;
      if ( !v39 )
        break;
      v31 = 0LL;
      if ( v13 )
        goto LABEL_22;
LABEL_23:
      LOBYTE(v30) = v52 >= 2;
      v3 = uu_more::more(v28, v29, (__int64)&v50, v30, v31, (__int64)v41, v13, v12[1], (__int64)v62);
      if ( v3 )
      {
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v72);
        goto LABEL_33;
      }
      v49 = 0LL;
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v72);
    }
    v31 = (__int64)v40;
    if ( !v13 )
      goto LABEL_23;
LABEL_22:
    v13 = *v12;
    goto LABEL_23;
  }
  *(_QWORD *)&v72 = std::io::stdio::stdin();
  v32 = <std::io::stdio::Stdin as std::io::Read>::read_to_string(&v72, &v47);
  core::result::Result<T,E>::unwrap(v32, v33, &off_160548);
  if ( !v49 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v53);
    v73 = *(_QWORD **)v54;
    v72 = v53;
    LODWORD(v74) = 1;
    v3 = alloc::boxed::Box<T>::new(&v72);
    goto LABEL_33;
  }
  *(_QWORD *)&v72 = uu_more::setup_term();
  v3 = uu_more::more(v48, v49, (__int64)&v72, 0, 0LL, v34, 0LL, v36, (__int64)v62);
  if ( v3 )
  {
LABEL_33:
    core::ptr::drop_in_place<alloc::string::String>(&v47);
    core::ptr::drop_in_place<uu_more::Options>(v62);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v60);
  }
  else
  {
    uu_more::reset_term((__int64)&v72);
LABEL_26:
    core::ptr::drop_in_place<alloc::string::String>(&v47);
    core::ptr::drop_in_place<uu_more::Options>(v62);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v60);
    return 0LL;
  }
  return v3;
}
