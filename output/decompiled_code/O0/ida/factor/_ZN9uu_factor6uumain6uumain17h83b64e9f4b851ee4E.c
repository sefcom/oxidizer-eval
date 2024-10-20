__int64 __fastcall uu_factor::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned __int128 v4; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int *v8; // rsi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  char **v16; // rsi
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  char v21; // dl
  char v22; // dl
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  int v26; // ecx
  int v27; // edx
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // [rsp+0h] [rbp-A18h]
  int v42; // [rsp+0h] [rbp-A18h]
  struct _Unwind_Exception *v43; // [rsp+0h] [rbp-A18h]
  int v44; // [rsp+8h] [rbp-A10h]
  char v45; // [rsp+8h] [rbp-A10h]
  int v46; // [rsp+8h] [rbp-A10h]
  struct _Unwind_Exception *v47; // [rsp+10h] [rbp-A08h]
  int v48; // [rsp+10h] [rbp-A08h]
  int v49; // [rsp+10h] [rbp-A08h]
  int v50; // [rsp+18h] [rbp-A00h]
  int v51; // [rsp+18h] [rbp-A00h]
  int v52; // [rsp+18h] [rbp-A00h]
  int v53; // [rsp+20h] [rbp-9F8h]
  int v54; // [rsp+20h] [rbp-9F8h]
  int v55; // [rsp+28h] [rbp-9F0h]
  int v56; // [rsp+28h] [rbp-9F0h]
  int v57; // [rsp+30h] [rbp-9E8h]
  int v58; // [rsp+30h] [rbp-9E8h]
  int v59; // [rsp+38h] [rbp-9E0h]
  int v60; // [rsp+38h] [rbp-9E0h]
  struct _Unwind_Exception *v61; // [rsp+40h] [rbp-9D8h]
  int v62; // [rsp+40h] [rbp-9D8h]
  int v63; // [rsp+48h] [rbp-9D0h]
  int v64; // [rsp+48h] [rbp-9D0h]
  int v65; // [rsp+50h] [rbp-9C8h]
  int v66; // [rsp+58h] [rbp-9C0h]
  int v67; // [rsp+60h] [rbp-9B8h]
  int v68; // [rsp+68h] [rbp-9B0h]
  int v69; // [rsp+70h] [rbp-9A8h]
  char v70; // [rsp+78h] [rbp-9A0h]
  int v71[2]; // [rsp+80h] [rbp-998h]
  int v72; // [rsp+88h] [rbp-990h]
  __int64 v73; // [rsp+90h] [rbp-988h]
  int v74; // [rsp+98h] [rbp-980h]
  int v75[2]; // [rsp+A0h] [rbp-978h]
  int v76; // [rsp+A8h] [rbp-970h]
  int v77; // [rsp+B0h] [rbp-968h]
  int v78; // [rsp+B8h] [rbp-960h]
  int v79; // [rsp+C0h] [rbp-958h]
  int v80; // [rsp+C8h] [rbp-950h]
  int v81; // [rsp+D0h] [rbp-948h]
  int v82; // [rsp+D8h] [rbp-940h]
  int v83; // [rsp+E0h] [rbp-938h]
  int v84; // [rsp+E8h] [rbp-930h]
  __int64 v85; // [rsp+E8h] [rbp-930h]
  int v86; // [rsp+F0h] [rbp-928h]
  int v87[2]; // [rsp+F8h] [rbp-920h]
  int v88; // [rsp+100h] [rbp-918h]
  int v89; // [rsp+108h] [rbp-910h]
  struct _Unwind_Exception *v90; // [rsp+110h] [rbp-908h]
  int v91; // [rsp+118h] [rbp-900h]
  char flag; // [rsp+12Fh] [rbp-8E9h]
  __int64 v93; // [rsp+140h] [rbp-8D8h]
  int v94[4]; // [rsp+150h] [rbp-8C8h] BYREF
  int v95[4]; // [rsp+160h] [rbp-8B8h]
  int v96[4]; // [rsp+170h] [rbp-8A8h]
  int v97[4]; // [rsp+180h] [rbp-898h]
  int v98[4]; // [rsp+190h] [rbp-888h]
  int v99[4]; // [rsp+1A0h] [rbp-878h]
  int v100[2]; // [rsp+1B0h] [rbp-868h]
  __int128 v101; // [rsp+1B8h] [rbp-860h] BYREF
  __int128 v102; // [rsp+1C8h] [rbp-850h]
  __int128 v103; // [rsp+1D8h] [rbp-840h]
  __int128 v104; // [rsp+1E8h] [rbp-830h]
  __int128 v105; // [rsp+1F8h] [rbp-820h]
  __int128 v106; // [rsp+208h] [rbp-810h]
  __int64 v107; // [rsp+218h] [rbp-800h]
  int v108[26]; // [rsp+220h] [rbp-7F8h] BYREF
  int v109[178]; // [rsp+288h] [rbp-790h] BYREF
  int v110[4]; // [rsp+550h] [rbp-4C8h]
  int v111[4]; // [rsp+560h] [rbp-4B8h]
  int v112[4]; // [rsp+570h] [rbp-4A8h]
  int v113[4]; // [rsp+580h] [rbp-498h]
  int v114[4]; // [rsp+590h] [rbp-488h]
  int v115[4]; // [rsp+5A0h] [rbp-478h]
  int v116[2]; // [rsp+5B0h] [rbp-468h]
  struct _Unwind_Exception *v117; // [rsp+5C0h] [rbp-458h] BYREF
  int v118[10]; // [rsp+5C8h] [rbp-450h] BYREF
  _OWORD v119[4]; // [rsp+5F0h] [rbp-428h] BYREF
  _OWORD v120[4]; // [rsp+630h] [rbp-3E8h] BYREF
  _BYTE src[64]; // [rsp+670h] [rbp-3A8h] BYREF
  _BYTE dest[64]; // [rsp+6B0h] [rbp-368h] BYREF
  __int64 v123; // [rsp+6F0h] [rbp-328h]
  __int64 v124; // [rsp+6F8h] [rbp-320h]
  __int64 v125; // [rsp+700h] [rbp-318h]
  __int64 v126; // [rsp+708h] [rbp-310h] BYREF
  int v127[2]; // [rsp+710h] [rbp-308h] BYREF
  char v128; // [rsp+718h] [rbp-300h]
  __int128 v129; // [rsp+720h] [rbp-2F8h] BYREF
  __int64 v130; // [rsp+730h] [rbp-2E8h]
  __int128 v131; // [rsp+738h] [rbp-2E0h]
  __int64 v132; // [rsp+748h] [rbp-2D0h]
  __int128 v133; // [rsp+750h] [rbp-2C8h] BYREF
  __int64 v134; // [rsp+760h] [rbp-2B8h]
  _BYTE v135[64]; // [rsp+768h] [rbp-2B0h] BYREF
  _BYTE v136[64]; // [rsp+7A8h] [rbp-270h] BYREF
  _BYTE v137[64]; // [rsp+7E8h] [rbp-230h] BYREF
  int v138[2]; // [rsp+828h] [rbp-1F0h]
  int v139[2]; // [rsp+830h] [rbp-1E8h]
  __int64 v140; // [rsp+838h] [rbp-1E0h]
  __int64 v141; // [rsp+840h] [rbp-1D8h]
  __int64 v142; // [rsp+848h] [rbp-1D0h] BYREF
  _BYTE v143[48]; // [rsp+850h] [rbp-1C8h] BYREF
  __int128 v144; // [rsp+880h] [rbp-198h] BYREF
  __int128 v145; // [rsp+890h] [rbp-188h]
  _QWORD v146[2]; // [rsp+8A0h] [rbp-178h] BYREF
  _BYTE v147[48]; // [rsp+8B0h] [rbp-168h] BYREF
  __int128 v148; // [rsp+8E0h] [rbp-138h] BYREF
  __int128 v149; // [rsp+8F0h] [rbp-128h]
  int v150[2]; // [rsp+900h] [rbp-118h] BYREF
  __int64 v151; // [rsp+908h] [rbp-110h] BYREF
  _BYTE v152[48]; // [rsp+910h] [rbp-108h] BYREF
  __int128 v153; // [rsp+940h] [rbp-D8h] BYREF
  __int128 v154; // [rsp+950h] [rbp-C8h]
  _QWORD v155[2]; // [rsp+960h] [rbp-B8h] BYREF
  _BYTE v156[48]; // [rsp+970h] [rbp-A8h] BYREF
  __int128 v157; // [rsp+9A0h] [rbp-78h] BYREF
  __int128 v158; // [rsp+9B0h] [rbp-68h]
  char v159; // [rsp+9C6h] [rbp-52h]
  char v160; // [rsp+9C7h] [rbp-51h]
  _QWORD *v161; // [rsp+9D8h] [rbp-40h]
  __int64 (__fastcall *v162)(); // [rsp+9E0h] [rbp-38h]
  _QWORD *v163; // [rsp+9E8h] [rbp-30h]
  __int64 (__fastcall *v164)(); // [rsp+9F0h] [rbp-28h]
  __int64 *v165; // [rsp+9F8h] [rbp-20h]
  __int64 (__fastcall *v166)(); // [rsp+A00h] [rbp-18h]
  __int64 *v167; // [rsp+A08h] [rbp-10h]
  __int64 (__fastcall *v168)(); // [rsp+A10h] [rbp-8h]

  v159 = 0;
  v160 = 1;
  uu_factor::uu_app(v109);
  v160 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v108,
    (int)v109,
    a1,
    a2,
    v2,
    v3,
    v41,
    v44,
    v47,
    v50);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v101, v108);
  if ( (_QWORD)v101 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v101 + 1),
             &off_17D170);
  *(_QWORD *)v116 = v107;
  *(_OWORD *)v115 = v106;
  *(_OWORD *)v114 = v105;
  *(_OWORD *)v113 = v104;
  *(_OWORD *)v112 = v103;
  *(_OWORD *)v111 = v102;
  *(_OWORD *)v110 = v101;
  *(_QWORD *)v100 = v107;
  *(_OWORD *)v99 = v106;
  *(_OWORD *)v98 = v105;
  *(_OWORD *)v97 = v104;
  *(_OWORD *)v96 = v103;
  *(_OWORD *)v95 = v102;
  *(_OWORD *)v94 = v101;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v94,
           aExponents,
           *(&uu_factor::options::EXPONENTS + 1),
           &off_17D0D8);
  v90 = (struct _Unwind_Exception *)std::io::stdio::stdout();
  v117 = v90;
  v4 = 0x400 * (unsigned __int128)4uLL;
  v89 = 4096;
  if ( !is_mul_ok(0x400uLL, 4uLL) )
    core::panicking::panic_const::panic_const_mul_overflow(&off_17D0F0, aExponents, *((_QWORD *)&v4 + 1));
  v88 = std::io::stdio::Stdout::lock(&v117, aExponents, *((_QWORD *)&v4 + 1));
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(
    (int)v118,
    4096,
    v88,
    v5,
    v6,
    v7,
    v42,
    v45,
    v48,
    v51,
    v53,
    v55,
    v57,
    v59,
    v61,
    v63);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v119,
    v94,
    aNumber,
    *(&uu_factor::options::NUMBER + 1),
    &off_17D108);
  if ( *(_QWORD *)&v119[0] != 0LL )
  {
    v120[3] = v119[3];
    v120[2] = v119[2];
    v120[1] = v119[1];
    v120[0] = v119[0];
    <I as core::iter::traits::collect::IntoIterator>::into_iter(src, v120);
    v8 = (int *)src;
    memcpy(dest, src, sizeof(dest));
    while ( 1 )
    {
      v123 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(dest);
      if ( !v123 )
        goto LABEL_11;
      v11 = <alloc::string::String as core::ops::deref::Deref>::deref(v123);
      v13 = uu_factor::print_factors_str(v11, v12, (__int64)v118, flag & 1);
      LODWORD(v8) = v14;
      v124 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v13, v14);
      v125 = v15;
      if ( v124 )
      {
        LODWORD(v16) = v125;
        v18 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v124,
                v125,
                &off_17D120);
        v93 = v18;
        goto LABEL_14;
      }
    }
  }
  *(_QWORD *)v87 = std::io::stdio::stdin();
  v126 = *(_QWORD *)v87;
  *(_QWORD *)v75 = std::io::stdio::Stdin::lock(&v126);
  v73 = std::io::BufRead::lines(*(_QWORD *)v75, v21 & 1);
  *(_QWORD *)v71 = <I as core::iter::traits::collect::IntoIterator>::into_iter(v73, v22 & 1);
  v26 = v71[0];
  *(_QWORD *)v127 = *(_QWORD *)v71;
  v128 = v23 & 1;
LABEL_15:
  v8 = v127;
  <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(
    (int)&v129,
    (int)v127,
    v23,
    v26,
    v24,
    v25,
    (int)v43,
    v46,
    v49,
    v52,
    v54,
    v56,
    v58,
    v60,
    v62,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71[0],
    v72,
    v73,
    v74,
    v75[0],
    v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v86,
    v87[0],
    v88,
    v89,
    v90,
    v91);
  if ( (_QWORD)v129 == 0x8000000000000001LL )
  {
    core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(v127);
LABEL_11:
    v85 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v118);
    *(_QWORD *)v150 = v85;
    v159 = 1;
    if ( v85 != 0 )
    {
      v159 = 0;
      v151 = *(_QWORD *)v150;
      v155[0] = uucore::util_name();
      v155[1] = v29;
      v163 = v155;
      v164 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v154 = v155;
      *((_QWORD *)&v154 + 1) = <&T as core::fmt::Display>::fmt;
      v153 = v154;
      core::fmt::Arguments::new_v1(v152, &unk_17D078, &v153);
      std::io::stdio::_eprint(v152);
      v167 = &v151;
      v168 = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v158 = &v151;
      *((_QWORD *)&v158 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      v157 = v158;
      v8 = (int *)&unk_17D098;
      core::fmt::Arguments::new_v1(v156, &unk_17D098, &v157);
      std::io::stdio::_eprint(v156);
      core::ptr::drop_in_place<std::io::error::Error>(&v151);
    }
    v27 = v150[0];
    v28 = 0;
    if ( *(_QWORD *)v150 != 0LL && (v159 & 1) != 0 )
      core::ptr::drop_in_place<std::io::error::Error>(v150);
    v159 = 0;
    v93 = 0LL;
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(
      (int)v118,
      (int)v8,
      v27,
      v28,
      v9,
      v10,
      v43,
      v46);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v94);
    return v93;
  }
  v131 = v129;
  v132 = v130;
  if ( (_QWORD)v129 == 0x8000000000000000LL )
  {
    v142 = *((_QWORD *)&v131 + 1);
    uucore::mods::error::set_exit_code(1LL);
    v39 = uucore::util_name();
    v46 = v40;
    v146[0] = v39;
    v146[1] = v40;
    v161 = v146;
    v162 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v145 = v146;
    *((_QWORD *)&v145 + 1) = <&T as core::fmt::Display>::fmt;
    v144 = v145;
    core::fmt::Arguments::new_v1(v143, &unk_17D078, &v144);
    std::io::stdio::_eprint(v143);
    v165 = &v142;
    v166 = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v149 = &v142;
    *((_QWORD *)&v149 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
    v148 = v149;
    v16 = &off_17D150;
    core::fmt::Arguments::new_v1(v147, &off_17D150, &v148);
    std::io::stdio::_eprint(v147);
    v93 = 0LL;
    core::ptr::drop_in_place<std::io::error::Error>(&v142);
  }
  else
  {
    v134 = v132;
    v133 = v131;
    v31 = <alloc::string::String as core::ops::deref::Deref>::deref(&v133);
    v66 = v32;
    v67 = v31;
    core::str::<impl str>::split_whitespace(v136, v31, v32);
    <I as core::iter::traits::collect::IntoIterator>::into_iter(v135, v136);
    memcpy(v137, v135, sizeof(v137));
    do
    {
      v33 = <core::str::iter::SplitWhitespace as core::iter::traits::iterator::Iterator>::next(v137);
      v64 = v34;
      v65 = v33;
      *(_QWORD *)v138 = v33;
      *(_QWORD *)v139 = v34;
      if ( !v33 )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v133);
        goto LABEL_15;
      }
      v35 = uu_factor::print_factors_str(*(__int64 *)v138, *(__int64 *)v139, (__int64)v118, flag & 1);
      v60 = v36;
      v62 = v35;
      v37 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v35, v36);
      v56 = v38;
      v58 = v37;
      v140 = v37;
      v141 = v38;
    }
    while ( !v37 );
    LODWORD(v16) = v141;
    v93 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v140,
            v141,
            &off_17D138);
    core::ptr::drop_in_place<alloc::string::String>(&v133);
  }
  core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(v127);
LABEL_14:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(
    (int)v118,
    (int)v16,
    v17,
    v18,
    v19,
    v20,
    v43,
    v46);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v94);
  return v93;
}
