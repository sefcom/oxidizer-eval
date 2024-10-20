        char a11)
{
  __int64 v13; // rbx
  char v14; // al
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 result; // rax
  char v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // r15d
  __mode_t v26; // eax
  __int16 v27; // r14
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // r14
  _QWORD *v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rax
  char v38; // dl
  char v39; // si
  void (__fastcall *v40)(__int128 *); // r13
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r15
  char v44; // bp
  __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // r15
  void (__fastcall *v48)(__int128 *); // rbx
  __int64 v49; // r12
  __int64 v50; // r13
  __int64 v51; // r15
  __int64 *v52; // r14
  char *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // r15
  char is_dir; // al
  __int64 v59; // rax
  __int64 v60; // rax
  char is_file; // bp
  __int128 v62; // kr30_16
  char v63; // r14
  __int64 v64; // r14
  void *v65; // r15
  bool v66; // al
  __m256i *v67; // rdi
  __int64 v68; // rax
  int v69; // r14d
  __mode_t v70; // eax
  __int16 v71; // bp
  __int64 v72; // r14
  __int64 v73; // r15
  __int64 v74; // rax
  char v75; // al
  __int64 v76; // rax
  unsigned __int8 v77; // bp
  _OWORD *v78; // rax
  __int128 v79; // xmm0
  __int64 v80; // rax
  _QWORD *v81; // r14
  __int64 (__fastcall *v82)(_QWORD, _QWORD); // r15
  __int64 (__fastcall **v83)(); // rax
  __int64 (__fastcall *v84)(); // rsi
  __int64 *v85; // rax
  __int64 v86; // rcx
  __int128 v87; // xmm0
  __int64 v88; // rax
  __int128 v89; // xmm1
  __int128 v90; // xmm2
  __int128 v91; // xmm1
  __int128 v92; // xmm2
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rax
  void *v97; // r14
  size_t v98; // rbp
  __int128 v99; // xmm1
  __int128 v100; // xmm2
  __int128 v101; // xmm1
  __int128 v102; // xmm2
  char v105; // [rsp+17h] [rbp-981h]
  __int64 v106; // [rsp+18h] [rbp-980h] BYREF
  __int128 v107; // [rsp+20h] [rbp-978h]
  _BYTE v108[24]; // [rsp+30h] [rbp-968h] BYREF
  __int128 v109; // [rsp+50h] [rbp-948h] BYREF
  __int64 v110; // [rsp+60h] [rbp-938h]
  _OWORD *v111; // [rsp+70h] [rbp-928h] BYREF
  __int64 (__fastcall **v112)(); // [rsp+78h] [rbp-920h]
  __int128 v113; // [rsp+80h] [rbp-918h] BYREF
  _QWORD *v114; // [rsp+90h] [rbp-908h]
  __int64 (__fastcall *v115)(); // [rsp+98h] [rbp-900h]
  __int128 v116; // [rsp+A0h] [rbp-8F8h] BYREF
  _QWORD *v117; // [rsp+B0h] [rbp-8E8h] BYREF
  char v118; // [rsp+B8h] [rbp-8E0h]
  __m256i dest; // [rsp+C0h] [rbp-8D8h] BYREF
  __m256i v120; // [rsp+E0h] [rbp-8B8h]
  _BYTE *v121; // [rsp+170h] [rbp-828h]
  size_t v122; // [rsp+178h] [rbp-820h]
  char *v123; // [rsp+180h] [rbp-818h]
  __m256i v124; // [rsp+188h] [rbp-810h] BYREF
  __int128 v125; // [rsp+1A8h] [rbp-7F0h]
  __int128 v126; // [rsp+1B8h] [rbp-7E0h]
  __int64 v127; // [rsp+1C8h] [rbp-7D0h]
  __int64 v128; // [rsp+1D0h] [rbp-7C8h] BYREF
  __int128 v129; // [rsp+1D8h] [rbp-7C0h] BYREF
  __int64 v130; // [rsp+1E8h] [rbp-7B0h]
  __int128 v131; // [rsp+1F0h] [rbp-7A8h] BYREF
  __int64 v132; // [rsp+200h] [rbp-798h]
  __int128 v133; // [rsp+208h] [rbp-790h] BYREF
  __int64 v134; // [rsp+218h] [rbp-780h]
  __int128 v135; // [rsp+220h] [rbp-778h] BYREF
  __int64 v136; // [rsp+230h] [rbp-768h]
  _BYTE v137[64]; // [rsp+240h] [rbp-758h] BYREF
  _QWORD *v138; // [rsp+288h] [rbp-710h]
  __int64 v139; // [rsp+290h] [rbp-708h]
  _QWORD *v140; // [rsp+298h] [rbp-700h] BYREF
  __int64 (__fastcall *v141)(_QWORD, _QWORD); // [rsp+2A0h] [rbp-6F8h]
  __int64 v142; // [rsp+2A8h] [rbp-6F0h] BYREF
  __int64 v143; // [rsp+2B0h] [rbp-6E8h]
  __int64 v144; // [rsp+2B8h] [rbp-6E0h]
  __int64 v145; // [rsp+2C0h] [rbp-6D8h] BYREF
  __int128 v146; // [rsp+2C8h] [rbp-6D0h]
  char *v147; // [rsp+2D8h] [rbp-6C0h]
  size_t v148; // [rsp+2E0h] [rbp-6B8h]
  size_t v149; // [rsp+2E8h] [rbp-6B0h]
  size_t v150; // [rsp+2F0h] [rbp-6A8h]
  char v151[8]; // [rsp+2F8h] [rbp-6A0h] BYREF
  void *v152; // [rsp+300h] [rbp-698h]
  signed __int64 v153; // [rsp+308h] [rbp-690h]
  __int128 v154; // [rsp+310h] [rbp-688h] BYREF
  _QWORD *v155; // [rsp+328h] [rbp-670h] BYREF
  _QWORD *v156; // [rsp+330h] [rbp-668h]
  __int64 v157; // [rsp+338h] [rbp-660h]
  _QWORD *v158; // [rsp+340h] [rbp-658h]
  __int128 v159; // [rsp+348h] [rbp-650h] BYREF
  __int64 v160; // [rsp+358h] [rbp-640h]
  __int64 *v161; // [rsp+360h] [rbp-638h] BYREF
  __int64 *v162; // [rsp+368h] [rbp-630h]
  __int64 v163; // [rsp+370h] [rbp-628h]
  __int64 *v164; // [rsp+378h] [rbp-620h]
  _BYTE v165[64]; // [rsp+380h] [rbp-618h] BYREF
  __int128 v166; // [rsp+3C0h] [rbp-5D8h] BYREF
  __int64 v167; // [rsp+3D0h] [rbp-5C8h]
  __int128 v168; // [rsp+3E0h] [rbp-5B8h] BYREF
  __int128 v169; // [rsp+3F0h] [rbp-5A8h]
  __int128 v170; // [rsp+400h] [rbp-598h]
  char v171[8]; // [rsp+410h] [rbp-588h] BYREF
  __int64 v172; // [rsp+418h] [rbp-580h]
  __int64 v173; // [rsp+420h] [rbp-578h]
  char v174[8]; // [rsp+428h] [rbp-570h] BYREF
  __int64 v175; // [rsp+430h] [rbp-568h]
  __int64 v176; // [rsp+438h] [rbp-560h]
  __int128 v177; // [rsp+440h] [rbp-558h]
  __int128 v178; // [rsp+450h] [rbp-548h]
  __int64 v179; // [rsp+460h] [rbp-538h]
  __m256i v180; // [rsp+468h] [rbp-530h]
  __int64 v181; // [rsp+488h] [rbp-510h]
  _QWORD v182[2]; // [rsp+498h] [rbp-500h] BYREF
  _QWORD v183[2]; // [rsp+4A8h] [rbp-4F0h] BYREF
  _QWORD v184[2]; // [rsp+4B8h] [rbp-4E0h] BYREF
  _QWORD v185[2]; // [rsp+4C8h] [rbp-4D0h] BYREF
  _QWORD v186[2]; // [rsp+4D8h] [rbp-4C0h] BYREF
  _QWORD v187[2]; // [rsp+4E8h] [rbp-4B0h] BYREF
  __int128 v188; // [rsp+4F8h] [rbp-4A0h] BYREF
  __int64 v189; // [rsp+508h] [rbp-490h]
  __int64 v190; // [rsp+510h] [rbp-488h] BYREF
  __int64 *v191; // [rsp+518h] [rbp-480h]
  __int64 v192; // [rsp+520h] [rbp-478h]
  __int64 v193; // [rsp+528h] [rbp-470h] BYREF
  _QWORD *v194; // [rsp+530h] [rbp-468h]
  __int64 v195; // [rsp+538h] [rbp-460h]
  __int128 v196; // [rsp+540h] [rbp-458h]
  __int64 v197; // [rsp+550h] [rbp-448h]
  __m256i v198; // [rsp+558h] [rbp-440h]
  __int64 v199; // [rsp+578h] [rbp-420h]
  _QWORD v200[3]; // [rsp+580h] [rbp-418h] BYREF
  char v201; // [rsp+598h] [rbp-400h]
  _QWORD v202[4]; // [rsp+5A0h] [rbp-3F8h] BYREF
  _QWORD v203[3]; // [rsp+5C0h] [rbp-3D8h] BYREF
  char v204; // [rsp+5D8h] [rbp-3C0h]
  _QWORD v205[3]; // [rsp+5E0h] [rbp-3B8h] BYREF
  char v206; // [rsp+5F8h] [rbp-3A0h]
  _QWORD v207[4]; // [rsp+600h] [rbp-398h] BYREF
  __int128 v208; // [rsp+620h] [rbp-378h]
  __int128 v209; // [rsp+630h] [rbp-368h]
  __m256i v210; // [rsp+640h] [rbp-358h]
  _QWORD v211[4]; // [rsp+660h] [rbp-338h] BYREF
  __int128 v212; // [rsp+680h] [rbp-318h]
  __int64 v213; // [rsp+690h] [rbp-308h]
  __int128 v214; // [rsp+698h] [rbp-300h]
  __int64 v215; // [rsp+6A8h] [rbp-2F0h]
  __int64 v216; // [rsp+6B0h] [rbp-2E8h]
  __int128 v217; // [rsp+6B8h] [rbp-2E0h]
  __int64 v218; // [rsp+6C8h] [rbp-2D0h]
  __m256i v219; // [rsp+6D0h] [rbp-2C8h]
  __int64 v220; // [rsp+6F0h] [rbp-2A8h]
  char v221; // [rsp+6F8h] [rbp-2A0h]
  __int16 v222; // [rsp+6F9h] [rbp-29Fh]
  char v223; // [rsp+6FBh] [rbp-29Dh]
  __int32 v224; // [rsp+6FCh] [rbp-29Ch]
  __int128 v225; // [rsp+700h] [rbp-298h]
  __int128 v226; // [rsp+710h] [rbp-288h] BYREF
  __int64 v227; // [rsp+720h] [rbp-278h]
  _QWORD v228[6]; // [rsp+728h] [rbp-270h] BYREF
  __int128 v229; // [rsp+758h] [rbp-240h] BYREF
  __int128 v230; // [rsp+768h] [rbp-230h] BYREF
  __int64 v231; // [rsp+778h] [rbp-220h]
  _QWORD v232[6]; // [rsp+780h] [rbp-218h] BYREF
  _QWORD v233[6]; // [rsp+7B0h] [rbp-1E8h] BYREF
  __int64 v234; // [rsp+7E0h] [rbp-1B8h] BYREF
  __int128 v235; // [rsp+7E8h] [rbp-1B0h]
  __int128 v236; // [rsp+7F8h] [rbp-1A0h]
  __int128 v237; // [rsp+808h] [rbp-190h]
  __int64 v238; // [rsp+818h] [rbp-180h]
  __int64 v239; // [rsp+820h] [rbp-178h] BYREF
  __int128 v240; // [rsp+828h] [rbp-170h]
  __int128 v241; // [rsp+838h] [rbp-160h]
  __int128 v242; // [rsp+848h] [rbp-150h]
  __int64 v243; // [rsp+858h] [rbp-140h]
  __int64 v244; // [rsp+860h] [rbp-138h] BYREF
  __int128 v245; // [rsp+868h] [rbp-130h]
  __int128 v246; // [rsp+878h] [rbp-120h]
  __int128 v247; // [rsp+888h] [rbp-110h]
  __int64 v248; // [rsp+898h] [rbp-100h]
  __int64 v249; // [rsp+8A0h] [rbp-F8h] BYREF
  __int128 v250; // [rsp+8A8h] [rbp-F0h]
  __int128 v251; // [rsp+8B8h] [rbp-E0h]
  __int128 v252; // [rsp+8C8h] [rbp-D0h]
  __int64 v253; // [rsp+8D8h] [rbp-C0h]
  __int128 v254; // [rsp+8E0h] [rbp-B8h]
  __int128 v255; // [rsp+8F0h] [rbp-A8h]
  __m256i v256; // [rsp+900h] [rbp-98h]
  __int64 v257; // [rsp+928h] [rbp-70h] BYREF
  __int128 v258; // [rsp+930h] [rbp-68h]
  __int128 v259; // [rsp+940h] [rbp-58h]
  __int128 v260; // [rsp+950h] [rbp-48h]
  __int64 v261; // [rsp+960h] [rbp-38h]

  v13 = a1;
  v14 = a7[65];
  if ( (v14 & 1) != 0 || !a11 )
  {
    if ( (v14 & 1) != 0 )
      goto LABEL_8;
  }
  else if ( (a7[64] & 1) != 0 )
  {
    goto LABEL_8;
  }
  if ( (unsigned __int8)std::path::Path::is_symlink(a3, a4) )
  {
    uu_cp::copy_file(a1, a2, a3, a4, a5, a6, (unsigned __int64)a7, a8, a9, a10, a11);
    return v13;
  }
LABEL_8:
  if ( (a7[70] & 1) == 0 )
  {
    v200[0] = 1LL;
    v200[1] = a3;
    v200[2] = a4;
    v201 = 1;
    v182[0] = v200;
    v182[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    dest.m256i_i64[0] = (__int64)&off_182C98;
    dest.m256i_i64[1] = 1LL;
    dest.m256i_i64[2] = (__int64)v182;
    dest.m256i_i64[3] = 1LL;
    v120.m256i_i64[0] = 0LL;
    alloc::fmt::format::format_inner(&v226, &dest);
    *(_QWORD *)a1 = 4LL;
    *(_OWORD *)(a1 + 8) = v226;
    *(_QWORD *)(a1 + 24) = v227;
    return v13;
  }
  v138 = a2;
  uucore::features::fs::canonicalize(v137, a5, a6, 0LL, 2LL);
  v15 = *(_QWORD *)&v137[8];
  if ( *(_QWORD *)v137 == 0x8000000000000000LL )
  {
    v16 = *(_QWORD *)&v137[8];
LABEL_14:
    *(_QWORD *)a1 = 2LL;
    *(_QWORD *)(a1 + 8) = v16;
    return v13;
  }
  v17 = *(_QWORD *)&v137[16];
  v113 = *(_OWORD *)v137;
  v114 = *(_QWORD **)&v137[16];
  uucore::features::fs::canonicalize(&v124, a3, a4, 0LL, 2LL);
  v16 = v124.m256i_i64[1];
  if ( v124.m256i_i64[0] == 0x8000000000000000LL )
  {
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v113);
    goto LABEL_14;
  }
  if ( !v15
    || v17 < 0
    || (*(_OWORD *)dest.m256i_i8 = *(_OWORD *)v124.m256i_i8, dest.m256i_i64[2] = v124.m256i_i64[2], !v124.m256i_i64[1])
    || v124.m256i_i64[2] < 0 )
  {
LABEL_252:
    core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571, 162LL);
  }
  v19 = std::path::Path::_starts_with(v15, v17, v124.m256i_i64[1]);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&dest);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v113);
  if ( v19 )
  {
    v203[0] = 1LL;
    v203[1] = a3;
    v203[2] = a4;
    v204 = 1;
    v20 = std::path::Path::file_name(a3, a4);
    if ( !v20 )
      core::option::unwrap_failed(&off_182D40, a4, v21, v22);
    std::path::Path::_join(v171, a5, a6, v20, v21);
    if ( v172 && v173 >= 0 )
    {
      v205[0] = 1LL;
      v205[1] = v172;
      v205[2] = v173;
      v206 = 1;
      v202[0] = v203;
      v202[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v202[2] = v205;
      v202[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      dest.m256i_i64[0] = (__int64)&off_182D20;
      dest.m256i_i64[1] = 2LL;
      dest.m256i_i64[2] = (__int64)v202;
      dest.m256i_i64[3] = 2LL;
      v120.m256i_i64[0] = 0LL;
      alloc::fmt::format::format_inner(&v188, &dest);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v171);
      *(_QWORD *)a1 = 4LL;
      *(_OWORD *)(a1 + 8) = v188;
      *(_QWORD *)(a1 + 24) = v189;
      return v13;
    }
    goto LABEL_252;
  }
  if ( (a7[68] & 1) != 0 && (v23 = std::path::Path::parent(a3, a4)) != 0 )
  {
    std::path::Path::_join(&v159, a5, a6, v23, v24);
    dest.m256i_i8[4] = 1;
    v25 = 63;
    if ( (a7[48] & 1) == 0 )
    {
      v25 = 18;
      if ( (a7[50] & 1) == 0 )
        v25 = 0;
    }
    v26 = umask(0);
    v27 = v26;
    umask(v26);
    dest.m256i_i32[0] = (v25 | v27 & 0x1FF) ^ 0x1FF;
    v28 = *((_QWORD *)&v159 + 1);
    v29 = v160;
    core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v159 + 1), 1LL, 1LL, v160);
    v30 = std::fs::DirBuilder::_create(&dest, v28, v29);
    if ( v30 )
    {
      *(_QWORD *)a1 = 2LL;
      *(_QWORD *)(a1 + 8) = v30;
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v159);
      return v13;
    }
    if ( (a7[72] & 1) != 0 )
    {
      std::path::Path::_join(v174, a5, a6, a3, a4);
      if ( !v175 || v176 < 0 )
        goto LABEL_252;
      uu_cp::aligned_ancestors((__int64)&v190);
      v161 = v191;
      v162 = v191;
      v163 = v190;
      v164 = &v191[4 * v192];
      while ( 1 )
      {
        v85 = v162;
        if ( v162 == v164 )
          break;
        v162 += 4;
        v86 = *v85;
        if ( !*v85 )
          break;
        v87 = *((_OWORD *)v85 + 1);
        v88 = v85[1];
        v183[0] = v86;
        v183[1] = v88;
        v229 = v87;
        v207[0] = v183;
        v207[1] = <std::path::Display as core::fmt::Display>::fmt;
        v207[2] = &v229;
        v207[3] = <std::path::Display as core::fmt::Display>::fmt;
        v228[0] = &unk_182CA8;
        v228[1] = 3LL;
        v228[4] = 0LL;
        v228[2] = v207;
        v228[3] = 2LL;
        std::io::stdio::_print(v228);
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v161);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v174);
    }
    v136 = v160;
    v135 = v159;
  }
  else
  {
    std::path::Path::to_path_buf(&v135, a5);
  }
  v123 = (char *)*((_QWORD *)&v135 + 1);
  if ( !*((_QWORD *)&v135 + 1) )
    goto LABEL_252;
  v122 = v136;
  if ( v136 < 0 )
    goto LABEL_252;
  v105 = a7[56];
  std::env::current_dir(v137);
  v31 = *(_QWORD *)&v137[8];
  v32 = *(_QWORD *)v137;
  if ( *(_QWORD *)v137 == 0x8000000000000000LL )
  {
LABEL_36:
    v128 = v31;
    v184[0] = &v128;
    v184[1] = <std::io::error::Error as core::fmt::Display>::fmt;
    dest.m256i_i64[0] = (__int64)&off_182D10;
    dest.m256i_i64[1] = 1LL;
    dest.m256i_i64[2] = (__int64)v184;
    dest.m256i_i64[3] = 1LL;
    v120.m256i_i64[0] = 0LL;
    alloc::fmt::format::format_inner(&v230, &dest);
    *(_QWORD *)a1 = 4LL;
    *(_QWORD *)(a1 + 24) = v231;
    *(_OWORD *)(a1 + 8) = v230;
    std::io::error::repr_bitpacked::decode_repr(&dest, v128);
    if ( dest.m256i_i8[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest.m256i_u64[1]);
    goto LABEL_212;
  }
  v33 = *(_QWORD **)&v137[16];
  v113 = *(_OWORD *)v137;
  v114 = *(_QWORD **)&v137[16];
  if ( !*(_QWORD *)&v137[8] || *(__int64 *)&v137[16] < 0 )
    goto LABEL_252;
  std::path::Path::_join(&v124, *(_QWORD *)&v137[8], *(_QWORD *)&v137[16], a3, a4);
  std::sys::pal::unix::fs::stat(&dest);
  if ( dest.m256i_i64[0] == 2 )
  {
    std::io::error::repr_bitpacked::decode_repr(&dest, dest.m256i_i64[1]);
    if ( dest.m256i_i8[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest.m256i_u64[1]);
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_str(&dest, a3);
    if ( dest.m256i_i64[0] || !dest.m256i_i64[1] )
      core::option::unwrap_failed(&off_182BF0, a3, v34, v35);
    if ( dest.m256i_i64[2] < 2uLL
      || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             asc_2F999,
                             2LL,
                             dest.m256i_i64[1] + dest.m256i_i64[2] - 2,
                             2LL) )
    {
      if ( !v124.m256i_i64[1] || v124.m256i_i64[2] < 0 )
        goto LABEL_252;
      v37 = std::path::Path::parent(v124.m256i_i64[1], v124.m256i_i64[2]);
      v36 = 0x8000000000000000LL;
      if ( v37 )
      {
        std::path::Path::to_path_buf(&dest, v37);
        v36 = dest.m256i_i64[0];
        v116 = *(_OWORD *)&dest.m256i_u64[1];
        v31 = *((_QWORD *)&v113 + 1);
        v32 = v113;
        v33 = v114;
      }
      v177 = v116;
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v124);
      if ( v32 == 0x8000000000000000LL )
        goto LABEL_36;
      goto LABEL_53;
    }
  }
  v36 = v124.m256i_i64[0];
  v177 = *(_OWORD *)&v124.m256i_u64[1];
LABEL_53:
  v146 = v177;
  v142 = v32;
  v143 = v31;
  v144 = (__int64)v33;
  v145 = v36;
  v147 = v123;
  v148 = v122;
  v149 = a3;
  v150 = a4;
  *(_OWORD *)&dest.m256i_u64[2] = 0xAuLL;
  v120.m256i_i64[0] = -1LL;
  dest.m256i_i64[0] = 0LL;
  v120.m256i_i32[2] = 256;
  std::path::Path::to_path_buf(&v124, a3);
  v181 = v120.m256i_i64[0];
  v180 = dest;
  v179 = v124.m256i_i64[2];
  v178 = *(_OWORD *)v124.m256i_i8;
  v38 = a7[67] & 1;
  v198 = dest;
  v199 = v120.m256i_i64[0];
  v197 = v124.m256i_i64[2];
  v196 = *(_OWORD *)v124.m256i_i8;
  v39 = a7[65] & 1;
  v217 = *(_OWORD *)v124.m256i_i8;
  v218 = v124.m256i_i64[2];
  v220 = v120.m256i_i64[0];
  v219 = dest;
  v212 = 0LL;
  v214 = 0LL;
  v225 = 0LL;
  v211[0] = 0LL;
  v211[2] = 0LL;
  v211[3] = 8LL;
  v213 = 8LL;
  v215 = 8LL;
  v216 = 0LL;
  v221 = v39;
  v222 = *(__int16 *)((char *)&v120.m256i_i16[4] + 1);
  v223 = v38;
  v224 = v120.m256i_i32[3];
  v121 = a7 + 48;
  v40 = (void (__fastcall *)(__int128 *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop;
  v127 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v257, v211);
      if ( v257 == 2 )
        break;
      if ( v257 == 3 )
      {
        core::ptr::drop_in_place<walkdir::IntoIter>(v211);
        if ( (a7[68] & 1) != 0 )
        {
          v93 = std::path::Path::file_name(a3, a4);
          if ( !v93 )
            core::option::unwrap_failed(&off_182CD8, a4, v94, v95);
          std::path::Path::_join(v151, v123, v122, v93, v94);
          if ( !v152 || v153 < 0 )
            goto LABEL_252;
          uu_cp::copy_attributes((__int64)&v239, a3, a4, v152, v153, v121);
          if ( v239 != 13 )
          {
            *(_QWORD *)v13 = v239;
            v99 = v241;
            v100 = v242;
            *(_OWORD *)(v13 + 8) = v240;
            *(_OWORD *)(v13 + 24) = v99;
            *(_OWORD *)(v13 + 40) = v100;
            *(_QWORD *)(v13 + 56) = v243;
LABEL_214:
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v151);
            goto LABEL_210;
          }
          if ( !v152 || v153 < 0 )
            goto LABEL_252;
          uu_cp::aligned_ancestors((__int64)&v193);
          v96 = v194;
          v155 = v194;
          v156 = v194;
          v157 = v193;
          v158 = &v194[4 * v195];
          if ( v195 )
          {
            do
            {
              v156 = v96 + 4;
              if ( !*v96 )
                break;
              v97 = (void *)v96[2];
              v98 = v96[3];
              uucore::features::fs::canonicalize(&v131, *v96, v96[1], 0LL, 1LL);
              if ( (_QWORD)v131 == 0x8000000000000000LL )
                goto LABEL_204;
              v166 = v131;
              v167 = v132;
              if ( !*((_QWORD *)&v131 + 1) || v132 < 0 )
                goto LABEL_252;
              uu_cp::copy_attributes((__int64)&v244, *((__int64 *)&v131 + 1), v132, v97, v98, v121);
              if ( v244 != 13 )
              {
                *(_QWORD *)v13 = v244;
                v101 = v246;
                v102 = v247;
                *(_OWORD *)(v13 + 8) = v245;
                *(_OWORD *)(v13 + 24) = v101;
                *(_OWORD *)(v13 + 40) = v102;
                *(_QWORD *)(v13 + 56) = v248;
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v166);
                if ( (_QWORD)v131 == 0x8000000000000000LL )
                  core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v131);
                <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v155);
                v13 = v127;
                goto LABEL_214;
              }
              v40(&v166);
              if ( (_QWORD)v131 == 0x8000000000000000LL )
              {
LABEL_204:
                std::io::error::repr_bitpacked::decode_repr(&dest, *((_QWORD *)&v131 + 1));
                if ( dest.m256i_i8[0] >= 3u )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest.m256i_u64[1]);
              }
              v96 = v156;
            }
            while ( v156 != v158 );
          }
          <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v155);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v151);
        }
        else
        {
          uu_cp::copy_attributes((__int64)&v249, a3, a4, v123, v122, v121);
          if ( v249 != 13 )
          {
            *(_QWORD *)v13 = v249;
            v89 = v251;
            v90 = v252;
            *(_OWORD *)(v13 + 8) = v250;
            *(_OWORD *)(v13 + 24) = v89;
            *(_OWORD *)(v13 + 40) = v90;
            *(_QWORD *)(v13 + 56) = v253;
            goto LABEL_210;
          }
        }
        *(_QWORD *)v13 = 13LL;
        core::ptr::drop_in_place<uu_cp::copydir::Context>(&v142);
        goto LABEL_212;
      }
      v234 = v257;
      v237 = v260;
      v236 = v259;
      v235 = v258;
      v238 = v261;
      v41 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v42 = *(_QWORD *)(v41 + 8);
      v43 = *(_QWORD *)(v41 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v42, 1LL, 1LL, v43);
      v186[0] = v42;
      v186[1] = v43;
      v185[0] = v186;
      v185[1] = <&T as core::fmt::Display>::fmt;
      v232[0] = &unk_182CF0;
      v232[1] = 2LL;
      v232[4] = 0LL;
      v232[2] = v185;
      v232[3] = 1LL;
      std::io::stdio::_eprint(v232);
      v187[0] = &v234;
      v187[1] = <walkdir::error::Error as core::fmt::Display>::fmt;
      v233[0] = &unk_182C28;
      v233[1] = 2LL;
      v233[4] = 0LL;
      v233[2] = v187;
      v233[3] = 1LL;
      std::io::stdio::_eprint(v233);
      core::ptr::drop_in_place<walkdir::error::ErrorInner>(&v234);
    }
    v170 = v260;
    v169 = v259;
    v168 = v258;
    v44 = a7[66];
    v45 = *((_QWORD *)&v258 + 1);
    core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v258 + 1), 1LL, 1LL, v259);
    std::path::Path::to_path_buf(&v129, v45);
    v46 = v143;
    if ( !v143 )
      goto LABEL_252;
    v47 = v144;
    if ( v144 < 0 )
      goto LABEL_252;
    v48 = v40;
    v49 = *((_QWORD *)&v129 + 1);
    v50 = v130;
    core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v129 + 1), 1LL, 1LL, v130);
    std::path::Path::_join(&v106, v46, v47, v49, v50);
    v51 = a8;
    if ( !(_QWORD)v107 || v107 < 0 )
      goto LABEL_252;
    v40 = v48;
    if ( v145 == 0x8000000000000000LL )
    {
      v52 = (__int64 *)v137;
      std::path::Path::to_path_buf(v137, v107);
      v53 = &v137[8];
      v13 = v127;
    }
    else
    {
      v13 = v127;
      if ( !(_QWORD)v146 || v146 < 0 )
        goto LABEL_252;
      v54 = std::path::Path::_strip_prefix(v107, *((_QWORD *)&v107 + 1), v146, *((_QWORD *)&v146 + 1));
      if ( !v54 )
        goto LABEL_207;
      std::path::Path::to_path_buf(&v113, v54);
      v52 = (__int64 *)&v113;
      v53 = (char *)&v113 + 8;
    }
    v55 = *v52;
    v154 = *(_OWORD *)v53;
    if ( v55 == 0x8000000000000000LL )
      goto LABEL_207;
    *(_OWORD *)&v108[8] = v154;
    *(_QWORD *)v108 = v55;
    if ( (v44 & 1) != 0 )
      break;
LABEL_81:
    v116 = *(_OWORD *)v108;
    v117 = *(_QWORD **)&v108[16];
    if ( !*(_QWORD *)&v108[8] || *(__int64 *)&v108[16] < 0 )
      goto LABEL_252;
    std::path::Path::_join(&v133, v147, v148, *(_QWORD *)&v108[8], *(_QWORD *)&v108[16]);
    v40(&v116);
    is_file = std::path::Path::is_file(v147, v148);
    *(_OWORD *)dest.m256i_i8 = v107;
    v120.m256i_i64[0] = v130;
    *(_OWORD *)&dest.m256i_u64[2] = v129;
    v120.m256i_i64[3] = v134;
    *(_OWORD *)&v120.m256i_u64[1] = v133;
    v208 = v107;
    v209 = v129;
    v210 = v120;
    if ( v106 == 0x8000000000000000LL )
      goto LABEL_208;
    v256 = v210;
    v255 = v209;
    v254 = v208;
    v107 = v208;
    *(_OWORD *)v108 = v209;
    *(_QWORD *)&v108[16] = v210.m256i_i64[0];
    v109 = *(_OWORD *)&v210.m256i_u64[1];
    v110 = v210.m256i_i64[3];
    if ( !(_QWORD)v208 || v107 < 0 )
      goto LABEL_252;
    if ( !(unsigned __int8)std::path::Path::is_symlink(v208, *((_QWORD *)&v107 + 1)) || (a7[65] & 1) != 0 )
    {
      if ( !(_QWORD)v107 || v107 < 0 )
        goto LABEL_252;
      if ( !(unsigned __int8)std::path::Path::is_dir(v107, *((_QWORD *)&v107 + 1)) )
        goto LABEL_114;
      v62 = v107;
      core::slice::raw::from_raw_parts::precondition_check(v107, 1LL, 1LL, *((_QWORD *)&v107 + 1));
      v133 = v62;
      *(_QWORD *)&v113 = 0LL;
      *((_QWORD *)&v113 + 1) = 1LL;
      v114 = 0LL;
      v120.m256i_i64[2] = 32LL;
      v120.m256i_i8[24] = 3;
      dest.m256i_i64[0] = 0LL;
      dest.m256i_i64[2] = 0LL;
      v120.m256i_i64[0] = (__int64)&v113;
      v120.m256i_i64[1] = (__int64)&anon_66827f6b5e96d838f084441030a41a9e_11_llvm_16861867776640412384;
      if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v133, &dest) )
        core::result::unwrap_failed(
          anon_66827f6b5e96d838f084441030a41a9e_12_llvm_16861867776640412384,
          55LL,
          &v129,
          &anon_30ecf5788dc16ea493c1f299142c4ef1_19_llvm_10347183305587337279,
          &anon_66827f6b5e96d838f084441030a41a9e_14_llvm_16861867776640412384);
      v116 = v113;
      v117 = v114;
      v51 = a8;
      if ( !*((_QWORD *)&v113 + 1) || (__int64)v114 < 0 )
        goto LABEL_252;
      if ( (unsigned __int64)v114 >= 2 )
        v63 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                asc_2F999,
                2LL,
                (char *)v114 + *((_QWORD *)&v113 + 1) - 2,
                2LL);
      else
        v63 = 0;
      alloc::raw_vec::RawVec<T,A>::current_memory(&dest, &v116);
      if ( dest.m256i_i64[1] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          &v117,
          dest.m256i_i64[0],
          dest.m256i_i64[1],
          dest.m256i_i64[2]);
      if ( v63 )
        goto LABEL_114;
      if ( !*((_QWORD *)&v109 + 1) || v110 < 0 )
        goto LABEL_252;
      std::sys::pal::unix::fs::stat(&dest);
      if ( dest.m256i_i64[0] == 2 )
      {
        std::io::error::repr_bitpacked::decode_repr(&dest, dest.m256i_i64[1]);
        if ( dest.m256i_i8[0] >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest.m256i_u64[1]);
        if ( !is_file )
        {
          dest.m256i_i8[4] = 0;
          v69 = 63;
          if ( (*v121 & 1) == 0 )
          {
            v69 = 18;
            if ( (a7[50] & 1) == 0 )
              v69 = 0;
          }
          v70 = umask(0);
          v71 = v70;
          umask(v70);
          dest.m256i_i32[0] = (v69 | v71 & 0x1FF) ^ 0x1FF;
          v72 = *((_QWORD *)&v109 + 1);
          v73 = v110;
          core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v109 + 1), 1LL, 1LL, v110);
          v74 = std::fs::DirBuilder::_create(&dest, v72, v73);
          if ( v74 )
          {
            *(_QWORD *)v165 = 2LL;
            *(_QWORD *)&v165[8] = v74;
            goto LABEL_117;
          }
          if ( (a7[72] & 1) != 0 )
          {
            if ( !*(_QWORD *)&v108[8] || *(__int64 *)&v108[16] < 0 || !*((_QWORD *)&v109 + 1) || v110 < 0 )
              goto LABEL_252;
            uu_cp::context_for(
              (__int64)&v113,
              *(__int64 *)&v108[8],
              *(__int64 *)&v108[16],
              *((__int64 *)&v109 + 1),
              v110);
            *(_QWORD *)&v116 = &v113;
            *((_QWORD *)&v116 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            dest.m256i_i64[0] = (__int64)&unk_182C28;
            dest.m256i_i64[1] = 2LL;
            v120.m256i_i64[0] = 0LL;
            dest.m256i_i64[2] = (__int64)&v116;
            dest.m256i_i64[3] = 1LL;
            std::io::stdio::_print(&dest);
            core::ptr::drop_in_place<alloc::string::String>(&v113);
          }
          goto LABEL_116;
        }
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&dest, 45LL, 0LL);
        v64 = dest.m256i_i64[1];
        if ( dest.m256i_i64[0] )
          alloc::raw_vec::handle_error(dest.m256i_i64[1], dest.m256i_i64[2]);
        v65 = (void *)dest.m256i_i64[2];
        core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_2F9B8, dest.m256i_i64[2], 1LL, 1LL, 45LL);
        qmemcpy(v65, "cannot overwrite non-directory with directory", 45);
        *(_QWORD *)v165 = 4LL;
        *(_QWORD *)&v165[8] = v64;
        *(_QWORD *)&v165[16] = v65;
        *(_QWORD *)&v165[24] = 45LL;
      }
      else
      {
LABEL_114:
        if ( !(_QWORD)v107 || v107 < 0 )
          goto LABEL_252;
        if ( (unsigned __int8)std::path::Path::is_dir(v107, *((_QWORD *)&v107 + 1)) )
          goto LABEL_116;
        v66 = (_QWORD)v107 == 0LL || v107 < 0;
        if ( (v105 & 1) == 0 )
        {
          if ( v66 || !*((_QWORD *)&v109 + 1) || v110 < 0 )
            goto LABEL_252;
          uu_cp::copy_file(
            (__int64)&v124,
            v138,
            v107,
            *((size_t *)&v107 + 1),
            *((void **)&v109 + 1),
            v110,
            (unsigned __int64)a7,
            v51,
            a9,
            a10,
            0);
          if ( v124.m256i_i64[0] != 3 )
          {
            if ( v124.m256i_i64[0] == 13 )
              goto LABEL_116;
            goto LABEL_157;
          }
          switch ( v125 & 3 )
          {
            case 0LL:
              v68 = 16LL;
              goto LABEL_153;
            case 1LL:
              v68 = 15LL;
LABEL_153:
              v75 = *(_BYTE *)(v125 + v68);
              break;
            case 2LL:
              v75 = std::sys::pal::unix::decode_error_kind(DWORD1(v125));
              break;
            case 3LL:
              v75 = std::io::error::repr_bitpacked::kind_from_prim(DWORD1(v125));
              if ( v75 == 41 )
                core::hint::unreachable_unchecked::precondition_check();
              return result;
          }
          if ( v75 != 1 )
          {
LABEL_157:
            *(_OWORD *)&v165[48] = v126;
            *(_OWORD *)&v165[32] = v125;
            *(__m256i *)v165 = v124;
            goto LABEL_117;
          }
          v139 = v125;
          switch ( v125 & 3 )
          {
            case 0LL:
              v76 = 16LL;
              goto LABEL_162;
            case 1LL:
              v76 = 15LL;
LABEL_162:
              v77 = *(_BYTE *)(v125 + v76);
              break;
            case 2LL:
              v77 = std::sys::pal::unix::decode_error_kind(DWORD1(v125));
              break;
            case 3LL:
              v77 = std::io::error::repr_bitpacked::kind_from_prim(DWORD1(v125));
              if ( v77 == 41 )
                core::hint::unreachable_unchecked::precondition_check();
              return result;
          }
          if ( !*(_QWORD *)&v108[8] || *(__int64 *)&v108[16] < 0 )
            goto LABEL_252;
          *(_QWORD *)&v116 = 1LL;
          *((_QWORD *)&v116 + 1) = *(_QWORD *)&v108[8];
          v117 = *(_QWORD **)&v108[16];
          v118 = 1;
          *(_QWORD *)&v154 = &v116;
          *((_QWORD *)&v154 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          dest.m256i_i64[0] = (__int64)&off_182C48;
          dest.m256i_i64[1] = 2LL;
          dest.m256i_i64[2] = (__int64)&v154;
          dest.m256i_i64[3] = 1LL;
          v120.m256i_i64[0] = 0LL;
          alloc::fmt::format::format_inner(&v133, &dest);
          dest.m256i_i64[2] = v134;
          *(_OWORD *)dest.m256i_i8 = v133;
          dest.m256i_i64[3] = ((unsigned __int64)v77 << 32) | 3;
          v78 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          if ( !v78 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v79 = *(_OWORD *)dest.m256i_i8;
          v78[1] = *(_OWORD *)&dest.m256i_u64[2];
          *v78 = v79;
          v111 = v78;
          v112 = &anon_dd6310c77d121ecce151d075805ee620_48_llvm_1613436602710632571;
          _InterlockedExchange(&uucore::mods::error::EXIT_CODE, uucore::mods::error::UError::code(v78));
          v80 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v81 = *(_QWORD **)(v80 + 8);
          v82 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v80 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v81, 1LL, 1LL, v82);
          v140 = v81;
          v141 = v82;
          *(_QWORD *)&v113 = &v140;
          *((_QWORD *)&v113 + 1) = <&T as core::fmt::Display>::fmt;
          v114 = &v111;
          v115 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          dest.m256i_i64[0] = (__int64)&unk_182C68;
          dest.m256i_i64[1] = 3LL;
          v120.m256i_i64[0] = 0LL;
          dest.m256i_i64[2] = (__int64)&v113;
          dest.m256i_i64[3] = 2LL;
          std::io::stdio::_eprint(&dest);
          v83 = v112;
          if ( *v112 )
          {
            ((void (__fastcall *)(_OWORD *))*v112)(v111);
            v83 = v112;
          }
          v84 = v83[1];
          if ( v84 )
            _rust_dealloc(v111, v84, v83[2]);
          std::io::error::repr_bitpacked::decode_repr(&v129, v139);
          if ( (unsigned __int8)v129 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v129 + 8);
          if ( v124.m256i_i64[0] == 3 )
          {
            core::ptr::drop_in_place<alloc::string::String>(&v124.m256i_u64[1]);
          }
          else
          {
            v67 = &v124;
            if ( v124.m256i_i64[0] != 13 )
LABEL_133:
              core::ptr::drop_in_place<uu_cp::Error>(v67);
          }
LABEL_116:
          *(_QWORD *)v165 = 13LL;
          goto LABEL_117;
        }
        if ( v66 || !*((_QWORD *)&v109 + 1) || v110 < 0 )
          goto LABEL_252;
        uu_cp::copy_file(
          (__int64)&dest,
          v138,
          v107,
          *((size_t *)&v107 + 1),
          *((void **)&v109 + 1),
          v110,
          (unsigned __int64)a7,
          v51,
          a9,
          a10,
          0);
        if ( dest.m256i_i64[0] == 13 )
          goto LABEL_116;
        *(__m256i *)&v137[32] = v120;
        *(__m256i *)v137 = dest;
        if ( !(_QWORD)v107 || v107 < 0 )
          goto LABEL_252;
        v67 = (__m256i *)v137;
        if ( (unsigned __int8)std::path::Path::is_symlink(v107, *((_QWORD *)&v107 + 1)) )
          goto LABEL_133;
        if ( *(_QWORD *)v137 == 13LL )
          goto LABEL_116;
        *(_QWORD *)v165 = *(_QWORD *)v137;
        *(_QWORD *)&v165[56] = *(_QWORD *)&v137[56];
        *(_OWORD *)&v165[40] = *(_OWORD *)&v137[40];
        *(_OWORD *)&v165[24] = *(_OWORD *)&v137[24];
        *(_OWORD *)&v165[8] = *(_OWORD *)&v137[8];
      }
    }
    else
    {
      if ( !(_QWORD)v107 || v107 < 0 || !*((_QWORD *)&v109 + 1) || v110 < 0 )
        goto LABEL_252;
      uu_cp::copy_link(v165, v107, *((__int64 *)&v107 + 1), *((void **)&v109 + 1), v110, v51);
    }
LABEL_117:
    v40(&v109);
    v40((__int128 *)v108);
    v40((__int128 *)&v106);
    if ( *(_QWORD *)v165 != 13LL )
    {
      *(_QWORD *)v13 = *(_QWORD *)v165;
      v91 = *(_OWORD *)&v165[24];
      v92 = *(_OWORD *)&v165[40];
      *(_OWORD *)(v13 + 8) = *(_OWORD *)&v165[8];
      *(_OWORD *)(v13 + 24) = v91;
      *(_OWORD *)(v13 + 40) = v92;
      *(_QWORD *)(v13 + 56) = *(_QWORD *)&v165[56];
      goto LABEL_209;
    }
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v168);
  }
  v56 = *((_QWORD *)&v168 + 1);
  v57 = v169;
  core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v168 + 1), 1LL, 1LL, v169);
  is_dir = std::path::Path::is_dir(v56, v57);
  if ( v148 && v147 && (v147[v148 - 1] == 92 || v147[v148 - 1] == 47) && is_dir == 1 )
  {
    *(_DWORD *)v137 = 511;
    v137[4] = 1;
    v59 = std::fs::DirBuilder::_create(v137, v147, v148);
    v51 = a8;
    if ( !v59 )
      goto LABEL_81;
    v111 = (_OWORD *)v59;
    v140 = &v111;
    v141 = <std::io::error::Error as core::fmt::Display>::fmt;
    v124.m256i_i64[0] = (__int64)&off_182C08;
    v124.m256i_i64[1] = 2LL;
    *(_QWORD *)&v125 = 0LL;
    v124.m256i_i64[2] = (__int64)&v140;
    v124.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v124);
    std::io::error::repr_bitpacked::decode_repr(v137, v111);
    if ( v137[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v137[8]);
    goto LABEL_80;
  }
  if ( !*(_QWORD *)&v108[8] || *(__int64 *)&v108[16] < 0 )
    goto LABEL_252;
  v60 = std::path::Path::_strip_prefix(*(_QWORD *)&v108[8], *(_QWORD *)&v108[16], v149, v150);
  if ( v60 )
  {
    std::path::Path::to_path_buf(&v109, v60);
    v40((__int128 *)v108);
    *(_QWORD *)&v108[16] = v110;
    *(_OWORD *)v108 = v109;
LABEL_80:
    v51 = a8;
    goto LABEL_81;
  }
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v108);
LABEL_207:
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v106);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v129);
LABEL_208:
  *(_QWORD *)v13 = 7LL;
LABEL_209:
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v168);
  core::ptr::drop_in_place<walkdir::IntoIter>(v211);
LABEL_210:
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v142);
  if ( v145 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v145);
LABEL_212:
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v135);
  return v13;
}
