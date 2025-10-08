// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_dircolors::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  char flag; // cl
  char v9; // al
  char v10; // cl
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r12
  __int128 **v17; // r15
  __int128 **v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  char v22; // bp
  char v23; // [rsp+7h] [rbp-491h] BYREF
  __int128 v24; // [rsp+8h] [rbp-490h] BYREF
  __int128 v25; // [rsp+18h] [rbp-480h]
  __int128 v26; // [rsp+28h] [rbp-470h]
  __int64 v27; // [rsp+38h] [rbp-460h]
  __int128 *v28; // [rsp+48h] [rbp-450h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+50h] [rbp-448h]
  __int64 *v30; // [rsp+58h] [rbp-440h]
  __int64 (__fastcall *v31)(); // [rsp+60h] [rbp-438h]
  __int64 v32; // [rsp+68h] [rbp-430h] BYREF
  __int64 v33; // [rsp+70h] [rbp-428h] BYREF
  _QWORD *v34; // [rsp+78h] [rbp-420h]
  __int64 v35; // [rsp+80h] [rbp-418h]
  __int128 v36; // [rsp+88h] [rbp-410h]
  _OWORD v37[3]; // [rsp+98h] [rbp-400h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-3D0h]
  _DWORD v39[2]; // [rsp+D0h] [rbp-3C8h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-3C0h]
  __int128 dest; // [rsp+E0h] [rbp-3B8h] BYREF
  __int128 **v42; // [rsp+F0h] [rbp-3A8h]
  __int64 v43; // [rsp+F8h] [rbp-3A0h]
  __int64 v44; // [rsp+100h] [rbp-398h]
  __int128 v45; // [rsp+3A8h] [rbp-F0h] BYREF
  __int128 **v46; // [rsp+3B8h] [rbp-E0h]
  __int128 v47; // [rsp+3C0h] [rbp-D8h] BYREF
  __int128 **v48; // [rsp+3D0h] [rbp-C8h]
  __int128 v49; // [rsp+3D8h] [rbp-C0h] BYREF
  __int128 **v50; // [rsp+3E8h] [rbp-B0h]
  __int128 v51; // [rsp+3F0h] [rbp-A8h] BYREF
  __int128 **v52; // [rsp+400h] [rbp-98h]
  _BYTE v53[48]; // [rsp+408h] [rbp-90h] BYREF
  _BYTE v54[96]; // [rsp+438h] [rbp-60h] BYREF

  uu_dircolors::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v24, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v24, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v24 + 1),
             &dest,
             v2,
             -(__int64)v24);
  v38 = v27;
  v37[2] = v26;
  v37[1] = v25;
  v37[0] = v24;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v37);
  clap_builder::parser::error::MatchesError::unwrap(&v24, &dest);
  *(_QWORD *)&dest = 0LL;
  *((_QWORD *)&dest + 1) = 8LL;
  v42 = 0LL;
  core::option::Option<T>::map_or(&v33, &v24, &dest);
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aCShell, 7LL)
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aBourneShell, 12LL)
    || !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aPrintDatabase, 14LL)
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aPrintLsColors, 15LL) )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aPrintDatabase, 14LL)
      && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aPrintLsColors, 15LL) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v24, aOptionsPrintDa, 69LL);
      v42 = (__int128 **)v25;
      dest = v24;
      LODWORD(v43) = 1;
      v4 = alloc::boxed::Box<T>::new(&dest);
      goto LABEL_8;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aPrintDatabase, 14LL) )
    {
      if ( v35 )
      {
        v6 = *(_QWORD *)(*v34 + 8LL);
        v7 = *(_QWORD *)(*v34 + 16LL);
        *(_QWORD *)&v24 = 0LL;
        *((_QWORD *)&v24 + 1) = v6;
        *(_QWORD *)&v25 = v7;
        BYTE8(v25) = 1;
        v28 = &v24;
        v29 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_F4FC0;
        *((_QWORD *)&dest + 1) = 2LL;
        v44 = 0LL;
        v42 = &v28;
        v43 = 1LL;
        core::option::Option<T>::map_or_else(&v45, &dest);
        LODWORD(v43) = 1;
        dest = v45;
        v42 = v46;
        v4 = alloc::boxed::Box<T>::new(&dest);
        goto LABEL_8;
      }
      uu_dircolors::generate_dircolors_config(&v24);
      v28 = &v24;
      v29 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_F4F68;
      *((_QWORD *)&dest + 1) = 2LL;
      v44 = 0LL;
      v42 = &v28;
      v43 = 1LL;
      std::io::stdio::_print(&dest);
LABEL_27:
      core::ptr::drop_in_place<alloc::string::String>(v24, *((_QWORD *)&v24 + 1));
      v5 = 0LL;
      goto LABEL_9;
    }
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aCShell, 7LL);
    v9 = 1;
    if ( !flag )
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aBourneShell, 12LL) )
      {
        v9 = 0;
      }
      else
      {
        v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aPrintLsColors, 15LL);
        v9 = 2;
        if ( !v10 )
        {
          v23 = 3;
          v9 = uu_dircolors::guess_syntax();
          if ( v9 == 3 )
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v24, aNoShellEnviron, 61LL);
            v42 = (__int128 **)v25;
            dest = v24;
            LODWORD(v43) = 1;
            v11 = alloc::boxed::Box<T>::new(&dest);
            goto LABEL_34;
          }
        }
      }
    }
    v23 = v9;
    if ( v35 != 1 )
    {
      if ( v35 )
      {
        v19 = v34[1];
        v20 = *(_QWORD *)(v19 + 8);
        v21 = *(_QWORD *)(v19 + 16);
        *(_QWORD *)&v24 = 0LL;
        *((_QWORD *)&v24 + 1) = v20;
        *(_QWORD *)&v25 = v21;
        BYTE8(v25) = 1;
        v28 = &v24;
        v29 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_F4FE0;
        *((_QWORD *)&dest + 1) = 1LL;
        v44 = 0LL;
        v42 = &v28;
        v43 = 1LL;
        core::option::Option<T>::map_or_else(&v47, &dest);
        LODWORD(v43) = 1;
        dest = v47;
        v42 = v48;
        v4 = alloc::boxed::Box<T>::new(&dest);
        goto LABEL_8;
      }
      uu_dircolors::generate_ls_colors(&v24, &v23, asc_1A222, 1LL);
      v28 = &v24;
      v29 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_F4F68;
      *((_QWORD *)&dest + 1) = 2LL;
      v44 = 0LL;
      v42 = &v28;
      v43 = 1LL;
      std::io::stdio::_print(&dest);
      goto LABEL_27;
    }
    v12 = v34;
    v13 = *(_QWORD *)(*v34 + 8LL);
    v14 = *(_QWORD *)(*v34 + 16LL);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, asc_1AAD4, 1LL) )
    {
      v15 = std::io::stdio::stdin();
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v54, v15);
      uu_dircolors::parse(&dest, v54, &v23, *(_QWORD *)(*v12 + 8LL), *(_QWORD *)(*v12 + 16LL));
      v16 = *((_QWORD *)&dest + 1);
      v17 = v42;
      v18 = (__int128 **)v43;
      if ( (dest & 1) != 0 )
      {
LABEL_30:
        LODWORD(v43) = 1;
        *(_QWORD *)&dest = v16;
        *((_QWORD *)&dest + 1) = v17;
        v42 = v18;
        v5 = alloc::boxed::Box<T>::new(&dest);
LABEL_39:
        core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v33, v12);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
        return v5;
      }
LABEL_38:
      *(_QWORD *)&v24 = v16;
      *((_QWORD *)&v24 + 1) = v17;
      *(_QWORD *)&v25 = v18;
      v28 = &v24;
      v29 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_F4F68;
      *((_QWORD *)&dest + 1) = 2LL;
      v44 = 0LL;
      v42 = &v28;
      v43 = 1LL;
      std::io::stdio::_print(&dest);
      core::ptr::drop_in_place<alloc::string::String>(v24, *((_QWORD *)&v24 + 1));
      v5 = 0LL;
      goto LABEL_39;
    }
    if ( !(unsigned __int8)std::path::Path::is_dir(v13, v14) )
    {
      std::fs::File::open(v39, v13, v14);
      if ( v39[0] == 1 )
      {
        v32 = v40;
        *(_QWORD *)&v24 = 1LL;
        *((_QWORD *)&v24 + 1) = v13;
        *(_QWORD *)&v25 = v14;
        BYTE8(v25) = 0;
        v28 = &v24;
        v29 = <os_display::Quoted as core::fmt::Display>::fmt;
        v30 = &v32;
        v31 = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_F4F48;
        *((_QWORD *)&dest + 1) = 2LL;
        v44 = 0LL;
        v42 = &v28;
        v43 = 2LL;
        core::option::Option<T>::map_or_else(&v51, &dest);
        LODWORD(v43) = 1;
        dest = v51;
        v42 = v52;
        v5 = alloc::boxed::Box<T>::new(&dest);
        core::ptr::drop_in_place<std::io::error::Error>(v32);
        goto LABEL_9;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v53, v39[1]);
      alloc::string::String::from_utf8_lossy(&v24, v13, v14);
      v36 = v24;
      uu_dircolors::parse((__int64)&dest, (__int64)v53, &v23, *((__int64 *)&v24 + 1), v25);
      v16 = *((_QWORD *)&dest + 1);
      v22 = dest;
      v17 = v42;
      v18 = (__int128 **)v43;
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v36, *((_QWORD *)&v36 + 1));
      if ( (v22 & 1) != 0 )
        goto LABEL_30;
      goto LABEL_38;
    }
    *(_QWORD *)&v24 = 1LL;
    *((_QWORD *)&v24 + 1) = v13;
    *(_QWORD *)&v25 = v14;
    BYTE8(v25) = 1;
    v28 = &v24;
    v29 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_F4FF0;
    *((_QWORD *)&dest + 1) = 1LL;
    v44 = 0LL;
    v42 = &v28;
    v43 = 1LL;
    core::option::Option<T>::map_or_else(&v49, &dest);
    LODWORD(v43) = 2;
    dest = v49;
    v42 = v50;
    v11 = alloc::boxed::Box<T>::new(&dest);
LABEL_34:
    v5 = v11;
    goto LABEL_9;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v24, aTheOptionsToOu, 91LL);
  v42 = (__int128 **)v25;
  dest = v24;
  LODWORD(v43) = 1;
  v4 = alloc::boxed::Box<T>::new(&dest);
LABEL_8:
  v5 = v4;
LABEL_9:
  core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v33, v34);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
  return v5;
}