_OWORD *__fastcall uu_tail::follow::watch::follow(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  char v10; // al
  char v11; // r12
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int128 v17; // kr10_16
  int v18; // r12d
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 mut; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  _OWORD *updated; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // al
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rdx
  bool v39; // cf
  __int64 v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rbx
  unsigned __int8 v49; // al
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // r15
  int v56; // eax
  bool v57; // bp
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // r15
  _BYTE *v63; // rbx
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // r15
  __int64 v74; // rdx
  __int64 v75; // r14
  char v76; // al
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rax
  void (__fastcall **v80)(_OWORD *); // rdx
  _OWORD *v81; // rbx
  void (__fastcall **v82)(_OWORD *); // r15
  void (__fastcall *v83)(_OWORD *); // rsi
  __int64 v84; // rdx
  __int64 v85; // rcx
  char v86; // al
  __int64 v87; // rdx
  __int64 v88; // rbx
  __int64 v89; // r14
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // rdx
  void **v103; // rdi
  _QWORD *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // r14
  __int64 v109; // r12
  _QWORD *v110; // rsi
  __int64 *v111; // rax
  __int64 v112; // r14
  unsigned __int64 v113; // rbx
  _OWORD *v114; // rbx
  __int64 v115; // r14
  __int16 v116; // ax
  __int64 v117; // rdx
  __int64 v118; // rbx
  __int64 v119; // r14
  __int64 v120; // r13
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rbx
  __int64 v124; // r14
  _OWORD *v125; // rax
  __int128 v126; // xmm0
  char v127; // r14
  _OWORD *result; // rax
  __int64 v129; // rax
  char **v130; // rax
  _QWORD *v131; // [rsp+8h] [rbp-1480h]
  char v133; // [rsp+1Fh] [rbp-1469h] BYREF
  __int64 v134; // [rsp+20h] [rbp-1468h]
  char v135[8]; // [rsp+28h] [rbp-1460h] BYREF
  __int64 v136; // [rsp+30h] [rbp-1458h]
  __int64 v137; // [rsp+38h] [rbp-1450h] BYREF
  __int128 v138; // [rsp+40h] [rbp-1448h] BYREF
  unsigned __int64 v139; // [rsp+50h] [rbp-1438h]
  __int64 v140; // [rsp+58h] [rbp-1430h]
  __int128 v141; // [rsp+60h] [rbp-1428h] BYREF
  __int128 v142; // [rsp+70h] [rbp-1418h]
  unsigned __int8 v143[16]; // [rsp+80h] [rbp-1408h] BYREF
  char **v144; // [rsp+90h] [rbp-13F8h]
  __pid_t pid; // [rsp+9Ch] [rbp-13ECh]
  _BYTE v146[48]; // [rsp+A0h] [rbp-13E8h] BYREF
  unsigned __int64 v147; // [rsp+D0h] [rbp-13B8h]
  __int64 v148; // [rsp+D8h] [rbp-13B0h] BYREF
  __int64 v149; // [rsp+E0h] [rbp-13A8h]
  unsigned __int64 v150; // [rsp+E8h] [rbp-13A0h]
  char **v151; // [rsp+F0h] [rbp-1398h]
  char **v152; // [rsp+F8h] [rbp-1390h]
  __int64 v153; // [rsp+100h] [rbp-1388h]
  __int64 v154; // [rsp+108h] [rbp-1380h]
  __int64 v155; // [rsp+110h] [rbp-1378h]
  __int64 v156; // [rsp+118h] [rbp-1370h] BYREF
  _OWORD dest[14]; // [rsp+120h] [rbp-1368h] BYREF
  __int64 v158; // [rsp+200h] [rbp-1288h]
  __int64 v159; // [rsp+208h] [rbp-1280h]
  _OWORD *v160; // [rsp+210h] [rbp-1278h] BYREF
  __int64 v161; // [rsp+218h] [rbp-1270h]
  __int128 v162; // [rsp+220h] [rbp-1268h] BYREF
  unsigned __int64 v163; // [rsp+230h] [rbp-1258h]
  __int128 v164; // [rsp+238h] [rbp-1250h] BYREF
  unsigned __int64 v165; // [rsp+248h] [rbp-1240h]
  _QWORD v166[2]; // [rsp+250h] [rbp-1238h] BYREF
  _QWORD v167[2]; // [rsp+260h] [rbp-1228h] BYREF
  _QWORD v168[2]; // [rsp+270h] [rbp-1218h] BYREF
  _OWORD *v169; // [rsp+280h] [rbp-1208h] BYREF
  _QWORD v170[2]; // [rsp+290h] [rbp-11F8h] BYREF
  _QWORD v171[2]; // [rsp+2A0h] [rbp-11E8h] BYREF
  _QWORD v172[2]; // [rsp+2B0h] [rbp-11D8h] BYREF
  _OWORD *v173; // [rsp+2C0h] [rbp-11C8h] BYREF
  _QWORD v174[2]; // [rsp+2D0h] [rbp-11B8h] BYREF
  _QWORD v175[2]; // [rsp+2E0h] [rbp-11A8h] BYREF
  _QWORD v176[2]; // [rsp+2F0h] [rbp-1198h] BYREF
  _QWORD v177[2]; // [rsp+300h] [rbp-1188h] BYREF
  _QWORD v178[2]; // [rsp+310h] [rbp-1178h] BYREF
  _QWORD v179[2]; // [rsp+320h] [rbp-1168h] BYREF
  _QWORD v180[2]; // [rsp+330h] [rbp-1158h] BYREF
  _QWORD v181[2]; // [rsp+340h] [rbp-1148h] BYREF
  _QWORD v182[2]; // [rsp+350h] [rbp-1138h] BYREF
  _QWORD v183[2]; // [rsp+360h] [rbp-1128h] BYREF
  _QWORD v184[2]; // [rsp+370h] [rbp-1118h] BYREF
  _QWORD v185[2]; // [rsp+380h] [rbp-1108h] BYREF
  _QWORD v186[2]; // [rsp+390h] [rbp-10F8h] BYREF
  _QWORD v187[2]; // [rsp+3A0h] [rbp-10E8h] BYREF
  _QWORD v188[2]; // [rsp+3B0h] [rbp-10D8h] BYREF
  _QWORD v189[2]; // [rsp+3C0h] [rbp-10C8h] BYREF
  _QWORD v190[2]; // [rsp+3D0h] [rbp-10B8h] BYREF
  _QWORD v191[2]; // [rsp+3E0h] [rbp-10A8h] BYREF
  _QWORD v192[2]; // [rsp+3F0h] [rbp-1098h] BYREF
  _QWORD v193[2]; // [rsp+400h] [rbp-1088h] BYREF
  _QWORD v194[2]; // [rsp+410h] [rbp-1078h] BYREF
  _QWORD v195[2]; // [rsp+420h] [rbp-1068h] BYREF
  _QWORD v196[2]; // [rsp+430h] [rbp-1058h] BYREF
  _QWORD v197[2]; // [rsp+440h] [rbp-1048h] BYREF
  _QWORD *v198; // [rsp+450h] [rbp-1038h] BYREF
  __int64 (__fastcall *v199)(); // [rsp+458h] [rbp-1030h]
  _QWORD v200[2]; // [rsp+460h] [rbp-1028h] BYREF
  _QWORD v201[2]; // [rsp+470h] [rbp-1018h] BYREF
  _QWORD v202[2]; // [rsp+480h] [rbp-1008h] BYREF
  _QWORD v203[2]; // [rsp+490h] [rbp-FF8h] BYREF
  _QWORD v204[2]; // [rsp+4A0h] [rbp-FE8h] BYREF
  _QWORD v205[2]; // [rsp+4B0h] [rbp-FD8h] BYREF
  _QWORD v206[2]; // [rsp+4C0h] [rbp-FC8h] BYREF
  _QWORD v207[2]; // [rsp+4D0h] [rbp-FB8h] BYREF
  _QWORD v208[2]; // [rsp+4E0h] [rbp-FA8h] BYREF
  _QWORD v209[2]; // [rsp+4F0h] [rbp-F98h] BYREF
  _OWORD v210[11]; // [rsp+500h] [rbp-F88h] BYREF
  _QWORD v211[3]; // [rsp+5B0h] [rbp-ED8h] BYREF
  char v212; // [rsp+5C8h] [rbp-EC0h]
  _QWORD v213[3]; // [rsp+5D0h] [rbp-EB8h] BYREF
  char v214; // [rsp+5E8h] [rbp-EA0h]
  _QWORD v215[3]; // [rsp+5F0h] [rbp-E98h] BYREF
  char v216; // [rsp+608h] [rbp-E80h]
  _QWORD v217[3]; // [rsp+610h] [rbp-E78h] BYREF
  char v218; // [rsp+628h] [rbp-E60h]
  _QWORD v219[3]; // [rsp+630h] [rbp-E58h] BYREF
  char v220; // [rsp+648h] [rbp-E40h]
  _QWORD v221[3]; // [rsp+650h] [rbp-E38h] BYREF
  char v222; // [rsp+668h] [rbp-E20h]
  _QWORD v223[3]; // [rsp+670h] [rbp-E18h] BYREF
  char v224; // [rsp+688h] [rbp-E00h]
  _QWORD v225[3]; // [rsp+690h] [rbp-DF8h] BYREF
  char v226; // [rsp+6A8h] [rbp-DE0h]
  _QWORD v227[3]; // [rsp+6B0h] [rbp-DD8h] BYREF
  char v228; // [rsp+6C8h] [rbp-DC0h]
  _QWORD v229[4]; // [rsp+6D0h] [rbp-DB8h] BYREF
  __int128 v230; // [rsp+6F0h] [rbp-D98h]
  __int128 v231; // [rsp+700h] [rbp-D88h]
  __int64 v232; // [rsp+710h] [rbp-D78h]
  _QWORD v233[6]; // [rsp+720h] [rbp-D68h] BYREF
  __int128 v234; // [rsp+750h] [rbp-D38h]
  __int128 v235; // [rsp+760h] [rbp-D28h]
  __int128 v236; // [rsp+770h] [rbp-D18h]
  __int128 v237; // [rsp+780h] [rbp-D08h]
  __int128 v238; // [rsp+790h] [rbp-CF8h]
  __int128 v239; // [rsp+7A0h] [rbp-CE8h]
  __int128 v240; // [rsp+7B0h] [rbp-CD8h]
  int v241; // [rsp+7C0h] [rbp-CC8h]
  __int128 v242; // [rsp+7D0h] [rbp-CB8h] BYREF
  __int64 v243; // [rsp+7E0h] [rbp-CA8h]
  _OWORD v244[3]; // [rsp+7F0h] [rbp-C98h] BYREF
  unsigned __int64 v245; // [rsp+820h] [rbp-C68h]
  __int128 v246; // [rsp+830h] [rbp-C58h] BYREF
  __int64 v247; // [rsp+840h] [rbp-C48h]
  __int128 v248; // [rsp+850h] [rbp-C38h] BYREF
  __int64 v249; // [rsp+860h] [rbp-C28h]
  _QWORD v250[6]; // [rsp+870h] [rbp-C18h] BYREF
  _QWORD v251[6]; // [rsp+8A0h] [rbp-BE8h] BYREF
  __int128 v252; // [rsp+8D0h] [rbp-BB8h] BYREF
  __int64 v253; // [rsp+8E0h] [rbp-BA8h]
  _QWORD v254[6]; // [rsp+8E8h] [rbp-BA0h] BYREF
  __int128 v255; // [rsp+918h] [rbp-B70h] BYREF
  __int64 v256; // [rsp+928h] [rbp-B60h]
  _QWORD v257[6]; // [rsp+930h] [rbp-B58h] BYREF
  __int128 v258; // [rsp+960h] [rbp-B28h] BYREF
  __int64 v259; // [rsp+970h] [rbp-B18h]
  _QWORD v260[6]; // [rsp+978h] [rbp-B10h] BYREF
  _QWORD v261[6]; // [rsp+9A8h] [rbp-AE0h] BYREF
  _QWORD v262[6]; // [rsp+9D8h] [rbp-AB0h] BYREF
  _QWORD v263[6]; // [rsp+A08h] [rbp-A80h] BYREF
  _QWORD v264[6]; // [rsp+A38h] [rbp-A50h] BYREF
  _QWORD v265[6]; // [rsp+A68h] [rbp-A20h] BYREF
  _QWORD v266[6]; // [rsp+A98h] [rbp-9F0h] BYREF
  _QWORD v267[6]; // [rsp+AC8h] [rbp-9C0h] BYREF
  _QWORD v268[6]; // [rsp+AF8h] [rbp-990h] BYREF
  _QWORD v269[6]; // [rsp+B28h] [rbp-960h] BYREF
  _QWORD v270[6]; // [rsp+B58h] [rbp-930h] BYREF
  _QWORD v271[6]; // [rsp+B88h] [rbp-900h] BYREF
  _QWORD v272[6]; // [rsp+BB8h] [rbp-8D0h] BYREF
  _QWORD v273[6]; // [rsp+BE8h] [rbp-8A0h] BYREF
  _QWORD v274[6]; // [rsp+C18h] [rbp-870h] BYREF
  _QWORD v275[6]; // [rsp+C48h] [rbp-840h] BYREF
  _QWORD v276[6]; // [rsp+C78h] [rbp-810h] BYREF
  _QWORD v277[6]; // [rsp+CA8h] [rbp-7E0h] BYREF
  _QWORD v278[6]; // [rsp+CD8h] [rbp-7B0h] BYREF
  _QWORD v279[6]; // [rsp+D08h] [rbp-780h] BYREF
  _QWORD v280[6]; // [rsp+D38h] [rbp-750h] BYREF
  _QWORD v281[6]; // [rsp+D68h] [rbp-720h] BYREF
  _QWORD v282[3]; // [rsp+D98h] [rbp-6F0h] BYREF
  __int128 v283; // [rsp+DB0h] [rbp-6D8h]
  _BYTE v284[24]; // [rsp+DC8h] [rbp-6C0h] BYREF
  _BYTE v285[24]; // [rsp+DE0h] [rbp-6A8h] BYREF
  _OWORD v286[11]; // [rsp+DF8h] [rbp-690h] BYREF
  _OWORD v287[10]; // [rsp+EA8h] [rbp-5E0h] BYREF
  _QWORD v288[7]; // [rsp+F48h] [rbp-540h] BYREF
  _QWORD v289[7]; // [rsp+F80h] [rbp-508h] BYREF
  _BYTE v290[24]; // [rsp+FB8h] [rbp-4D0h] BYREF
  void *v291; // [rsp+FD0h] [rbp-4B8h] BYREF
  _BYTE v292[24]; // [rsp+1000h] [rbp-488h] BYREF
  void *v293; // [rsp+1018h] [rbp-470h] BYREF
  _QWORD v294[22]; // [rsp+1048h] [rbp-440h] BYREF
  _BYTE src[216]; // [rsp+10F8h] [rbp-390h] BYREF
  _BYTE v296[216]; // [rsp+11D0h] [rbp-2B8h] BYREF
  _BYTE v297[216]; // [rsp+12A8h] [rbp-1E0h] BYREF
  _BYTE v298[264]; // [rsp+1380h] [rbp-108h] BYREF

  v199 = 0LL;
  v134 = a2;
  if ( !*(_QWORD *)(a1 + 104)
    || (v131 = (_QWORD *)(a1 + 56),
        !(unsigned __int8)((__int64 (*)(void))uu_tail::follow::files::FileHandling::files_remaining)())
    && (*(_BYTE *)(v134 + 72) & 1) == 0
    && (*(_QWORD *)(a1 + 104) != 1LL
     || (<std::hash::random::RandomState as core::hash::BuildHasher>::build_hasher(dest, a1 + 112),
         <std::path::Path as core::hash::Hash>::hash(
           anon_05a4d4ca64bdea474ebd4b0eb3197a7a_34_llvm_11384070901547909942,
           1LL,
           dest),
         v2 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(dest),
         !hashbrown::raw::RawTable<T,A>::find(
            a1 + 80,
            v2,
            anon_05a4d4ca64bdea474ebd4b0eb3197a7a_34_llvm_11384070901547909942,
            1LL))) )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(dest, 18LL, 0LL);
    v123 = *((_QWORD *)&dest[0] + 1);
    if ( *(_QWORD *)&dest[0] )
      alloc::raw_vec::handle_error(*((_QWORD *)&dest[0] + 1), *(_QWORD *)&dest[1]);
    v124 = *(_QWORD *)&dest[1];
    core::intrinsics::copy_nonoverlapping::precondition_check(aNoFilesRemaini, *(_QWORD *)&dest[1], 1LL, 1LL, 18LL);
    *(_OWORD *)v124 = *(_OWORD *)aNoFilesRemaini;
    *(_WORD *)(v124 + 16) = 26478;
    *(_QWORD *)&dest[0] = v123;
    *((_QWORD *)&dest[0] + 1) = v124;
    *(_QWORD *)&dest[1] = 18LL;
    DWORD2(dest[1]) = 1;
    v125 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    updated = v125;
    if ( !v125 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v126 = dest[0];
    v125[1] = dest[1];
    *v125 = v126;
    goto LABEL_275;
  }
  pid = *(_DWORD *)(a1 + 136);
  v154 = a1 + 80;
  v155 = a1 + 112;
  v153 = a1 + 32;
  v140 = 0LL;
  v144 = &off_189958;
  v151 = &off_189988;
  v152 = &off_189B48;
  while ( 2 )
  {
    if ( *(_BYTE *)(v134 + 76) != 2 && *(_DWORD *)(a1 + 136) && kill(pid, 0) )
    {
      v3 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
      std::io::error::repr_bitpacked::decode_repr(dest, v3);
      if ( LOBYTE(dest[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)dest + 8);
      if ( HIDWORD(v3) != 1 )
      {
        core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a1);
        return 0LL;
      }
    }
    if ( (*(_BYTE *)(a1 + 142) & 1) != 0 && (*(_BYTE *)(a1 + 140) & 1) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 40);
      if ( !v12 )
        goto LABEL_284;
      if ( (v12 & 7) != 0 )
        goto LABEL_284;
      v13 = *(_QWORD *)(a1 + 48);
      if ( v13 > 0x555555555555555LL )
        goto LABEL_284;
      v14 = v12 + 24 * v13;
      while ( v12 != v14 )
      {
        v12 += 24LL;
        if ( !*(_QWORD *)(v12 - 16) || *(__int64 *)(v12 - 8) < 0 )
          goto LABEL_284;
        std::sys::pal::unix::fs::stat(dest);
        if ( *(_QWORD *)&dest[0] == 2LL )
        {
          std::io::error::repr_bitpacked::decode_repr(dest, *((_QWORD *)&dest[0] + 1));
          if ( LOBYTE(dest[0]) >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)dest + 8);
        }
        else
        {
          if ( !*(_QWORD *)(v12 - 16) )
            goto LABEL_284;
          if ( *(__int64 *)(v12 - 8) < 0 )
            goto LABEL_284;
          v15 = uu_tail::follow::files::FileHandling::get(v131);
          if ( !*(_QWORD *)(v12 - 16) || *(__int64 *)(v12 - 8) < 0 )
            goto LABEL_284;
          v16 = (_QWORD *)v15;
          std::sys::pal::unix::fs::stat(dest);
          v17 = dest[0];
          if ( *(_QWORD *)&dest[0] == 2LL )
          {
            v156 = *((_QWORD *)&dest[0] + 1);
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v156, &off_189740, &off_189B30);
          }
          v232 = *(_QWORD *)&dest[3];
          v231 = dest[2];
          v230 = dest[1];
          v18 = DWORD2(dest[3]);
          v234 = *(_OWORD *)((char *)&dest[3] + 12);
          v235 = *(_OWORD *)((char *)&dest[4] + 12);
          v236 = *(_OWORD *)((char *)&dest[5] + 12);
          v237 = *(_OWORD *)((char *)&dest[6] + 12);
          v238 = *(_OWORD *)((char *)&dest[7] + 12);
          v239 = *(_OWORD *)((char *)&dest[8] + 12);
          v240 = *(_OWORD *)((char *)&dest[9] + 12);
          v241 = HIDWORD(dest[10]);
          v19 = WORD4(dest[3]) & 0xF000;
          if ( (v19 == 4096 || v19 == 0x8000 || v19 == 0x2000) && !v16[25] )
          {
            v20 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            v159 = *(_QWORD *)(v20 + 8);
            v158 = *(_QWORD *)(v20 + 16);
            core::slice::raw::from_raw_parts::precondition_check(v159, 1LL, 1LL, v158);
            v167[0] = v159;
            v167[1] = v158;
            v166[0] = v167;
            v166[1] = <&T as core::fmt::Display>::fmt;
            v250[0] = &unk_1897A0;
            v250[1] = 2LL;
            v250[4] = 0LL;
            v250[2] = v166;
            v250[3] = 1LL;
            std::io::stdio::_eprint(v250);
            v21 = v16[23];
            if ( !v21 )
              goto LABEL_284;
            v22 = v16[24];
            if ( v22 < 0 )
              goto LABEL_284;
            v211[0] = 0LL;
            v211[1] = v21;
            v211[2] = v22;
            v212 = 1;
            v168[0] = v211;
            v168[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            v251[0] = &unk_189900;
            v251[1] = 2LL;
            v251[4] = 0LL;
            v251[2] = v168;
            v251[3] = 1LL;
            std::io::stdio::_eprint(v251);
            if ( !*(_QWORD *)(v12 - 16) )
              goto LABEL_284;
            if ( *(__int64 *)(v12 - 8) < 0 )
              goto LABEL_284;
            mut = uu_tail::follow::files::FileHandling::get_mut(v131);
            *(_OWORD *)mut = v17;
            v24 = v231;
            *(_OWORD *)(mut + 16) = v230;
            *(_OWORD *)(mut + 32) = v24;
            *(_QWORD *)(mut + 48) = v232;
            *(_DWORD *)(mut + 56) = v18;
            *(_DWORD *)(mut + 172) = v241;
            *(_OWORD *)(mut + 156) = v240;
            *(_OWORD *)(mut + 140) = v239;
            *(_OWORD *)(mut + 124) = v238;
            v25 = v234;
            v26 = v235;
            v27 = v236;
            *(_OWORD *)(mut + 108) = v237;
            *(_OWORD *)(mut + 92) = v27;
            *(_OWORD *)(mut + 76) = v26;
            *(_OWORD *)(mut + 60) = v25;
            if ( !*(_QWORD *)(v12 - 16) || *(__int64 *)(v12 - 8) < 0 )
              goto LABEL_284;
            updated = (_OWORD *)uu_tail::follow::files::FileHandling::update_reader(v131);
            if ( updated )
              goto LABEL_275;
            v29 = *(_QWORD *)(v12 - 16);
            if ( !v29 )
              goto LABEL_284;
            v30 = *(_QWORD *)(v12 - 8);
            if ( v30 < 0 )
              goto LABEL_284;
            uu_tail::follow::files::FileHandling::tail_file(&v169, v131, v29, v30, *(_BYTE *)(v134 + 74) & 1);
            updated = v169;
            if ( v169 )
              goto LABEL_275;
            if ( *(_QWORD *)a1 == 3LL )
              goto LABEL_297;
            if ( !*(_QWORD *)(v12 - 16) || *(__int64 *)(v12 - 8) < 0 )
              goto LABEL_284;
            updated = uu_tail::follow::watch::WatcherRx::watch_with_parent(a1);
            if ( updated )
              goto LABEL_275;
          }
        }
      }
    }
    if ( *(_QWORD *)a1 == 3LL )
    {
      v152 = &off_189AA8;
LABEL_297:
      core::option::unwrap_failed(v152);
    }
    std::sync::mpmc::Receiver<T>::recv_timeout(v146, a1, *(_QWORD *)(v134 + 48), *(unsigned int *)(v134 + 56));
    *(_QWORD *)&v138 = 0LL;
    *((_QWORD *)&v138 + 1) = 8LL;
    v139 = 0LL;
    switch ( *(_QWORD *)v146 )
    {
      case 1LL:
        switch ( v146[8] & 3 )
        {
          case 0:
            v4 = 16LL;
            goto LABEL_84;
          case 1:
            v4 = 15LL;
LABEL_84:
            v31 = *(_BYTE *)(*(_QWORD *)&v146[8] + v4);
            break;
          case 2:
            v31 = std::sys::pal::unix::decode_error_kind(HIDWORD(*(_QWORD *)&v146[8]));
            break;
          case 3:
            v31 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(*(_QWORD *)&v146[8]));
            if ( v31 == 41 )
              core::hint::unreachable_unchecked::precondition_check();
            return result;
        }
        if ( v31 )
          goto LABEL_277;
        v162 = *(_OWORD *)&v146[32];
        v163 = v147;
        v32 = *(_QWORD *)&v146[40];
        if ( !*(_QWORD *)&v146[40] || (v146[40] & 7) != 0 || v147 > 0x555555555555555LL )
          goto LABEL_298;
        if ( !v147 )
          goto LABEL_99;
        v33 = *(_QWORD *)(*(_QWORD *)&v146[40] + 8LL);
        if ( !v33 )
          goto LABEL_284;
        v34 = *(_QWORD *)(*(_QWORD *)&v146[40] + 16LL);
        if ( v34 < 0 )
          goto LABEL_284;
        if ( !*(_QWORD *)(a1 + 104) )
          goto LABEL_99;
        <std::hash::random::RandomState as core::hash::BuildHasher>::build_hasher(dest, v155);
        <std::path::Path as core::hash::Hash>::hash(v33, v34, dest);
        v35 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(dest);
        if ( !hashbrown::raw::RawTable<T,A>::find(v154, v35, v33, v34) )
          goto LABEL_99;
        if ( *(_QWORD *)a1 == 3LL )
          core::option::unwrap_failed(&off_189AC0);
        if ( !*(_QWORD *)(v32 + 8) || *(__int64 *)(v32 + 16) < 0 )
          goto LABEL_284;
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*(_QWORD *)(a1 + 24) + 32LL))(v288, *(_QWORD *)(a1 + 16));
        if ( v288[0] != 6LL )
          core::ptr::drop_in_place<notify::error::Error>(v288);
LABEL_99:
        v11 = 0;
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v162);
        v140 = 0LL;
        goto LABEL_243;
      case 5LL:
        v170[0] = &off_1897E0;
        v170[1] = <&T as core::fmt::Display>::fmt;
        v254[0] = &unk_189AD8;
        v254[1] = 2LL;
        v254[4] = 0LL;
        v254[2] = v170;
        v254[3] = 1LL;
        alloc::fmt::format(&v252, v254);
        v243 = v253;
        v242 = v252;
        v129 = uucore::mods::error::USimpleError::new(1LL, &v242);
        goto LABEL_280;
      case 6LL:
        v141 = *(_OWORD *)&v146[8];
        v142 = *(_OWORD *)&v146[24];
        *(_QWORD *)v143 = *(_QWORD *)&v146[40];
        if ( !*(_QWORD *)&v146[16] || (v146[16] & 7) != 0 || (unsigned __int64)v142 > 0x555555555555555LL )
          goto LABEL_298;
        if ( !(_QWORD)v142 )
          goto LABEL_242;
        v5 = *(_QWORD *)(*(_QWORD *)&v146[16] + 8LL);
        if ( !v5 )
          goto LABEL_284;
        v6 = *(_QWORD *)(*(_QWORD *)&v146[16] + 16LL);
        if ( v6 < 0 )
          goto LABEL_284;
        if ( !*(_QWORD *)(a1 + 104) )
          goto LABEL_242;
        <std::hash::random::RandomState as core::hash::BuildHasher>::build_hasher(dest, v155);
        <std::path::Path as core::hash::Hash>::hash(v5, v6, dest);
        v7 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(dest);
        if ( !hashbrown::raw::RawTable<T,A>::find(v154, v7, v5, v6) )
          goto LABEL_242;
        v8 = *((_QWORD *)&v141 + 1);
        if ( !*((_QWORD *)&v141 + 1) || (BYTE8(v141) & 7) != 0 || (unsigned __int64)v142 > 0x555555555555555LL )
LABEL_298:
          core::panicking::panic_nounwind(anon_bc0733e20ec8cf45ee10e98cadccc086_6_llvm_15364520603949350279, 162LL);
        if ( !(_QWORD)v142 )
          core::option::unwrap_failed(&off_189868);
        v148 = 0LL;
        v149 = 8LL;
        v150 = 0LL;
        if ( !*(_QWORD *)(*((_QWORD *)&v141 + 1) + 8LL) || *(__int64 *)(*((_QWORD *)&v141 + 1) + 16LL) < 0 )
          goto LABEL_284;
        v9 = uu_tail::follow::files::FileHandling::get(v131);
        <alloc::string::String as core::clone::Clone>::clone(v135, v9 + 176);
        if ( v143[0] == 2 )
        {
          if ( v143[1] >= 3u )
            goto LABEL_238;
          goto LABEL_124;
        }
        if ( v143[0] != 3 )
        {
          if ( v143[0] == 4 && v143[1] < 2u )
            goto LABEL_37;
LABEL_238:
          v112 = v148;
          updated = (_OWORD *)v149;
          v113 = v150;
          alloc::raw_vec::RawVec<T,A>::current_memory(v210, v135);
          if ( *((_QWORD *)&v210[0] + 1) )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v137,
              *(_QWORD *)&v210[0],
              *((_QWORD *)&v210[0] + 1),
              *(_QWORD *)&v210[1]);
          if ( v112 == 0x8000000000000000LL )
            goto LABEL_292;
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v138);
          *(_QWORD *)&v138 = v112;
          *((_QWORD *)&v138 + 1) = updated;
          v139 = v113;
LABEL_242:
          v11 = 1;
          core::ptr::drop_in_place<notify::event::Event>(&v141);
          v140 = 0LL;
LABEL_243:
          if ( (*(_BYTE *)(a1 + 141) & 1) != 0 && *(_BYTE *)(v134 + 76) != 2 )
          {
            v114 = *(_OWORD **)(a1 + 80);
            v115 = *(_QWORD *)(a1 + 88);
            dest[0] = *v114;
            v116 = core::core_arch::x86::sse2::_mm_movemask_epi8(dest);
            v117 = *(_QWORD *)(a1 + 104);
            *(_QWORD *)&dest[0] = v114;
            *((_QWORD *)&dest[0] + 1) = v114 + 1;
            *(_QWORD *)&dest[1] = (char *)v114 + v115 + 1;
            WORD4(dest[1]) = ~v116;
            *(_QWORD *)&dest[2] = v117;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v164, dest);
            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v138);
            v139 = v165;
            v138 = v164;
          }
          v118 = *((_QWORD *)&v138 + 1);
          if ( !*((_QWORD *)&v138 + 1) || (BYTE8(v138) & 7) != 0 || v139 > 0x555555555555555LL )
            goto LABEL_284;
          if ( v139 )
          {
            v119 = 24 * v139;
            v120 = 0LL;
            while ( 1 )
            {
              v121 = *(_QWORD *)(v118 + v120 + 8);
              if ( !v121 )
                goto LABEL_284;
              v122 = *(_QWORD *)(v118 + v120 + 16);
              if ( v122 < 0 )
                goto LABEL_284;
              uu_tail::follow::files::FileHandling::tail_file(&v173, v131, v121, v122, *(_BYTE *)(v134 + 74) & 1);
              updated = v173;
              if ( v173 )
                break;
              v120 += 24LL;
              if ( v119 == v120 )
                goto LABEL_255;
            }
            v127 = 0;
            goto LABEL_265;
          }
LABEL_255:
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v138);
          if ( *(_QWORD *)v146 == 1LL )
          {
            std::io::error::repr_bitpacked::decode_repr(dest, *(_QWORD *)&v146[8]);
            if ( LOBYTE(dest[0]) >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)dest + 8);
          }
          else if ( !*(_QWORD *)v146 )
          {
            alloc::raw_vec::RawVec<T,A>::current_memory(dest, &v146[8]);
            if ( *((_QWORD *)&dest[0] + 1) )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                &v146[24],
                *(_QWORD *)&dest[0],
                *((_QWORD *)&dest[0] + 1),
                *(_QWORD *)&dest[1]);
          }
          continue;
        }
        switch ( v143[1] )
        {
          case 1u:
            if ( v143[2] )
              goto LABEL_238;
            break;
          case 2u:
            if ( (v143[2] & 0xFD) != 0 )
              goto LABEL_238;
            break;
          case 3u:
            if ( v143[2] != 1 )
            {
              if ( v143[2] != 2 )
              {
                if ( v143[2] == 3 )
                {
                  v36 = *(_BYTE *)(a1 + 142);
                  if ( v36 != 2 && (v36 & 1) == 0 )
                  {
                    v37 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v141);
                    v39 = v38 == 0;
                    v40 = v38 - 1;
                    if ( v39 || !v37 )
                      goto LABEL_307;
                    v41 = v37 + 24 * v40;
                    <std::path::PathBuf as core::clone::Clone>::clone(v285, v41);
                    alloc::vec::Vec<T,A>::push(&v148, v285);
                    v42 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
                    uu_tail::follow::files::FileHandling::remove(v296, v131, v42, v43);
                    v44 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v41);
                    uu_tail::follow::files::PathData::from_other_with_path(src, v296, v44, v45);
                    v46 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v41);
                    v48 = v47;
                    memcpy(dest, src, 0xD8uLL);
                    if ( *v131 == 0x8000000000000000LL )
                      core::option::unwrap_failed(&off_189970);
                    v49 = <std::path::PathBuf as core::cmp::PartialEq>::eq(v131, v8);
                    uu_tail::follow::files::FileHandling::insert(v131, v46, v48, dest, v49);
                    if ( *(_QWORD *)a1 == 3LL )
                      goto LABEL_310;
                    v50 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
                    v209[0] = uu_tail::follow::watch::WatcherRx::unwatch(a1, v50, v51);
                    v209[1] = v52;
                    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v209);
                    if ( *(_QWORD *)a1 == 3LL )
                    {
                      v151 = &off_1899A0;
LABEL_310:
                      core::option::unwrap_failed(v151);
                    }
                    <std::path::PathBuf as core::ops::deref::Deref>::deref(v41);
                    updated = uu_tail::follow::watch::WatcherRx::watch_with_parent(a1);
                    if ( updated )
                      goto LABEL_289;
                  }
                }
                goto LABEL_238;
              }
LABEL_37:
              v10 = *(_BYTE *)(a1 + 142);
              if ( (v10 & 1) == 0 )
              {
                if ( v10 == 2 || (*(_BYTE *)(a1 + 140) & 1) == 0 )
                {
                  if ( (*(_BYTE *)(a1 + 141) & 1) != 0 )
                    <notify::event::EventKind as core::cmp::PartialEq>::eq(v143, &unk_2B884);
                  goto LABEL_238;
                }
                if ( *(_QWORD *)a1 != 3LL )
                {
                  if ( !*(_QWORD *)(v8 + 8) || *(__int64 *)(v8 + 16) < 0 )
                    goto LABEL_284;
                  (*(void (__fastcall **)(_OWORD *, _QWORD))(*(_QWORD *)(a1 + 24) + 32LL))(v287, *(_QWORD *)(a1 + 16));
                  if ( *(_QWORD *)&v287[0] != 6LL )
                  {
                    *(_QWORD *)&v210[3] = *(_QWORD *)&v287[3];
                    v210[2] = v287[2];
                    v210[1] = v287[1];
                    v210[0] = v287[0];
                    v81 = uu_tail::follow::watch::WatcherRx::unwatch::{{closure}}((__int64)v210);
                    if ( v81 )
                    {
                      v82 = v80;
                      if ( *v80 )
                        (*v80)(v81);
                      v83 = v82[1];
                      if ( v83 )
                        _rust_dealloc(v81, v83, v82[2]);
                    }
                  }
                  v84 = *(_QWORD *)(v8 + 8);
                  if ( !v84 )
                    goto LABEL_284;
                  v85 = *(_QWORD *)(v8 + 16);
                  if ( v85 < 0 )
                    goto LABEL_284;
                  uu_tail::follow::files::FileHandling::remove(v298, v131, v84, v85);
                  core::ptr::drop_in_place<uu_tail::follow::files::PathData>(v298);
                  goto LABEL_238;
                }
                v130 = &off_1899B8;
LABEL_306:
                v144 = v130;
LABEL_307:
                core::option::unwrap_failed(v144);
              }
              if ( (*(_BYTE *)(v134 + 72) & 1) != 0 )
              {
                if ( !*(_QWORD *)(v8 + 8) || *(__int64 *)(v8 + 16) < 0 )
                  goto LABEL_284;
                v64 = uu_tail::follow::files::FileHandling::get_mut(v131);
                if ( *(_QWORD *)v64 != 2LL )
                {
                  v65 = *(_DWORD *)(v64 + 56) & 0xF000;
                  if ( v65 == 4096 || v65 == 0x2000 || v65 == 0x8000 )
                  {
                    v66 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
                    if ( *(_QWORD *)(uu_tail::follow::files::FileHandling::get(v131) + 200) )
                    {
                      v200[0] = uucore::util_name(v131, v66);
                      v200[1] = v67;
                      v198 = v200;
                      v199 = <&T as core::fmt::Display>::fmt;
                      v275[0] = &unk_1897A0;
                      v275[1] = 2LL;
                      v275[4] = 0LL;
                      v275[2] = &v198;
                      v275[3] = 1LL;
                      std::io::stdio::_eprint(v275);
                      if ( !v136 || v137 < 0 )
                        goto LABEL_284;
                      v227[0] = 0LL;
                      v227[1] = v136;
                      v227[2] = v137;
                      v228 = 1;
                      v233[0] = v227;
                      v233[1] = <os_display::Quoted as core::fmt::Display>::fmt;
                      v233[2] = &off_189A50;
                      v233[3] = <&T as core::fmt::Display>::fmt;
                      v233[4] = &off_189A00;
                      v233[5] = <&T as core::fmt::Display>::fmt;
                      v276[0] = &unk_189A10;
                      v276[1] = 4LL;
                      v276[4] = 0LL;
                      v276[2] = v233;
                      v276[3] = 3LL;
                      std::io::stdio::_eprint(v276);
                    }
                  }
                }
                v68 = *(_QWORD *)(v8 + 8);
                if ( !v68 )
                  goto LABEL_284;
                v69 = *(_QWORD *)(v8 + 16);
                if ( v69 < 0 )
                  goto LABEL_284;
                v70 = std::path::Path::parent(v68, v69);
                if ( !v70 || (v69 = v71, !(unsigned __int8)std::path::Path::is_dir(v70, v71)) )
                {
                  v72 = v153;
                  v73 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v153);
                  v75 = 24 * v74;
                  while ( v75 && v73 )
                  {
                    v72 = v73;
                    v69 = v8;
                    v76 = <std::path::PathBuf as core::cmp::PartialEq>::eq(v73, v8);
                    v73 += 24LL;
                    v75 -= 24LL;
                    if ( v76 )
                      goto LABEL_201;
                  }
                  v202[0] = uucore::util_name(v72, v69);
                  v202[1] = v95;
                  v201[0] = v202;
                  v201[1] = <&T as core::fmt::Display>::fmt;
                  v277[0] = &unk_1897A0;
                  v277[1] = 2LL;
                  v277[4] = 0LL;
                  v277[2] = v201;
                  v277[3] = 1LL;
                  std::io::stdio::_eprint(v277);
                  v282[0] = &off_189A60;
                  v282[1] = 1LL;
                  v282[2] = 8LL;
                  v283 = 0LL;
                  std::io::stdio::_eprint(v282);
                  v204[0] = uucore::util_name(v282, v69);
                  v204[1] = v96;
                  v203[0] = v204;
                  v203[1] = <&T as core::fmt::Display>::fmt;
                  v278[0] = &unk_1897A0;
                  v278[1] = 2LL;
                  v278[4] = 0LL;
                  v278[2] = v203;
                  v278[3] = 1LL;
                  std::io::stdio::_eprint(v278);
                  v205[0] = &off_1897E0;
                  v205[1] = <&T as core::fmt::Display>::fmt;
                  v279[0] = &unk_189A70;
                  v279[1] = 2LL;
                  v279[4] = 0LL;
                  v279[2] = v205;
                  v279[3] = 1LL;
                  std::io::stdio::_eprint(v279);
                  <std::path::PathBuf as core::clone::Clone>::clone(v284, v8);
                  alloc::vec::Vec<T,A>::push(v153, v284);
                  if ( *(_QWORD *)a1 == 3LL )
                  {
                    v130 = &off_189A90;
                    goto LABEL_306;
                  }
                  v97 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
                  v206[0] = uu_tail::follow::watch::WatcherRx::unwatch(a1, v97, v98);
                  v206[1] = v99;
                  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v206);
                }
              }
              else
              {
                v53 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
                v54 = *(_QWORD *)(v53 + 8);
                v55 = *(_QWORD *)(v53 + 16);
                core::slice::raw::from_raw_parts::precondition_check(v54, 1LL, 1LL, v55);
                v208[0] = v54;
                v208[1] = v55;
                v207[0] = v208;
                v207[1] = <&T as core::fmt::Display>::fmt;
                v280[0] = &unk_1897A0;
                v280[1] = 2LL;
                v280[4] = 0LL;
                v280[2] = v207;
                v280[3] = 1LL;
                std::io::stdio::_eprint(v280);
                v229[0] = v135;
                v229[1] = <alloc::string::String as core::fmt::Display>::fmt;
                v229[2] = &off_189A00;
                v229[3] = <&T as core::fmt::Display>::fmt;
                v281[0] = &unk_1899D0;
                v281[1] = 3LL;
                v281[4] = 0LL;
                v281[2] = v229;
                v281[3] = 2LL;
                std::io::stdio::_eprint(v281);
                if ( !(unsigned __int8)uu_tail::follow::files::FileHandling::files_remaining(v131)
                  && (*(_BYTE *)(a1 + 141) & 1) != 0 )
                {
                  updated = (_OWORD *)uucore::mods::error::USimpleError::new(1LL, aNoFilesRemaini, 18LL);
                  goto LABEL_289;
                }
              }
LABEL_201:
              v100 = *(_QWORD *)(v8 + 8);
              if ( !v100 || *(__int64 *)(v8 + 16) < 0 )
                goto LABEL_284;
              uu_tail::follow::files::FileHandling::reset_reader(v131, v100);
              goto LABEL_238;
            }
            break;
          default:
            goto LABEL_238;
        }
LABEL_124:
        if ( !*(_QWORD *)(v8 + 8) || *(__int64 *)(v8 + 16) < 0 )
          goto LABEL_284;
        std::sys::pal::unix::fs::stat(v210);
        if ( *(_QWORD *)&v210[0] == 2LL )
        {
          v286[0] = __PAIR128__(*((unsigned __int64 *)&v210[0] + 1), 2LL);
LABEL_236:
          std::io::error::repr_bitpacked::decode_repr(v210, *((_QWORD *)&v286[0] + 1));
          if ( LOBYTE(v210[0]) >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)v210 + 8);
          goto LABEL_238;
        }
        memcpy(v286, v210, sizeof(v286));
        if ( *(_QWORD *)&v286[0] == 2LL )
          goto LABEL_236;
        memcpy(v294, v286, sizeof(v294));
        v56 = v294[7] & 0xF000;
        v57 = 1;
        if ( v56 != 4096 && v56 != 0x2000 )
          v57 = v56 == 0x8000;
        if ( !*(_QWORD *)(v8 + 8) || *(__int64 *)(v8 + 16) < 0 )
LABEL_284:
          core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
        v58 = uu_tail::follow::files::FileHandling::get(v131);
        v59 = v58;
        if ( *(_QWORD *)v58 != 2LL )
        {
          v77 = *(_WORD *)(v58 + 56) & 0xF000;
          if ( !v57 )
          {
            if ( v77 != 4096 && v77 != 0x2000 && v77 != 0x8000 )
              goto LABEL_225;
            if ( *(_QWORD *)(v59 + 200) )
            {
              v94 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
              uu_tail::follow::files::FileHandling::reset_reader(v131, v94);
              goto LABEL_225;
            }
            v187[0] = ((__int64 (*)(void))uucore::util_name)();
            v187[1] = v102;
            v186[0] = v187;
            v186[1] = <&T as core::fmt::Display>::fmt;
            v269[0] = &unk_1897A0;
            v269[1] = 2LL;
            v269[4] = 0LL;
            v269[2] = v186;
            v269[3] = 1LL;
            std::io::stdio::_eprint(v269);
            if ( !v136 || v137 < 0 )
              goto LABEL_284;
            v219[0] = 0LL;
            v219[1] = v136;
            v219[2] = v137;
            v220 = 1;
            v188[0] = v219;
            v188[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            v291 = &unk_189880;
            v103 = &v291;
            v104 = v188;
LABEL_213:
            v103[1] = &dword_0 + 2;
            v103[4] = 0LL;
            v103[2] = v104;
            v103[3] = &dword_0 + 1;
            std::io::stdio::_eprint(v103);
            goto LABEL_225;
          }
          if ( v77 == 4096 || v77 == 0x2000 || v77 == 0x8000 )
          {
            if ( *(_QWORD *)(v59 + 200) )
            {
              if ( (unsigned __int8)<notify::event::EventKind as core::cmp::PartialEq>::eq(v143, &unk_2B7D0)
                || (*(_BYTE *)(a1 + 141) & 1) != 0 && *(_QWORD *)(v59 + 40) != v294[5] )
              {
                v181[0] = ((__int64 (*)(void))uucore::util_name)();
                v181[1] = v78;
                v180[0] = v181;
                v180[1] = <&T as core::fmt::Display>::fmt;
                v265[0] = &unk_1897A0;
                v265[1] = 2LL;
                v265[4] = 0LL;
                v265[2] = v180;
                v265[3] = 1LL;
                std::io::stdio::_eprint(v265);
                if ( !v136 || v137 < 0 )
                  goto LABEL_284;
                v217[0] = 0LL;
                v217[1] = v136;
                v217[2] = v137;
                v218 = 1;
                v182[0] = v217;
                v182[1] = <os_display::Quoted as core::fmt::Display>::fmt;
                v266[0] = &unk_1898E0;
                v266[1] = 2LL;
                v266[4] = 0LL;
                v266[2] = v182;
                v266[3] = 1LL;
                std::io::stdio::_eprint(v266);
                <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
                v79 = uu_tail::follow::files::FileHandling::update_reader(v131);
              }
              else
              {
                <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(&v160, v59, v294);
                updated = v160;
                if ( v160 )
                {
                  if ( *(_QWORD *)&v286[0] == 2LL )
                    goto LABEL_287;
                  goto LABEL_289;
                }
                if ( (v161 & 1) == 0 )
                  goto LABEL_223;
                v184[0] = ((__int64 (*)(void))uucore::util_name)();
                v184[1] = v107;
                v183[0] = v184;
                v183[1] = <&T as core::fmt::Display>::fmt;
                v267[0] = &unk_1897A0;
                v267[1] = 2LL;
                v267[4] = 0LL;
                v267[2] = v183;
                v267[3] = 1LL;
                std::io::stdio::_eprint(v267);
                v185[0] = v135;
                v185[1] = <alloc::string::String as core::fmt::Display>::fmt;
                v268[0] = &unk_1898C0;
                v268[1] = 2LL;
                v268[4] = 0LL;
                v268[2] = v185;
                v268[3] = 1LL;
                std::io::stdio::_eprint(v268);
                <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
                v79 = uu_tail::follow::files::FileHandling::update_reader(v131);
              }
            }
            else
            {
              v178[0] = ((__int64 (*)(void))uucore::util_name)();
              v178[1] = v101;
              v177[0] = v178;
              v177[1] = <&T as core::fmt::Display>::fmt;
              v263[0] = &unk_1897A0;
              v263[1] = 2LL;
              v263[4] = 0LL;
              v263[2] = v177;
              v263[3] = 1LL;
              std::io::stdio::_eprint(v263);
              if ( !v136 || v137 < 0 )
                goto LABEL_284;
              v215[0] = 0LL;
              v215[1] = v136;
              v215[2] = v137;
              v216 = 1;
              v179[0] = v215;
              v179[1] = <os_display::Quoted as core::fmt::Display>::fmt;
              v264[0] = &unk_189900;
              v264[1] = 2LL;
              v264[4] = 0LL;
              v264[2] = v179;
              v264[3] = 1LL;
              std::io::stdio::_eprint(v264);
              <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
              v79 = uu_tail::follow::files::FileHandling::update_reader(v131);
            }
          }
          else
          {
            v175[0] = ((__int64 (*)(void))uucore::util_name)();
            v175[1] = v106;
            v174[0] = v175;
            v174[1] = <&T as core::fmt::Display>::fmt;
            v261[0] = &unk_1897A0;
            v261[1] = 2LL;
            v261[4] = 0LL;
            v261[2] = v174;
            v261[3] = 1LL;
            std::io::stdio::_eprint(v261);
            if ( !v136 || v137 < 0 )
              goto LABEL_284;
            v213[0] = 0LL;
            v213[1] = v136;
            v213[2] = v137;
            v214 = 1;
            v176[0] = v213;
            v176[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            v262[0] = &unk_1898A0;
            v262[1] = 2LL;
            v262[4] = 0LL;
            v262[2] = v176;
            v262[3] = 1LL;
            std::io::stdio::_eprint(v262);
            <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
            v79 = uu_tail::follow::files::FileHandling::update_reader(v131);
          }
          updated = (_OWORD *)v79;
          if ( v79 )
            goto LABEL_286;
LABEL_223:
          v63 = v290;
          <std::path::PathBuf as core::clone::Clone>::clone(v290, v8);
          goto LABEL_224;
        }
        if ( v57 )
        {
          v60 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v61 = *(_QWORD *)(v60 + 8);
          v62 = *(_QWORD *)(v60 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v61, 1LL, 1LL, v62);
          v190[0] = v61;
          v190[1] = v62;
          v189[0] = v190;
          v189[1] = <&T as core::fmt::Display>::fmt;
          v270[0] = &unk_1897A0;
          v270[1] = 2LL;
          v270[4] = 0LL;
          v270[2] = v189;
          v270[3] = 1LL;
          std::io::stdio::_eprint(v270);
          if ( !v136 )
            goto LABEL_284;
          if ( v137 < 0 )
            goto LABEL_284;
          v221[0] = 0LL;
          v221[1] = v136;
          v221[2] = v137;
          v222 = 1;
          v191[0] = v221;
          v191[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v271[0] = &unk_189900;
          v271[1] = 2LL;
          v271[4] = 0LL;
          v271[2] = v191;
          v271[3] = 1LL;
          std::io::stdio::_eprint(v271);
          if ( !*(_QWORD *)(v8 + 8) || *(__int64 *)(v8 + 16) < 0 )
            goto LABEL_284;
          updated = (_OWORD *)uu_tail::follow::files::FileHandling::update_reader(v131);
          if ( updated )
            goto LABEL_286;
          v63 = v292;
          <std::path::PathBuf as core::clone::Clone>::clone(v292, v8);
LABEL_224:
          alloc::vec::Vec<T,A>::push(&v148, v63);
LABEL_225:
          if ( !*(_QWORD *)(v8 + 8) || *(__int64 *)(v8 + 16) < 0 )
            goto LABEL_284;
          v108 = v294[0];
          if ( v294[0] == 2LL )
          {
            std::sys::pal::unix::fs::stat(v210);
            v109 = *((_QWORD *)&v210[0] + 1);
            v108 = *(_QWORD *)&v210[0];
            if ( *(_QWORD *)&v210[0] == 2LL )
            {
              std::io::error::repr_bitpacked::decode_repr(v210, *((_QWORD *)&v210[0] + 1));
              if ( LOBYTE(v210[0]) >= 3u )
                core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)v210 + 8);
              v108 = 2LL;
LABEL_235:
              v111 = (__int64 *)uu_tail::follow::files::FileHandling::get_mut(v131);
              *v111 = v108;
              v111[1] = v109;
              memcpy(v111 + 2, v287, 0xA0uLL);
              if ( *(_QWORD *)&v286[0] == 2LL )
                goto LABEL_236;
              goto LABEL_238;
            }
            v110 = &v210[1];
          }
          else
          {
            v109 = v294[1];
            v110 = &v294[2];
          }
          memcpy(v287, v110, sizeof(v287));
          goto LABEL_235;
        }
        if ( (*(_BYTE *)(v134 + 72) & 1) == 0 )
          goto LABEL_225;
        v86 = *(_BYTE *)(a1 + 142);
        if ( v86 == 2 || (v86 & 1) != 0 )
        {
          v196[0] = ((__int64 (*)(void))uucore::util_name)();
          v196[1] = v105;
          v195[0] = v196;
          v195[1] = <&T as core::fmt::Display>::fmt;
          v274[0] = &unk_1897A0;
          v274[1] = 2LL;
          v274[4] = 0LL;
          v274[2] = v195;
          v274[3] = 1LL;
          std::io::stdio::_eprint(v274);
          if ( !v136 || v137 < 0 )
            goto LABEL_284;
          v225[0] = 0LL;
          v225[1] = v136;
          v225[2] = v137;
          v226 = 1;
          v197[0] = v225;
          v197[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v293 = &unk_189880;
          v103 = &v293;
          v104 = v197;
          goto LABEL_213;
        }
        v193[0] = ((__int64 (*)(void))uucore::util_name)();
        v193[1] = v87;
        v192[0] = v193;
        v192[1] = <&T as core::fmt::Display>::fmt;
        v272[0] = &unk_1897A0;
        v272[1] = 2LL;
        v272[4] = 0LL;
        v272[2] = v192;
        v272[3] = 1LL;
        std::io::stdio::_eprint(v272);
        if ( !v136 || v137 < 0 )
          goto LABEL_284;
        v223[0] = 0LL;
        v223[1] = v136;
        v223[2] = v137;
        v224 = 1;
        v194[0] = v223;
        v194[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v273[0] = &unk_189920;
        v273[1] = 2LL;
        v273[4] = 0LL;
        v273[2] = v194;
        v273[3] = 1LL;
        std::io::stdio::_eprint(v273);
        if ( *(_QWORD *)a1 == 3LL )
          core::option::unwrap_failed(&off_189940);
        v88 = *(_QWORD *)(a1 + 16);
        v89 = *(_QWORD *)(a1 + 24);
        v90 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(v89 + 32))(v289, v88, v90, v91);
        if ( v289[0] != 6LL )
          core::ptr::drop_in_place<notify::error::Error>(v289);
        v92 = <std::path::PathBuf as core::ops::deref::Deref>::deref(v8);
        uu_tail::follow::files::FileHandling::remove(v297, v131, v92, v93);
        core::ptr::drop_in_place<uu_tail::follow::files::PathData>(v297);
        if ( *(_QWORD *)(a1 + 104)
          && ((unsigned __int8)uu_tail::follow::files::FileHandling::files_remaining(v131)
           || (*(_BYTE *)(v134 + 72) & 1) != 0) )
        {
          goto LABEL_225;
        }
        updated = (_OWORD *)uucore::mods::error::USimpleError::new(1LL, aNoFilesRemaini, 18LL);
LABEL_286:
        if ( *(_QWORD *)&v286[0] == 2LL )
        {
LABEL_287:
          std::io::error::repr_bitpacked::decode_repr(v210, *((_QWORD *)&v286[0] + 1));
          if ( LOBYTE(v210[0]) >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)v210 + 8);
        }
LABEL_289:
        alloc::raw_vec::RawVec<T,A>::current_memory(v210, v135);
        if ( *((_QWORD *)&v210[0] + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v137,
            *(_QWORD *)&v210[0],
            *((_QWORD *)&v210[0] + 1),
            *(_QWORD *)&v210[1]);
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v148);
LABEL_292:
        v127 = 0;
        core::ptr::drop_in_place<notify::event::Event>(&v141);
        v11 = 1;
LABEL_265:
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v138);
        if ( (*(_QWORD *)v146 & 0xFFFFFFFFFFFFFFFELL) != 6 )
        {
          if ( !v127 )
          {
            if ( *(_QWORD *)v146 == 1LL )
            {
              std::io::error::repr_bitpacked::decode_repr(dest, *(_QWORD *)&v146[8]);
              if ( LOBYTE(dest[0]) >= 3u )
                core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)dest + 8);
            }
            else if ( !*(_QWORD *)v146 )
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(dest, &v146[8]);
              if ( *((_QWORD *)&dest[0] + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                  &v146[24],
                  *(_QWORD *)&dest[0],
                  *((_QWORD *)&dest[0] + 1),
                  *(_QWORD *)&dest[1]);
            }
          }
          if ( v11 )
            core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v146[32]);
        }
LABEL_275:
        core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(a1);
        return updated;
      case 7LL:
        if ( (v146[8] & 1) != 0 )
        {
          v133 = v146[8] & 1;
          v172[0] = &v133;
          v172[1] = <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt;
          v260[0] = &off_189B20;
          v260[1] = 1LL;
          v260[4] = 0LL;
          v260[2] = v172;
          v260[3] = 1LL;
          alloc::fmt::format(&v258, v260);
          v249 = v259;
          v248 = v258;
          v129 = uucore::mods::error::USimpleError::new(1LL, &v248);
LABEL_280:
          updated = (_OWORD *)v129;
          v127 = 0;
          v11 = 1;
          goto LABEL_265;
        }
        v140 = (unsigned int)(v140 + 1);
        if ( !(_DWORD)v140 )
          core::panicking::panic_const::panic_const_add_overflow(&off_189B08);
        v11 = 1;
        goto LABEL_243;
      default:
LABEL_277:
        v245 = v147;
        v244[2] = *(_OWORD *)&v146[32];
        v244[1] = *(_OWORD *)&v146[16];
        v244[0] = *(_OWORD *)v146;
        v171[0] = v244;
        v171[1] = <notify::error::Error as core::fmt::Display>::fmt;
        v257[0] = &off_189AF8;
        v257[1] = 1LL;
        v257[4] = 0LL;
        v257[2] = v171;
        v257[3] = 1LL;
        alloc::fmt::format(&v255, v257);
        v247 = v256;
        v246 = v255;
        updated = (_OWORD *)uucore::mods::error::USimpleError::new(1LL, &v246);
        v127 = 1;
        core::ptr::drop_in_place<notify::error::Error>(v244);
        v11 = 0;
        goto LABEL_265;
    }
  }
}
