__int64 __fastcall uu_dircolors::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int128 *v19; // rsi
  int v20; // edx
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // r9d
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rax
  struct _Unwind_Exception *v38; // rdx
  __int64 v39; // rcx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // [rsp+0h] [rbp-CA8h]
  struct _Unwind_Exception *v43; // [rsp+0h] [rbp-CA8h]
  int v44; // [rsp+8h] [rbp-CA0h]
  int v45; // [rsp+8h] [rbp-CA0h]
  struct _Unwind_Exception *v46; // [rsp+10h] [rbp-C98h]
  int v47; // [rsp+10h] [rbp-C98h]
  int v48; // [rsp+10h] [rbp-C98h]
  int v49; // [rsp+18h] [rbp-C90h]
  int v50; // [rsp+18h] [rbp-C90h]
  int v51; // [rsp+18h] [rbp-C90h]
  int v52; // [rsp+20h] [rbp-C88h]
  _QWORD *v53; // [rsp+20h] [rbp-C88h]
  int v54; // [rsp+28h] [rbp-C80h]
  int v55; // [rsp+30h] [rbp-C78h]
  int v56; // [rsp+38h] [rbp-C70h]
  int v57; // [rsp+38h] [rbp-C70h]
  struct _Unwind_Exception *v58; // [rsp+40h] [rbp-C68h]
  struct _Unwind_Exception *v59; // [rsp+40h] [rbp-C68h]
  int v60; // [rsp+48h] [rbp-C60h]
  struct _Unwind_Exception *v61; // [rsp+50h] [rbp-C58h]
  int v62; // [rsp+58h] [rbp-C50h]
  _QWORD *v63; // [rsp+68h] [rbp-C40h]
  int v64[2]; // [rsp+A0h] [rbp-C08h]
  int v65[2]; // [rsp+A8h] [rbp-C00h]
  char is_dir; // [rsp+B7h] [rbp-BF1h]
  int v67; // [rsp+C8h] [rbp-BE0h]
  _QWORD *v68; // [rsp+D0h] [rbp-BD8h]
  char v69; // [rsp+DFh] [rbp-BC9h]
  _QWORD *v70; // [rsp+E0h] [rbp-BC8h]
  _QWORD *v71; // [rsp+E8h] [rbp-BC0h]
  char v72; // [rsp+10Ah] [rbp-B9Eh]
  char v73; // [rsp+10Ch] [rbp-B9Ch]
  char v74; // [rsp+10Dh] [rbp-B9Bh]
  char is_empty; // [rsp+10Eh] [rbp-B9Ah]
  char v76; // [rsp+10Fh] [rbp-B99h]
  char v77; // [rsp+127h] [rbp-B81h]
  char v78; // [rsp+13Bh] [rbp-B6Dh]
  char v79; // [rsp+13Ch] [rbp-B6Ch]
  char v80; // [rsp+13Dh] [rbp-B6Bh]
  char v81; // [rsp+13Eh] [rbp-B6Ah]
  char flag; // [rsp+13Fh] [rbp-B69h]
  __int64 v83; // [rsp+160h] [rbp-B48h]
  _OWORD v84[6]; // [rsp+170h] [rbp-B38h] BYREF
  __int64 v85; // [rsp+1D0h] [rbp-AD8h]
  __int128 v86; // [rsp+1D8h] [rbp-AD0h] BYREF
  __int128 v87; // [rsp+1E8h] [rbp-AC0h]
  __int128 v88; // [rsp+1F8h] [rbp-AB0h]
  __int128 v89; // [rsp+208h] [rbp-AA0h]
  __int128 v90; // [rsp+218h] [rbp-A90h]
  __int128 v91; // [rsp+228h] [rbp-A80h]
  __int64 v92; // [rsp+238h] [rbp-A70h]
  int v93[26]; // [rsp+240h] [rbp-A68h] BYREF
  int dest[178]; // [rsp+2A8h] [rbp-A00h] BYREF
  __int128 v95; // [rsp+570h] [rbp-738h]
  __int128 v96; // [rsp+580h] [rbp-728h]
  __int128 v97; // [rsp+590h] [rbp-718h]
  __int128 v98; // [rsp+5A0h] [rbp-708h]
  __int128 v99; // [rsp+5B0h] [rbp-6F8h]
  __int128 v100; // [rsp+5C0h] [rbp-6E8h]
  __int64 v101; // [rsp+5D0h] [rbp-6D8h]
  int v102[6]; // [rsp+5E0h] [rbp-6C8h] BYREF
  _BYTE v103[64]; // [rsp+5F8h] [rbp-6B0h] BYREF
  _BYTE v104[24]; // [rsp+638h] [rbp-670h] BYREF
  int v105[2]; // [rsp+650h] [rbp-658h] BYREF
  __int64 v106; // [rsp+658h] [rbp-650h]
  __int64 v107; // [rsp+660h] [rbp-648h]
  _QWORD v108[3]; // [rsp+668h] [rbp-640h] BYREF
  _BYTE v109[48]; // [rsp+680h] [rbp-628h] BYREF
  __int128 v110; // [rsp+6B0h] [rbp-5F8h] BYREF
  __int128 v111; // [rsp+6C0h] [rbp-5E8h]
  _BYTE v112[32]; // [rsp+6D0h] [rbp-5D8h] BYREF
  _BYTE v113[48]; // [rsp+6F0h] [rbp-5B8h] BYREF
  __int128 v114; // [rsp+720h] [rbp-588h] BYREF
  __int128 v115; // [rsp+730h] [rbp-578h]
  _BYTE v116[30]; // [rsp+740h] [rbp-568h] BYREF
  char v117; // [rsp+75Eh] [rbp-54Ah] BYREF
  char v118; // [rsp+75Fh] [rbp-549h]
  __m256i v119; // [rsp+760h] [rbp-548h]
  _BYTE v120[48]; // [rsp+780h] [rbp-528h] BYREF
  __int128 v121; // [rsp+7B0h] [rbp-4F8h] BYREF
  __int128 v122; // [rsp+7C8h] [rbp-4E0h]
  _BYTE v123[24]; // [rsp+7D8h] [rbp-4D0h] BYREF
  int v124[2]; // [rsp+7F0h] [rbp-4B8h] BYREF
  __int64 v125; // [rsp+7F8h] [rbp-4B0h]
  __int64 v126; // [rsp+800h] [rbp-4A8h]
  _QWORD v127[3]; // [rsp+808h] [rbp-4A0h] BYREF
  _BYTE v128[48]; // [rsp+820h] [rbp-488h] BYREF
  __int128 v129; // [rsp+850h] [rbp-458h] BYREF
  __int128 v130; // [rsp+860h] [rbp-448h]
  _BYTE v131[32]; // [rsp+870h] [rbp-438h] BYREF
  int v132[12]; // [rsp+890h] [rbp-418h] BYREF
  __m256i v133; // [rsp+8C0h] [rbp-3E8h] BYREF
  __int128 v134[3]; // [rsp+8E0h] [rbp-3C8h] BYREF
  _BYTE v135[48]; // [rsp+910h] [rbp-398h] BYREF
  _QWORD v136[3]; // [rsp+940h] [rbp-368h] BYREF
  _QWORD v137[3]; // [rsp+958h] [rbp-350h] BYREF
  _BYTE v138[48]; // [rsp+970h] [rbp-338h] BYREF
  __int128 v139; // [rsp+9A0h] [rbp-308h] BYREF
  __int128 v140; // [rsp+9B0h] [rbp-2F8h]
  _BYTE v141[32]; // [rsp+9C0h] [rbp-2E8h] BYREF
  int v142[2]; // [rsp+9E0h] [rbp-2C8h] BYREF
  __int64 v143; // [rsp+9E8h] [rbp-2C0h]
  _BYTE v144[48]; // [rsp+9F0h] [rbp-2B8h] BYREF
  __m256i v145; // [rsp+A20h] [rbp-288h] BYREF
  __int128 v146[3]; // [rsp+A40h] [rbp-268h] BYREF
  _BYTE v147[48]; // [rsp+A70h] [rbp-238h] BYREF
  _BYTE v148[24]; // [rsp+AA0h] [rbp-208h] BYREF
  __int64 v149; // [rsp+AB8h] [rbp-1F0h] BYREF
  _QWORD v150[3]; // [rsp+AC0h] [rbp-1E8h] BYREF
  _QWORD v151[3]; // [rsp+AD8h] [rbp-1D0h] BYREF
  _BYTE v152[48]; // [rsp+AF0h] [rbp-1B8h] BYREF
  _OWORD v153[2]; // [rsp+B20h] [rbp-188h] BYREF
  __int128 v154; // [rsp+B48h] [rbp-160h]
  _BYTE v155[32]; // [rsp+B58h] [rbp-150h] BYREF
  __int128 v156; // [rsp+B78h] [rbp-130h]
  __int64 v157; // [rsp+B88h] [rbp-120h] BYREF
  __int128 v158; // [rsp+B90h] [rbp-118h]
  _BYTE v159[48]; // [rsp+BA0h] [rbp-108h] BYREF
  __int128 v160; // [rsp+BD0h] [rbp-D8h] BYREF
  __int128 v161; // [rsp+BE0h] [rbp-C8h]
  __int128 v162; // [rsp+BF0h] [rbp-B8h] BYREF
  __int64 v163; // [rsp+C00h] [rbp-A8h]
  char v164; // [rsp+C12h] [rbp-96h]
  char v165; // [rsp+C13h] [rbp-95h]
  char v166; // [rsp+C14h] [rbp-94h]
  char v167; // [rsp+C15h] [rbp-93h]
  char v168; // [rsp+C16h] [rbp-92h]
  char v169; // [rsp+C17h] [rbp-91h]
  _BYTE *v170; // [rsp+C28h] [rbp-80h]
  __int64 (__fastcall *v171)(); // [rsp+C30h] [rbp-78h]
  _BYTE *v172; // [rsp+C38h] [rbp-70h]
  __int64 (__fastcall *v173)(); // [rsp+C40h] [rbp-68h]
  __int64 *v174; // [rsp+C48h] [rbp-60h]
  __int64 (__fastcall *v175)(); // [rsp+C50h] [rbp-58h]
  _BYTE *v176; // [rsp+C58h] [rbp-50h]
  __int64 (__fastcall *v177)(); // [rsp+C60h] [rbp-48h]
  _BYTE *v178; // [rsp+C68h] [rbp-40h]
  __int64 (__fastcall *v179)(); // [rsp+C70h] [rbp-38h]
  _BYTE *v180; // [rsp+C78h] [rbp-30h]
  __int64 (__fastcall *v181)(); // [rsp+C80h] [rbp-28h]
  _BYTE *v182; // [rsp+C88h] [rbp-20h]
  __int64 (__fastcall *v183)(); // [rsp+C90h] [rbp-18h]
  __int64 *v184; // [rsp+C98h] [rbp-10h]
  __int64 (__fastcall *v185)(); // [rsp+CA0h] [rbp-8h]

  v166 = 0;
  v165 = 0;
  v164 = 0;
  v168 = 0;
  v167 = 0;
  v169 = 1;
  uu_dircolors::uu_app(dest);
  v169 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v93, (int)dest, a1, a2, v2, v3, v42, v44, v46, v49);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v86, v93);
  if ( (_QWORD)v86 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v86 + 1),
             &off_11AEB0);
  v101 = v92;
  v100 = v91;
  v99 = v90;
  v98 = v89;
  v97 = v88;
  v96 = v87;
  v95 = v86;
  v85 = v92;
  v84[5] = v91;
  v84[4] = v90;
  v84[3] = v89;
  v84[2] = v88;
  v84[1] = v87;
  v84[0] = v86;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v103, v84, aFile, 4LL, &off_11ACF0);
  alloc::vec::Vec<T>::new(v104);
  core::option::Option<T>::map_or(v102, v103, v104);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v84, aCShell, 7LL, &off_11AD08);
  if ( (flag & 1) != 0
    || (v81 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v84, aBourneShell, 12LL, &off_11AD20),
        (v81 & 1) != 0) )
  {
    v80 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v84, aPrintDatabase, 14LL, &off_11AD38);
    if ( (v80 & 1) != 0
      || (v78 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v84, aPrintLsColors, 15LL, &off_11AD50),
          (v78 & 1) != 0) )
    {
      v7 = aTheOptionsToOu;
      v39 = uucore::mods::error::UUsageError::new(
              1,
              (int)aTheOptionsToOu,
              91,
              v4,
              v5,
              v6,
              (int)v43,
              v45,
              v47,
              v50,
              v52,
              v54,
              v55,
              v56,
              v58,
              v60);
      v83 = v39;
LABEL_35:
      core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(
        (int)v102,
        (int)v7,
        (int)v38,
        v39,
        v40,
        v41,
        v43,
        v45);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v84);
      return v83;
    }
  }
  v79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v84, aPrintDatabase, 14LL, &off_11AD68);
  if ( (v79 & 1) != 0
    && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v84, aPrintLsColors, 15LL, &off_11AD80) & 1) != 0 )
  {
    v7 = aOptionsPrintDa;
    v39 = uucore::mods::error::UUsageError::new(
            1,
            (int)aOptionsPrintDa,
            69,
            v8,
            v9,
            v10,
            (int)v43,
            v45,
            v47,
            v50,
            v52,
            v54,
            v55,
            v56,
            v58,
            v60);
    v83 = v39;
    goto LABEL_35;
  }
  v77 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v84, aPrintDatabase, 14LL, &off_11AD98);
  if ( (v77 & 1) != 0 )
  {
    is_empty = alloc::vec::Vec<T,A>::is_empty(v102);
    if ( (is_empty & 1) != 0 )
    {
      uu_dircolors::generate_dircolors_config(v116);
      v170 = v116;
      v171 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v115 = v116;
      *((_QWORD *)&v115 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v114 = v115;
      v7 = (const char *)&unk_11ACB0;
      core::fmt::Arguments::new_v1(v113, &unk_11ACB0, &v114);
      std::io::stdio::_print(v113);
      core::ptr::drop_in_place<alloc::string::String>(v116);
      v83 = 0LL;
    }
    else
    {
      v53 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v102, 0LL, &off_11AE98);
      v31 = <alloc::string::String as core::ops::deref::Deref>::deref(*v53);
      v48 = v32;
      v51 = v31;
      <str as os_display::native::Quotable>::quote(v112, v31, v32);
      v176 = v112;
      v177 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v111 = v112;
      *((_QWORD *)&v111 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v110 = v111;
      core::fmt::Arguments::new_v1(v109, &off_11AE78, &v110);
      alloc::fmt::format(v108, v109);
      *(_QWORD *)v105 = v108[0];
      v106 = v108[1];
      v107 = v108[2];
      v7 = (const char *)v105;
      v37 = uucore::mods::error::UUsageError::new(
              1,
              (int)v105,
              v33,
              v34,
              v35,
              v36,
              (int)v43,
              v45,
              v48,
              v51,
              (int)v53,
              v54,
              v55,
              v56,
              v58,
              v60);
      v43 = v38;
      v45 = v37;
      LODWORD(v39) = v37;
      v83 = v37;
    }
    goto LABEL_35;
  }
  v76 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v84, aCShell, 7LL, &off_11ADB0);
  if ( (v76 & 1) != 0 )
  {
    v117 = 1;
  }
  else
  {
    v74 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v84, aBourneShell, 12LL, &off_11ADC8);
    if ( (v74 & 1) != 0 )
    {
      v117 = 0;
    }
    else
    {
      v73 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v84, aPrintLsColors, 15LL, &off_11ADE0);
      if ( (v73 & 1) != 0 )
        v117 = 2;
      else
        v117 = 3;
    }
  }
  if ( (<uu_dircolors::OutputFmt as core::cmp::PartialEq>::eq(&v117, &unk_19BC8) & 1) != 0 )
  {
    v118 = uu_dircolors::guess_syntax();
    if ( v118 == 3LL )
    {
      v7 = aNoShellEnviron;
      v39 = uucore::mods::error::USimpleError::new(1LL, aNoShellEnviron, 61LL);
      v83 = v39;
      goto LABEL_35;
    }
    v117 = v118;
  }
  v72 = alloc::vec::Vec<T,A>::is_empty(v102);
  if ( (v72 & 1) != 0 )
  {
    uu_dircolors::generate_ls_colors(v123, &v117, asc_19D41, 1LL);
    v172 = v123;
    v173 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v122 = v123;
    *((_QWORD *)&v122 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v121 = v122;
    v7 = (const char *)&unk_11ACB0;
    core::fmt::Arguments::new_v1(v120, &unk_11ACB0, &v121);
    std::io::stdio::_print(v120);
    core::ptr::drop_in_place<alloc::string::String>(v123);
    v83 = 0LL;
LABEL_52:
    v166 = 0;
    v167 = 0;
    v168 = 0;
    goto LABEL_35;
  }
  if ( (unsigned __int64)alloc::vec::Vec<T,A>::len(v102) > 1 )
  {
    v70 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v102, 1LL, &off_11AE60);
    v25 = <alloc::string::String as core::ops::deref::Deref>::deref(*v70);
    v57 = v26;
    v59 = (struct _Unwind_Exception *)v25;
    <str as os_display::native::Quotable>::quote(v131, v25, v26);
    v178 = v131;
    v179 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v130 = v131;
    *((_QWORD *)&v130 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v129 = v130;
    core::fmt::Arguments::new_v1(v128, &off_11AE50, &v129);
    alloc::fmt::format(v127, v128);
    *(_QWORD *)v124 = v127[0];
    v125 = v127[1];
    v126 = v127[2];
    v7 = (const char *)v124;
    v39 = uucore::mods::error::UUsageError::new(
            1,
            (int)v124,
            v27,
            v28,
            v29,
            v30,
            (int)v43,
            v45,
            v47,
            v50,
            v52,
            v54,
            v55,
            v57,
            v59,
            v60);
    v83 = v39;
    goto LABEL_52;
  }
  v71 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v102, 0LL, &off_11ADF8);
  v69 = <alloc::string::String as core::cmp::PartialEq<str>>::eq(*v71, asc_19E1E, 1LL);
  if ( (v69 & 1) != 0 )
  {
    v67 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::new((int)v132, v67);
    std::io::BufRead::lines(v135, v132);
    core::iter::traits::iterator::Iterator::map_while(v134, v135);
    v165 = 1;
    v63 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v102, 0LL, &off_11AE38);
    v17 = <alloc::string::String as core::ops::deref::Deref>::deref(*v63);
    v165 = 0;
    uu_dircolors::parse(&v133, v134, (__int64)&v117, v17, v18);
    v165 = 0;
    v166 = 1;
    v167 = 1;
    v168 = 1;
    v119 = v133;
  }
  else
  {
    v68 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v102, 0LL, &off_11AE10);
    *(_QWORD *)v64 = std::path::Path::new(*v68);
    *(_QWORD *)v65 = v11;
    is_dir = std::path::Path::is_dir();
    if ( (is_dir & 1) != 0 )
    {
      <std::path::Path as os_display::native::Quotable>::quote(v141, *(_QWORD *)v64, *(_QWORD *)v65);
      v180 = v141;
      v181 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v140 = v141;
      *((_QWORD *)&v140 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v139 = v140;
      core::fmt::Arguments::new_v1(v138, &off_11AE28, &v139);
      alloc::fmt::format(v137, v138);
      v136[0] = v137[0];
      v136[1] = v137[1];
      v136[2] = v137[2];
      v7 = (const char *)v136;
      v39 = uucore::mods::error::USimpleError::new(2LL, v136);
      v83 = v39;
      goto LABEL_52;
    }
    std::fs::File::open(
      (int)v142,
      v64[0],
      v65[0],
      v12,
      v13,
      v14,
      (int)v43,
      v45,
      v47,
      v50,
      v52,
      v54,
      v55,
      v56,
      (int)v58,
      v60,
      v61,
      v62);
    if ( v142[0] )
    {
      v149 = v143;
      os_display::native::Quotable::maybe_quote(v155, *(_QWORD *)v64, *(_QWORD *)v65);
      v182 = v155;
      v183 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v154 = v155;
      *((_QWORD *)&v154 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v184 = &v149;
      v185 = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v156 = &v149;
      *((_QWORD *)&v156 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      v153[0] = v154;
      v153[1] = v156;
      core::fmt::Arguments::new_v1(v152, &unk_11AC90, v153);
      alloc::fmt::format(v151, v152);
      v150[0] = v151[0];
      v150[1] = v151[1];
      v150[2] = v151[2];
      v7 = (const char *)v150;
      v83 = uucore::mods::error::USimpleError::new(1LL, v150);
      core::ptr::drop_in_place<std::io::error::Error>(&v149);
      goto LABEL_52;
    }
    std::io::buffered::bufreader::BufReader<R>::new(v144, (unsigned int)v142[1]);
    std::io::BufRead::lines(v147, v144);
    core::iter::traits::iterator::Iterator::map_while(v146, v147);
    v164 = 1;
    std::path::Path::to_string_lossy(v148, *(_QWORD *)v64, *(_QWORD *)v65);
    v15 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v148);
    v164 = 0;
    uu_dircolors::parse(&v145, v146, (__int64)&v117, v15, v16);
    v164 = 0;
    v166 = 1;
    v167 = 1;
    v168 = 1;
    v119 = v145;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v148);
  }
  if ( v119.m256i_i64[0] )
  {
    v168 = 0;
    v163 = v119.m256i_i64[3];
    v162 = *(_OWORD *)&v119.m256i_u64[1];
    v19 = &v162;
    v21 = uucore::mods::error::USimpleError::new(1LL, &v162);
    v83 = v21;
  }
  else
  {
    v167 = 0;
    v157 = v119.m256i_i64[1];
    v158 = *(_OWORD *)&v119.m256i_u64[2];
    v174 = &v157;
    v175 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v161 = &v157;
    *((_QWORD *)&v161 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v160 = v161;
    v19 = (__int128 *)&unk_11ACB0;
    core::fmt::Arguments::new_v1(v159, &unk_11ACB0, &v160);
    std::io::stdio::_print(v159);
    v83 = 0LL;
    core::ptr::drop_in_place<alloc::string::String>(&v157);
  }
  v166 = 0;
  v167 = 0;
  v168 = 0;
  core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>((int)v102, (int)v19, v20, v21, v22, v23, v43, v45);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v84);
  return v83;
}
