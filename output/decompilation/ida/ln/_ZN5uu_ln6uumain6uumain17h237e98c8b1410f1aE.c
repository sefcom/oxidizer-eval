__int64 __fastcall uu_ln::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v7; // r14
  char flag; // bl
  char v9; // bp
  __int64 v10; // rbx
  char v11; // r14
  char v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  char v15; // r12
  char v16; // r13
  char v17; // al
  __int64 v18; // rbx
  char v19; // [rsp+6h] [rbp-662h]
  char v20; // [rsp+7h] [rbp-661h]
  __int64 v21; // [rsp+8h] [rbp-660h] BYREF
  __int64 v22; // [rsp+10h] [rbp-658h]
  __int128 v23; // [rsp+18h] [rbp-650h]
  __int128 v24; // [rsp+28h] [rbp-640h]
  __int64 v25; // [rsp+38h] [rbp-630h]
  __int64 v26; // [rsp+40h] [rbp-628h]
  __int128 v27; // [rsp+48h] [rbp-620h]
  __int64 v28; // [rsp+58h] [rbp-610h] BYREF
  __int64 v29; // [rsp+60h] [rbp-608h]
  __int128 v30; // [rsp+68h] [rbp-600h]
  __int128 v31; // [rsp+78h] [rbp-5F0h]
  __int64 v32; // [rsp+88h] [rbp-5E0h]
  __int64 v33; // [rsp+90h] [rbp-5D8h]
  __int64 v34; // [rsp+98h] [rbp-5D0h]
  __int128 src; // [rsp+A0h] [rbp-5C8h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-5B8h]
  __int128 v37; // [rsp+C0h] [rbp-5A8h]
  __int128 v38; // [rsp+D0h] [rbp-598h]
  __int128 dest; // [rsp+370h] [rbp-2F8h] BYREF
  __int128 v40; // [rsp+380h] [rbp-2E8h]
  __int128 v41; // [rsp+390h] [rbp-2D8h]
  __int128 v42; // [rsp+3A0h] [rbp-2C8h]

  *(_QWORD *)&dest = &off_F5368;
  *((_QWORD *)&dest + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v40 = &off_F5358;
  *((_QWORD *)&v40 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&src = &unk_F5338;
  *((_QWORD *)&src + 1) = 2LL;
  *(_QWORD *)&v37 = 0LL;
  *(_QWORD *)&v36 = &dest;
  *((_QWORD *)&v36 + 1) = 2LL;
  core::option::Option<T>::map_or_else(&v28, &src);
  v2 = v28;
  v3 = v29;
  v4 = v30;
  uu_ln::uu_app(&src);
  v21 = v2;
  v22 = v3;
  *(_QWORD *)&v23 = v4;
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v28, &dest, a1, a2);
  if ( __OFSUB__(-v28, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v29,
             &dest,
             v5,
             -v28);
  v25 = v32;
  v24 = v31;
  v23 = v30;
  v21 = v28;
  v22 = v29;
  v7 = (__int64)*(&uu_ln::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, &v21, aFiles, v7);
  clap_builder::parser::error::MatchesError::unwrap(&dest, aFiles, v7, &src);
  if ( !(_QWORD)dest )
    core::option::unwrap_failed(&off_F5378);
  v38 = v42;
  v37 = v41;
  v36 = v40;
  src = dest;
  core::iter::traits::iterator::Iterator::collect(&v28, &src);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, aSymbolic, 8LL);
  v9 = 2;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, aForce, 5LL) )
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, aInteractive, 11LL);
  uucore::features::backup_control::determine_backup_mode(&src, &v21);
  if ( (_QWORD)src )
  {
    v10 = src;
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v28);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
    return v10;
  }
  else
  {
    v11 = BYTE8(src);
    uucore::features::backup_control::determine_backup_suffix(&dest, &v21);
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, aLogical, 7LL);
    v34 = v40;
    v27 = dest;
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, aRelative, 8LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&src, &v21);
    v13 = clap_builder::parser::error::MatchesError::unwrap(&src);
    v19 = v12;
    if ( v13 )
    {
      <alloc::string::String as core::clone::Clone>::clone(&src, v13);
      v26 = *((_QWORD *)&src + 1);
      v14 = src;
      v33 = v36;
    }
    else
    {
      v14 = 0x8000000000000000LL;
    }
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, aNoTargetDirect, 19LL);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, aNoDereference, 14LL);
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, aVerbose, 7LL);
    BYTE6(v38) = v9;
    BYTE7(v38) = v11;
    src = v27;
    *(_QWORD *)&v36 = v34;
    LOBYTE(v38) = flag;
    BYTE1(v38) = v20;
    BYTE2(v38) = v19;
    *((_QWORD *)&v36 + 1) = v14;
    *(_QWORD *)&v37 = v26;
    *((_QWORD *)&v37 + 1) = v33;
    BYTE3(v38) = v15;
    BYTE4(v38) = v16;
    BYTE5(v38) = v17;
    v18 = uu_ln::exec(v29, v30, &src);
    core::ptr::drop_in_place<uu_ln::Settings>(&src);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v28);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
    return v18;
  }
}