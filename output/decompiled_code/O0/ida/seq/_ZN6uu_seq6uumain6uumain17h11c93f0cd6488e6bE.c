__int64 __fastcall uu_seq::uumain::uumain(int a1, int a2)
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
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // edx
  const char *v23; // rsi
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  char **v37; // rsi
  int v38; // edx
  __int64 v39; // rcx
  int v40; // r8d
  int v41; // r9d
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // [rsp+0h] [rbp-D18h]
  struct _Unwind_Exception *v47; // [rsp+0h] [rbp-D18h]
  struct _Unwind_Exception *v48; // [rsp+0h] [rbp-D18h]
  struct _Unwind_Exception *v49; // [rsp+0h] [rbp-D18h]
  struct _Unwind_Exception *v50; // [rsp+0h] [rbp-D18h]
  int v51; // [rsp+8h] [rbp-D10h]
  int v52; // [rsp+8h] [rbp-D10h]
  int v53; // [rsp+8h] [rbp-D10h]
  int v54; // [rsp+8h] [rbp-D10h]
  int v55; // [rsp+8h] [rbp-D10h]
  struct _Unwind_Exception *v56; // [rsp+10h] [rbp-D08h]
  char v57; // [rsp+10h] [rbp-D08h]
  int v58; // [rsp+18h] [rbp-D00h]
  char v59; // [rsp+18h] [rbp-D00h]
  int v60; // [rsp+20h] [rbp-CF8h]
  int v61; // [rsp+28h] [rbp-CF0h]
  int v62; // [rsp+30h] [rbp-CE8h]
  int v63; // [rsp+38h] [rbp-CE0h]
  int v64; // [rsp+40h] [rbp-CD8h]
  int v65; // [rsp+48h] [rbp-CD0h]
  int v66; // [rsp+50h] [rbp-CC8h]
  int v67; // [rsp+58h] [rbp-CC0h]
  _QWORD *v68; // [rsp+58h] [rbp-CC0h]
  int v69; // [rsp+60h] [rbp-CB8h]
  int v70; // [rsp+68h] [rbp-CB0h]
  char v71; // [rsp+6Eh] [rbp-CAAh]
  struct _Unwind_Exception *v72; // [rsp+70h] [rbp-CA8h]
  int v73; // [rsp+78h] [rbp-CA0h]
  __int64 v74; // [rsp+80h] [rbp-C98h]
  int v75; // [rsp+88h] [rbp-C90h]
  int v76; // [rsp+B8h] [rbp-C60h]
  __int64 v77; // [rsp+C0h] [rbp-C58h]
  char v78; // [rsp+CFh] [rbp-C49h]
  int v79[2]; // [rsp+D8h] [rbp-C40h]
  _QWORD *v80; // [rsp+F0h] [rbp-C28h]
  _QWORD *v81; // [rsp+100h] [rbp-C18h]
  int v82[2]; // [rsp+108h] [rbp-C10h]
  char v83; // [rsp+117h] [rbp-C01h]
  _QWORD *v84; // [rsp+118h] [rbp-C00h]
  char is_zero; // [rsp+137h] [rbp-BE1h]
  _QWORD *v86; // [rsp+138h] [rbp-BE0h]
  char v87; // [rsp+147h] [rbp-BD1h]
  _QWORD *v88; // [rsp+148h] [rbp-BD0h]
  _QWORD *v89; // [rsp+168h] [rbp-BB0h]
  int v90[2]; // [rsp+188h] [rbp-B90h]
  char flag; // [rsp+197h] [rbp-B81h]
  int v92[2]; // [rsp+1B8h] [rbp-B60h]
  int v93[2]; // [rsp+1E0h] [rbp-B38h]
  char is_none; // [rsp+1FFh] [rbp-B19h]
  __int64 v95; // [rsp+220h] [rbp-AF8h]
  int v96[4]; // [rsp+230h] [rbp-AE8h] BYREF
  int v97[4]; // [rsp+240h] [rbp-AD8h]
  int v98[4]; // [rsp+250h] [rbp-AC8h]
  int v99[4]; // [rsp+260h] [rbp-AB8h]
  int v100[4]; // [rsp+270h] [rbp-AA8h]
  int v101[4]; // [rsp+280h] [rbp-A98h]
  int v102[2]; // [rsp+290h] [rbp-A88h]
  __int128 v103; // [rsp+298h] [rbp-A80h] BYREF
  __int128 v104; // [rsp+2A8h] [rbp-A70h]
  __int128 v105; // [rsp+2B8h] [rbp-A60h]
  __int128 v106; // [rsp+2C8h] [rbp-A50h]
  __int128 v107; // [rsp+2D8h] [rbp-A40h]
  __int128 v108; // [rsp+2E8h] [rbp-A30h]
  __int64 v109; // [rsp+2F8h] [rbp-A20h]
  int v110[26]; // [rsp+300h] [rbp-A18h] BYREF
  int v111[178]; // [rsp+368h] [rbp-9B0h] BYREF
  int v112[4]; // [rsp+630h] [rbp-6E8h]
  int v113[4]; // [rsp+640h] [rbp-6D8h]
  int v114[4]; // [rsp+650h] [rbp-6C8h]
  int v115[4]; // [rsp+660h] [rbp-6B8h]
  int v116[4]; // [rsp+670h] [rbp-6A8h]
  int v117[4]; // [rsp+680h] [rbp-698h]
  int v118[2]; // [rsp+690h] [rbp-688h]
  _QWORD src[8]; // [rsp+698h] [rbp-680h] BYREF
  unsigned __int64 v120[4]; // [rsp+6D8h] [rbp-640h] BYREF
  int v121[6]; // [rsp+6F8h] [rbp-620h] BYREF
  _BYTE dest[64]; // [rsp+710h] [rbp-608h] BYREF
  int v123[4]; // [rsp+750h] [rbp-5C8h] BYREF
  __int64 v124; // [rsp+760h] [rbp-5B8h]
  __int128 v125; // [rsp+768h] [rbp-5B0h] BYREF
  __int64 v126; // [rsp+778h] [rbp-5A0h]
  int v127[2]; // [rsp+780h] [rbp-598h]
  int v128[2]; // [rsp+788h] [rbp-590h]
  char v129; // [rsp+790h] [rbp-588h]
  __int128 v130; // [rsp+798h] [rbp-580h] BYREF
  __int64 v131; // [rsp+7A8h] [rbp-570h]
  __int128 v132; // [rsp+7B0h] [rbp-568h] BYREF
  __int64 v133; // [rsp+7C0h] [rbp-558h]
  __int128 v134; // [rsp+7C8h] [rbp-550h] BYREF
  __int128 v135; // [rsp+7D8h] [rbp-540h]
  __int64 v136; // [rsp+7E8h] [rbp-530h]
  __int64 v137; // [rsp+7F0h] [rbp-528h]
  __int64 v138; // [rsp+7F8h] [rbp-520h]
  __int64 v139; // [rsp+800h] [rbp-518h] BYREF
  char v140; // [rsp+808h] [rbp-510h]
  _BYTE v141[56]; // [rsp+838h] [rbp-4E0h] BYREF
  __int128 v142; // [rsp+870h] [rbp-4A8h] BYREF
  __int64 v143; // [rsp+880h] [rbp-498h]
  char v144; // [rsp+888h] [rbp-490h]
  __int128 v145; // [rsp+890h] [rbp-488h] BYREF
  __int64 v146; // [rsp+8A0h] [rbp-478h]
  __int128 v147; // [rsp+8A8h] [rbp-470h] BYREF
  __int128 v148; // [rsp+8B8h] [rbp-460h]
  __int64 v149; // [rsp+8C8h] [rbp-450h]
  __int64 v150; // [rsp+8D0h] [rbp-448h]
  __int64 v151; // [rsp+8D8h] [rbp-440h]
  __int64 v152; // [rsp+8E0h] [rbp-438h] BYREF
  char v153; // [rsp+8E8h] [rbp-430h]
  _BYTE v154[56]; // [rsp+918h] [rbp-400h] BYREF
  __int128 v155; // [rsp+950h] [rbp-3C8h] BYREF
  __int64 v156; // [rsp+960h] [rbp-3B8h]
  char v157; // [rsp+968h] [rbp-3B0h]
  __int128 v158; // [rsp+970h] [rbp-3A8h] BYREF
  __int64 v159; // [rsp+980h] [rbp-398h]
  unsigned __int64 v160; // [rsp+988h] [rbp-390h] BYREF
  __int128 v161; // [rsp+990h] [rbp-388h]
  __int64 v162; // [rsp+9A0h] [rbp-378h]
  __int128 v163; // [rsp+9A8h] [rbp-370h] BYREF
  __int64 v164; // [rsp+9B8h] [rbp-360h]
  __int128 v165; // [rsp+9C0h] [rbp-358h] BYREF
  __int128 v166; // [rsp+9D0h] [rbp-348h]
  __int128 v167; // [rsp+9E0h] [rbp-338h]
  __int64 v168; // [rsp+9F0h] [rbp-328h]
  __int128 v169; // [rsp+9F8h] [rbp-320h] BYREF
  __int128 v170; // [rsp+A08h] [rbp-310h]
  __int128 v171; // [rsp+A18h] [rbp-300h]
  __int64 v172; // [rsp+A28h] [rbp-2F0h]
  __int128 v173; // [rsp+A30h] [rbp-2E8h]
  __int128 v174; // [rsp+A40h] [rbp-2D8h]
  __int128 v175; // [rsp+A50h] [rbp-2C8h]
  __int64 v176; // [rsp+A60h] [rbp-2B8h]
  __int128 v177; // [rsp+A70h] [rbp-2A8h] BYREF
  __int64 v178; // [rsp+A80h] [rbp-298h]
  char v179; // [rsp+A88h] [rbp-290h]
  __int128 v180; // [rsp+A90h] [rbp-288h] BYREF
  __int64 v181; // [rsp+AA0h] [rbp-278h]
  _Unwind_Exception v182; // [rsp+AA8h] [rbp-270h] BYREF
  __int64 v183; // [rsp+AF0h] [rbp-228h] BYREF
  __int128 v184; // [rsp+AF8h] [rbp-220h]
  __int128 v185; // [rsp+B08h] [rbp-210h]
  int v186[18]; // [rsp+B38h] [rbp-1E0h] BYREF
  _OWORD v187[2]; // [rsp+B80h] [rbp-198h] BYREF
  _BYTE v188[72]; // [rsp+BA0h] [rbp-178h] BYREF
  int v189[2]; // [rsp+BE8h] [rbp-130h] BYREF
  _OWORD v190[2]; // [rsp+BF0h] [rbp-128h] BYREF
  __int64 v191; // [rsp+C10h] [rbp-108h]
  __int128 v192; // [rsp+C18h] [rbp-100h]
  __int128 v193; // [rsp+C28h] [rbp-F0h]
  __int64 v194; // [rsp+C38h] [rbp-E0h]
  __int128 v195; // [rsp+C40h] [rbp-D8h]
  __int128 v196; // [rsp+C50h] [rbp-C8h]
  __int64 v197; // [rsp+C60h] [rbp-B8h]
  __int128 v198; // [rsp+C70h] [rbp-A8h]
  __int128 v199; // [rsp+C80h] [rbp-98h]
  __int64 v200; // [rsp+C90h] [rbp-88h]
  __int128 v201; // [rsp+CA0h] [rbp-78h]
  __int128 v202; // [rsp+CB0h] [rbp-68h]
  __int64 v203; // [rsp+CC0h] [rbp-58h]
  __int128 v204; // [rsp+CD0h] [rbp-48h]
  __int128 v205; // [rsp+CE0h] [rbp-38h]
  __int64 v206; // [rsp+CF0h] [rbp-28h]
  __int64 v207; // [rsp+CF8h] [rbp-20h] BYREF
  char v208; // [rsp+D01h] [rbp-17h] BYREF
  char v209; // [rsp+D02h] [rbp-16h]
  char v210; // [rsp+D03h] [rbp-15h]
  char v211; // [rsp+D04h] [rbp-14h]
  char v212; // [rsp+D05h] [rbp-13h]
  char v213; // [rsp+D06h] [rbp-12h]
  char v214; // [rsp+D07h] [rbp-11h]

  v210 = 0;
  v213 = 0;
  v212 = 0;
  v211 = 0;
  v209 = 0;
  v214 = 1;
  uu_seq::uu_app(v111);
  v214 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v110,
    (int)v111,
    a1,
    a2,
    v2,
    v3,
    v46,
    v51,
    v56,
    v58);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v103, v110);
  if ( (_QWORD)v103 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v103 + 1),
             &off_131210);
  *(_QWORD *)v118 = v109;
  *(_OWORD *)v117 = v108;
  *(_OWORD *)v116 = v107;
  *(_OWORD *)v115 = v106;
  *(_OWORD *)v114 = v105;
  *(_OWORD *)v113 = v104;
  *(_OWORD *)v112 = v103;
  *(_QWORD *)v102 = v109;
  *(_OWORD *)v101 = v108;
  *(_OWORD *)v100 = v107;
  *(_OWORD *)v99 = v106;
  *(_OWORD *)v98 = v105;
  *(_OWORD *)v97 = v104;
  *(_OWORD *)v96 = v103;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(src, v96, aNumbers, 7LL, &off_130F70);
  is_none = core::option::Option<T>::is_none(src);
  if ( (is_none & 1) != 0 )
  {
    v120[0] = 0x8000000000000001LL;
    v95 = <T as core::convert::Into<U>>::into(v120, &off_1311F8);
LABEL_49:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v96);
    return v95;
  }
  if ( !src[0] )
    core::option::unwrap_failed(&off_130F88);
  memcpy(dest, src, sizeof(dest));
  core::iter::traits::iterator::Iterator::collect(v121, dest);
  *(_QWORD *)v93 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v96, aSeparator, 9LL, &off_130FA0);
  v4 = core::option::Option<T>::map(*(_QWORD *)v93);
  v6 = core::option::Option<T>::unwrap_or(v4, v5, asc_19FFE, 1LL);
  <str as alloc::string::ToString>::to_string(&v130, v6, v7);
  *(_QWORD *)v92 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v96, aTerminator, 10LL, &off_130FB8);
  v8 = core::option::Option<T>::map(*(_QWORD *)v92);
  v10 = core::option::Option<T>::unwrap_or(v8, v9, asc_19FFE, 1LL);
  <str as alloc::string::ToString>::to_string(&v132, v10, v11);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v96, aEqualWidth, 11LL, &off_130FD0);
  *(_QWORD *)v90 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v96, aFormat_0, 6LL, &off_130FE8);
  v12 = core::option::Option<T>::map(*(_QWORD *)v90);
  v124 = v131;
  *(_OWORD *)v123 = v130;
  v126 = v133;
  v125 = v132;
  v129 = flag & 1;
  *(_QWORD *)v127 = v12;
  *(_QWORD *)v128 = v13;
  if ( (unsigned __int64)alloc::vec::Vec<T,A>::len(v121) > 1 )
  {
    v89 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v121, 0LL, &off_131000);
    v14 = <alloc::string::String as core::ops::deref::Deref>::deref(*v89);
    core::str::<impl str>::parse(&v139, v14, v15);
    if ( v139 == 0x8000000000000004LL )
    {
      v87 = v140;
      v88 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v121, 0LL, &off_1311C8);
      <alloc::string::String as alloc::string::ToString>::to_string(&v145, *v88);
      v143 = v146;
      v142 = v145;
      v144 = v87;
      v37 = &off_1311E0;
      v39 = <T as core::convert::Into<U>>::into(&v142, &off_1311E0);
      v95 = v39;
LABEL_48:
      v213 = 0;
      core::ptr::drop_in_place<uu_seq::SeqOptions>((int)v123, (int)v37, v38, v39, v40, v41, v47, v52);
      core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(
        (int)v121,
        (int)v37,
        v42,
        v43,
        v44,
        v45,
        v50,
        v55);
      goto LABEL_49;
    }
    memcpy(v141, &v139, sizeof(v141));
    v213 = 1;
    memcpy(&v134, v141, 0x38uLL);
  }
  else
  {
    uu_seq::number::PreciseNumber::one(&v134);
    v213 = 1;
  }
  if ( (unsigned __int64)alloc::vec::Vec<T,A>::len(v121) > 2 )
  {
    v86 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v121, 1LL, &off_131018);
    v16 = <alloc::string::String as core::ops::deref::Deref>::deref(*v86);
    core::str::<impl str>::parse(&v152, v16, v17);
    if ( v152 == 0x8000000000000004LL )
    {
      v83 = v153;
      v84 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v121, 1LL, &off_131198);
      <alloc::string::String as alloc::string::ToString>::to_string(&v158, *v84);
      v156 = v159;
      v155 = v158;
      v157 = v83;
      v37 = &off_1311B0;
      v95 = <T as core::convert::Into<U>>::into(&v155, &off_1311B0);
LABEL_47:
      v212 = 0;
      core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&v134);
      goto LABEL_48;
    }
    memcpy(v154, &v152, sizeof(v154));
    v212 = 1;
    memcpy(&v147, v154, 0x38uLL);
  }
  else
  {
    uu_seq::number::PreciseNumber::one(&v147);
    v212 = 1;
  }
  is_zero = uu_seq::number::PreciseNumber::is_zero(&v147);
  if ( (is_zero & 1) != 0 )
  {
    v81 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v121, 1LL, &off_131168);
    <alloc::string::String as alloc::string::ToString>::to_string(&v163, *v81);
    v162 = v164;
    v161 = v163;
    v160 = 0x8000000000000000LL;
    v37 = &off_131180;
    v95 = <T as core::convert::Into<U>>::into(&v160, &off_131180);
LABEL_46:
    core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&v147);
    goto LABEL_47;
  }
  *(_QWORD *)v82 = alloc::vec::Vec<T,A>::len(v121);
  if ( !*(_QWORD *)v82 )
    core::panicking::panic_const::panic_const_sub_overflow(&off_131030);
  v80 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v121, *(_QWORD *)v82 - 1LL, &off_131048);
  v18 = <alloc::string::String as core::ops::deref::Deref>::deref(*v80);
  core::str::<impl str>::parse(&v169, v18, v19);
  if ( (_QWORD)v169 == 0x8000000000000004LL )
  {
    v78 = BYTE8(v169);
    v68 = (_QWORD *)<alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v121, *(_QWORD *)v82 - 1LL, &off_131138);
    <alloc::string::String as alloc::string::ToString>::to_string(&v180, *v68);
    v178 = v181;
    v177 = v180;
    v179 = v78;
    v37 = &off_131150;
    v95 = <T as core::convert::Into<U>>::into(&v177, &off_131150);
LABEL_45:
    v211 = 0;
    goto LABEL_46;
  }
  v176 = v172;
  v175 = v171;
  v174 = v170;
  v173 = v169;
  v211 = 1;
  v168 = v172;
  v167 = v171;
  v166 = v170;
  v165 = v169;
  *(_QWORD *)v79 = core::cmp::Ord::max(v137, v150);
  v77 = core::cmp::Ord::max(*(_QWORD *)v79, *((_QWORD *)&v167 + 1));
  v76 = core::cmp::Ord::max(v138, v151);
  if ( !*(_QWORD *)v127 )
  {
    *(_QWORD *)&v182.exception_class = 0x8000000000000000LL;
    goto LABEL_33;
  }
  uucore::features::format::Format<F>::parse(v186, *(_QWORD *)v127, *(_QWORD *)v128);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v183, v186);
  if ( v183 == 0x8000000000000000LL )
  {
    v187[1] = v185;
    v187[0] = v184;
    v37 = &off_131108;
    v95 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v187,
            &off_131108);
    core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&v165);
    goto LABEL_45;
  }
  memcpy(v188, &v183, sizeof(v188));
  memcpy(&v182, v188, 0x48uLL);
LABEL_33:
  v213 = 0;
  v200 = v136;
  v199 = v135;
  v198 = v134;
  v212 = 0;
  v203 = v149;
  v202 = v148;
  v201 = v147;
  v211 = 0;
  v206 = v167;
  v205 = v166;
  v204 = v165;
  v210 = 1;
  v191 = v136;
  v190[1] = v135;
  v190[0] = v134;
  v194 = v149;
  v193 = v148;
  v192 = v147;
  v197 = v167;
  v196 = v166;
  v195 = v165;
  v73 = <alloc::string::String as core::ops::deref::Deref>::deref(v123);
  v74 = v20;
  v21 = <alloc::string::String as core::ops::deref::Deref>::deref(&v125);
  v75 = v22;
  LODWORD(v23) = v76;
  v210 = 0;
  v72 = (struct _Unwind_Exception *)uu_seq::print_seq(
                                      (unsigned int)v190,
                                      v76,
                                      v73,
                                      v74,
                                      v21,
                                      v22,
                                      v129 & 1,
                                      v77,
                                      (__int64)&v182);
  *(_QWORD *)v189 = v72;
  v209 = 1;
  v210 = 0;
  if ( v72 )
  {
    v208 = std::io::error::Error::kind(v189);
    v23 = asc_1A0A3;
    v71 = <std::io::error::ErrorKind as core::cmp::PartialEq>::eq(&v208, asc_1A0A3);
    v209 = 0;
    if ( (v71 & 1) != 0 )
    {
      v207 = *(_QWORD *)v189;
      v95 = 0LL;
      core::ptr::drop_in_place<std::io::error::Error>(&v207);
    }
    else
    {
      v95 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
              v189[0],
              (int)asc_1A0A3,
              v24,
              v25,
              v26,
              v27,
              (__int64)v48,
              v53,
              v57,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64,
              v65,
              v66,
              v67,
              v69,
              v70,
              v72,
              v73,
              v74,
              v75);
    }
  }
  else
  {
    v95 = 0LL;
  }
  v209 = 0;
  core::ptr::drop_in_place<core::option::Option<uucore::features::format::Format<uucore::features::format::num_format::Float>>>(&v182);
  v211 = 0;
  v212 = 0;
  v213 = 0;
  core::ptr::drop_in_place<uu_seq::SeqOptions>((int)v123, (int)v23, v28, v29, v30, v31, v48, v53);
  core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>((int)v121, (int)v23, v32, v33, v34, v35, v49, v54);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v96);
  return v95;
}
