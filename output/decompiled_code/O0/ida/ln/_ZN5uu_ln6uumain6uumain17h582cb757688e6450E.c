__int64 __fastcall uu_ln::uumain::uumain(int a1, int a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // esi
  struct _Unwind_Exception *v10; // rdx
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+0h] [rbp-A38h]
  struct _Unwind_Exception *v15; // [rsp+0h] [rbp-A38h]
  __int64 v16; // [rsp+8h] [rbp-A30h]
  int v17; // [rsp+8h] [rbp-A30h]
  int v18; // [rsp+10h] [rbp-A28h]
  struct _Unwind_Exception *v19; // [rsp+10h] [rbp-A28h]
  int v20; // [rsp+18h] [rbp-A20h]
  int v21; // [rsp+18h] [rbp-A20h]
  __int64 v22; // [rsp+20h] [rbp-A18h]
  char v23; // [rsp+25h] [rbp-A13h]
  char v24; // [rsp+26h] [rbp-A12h]
  char v25; // [rsp+27h] [rbp-A11h]
  __int64 v26; // [rsp+28h] [rbp-A10h]
  __int64 one; // [rsp+28h] [rbp-A10h]
  __int64 v28; // [rsp+30h] [rbp-A08h]
  char v29; // [rsp+35h] [rbp-A03h]
  char v30; // [rsp+36h] [rbp-A02h]
  char v31; // [rsp+37h] [rbp-A01h]
  int v32; // [rsp+38h] [rbp-A00h]
  int v33; // [rsp+40h] [rbp-9F8h]
  int v34; // [rsp+48h] [rbp-9F0h]
  char v35; // [rsp+4Ch] [rbp-9ECh]
  char flag; // [rsp+4Fh] [rbp-9E9h]
  struct _Unwind_Exception *v37; // [rsp+50h] [rbp-9E8h]
  int v38; // [rsp+58h] [rbp-9E0h]
  __int64 v39; // [rsp+70h] [rbp-9C8h]
  __int128 v40; // [rsp+80h] [rbp-9B8h]
  __int64 v41; // [rsp+90h] [rbp-9A8h]
  __int128 v42; // [rsp+98h] [rbp-9A0h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-990h]
  _BYTE v44[48]; // [rsp+B0h] [rbp-988h] BYREF
  _OWORD v45[2]; // [rsp+E0h] [rbp-958h] BYREF
  __int128 v46; // [rsp+100h] [rbp-938h]
  __int128 v47; // [rsp+110h] [rbp-928h]
  _OWORD v48[6]; // [rsp+120h] [rbp-918h] BYREF
  __int64 v49; // [rsp+180h] [rbp-8B8h]
  __int128 v50; // [rsp+190h] [rbp-8A8h] BYREF
  __int128 v51; // [rsp+1A0h] [rbp-898h]
  __int128 v52; // [rsp+1B0h] [rbp-888h]
  __int128 v53; // [rsp+1C0h] [rbp-878h]
  __int128 v54; // [rsp+1D0h] [rbp-868h]
  __int128 v55; // [rsp+1E0h] [rbp-858h]
  __int64 v56; // [rsp+1F0h] [rbp-848h]
  int v57[26]; // [rsp+1F8h] [rbp-840h] BYREF
  int v58[178]; // [rsp+260h] [rbp-7D8h] BYREF
  int v59[178]; // [rsp+528h] [rbp-510h] BYREF
  int v60[4]; // [rsp+7F0h] [rbp-248h] BYREF
  __int64 v61; // [rsp+800h] [rbp-238h]
  __int128 v62; // [rsp+810h] [rbp-228h]
  __int128 v63; // [rsp+820h] [rbp-218h]
  __int128 v64; // [rsp+830h] [rbp-208h]
  __int128 v65; // [rsp+840h] [rbp-1F8h]
  __int128 v66; // [rsp+850h] [rbp-1E8h]
  __int128 v67; // [rsp+860h] [rbp-1D8h]
  __int64 v68; // [rsp+870h] [rbp-1C8h]
  _BYTE v69[24]; // [rsp+878h] [rbp-1C0h] BYREF
  _BYTE v70[64]; // [rsp+890h] [rbp-1A8h] BYREF
  _BYTE dest[64]; // [rsp+8D0h] [rbp-168h] BYREF
  _QWORD src[8]; // [rsp+910h] [rbp-128h] BYREF
  char v73; // [rsp+957h] [rbp-E1h]
  __int64 v74; // [rsp+958h] [rbp-E0h] BYREF
  __int64 v75; // [rsp+960h] [rbp-D8h]
  _BYTE v76[16]; // [rsp+968h] [rbp-D0h] BYREF
  __int128 v77; // [rsp+978h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+988h] [rbp-B0h]
  int v79[4]; // [rsp+990h] [rbp-A8h] BYREF
  __int64 v80; // [rsp+9A0h] [rbp-98h]
  __int128 v81; // [rsp+9A8h] [rbp-90h]
  __int64 v82; // [rsp+9B8h] [rbp-80h]
  char v83; // [rsp+9C0h] [rbp-78h]
  char v84; // [rsp+9C1h] [rbp-77h]
  char v85; // [rsp+9C2h] [rbp-76h]
  char v86; // [rsp+9C3h] [rbp-75h]
  char v87; // [rsp+9C4h] [rbp-74h]
  char v88; // [rsp+9C5h] [rbp-73h]
  char v89; // [rsp+9C6h] [rbp-72h]
  char v90; // [rsp+9C7h] [rbp-71h]
  __int128 v91; // [rsp+9D0h] [rbp-68h]
  __int64 v92; // [rsp+9E0h] [rbp-58h]
  __int128 v93; // [rsp+9E8h] [rbp-50h] BYREF
  __int64 v94; // [rsp+9F8h] [rbp-40h]
  char v95; // [rsp+A05h] [rbp-33h]
  char v96; // [rsp+A06h] [rbp-32h]
  char v97; // [rsp+A07h] [rbp-31h]
  char **v98; // [rsp+A18h] [rbp-20h]
  __int64 (__fastcall *v99)(); // [rsp+A20h] [rbp-18h]
  char **v100; // [rsp+A28h] [rbp-10h]
  __int64 (__fastcall *v101)(); // [rsp+A30h] [rbp-8h]

  v96 = 0;
  v95 = 0;
  v97 = 1;
  v100 = &off_114CC0;
  v101 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v46 = &off_114CC0;
  *((_QWORD *)&v46 + 1) = <&T as core::fmt::Display>::fmt;
  v98 = &off_114CD0;
  v99 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v47 = &off_114CD0;
  *((_QWORD *)&v47 + 1) = <&T as core::fmt::Display>::fmt;
  v45[0] = v46;
  v45[1] = v47;
  core::fmt::Arguments::new_v1(v44, &unk_114CA0, v45);
  alloc::fmt::format(&v42, v44);
  v40 = v42;
  v41 = v43;
  v96 = 1;
  uu_ln::uu_app(v59);
  v96 = 0;
  v61 = v41;
  *(_OWORD *)v60 = v40;
  clap_builder::builder::command::Command::after_help(
    (int)v58,
    (int)v59,
    (int)v60,
    v2,
    v3,
    v4,
    v14,
    v16,
    v18,
    v20,
    v22,
    v26,
    v28,
    v32,
    v33,
    v34,
    v37,
    v38);
  v97 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v57,
    (int)v58,
    a1,
    a2,
    v5,
    v6,
    (__int64)v15,
    v17,
    v19,
    v21);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v50, v57);
  if ( (_QWORD)v50 == 0x8000000000000000LL )
  {
    v39 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v50 + 1),
            &off_114E18);
LABEL_13:
    v96 = 0;
    return v39;
  }
  v68 = v56;
  v67 = v55;
  v66 = v54;
  v65 = v53;
  v64 = v52;
  v63 = v51;
  v62 = v50;
  v49 = v56;
  v48[5] = v55;
  v48[4] = v54;
  v48[3] = v53;
  v48[2] = v52;
  v48[1] = v51;
  v48[0] = v50;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    src,
    v48,
    aFiles,
    *(&uu_ln::ARG_FILES + 1),
    &off_114CE0);
  if ( !src[0] )
    core::option::unwrap_failed(&off_114CF8);
  memcpy(dest, src, sizeof(dest));
  core::iter::traits::iterator::Iterator::map(v70, dest);
  core::iter::traits::iterator::Iterator::collect(v69, v70);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aSymbolic, 8LL, &off_114D10);
  if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aForce, 5LL, &off_114D28) & 1) != 0 )
    v73 = 2;
  else
    v73 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aInteractive, 11LL, &off_114D40) & 1) != 0;
  uucore::features::backup_control::determine_backup_mode(v76, v48);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v74, v76);
  if ( v74 )
  {
    v39 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v74,
            v75,
            &off_114E00);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v69);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v48);
    goto LABEL_13;
  }
  v35 = v75;
  uucore::features::backup_control::determine_backup_suffix(&v77, v48);
  v95 = 1;
  v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aLogical, 7LL, &off_114D58);
  v29 = v73;
  v95 = 0;
  v92 = v78;
  v91 = v77;
  v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aRelative, 8LL, &off_114D70);
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v48, aTargetDirector, 16LL, &off_114D88);
  core::option::Option<T>::map(&v93, one);
  v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aNoTargetDirect, 19LL, &off_114DA0);
  v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aNoDereference, 14LL, &off_114DB8);
  v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aVerbose, 7LL, &off_114DD0);
  v89 = v29;
  v90 = v35;
  v80 = v92;
  *(_OWORD *)v79 = v91;
  v83 = flag & 1;
  v84 = v30 & 1;
  v85 = v31 & 1;
  v82 = v94;
  v81 = v93;
  v86 = v25 & 1;
  v87 = v24 & 1;
  v88 = v23 & 1;
  v7 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v69, &off_114DE8);
  v9 = v8;
  v39 = uu_ln::exec(v7, v8, v79);
  core::ptr::drop_in_place<uu_ln::Settings>((int)v79, v9, (int)v10, v39, v11, v12, v10, v39);
  v95 = 0;
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v69);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v48);
  v96 = 0;
  return v39;
}
