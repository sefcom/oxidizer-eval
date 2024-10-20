__int64 __fastcall uu_shuf::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // esi
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdx
  int v28; // esi
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // esi
  __int64 v40; // rax
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rdx
  int v44; // esi
  int v45; // edx
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v52; // [rsp+0h] [rbp-D08h]
  struct _Unwind_Exception *v53; // [rsp+0h] [rbp-D08h]
  int v54; // [rsp+8h] [rbp-D00h]
  int v55; // [rsp+8h] [rbp-D00h]
  struct _Unwind_Exception *v56; // [rsp+10h] [rbp-CF8h]
  int v57; // [rsp+10h] [rbp-CF8h]
  int v58; // [rsp+18h] [rbp-CF0h]
  int v59; // [rsp+18h] [rbp-CF0h]
  int v60; // [rsp+20h] [rbp-CE8h]
  int v61; // [rsp+28h] [rbp-CE0h]
  int v62; // [rsp+30h] [rbp-CD8h]
  int v63; // [rsp+38h] [rbp-CD0h]
  struct _Unwind_Exception *v64; // [rsp+40h] [rbp-CC8h]
  int v65; // [rsp+48h] [rbp-CC0h]
  struct _Unwind_Exception *v66; // [rsp+50h] [rbp-CB8h]
  int v67; // [rsp+58h] [rbp-CB0h]
  int v68[2]; // [rsp+B0h] [rbp-C58h]
  char v69; // [rsp+13Eh] [rbp-BCAh]
  char v70; // [rsp+13Fh] [rbp-BC9h]
  int v71[2]; // [rsp+140h] [rbp-BC8h]
  int v72[2]; // [rsp+158h] [rbp-BB0h]
  int v73[2]; // [rsp+160h] [rbp-BA8h]
  __int64 v74; // [rsp+180h] [rbp-B88h]
  __int64 v75; // [rsp+188h] [rbp-B80h]
  __int64 one; // [rsp+1B0h] [rbp-B58h]
  char flag; // [rsp+1CFh] [rbp-B39h]
  __int64 v78; // [rsp+1E0h] [rbp-B28h]
  int v79[4]; // [rsp+1F0h] [rbp-B18h] BYREF
  int v80[4]; // [rsp+200h] [rbp-B08h]
  int v81[4]; // [rsp+210h] [rbp-AF8h]
  int v82[4]; // [rsp+220h] [rbp-AE8h]
  int v83[4]; // [rsp+230h] [rbp-AD8h]
  int v84[4]; // [rsp+240h] [rbp-AC8h]
  int v85[2]; // [rsp+250h] [rbp-AB8h]
  __int128 v86; // [rsp+258h] [rbp-AB0h] BYREF
  __int128 v87; // [rsp+268h] [rbp-AA0h]
  __int128 v88; // [rsp+278h] [rbp-A90h]
  __int128 v89; // [rsp+288h] [rbp-A80h]
  __int128 v90; // [rsp+298h] [rbp-A70h]
  __int128 v91; // [rsp+2A8h] [rbp-A60h]
  __int64 v92; // [rsp+2B8h] [rbp-A50h]
  int v93[26]; // [rsp+2C0h] [rbp-A48h] BYREF
  int dest[178]; // [rsp+328h] [rbp-9E0h] BYREF
  int v95[4]; // [rsp+5F0h] [rbp-718h]
  int v96[4]; // [rsp+600h] [rbp-708h]
  int v97[4]; // [rsp+610h] [rbp-6F8h]
  int v98[4]; // [rsp+620h] [rbp-6E8h]
  int v99[4]; // [rsp+630h] [rbp-6D8h]
  int v100[4]; // [rsp+640h] [rbp-6C8h]
  int v101[2]; // [rsp+650h] [rbp-6B8h]
  int v102[2]; // [rsp+658h] [rbp-6B0h]
  __int128 v103; // [rsp+660h] [rbp-6A8h] BYREF
  __int64 v104; // [rsp+670h] [rbp-698h]
  __int128 v105; // [rsp+678h] [rbp-690h] BYREF
  __int64 v106; // [rsp+688h] [rbp-680h]
  _BYTE v107[64]; // [rsp+690h] [rbp-678h] BYREF
  _BYTE v108[64]; // [rsp+6D0h] [rbp-638h] BYREF
  _BYTE v109[64]; // [rsp+710h] [rbp-5F8h] BYREF
  __int64 v110; // [rsp+750h] [rbp-5B8h]
  __int64 v111; // [rsp+758h] [rbp-5B0h] BYREF
  __int128 v112; // [rsp+760h] [rbp-5A8h]
  __int64 v113; // [rsp+770h] [rbp-598h]
  __int128 v114; // [rsp+778h] [rbp-590h]
  __int64 v115; // [rsp+788h] [rbp-580h]
  __int128 v116; // [rsp+790h] [rbp-578h] BYREF
  __int64 v117; // [rsp+7A0h] [rbp-568h]
  _BYTE v118[64]; // [rsp+7A8h] [rbp-560h] BYREF
  _BYTE v119[64]; // [rsp+7E8h] [rbp-520h] BYREF
  __int128 v120; // [rsp+828h] [rbp-4E0h] BYREF
  __int64 v121; // [rsp+838h] [rbp-4D0h]
  _BYTE v122[24]; // [rsp+840h] [rbp-4C8h] BYREF
  _BYTE v123[24]; // [rsp+858h] [rbp-4B0h] BYREF
  __int64 v124; // [rsp+870h] [rbp-498h]
  __int64 v125; // [rsp+878h] [rbp-490h] BYREF
  int v126[2]; // [rsp+880h] [rbp-488h] BYREF
  __int64 v127; // [rsp+888h] [rbp-480h]
  __int64 v128; // [rsp+890h] [rbp-478h]
  _QWORD v129[3]; // [rsp+898h] [rbp-470h] BYREF
  _BYTE v130[48]; // [rsp+8B0h] [rbp-458h] BYREF
  __int128 v131; // [rsp+8E0h] [rbp-428h] BYREF
  __int128 v132; // [rsp+8F8h] [rbp-410h]
  __int128 v133; // [rsp+908h] [rbp-400h]
  __int64 v134; // [rsp+918h] [rbp-3F0h]
  __int128 v135; // [rsp+920h] [rbp-3E8h] BYREF
  __int128 v136; // [rsp+930h] [rbp-3D8h] BYREF
  __int128 v137; // [rsp+940h] [rbp-3C8h]
  __int128 v138; // [rsp+950h] [rbp-3B8h]
  _BYTE v139[24]; // [rsp+960h] [rbp-3A8h] BYREF
  _BYTE v140[64]; // [rsp+978h] [rbp-390h] BYREF
  _BYTE v141[64]; // [rsp+9B8h] [rbp-350h] BYREF
  _BYTE v142[64]; // [rsp+9F8h] [rbp-310h] BYREF
  int v143[4]; // [rsp+A38h] [rbp-2D0h] BYREF
  __int64 v144; // [rsp+A48h] [rbp-2C0h]
  __int128 v145; // [rsp+A50h] [rbp-2B8h] BYREF
  __int64 v146; // [rsp+A60h] [rbp-2A8h]
  __int128 v147; // [rsp+A68h] [rbp-2A0h] BYREF
  _OWORD v148[2]; // [rsp+A78h] [rbp-290h] BYREF
  char v149; // [rsp+A9Fh] [rbp-269h]
  __int128 v150; // [rsp+AA0h] [rbp-268h] BYREF
  __int64 v151; // [rsp+AB0h] [rbp-258h]
  int v152; // [rsp+ABCh] [rbp-24Ch] BYREF
  __int64 v153; // [rsp+AC0h] [rbp-248h] BYREF
  __int64 v154; // [rsp+AC8h] [rbp-240h]
  _BYTE v155[16]; // [rsp+AD0h] [rbp-238h] BYREF
  int v156[4]; // [rsp+AE0h] [rbp-228h] BYREF
  __int128 v157; // [rsp+AF0h] [rbp-218h] BYREF
  __int64 v158; // [rsp+B00h] [rbp-208h]
  int v159[6]; // [rsp+B08h] [rbp-200h] BYREF
  int v160[2]; // [rsp+B20h] [rbp-1E8h]
  __int64 v161; // [rsp+B28h] [rbp-1E0h]
  int v162[4]; // [rsp+B30h] [rbp-1D8h] BYREF
  __int128 v163; // [rsp+B40h] [rbp-1C8h]
  __int128 v164; // [rsp+B50h] [rbp-1B8h]
  __int128 v165; // [rsp+B60h] [rbp-1A8h]
  int v166[4]; // [rsp+B70h] [rbp-198h] BYREF
  __int64 v167; // [rsp+B80h] [rbp-188h]
  __int64 v168; // [rsp+B90h] [rbp-178h]
  __int64 v169; // [rsp+B98h] [rbp-170h]
  int v170[4]; // [rsp+BA0h] [rbp-168h] BYREF
  __int128 v171; // [rsp+BB0h] [rbp-158h]
  __int128 v172; // [rsp+BC0h] [rbp-148h]
  __int128 v173; // [rsp+BD0h] [rbp-138h]
  __int128 v174; // [rsp+BE0h] [rbp-128h] BYREF
  __int64 v175; // [rsp+BF0h] [rbp-118h]
  __int128 v176; // [rsp+C00h] [rbp-108h] BYREF
  __int64 v177; // [rsp+C10h] [rbp-F8h]
  __int128 v178; // [rsp+C20h] [rbp-E8h] BYREF
  __int64 v179; // [rsp+C30h] [rbp-D8h]
  _BYTE v180[24]; // [rsp+C38h] [rbp-D0h] BYREF
  __int128 v181; // [rsp+C50h] [rbp-B8h]
  __int64 v182; // [rsp+C60h] [rbp-A8h]
  int v183[6]; // [rsp+C70h] [rbp-98h] BYREF
  int v184[2]; // [rsp+C88h] [rbp-80h]
  int v185[2]; // [rsp+C90h] [rbp-78h]
  __int64 v186; // [rsp+C98h] [rbp-70h]
  int v187[4]; // [rsp+CA0h] [rbp-68h] BYREF
  __int128 v188; // [rsp+CB0h] [rbp-58h]
  __int128 v189; // [rsp+CC0h] [rbp-48h]
  __int128 v190; // [rsp+CD0h] [rbp-38h]
  char v191; // [rsp+CE1h] [rbp-27h]
  char v192; // [rsp+CE2h] [rbp-26h]
  char v193; // [rsp+CE3h] [rbp-25h]
  char v194; // [rsp+CE4h] [rbp-24h]
  char v195; // [rsp+CE5h] [rbp-23h]
  char v196; // [rsp+CE6h] [rbp-22h]
  char v197; // [rsp+CE7h] [rbp-21h]
  __int64 *v198; // [rsp+CF8h] [rbp-10h]
  __int64 (__fastcall *v199)(); // [rsp+D00h] [rbp-8h]

  v196 = 0;
  v191 = 0;
  v192 = 0;
  v193 = 0;
  v195 = 0;
  v194 = 0;
  v197 = 1;
  uu_shuf::uu_app(dest);
  v197 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v93, (int)dest, a1, a2, v2, v3, v52, v54, v56, v58);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v86, v93);
  if ( (_QWORD)v86 != 0x8000000000000000LL )
  {
    *(_QWORD *)v101 = v92;
    *(_OWORD *)v100 = v91;
    *(_OWORD *)v99 = v90;
    *(_OWORD *)v98 = v89;
    *(_OWORD *)v97 = v88;
    *(_OWORD *)v96 = v87;
    *(_OWORD *)v95 = v86;
    *(_QWORD *)v85 = v92;
    *(_OWORD *)v84 = v91;
    *(_OWORD *)v83 = v90;
    *(_OWORD *)v82 = v89;
    *(_OWORD *)v81 = v88;
    *(_OWORD *)v80 = v87;
    *(_OWORD *)v79 = v86;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v79,
             anon_952b21e97a889c6613436287509e44a2_62_llvm_11215979972707939310,
             *(&uu_shuf::options::ECHO + 1),
             &off_11F570);
    if ( (flag & 1) == 0 )
    {
      one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
              v79,
              anon_952b21e97a889c6613436287509e44a2_63_llvm_11215979972707939310,
              *(&uu_shuf::options::INPUT_RANGE + 1),
              &off_11F588);
      v110 = one;
      if ( one != 0 )
      {
        v4 = <alloc::string::String as core::ops::deref::Deref>::deref(v110);
        uu_shuf::parse_range(&v111, v4, v5);
        if ( !v111 )
        {
          v114 = v112;
          v115 = v113;
          v194 = 1;
          v195 = 1;
          v103 = v112;
          v104 = v113;
          *(_QWORD *)v102 = 2LL;
          goto LABEL_13;
        }
        v117 = v113;
        v116 = v112;
        v78 = uucore::mods::error::USimpleError::new(1LL, &v116);
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
          v119,
          v79,
          anon_952b21e97a889c6613436287509e44a2_69_llvm_11215979972707939310,
          *(&uu_shuf::options::FILE_OR_ARGS + 1),
          &off_11F5A0);
        core::option::Option<T>::unwrap_or_default(v118, v119);
        v75 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v118);
        core::option::Option<&T>::cloned(v122, v75);
        v196 = 1;
        <T as core::convert::Into<U>>::into(v123, asc_18C15, 1LL, &off_11F5B8);
        v196 = 0;
        core::option::Option<T>::unwrap_or(&v120, v122, v123);
        v196 = 0;
        v74 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v118);
        v124 = v74;
        if ( v74 == 0 )
        {
          v133 = v120;
          v134 = v121;
          v194 = 1;
          v195 = 1;
          v103 = v120;
          v104 = v121;
          *(_QWORD *)v102 = 0LL;
          goto LABEL_13;
        }
        v125 = v124;
        v198 = &v125;
        v199 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v132 = &v125;
        *((_QWORD *)&v132 + 1) = <&T as core::fmt::Display>::fmt;
        v131 = v132;
        core::fmt::Arguments::new_v1(v130, &off_11F5D0, &v131);
        alloc::fmt::format(v129, v130);
        *(_QWORD *)v126 = v129[0];
        v127 = v129[1];
        v128 = v129[2];
        v78 = uucore::mods::error::UUsageError::new(
                1,
                (int)v126,
                v6,
                v7,
                v8,
                v9,
                (int)v53,
                v55,
                v57,
                v59,
                v60,
                v61,
                v62,
                v63,
                v64,
                v65);
        core::ptr::drop_in_place<alloc::string::String>(&v120);
      }
LABEL_14:
      v194 = 0;
      v195 = 0;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v79);
      return v78;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
      v109,
      v79,
      anon_952b21e97a889c6613436287509e44a2_69_llvm_11215979972707939310,
      *(&uu_shuf::options::FILE_OR_ARGS + 1),
      &off_11F5F0);
    core::option::Option<T>::unwrap_or_default(v108, v109);
    core::iter::traits::iterator::Iterator::map(v107, v108);
    core::iter::traits::iterator::Iterator::collect(&v105, v107);
    v194 = 1;
    v195 = 1;
    v103 = v105;
    v104 = v106;
    *(_QWORD *)v102 = 1LL;
LABEL_13:
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
      v142,
      v79,
      anon_952b21e97a889c6613436287509e44a2_64_llvm_11215979972707939310,
      *(&uu_shuf::options::HEAD_COUNT + 1),
      &off_11F608);
    core::option::Option<T>::unwrap_or_default(v141, v142);
    core::iter::traits::iterator::Iterator::cloned(v140, v141);
    core::iter::traits::iterator::Iterator::collect(v139, v140);
    uu_shuf::parse_head_count(v143, v139);
    if ( *(_QWORD *)v143 != 0x8000000000000000LL )
    {
      v146 = v144;
      v145 = *(_OWORD *)v143;
      v78 = uucore::mods::error::USimpleError::new(1LL, &v145);
LABEL_63:
      v191 = 0;
      v192 = 0;
      v193 = 0;
      if ( *(_QWORD *)v102 )
      {
        if ( *(_QWORD *)v102 == 1LL && (v194 & 1) != 0 )
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v103);
      }
      else if ( (v195 & 1) != 0 )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v103);
      }
      goto LABEL_14;
    }
    *(_QWORD *)v72 = *(_QWORD *)&v143[2];
    *(_QWORD *)v73 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                       v79,
                       anon_952b21e97a889c6613436287509e44a2_65_llvm_11215979972707939310,
                       *(&uu_shuf::options::OUTPUT + 1),
                       &off_11F620);
    core::option::Option<T>::map(&v147, *(_QWORD *)v73);
    *(_QWORD *)v71 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                       v79,
                       anon_952b21e97a889c6613436287509e44a2_66_llvm_11215979972707939310,
                       *(&uu_shuf::options::RANDOM_SOURCE + 1),
                       &off_11F638);
    core::option::Option<T>::map((char *)v148 + 8, *(_QWORD *)v71);
    v70 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v79,
            anon_952b21e97a889c6613436287509e44a2_67_llvm_11215979972707939310,
            *(&uu_shuf::options::REPEAT + 1),
            &off_11F650);
    v69 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v79,
            anon_952b21e97a889c6613436287509e44a2_68_llvm_11215979972707939310,
            *(&uu_shuf::options::ZERO_TERMINATED + 1),
            &off_11F668);
    if ( (v69 & 1) != 0 )
      v149 = 0;
    else
      v149 = 10;
    v191 = 1;
    v192 = 1;
    v193 = 1;
    *(_QWORD *)&v138 = *(_QWORD *)v72;
    v135 = v147;
    v136 = v148[0];
    v137 = v148[1];
    BYTE8(v138) = v70 & 1;
    BYTE9(v138) = v149;
    if ( !*(_QWORD *)v72 )
    {
      if ( (_QWORD)v135 == 0x8000000000000000LL )
        goto LABEL_31;
      v193 = 0;
      v151 = v136;
      v150 = v135;
      v10 = <alloc::string::String as core::ops::index::Index<I>>::index(&v150, &off_11F680);
      std::fs::File::create(
        (int)v156,
        v10,
        v11,
        v12,
        v13,
        v14,
        (int)v53,
        v55,
        v57,
        v59,
        v60,
        v61,
        v62,
        v63,
        (int)v64,
        v65,
        v66,
        v67);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v155,
        v156,
        &v150);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v153, v155);
      if ( !v153 )
      {
        v152 = v154;
        core::ptr::drop_in_place<std::fs::File>(&v152);
        core::ptr::drop_in_place<alloc::string::String>(&v150);
LABEL_31:
        v78 = 0LL;
        goto LABEL_35;
      }
      v78 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v153,
              v154,
              &off_11F698);
      core::ptr::drop_in_place<alloc::string::String>(&v150);
LABEL_35:
      if ( (v192 & 1) != 0 && (_QWORD)v135 != 0x8000000000000000LL && (v193 & 1) != 0 )
        core::ptr::drop_in_place<alloc::string::String>(&v135);
      v192 = 0;
      if ( (v191 & 1) != 0 )
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>((char *)&v136 + 8);
      v191 = 0;
      goto LABEL_63;
    }
    if ( *(_QWORD *)v102 )
    {
      if ( *(_QWORD *)v102 == 1LL )
      {
        v194 = 0;
        v158 = v104;
        v157 = v103;
        v16 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v157);
        v33 = core::slice::<impl [T]>::iter(v16, v32);
        v35 = core::iter::traits::iterator::Iterator::map(v33, v34);
        core::iter::traits::iterator::Iterator::collect(v159, v35, v36);
        uu_shuf::find_seps(v159, BYTE9(v138));
        v191 = 0;
        v192 = 0;
        v193 = 0;
        v165 = v138;
        v164 = v137;
        v163 = v136;
        *(_OWORD *)v162 = v135;
        v37 = uu_shuf::shuf_exec(v159, v162);
        v39 = v38;
        v40 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v37, v38);
        *(_QWORD *)v160 = v40;
        v161 = v43;
        if ( v40 )
        {
          v44 = v161;
          v78 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  *(_QWORD *)v160,
                  v161,
                  &off_11F710);
          core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>((int)v159, v44, v45, v78, v46, v47, v53, v55);
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v157);
          goto LABEL_35;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>((int)v159, v39, 0, 0, v41, v42, v53, v55);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v157);
      }
      else
      {
        v167 = v104;
        *(_OWORD *)v166 = v103;
        v191 = 0;
        v192 = 0;
        v193 = 0;
        v173 = v138;
        v172 = v137;
        v171 = v136;
        *(_OWORD *)v170 = v135;
        v17 = uu_shuf::shuf_exec(v166, v170);
        v49 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v17, v48);
        v168 = v49;
        v169 = v50;
        if ( v49 )
        {
          v78 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v168,
                  v169,
                  &off_11F728);
          goto LABEL_35;
        }
      }
LABEL_48:
      v78 = 0LL;
      v191 = 0;
      v192 = 0;
      v193 = 0;
      v194 = 0;
      v195 = 0;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v79);
      return v78;
    }
    v195 = 0;
    v175 = v104;
    v174 = v103;
    v15 = <alloc::string::String as core::ops::deref::Deref>::deref(&v174);
    uu_shuf::read_input_file(v180, v15, v18);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v178, v180);
    if ( (_QWORD)v178 == 0x8000000000000000LL )
    {
      v78 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *((_QWORD *)&v178 + 1),
              v179,
              &off_11F6F8);
    }
    else
    {
      v182 = v179;
      v181 = v178;
      v177 = v179;
      v176 = v178;
      *(_QWORD *)v184 = alloc::alloc::exchange_malloc(16LL, 8LL);
      v19 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(&v176, &off_11F6B0);
      *(_QWORD *)v68 = *(_QWORD *)v184;
      if ( (v184[0] & 7) != 0 )
        core::panicking::panic_misaligned_pointer_dereference(8LL, *(_QWORD *)v184, &off_11F6C8);
      **(_QWORD **)v184 = v19;
      *(_QWORD *)(*(_QWORD *)v68 + 8LL) = v20;
      alloc::slice::<impl [T]>::into_vec(v183, *(_QWORD *)v184, 1LL);
      uu_shuf::find_seps(v183, BYTE9(v138));
      v191 = 0;
      v192 = 0;
      v193 = 0;
      v190 = v138;
      v189 = v137;
      v188 = v136;
      *(_OWORD *)v187 = v135;
      v21 = uu_shuf::shuf_exec(v183, v187);
      v23 = v22;
      v24 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v21, v22);
      *(_QWORD *)v185 = v24;
      v186 = v27;
      if ( !v24 )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>((int)v183, v23, 0, 0, v25, v26, v53, v55);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v176);
        core::ptr::drop_in_place<alloc::string::String>(&v174);
        goto LABEL_48;
      }
      v28 = v186;
      v78 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *(_QWORD *)v185,
              v186,
              &off_11F6E0);
      core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>((int)v183, v28, v29, v78, v30, v31, v53, v55);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v176);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v174);
    goto LABEL_35;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v86 + 1),
           &off_11F740);
}
