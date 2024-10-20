__int64 __fastcall uu_hashsum::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  int v42; // [rsp+0h] [rbp-1148h]
  __int64 v43; // [rsp+0h] [rbp-1148h]
  int v44; // [rsp+0h] [rbp-1148h]
  int v45; // [rsp+8h] [rbp-1140h]
  int v46; // [rsp+8h] [rbp-1140h]
  int v47; // [rsp+8h] [rbp-1140h]
  int v48; // [rsp+10h] [rbp-1138h]
  struct _Unwind_Exception *v49; // [rsp+10h] [rbp-1138h]
  int v50; // [rsp+10h] [rbp-1138h]
  int v51; // [rsp+18h] [rbp-1130h]
  int v52; // [rsp+18h] [rbp-1130h]
  int v53; // [rsp+18h] [rbp-1130h]
  int v54; // [rsp+20h] [rbp-1128h]
  int v55; // [rsp+20h] [rbp-1128h]
  char v56; // [rsp+28h] [rbp-1120h]
  int v57; // [rsp+28h] [rbp-1120h]
  int v58; // [rsp+30h] [rbp-1118h]
  int v59; // [rsp+30h] [rbp-1118h]
  int v60; // [rsp+38h] [rbp-1110h]
  int v61; // [rsp+38h] [rbp-1110h]
  int v62; // [rsp+40h] [rbp-1108h]
  int v63; // [rsp+40h] [rbp-1108h]
  int v64; // [rsp+48h] [rbp-1100h]
  int v65; // [rsp+48h] [rbp-1100h]
  int v66; // [rsp+50h] [rbp-10F8h]
  int v67; // [rsp+50h] [rbp-10F8h]
  int v68; // [rsp+58h] [rbp-10F0h]
  int v69; // [rsp+58h] [rbp-10F0h]
  int v70; // [rsp+60h] [rbp-10E8h]
  int v71; // [rsp+60h] [rbp-10E8h]
  int v72; // [rsp+68h] [rbp-10E0h]
  int v73; // [rsp+68h] [rbp-10E0h]
  struct _Unwind_Exception *v74; // [rsp+70h] [rbp-10D8h]
  int v75; // [rsp+70h] [rbp-10D8h]
  int v76; // [rsp+78h] [rbp-10D0h]
  int v77; // [rsp+78h] [rbp-10D0h]
  int v78; // [rsp+80h] [rbp-10C8h]
  int v79; // [rsp+88h] [rbp-10C0h]
  char v80; // [rsp+8Fh] [rbp-10B9h]
  char v81; // [rsp+8Fh] [rbp-10B9h]
  int v82; // [rsp+90h] [rbp-10B8h]
  int v83; // [rsp+98h] [rbp-10B0h]
  struct _Unwind_Exception *v84; // [rsp+A0h] [rbp-10A8h]
  int v85; // [rsp+A8h] [rbp-10A0h]
  int v86[2]; // [rsp+D0h] [rbp-1078h]
  __int16 v87; // [rsp+DEh] [rbp-106Ah]
  __int128 v88; // [rsp+E0h] [rbp-1068h]
  __int16 v89; // [rsp+106h] [rbp-1042h]
  int v90[2]; // [rsp+110h] [rbp-1038h]
  char v91; // [rsp+13Fh] [rbp-1009h]
  char v92; // [rsp+151h] [rbp-FF7h]
  char v93; // [rsp+153h] [rbp-FF5h]
  char v94; // [rsp+155h] [rbp-FF3h]
  char v95; // [rsp+156h] [rbp-FF2h]
  char flag; // [rsp+16Fh] [rbp-FD9h]
  char v97; // [rsp+1BFh] [rbp-F89h]
  char v98; // [rsp+1DFh] [rbp-F69h]
  int v99[2]; // [rsp+228h] [rbp-F20h] BYREF
  int v100[2]; // [rsp+230h] [rbp-F18h]
  __int64 v101; // [rsp+238h] [rbp-F10h]
  __int64 v102; // [rsp+240h] [rbp-F08h]
  _BYTE v103[24]; // [rsp+248h] [rbp-F00h] BYREF
  _BYTE v104[24]; // [rsp+260h] [rbp-EE8h] BYREF
  _BYTE v105[24]; // [rsp+278h] [rbp-ED0h] BYREF
  int v106[4]; // [rsp+290h] [rbp-EB8h] BYREF
  __int128 v107; // [rsp+2A0h] [rbp-EA8h]
  __int64 v108; // [rsp+2B0h] [rbp-E98h]
  int v109[6]; // [rsp+2B8h] [rbp-E90h] BYREF
  _BYTE v110[24]; // [rsp+2D0h] [rbp-E78h] BYREF
  _BYTE dest[712]; // [rsp+2E8h] [rbp-E60h] BYREF
  _BYTE src[720]; // [rsp+5B0h] [rbp-B98h] BYREF
  _OWORD v113[6]; // [rsp+880h] [rbp-8C8h] BYREF
  __int64 v114; // [rsp+8E0h] [rbp-868h]
  __int128 v115; // [rsp+8E8h] [rbp-860h] BYREF
  __int128 v116; // [rsp+8F8h] [rbp-850h]
  __int128 v117; // [rsp+908h] [rbp-840h]
  __int128 v118; // [rsp+918h] [rbp-830h]
  __int128 v119; // [rsp+928h] [rbp-820h]
  __int128 v120; // [rsp+938h] [rbp-810h]
  __int64 v121; // [rsp+948h] [rbp-800h]
  int v122[26]; // [rsp+950h] [rbp-7F8h] BYREF
  int v123[178]; // [rsp+9B8h] [rbp-790h] BYREF
  int v124[4]; // [rsp+C80h] [rbp-4C8h] BYREF
  __int128 v125; // [rsp+C90h] [rbp-4B8h]
  __int64 v126; // [rsp+CA0h] [rbp-4A8h]
  __int128 v127; // [rsp+CB0h] [rbp-498h]
  __int128 v128; // [rsp+CC0h] [rbp-488h]
  __int128 v129; // [rsp+CD0h] [rbp-478h]
  __int128 v130; // [rsp+CE0h] [rbp-468h]
  __int128 v131; // [rsp+CF0h] [rbp-458h]
  __int128 v132; // [rsp+D00h] [rbp-448h]
  __int64 v133; // [rsp+D10h] [rbp-438h]
  _QWORD *one; // [rsp+D20h] [rbp-428h]
  __int64 v135; // [rsp+D28h] [rbp-420h]
  __int64 v136; // [rsp+D30h] [rbp-418h]
  __int64 v137; // [rsp+D38h] [rbp-410h] BYREF
  __int64 v138; // [rsp+D40h] [rbp-408h]
  __int64 v139; // [rsp+D48h] [rbp-400h]
  _BYTE v140[24]; // [rsp+D50h] [rbp-3F8h] BYREF
  __int128 v141; // [rsp+D68h] [rbp-3E0h] BYREF
  _BYTE v142[16]; // [rsp+D78h] [rbp-3D0h] BYREF
  int v143[2]; // [rsp+D88h] [rbp-3C0h]
  _QWORD v144[5]; // [rsp+D90h] [rbp-3B8h] BYREF
  _BYTE v145[40]; // [rsp+DB8h] [rbp-390h] BYREF
  _BYTE v146[40]; // [rsp+DE0h] [rbp-368h] BYREF
  _QWORD v147[5]; // [rsp+E08h] [rbp-340h] BYREF
  _BYTE v148[40]; // [rsp+E30h] [rbp-318h] BYREF
  _BYTE v149[45]; // [rsp+E58h] [rbp-2F0h] BYREF
  char v150; // [rsp+E85h] [rbp-2C3h]
  char v151; // [rsp+E86h] [rbp-2C2h]
  bool v152; // [rsp+E87h] [rbp-2C1h]
  unsigned __int64 v153[3]; // [rsp+E88h] [rbp-2C0h] BYREF
  unsigned __int64 v154[3]; // [rsp+EA0h] [rbp-2A8h] BYREF
  int v155[6]; // [rsp+EB8h] [rbp-290h] BYREF
  int v156[16]; // [rsp+ED0h] [rbp-278h] BYREF
  __int128 v157; // [rsp+F10h] [rbp-238h]
  __int64 v158; // [rsp+F20h] [rbp-228h]
  __int64 v159; // [rsp+F28h] [rbp-220h]
  unsigned __int64 v160[3]; // [rsp+F30h] [rbp-218h] BYREF
  unsigned __int64 v161[3]; // [rsp+F48h] [rbp-200h] BYREF
  _BYTE v162[72]; // [rsp+F60h] [rbp-1E8h] BYREF
  __int64 v163; // [rsp+FA8h] [rbp-1A0h]
  __int128 v164; // [rsp+FB0h] [rbp-198h]
  __int128 v165; // [rsp+FC0h] [rbp-188h]
  __int128 v166; // [rsp+FD0h] [rbp-178h]
  __int128 v167; // [rsp+FE0h] [rbp-168h]
  _OWORD v168[4]; // [rsp+FF0h] [rbp-158h] BYREF
  _OWORD v169[4]; // [rsp+1030h] [rbp-118h] BYREF
  _OWORD v170[3]; // [rsp+1070h] [rbp-D8h] BYREF
  _BYTE v171[64]; // [rsp+10A0h] [rbp-A8h] BYREF
  int v172[4]; // [rsp+10E0h] [rbp-68h] BYREF
  __int128 v173; // [rsp+10F0h] [rbp-58h]
  __int128 v174; // [rsp+1100h] [rbp-48h]
  char v175; // [rsp+1112h] [rbp-36h]
  char v176; // [rsp+1113h] [rbp-35h]
  char v177; // [rsp+1114h] [rbp-34h]
  char v178; // [rsp+1115h] [rbp-33h]
  char v179; // [rsp+1116h] [rbp-32h]
  char v180; // [rsp+1117h] [rbp-31h]

  *(_QWORD *)v99 = a1;
  *(_QWORD *)v100 = a2;
  v179 = 0;
  v178 = 0;
  v177 = 0;
  v176 = 0;
  v175 = 0;
  v180 = 1;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(v104, v99);
  core::option::Option<T>::unwrap_or_else(v103, v104, &off_2F8FC8);
  v2 = std::path::Path::new(v103);
  v4 = std::path::Path::file_stem(v2, v3);
  v6 = core::option::Option<T>::unwrap_or_else(v4, v5, &off_2F8FE0);
  std::ffi::os_str::OsStr::to_string_lossy(v105, v6, v7);
  <std::ffi::os_str::OsString as core::clone::Clone>::clone(v110, v103);
  core::iter::sources::once::once(v109, v110);
  v180 = 0;
  core::iter::traits::iterator::Iterator::chain(
    (int)v106,
    (int)v109,
    v99[0],
    v100[0],
    v8,
    v9,
    v42,
    v45,
    v48,
    v51,
    v54,
    v56,
    v58,
    v60,
    v62,
    v64,
    v66,
    v68,
    v70,
    v72,
    v74,
    v76);
  v179 = 1;
  <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v105);
  uu_hashsum::uu_app(src);
  memcpy(dest, src, sizeof(dest));
  v98 = src[712];
  v178 = 0;
  memcpy(v123, dest, sizeof(v123));
  v179 = 0;
  v126 = v108;
  v125 = v107;
  *(_OWORD *)v124 = *(_OWORD *)v106;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v122,
    (int)v123,
    (int)v124,
    v10,
    v11,
    v12,
    v43,
    v46,
    v49,
    v52);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v115, v122);
  if ( (_QWORD)v115 == 0x8000000000000000LL )
  {
    v101 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v115 + 1),
             &off_2F9218);
    v102 = v41;
LABEL_55:
    v178 = 0;
    v179 = 0;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v105);
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v103);
    return v101;
  }
  v133 = v121;
  v132 = v120;
  v131 = v119;
  v130 = v118;
  v129 = v117;
  v128 = v116;
  v127 = v115;
  v114 = v121;
  v113[5] = v120;
  v113[4] = v119;
  v113[3] = v118;
  v113[2] = v117;
  v113[1] = v116;
  v113[0] = v115;
  v97 = alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(v105, &off_2F8FF8);
  if ( (v97 & 1) != 0 )
    one = (_QWORD *)clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v113, aLength, 6LL, &off_2F9008);
  else
    one = 0LL;
  if ( one )
  {
    uucore::features::checksum::calculate_blake2b_length(v140, *one);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v137, v140);
    if ( v137 )
    {
      v101 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v138,
               v139,
               &off_2F9200);
      v102 = v40;
      goto LABEL_20;
    }
    v135 = v138;
    v136 = v139;
  }
  else
  {
    v135 = 0LL;
  }
  if ( (v98 & 1) != 0 )
  {
    uu_hashsum::create_algorithm_from_flags(v145, v113);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v144, v145);
    if ( v144[0] )
    {
      memcpy(v146, v144, sizeof(v146));
      memcpy(&v141, v146, 0x28uLL);
      goto LABEL_19;
    }
    v101 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             v144[1],
             v144[2],
             &off_2F91E8);
    v102 = v39;
LABEL_20:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v113);
    goto LABEL_55;
  }
  v13 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v105);
  uucore::features::checksum::detect_algo(v148, v13, v14, v135, v136);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v147, v148);
  if ( !v147[0] )
  {
    v101 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             v147[1],
             v147[2],
             &off_2F9020);
    v102 = v15;
    goto LABEL_20;
  }
  memcpy(v149, v147, 0x28uLL);
  memcpy(&v141, v149, 0x28uLL);
LABEL_19:
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aBinary, 6LL, &off_2F9038);
  if ( (flag & 1) != 0 )
  {
    v150 = 1;
  }
  else
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aText, 4LL, &off_2F9050);
    v150 = 0;
  }
  v95 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aCheck, 5LL, &off_2F9068);
  v94 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aStatus, 6LL, &off_2F9080);
  if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aQuiet, 5LL, &off_2F9098) & 1) != 0 )
    v151 = 1;
  else
    v151 = v94 & 1;
  v93 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aStrict, 6LL, &off_2F90B0);
  v152 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aWarn, 4LL, &off_2F90C8) & 1) != 0
      && (v94 & 1) == 0;
  v92 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aIgnoreMissing, 14LL, &off_2F90E0);
  if ( (v92 & 1) != 0 && (v95 & 1) == 0 )
  {
    v153[0] = 0x8000000000000001LL;
    v101 = <T as core::convert::Into<U>>::into(v153, &off_2F90F8);
    v102 = v16;
LABEL_38:
    core::ptr::drop_in_place<uucore::features::checksum::HashAlgorithm>(&v141);
    goto LABEL_20;
  }
  if ( (v95 & 1) != 0 )
  {
    v91 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aText, 4LL, &off_2F9188);
    v80 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aBinary, 6LL, &off_2F91A0);
    if ( (v80 & 1) != 0 || (v91 & 1) != 0 )
    {
      v154[0] = 0x800000000000000BLL;
      v101 = <T as core::convert::Into<U>>::into(v154, &off_2F91D0);
      v102 = v38;
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v156, v113, aFile, 4LL, &off_2F91B8);
      core::option::Option<T>::map_or_else(
        (int)v155,
        (int)v156,
        v27,
        v28,
        v29,
        v30,
        v44,
        v47,
        v50,
        v53,
        v55,
        v57,
        v59,
        v61,
        v63,
        v65,
        v67,
        v69,
        v71,
        v73,
        v75,
        v77,
        v78,
        v79,
        v82,
        v83,
        v84,
        v85);
      v31 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v155);
      v33 = core::slice::<impl [T]>::iter(v31, v32);
      v35 = core::iter::traits::iterator::Iterator::copied(v33, v34);
      v157 = v141;
      v159 = *(_QWORD *)v143;
      v158 = 1LL;
      v101 = uucore::features::checksum::perform_checksum_validation(
               v35,
               v36,
               v93 & 1,
               v94 & 1,
               v152,
               v81 & 1,
               v92 & 1,
               v151 & 1,
               v141,
               *((_QWORD *)&v141 + 1),
               1LL,
               *(_QWORD *)v143);
      v102 = v37;
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(v155);
    }
    goto LABEL_38;
  }
  if ( (v151 & 1) != 0 )
  {
    v160[0] = 0x8000000000000003LL;
    v101 = <T as core::convert::Into<U>>::into(v160, &off_2F9170);
    v102 = v26;
    goto LABEL_38;
  }
  if ( (v93 & 1) != 0 )
  {
    v161[0] = 0x8000000000000002LL;
    v101 = <T as core::convert::Into<U>>::into(v161, &off_2F9158);
    v102 = v25;
    goto LABEL_38;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v162, v113, aNoNames, 8LL);
  v163 = 0LL;
  *(_QWORD *)v90 = core::result::Result<T,E>::unwrap_or(v162, 0LL);
  LOBYTE(v89) = *(_BYTE *)core::option::Option<T>::unwrap_or(*(_QWORD *)v90, &unk_59F00);
  HIBYTE(v89) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aZero, 4LL, &off_2F9110);
  v88 = v141;
  *(_QWORD *)&v167 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(v142);
  *((_QWORD *)&v167 + 1) = v17;
  *(_QWORD *)v86 = *(_QWORD *)v143;
  LOBYTE(v87) = v150;
  HIBYTE(v87) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v113, aTag, 3LL, &off_2F9128);
  v177 = 1;
  v164 = v88;
  v165 = v167;
  WORD4(v166) = v87 & 0x101;
  WORD5(v166) = v89 & 0x101;
  *(_QWORD *)&v166 = *(_QWORD *)v86;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v168, v113, aFile, 4LL, &off_2F9140);
  if ( *(_QWORD *)&v168[0] )
  {
    v169[3] = v168[3];
    v169[2] = v168[2];
    v169[1] = v168[1];
    v169[0] = v168[0];
    v177 = 0;
    v176 = 1;
    v170[2] = v166;
    v170[1] = v165;
    v170[0] = v164;
    core::iter::traits::iterator::Iterator::map(v171, v169);
    v176 = 0;
    v101 = uu_hashsum::hashsum(v170, v171);
    v102 = v23;
    v176 = 0;
  }
  else
  {
    v177 = 0;
    v175 = 1;
    v174 = v166;
    v173 = v165;
    *(_OWORD *)v172 = v164;
    v18 = std::ffi::os_str::OsStr::new(asc_59F04, 1LL);
    v20 = core::iter::sources::once::once(v18, v19);
    v175 = 0;
    v101 = uu_hashsum::hashsum(v172, v20, v21);
    v102 = v22;
    v175 = 0;
  }
  v177 = 0;
  core::ptr::drop_in_place<uucore::features::checksum::HashAlgorithm>(&v141);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v113);
  v178 = 0;
  v179 = 0;
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v105);
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v103);
  return v101;
}
