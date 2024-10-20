__int64 __fastcall uu_du::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // esi
  char v15; // cl
  __int64 v16; // rdx
  int v17; // esi
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  struct _Unwind_Exception *v44; // rdx
  int v45; // edx
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // [rsp+0h] [rbp-18C8h]
  struct _Unwind_Exception *v50; // [rsp+0h] [rbp-18C8h]
  int v51; // [rsp+8h] [rbp-18C0h]
  int v52; // [rsp+8h] [rbp-18C0h]
  struct _Unwind_Exception *v53; // [rsp+10h] [rbp-18B8h]
  char v54; // [rsp+17h] [rbp-18B1h]
  int v55; // [rsp+18h] [rbp-18B0h]
  __int64 v56; // [rsp+F8h] [rbp-17D0h]
  char v57; // [rsp+14Fh] [rbp-1779h]
  char v58; // [rsp+19Bh] [rbp-172Dh]
  char v59; // [rsp+19Eh] [rbp-172Ah]
  __int128 v60; // [rsp+1B0h] [rbp-1718h]
  char v61; // [rsp+1C7h] [rbp-1701h]
  __int64 v62; // [rsp+1C8h] [rbp-1700h]
  char v63; // [rsp+1D7h] [rbp-16F1h]
  __int128 v64; // [rsp+1F8h] [rbp-16D0h]
  char v65; // [rsp+20Fh] [rbp-16B9h]
  __int64 v66; // [rsp+210h] [rbp-16B8h]
  char is_some; // [rsp+228h] [rbp-16A0h]
  char v68; // [rsp+229h] [rbp-169Fh]
  char v69; // [rsp+22Ah] [rbp-169Eh]
  char v70; // [rsp+22Bh] [rbp-169Dh]
  char v71; // [rsp+22Ch] [rbp-169Ch]
  char v72; // [rsp+22Dh] [rbp-169Bh]
  char v73; // [rsp+22Eh] [rbp-169Ah]
  char v74; // [rsp+22Fh] [rbp-1699h]
  __int64 v75; // [rsp+258h] [rbp-1670h]
  char v76; // [rsp+262h] [rbp-1666h]
  char v77; // [rsp+263h] [rbp-1665h]
  char v78; // [rsp+264h] [rbp-1664h]
  char v79; // [rsp+265h] [rbp-1663h]
  char v80; // [rsp+266h] [rbp-1662h]
  _OWORD *v81; // [rsp+268h] [rbp-1660h]
  __int64 v82; // [rsp+288h] [rbp-1640h]
  char v83; // [rsp+2AFh] [rbp-1619h]
  __int64 v84; // [rsp+2C0h] [rbp-1608h]
  __int64 v85; // [rsp+2E8h] [rbp-15E0h]
  char v86; // [rsp+2F7h] [rbp-15D1h]
  __int128 v87; // [rsp+308h] [rbp-15C0h]
  __int64 v88; // [rsp+318h] [rbp-15B0h]
  __int64 one; // [rsp+330h] [rbp-1598h]
  char flag; // [rsp+34Fh] [rbp-1579h]
  __int64 v91; // [rsp+360h] [rbp-1568h]
  _OWORD v92[6]; // [rsp+370h] [rbp-1558h] BYREF
  __int64 v93; // [rsp+3D0h] [rbp-14F8h]
  __int128 v94; // [rsp+3D8h] [rbp-14F0h] BYREF
  __int128 v95; // [rsp+3E8h] [rbp-14E0h]
  __int128 v96; // [rsp+3F8h] [rbp-14D0h]
  __int128 v97; // [rsp+408h] [rbp-14C0h]
  __int128 v98; // [rsp+418h] [rbp-14B0h]
  __int128 v99; // [rsp+428h] [rbp-14A0h]
  __int64 v100; // [rsp+438h] [rbp-1490h]
  int v101[26]; // [rsp+440h] [rbp-1488h] BYREF
  int v102[178]; // [rsp+4A8h] [rbp-1420h] BYREF
  __int128 v103; // [rsp+770h] [rbp-1158h]
  __int128 v104; // [rsp+780h] [rbp-1148h]
  __int128 v105; // [rsp+790h] [rbp-1138h]
  __int128 v106; // [rsp+7A0h] [rbp-1128h]
  __int128 v107; // [rsp+7B0h] [rbp-1118h]
  __int128 v108; // [rsp+7C0h] [rbp-1108h]
  __int64 v109; // [rsp+7D0h] [rbp-10F8h]
  __int64 v110; // [rsp+7D8h] [rbp-10F0h] BYREF
  __int128 v111; // [rsp+7E0h] [rbp-10E8h]
  _BYTE v112[24]; // [rsp+7F0h] [rbp-10D8h] BYREF
  int v113[4]; // [rsp+808h] [rbp-10C0h] BYREF
  __int64 v114; // [rsp+818h] [rbp-10B0h]
  __int64 v115; // [rsp+820h] [rbp-10A8h]
  __int64 v116; // [rsp+828h] [rbp-10A0h] BYREF
  __int64 v117; // [rsp+830h] [rbp-1098h] BYREF
  unsigned __int8 v118; // [rsp+83Fh] [rbp-1089h]
  _QWORD v119[3]; // [rsp+840h] [rbp-1088h] BYREF
  _QWORD v120[3]; // [rsp+858h] [rbp-1070h] BYREF
  _BYTE v121[48]; // [rsp+870h] [rbp-1058h] BYREF
  __int128 v122; // [rsp+8A0h] [rbp-1028h] BYREF
  __int128 v123; // [rsp+8B8h] [rbp-1010h]
  _BYTE v124[32]; // [rsp+8C8h] [rbp-1000h] BYREF
  __int64 v125; // [rsp+8E8h] [rbp-FE0h] BYREF
  __int64 v126; // [rsp+8F0h] [rbp-FD8h]
  __int64 v127; // [rsp+8F8h] [rbp-FD0h]
  _BYTE v128[24]; // [rsp+900h] [rbp-FC8h] BYREF
  __int64 v129; // [rsp+918h] [rbp-FB0h]
  __int64 v130; // [rsp+920h] [rbp-FA8h]
  __int64 v131; // [rsp+928h] [rbp-FA0h]
  __int64 v132; // [rsp+930h] [rbp-F98h]
  _BYTE v133[64]; // [rsp+938h] [rbp-F90h] BYREF
  _BYTE dest[64]; // [rsp+978h] [rbp-F50h] BYREF
  _QWORD src[8]; // [rsp+9B8h] [rbp-F10h] BYREF
  __int64 v136; // [rsp+9F8h] [rbp-ED0h]
  __int128 v137; // [rsp+A00h] [rbp-EC8h] BYREF
  __int64 v138; // [rsp+A10h] [rbp-EB8h]
  char v139; // [rsp+A1Fh] [rbp-EA9h] BYREF
  __int128 v140; // [rsp+A20h] [rbp-EA8h]
  __int64 v141; // [rsp+A30h] [rbp-E98h] BYREF
  __int64 v142; // [rsp+A38h] [rbp-E90h]
  _BYTE v143[16]; // [rsp+A40h] [rbp-E88h] BYREF
  int v144[4]; // [rsp+A50h] [rbp-E78h] BYREF
  __int64 v145; // [rsp+A60h] [rbp-E68h]
  __int128 v146; // [rsp+A68h] [rbp-E60h]
  __int64 v147; // [rsp+A78h] [rbp-E50h]
  char v148; // [rsp+A80h] [rbp-E48h]
  char v149; // [rsp+A81h] [rbp-E47h]
  char v150; // [rsp+A82h] [rbp-E46h]
  char v151; // [rsp+A83h] [rbp-E45h]
  char v152; // [rsp+A84h] [rbp-E44h]
  __int128 v153; // [rsp+A90h] [rbp-E38h] BYREF
  __int64 v154; // [rsp+AA0h] [rbp-E28h]
  __int128 v155; // [rsp+AA8h] [rbp-E20h] BYREF
  __int64 v156; // [rsp+AB8h] [rbp-E10h]
  __int128 v157; // [rsp+AC0h] [rbp-E08h] BYREF
  __int64 v158; // [rsp+AD0h] [rbp-DF8h]
  _BYTE v159[24]; // [rsp+AD8h] [rbp-DF0h] BYREF
  __int128 v160; // [rsp+AF0h] [rbp-DD8h]
  __int64 v161; // [rsp+B00h] [rbp-DC8h]
  __int128 v162; // [rsp+B08h] [rbp-DC0h] BYREF
  __int64 v163; // [rsp+B18h] [rbp-DB0h]
  __int64 v164; // [rsp+B20h] [rbp-DA8h] BYREF
  __int64 v165; // [rsp+B28h] [rbp-DA0h]
  __int64 v166; // [rsp+B30h] [rbp-D98h]
  _BYTE v167[24]; // [rsp+B38h] [rbp-D90h] BYREF
  __int128 v168; // [rsp+B50h] [rbp-D78h]
  __int128 v169; // [rsp+B60h] [rbp-D68h]
  __int128 v170; // [rsp+B70h] [rbp-D58h]
  __int128 v171; // [rsp+B80h] [rbp-D48h]
  __int128 v172; // [rsp+B90h] [rbp-D38h]
  __int64 v173; // [rsp+BA0h] [rbp-D28h] BYREF
  __int128 v174; // [rsp+BA8h] [rbp-D20h]
  _BYTE v175[24]; // [rsp+BB8h] [rbp-D10h] BYREF
  _BYTE v176[31]; // [rsp+BD0h] [rbp-CF8h] BYREF
  char v177; // [rsp+BEFh] [rbp-CD9h]
  __int128 v178; // [rsp+BF0h] [rbp-CD8h]
  __int64 v179; // [rsp+C00h] [rbp-CC8h]
  _BYTE v180[48]; // [rsp+C10h] [rbp-CB8h] BYREF
  __int128 v181; // [rsp+C40h] [rbp-C88h] BYREF
  __int128 v182; // [rsp+C58h] [rbp-C70h]
  _QWORD v183[2]; // [rsp+C68h] [rbp-C60h] BYREF
  _BYTE v184[48]; // [rsp+C78h] [rbp-C50h] BYREF
  __int64 v185; // [rsp+CA8h] [rbp-C20h] BYREF
  __int64 v186; // [rsp+CB0h] [rbp-C18h]
  __int64 v187; // [rsp+CB8h] [rbp-C10h]
  __int64 v188; // [rsp+CC0h] [rbp-C08h]
  _QWORD v189[2]; // [rsp+CC8h] [rbp-C00h] BYREF
  __int64 v190; // [rsp+CD8h] [rbp-BF0h]
  __int64 v191; // [rsp+CE0h] [rbp-BE8h]
  __int128 v192; // [rsp+CE8h] [rbp-BE0h] BYREF
  __int64 v193; // [rsp+CF8h] [rbp-BD0h]
  _OWORD v194[5]; // [rsp+D00h] [rbp-BC8h] BYREF
  __int64 v195; // [rsp+D50h] [rbp-B78h]
  __int64 v196; // [rsp+D58h] [rbp-B70h]
  _QWORD v197[4]; // [rsp+D60h] [rbp-B68h] BYREF
  __int128 v198; // [rsp+D80h] [rbp-B48h] BYREF
  __int64 v199; // [rsp+D90h] [rbp-B38h]
  _QWORD v200[4]; // [rsp+D98h] [rbp-B30h] BYREF
  __int128 v201; // [rsp+DB8h] [rbp-B10h] BYREF
  __int64 v202; // [rsp+DC8h] [rbp-B00h]
  __int128 v203; // [rsp+DD0h] [rbp-AF8h] BYREF
  __int64 v204; // [rsp+DE0h] [rbp-AE8h]
  char v205; // [rsp+DEFh] [rbp-AD9h] BYREF
  _BYTE v206[24]; // [rsp+DF0h] [rbp-AD8h] BYREF
  _QWORD v207[2]; // [rsp+E08h] [rbp-AC0h] BYREF
  __int64 v208; // [rsp+E18h] [rbp-AB0h]
  _BYTE v209[48]; // [rsp+E20h] [rbp-AA8h] BYREF
  __int128 v210; // [rsp+E50h] [rbp-A78h] BYREF
  __int128 v211; // [rsp+E60h] [rbp-A68h]
  _BYTE v212[32]; // [rsp+E70h] [rbp-A58h] BYREF
  __m128i v213[9]; // [rsp+E90h] [rbp-A38h] BYREF
  _QWORD v214[18]; // [rsp+F20h] [rbp-9A8h] BYREF
  _BYTE v215[48]; // [rsp+FB0h] [rbp-918h] BYREF
  _BYTE v216[144]; // [rsp+FE0h] [rbp-8E8h] BYREF
  __m128i v217[9]; // [rsp+1070h] [rbp-858h] BYREF
  int v218[36]; // [rsp+1100h] [rbp-7C8h] BYREF
  int v219[36]; // [rsp+1190h] [rbp-738h] BYREF
  _BYTE v220[144]; // [rsp+1220h] [rbp-6A8h] BYREF
  _BYTE v221[144]; // [rsp+12B0h] [rbp-618h] BYREF
  __int64 v222; // [rsp+1340h] [rbp-588h]
  __int64 v223; // [rsp+1348h] [rbp-580h]
  int v224[40]; // [rsp+1350h] [rbp-578h] BYREF
  _BYTE v225[160]; // [rsp+13F0h] [rbp-4D8h] BYREF
  _BYTE v226[144]; // [rsp+1490h] [rbp-438h] BYREF
  __int64 v227; // [rsp+1520h] [rbp-3A8h]
  _BYTE v228[144]; // [rsp+1530h] [rbp-398h] BYREF
  __int64 v229; // [rsp+15C0h] [rbp-308h]
  __int64 v230; // [rsp+15C8h] [rbp-300h]
  int v231[40]; // [rsp+15D0h] [rbp-2F8h] BYREF
  _QWORD v232[21]; // [rsp+1670h] [rbp-258h] BYREF
  _QWORD v233[6]; // [rsp+1718h] [rbp-1B0h] BYREF
  __int64 v234; // [rsp+1748h] [rbp-180h] BYREF
  __int64 v235; // [rsp+1750h] [rbp-178h]
  __int64 v236; // [rsp+1758h] [rbp-170h]
  _BYTE v237[48]; // [rsp+1760h] [rbp-168h] BYREF
  __int128 v238; // [rsp+1790h] [rbp-138h] BYREF
  __int128 v239; // [rsp+17A0h] [rbp-128h]
  _BYTE v240[32]; // [rsp+17B0h] [rbp-118h] BYREF
  _BYTE v241[24]; // [rsp+17D0h] [rbp-F8h] BYREF
  int v242[2]; // [rsp+17E8h] [rbp-E0h]
  __int64 v243; // [rsp+17F0h] [rbp-D8h]
  __int64 v244; // [rsp+17F8h] [rbp-D0h] BYREF
  __int64 v245; // [rsp+1800h] [rbp-C8h]
  __int64 v246; // [rsp+1808h] [rbp-C0h]
  int v247[6]; // [rsp+1810h] [rbp-B8h] BYREF
  int v248[6]; // [rsp+1828h] [rbp-A0h] BYREF
  __int128 v249; // [rsp+1840h] [rbp-88h]
  __int64 v250; // [rsp+1850h] [rbp-78h]
  char v251; // [rsp+185Eh] [rbp-6Ah]
  char v252; // [rsp+185Fh] [rbp-69h]
  char v253; // [rsp+1860h] [rbp-68h]
  char v254; // [rsp+1861h] [rbp-67h]
  char v255; // [rsp+1862h] [rbp-66h]
  char v256; // [rsp+1863h] [rbp-65h]
  char v257; // [rsp+1864h] [rbp-64h]
  char v258; // [rsp+1865h] [rbp-63h]
  char v259; // [rsp+1866h] [rbp-62h]
  char v260; // [rsp+1867h] [rbp-61h]
  _BYTE *v261; // [rsp+1878h] [rbp-50h]
  __int64 (__fastcall *v262)(); // [rsp+1880h] [rbp-48h]
  _BYTE *v263; // [rsp+1888h] [rbp-40h]
  __int64 (__fastcall *v264)(); // [rsp+1890h] [rbp-38h]
  _BYTE *v265; // [rsp+1898h] [rbp-30h]
  __int64 (__fastcall *v266)(); // [rsp+18A0h] [rbp-28h]
  _QWORD *v267; // [rsp+18A8h] [rbp-20h]
  __int64 (__fastcall *v268)(); // [rsp+18B0h] [rbp-18h]
  __int64 v269; // [rsp+18B8h] [rbp-10h]

  *((_QWORD *)&v123 + 1) = 0LL;
  v255 = 0;
  v254 = 0;
  v259 = 0;
  v253 = 0;
  v258 = 0;
  v252 = 0;
  v257 = 0;
  v256 = 0;
  v251 = 0;
  v260 = 1;
  uu_du::uu_app(v102);
  v260 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v101,
    (int)v102,
    a1,
    a2,
    v2,
    v3,
    v49,
    v51,
    v53,
    v55);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v94, v101);
  if ( (_QWORD)v94 != 0x8000000000000000LL )
  {
    v109 = v100;
    v108 = v99;
    v107 = v98;
    v106 = v97;
    v105 = v96;
    v104 = v95;
    v103 = v94;
    v93 = v100;
    v92[5] = v99;
    v92[4] = v98;
    v92[3] = v97;
    v92[2] = v96;
    v92[1] = v95;
    v92[0] = v94;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aS, 1LL, &off_1612E8);
    one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v92, aD, 1LL, &off_161300);
    v4 = core::option::Option<T>::map(one);
    uu_du::parse_depth(v112, v4, v5, flag & 1);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v110, v112);
    if ( v110 )
    {
      v91 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v111,
              *((_QWORD *)&v111 + 1),
              &off_161790);
LABEL_139:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v92);
      return v91;
    }
    v87 = v111;
    v88 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v92, aFiles0From, 11LL, &off_161318);
    v115 = v88;
    if ( v88 != 0 )
    {
      v116 = v115;
      v86 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v116, &off_161330);
      if ( (v86 & 1) != 0 )
      {
        v117 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v92, aFile, 4LL, &off_161340);
        if ( (core::option::Option<T>::is_some(&v117) & 1) != 0 )
        {
          v118 = 39;
          v84 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v92, aFile, 4LL, &off_161390);
          v269 = v84;
          if ( !v84 )
            core::option::unwrap_failed(&off_1613A8);
          v8 = <alloc::string::String as core::ops::deref::Deref>::deref(v269);
          <str as os_display::native::Quotable>::quote(v124, v8, v9);
          v265 = v124;
          v266 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v123 = v124;
          *((_QWORD *)&v123 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          v122 = v123;
          core::fmt::Arguments::new_v1(v121, &off_161370, &v122);
          alloc::fmt::format(v120, v121);
          v119[0] = v120[0];
          v119[1] = v120[1];
          v119[2] = v120[2];
          v82 = std::io::error::Error::new(v118, v119);
          v91 = <T as core::convert::Into<U>>::into(v82, &off_1613C0);
          goto LABEL_18;
        }
      }
      v6 = <alloc::string::String as core::ops::deref::Deref>::deref(v116);
      uu_du::read_files_from(v128, v6, v7);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v125, v128);
      if ( v125 == 0x8000000000000000LL )
      {
        v91 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v126,
                &off_161358);
LABEL_18:
        v255 = 0;
        goto LABEL_139;
      }
      v129 = v125;
      v130 = v126;
      v131 = v127;
      v255 = 1;
      *(_QWORD *)v113 = v125;
      *(_QWORD *)&v113[2] = v126;
      v114 = v127;
    }
    else
    {
      v85 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v92, aFile, 4LL, &off_1613D8);
      v132 = v85;
      if ( v85 )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_many(src, v92, aFile, 4LL, &off_161408);
        if ( !src[0] )
          core::option::unwrap_failed(&off_161420);
        memcpy(dest, src, sizeof(dest));
        core::iter::traits::iterator::Iterator::map(v133, dest);
        core::iter::traits::iterator::Iterator::collect(v113, v133);
        v255 = 1;
      }
      else
      {
        v136 = alloc::alloc::exchange_malloc(24LL, 8LL);
        <std::path::PathBuf as core::convert::From<&T>>::from(&v137, asc_1DF32, 1LL);
        v81 = (_OWORD *)v136;
        if ( (v136 & 7) != 0 )
          core::panicking::panic_misaligned_pointer_dereference(8LL, v136, &off_1613F0);
        *(_QWORD *)(v136 + 16) = v138;
        *v81 = v137;
        alloc::slice::<impl [T]>::into_vec(v113, v136, 1LL);
        v255 = 1;
      }
    }
    v83 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v92, aTime, 4LL);
    v139 = core::bool::<impl bool>::then(v83 & 1, v92);
    v80 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, asc_1DF33, 1LL, &off_161438);
    if ( (v80 & 1) != 0 )
    {
      *(_QWORD *)&v140 = 1LL;
    }
    else
    {
      v79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aSi, 2LL, &off_161450);
      if ( (v79 & 1) != 0 )
      {
        *(_QWORD *)&v140 = 0LL;
      }
      else
      {
        v78 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aB, 1LL, &off_161468);
        if ( (v78 & 1) != 0 )
        {
          *((_QWORD *)&v140 + 1) = 1LL;
          *(_QWORD *)&v140 = 2LL;
        }
        else
        {
          v77 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aK, 1LL, &off_161480);
          if ( (v77 & 1) != 0 )
          {
            *((_QWORD *)&v140 + 1) = 1024LL;
            *(_QWORD *)&v140 = 2LL;
          }
          else
          {
            v76 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aM, 1LL, &off_161498);
            if ( (v76 & 1) != 0 )
            {
              if ( !is_mul_ok(0x400uLL, 0x400uLL) )
                core::panicking::panic_const::panic_const_mul_overflow(
                  &off_1614E0,
                  aM,
                  (0x400 * (unsigned __int128)0x400uLL) >> 64);
              *((_QWORD *)&v140 + 1) = 0x100000LL;
              *(_QWORD *)&v140 = 2LL;
            }
            else
            {
              v75 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v92, aBlockSize, 10LL, &off_1614B0);
              v10 = core::option::Option<T>::map(v75);
              uu_du::read_block_size(v143, v10, v11);
              <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v141, v143);
              if ( v141 )
              {
                v91 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                        v141,
                        v142,
                        &off_1614C8);
                goto LABEL_51;
              }
              *((_QWORD *)&v140 + 1) = v142;
              *(_QWORD *)&v140 = 2LL;
            }
          }
        }
      }
    }
    v74 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aAll, 3LL, &off_1614F8);
    v73 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aS_0, 1LL, &off_161510);
    v72 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aOneFileSystem, 15LL, &off_161528);
    v71 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aDereference, 11LL, &off_161540);
    if ( (v71 & 1) != 0 )
    {
      *(_QWORD *)&v153 = 0x8000000000000000LL;
    }
    else
    {
      v70 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              v92,
              "dereference-argsConnection resetentity not foundk",
              16LL,
              &off_161558);
      if ( (v70 & 1) != 0 )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone((int)&v155, (int)v113);
        v153 = v155;
        v154 = v156;
      }
      else
      {
        *(_QWORD *)&v153 = 0x8000000000000002LL;
      }
    }
    v69 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, asc_1DF61, 1LL, &off_161570);
    v68 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aVerbose, 7LL, &off_161588);
    uu_du::build_exclude_patterns(v159, v92);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v157, v159);
    if ( (_QWORD)v157 == 0x8000000000000000LL )
    {
      v91 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *((_QWORD *)&v157 + 1),
              v158,
              &off_161778);
      core::ptr::drop_in_place<uu_du::Deref>(&v153);
      goto LABEL_51;
    }
    v161 = v158;
    v160 = v157;
    v148 = v74 & 1;
    v149 = v73 & 1;
    v150 = v72 & 1;
    v147 = v154;
    v146 = v153;
    v151 = v69 & 1;
    v152 = v68 & 1;
    v145 = v158;
    *(_OWORD *)v144 = v157;
    is_some = core::option::Option<T>::is_some(&v139);
    if ( (is_some & 1) != 0 )
    {
      v66 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v92, aTimeStyle, 10LL, &off_1615A0);
      v12 = core::option::Option<T>::map(v66);
      uu_du::parse_time_style(v167, v12, v13);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v164, v167);
      if ( v164 )
      {
        v14 = v166;
        v46 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v165,
                v166,
                &off_161760);
        v91 = v46;
LABEL_136:
        v254 = 0;
        core::ptr::drop_in_place<uu_du::TraversalOptions>((int)v144, v14, v45, v46, v47, v48, v50, v52);
LABEL_51:
        if ( (v255 & 1) != 0 )
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v113);
        goto LABEL_18;
      }
      <str as alloc::string::ToString>::to_string(&v162, v165, v166);
      v254 = 1;
    }
    else
    {
      <str as alloc::string::ToString>::to_string(&v162, aYMDHM, 14LL);
      v254 = 1;
    }
    v64 = v140;
    v65 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aC, 1LL, &off_1615B8);
    v63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aInodes, 6LL, &off_1615D0);
    v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v92, aThreshold, 9LL, &off_1615E8);
    core::option::Option<T>::map(v176, v62);
    core::option::Option<core::result::Result<T,E>>::transpose(v175, v176);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v173, v175);
    if ( v173 )
    {
      v14 = DWORD2(v174);
      v46 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v174,
              *((_QWORD *)&v174 + 1),
              &off_161748);
      v91 = v46;
    }
    else
    {
      v60 = v174;
      v61 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aApparentSize, 13LL, &off_161600);
      if ( (v61 & 1) != 0 )
        v177 = 1;
      else
        v177 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aB, 1LL, &off_161618) & 1;
      v254 = 0;
      v179 = v163;
      v178 = v162;
      v59 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, a0, 1LL, &off_161630);
      v15 = uucore::mods::line_ending::LineEnding::from_zero_flag(v59 & 1);
      v259 = 1;
      BYTE8(v172) = v65 & 1;
      BYTE9(v172) = v63 & 1;
      v168 = v87;
      v169 = v60;
      BYTE10(v172) = v177 & 1;
      v170 = v64;
      BYTE12(v172) = v139;
      v171 = v178;
      *(_QWORD *)&v172 = v179;
      BYTE13(v172) = v15;
      BYTE11(v172) = flag & 1;
      if ( (v63 & 1) != 0 )
      {
        if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aApparentSize, 13LL, &off_161648) & 1) != 0
          || (v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v92, aB, 1LL, &off_161660),
              (v58 & 1) != 0) )
        {
          v183[0] = uucore::util_name();
          v183[1] = v16;
          v267 = v183;
          v268 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v182 = v183;
          *((_QWORD *)&v182 + 1) = <&T as core::fmt::Display>::fmt;
          v181 = v182;
          core::fmt::Arguments::new_v1(v180, &unk_161678, &v181);
          std::io::stdio::_eprint(v180);
          core::fmt::Arguments::new_const(v184, &off_161698);
          std::io::stdio::_eprint(v184);
        }
      }
      std::sync::mpsc::channel(v189);
      v253 = 1;
      v185 = v189[0];
      v186 = v189[1];
      v187 = v190;
      v188 = v191;
      v259 = 0;
      v258 = 0;
      v194[4] = v172;
      v194[3] = v171;
      v194[2] = v170;
      v194[1] = v169;
      v194[0] = v168;
      v195 = v190;
      v196 = v191;
      std::thread::spawn(&v192, v194);
      v252 = 1;
      v255 = 0;
      v199 = v114;
      v198 = *(_OWORD *)v113;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v197, &v198);
      v200[0] = v197[0];
      v200[1] = v197[1];
      v200[2] = v197[2];
      v200[3] = v197[3];
      while ( 1 )
      {
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v201, v200);
        if ( (_QWORD)v201 == 0x8000000000000000LL )
          break;
        v204 = v202;
        v203 = v201;
        v205 = alloc::vec::Vec<T,A>::is_empty(v144) & 1;
        v57 = <&bool as core::ops::bit::Not>::not(&v205);
        if ( (v57 & 1) != 0 )
        {
          v24 = <std::path::PathBuf as core::ops::deref::Deref>::deref(&v203);
          std::path::Path::to_string_lossy(v206, v24, v25);
          v207[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v144);
          v207[1] = v26;
          do
          {
            v208 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v207);
            if ( !v208 )
            {
              core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v206);
              goto LABEL_96;
            }
            v56 = v208;
            v27 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v206);
            v54 = glob::Pattern::matches(v56, v27, v42);
          }
          while ( (v54 & 1) == 0 );
          if ( (v152 & 1) != 0 )
          {
            v43 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v206);
            v50 = v44;
            v52 = v43;
            <str as os_display::native::Quotable>::quote(v212, v43, v44);
            v261 = v212;
            v262 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v211 = v212;
            *((_QWORD *)&v211 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            v210 = v211;
            core::fmt::Arguments::new_v1(v209, &unk_161728, &v210);
            std::io::stdio::_print(v209);
          }
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v206);
          core::ptr::drop_in_place<std::path::PathBuf>(&v203);
        }
        else
        {
LABEL_96:
          v23 = <std::path::PathBuf as core::ops::deref::Deref>::deref(&v203);
          uu_du::Stat::new(v213, v23, v28, v144);
          v251 = 1;
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v213[0], (__m128i)xmmword_1D810)) == 0xFFFF )
          {
            v29 = <std::path::PathBuf as core::ops::deref::Deref>::deref(&v203);
            std::path::Path::to_string_lossy(v241, v29, v34);
            v35 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v241);
            <str as os_display::native::Quotable>::quote(v240, v35, v36);
            v263 = v240;
            v264 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v239 = v240;
            *((_QWORD *)&v239 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            v238 = v239;
            core::fmt::Arguments::new_v1(v237, &off_1616F0, &v238);
            alloc::fmt::format(&v234, v237);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v241);
            v233[3] = v234;
            v233[4] = v235;
            v233[5] = v236;
            v233[0] = v234;
            v233[1] = v235;
            v233[2] = v236;
            v232[2] = uucore::mods::error::USimpleError::new(1LL, v233);
            v232[3] = v37;
            v232[1] = 0LL;
            v232[0] = 2LL;
            std::sync::mpsc::Sender<T>::send(v231, &v185, v232);
            v38 = core::result::Result<T,E>::map_err((int)v231);
            v40 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v38, v39);
            v229 = v40;
            v230 = v41;
            if ( v40 )
            {
              v14 = v230;
              v91 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                      v229,
                      v230,
                      &off_161710);
              goto LABEL_115;
            }
          }
          else
          {
            v251 = 0;
            v257 = 1;
            memcpy(v214, v213, sizeof(v214));
            std::collections::hash::set::HashSet<T>::new((unsigned int)v215);
            if ( v214[0] == 1LL )
              std::collections::hash::set::HashSet<T,S>::insert(v215, v214[2], v214[3], v214[4]);
            v257 = 0;
            memcpy(v220, v214, sizeof(v220));
            uu_du::du(v219, v220, v144, 0LL, v215, &v185);
            core::result::Result<T,E>::map_err((int)v218, (int)v219);
            <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v217, v218);
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v217[0], (__m128i)xmmword_1D810)) == 0xFFFF )
            {
              v14 = v217[1].m128i_i32[2];
              v91 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                      v217[1].m128i_i64[0],
                      v217[1].m128i_i64[1],
                      &off_1616D8);
              goto LABEL_114;
            }
            memcpy(v221, v217, sizeof(v221));
            v256 = 1;
            memcpy(v216, v221, sizeof(v216));
            v256 = 0;
            memcpy(v228, v216, sizeof(v228));
            memcpy(v226, v228, sizeof(v226));
            v227 = 0LL;
            memcpy(v225, v226, sizeof(v225));
            std::sync::mpsc::Sender<T>::send(v224, &v185, v225);
            v30 = core::result::Result<T,E>::map_err((int)v224);
            v32 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v30, v31);
            v222 = v32;
            v223 = v33;
            if ( v32 )
            {
              v14 = v223;
              v91 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                      v222,
                      v223,
                      &off_1616C0);
LABEL_114:
              v256 = 0;
              core::ptr::drop_in_place<std::collections::hash::set::HashSet<uu_du::FileInfo>>(v215);
              v257 = 0;
LABEL_115:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v213[0], (__m128i)xmmword_1D810)) == 0xFFFF )
              {
                core::ptr::drop_in_place<core::result::Result<uu_du::Stat,std::io::error::Error>>(v213);
              }
              else if ( (v251 & 1) != 0 )
              {
                core::ptr::drop_in_place<uu_du::Stat>(v213);
              }
              v251 = 0;
              core::ptr::drop_in_place<std::path::PathBuf>(&v203);
              core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v200);
              goto LABEL_93;
            }
            v256 = 0;
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<uu_du::FileInfo>>(v215);
            v257 = 0;
          }
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v213[0], (__m128i)xmmword_1D810)) == 0xFFFF )
          {
            core::ptr::drop_in_place<core::result::Result<uu_du::Stat,std::io::error::Error>>(v213);
          }
          else if ( (v251 & 1) != 0 )
          {
            core::ptr::drop_in_place<uu_du::Stat>(v213);
          }
          v251 = 0;
          core::ptr::drop_in_place<std::path::PathBuf>(&v203);
        }
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v200);
      v253 = 0;
      core::mem::drop(v185, v186);
      v252 = 0;
      v250 = v193;
      v249 = v192;
      std::thread::JoinHandle<T>::join((int)v248);
      core::result::Result<T,E>::map_err((int)v247, (int)v248);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v244, v247);
      if ( v244 )
      {
        v14 = v246;
        v46 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v245,
                v246,
                &off_1616A8);
        v91 = v46;
      }
      else
      {
        v17 = v246;
        v18 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v245, v246);
        *(_QWORD *)v242 = v18;
        v243 = v21;
        if ( !v18 )
        {
          v91 = 0LL;
          v252 = 0;
          v258 = 0;
          v253 = 0;
          v259 = 0;
          v254 = 0;
          core::ptr::drop_in_place<uu_du::TraversalOptions>((int)v144, v17, 0, 0, v19, v20, v50, v52);
          v255 = 0;
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v92);
          return v91;
        }
        v14 = v243;
        v46 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                *(_QWORD *)v242,
                v243,
                &off_1616A8);
        v91 = v46;
      }
LABEL_93:
      if ( (v252 & 1) != 0 )
        core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v192);
      v252 = 0;
      v258 = 0;
      if ( (v253 & 1) != 0 )
        core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<uu_du::StatPrintInfo,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v185);
      v253 = 0;
    }
    v259 = 0;
    if ( (v254 & 1) != 0 )
      core::ptr::drop_in_place<alloc::string::String>(&v162);
    goto LABEL_136;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v94 + 1),
           &off_1617A8);
}
