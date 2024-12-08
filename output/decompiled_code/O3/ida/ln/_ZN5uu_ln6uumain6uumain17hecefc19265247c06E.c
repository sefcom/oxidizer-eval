__int64 __fastcall uu_ln::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r14
  char flag; // bl
  char v5; // bp
  char v6; // r13
  __int64 v7; // r14
  char v8; // r15
  __int64 v9; // rax
  char v10; // r14
  char v11; // r12
  char v12; // r13
  char v13; // al
  char v15; // [rsp+7h] [rbp-6C1h]
  _OWORD v16[3]; // [rsp+8h] [rbp-6C0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-690h]
  __int128 v18; // [rsp+40h] [rbp-688h] BYREF
  __int64 v19; // [rsp+50h] [rbp-678h]
  _BYTE v20[8]; // [rsp+58h] [rbp-670h] BYREF
  __int64 v21; // [rsp+60h] [rbp-668h]
  __int64 v22; // [rsp+68h] [rbp-660h]
  __int128 v23; // [rsp+70h] [rbp-658h] BYREF
  __int128 v24; // [rsp+80h] [rbp-648h]
  __int128 v25; // [rsp+90h] [rbp-638h]
  __int64 v26; // [rsp+A0h] [rbp-628h]
  __int128 v27; // [rsp+A8h] [rbp-620h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-610h]
  _OWORD v29[4]; // [rsp+C0h] [rbp-608h] BYREF
  __int128 src; // [rsp+100h] [rbp-5C8h] BYREF
  __int128 *p_dest; // [rsp+110h] [rbp-5B8h]
  __int128 v32; // [rsp+118h] [rbp-5B0h]
  __int64 v33; // [rsp+128h] [rbp-5A0h]
  char v34; // [rsp+130h] [rbp-598h]
  char v35; // [rsp+131h] [rbp-597h]
  char v36; // [rsp+132h] [rbp-596h]
  char v37; // [rsp+133h] [rbp-595h]
  char v38; // [rsp+134h] [rbp-594h]
  char v39; // [rsp+135h] [rbp-593h]
  char v40; // [rsp+136h] [rbp-592h]
  char v41; // [rsp+137h] [rbp-591h]
  __int128 dest; // [rsp+3D0h] [rbp-2F8h] BYREF
  __int128 v43; // [rsp+3E0h] [rbp-2E8h]
  __int128 v44; // [rsp+3F0h] [rbp-2D8h]
  __int128 v45; // [rsp+400h] [rbp-2C8h]

  *(_QWORD *)&dest = &off_12ACD8;
  *((_QWORD *)&dest + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v43 = &off_12ACE8;
  *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&src = &unk_12ACF8;
  *((_QWORD *)&src + 1) = 2LL;
  p_dest = &dest;
  v32 = 2uLL;
  core::option::Option<T>::map_or_else(&v27, &src);
  uu_ln::uu_app(&src);
  v19 = v28;
  v18 = v27;
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v23, &dest, a1, a2);
  if ( (_QWORD)v23 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v23 + 1));
  v17 = v26;
  v16[2] = v25;
  v16[1] = v24;
  v16[0] = v23;
  v3 = (__int64)*(&uu_ln::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, v16, aFiles, v3);
  clap_builder::parser::error::MatchesError::unwrap(&dest, aFiles, v3, &src);
  if ( !(_QWORD)dest )
    core::option::unwrap_failed(&off_12AD18);
  v29[3] = v45;
  v29[2] = v44;
  v29[1] = v43;
  v29[0] = dest;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v20, v29);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v16, aSymbolic, 8LL);
  v5 = 2;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v16, aForce, 5LL) )
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v16, aInteractive, 11LL);
  uucore::features::backup_control::determine_backup_mode(&src, v16);
  v2 = src;
  if ( (_QWORD)src )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v20);
  }
  else
  {
    v6 = BYTE8(src);
    uucore::features::backup_control::determine_backup_suffix(&v18, v16);
    v7 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v16, aLogical, 7LL);
    *(_QWORD *)&v24 = v19;
    v23 = v18;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v16, aRelative, 8LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&src, v16);
    v9 = clap_builder::parser::error::MatchesError::unwrap(&src);
    v15 = v7;
    if ( v9 )
    {
      core::ops::function::FnOnce::call_once(&src, v9);
      v10 = v6;
      *(_QWORD *)&v43 = p_dest;
      dest = src;
    }
    else
    {
      v10 = v6;
      *(_QWORD *)&dest = 0x8000000000000000LL;
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v16, aNoTargetDirect, 19LL);
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v16, aNoDereference, 14LL);
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v16, aVerbose, 7LL);
    v40 = v5;
    v41 = v10;
    src = v23;
    p_dest = (__int128 *)v24;
    v34 = flag;
    v35 = v8;
    v36 = v15;
    v32 = dest;
    v33 = v43;
    v37 = v11;
    v38 = v12;
    v39 = v13;
    v2 = uu_ln::exec(v21, v22, &src);
    core::ptr::drop_in_place<uu_ln::Settings>(&src);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v20);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v16);
  return v2;
}
