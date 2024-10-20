__int64 __fastcall uu_mv::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // esi
  struct _Unwind_Exception *v13; // rdx
  int v14; // r8d
  int v15; // r9d
  int v17; // [rsp+0h] [rbp-848h]
  char v18; // [rsp+8h] [rbp-840h]
  int v19; // [rsp+10h] [rbp-838h]
  int v20; // [rsp+18h] [rbp-830h]
  int v21; // [rsp+20h] [rbp-828h]
  char v22; // [rsp+23h] [rbp-825h]
  char v23; // [rsp+24h] [rbp-824h]
  char v24; // [rsp+25h] [rbp-823h]
  char v25; // [rsp+27h] [rbp-821h]
  int v26; // [rsp+28h] [rbp-820h]
  int v27; // [rsp+30h] [rbp-818h]
  int v28; // [rsp+38h] [rbp-810h]
  struct _Unwind_Exception *v29; // [rsp+40h] [rbp-808h]
  int v30; // [rsp+48h] [rbp-800h]
  char is_dir; // [rsp+4Eh] [rbp-7FAh]
  char flag; // [rsp+4Fh] [rbp-7F9h]
  __int64 one; // [rsp+60h] [rbp-7E8h]
  char v34; // [rsp+85h] [rbp-7C3h]
  char v35; // [rsp+87h] [rbp-7C1h]
  char v36; // [rsp+AFh] [rbp-799h]
  __int64 v37; // [rsp+D8h] [rbp-770h]
  int v38[178]; // [rsp+E8h] [rbp-760h] BYREF
  _OWORD v39[6]; // [rsp+3B0h] [rbp-498h] BYREF
  __int64 v40; // [rsp+410h] [rbp-438h]
  __int128 v41; // [rsp+420h] [rbp-428h] BYREF
  __int128 v42; // [rsp+430h] [rbp-418h]
  __int128 v43; // [rsp+440h] [rbp-408h]
  __int128 v44; // [rsp+450h] [rbp-3F8h]
  __int128 v45; // [rsp+460h] [rbp-3E8h]
  __int128 v46; // [rsp+470h] [rbp-3D8h]
  __int64 v47; // [rsp+480h] [rbp-3C8h]
  int v48[26]; // [rsp+488h] [rbp-3C0h] BYREF
  __int128 v49; // [rsp+4F0h] [rbp-358h]
  __int128 v50; // [rsp+500h] [rbp-348h]
  __int128 v51; // [rsp+510h] [rbp-338h]
  __int128 v52; // [rsp+520h] [rbp-328h]
  __int128 v53; // [rsp+530h] [rbp-318h]
  __int128 v54; // [rsp+540h] [rbp-308h]
  __int64 v55; // [rsp+550h] [rbp-2F8h]
  _BYTE v56[24]; // [rsp+558h] [rbp-2F0h] BYREF
  _BYTE v57[64]; // [rsp+570h] [rbp-2D8h] BYREF
  _BYTE v58[64]; // [rsp+5B0h] [rbp-298h] BYREF
  _BYTE v59[64]; // [rsp+5F0h] [rbp-258h] BYREF
  __int64 v60; // [rsp+630h] [rbp-218h] BYREF
  unsigned __int8 v61; // [rsp+63Fh] [rbp-209h]
  __int64 v62; // [rsp+640h] [rbp-208h]
  __int64 v63; // [rsp+648h] [rbp-200h]
  __int64 v64; // [rsp+650h] [rbp-1F8h]
  _QWORD v65[3]; // [rsp+658h] [rbp-1F0h] BYREF
  _BYTE v66[48]; // [rsp+670h] [rbp-1D8h] BYREF
  __int128 v67; // [rsp+6A0h] [rbp-1A8h] BYREF
  __int128 v68; // [rsp+6B8h] [rbp-190h]
  char v69; // [rsp+6CEh] [rbp-17Ah] BYREF
  char v70; // [rsp+6CFh] [rbp-179h] BYREF
  __int64 v71; // [rsp+6D0h] [rbp-178h] BYREF
  __int64 v72; // [rsp+6D8h] [rbp-170h]
  _BYTE v73[22]; // [rsp+6E0h] [rbp-168h] BYREF
  char v74; // [rsp+6F6h] [rbp-152h]
  char updated; // [rsp+6F7h] [rbp-151h] BYREF
  __int128 v76; // [rsp+6F8h] [rbp-150h] BYREF
  __int64 v77; // [rsp+708h] [rbp-140h]
  __int128 v78; // [rsp+710h] [rbp-138h] BYREF
  __int64 v79; // [rsp+720h] [rbp-128h]
  __int128 *v80; // [rsp+728h] [rbp-120h] BYREF
  __int64 v81; // [rsp+730h] [rbp-118h] BYREF
  __int128 v82; // [rsp+738h] [rbp-110h]
  __int64 v83; // [rsp+748h] [rbp-100h]
  __int128 v84; // [rsp+768h] [rbp-E0h] BYREF
  __int64 v85; // [rsp+778h] [rbp-D0h]
  _BYTE v86[32]; // [rsp+780h] [rbp-C8h] BYREF
  int v87[4]; // [rsp+7A0h] [rbp-A8h] BYREF
  __int64 v88; // [rsp+7B0h] [rbp-98h]
  __int128 v89; // [rsp+7B8h] [rbp-90h]
  __int64 v90; // [rsp+7C8h] [rbp-80h]
  char v91; // [rsp+7D0h] [rbp-78h]
  char v92; // [rsp+7D1h] [rbp-77h]
  char v93; // [rsp+7D2h] [rbp-76h]
  char v94; // [rsp+7D3h] [rbp-75h]
  char v95; // [rsp+7D4h] [rbp-74h]
  char v96; // [rsp+7D5h] [rbp-73h]
  char v97; // [rsp+7D6h] [rbp-72h]
  char v98; // [rsp+7D7h] [rbp-71h]
  __int128 v99; // [rsp+7E0h] [rbp-68h]
  __int64 v100; // [rsp+7F0h] [rbp-58h]
  __int128 v101; // [rsp+800h] [rbp-48h]
  __int64 v102; // [rsp+810h] [rbp-38h]
  char v103; // [rsp+824h] [rbp-24h]
  char v104; // [rsp+825h] [rbp-23h]
  char v105; // [rsp+826h] [rbp-22h]
  char v106; // [rsp+827h] [rbp-21h]
  char **v107; // [rsp+838h] [rbp-10h]
  __int64 (__fastcall *v108)(); // [rsp+840h] [rbp-8h]

  v105 = 0;
  v104 = 0;
  v106 = 1;
  uu_mv::uu_app(v38);
  v106 = 0;
  clap_builder::builder::command::Command::try_get_matches_from_mut(v48, v38, a1, a2);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v41, v48);
  if ( (_QWORD)v41 == 0x8000000000000000LL )
  {
    v37 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v41 + 1),
            &off_157BC0);
LABEL_31:
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v38);
    return v37;
  }
  v55 = v47;
  v54 = v46;
  v53 = v45;
  v52 = v44;
  v51 = v43;
  v50 = v42;
  v49 = v41;
  v40 = v47;
  v39[5] = v46;
  v39[4] = v45;
  v39[3] = v44;
  v39[2] = v43;
  v39[1] = v42;
  v39[0] = v41;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v59,
    v39,
    aFiles,
    *(&uu_mv::ARG_FILES + 1),
    &off_157A98);
  core::option::Option<T>::unwrap_or_default(v58, v59);
  core::iter::traits::iterator::Iterator::cloned(v57, v58);
  core::iter::traits::iterator::Iterator::collect(v56, v57);
  if ( alloc::vec::Vec<T,A>::len(v56) == 1 )
  {
    v36 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
            v39,
            aTargetDirector,
            *(&uu_mv::OPT_TARGET_DIRECTORY + 1));
    if ( (v36 & 1) == 0 )
    {
      v61 = 6;
      v107 = &uu_mv::ARG_FILES;
      v108 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v68 = &uu_mv::ARG_FILES;
      *((_QWORD *)&v68 + 1) = <&T as core::fmt::Display>::fmt;
      v67 = v68;
      core::fmt::Arguments::new_v1(v66, &off_157AB0, &v67);
      alloc::fmt::format(v65, v66);
      v62 = v65[0];
      v63 = v65[1];
      v64 = v65[2];
      v2 = v61;
      v60 = clap_builder::builder::command::Command::error((int)v38);
      clap_builder::error::Error<F>::exit(&v60, v2);
    }
  }
  v69 = uu_mv::determine_overwrite_mode(v39);
  uucore::features::backup_control::determine_backup_mode(v73, v39);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v71, v73);
  if ( v71 )
  {
    v37 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v71,
            v72,
            &off_157BA8);
LABEL_25:
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v56);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v39);
    goto LABEL_31;
  }
  v74 = v72;
  v70 = v72;
  updated = uucore::features::update_control::determine_update_mode(v39);
  v35 = core::cmp::PartialEq::ne(&v70, &byte_1E012);
  if ( (v35 & 1) != 0 )
  {
    if ( (<uu_mv::OverwriteMode as core::cmp::PartialEq>::eq(&v69, &byte_1E012) & 1) != 0
      || (v34 = <uucore::features::update_control::UpdateMode as core::cmp::PartialEq>::eq(&updated, &unk_1E013),
          (v34 & 1) != 0
       || (<uucore::features::update_control::UpdateMode as core::cmp::PartialEq>::eq(&updated, &unk_1E014) & 1) != 0) )
    {
      v37 = uucore::mods::error::UUsageError::new(
              1,
              (int)aCannotCombineB,
              66,
              v3,
              v4,
              v5,
              v17,
              v18,
              v19,
              v20,
              v21,
              v26,
              v27,
              v28,
              v29,
              v30);
      goto LABEL_25;
    }
  }
  uucore::features::backup_control::determine_backup_suffix(&v76, v39);
  v105 = 1;
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
          v39,
          aTargetDirector,
          *(&uu_mv::OPT_TARGET_DIRECTORY + 1),
          &off_157AD0);
  core::option::Option<T>::map(&v78, one);
  v104 = 1;
  if ( (_QWORD)v78 != 0x8000000000000000LL )
  {
    v80 = &v78;
    v6 = std::path::Path::new(&v80);
    is_dir = std::path::Path::is_dir(v6, v7);
    if ( (is_dir & 1) == 0 )
    {
      v8 = <std::ffi::os_str::OsString as core::ops::deref::Deref>::deref(v80);
      <std::ffi::os_str::OsStr as os_display::native::Quotable>::quote(v86, v8, v9);
      <T as alloc::string::ToString>::to_string(&v84, v86);
      v83 = v85;
      v82 = v84;
      v81 = 8LL;
      v37 = <T as core::convert::Into<U>>::into(&v81, &off_157AE8);
      core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v78);
      v104 = 0;
      core::ptr::drop_in_place<alloc::string::String>(&v76);
      v105 = 0;
      goto LABEL_25;
    }
  }
  v74 = v70;
  v105 = 0;
  v100 = v77;
  v99 = v76;
  v104 = 0;
  v102 = v79;
  v101 = v78;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v39,
           aNoTargetDirect,
           *(&uu_mv::OPT_NO_TARGET_DIRECTORY + 1),
           &off_157B00);
  v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v39,
          aVerbose,
          *(&uu_mv::OPT_VERBOSE + 1),
          &off_157B18);
  if ( (v25 & 1) != 0 )
    v103 = 1;
  else
    v103 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v39,
             aDebug,
             *(&uu_mv::OPT_DEBUG + 1),
             &off_157B30) & 1;
  v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v39,
          aStripTrailingS,
          *(&uu_mv::OPT_STRIP_TRAILING_SLASHES + 1),
          &off_157B48);
  v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v39,
          aProgress,
          *(&uu_mv::OPT_PROGRESS + 1),
          &off_157B60);
  v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v39,
          aDebug,
          *(&uu_mv::OPT_DEBUG + 1),
          &off_157B78);
  v96 = v69;
  v97 = v74;
  v88 = v100;
  *(_OWORD *)v87 = v99;
  v98 = updated;
  v90 = v102;
  v89 = v101;
  v91 = flag & 1;
  v92 = v103 & 1;
  v93 = v24 & 1;
  v94 = v23 & 1;
  v95 = v22 & 1;
  v10 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v56, &off_157B90);
  v12 = v11;
  v37 = uu_mv::mv(v10, v11, v87);
  core::ptr::drop_in_place<uu_mv::Options>((int)v87, v12, (int)v13, v37, v14, v15, v13, v37);
  v104 = 0;
  v105 = 0;
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v56);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v39);
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(v38);
  return v37;
}
