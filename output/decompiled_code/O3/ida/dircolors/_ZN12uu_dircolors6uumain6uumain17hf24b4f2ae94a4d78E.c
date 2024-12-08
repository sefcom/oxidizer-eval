__int64 __fastcall uu_dircolors::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int128 v5; // xmm0
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // r15
  __int64 v11; // r14
  char v12; // [rsp+Fh] [rbp-499h] BYREF
  __m256i v13; // [rsp+10h] [rbp-498h] BYREF
  __int128 v14; // [rsp+30h] [rbp-478h]
  __int64 v15; // [rsp+40h] [rbp-468h]
  __m256i *v16; // [rsp+50h] [rbp-458h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+58h] [rbp-450h]
  __int64 *v18; // [rsp+60h] [rbp-448h]
  __int64 (__fastcall *v19)(); // [rsp+68h] [rbp-440h]
  _BYTE v20[8]; // [rsp+70h] [rbp-438h] BYREF
  _QWORD *v21; // [rsp+78h] [rbp-430h]
  __int64 v22; // [rsp+80h] [rbp-428h]
  __int64 v23; // [rsp+88h] [rbp-420h] BYREF
  __m256i v24; // [rsp+90h] [rbp-418h]
  __m256i v25; // [rsp+B8h] [rbp-3F0h] BYREF
  __int128 v26; // [rsp+D8h] [rbp-3D0h]
  __int64 v27; // [rsp+E8h] [rbp-3C0h]
  _DWORD v28[2]; // [rsp+F0h] [rbp-3B8h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-3B0h]
  __int128 v30; // [rsp+100h] [rbp-3A8h] BYREF
  __int64 v31; // [rsp+110h] [rbp-398h]
  __int128 v32; // [rsp+118h] [rbp-390h] BYREF
  __int64 v33; // [rsp+128h] [rbp-380h]
  __int128 v34; // [rsp+130h] [rbp-378h] BYREF
  __int64 v35; // [rsp+140h] [rbp-368h]
  __int128 v36; // [rsp+148h] [rbp-360h] BYREF
  __int64 v37; // [rsp+158h] [rbp-350h]
  __m256i v38; // [rsp+160h] [rbp-348h] BYREF
  __int64 v39; // [rsp+180h] [rbp-328h]
  __int64 v40; // [rsp+428h] [rbp-80h] BYREF
  _BYTE v41[80]; // [rsp+458h] [rbp-50h] BYREF

  uu_dircolors::uu_app(&v38);
  clap_builder::builder::command::Command::try_get_matches_from(&v13, &v38, a1, a2);
  if ( v13.m256i_i64[0] != 0x8000000000000000LL )
  {
    v27 = v15;
    v26 = v14;
    v25 = v13;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v38, &v25, aFile, 4LL);
    clap_builder::parser::error::MatchesError::unwrap(&v13, aFile, 4LL, &v38);
    v38.m256i_i64[0] = 0LL;
    *(_OWORD *)&v38.m256i_u64[1] = 8uLL;
    core::option::Option<T>::map_or(v20, &v13, &v38);
    if ( ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aCShell, 7LL)
       || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aBourneShell, 12LL))
      && ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aPrintDatabase, 14LL)
       || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aPrintLsColors, 15LL)) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v13, aTheOptionsToOu, 91LL);
      v38.m256i_i64[2] = v13.m256i_i64[2];
      *(_OWORD *)v38.m256i_i8 = *(_OWORD *)v13.m256i_i8;
      v38.m256i_i32[6] = 1;
      v3 = alloc::boxed::Box<T>::new(&v38);
LABEL_8:
      v2 = v3;
LABEL_9:
      core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(v20);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v25);
      return v2;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aPrintDatabase, 14LL)
      && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aPrintLsColors, 15LL) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v13, aOptionsPrintDa, 69LL);
      v38.m256i_i64[2] = v13.m256i_i64[2];
      *(_OWORD *)v38.m256i_i8 = *(_OWORD *)v13.m256i_i8;
      v38.m256i_i32[6] = 1;
      v3 = alloc::boxed::Box<T>::new(&v38);
      goto LABEL_8;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aPrintDatabase, 14LL) )
    {
      if ( v22 )
      {
        v5 = *(_OWORD *)(*v21 + 8LL);
        v13.m256i_i64[0] = 0LL;
        *(_OWORD *)&v13.m256i_u64[1] = v5;
        v13.m256i_i8[24] = 1;
        v16 = &v13;
        v17 = <os_display::Quoted as core::fmt::Display>::fmt;
        v38.m256i_i64[0] = (__int64)&off_124D38;
        v38.m256i_i64[1] = 2LL;
        v39 = 0LL;
        v38.m256i_i64[2] = (__int64)&v16;
        v38.m256i_i64[3] = 1LL;
        core::option::Option<T>::map_or_else(&v30, &v38);
        v38.m256i_i32[6] = 1;
        *(_OWORD *)v38.m256i_i8 = v30;
        v38.m256i_i64[2] = v31;
        v3 = alloc::boxed::Box<T>::new(&v38);
        goto LABEL_8;
      }
      uu_dircolors::generate_dircolors_config(&v13);
      v16 = &v13;
      v17 = <alloc::string::String as core::fmt::Display>::fmt;
      v38.m256i_i64[0] = (__int64)&unk_124B70;
      v38.m256i_i64[1] = 2LL;
      v39 = 0LL;
      v38.m256i_i64[2] = (__int64)&v16;
      v38.m256i_i64[3] = 1LL;
      std::io::stdio::_print(&v38);
      core::ptr::drop_in_place<alloc::string::String>(&v13);
LABEL_30:
      v2 = 0LL;
      goto LABEL_9;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aCShell, 7LL) )
    {
      v12 = 1;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 &v25,
                                 aBourneShell,
                                 12LL) )
    {
      v12 = 0;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 &v25,
                                 aPrintLsColors,
                                 15LL) )
    {
      v12 = 2;
    }
    else
    {
      v12 = 3;
      v6 = uu_dircolors::guess_syntax();
      if ( v6 == 3 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v13, aNoShellEnviron, 61LL);
        v38.m256i_i64[2] = v13.m256i_i64[2];
        *(_OWORD *)v38.m256i_i8 = *(_OWORD *)v13.m256i_i8;
        v38.m256i_i32[6] = 1;
        v7 = alloc::boxed::Box<T>::new(&v38);
        goto LABEL_40;
      }
      v12 = v6;
    }
    if ( v22 != 1 )
    {
      if ( v22 )
      {
        v9 = *(_OWORD *)(v21[1] + 8LL);
        v13.m256i_i64[0] = 0LL;
        *(_OWORD *)&v13.m256i_u64[1] = v9;
        v13.m256i_i8[24] = 1;
        v16 = &v13;
        v17 = <os_display::Quoted as core::fmt::Display>::fmt;
        v38.m256i_i64[0] = (__int64)&off_124C80;
        v38.m256i_i64[1] = 1LL;
        v39 = 0LL;
        v38.m256i_i64[2] = (__int64)&v16;
        v38.m256i_i64[3] = 1LL;
        core::option::Option<T>::map_or_else(&v32, &v38);
        v38.m256i_i32[6] = 1;
        *(_OWORD *)v38.m256i_i8 = v32;
        v38.m256i_i64[2] = v33;
        v3 = alloc::boxed::Box<T>::new(&v38);
        goto LABEL_8;
      }
      uu_dircolors::generate_ls_colors(&v13, &v12, asc_16E94, 1LL);
      v16 = &v13;
      v17 = <alloc::string::String as core::fmt::Display>::fmt;
      v38.m256i_i64[0] = (__int64)&unk_124B70;
      v38.m256i_i64[1] = 2LL;
      v39 = 0LL;
      v38.m256i_i64[2] = (__int64)&v16;
      v38.m256i_i64[3] = 1LL;
      std::io::stdio::_print(&v38);
      core::ptr::drop_in_place<alloc::string::String>(&v13);
      goto LABEL_30;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(*v21 + 8LL),
                            *(_QWORD *)(*v21 + 16LL),
                            asc_175D4,
                            1LL) )
    {
      v8 = std::io::stdio::stdin();
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v40, 0x2000LL, v8);
      if ( !v22 )
        core::panicking::panic_bounds_check(0LL, 0LL, &off_124C68);
      uu_dircolors::parse(
        (__int64)&v38,
        (__int64)&v40,
        &v12,
        *(__int64 (__fastcall **)())(*v21 + 8LL),
        *(char *****)(*v21 + 16LL));
      v24 = v38;
      goto LABEL_34;
    }
    if ( !v22 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_124C40);
    v10 = *(_QWORD *)(*v21 + 8LL);
    v11 = *(_QWORD *)(*v21 + 16LL);
    if ( !(unsigned __int8)std::path::Path::is_dir(v10, v11) )
    {
      std::fs::File::open(v28, v10, v11);
      if ( v28[0] )
      {
        v23 = v29;
        v13.m256i_i64[0] = 1LL;
        v13.m256i_i64[1] = v10;
        v13.m256i_i64[2] = v11;
        v13.m256i_i8[24] = 0;
        v16 = &v13;
        v17 = <os_display::Quoted as core::fmt::Display>::fmt;
        v18 = &v23;
        v19 = <std::io::error::Error as core::fmt::Display>::fmt;
        v38.m256i_i64[0] = (__int64)&unk_124B50;
        v38.m256i_i64[1] = 2LL;
        v39 = 0LL;
        v38.m256i_i64[2] = (__int64)&v16;
        v38.m256i_i64[3] = 2LL;
        core::option::Option<T>::map_or_else(&v36, &v38);
        v38.m256i_i32[6] = 1;
        *(_OWORD *)v38.m256i_i8 = v36;
        v38.m256i_i64[2] = v37;
        v2 = alloc::boxed::Box<T>::new(&v38);
        core::ptr::drop_in_place<std::io::error::Error>(v23);
        goto LABEL_9;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v41, 0x2000LL, v28[1]);
      std::sys::os_str::bytes::Slice::to_string_lossy(&v13, v10, v11);
      uu_dircolors::parse(
        (__int64)&v38,
        (__int64)v41,
        &v12,
        (__int64 (__fastcall *)())v13.m256i_i64[1],
        (char ****)v13.m256i_i64[2]);
      v24 = v38;
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v13);
LABEL_34:
      if ( v24.m256i_i64[0] )
      {
        v38.m256i_i64[2] = v24.m256i_i64[3];
        *(_OWORD *)v38.m256i_i8 = *(_OWORD *)&v24.m256i_u64[1];
        v38.m256i_i32[6] = 1;
        v2 = alloc::boxed::Box<T>::new(&v38);
      }
      else
      {
        v13.m256i_i64[2] = v24.m256i_i64[3];
        *(_OWORD *)v13.m256i_i8 = *(_OWORD *)&v24.m256i_u64[1];
        v16 = &v13;
        v17 = <alloc::string::String as core::fmt::Display>::fmt;
        v38.m256i_i64[0] = (__int64)&unk_124B70;
        v38.m256i_i64[1] = 2LL;
        v39 = 0LL;
        v38.m256i_i64[2] = (__int64)&v16;
        v38.m256i_i64[3] = 1LL;
        std::io::stdio::_print(&v38);
        core::ptr::drop_in_place<alloc::string::String>(&v13);
        v2 = 0LL;
      }
      goto LABEL_9;
    }
    v13.m256i_i64[0] = 1LL;
    v13.m256i_i64[1] = v10;
    v13.m256i_i64[2] = v11;
    v13.m256i_i8[24] = 1;
    v16 = &v13;
    v17 = <os_display::Quoted as core::fmt::Display>::fmt;
    v38.m256i_i64[0] = (__int64)&off_124C58;
    v38.m256i_i64[1] = 1LL;
    v39 = 0LL;
    v38.m256i_i64[2] = (__int64)&v16;
    v38.m256i_i64[3] = 1LL;
    core::option::Option<T>::map_or_else(&v34, &v38);
    v38.m256i_i32[6] = 2;
    *(_OWORD *)v38.m256i_i8 = v34;
    v38.m256i_i64[2] = v35;
    v7 = alloc::boxed::Box<T>::new(&v38);
LABEL_40:
    v2 = v7;
    goto LABEL_9;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13.m256i_i64[1]);
}
