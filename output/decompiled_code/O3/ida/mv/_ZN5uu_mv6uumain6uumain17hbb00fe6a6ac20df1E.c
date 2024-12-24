__int64 __fastcall uu_mv::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  const char *v4; // rsi
  void (__fastcall __noreturn *v5)(); // rax
  const char *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rdx
  char v10; // bl
  char v11; // bp
  unsigned __int8 updated; // r13
  __int64 v14; // r15
  __int64 v15; // rax
  char flag; // r14
  char v17; // r15
  char v18; // r12
  char v19; // r13
  char v20; // al
  __int64 v21; // rax
  unsigned __int8 v22; // [rsp+Fh] [rbp-479h]
  _BYTE v23[48]; // [rsp+10h] [rbp-478h] BYREF
  __int64 v24; // [rsp+40h] [rbp-448h]
  _BYTE v25[24]; // [rsp+60h] [rbp-428h] BYREF
  _OWORD v26[3]; // [rsp+78h] [rbp-410h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-3E0h]
  __m256i v28; // [rsp+B0h] [rbp-3D8h] BYREF
  __int128 v29; // [rsp+D0h] [rbp-3B8h]
  const char *v30; // [rsp+E0h] [rbp-3A8h]
  __int64 v31; // [rsp+E8h] [rbp-3A0h]
  __int128 v32; // [rsp+F0h] [rbp-398h] BYREF
  __int64 v33; // [rsp+100h] [rbp-388h]
  _BYTE v34[8]; // [rsp+108h] [rbp-380h] BYREF
  __int64 v35; // [rsp+110h] [rbp-378h]
  __int64 v36; // [rsp+118h] [rbp-370h]
  __int128 v37; // [rsp+120h] [rbp-368h] BYREF
  __int64 v38; // [rsp+130h] [rbp-358h]
  _QWORD v39[2]; // [rsp+138h] [rbp-350h] BYREF
  __int128 v40; // [rsp+148h] [rbp-340h]
  __int128 v41; // [rsp+158h] [rbp-330h]
  const char *v42; // [rsp+168h] [rbp-320h]
  __int64 v43; // [rsp+170h] [rbp-318h]
  _BYTE v44[24]; // [rsp+178h] [rbp-310h] BYREF
  _BYTE v45[760]; // [rsp+190h] [rbp-2F8h] BYREF

  uu_mv::uu_app(v45);
  clap_builder::builder::command::Command::try_get_matches_from_mut(v23, v45, a1, a2);
  if ( *(_QWORD *)v23 == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v23[8]);
    goto LABEL_14;
  }
  v27 = v24;
  v26[2] = *(_OWORD *)&v23[32];
  v26[1] = *(_OWORD *)&v23[16];
  v26[0] = *(_OWORD *)v23;
  v3 = (__int64)*(&uu_mv::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v23, v26, aFiles, v3);
  v4 = aFiles;
  clap_builder::parser::error::MatchesError::unwrap(&v28, aFiles, v3, v23);
  v5 = (void (__fastcall __noreturn *)())v28.m256i_i64[0];
  if ( v28.m256i_i64[0] )
  {
    v6 = (const char *)v28.m256i_i64[1];
    v7 = *(_OWORD *)&v28.m256i_u64[2];
    v8 = v29;
    v4 = v30;
    v9 = v31;
  }
  else
  {
    v8 = 0LL;
    v7 = (unsigned __int64)"&";
    v6 = "&";
    v5 = core::ops::function::FnOnce::call_once;
    v9 = 0LL;
  }
  v39[0] = v5;
  v39[1] = v6;
  v40 = v7;
  v41 = v8;
  v42 = v4;
  v43 = v9;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v34, v39);
  if ( v36 == 1
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                           v26,
                           "target-directory/",
                           *(&uu_mv::OPT_TARGET_DIRECTORY + 1)) )
  {
    v28.m256i_i64[0] = (__int64)&uu_mv::ARG_FILES;
    v28.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)v23 = &off_183E98;
    *(_QWORD *)&v23[8] = 2LL;
    *(_QWORD *)&v23[32] = 0LL;
    *(_QWORD *)&v23[16] = &v28;
    *(_QWORD *)&v23[24] = 1LL;
    core::option::Option<T>::map_or_else(v44, v23);
    v21 = clap_builder::error::Error<F>::raw(6LL, v44);
    *(_QWORD *)v23 = clap_builder::error::Error<F>::format(v21, v45);
    clap_builder::error::Error<F>::exit(v23);
  }
  v10 = uu_mv::determine_overwrite_mode((__int64)v26);
  uucore::features::backup_control::determine_backup_mode(v23, v26);
  v2 = *(_QWORD *)v23;
  if ( *(_QWORD *)v23 )
  {
LABEL_13:
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v34);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v26);
    goto LABEL_14;
  }
  v11 = v23[8];
  updated = uucore::features::update_control::determine_update_mode(v26);
  if ( v11 && (!v10 || (updated | 2) == 3) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v28);
    *(_QWORD *)&v23[16] = v28.m256i_i64[2];
    *(_OWORD *)v23 = *(_OWORD *)v28.m256i_i8;
    *(_DWORD *)&v23[24] = 1;
    v2 = alloc::boxed::Box<T>::new(v23);
    goto LABEL_13;
  }
  uucore::features::backup_control::determine_backup_suffix(&v37, v26);
  v14 = (__int64)*(&uu_mv::OPT_TARGET_DIRECTORY + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v23, v26, "target-directory/", v14);
  v15 = clap_builder::parser::error::MatchesError::unwrap("target-directory/", v14, v23);
  if ( v15 )
  {
    core::ops::function::FnOnce::call_once(v23, v15);
    *(_QWORD *)&v25[16] = *(_QWORD *)&v23[16];
    *(_OWORD *)v25 = *(_OWORD *)v23;
    if ( *(_QWORD *)v23 != 0x8000000000000000LL
      && !(unsigned __int8)std::path::Path::is_dir(*(_QWORD *)&v25[8], *(_QWORD *)&v25[16]) )
    {
      v28.m256i_i64[0] = 1LL;
      *(_OWORD *)&v28.m256i_u64[1] = *(_OWORD *)&v25[8];
      v28.m256i_i8[24] = 1;
      <T as alloc::string::ToString>::to_string(&v32, &v28);
      *(_QWORD *)&v23[24] = v33;
      *(_OWORD *)&v23[8] = v32;
      *(_QWORD *)v23 = 8LL;
      v2 = alloc::boxed::Box<T>::new(v23);
      core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v25);
      core::ptr::drop_in_place<alloc::string::String>(&v37);
      goto LABEL_13;
    }
  }
  else
  {
    *(_QWORD *)v25 = 0x8000000000000000LL;
  }
  v22 = updated;
  v33 = v38;
  v32 = v37;
  v28.m256i_i64[2] = *(_QWORD *)&v25[16];
  *(_OWORD *)v28.m256i_i8 = *(_OWORD *)v25;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v26,
           aNoTargetDirect,
           *(&uu_mv::OPT_NO_TARGET_DIRECTORY + 1));
  v17 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           v26,
                           aVerbose,
                           *(&uu_mv::OPT_VERBOSE + 1)) )
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v26, aDebug, *(&uu_mv::OPT_DEBUG + 1));
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v26,
          aStripTrailingS,
          *(&uu_mv::OPT_STRIP_TRAILING_SLASHES + 1));
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v26, aProgress, *(&uu_mv::OPT_PROGRESS + 1));
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v26, aDebug, *(&uu_mv::OPT_DEBUG + 1));
  BYTE5(v24) = v10;
  BYTE6(v24) = v11;
  *(_OWORD *)v23 = v32;
  *(_QWORD *)&v23[16] = v33;
  HIBYTE(v24) = v22;
  *(_OWORD *)&v23[24] = *(_OWORD *)v28.m256i_i8;
  *(_QWORD *)&v23[40] = v28.m256i_i64[2];
  LOBYTE(v24) = flag;
  BYTE1(v24) = v17;
  BYTE2(v24) = v18;
  BYTE3(v24) = v19;
  BYTE4(v24) = v20;
  v2 = uu_mv::mv(v35, v36, (__int64)v23);
  core::ptr::drop_in_place<uu_mv::Options>(v23);
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v34);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v26);
LABEL_14:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(v45);
  return v2;
}
