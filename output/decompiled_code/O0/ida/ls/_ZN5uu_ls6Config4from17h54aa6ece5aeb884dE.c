void *__fastcall uu_ls::Config::from(void *a1, __int64 a2)
{
  int v2; // ebp
  char flag; // r12
  const char *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // r14
  int v9; // ecx
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // rax
  bool v13; // cf
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // dl
  char v19; // al
  __int64 v20; // r14
  __int64 (__fastcall *v21)(_QWORD); // r13
  char **v22; // r15
  const char *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r12
  _WORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r14
  char v32; // r15
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r14
  unsigned __int8 v36; // bl
  unsigned __int64 v37; // r13
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  char v48; // bp
  char v49; // al
  const void *v50; // r14
  size_t v51; // rbx
  const void *v52; // rax
  size_t v53; // rdx
  __int64 v54; // rdx
  unsigned int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // ecx
  __int64 v61; // r15
  void *v62; // r12
  __int64 v63; // rax
  unsigned int v64; // eax
  __int64 (__fastcall *v65)(); // r14
  __m256i *v66; // r15
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // r14
  _BYTE *v72; // rax
  char v73; // al
  unsigned int v74; // ecx
  int v75; // eax
  __int64 v76; // rdi
  __int64 v77; // rsi
  unsigned int matched; // eax
  unsigned int v79; // eax
  unsigned int v80; // ecx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rcx
  char v84; // al
  int v85; // ecx
  unsigned int v86; // eax
  __int64 v87; // rcx
  char v88; // al
  unsigned int v89; // ecx
  int v90; // ebx
  bool v91; // zf
  int v92; // ecx
  __int64 v93; // r15
  __int64 v94; // rbx
  _QWORD *v95; // r14
  __int64 v96; // rbx
  _QWORD *v97; // r14
  __int64 v98; // rbx
  __int64 v99; // r14
  __int64 v100; // rbx
  __int64 v101; // r14
  __int64 v102; // rbx
  void *v103; // r14
  __int64 v104; // rbx
  const char *v105; // rsi
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // r12
  __int64 v108; // rax
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // r15
  unsigned __int16 *v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rdx
  int v114; // edx
  char **v115; // rdi
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  _QWORD *v118; // rcx
  __int64 v119; // r12
  __int64 v120; // r14
  const void *v121; // r12
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rcx
  __int128 v125; // xmm0
  __int128 v126; // xmm1
  __int128 v127; // xmm2
  __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int128 v131; // xmm0
  __int128 v132; // xmm1
  __int128 v133; // xmm2
  __m256i *v134; // rax
  __int64 v135; // r15
  __int64 v136; // rax
  __int64 v137; // rcx
  __int128 v138; // xmm0
  __int128 v139; // xmm1
  __int128 v140; // xmm2
  __int64 v141; // rax
  __int64 v142; // rbp
  __int64 v143; // r14
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // r14
  __m256i *v147; // rax
  __int64 v148; // r15
  __int64 v149; // rax
  __int64 v150; // rcx
  __int128 v151; // xmm0
  __int128 v152; // xmm1
  __int128 v153; // xmm2
  __int64 v154; // rax
  __int64 v155; // rbp
  __int64 v156; // r14
  __int64 v157; // rax
  __int64 v158; // rcx
  __int64 v159; // r14
  __int64 v160; // rax
  unsigned __int64 v161; // rdx
  unsigned __int64 v162; // rbx
  unsigned __int64 v163; // rdx
  int v164; // r14d
  __int64 v165; // rax
  unsigned __int64 v166; // rdx
  unsigned __int64 v167; // rbx
  unsigned __int64 v168; // rdx
  bool v169; // r15
  __int64 v170; // rax
  unsigned __int64 v171; // rdx
  unsigned __int64 v172; // rbx
  unsigned __int64 v173; // rdx
  int v174; // ecx
  __int64 v175; // rax
  unsigned __int64 v176; // rdx
  unsigned __int64 v177; // rbx
  __int64 v178; // rax
  unsigned __int64 v179; // rdx
  char v180; // r15
  int v181; // ebp
  int v182; // r12d
  __int64 v183; // rax
  __int128 v184; // xmm0
  __int128 v185; // xmm1
  _QWORD *v186; // rcx
  __int64 v187; // rdx
  char is_dired_arg_present; // al
  int v189; // ecx
  char v190; // r15
  char v191; // al
  char v192; // r13
  char v193; // r12
  char v194; // r13
  char v195; // bp
  int v196; // ebx
  _QWORD *v197; // r15
  void *result; // rax
  __int64 v199; // rax
  __int128 v200; // xmm0
  __int128 v201; // xmm1
  _QWORD *v202; // rcx
  char **v203; // rsi
  char **v204; // rsi
  __int64 v205; // rax
  __int64 v206; // rcx
  char ***v207; // rdi
  _BYTE v209[56]; // [rsp+10h] [rbp-F08h] BYREF
  __int128 v210; // [rsp+48h] [rbp-ED0h]
  __int128 v211; // [rsp+60h] [rbp-EB8h] BYREF
  __int64 v212; // [rsp+70h] [rbp-EA8h] BYREF
  unsigned int v213; // [rsp+7Ch] [rbp-E9Ch]
  __m256i v214; // [rsp+80h] [rbp-E98h] BYREF
  char ***v215; // [rsp+A8h] [rbp-E70h]
  int v216; // [rsp+B4h] [rbp-E64h]
  int v217; // [rsp+B8h] [rbp-E60h]
  unsigned int v218; // [rsp+BCh] [rbp-E5Ch]
  int v219; // [rsp+C0h] [rbp-E58h]
  int v220; // [rsp+C4h] [rbp-E54h]
  int v221; // [rsp+C8h] [rbp-E50h]
  unsigned int v222; // [rsp+CCh] [rbp-E4Ch]
  char v223; // [rsp+D2h] [rbp-E46h]
  unsigned __int8 v224; // [rsp+D3h] [rbp-E45h]
  unsigned __int8 v225; // [rsp+D4h] [rbp-E44h]
  unsigned __int8 v226; // [rsp+D5h] [rbp-E43h]
  char v227; // [rsp+D6h] [rbp-E42h]
  char v228; // [rsp+D7h] [rbp-E41h]
  char **v229; // [rsp+D8h] [rbp-E40h] BYREF
  __int64 (__fastcall *v230)(); // [rsp+E0h] [rbp-E38h]
  __m256i *v231; // [rsp+E8h] [rbp-E30h]
  __int64 (__fastcall *v232)(); // [rsp+F0h] [rbp-E28h]
  __int64 v233; // [rsp+F8h] [rbp-E20h]
  __int64 v234; // [rsp+108h] [rbp-E10h]
  int v235; // [rsp+114h] [rbp-E04h]
  int v236; // [rsp+118h] [rbp-E00h]
  int v237; // [rsp+11Ch] [rbp-DFCh]
  __m256i v238; // [rsp+120h] [rbp-DF8h] BYREF
  __int128 v239; // [rsp+140h] [rbp-DD8h]
  __int128 v240; // [rsp+150h] [rbp-DC8h]
  __int128 v241; // [rsp+168h] [rbp-DB0h] BYREF
  __int64 v242; // [rsp+178h] [rbp-DA0h]
  unsigned int v243; // [rsp+184h] [rbp-D94h]
  __int128 v244; // [rsp+188h] [rbp-D90h] BYREF
  __int64 v245; // [rsp+198h] [rbp-D80h]
  __int128 v246; // [rsp+1A0h] [rbp-D78h] BYREF
  _QWORD v247[2]; // [rsp+1B0h] [rbp-D68h] BYREF
  _BYTE v248[24]; // [rsp+1C0h] [rbp-D58h] BYREF
  int v249; // [rsp+1D8h] [rbp-D40h]
  int v250; // [rsp+1DCh] [rbp-D3Ch]
  __int64 v251; // [rsp+1E0h] [rbp-D38h]
  __m256i *v252; // [rsp+1E8h] [rbp-D30h]
  void *v253; // [rsp+1F0h] [rbp-D28h]
  int v254; // [rsp+1FCh] [rbp-D1Ch]
  __int128 v255; // [rsp+200h] [rbp-D18h] BYREF
  _QWORD v256[2]; // [rsp+210h] [rbp-D08h] BYREF
  __int128 v257; // [rsp+220h] [rbp-CF8h] BYREF
  __int64 v258; // [rsp+230h] [rbp-CE8h] BYREF
  __int128 v259; // [rsp+238h] [rbp-CE0h] BYREF
  __int64 v260; // [rsp+248h] [rbp-CD0h] BYREF
  __int128 v261; // [rsp+250h] [rbp-CC8h] BYREF
  __int64 v262; // [rsp+260h] [rbp-CB8h] BYREF
  int v263; // [rsp+26Ch] [rbp-CACh]
  int v264; // [rsp+270h] [rbp-CA8h]
  int v265; // [rsp+274h] [rbp-CA4h]
  int v266; // [rsp+278h] [rbp-CA0h]
  int v267; // [rsp+27Ch] [rbp-C9Ch]
  __m256i v268; // [rsp+280h] [rbp-C98h] BYREF
  __int64 v269; // [rsp+2A0h] [rbp-C78h] BYREF
  __int64 (__fastcall *v270)(); // [rsp+2A8h] [rbp-C70h]
  __m256i *v271; // [rsp+2B0h] [rbp-C68h] BYREF
  __int128 v272; // [rsp+2B8h] [rbp-C60h] BYREF
  void *v273; // [rsp+2C8h] [rbp-C50h] BYREF
  unsigned __int64 v274; // [rsp+2D0h] [rbp-C48h] BYREF
  _QWORD v275[3]; // [rsp+2D8h] [rbp-C40h] BYREF
  __int128 v276; // [rsp+2F0h] [rbp-C28h] BYREF
  __int64 v277; // [rsp+300h] [rbp-C18h]
  _BYTE v278[7]; // [rsp+309h] [rbp-C0Fh]
  __int128 v279; // [rsp+310h] [rbp-C08h] BYREF
  __int64 v280; // [rsp+320h] [rbp-BF8h]
  __int128 v281; // [rsp+330h] [rbp-BE8h]
  __int64 v282; // [rsp+340h] [rbp-BD8h]
  __int128 v283; // [rsp+348h] [rbp-BD0h]
  __int64 v284; // [rsp+358h] [rbp-BC0h]
  __int128 v285; // [rsp+360h] [rbp-BB8h]
  __int64 v286; // [rsp+370h] [rbp-BA8h]
  __int128 v287; // [rsp+378h] [rbp-BA0h]
  __int64 v288; // [rsp+388h] [rbp-B90h]
  __int128 v289; // [rsp+390h] [rbp-B88h] BYREF
  __int64 v290; // [rsp+3A0h] [rbp-B78h]
  __int128 v291; // [rsp+3B0h] [rbp-B68h]
  __int64 v292; // [rsp+3C0h] [rbp-B58h]
  __int128 v293; // [rsp+3D0h] [rbp-B48h]
  void *v294; // [rsp+3E0h] [rbp-B38h]
  _QWORD v295[2]; // [rsp+3E8h] [rbp-B30h] BYREF
  _QWORD v296[2]; // [rsp+3F8h] [rbp-B20h] BYREF
  _QWORD v297[2]; // [rsp+408h] [rbp-B10h] BYREF
  _QWORD v298[2]; // [rsp+418h] [rbp-B00h] BYREF
  _QWORD v299[2]; // [rsp+428h] [rbp-AF0h] BYREF
  _QWORD v300[2]; // [rsp+438h] [rbp-AE0h] BYREF
  _QWORD v301[2]; // [rsp+448h] [rbp-AD0h] BYREF
  _QWORD v302[2]; // [rsp+458h] [rbp-AC0h] BYREF
  __int128 v303; // [rsp+468h] [rbp-AB0h] BYREF
  __int64 v304; // [rsp+478h] [rbp-AA0h]
  __m256i v305; // [rsp+480h] [rbp-A98h]
  __int128 v306; // [rsp+4A0h] [rbp-A78h]
  __int64 v307; // [rsp+4B0h] [rbp-A68h]
  __m256i v308; // [rsp+4C0h] [rbp-A58h]
  __int128 v309; // [rsp+4E0h] [rbp-A38h]
  __int64 v310; // [rsp+4F0h] [rbp-A28h]
  __int128 v311; // [rsp+500h] [rbp-A18h]
  __int128 v312; // [rsp+510h] [rbp-A08h]
  __int128 v313; // [rsp+520h] [rbp-9F8h]
  __int64 v314; // [rsp+530h] [rbp-9E8h]
  __int128 v315; // [rsp+540h] [rbp-9D8h]
  __int128 v316; // [rsp+550h] [rbp-9C8h]
  __int128 v317; // [rsp+560h] [rbp-9B8h]
  __int64 v318; // [rsp+570h] [rbp-9A8h]
  _QWORD v319[8]; // [rsp+578h] [rbp-9A0h] BYREF
  _QWORD v320[3]; // [rsp+5B8h] [rbp-960h] BYREF
  char v321; // [rsp+5D0h] [rbp-948h]
  _QWORD v322[3]; // [rsp+5D8h] [rbp-940h] BYREF
  char v323; // [rsp+5F0h] [rbp-928h]
  _QWORD v324[5]; // [rsp+5F8h] [rbp-920h] BYREF
  __m256i v325; // [rsp+620h] [rbp-8F8h]
  __int128 v326; // [rsp+640h] [rbp-8D8h]
  __int64 v327; // [rsp+650h] [rbp-8C8h]
  __m256i v328; // [rsp+658h] [rbp-8C0h] BYREF
  __int128 v329; // [rsp+678h] [rbp-8A0h]
  __int64 v330; // [rsp+688h] [rbp-890h]
  __m256i v331; // [rsp+690h] [rbp-888h] BYREF
  __int128 v332; // [rsp+6B0h] [rbp-868h]
  __int64 v333; // [rsp+6C0h] [rbp-858h]
  _QWORD v334[7]; // [rsp+6C8h] [rbp-850h] BYREF
  _QWORD v335[11]; // [rsp+700h] [rbp-818h] BYREF
  _QWORD v336[21]; // [rsp+758h] [rbp-7C0h] BYREF
  __int128 v337; // [rsp+800h] [rbp-718h] BYREF
  __int64 v338; // [rsp+810h] [rbp-708h]
  __int128 v339; // [rsp+820h] [rbp-6F8h] BYREF
  __int64 v340; // [rsp+830h] [rbp-6E8h]
  __int128 v341; // [rsp+838h] [rbp-6E0h] BYREF
  __int64 v342; // [rsp+848h] [rbp-6D0h]
  _QWORD v343[6]; // [rsp+850h] [rbp-6C8h] BYREF
  _QWORD v344[6]; // [rsp+880h] [rbp-698h] BYREF
  _QWORD v345[6]; // [rsp+8B0h] [rbp-668h] BYREF
  _QWORD v346[6]; // [rsp+8E0h] [rbp-638h] BYREF
  _OWORD v347[3]; // [rsp+910h] [rbp-608h] BYREF
  __int64 v348; // [rsp+940h] [rbp-5D8h]
  _OWORD v349[3]; // [rsp+948h] [rbp-5D0h] BYREF
  __int64 v350; // [rsp+978h] [rbp-5A0h]
  __int128 v351; // [rsp+980h] [rbp-598h]
  __int128 v352; // [rsp+990h] [rbp-588h]
  __int128 v353; // [rsp+9A0h] [rbp-578h]
  __int64 v354; // [rsp+9B0h] [rbp-568h]
  __int64 v355; // [rsp+9B8h] [rbp-560h]
  _BYTE v356[64]; // [rsp+9C0h] [rbp-558h] BYREF
  __int64 v357; // [rsp+A00h] [rbp-518h] BYREF
  __int128 v358; // [rsp+A08h] [rbp-510h]
  __int128 v359; // [rsp+A18h] [rbp-500h]
  __int128 v360; // [rsp+A28h] [rbp-4F0h]
  __int64 v361; // [rsp+A38h] [rbp-4E0h]
  __int64 v362[8]; // [rsp+A40h] [rbp-4D8h] BYREF
  __int64 v363; // [rsp+A80h] [rbp-498h]
  _BYTE v364[64]; // [rsp+A88h] [rbp-490h] BYREF
  __int64 v365; // [rsp+AC8h] [rbp-450h] BYREF
  __int128 v366; // [rsp+AD0h] [rbp-448h]
  __int128 v367; // [rsp+AE0h] [rbp-438h]
  __int128 v368; // [rsp+AF0h] [rbp-428h]
  __int64 v369; // [rsp+B00h] [rbp-418h]
  __int64 v370[8]; // [rsp+B08h] [rbp-410h] BYREF
  _QWORD v371[9]; // [rsp+B48h] [rbp-3D0h] BYREF
  _QWORD v372[20]; // [rsp+B90h] [rbp-388h] BYREF
  _OWORD v373[13]; // [rsp+C30h] [rbp-2E8h] BYREF
  _BYTE v374[160]; // [rsp+D08h] [rbp-210h] BYREF
  _QWORD src[20]; // [rsp+DA8h] [rbp-170h] BYREF
  _BYTE v376[160]; // [rsp+E48h] [rbp-D0h] BYREF

  v253 = a1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_73fe86e94af803e79a7413c597bf8ca8_51_llvm_2470886751594806832,
           7LL,
           &off_1FEC98);
  v4 = anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    a2,
    anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832,
    6LL);
  *(_QWORD *)&v211 = anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832;
  *((_QWORD *)&v211 + 1) = 6LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v233 = 0LL;
    v231 = &v214;
    v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::panicking::panic_fmt(&v229, &off_1FE878);
  }
  if ( *(_QWORD *)&v209[8] )
  {
    v5 = *(_QWORD *)(*(_QWORD *)&v209[8] + 8LL);
    if ( !v5 )
      goto LABEL_517;
    v6 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL);
    if ( v6 < 0 )
      goto LABEL_517;
    switch ( v6 )
    {
      case 4LL:
        if ( *(_DWORD *)v5 != 1735290732 )
          goto LABEL_532;
        LOBYTE(v2) = 1;
        goto LABEL_22;
      case 6LL:
        v7 = 6LL;
        if ( !(*(_DWORD *)v5 ^ 0x6F726361 | *(unsigned __int16 *)(v5 + 4) ^ 0x7373) )
          goto LABEL_19;
        if ( !(*(_DWORD *)v5 ^ 0x6D6D6F63 | *(unsigned __int16 *)(v5 + 4) ^ 0x7361) )
          goto LABEL_18;
        goto LABEL_532;
      case 7LL:
        v7 = 6LL;
        if ( !(*(_DWORD *)v5 ^ 0x62726576 | *(_DWORD *)(v5 + 3) ^ 0x65736F62) )
          goto LABEL_9;
        v8 = 0;
        v2 = 0;
        if ( *(_DWORD *)v5 ^ 0x756C6F63 | *(_DWORD *)(v5 + 3) ^ 0x736E6D75 )
        {
LABEL_532:
          *(_QWORD *)v209 = &off_1FE890;
          *(_QWORD *)&v209[8] = 1LL;
          *(_QWORD *)&v209[16] = &v241;
          *(_OWORD *)&v209[24] = 0LL;
          core::panicking::panic_fmt(v209, &off_1FE8A0);
        }
        break;
      case 8LL:
        if ( *(_QWORD *)v5 != 0x6C61636974726576LL )
          goto LABEL_532;
        v7 = 6LL;
        v8 = 0;
        v2 = 0;
        break;
      case 10LL:
        if ( *(_QWORD *)v5 ^ 0x746E6F7A69726F68LL | *(unsigned __int16 *)(v5 + 8) ^ 0x6C61LL )
          goto LABEL_532;
        LOBYTE(v2) = 3;
        goto LABEL_22;
      case 13LL:
        if ( *(_QWORD *)v5 ^ 0x632D656C676E6973LL | *(_QWORD *)(v5 + 5) ^ 0x6E6D756C6F632D65LL )
          goto LABEL_532;
        LOBYTE(v2) = 2;
LABEL_22:
        v7 = 6LL;
        v8 = 0;
        break;
      default:
        goto LABEL_532;
    }
  }
  else
  {
    v7 = 4LL;
    v4 = anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851,
                            4LL,
                            &off_1FE8B8) )
    {
LABEL_9:
      LOBYTE(v2) = 1;
      v8 = 0;
    }
    else
    {
      v4 = anon_d13c0a923ac77d86b5cd3d5212361a5f_62_llvm_13257680528908953851;
      v7 = 1LL;
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              a2,
                              anon_d13c0a923ac77d86b5cd3d5212361a5f_62_llvm_13257680528908953851,
                              1LL,
                              &off_1FE8D0) )
      {
LABEL_19:
        LOBYTE(v2) = 3;
        v8 = 0;
      }
      else
      {
        v4 = anon_d13c0a923ac77d86b5cd3d5212361a5f_64_llvm_13257680528908953851;
        v7 = 1LL;
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                a2,
                                anon_d13c0a923ac77d86b5cd3d5212361a5f_64_llvm_13257680528908953851,
                                1LL,
                                &off_1FE8E8) )
        {
LABEL_18:
          LOBYTE(v2) = 4;
          v8 = 0;
        }
        else
        {
          v4 = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
          v7 = 1LL;
          v8 = 0;
          v2 = 0;
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                   a2,
                                   anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851,
                                   1LL,
                                   &off_1FE900) )
          {
            std::io::stdio::stdout();
            LOBYTE(v2) = 2 * (isatty(1) == 0);
            v8 = 1;
            v4 = 0LL;
          }
        }
      }
    }
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_56a86b1069743e99bc79dbf4ab213c19_8_llvm_18389660236208733448,
                          3LL,
                          &off_1FE918) )
  {
    v250 = 0;
  }
  else
  {
    LOBYTE(v9) = 2
               - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                   a2,
                   anon_56a86b1069743e99bc79dbf4ab213c19_9_llvm_18389660236208733448,
                   10LL,
                   &off_1FE930);
    v250 = v9;
  }
  LOBYTE(v220) = 1;
  if ( (_BYTE)v2 == 1 )
    goto LABEL_32;
  if ( v8
    || (clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(
          &v238,
          a2,
          v4,
          v7,
          &anon_11f7478bcb2f9b4befb7b1d3f51baba0_213_llvm_2775220154043362954),
        !v238.m256i_i64[0]) )
  {
    v11 = 0LL;
  }
  else
  {
    *(_QWORD *)&v209[16] = v238.m256i_i64[2];
    *(_OWORD *)v209 = *(_OWORD *)v238.m256i_i8;
    if ( !core::iter::traits::iterator::Iterator::reduce(v209) )
      core::option::unwrap_failed(&anon_11f7478bcb2f9b4befb7b1d3f51baba0_214_llvm_2775220154043362954);
  }
  v274 = v11;
  v319[0] = anon_d13c0a923ac77d86b5cd3d5212361a5f_65_llvm_13257680528908953851;
  v319[1] = 1LL;
  v319[2] = anon_d13c0a923ac77d86b5cd3d5212361a5f_66_llvm_13257680528908953851;
  v319[3] = 1LL;
  v319[4] = anon_d13c0a923ac77d86b5cd3d5212361a5f_67_llvm_13257680528908953851;
  v319[5] = 15LL;
  v319[6] = anon_73fe86e94af803e79a7413c597bf8ca8_48_llvm_2470886751594806832;
  v319[7] = 9LL;
  v371[0] = v319;
  v371[1] = v320;
  v10 = a2;
  v371[2] = a2;
  v371[3] = 0LL;
  v371[6] = 0LL;
  if ( !(unsigned __int8)core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(v371, &v274) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(
      &v303,
      a2,
      anon_d13c0a923ac77d86b5cd3d5212361a5f_59_llvm_13257680528908953851,
      1LL,
      &off_1FECB0);
    if ( (_QWORD)v303 )
    {
      v290 = v304;
      v289 = v303;
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                              a2,
                              anon_d13c0a923ac77d86b5cd3d5212361a5f_59_llvm_13257680528908953851,
                              1LL,
                              &off_1FECC8) == 2 )
      {
        while ( 1 )
        {
          v12 = (unsigned __int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v289);
          if ( !v12 )
            break;
          if ( !v290 )
            core::panicking::panic_const::panic_const_sub_overflow(&anon_21d6120f1bf3ae8083dd7bd30f6eb60d_435_llvm_13186119769495240950);
          v13 = v274 < *v12;
          --v290;
          if ( v13 )
          {
            LOBYTE(v220) = 2;
            goto LABEL_32;
          }
        }
      }
      LOBYTE(v220) = v2;
LABEL_32:
      v10 = a2;
      goto LABEL_47;
    }
    LOBYTE(v220) = v2;
  }
LABEL_47:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    v10,
    anon_73fe86e94af803e79a7413c597bf8ca8_37_llvm_2470886751594806832,
    4LL);
  *(_QWORD *)&v211 = anon_73fe86e94af803e79a7413c597bf8ca8_37_llvm_2470886751594806832;
  *((_QWORD *)&v211 + 1) = 4LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v233 = 0LL;
    v231 = &v214;
    v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::panicking::panic_fmt(&v229, &off_1FE948);
  }
  if ( *(_QWORD *)&v209[8] )
  {
    v14 = *(_QWORD *)(*(_QWORD *)&v209[8] + 8LL);
    if ( !v14 )
      goto LABEL_517;
    v15 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL);
    if ( v15 < 0 )
      goto LABEL_517;
    switch ( v15 )
    {
      case 4LL:
        switch ( *(_DWORD *)v14 )
        {
          case 0x656E6F6E:
            goto LABEL_60;
          case 0x656D616E:
            LOBYTE(v2) = 1;
            break;
          case 0x656D6974:
            LOBYTE(v2) = 3;
            break;
          default:
            LOBYTE(v2) = 2;
            if ( *(_DWORD *)v14 != 1702521203 )
            {
LABEL_531:
              *(_QWORD *)v209 = &off_1FE960;
              *(_QWORD *)&v209[8] = 1LL;
              *(_QWORD *)&v209[16] = &v241;
              *(_OWORD *)&v209[24] = 0LL;
              core::panicking::panic_fmt(v209, &off_1FE970);
            }
            break;
        }
        return result;
      case 5LL:
        LOBYTE(v2) = 6;
        if ( !(*(_DWORD *)v14 ^ 0x74646977 | *(unsigned __int8 *)(v14 + 4) ^ 0x68) )
          break;
        goto LABEL_531;
      case 7LL:
        LOBYTE(v2) = 4;
        if ( *(_DWORD *)v14 ^ 0x73726576 | *(_DWORD *)(v14 + 3) ^ 0x6E6F6973 )
          goto LABEL_531;
        break;
      case 9LL:
        LOBYTE(v2) = 5;
        if ( *(_QWORD *)v14 ^ 0x6F69736E65747865LL | *(unsigned __int8 *)(v14 + 8) ^ 0x6ELL )
          goto LABEL_531;
        break;
      default:
        goto LABEL_531;
    }
  }
  else
  {
    LOBYTE(v2) = 3;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_67430bfcc3c4a58d9404b61b13f0b7af_13_llvm_8600737904036372337,
                             1LL,
                             &off_1FE988) )
    {
      LOBYTE(v2) = 2;
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               a2,
                               anon_67430bfcc3c4a58d9404b61b13f0b7af_12_llvm_8600737904036372337,
                               1LL,
                               &off_1FE9A0) )
      {
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                a2,
                                anon_67430bfcc3c4a58d9404b61b13f0b7af_14_llvm_8600737904036372337,
                                1LL,
                                &off_1FE9B8) )
        {
LABEL_60:
          v2 = 0;
        }
        else
        {
          LOBYTE(v2) = 4;
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                   a2,
                                   anon_67430bfcc3c4a58d9404b61b13f0b7af_15_llvm_8600737904036372337,
                                   1LL,
                                   &off_1FE9D0) )
          {
            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                   a2,
                   anon_67430bfcc3c4a58d9404b61b13f0b7af_16_llvm_8600737904036372337,
                   1LL,
                   &off_1FE9E8);
            LOBYTE(v2) = (4 * v2) | 1;
          }
        }
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    a2,
    anon_73fe86e94af803e79a7413c597bf8ca8_38_llvm_2470886751594806832,
    4LL);
  *(_QWORD *)&v211 = anon_73fe86e94af803e79a7413c597bf8ca8_38_llvm_2470886751594806832;
  *((_QWORD *)&v211 + 1) = 4LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v233 = 0LL;
    v231 = &v214;
    v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::panicking::panic_fmt(&v229, &off_1FEA00);
  }
  if ( *(_QWORD *)&v209[8] )
  {
    v16 = *(_QWORD *)(*(_QWORD *)&v209[8] + 8LL);
    if ( !v16 )
      goto LABEL_517;
    v17 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL);
    if ( v17 < 0 )
      goto LABEL_517;
    switch ( v17 )
    {
      case 3LL:
        v18 = 1;
        if ( *(_WORD *)v16 ^ 0x7375 | *(unsigned __int8 *)(v16 + 2) ^ 0x65 )
          goto LABEL_83;
        break;
      case 5LL:
        if ( !(*(_DWORD *)v16 ^ 0x6D697463 | *(unsigned __int8 *)(v16 + 4) ^ 0x65) )
          goto LABEL_84;
        if ( *(_DWORD *)v16 ^ 0x6D697461 | *(unsigned __int8 *)(v16 + 4) ^ 0x65 )
        {
          v18 = 3;
          if ( *(_DWORD *)v16 ^ 0x74726962 | *(unsigned __int8 *)(v16 + 4) ^ 0x68 )
            goto LABEL_83;
        }
        else
        {
          v18 = 1;
        }
        break;
      case 6LL:
        if ( *(_DWORD *)v16 ^ 0x74617473 | *(unsigned __int16 *)(v16 + 4) ^ 0x7375 )
        {
          v18 = 1;
          if ( *(_DWORD *)v16 ^ 0x65636361 | *(unsigned __int16 *)(v16 + 4) ^ 0x7373 )
          {
LABEL_83:
            *(_QWORD *)v209 = &off_1FEA18;
            *(_QWORD *)&v209[8] = 1LL;
            *(_QWORD *)&v209[16] = &v241;
            *(_OWORD *)&v209[24] = 0LL;
            core::panicking::panic_fmt(v209, &off_1FEA28);
          }
        }
        else
        {
LABEL_84:
          v18 = 2;
        }
        return result;
      case 8LL:
        v18 = 3;
        if ( *(_QWORD *)v16 != 0x6E6F697461657263LL )
          goto LABEL_83;
        break;
      default:
        goto LABEL_83;
    }
  }
  else
  {
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            a2,
            anon_899730b44f50ab02bfd9ca63d23e76e8_64_llvm_11807341281290569930,
            1LL,
            &off_1FEA40);
    v18 = 1;
    if ( !v19 )
      v18 = 2
          * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              a2,
              anon_899730b44f50ab02bfd9ca63d23e76e8_65_llvm_11807341281290569930,
              1LL,
              &off_1FEA58);
  }
  v267 = v2;
  v227 = v18;
  v228 = flag;
  std::env::_var(&v214, anon_d9dbb84e6d65add41742ac4e81173603_5_llvm_417571283676185119, 4LL);
  v20 = v214.m256i_i64[0];
  v21 = core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>;
  v252 = &v214;
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v214);
  std::env::_var(&v229, aColorterm, 9LL);
  v22 = v229;
  v215 = &v229;
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v229);
  std::env::_var(&v238, anon_d9dbb84e6d65add41742ac4e81173603_5_llvm_417571283676185119, 4LL);
  if ( v238.m256i_i64[0] )
  {
    *(_QWORD *)v248 = 0LL;
    *(_QWORD *)&v248[8] = 1LL;
    *(_QWORD *)&v248[16] = 0LL;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v238);
  }
  else
  {
    *(_QWORD *)&v248[16] = v238.m256i_i64[3];
    *(_OWORD *)v248 = *(_OWORD *)&v238.m256i_u64[1];
  }
  std::env::_var(v209, aColorterm, 9LL);
  if ( *(_QWORD *)v209 )
  {
    *(_QWORD *)&v246 = 0LL;
    *((_QWORD *)&v246 + 1) = 1LL;
    v247[0] = 0LL;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v209);
  }
  else
  {
    v247[0] = *(_QWORD *)&v209[24];
    v246 = *(_OWORD *)&v209[8];
  }
  if ( !v20 && !*(_QWORD *)&v248[16] && !v22 && !v247[0] )
    goto LABEL_139;
  if ( !*(_QWORD *)&v248[16] )
    goto LABEL_124;
  if ( *(__int64 *)&v248[16] < 0 || !*(_QWORD *)&v248[8] )
    goto LABEL_517;
  v211 = *(_OWORD *)&v248[8];
  *(_QWORD *)&v241 = &v211;
  if ( uu_ls::is_color_compatible_term::{{closure}}::{{closure}}(
         (const void ***)&v241,
         &anon_fc8b0a57c72ccea5fed8d71b627fdd79_46_llvm_18322555434409866145)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203B08)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203B18)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203B28)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203B38)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203B48)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203B58)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203B68)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203B78)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203B88)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203B98)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203BA8)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203BB8)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203BC8)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203BD8)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203BE8)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203BF8)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203C08)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203C18)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203C28)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203C38)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203C48)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203C58)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203C68)
    || uu_ls::is_color_compatible_term::{{closure}}::{{closure}}((const void ***)&v241, &off_203C78) )
  {
LABEL_124:
    alloc::raw_vec::RawVec<T,A>::current_memory(&v211, &v246);
    if ( *((_QWORD *)&v211 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v247, v211, *((_QWORD *)&v211 + 1), v212);
    alloc::raw_vec::RawVec<T,A>::current_memory(&v211, v248);
    if ( *((_QWORD *)&v211 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v248[16], v211, *((_QWORD *)&v211 + 1), v212);
    v23 = anon_73fe86e94af803e79a7413c597bf8ca8_44_llvm_2470886751594806832;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      v209,
      a2,
      anon_73fe86e94af803e79a7413c597bf8ca8_44_llvm_2470886751594806832,
      5LL);
    *(_QWORD *)&v211 = anon_73fe86e94af803e79a7413c597bf8ca8_44_llvm_2470886751594806832;
    *((_QWORD *)&v211 + 1) = 5LL;
    if ( *(_QWORD *)v209 )
    {
      v240 = v210;
      v239 = *(_OWORD *)&v209[40];
      v238 = *(__m256i *)&v209[8];
      v214.m256i_i64[0] = (__int64)&v211;
      v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v214.m256i_i64[2] = (__int64)&v238;
      v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
      v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v233 = 0LL;
      v231 = &v214;
      v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
      core::panicking::panic_fmt(&v229, &off_1FEAA0);
    }
    if ( *(_QWORD *)&v209[8] )
    {
      v24 = *(_QWORD *)(*(_QWORD *)&v209[8] + 8LL);
      if ( !v24 )
        goto LABEL_517;
      v25 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL);
      if ( v25 < 0 )
        goto LABEL_517;
      LOBYTE(v23) = 1;
      switch ( v25 )
      {
        case 0LL:
          break;
        case 3LL:
          if ( !(*(_WORD *)v24 ^ 0x6579 | *(unsigned __int8 *)(v24 + 2) ^ 0x73) )
            break;
          if ( !(*(_WORD *)v24 ^ 0x7474 | *(unsigned __int8 *)(v24 + 2) ^ 0x79) )
            goto LABEL_209;
          goto LABEL_151;
        case 4LL:
          if ( *(_DWORD *)v24 != 1869903201 )
            goto LABEL_151;
          goto LABEL_209;
        case 5LL:
          if ( *(_DWORD *)v24 ^ 0x63726F66 | *(unsigned __int8 *)(v24 + 4) ^ 0x65 )
            goto LABEL_151;
          break;
        case 6LL:
          if ( !(*(_DWORD *)v24 ^ 0x61776C61 | *(unsigned __int16 *)(v24 + 4) ^ 0x7379) )
            break;
          if ( *(_DWORD *)v24 ^ 0x742D6669 | *(unsigned __int16 *)(v24 + 4) ^ 0x7974 )
            goto LABEL_151;
LABEL_209:
          std::io::stdio::stdout();
          LOBYTE(v23) = isatty(1) != 0;
          break;
        default:
          goto LABEL_151;
      }
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
        v209,
        a2,
        anon_73fe86e94af803e79a7413c597bf8ca8_44_llvm_2470886751594806832,
        5LL);
      *(_QWORD *)&v211 = anon_73fe86e94af803e79a7413c597bf8ca8_44_llvm_2470886751594806832;
      *((_QWORD *)&v211 + 1) = 5LL;
      if ( (v209[0] & 1) != 0 )
      {
        v240 = v210;
        v239 = *(_OWORD *)&v209[40];
        v238 = *(__m256i *)&v209[8];
        v214.m256i_i64[0] = (__int64)&v211;
        v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v214.m256i_i64[2] = (__int64)&v238;
        v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v229 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
        v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v233 = 0LL;
        v231 = &v214;
        v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
        core::panicking::panic_fmt(&v229, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950);
      }
      LODWORD(v23) = v209[1];
      LOBYTE(v23) = v209[1] & 1;
    }
  }
  else
  {
LABEL_139:
    alloc::raw_vec::RawVec<T,A>::current_memory(&v211, &v246);
    if ( *((_QWORD *)&v211 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v247, v211, *((_QWORD *)&v211 + 1), v212);
    alloc::raw_vec::RawVec<T,A>::current_memory(&v211, v248);
    if ( *((_QWORD *)&v211 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v248[16], v211, *((_QWORD *)&v211 + 1), v212);
LABEL_151:
    LODWORD(v23) = 0;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    a2,
    &anon_73fe86e94af803e79a7413c597bf8ca8_55_llvm_2470886751594806832,
    9LL);
  *(_QWORD *)&v211 = &anon_73fe86e94af803e79a7413c597bf8ca8_55_llvm_2470886751594806832;
  *((_QWORD *)&v211 + 1) = 9LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v233 = 0LL;
    v231 = &v214;
    v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::panicking::panic_fmt(&v229, &off_1FEAB8);
  }
  if ( !*(_QWORD *)&v209[8] )
    core::option::unwrap_failed(&off_1FEAD0);
  v26 = *(_QWORD *)(*(_QWORD *)&v209[8] + 8LL);
  if ( !v26 || (v27 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL), v27 < 0) )
LABEL_517:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  switch ( v27 )
  {
    case 2LL:
      if ( *(_WORD *)v26 != 28526 )
        goto LABEL_526;
      goto LABEL_167;
    case 3LL:
      if ( !(*(_WORD *)v26 ^ 0x6579 | *(unsigned __int8 *)(v26 + 2) ^ 0x73) )
        goto LABEL_171;
      if ( !(*(_WORD *)v26 ^ 0x7474 | *(unsigned __int8 *)(v26 + 2) ^ 0x79) )
        goto LABEL_170;
      goto LABEL_526;
    case 4LL:
      if ( *(_DWORD *)v26 == 1869903201 )
        goto LABEL_170;
      if ( *(_DWORD *)v26 != 1701736302 )
        goto LABEL_526;
      goto LABEL_167;
    case 5LL:
      if ( !(*(_DWORD *)v26 ^ 0x63726F66 | *(unsigned __int8 *)(v26 + 4) ^ 0x65) )
        goto LABEL_171;
      if ( *(_DWORD *)v26 ^ 0x6576656E | *(unsigned __int8 *)(v26 + 4) ^ 0x72 )
        goto LABEL_526;
LABEL_167:
      LODWORD(v21) = 0;
      break;
    case 6LL:
      if ( *(_DWORD *)v26 ^ 0x61776C61 | *(unsigned __int16 *)(v26 + 4) ^ 0x7379 )
      {
        if ( *(_DWORD *)v26 ^ 0x742D6669 | *(unsigned __int16 *)(v26 + 4) ^ 0x7974 )
        {
LABEL_526:
          *(_QWORD *)v209 = &off_1FEAE8;
          *(_QWORD *)&v209[8] = 1LL;
          *(_QWORD *)&v209[16] = &v241;
          *(_OWORD *)&v209[24] = 0LL;
          core::panicking::panic_fmt(v209, &off_1FEAF8);
        }
LABEL_170:
        std::io::stdio::stdout();
        LOBYTE(v21) = isatty(1) != 0;
      }
      else
      {
LABEL_171:
        LOBYTE(v21) = 1;
      }
      break;
    default:
      goto LABEL_526;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    a2,
    anon_3be94dd0f3faa6e1be050a424a444ce8_23_llvm_3153282441382346823,
    10LL);
  *(_QWORD *)&v211 = anon_3be94dd0f3faa6e1be050a424a444ce8_23_llvm_3153282441382346823;
  *((_QWORD *)&v211 + 1) = 10LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v233 = 0LL;
    v231 = &v214;
    v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::panicking::panic_fmt(&v229, &off_1FECE0);
  }
  v28 = *(_QWORD *)&v209[8];
  v266 = (int)v21;
  v249 = (int)v23;
  if ( !*(_QWORD *)&v209[8] )
  {
    v35 = a2;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            a2,
            anon_3be94dd0f3faa6e1be050a424a444ce8_25_llvm_3153282441382346823,
            2LL,
            &off_1FED28);
    goto LABEL_189;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    a2,
    anon_3be94dd0f3faa6e1be050a424a444ce8_23_llvm_3153282441382346823,
    10LL);
  *(_QWORD *)&v211 = anon_3be94dd0f3faa6e1be050a424a444ce8_23_llvm_3153282441382346823;
  *((_QWORD *)&v211 + 1) = 10LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v233 = 0LL;
    v231 = &v214;
    v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::panicking::panic_fmt(&v229, &off_1FECF8);
  }
  if ( !*(_QWORD *)&v209[8] )
    core::option::unwrap_failed(&off_1FED10);
  v29 = *(_WORD **)(*(_QWORD *)&v209[8] + 8LL);
  if ( !v29 )
    goto LABEL_517;
  v30 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL);
  if ( v30 < 0 )
    goto LABEL_517;
  if ( v30 == 2 && *v29 == 26995 )
  {
    v32 = 1;
    v31 = a2;
  }
  else
  {
    v31 = a2;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            a2,
            anon_3be94dd0f3faa6e1be050a424a444ce8_25_llvm_3153282441382346823,
            2LL,
            &off_1FED28);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    v31,
    anon_3be94dd0f3faa6e1be050a424a444ce8_23_llvm_3153282441382346823,
    10LL);
  *(_QWORD *)&v211 = anon_3be94dd0f3faa6e1be050a424a444ce8_23_llvm_3153282441382346823;
  *((_QWORD *)&v211 + 1) = 10LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v233 = 0LL;
    v231 = &v214;
    v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::panicking::panic_fmt(&v229, &off_1FED40);
  }
  if ( !*(_QWORD *)&v209[8] )
    core::option::unwrap_failed(&off_1FED58);
  v33 = *(_QWORD **)(*(_QWORD *)&v209[8] + 8LL);
  if ( !v33 )
    goto LABEL_517;
  v34 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL);
  if ( v34 < 0 )
    goto LABEL_517;
  if ( v34 != 14 || *v33 ^ 0x65722D6E616D7568LL | *(_QWORD *)((char *)v33 + 6) ^ 0x656C626164616572LL )
  {
    v35 = a2;
LABEL_189:
    v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v35,
            anon_3be94dd0f3faa6e1be050a424a444ce8_24_llvm_3153282441382346823,
            14LL,
            &off_1FED70);
    goto LABEL_190;
  }
  v36 = 1;
  v35 = a2;
LABEL_190:
  v37 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                        v35,
                        anon_3be94dd0f3faa6e1be050a424a444ce8_26_llvm_3153282441382346823,
                        9LL,
                        &off_1FED88);
  v38 = 2;
  if ( !v32 )
    v38 = v36;
  v265 = v38;
  v39 = std::env::_var_os(&v257, aBlocksize, 9LL);
  LOBYTE(v39) = 1;
  v216 = v39;
  v40 = std::env::_var_os(&v259, aBlockSize, 10LL);
  LOBYTE(v40) = 1;
  v217 = v40;
  LOBYTE(v40) = 1;
  v216 = v40;
  v41 = std::env::_var_os(&v261, aLsBlockSize, 13LL);
  LOBYTE(v41) = 1;
  v219 = v41;
  LOBYTE(v41) = 1;
  v217 = v41;
  LOBYTE(v41) = 1;
  v216 = v41;
  v42 = std::env::_var_os(v275, aPosixlyCorrect, 15LL);
  if ( v28 )
  {
    v43 = *(_QWORD *)(v28 + 8);
    if ( !v43 || (v44 = *(_QWORD *)(v28 + 16), v44 < 0) )
      core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
    LOBYTE(v42) = 1;
    v219 = v42;
    LOBYTE(v42) = 1;
    v217 = v42;
    LOBYTE(v42) = 1;
    v216 = v42;
    std::sys::os_str::bytes::Slice::to_owned(v209, v43, v44);
    goto LABEL_196;
  }
  v47 = 0;
  if ( (_QWORD)v261 != 0x8000000000000000LL )
  {
    v256[0] = v262;
    v255 = v261;
    v46 = 1025;
    v234 = 1024LL;
    v237 = 1025;
    v219 = 0;
    goto LABEL_202;
  }
  if ( (_QWORD)v259 != 0x8000000000000000LL )
  {
    v256[0] = v260;
    v255 = v259;
    v46 = 1025;
    v234 = 1024LL;
    v219 = 1025;
    v237 = 0;
    v236 = 1025;
    v217 = 0;
LABEL_203:
    v235 = 0;
    LOBYTE(v46) = 1;
    v216 = v46;
    v48 = 1;
    if ( v32 )
      goto LABEL_204;
    goto LABEL_211;
  }
  if ( (_QWORD)v257 == 0x8000000000000000LL )
  {
    LOBYTE(v47) = 1;
    v219 = v47;
    LOBYTE(v47) = 1;
    v217 = v47;
    LOBYTE(v47) = 1;
    v216 = v47;
    std::sys::os_str::bytes::Slice::to_owned(v209, 1LL, 0LL);
LABEL_196:
    v45 = *(_DWORD *)&v209[16];
    v256[0] = *(_QWORD *)&v209[16];
    v255 = *(_OWORD *)v209;
    LOBYTE(v45) = 1;
    v219 = v45;
    v46 = 1024;
    v234 = 1024LL;
    v237 = 0;
LABEL_202:
    v236 = 0;
    LOBYTE(v46) = 1;
    v217 = v46;
    goto LABEL_203;
  }
  v256[0] = v258;
  v255 = v257;
  v234 = 1LL;
  v219 = 1;
  v237 = 0;
  v236 = 0;
  v217 = 1;
  v235 = 1;
  v216 = 0;
  v48 = 0;
  if ( v32 )
  {
LABEL_204:
    if ( v275[0] == 0x8000000000000000LL )
    {
      v234 = 1LL;
      v251 = 1000LL;
      goto LABEL_215;
    }
LABEL_214:
    v251 = ((unsigned __int8)v37 << 9) + 512LL;
    v234 = 1LL;
    goto LABEL_215;
  }
LABEL_211:
  if ( v36 )
    goto LABEL_212;
  if ( !*((_QWORD *)&v255 + 1) || v256[0] < 0LL )
    goto LABEL_517;
  if ( !v256[0] )
  {
LABEL_212:
    if ( v275[0] == 0x8000000000000000LL )
    {
      v234 = 1LL;
      v251 = 1024LL;
      goto LABEL_215;
    }
    goto LABEL_214;
  }
  std::sys::os_str::bytes::Slice::to_string_lossy(&v269);
  v65 = v270;
  v66 = v271;
  if ( v269 != 0x8000000000000000LL )
    core::slice::raw::from_raw_parts::precondition_check(v270, 1LL, 1LL, v271);
  LOWORD(v239) = 0;
  BYTE2(v239) = 0;
  v238.m256i_i64[0] = 0LL;
  v238.m256i_i64[2] = 0LL;
  uucore::parser::parse_size::Parser::parse(&v214, &v238, v65, v66);
  if ( v214.m256i_i64[0] != 3 )
  {
    v268 = v214;
LABEL_497:
    if ( v28 )
    {
      <alloc::string::String as core::clone::Clone>::clone(&v341, v28);
      v325.m256i_i64[3] = v342;
      *(_OWORD *)&v325.m256i_u64[1] = v341;
      v325.m256i_i8[0] = 3;
      v199 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
      if ( !v199 )
        alloc::alloc::handle_alloc_error(8LL, 56LL);
      *(_QWORD *)(v199 + 48) = v327;
      v200 = *(_OWORD *)v325.m256i_i8;
      v201 = *(_OWORD *)&v325.m256i_u64[2];
      *(_OWORD *)(v199 + 32) = v326;
      *(_OWORD *)(v199 + 16) = v201;
      *(_OWORD *)v199 = v200;
      v202 = v253;
      *((_QWORD *)v253 + 1) = v199;
      v202[2] = &off_1FEDD8;
      *v202 = 0x8000000000000000LL;
      if ( v268.m256i_i64[0] != 3 )
        core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&v268);
      if ( v269 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(v209, &v269);
        if ( *(_QWORD *)&v209[8] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v271,
            *(_QWORD *)v209,
            *(_QWORD *)&v209[8],
            *(_QWORD *)&v209[16]);
      }
      goto LABEL_461;
    }
    v251 = 1024LL;
    core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&v268);
    goto LABEL_507;
  }
  if ( v214.m256i_i64[3] )
  {
    v229 = 0LL;
    v230 = v65;
    v231 = v66;
    LOBYTE(v232) = 1;
    *(_QWORD *)&v246 = &v229;
    *((_QWORD *)&v246 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v209 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
    *(_QWORD *)&v209[8] = 2LL;
    *(_QWORD *)&v209[32] = 0LL;
    *(_QWORD *)&v209[16] = &v246;
    *(_QWORD *)&v209[24] = 1LL;
    core::option::Option<T>::map_or_else(&v211, 0LL, v67, v209);
    v268.m256i_i64[0] = 2LL;
    *(_OWORD *)&v268.m256i_u64[1] = v211;
    v268.m256i_i64[3] = v212;
    goto LABEL_497;
  }
  v234 = v214.m256i_i64[2];
  v268.m256i_i64[1] = v214.m256i_i64[2];
  v268.m256i_i64[0] = 3LL;
  if ( v48 )
  {
    v87 = 1024LL;
    if ( !(_BYTE)v37 )
      v87 = v234;
    if ( v28 )
      v87 = v234;
    v251 = v87;
  }
  else
  {
    v68 = v234;
    if ( (_BYTE)v37 )
      v68 = 1024LL;
    v251 = v68;
    v234 = 1LL;
  }
LABEL_507:
  if ( v269 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v209, &v269);
    if ( *(_QWORD *)&v209[8] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &v271,
        *(_QWORD *)v209,
        *(_QWORD *)&v209[8],
        *(_QWORD *)&v209[16]);
  }
LABEL_215:
  v226 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_73fe86e94af803e79a7413c597bf8ca8_34_llvm_2470886751594806832,
           6LL,
           &off_1FEE48);
  v49 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_73fe86e94af803e79a7413c597bf8ca8_35_llvm_2470886751594806832,
          8LL,
          &off_1FEE60);
  v254 = 0;
  if ( !v49 )
    v254 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              a2,
                              anon_d13c0a923ac77d86b5cd3d5212361a5f_66_llvm_13257680528908953851,
                              1LL,
                              &off_1FEE78) ^ 1;
  v225 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_d13c0a923ac77d86b5cd3d5212361a5f_65_llvm_13257680528908953851,
           1LL,
           &off_1FEE90);
  v224 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_d13c0a923ac77d86b5cd3d5212361a5f_67_llvm_13257680528908953851,
           15LL,
           &off_1FEEA8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    a2,
    anon_73fe86e94af803e79a7413c597bf8ca8_33_llvm_2470886751594806832,
    5LL);
  *(_QWORD *)&v211 = anon_73fe86e94af803e79a7413c597bf8ca8_33_llvm_2470886751594806832;
  *((_QWORD *)&v211 + 1) = 5LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v203 = &off_1FEEC0;
LABEL_552:
    v205 = 2LL;
    v206 = 2LL;
LABEL_553:
    v207 = v215;
    v215[1] = (char **)v205;
    v207[4] = 0LL;
    v207[2] = (char **)v252;
    v207[3] = (char **)v206;
    core::panicking::panic_fmt(v207, v203);
  }
  if ( *(_QWORD *)&v209[8] )
  {
    v50 = *(const void **)(*(_QWORD *)&v209[8] + 8LL);
    if ( !v50 )
      goto LABEL_517;
    v51 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL);
    if ( (v51 & 0x8000000000000000LL) != 0LL )
      goto LABEL_517;
    *(_DWORD *)v209 = 0;
    v52 = (const void *)core::char::methods::encode_utf8_raw(48LL, v209, 4LL);
    if ( v53 <= v51 )
    {
      v58 = bcmp(v52, v50, v53);
      v54 = 10LL;
      if ( !v58 )
        v54 = 2 * (unsigned int)(v51 < 2) + 8;
    }
    else
    {
      v54 = 10LL;
    }
    v59 = core::num::<impl u16>::from_str_radix(v50, v51, v54);
    if ( (v59 & 1) != 0 )
    {
      LOWORD(v60) = -1;
      v243 = v60;
      if ( (v59 & 0xFF00) != 0x200 )
      {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(v209, v51, 0LL);
        v61 = *(_QWORD *)&v209[8];
        if ( *(_QWORD *)v209 )
          alloc::raw_vec::handle_error(*(_QWORD *)&v209[8], *(_QWORD *)&v209[16]);
        v62 = *(void **)&v209[16];
        core::intrinsics::copy_nonoverlapping::precondition_check(v50, *(_QWORD *)&v209[16], 1LL, 1LL, v51);
        memcpy(v62, v50, v51);
        v209[0] = 0;
        *(_QWORD *)&v209[8] = v61;
        *(_QWORD *)&v209[16] = v62;
        *(_QWORD *)&v209[24] = v51;
        v63 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
        if ( !v63 )
          alloc::alloc::handle_alloc_error(8LL, 56LL);
        goto LABEL_353;
      }
    }
    else
    {
      v243 = HIWORD(v59);
    }
  }
  else
  {
    std::env::_var_os(&v246, aColumns_0, 7LL);
    if ( (_QWORD)v246 == 0x8000000000000000LL )
    {
      v55 = terminal_size::unix::terminal_size();
      v56 = HIWORD(v55);
      v91 = (_WORD)v55 == 0;
      v57 = 80;
      if ( !v91 )
        v57 = v56;
      v243 = v57;
    }
    else
    {
      v212 = v247[0];
      v211 = v246;
      if ( !*((_QWORD *)&v246 + 1) || v247[0] < 0LL )
        goto LABEL_517;
      std::sys::os_str::bytes::Slice::to_str(v209);
      if ( *(_QWORD *)v209
        || !*(_QWORD *)&v209[8]
        || (v64 = core::num::<impl core::str::traits::FromStr for u16>::from_str(
                    *(_QWORD *)&v209[8],
                    *(_QWORD *)&v209[16]),
            (v64 & 1) != 0) )
      {
        v69 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v70 = *(_QWORD *)(v69 + 8);
        v71 = *(_QWORD *)(v69 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v70, 1LL, 1LL, v71);
        *(_QWORD *)&v241 = v70;
        *((_QWORD *)&v241 + 1) = v71;
        *(_QWORD *)&v279 = &v241;
        *((_QWORD *)&v279 + 1) = <&T as core::fmt::Display>::fmt;
        v238.m256i_i64[0] = (__int64)&unk_1FEC58;
        v238.m256i_i64[1] = 2LL;
        *(_QWORD *)&v239 = 0LL;
        v238.m256i_i64[2] = (__int64)&v279;
        v238.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v238);
        if ( !*((_QWORD *)&v211 + 1) || v212 < 0 )
          goto LABEL_517;
        v229 = (char **)(&dword_0 + 1);
        v230 = (__int64 (__fastcall *)())*((_QWORD *)&v211 + 1);
        v231 = (__m256i *)v212;
        LOBYTE(v232) = 1;
        *(_QWORD *)v248 = &v229;
        *(_QWORD *)&v248[8] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v209 = &off_1FEC78;
        *(_QWORD *)&v209[8] = 2LL;
        *(_QWORD *)&v209[32] = 0LL;
        v72 = v248;
        *(_QWORD *)&v209[16] = v248;
        *(_QWORD *)&v209[24] = 1LL;
        LOWORD(v72) = 80;
        v243 = (unsigned int)v72;
        std::io::stdio::_eprint(v209);
      }
      else
      {
        v243 = HIWORD(v64);
      }
      alloc::raw_vec::RawVec<T,A>::current_memory(&v214, &v211);
      if ( v214.m256i_i64[1] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          &v212,
          v214.m256i_i64[0],
          v214.m256i_i64[1],
          v214.m256i_i64[2]);
    }
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_73fe86e94af803e79a7413c597bf8ca8_31_llvm_2470886751594806832,
                          18LL,
                          &off_1FEED8) )
  {
    v213 = 0;
  }
  else
  {
    v73 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            a2,
            anon_73fe86e94af803e79a7413c597bf8ca8_32_llvm_2470886751594806832,
            18LL,
            &off_1FEEF0);
    LOBYTE(v74) = 1;
    v213 = v74;
    if ( !v73 )
    {
      std::io::stdio::stdout();
      v75 = isatty(1);
      LOBYTE(v75) = v75 == 0;
      v213 = v75;
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    a2,
    anon_73fe86e94af803e79a7413c597bf8ca8_30_llvm_2470886751594806832,
    13LL);
  *(_QWORD *)&v211 = anon_73fe86e94af803e79a7413c597bf8ca8_30_llvm_2470886751594806832;
  *((_QWORD *)&v211 + 1) = 13LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v203 = &off_1FEB10;
    goto LABEL_552;
  }
  v221 = (unsigned __int8)v213;
  if ( *(_QWORD *)&v209[8] )
  {
    v76 = *(_QWORD *)(*(_QWORD *)&v209[8] + 8LL);
    if ( !v76 )
      goto LABEL_517;
    v77 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL);
    if ( v77 < 0 )
      goto LABEL_517;
    matched = uu_ls::match_quoting_style_name(v76, v77, v221);
    v218 = HIWORD(matched);
    if ( BYTE2(matched) == 4 )
    {
      *(_QWORD *)v209 = &off_1FEB28;
      v203 = &off_1FEB38;
      v252 = (__m256i *)&v241;
      v205 = 1LL;
      v206 = 0LL;
      v215 = (char ***)v209;
      goto LABEL_553;
    }
    v213 = matched;
    v222 = matched >> 8;
    goto LABEL_271;
  }
  v79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_7c1e270846ccb77ed0002241600464f7_22_llvm_18082322705867691778,
          7LL,
          &off_1FEB50);
  LOBYTE(v80) = 3;
  v218 = v80;
  if ( (_BYTE)v79 )
  {
LABEL_270:
    v222 = v79;
    goto LABEL_271;
  }
  v79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_7c1e270846ccb77ed0002241600464f7_21_llvm_18082322705867691778,
          6LL,
          &off_1FEB68);
  if ( (_BYTE)v79 )
  {
    LOBYTE(v79) = 2;
    v218 = v79;
    v213 = 0;
    goto LABEL_270;
  }
  v86 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_7c1e270846ccb77ed0002241600464f7_23_llvm_18082322705867691778,
          10LL,
          &off_1FEB80);
  if ( (_BYTE)v86 )
  {
    LOBYTE(v86) = 2;
    v218 = v86;
    v222 = v86;
    LOBYTE(v86) = 2;
    v213 = v86;
    goto LABEL_271;
  }
  v88 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_73fe86e94af803e79a7413c597bf8ca8_54_llvm_2470886751594806832,
          5LL,
          &off_1FEB98);
  v222 = v89;
  if ( !v88 )
  {
    std::env::_var(&v214, aQuotingStyle, 13LL);
    if ( v214.m256i_i64[0] )
      goto LABEL_301;
    *(_OWORD *)v248 = *(_OWORD *)&v214.m256i_u64[1];
    *(_QWORD *)&v248[16] = v214.m256i_i64[3];
    if ( !v214.m256i_i64[2] || v214.m256i_i64[3] < 0 )
      goto LABEL_517;
    v213 = uu_ls::match_quoting_style_name(v214.m256i_i64[2], v214.m256i_i64[3], v221);
    v218 = HIWORD(v213);
    if ( BYTE2(v213) != 4 )
    {
      core::ptr::drop_in_place<alloc::string::String>(v248);
      v222 = v213 >> 8;
      if ( v214.m256i_i64[0] )
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v214);
      goto LABEL_271;
    }
    std::env::args(&v238);
    <std::env::Args as core::iter::traits::iterator::Iterator>::next(&v211, &v238);
    core::option::Option<T>::unwrap_or_else(&v246, &v211, &off_1FEBE0);
    v229 = (char **)&v246;
    v230 = <alloc::string::String as core::fmt::Display>::fmt;
    v231 = (__m256i *)v248;
    v232 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v209 = &unk_1FEBB0;
    *(_QWORD *)&v209[8] = 3LL;
    *(_QWORD *)&v209[32] = 0LL;
    *(_QWORD *)&v209[16] = &v229;
    *(_QWORD *)&v209[24] = 2LL;
    std::io::stdio::_eprint(v209);
    core::ptr::drop_in_place<alloc::string::String>(&v246);
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v238);
    core::ptr::drop_in_place<alloc::string::String>(v248);
    if ( v214.m256i_i64[0] )
LABEL_301:
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v214);
    std::io::stdio::stdout();
    v90 = 1;
    v91 = isatty(1) == 0;
    v92 = 3;
    if ( !v91 )
      v92 = v221;
    v218 = v92;
    if ( v91 )
      v90 = v221;
    v213 = v90;
    v222 = 0;
  }
LABEL_271:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    a2,
    anon_73fe86e94af803e79a7413c597bf8ca8_46_llvm_2470886751594806832,
    15LL);
  *(_QWORD *)&v211 = anon_73fe86e94af803e79a7413c597bf8ca8_46_llvm_2470886751594806832;
  *((_QWORD *)&v211 + 1) = 15LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v203 = &off_1FEBF8;
    goto LABEL_552;
  }
  if ( *(_QWORD *)&v209[8] )
  {
    v81 = *(_QWORD *)(*(_QWORD *)&v209[8] + 8LL);
    if ( !v81 )
      goto LABEL_517;
    v82 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL);
    if ( v82 < 0 )
      goto LABEL_517;
    switch ( v82 )
    {
      case 5LL:
        LODWORD(v81) = *(_DWORD *)v81 ^ 0x73616C73 | *(unsigned __int8 *)(v81 + 4) ^ 0x68;
        LOBYTE(v81) = (_DWORD)v81 == 0;
        goto LABEL_316;
      case 8LL:
        if ( *(_QWORD *)v81 == 0x7966697373616C63LL )
          goto LABEL_313;
        goto LABEL_290;
      case 9LL:
        if ( *(_QWORD *)v81 ^ 0x7079742D656C6966LL | *(unsigned __int8 *)(v81 + 8) ^ 0x65LL )
          goto LABEL_290;
        LODWORD(v81) = 2;
        break;
      default:
        goto LABEL_290;
    }
    goto LABEL_316;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    a2,
    anon_a470bffdfb79839f15e930f2b0f6282f_33_llvm_1637152639412489551,
    8LL);
  *(_QWORD *)&v211 = anon_a470bffdfb79839f15e930f2b0f6282f_33_llvm_1637152639412489551;
  *((_QWORD *)&v211 + 1) = 8LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v203 = &off_1FEC10;
    goto LABEL_552;
  }
  if ( *(_QWORD *)&v209[8] )
  {
    v81 = *(_QWORD *)(*(_QWORD *)&v209[8] + 8LL);
    if ( !v81 )
      goto LABEL_517;
    v83 = *(_QWORD *)(*(_QWORD *)&v209[8] + 16LL);
    if ( v83 < 0 )
      goto LABEL_517;
    switch ( v83 )
    {
      case 3LL:
        if ( !(*(_WORD *)v81 ^ 0x6579 | *(unsigned __int8 *)(v81 + 2) ^ 0x73) )
          goto LABEL_313;
        if ( *(_WORD *)v81 ^ 0x7474 | *(unsigned __int8 *)(v81 + 2) ^ 0x79 )
          goto LABEL_290;
        goto LABEL_315;
      case 4LL:
        if ( *(_DWORD *)v81 == 1869903201 )
          goto LABEL_315;
        goto LABEL_290;
      case 5LL:
        if ( !(*(_DWORD *)v81 ^ 0x6576656E | *(unsigned __int8 *)(v81 + 4) ^ 0x72) )
          goto LABEL_290;
        LODWORD(v81) = 3 * ((*(_DWORD *)v81 ^ 0x63726F66 | *(unsigned __int8 *)(v81 + 4) ^ 0x65) == 0);
        break;
      case 6LL:
        if ( *(_DWORD *)v81 ^ 0x61776C61 | *(unsigned __int16 *)(v81 + 4) ^ 0x7379 )
        {
          if ( *(_DWORD *)v81 ^ 0x742D6669 | *(unsigned __int16 *)(v81 + 4) ^ 0x7974 )
          {
LABEL_290:
            LODWORD(v215) = 0;
            goto LABEL_317;
          }
LABEL_315:
          std::io::stdio::stdout();
          LODWORD(v81) = 3 * (isatty(1) != 0);
        }
        else
        {
LABEL_313:
          LOBYTE(v81) = 3;
        }
        break;
      default:
        goto LABEL_290;
    }
  }
  else
  {
    v84 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            a2,
            anon_a470bffdfb79839f15e930f2b0f6282f_31_llvm_1637152639412489551,
            1LL,
            &off_1FEC28);
    LOBYTE(v85) = 1;
    LODWORD(v215) = v85;
    if ( v84 )
      goto LABEL_317;
    LODWORD(v215) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                      a2,
                      anon_a470bffdfb79839f15e930f2b0f6282f_32_llvm_1637152639412489551,
                      9LL,
                      &off_1FEC40);
    LODWORD(v81) = (_DWORD)v215;
    LOBYTE(v81) = 2 * (_BYTE)v215;
  }
LABEL_316:
  LODWORD(v215) = v81;
LABEL_317:
  LOBYTE(v252) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                   a2,
                   anon_73fe86e94af803e79a7413c597bf8ca8_54_llvm_2470886751594806832,
                   5LL,
                   &off_1FEF08);
  if ( ((unsigned __int8)v252 | ((_BYTE)v220 == 1)) != 1 )
  {
    *(_QWORD *)&v272 = 0x8000000000000002LL;
    goto LABEL_363;
  }
  v93 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 120LL, 0LL);
  if ( !v93 )
    alloc::alloc::handle_alloc_error(8LL, 120LL);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v209, 8LL, 0LL);
  v94 = *(_QWORD *)&v209[8];
  if ( *(_QWORD *)v209 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v209[8], *(_QWORD *)&v209[16]);
  v95 = *(_QWORD **)&v209[16];
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_2B258, *(_QWORD *)&v209[16], 1LL, 1LL, 8LL);
  *v95 = 0x6F73692D6C6C7566LL;
  *(_QWORD *)&v281 = v94;
  *((_QWORD *)&v281 + 1) = v95;
  v282 = 8LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v209, 8LL, 0LL);
  v96 = *(_QWORD *)&v209[8];
  if ( *(_QWORD *)v209 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v209[8], *(_QWORD *)&v209[16]);
  v97 = *(_QWORD **)&v209[16];
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_2B350, *(_QWORD *)&v209[16], 1LL, 1LL, 8LL);
  *v97 = 0x6F73692D676E6F6CLL;
  *(_QWORD *)&v283 = v96;
  *((_QWORD *)&v283 + 1) = v97;
  v284 = 8LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v209, 3LL, 0LL);
  v98 = *(_QWORD *)&v209[8];
  if ( *(_QWORD *)v209 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v209[8], *(_QWORD *)&v209[16]);
  v99 = *(_QWORD *)&v209[16];
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_39502, *(_QWORD *)&v209[16], 1LL, 1LL, 3LL);
  *(_BYTE *)(v99 + 2) = 111;
  *(_WORD *)v99 = 29545;
  *(_QWORD *)&v285 = v98;
  *((_QWORD *)&v285 + 1) = v99;
  v286 = 3LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v209, 6LL, 0LL);
  v100 = *(_QWORD *)&v209[8];
  if ( *(_QWORD *)v209 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v209[8], *(_QWORD *)&v209[16]);
  v101 = *(_QWORD *)&v209[16];
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_39505, *(_QWORD *)&v209[16], 1LL, 1LL, 6LL);
  *(_WORD *)(v101 + 4) = 25964;
  *(_DWORD *)v101 = 1633906540;
  *(_QWORD *)&v287 = v100;
  *((_QWORD *)&v287 + 1) = v101;
  v288 = 6LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v209, 48LL, 0LL);
  v102 = *(_QWORD *)&v209[8];
  if ( *(_QWORD *)v209 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v209[8], *(_QWORD *)&v209[16]);
  v103 = *(void **)&v209[16];
  core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_3950B, *(_QWORD *)&v209[16], 1LL, 1LL, 48LL);
  qmemcpy(v103, "+FORMAT (e.g., +%H:%M) for a 'date'-style format", 48);
  if ( (v93 & 7) != 0 )
    core::panicking::panic_misaligned_pointer_dereference(8LL, v93, &off_1FE788);
  *(_QWORD *)(v93 + 16) = v282;
  *(_OWORD *)v93 = v281;
  *(_QWORD *)(v93 + 40) = v284;
  *(_OWORD *)(v93 + 24) = v283;
  *(_OWORD *)(v93 + 48) = v285;
  *(_QWORD *)(v93 + 64) = v286;
  *(_OWORD *)(v93 + 72) = v287;
  *(_QWORD *)(v93 + 88) = v288;
  *(_QWORD *)(v93 + 96) = v102;
  *(_QWORD *)(v93 + 104) = v103;
  *(_QWORD *)(v93 + 112) = 48LL;
  *(_QWORD *)&v276 = 5LL;
  *((_QWORD *)&v276 + 1) = v93;
  v277 = 5LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v209,
    a2,
    anon_73fe86e94af803e79a7413c597bf8ca8_47_llvm_2470886751594806832,
    10LL);
  v302[0] = anon_73fe86e94af803e79a7413c597bf8ca8_47_llvm_2470886751594806832;
  v302[1] = 10LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)v302;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v233 = 0LL;
    v231 = &v214;
    v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::panicking::panic_fmt(&v229, &off_1FE7A0);
  }
  v104 = *(_QWORD *)&v209[8];
  if ( !*(_QWORD *)&v209[8] )
  {
    v110 = 0x8000000000000003LL;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            anon_73fe86e94af803e79a7413c597bf8ca8_48_llvm_2470886751594806832,
                            9LL,
                            &off_1FE860) )
      v110 = 0x8000000000000000LL;
    goto LABEL_362;
  }
  v105 = anon_73fe86e94af803e79a7413c597bf8ca8_48_llvm_2470886751594806832;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_73fe86e94af803e79a7413c597bf8ca8_48_llvm_2470886751594806832,
                          9LL,
                          &off_1FE7B8) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(
      &v241,
      a2,
      anon_73fe86e94af803e79a7413c597bf8ca8_48_llvm_2470886751594806832,
      9LL,
      &off_1FE7D0);
    if ( !(_QWORD)v241 )
    {
      v115 = &off_1FE7E8;
      goto LABEL_560;
    }
    v280 = v242;
    v279 = v241;
    v103 = (void *)core::iter::traits::iterator::Iterator::fold(&v279, 0LL);
    v107 = v106;
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(
      &v246,
      a2,
      anon_73fe86e94af803e79a7413c597bf8ca8_47_llvm_2470886751594806832,
      10LL,
      &off_1FE800);
    if ( !(_QWORD)v246 )
    {
      v115 = &off_1FE818;
      goto LABEL_560;
    }
    *(_QWORD *)&v248[16] = v247[0];
    *(_OWORD *)v248 = v246;
    v105 = 0LL;
    v108 = core::iter::traits::iterator::Iterator::fold(v248, 0LL);
    if ( v103 )
    {
      v110 = 0x8000000000000000LL;
      if ( !v108 || v107 > v109 )
        goto LABEL_362;
    }
  }
  v111 = *(unsigned __int16 **)(v104 + 8);
  if ( !v111 )
    goto LABEL_517;
  v112 = *(_QWORD *)(v104 + 16);
  if ( v112 < 0 )
    goto LABEL_517;
  v113 = 0x6F73692D676E6F6CLL;
  if ( v112 == 3 )
  {
    v113 = *v111 ^ 0x7369u;
    v105 = (const char *)(*((unsigned __int8 *)v111 + 2) ^ 0x6Fu);
    LOWORD(v105) = *v111 ^ 0x7369 | *((unsigned __int8 *)v111 + 2) ^ 0x6F;
    if ( !(_WORD)v105 )
    {
      v110 = 0x8000000000000002LL;
      goto LABEL_362;
    }
    goto LABEL_348;
  }
  if ( v112 == 6 )
  {
    v113 = *(_DWORD *)v111 ^ 0x61636F6Cu;
    v105 = (const char *)((unsigned int)v113 | v111[2] ^ 0x656C);
    if ( !((unsigned int)v113 | v111[2] ^ 0x656C) )
    {
      v110 = 0x8000000000000003LL;
      goto LABEL_362;
    }
LABEL_348:
    v301[0] = *(_QWORD *)(v104 + 8);
    v301[1] = (char *)v111 + v112;
    v115 = &off_1FE830;
    if ( !(unsigned int)core::str::validations::next_code_point(v301, v105, v113) )
      goto LABEL_560;
    if ( (v114 ^ 0xD800u) - 2048 >= (unsigned int)&loc_10F800 )
      core::panicking::panic_nounwind(anon_73fe86e94af803e79a7413c597bf8ca8_7_llvm_2470886751594806832, 57LL);
    if ( v114 != 43 )
    {
      if ( v114 != 1114112 )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v211, v104);
        *(_DWORD *)&v209[4] = *(_DWORD *)&v278[3];
        *(_DWORD *)&v209[1] = *(_DWORD *)v278;
        *(_OWORD *)&v209[32] = v276;
        *(_QWORD *)&v209[48] = v277;
        v209[0] = 6;
        *(_OWORD *)&v209[8] = v211;
        *(_QWORD *)&v209[24] = v212;
        v63 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
        if ( !v63 )
          alloc::alloc::handle_alloc_error(8LL, 56LL);
LABEL_353:
        *(_QWORD *)(v63 + 48) = *(_QWORD *)&v209[48];
        v116 = *(_OWORD *)v209;
        v117 = *(_OWORD *)&v209[16];
        *(_OWORD *)(v63 + 32) = *(_OWORD *)&v209[32];
        *(_OWORD *)(v63 + 16) = v117;
        *(_OWORD *)v63 = v116;
        v118 = v253;
        *((_QWORD *)v253 + 1) = v63;
        v118[2] = &anon_9ebd53f9d856246d4a3b849c8a9b6ba6_24_llvm_11327014999047981048;
        *v118 = 0x8000000000000000LL;
        goto LABEL_461;
      }
LABEL_560:
      core::option::unwrap_failed(v115);
    }
    v119 = *(_QWORD *)(v104 + 8);
    if ( v119 )
    {
      v120 = *(_QWORD *)(v104 + 16);
      if ( v120 >= 0 )
      {
        if ( (unsigned __int64)v120 <= 1 )
        {
          if ( v120 != 1 )
LABEL_358:
            core::str::slice_error_fail(
              *(_QWORD *)(v104 + 8),
              *(_QWORD *)(v104 + 16),
              1LL,
              *(_QWORD *)(v104 + 16),
              &off_1FE848);
        }
        else if ( *(char *)(v119 + 1) <= -65 )
        {
          goto LABEL_358;
        }
        v103 = (void *)(v120 - 1);
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(v209, v103, 0LL);
        v110 = *(_QWORD *)&v209[8];
        if ( *(_QWORD *)v209 )
          alloc::raw_vec::handle_error(*(_QWORD *)&v209[8], *(_QWORD *)&v209[16]);
        v121 = (const void *)(v119 + 1);
        v37 = *(_QWORD *)&v209[16];
        core::intrinsics::copy_nonoverlapping::precondition_check(v121, *(_QWORD *)&v209[16], 1LL, 1LL, v103);
        memcpy((void *)v37, v121, (size_t)v103);
        goto LABEL_362;
      }
    }
    goto LABEL_517;
  }
  if ( v112 != 8 )
    goto LABEL_348;
  if ( *(_QWORD *)v111 == 0x6F73692D6C6C7566LL )
  {
    v110 = 0x8000000000000000LL;
    goto LABEL_362;
  }
  if ( *(_QWORD *)v111 != 0x6F73692D676E6F6CLL )
    goto LABEL_348;
  v110 = 0x8000000000000001LL;
LABEL_362:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v276);
  *(_QWORD *)&v272 = v110;
  *((_QWORD *)&v272 + 1) = v37;
  v273 = v103;
LABEL_363:
  *(_QWORD *)&v244 = 0LL;
  *((_QWORD *)&v244 + 1) = 8LL;
  v245 = 0LL;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_73fe86e94af803e79a7413c597bf8ca8_39_llvm_2470886751594806832,
                          14LL,
                          &off_1FEF20) )
  {
    glob::Pattern::new(&v328, asc_3983B, 2LL);
    if ( v328.m256i_i64[0] == 0x8000000000000000LL )
    {
      v340 = v328.m256i_i64[3];
      v339 = *(_OWORD *)&v328.m256i_u64[1];
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v339, &unk_1FE5B8, &off_1FEF38);
    }
    v307 = v330;
    v306 = v329;
    v305 = v328;
    v122 = v245;
    if ( v245 == (_QWORD)v244 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v244);
    v123 = *((_QWORD *)&v244 + 1);
    v124 = 56 * v122;
    v125 = *(_OWORD *)v305.m256i_i8;
    v126 = *(_OWORD *)&v305.m256i_u64[2];
    v127 = v306;
    *(_QWORD *)(*((_QWORD *)&v244 + 1) + v124 + 48) = v307;
    *(_OWORD *)(v123 + v124 + 32) = v127;
    *(_OWORD *)(v123 + v124 + 16) = v126;
    *(_OWORD *)(v123 + v124) = v125;
    v245 = v122 + 1;
    glob::Pattern::new(&v331, asc_3983D, 3LL);
    if ( v331.m256i_i64[0] == 0x8000000000000000LL )
    {
      v338 = v331.m256i_i64[3];
      v337 = *(_OWORD *)&v331.m256i_u64[1];
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v337, &unk_1FE5B8, &off_1FEF50);
    }
    v310 = v333;
    v309 = v332;
    v308 = v331;
    v128 = v245;
    if ( v245 == (_QWORD)v244 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v244);
    v129 = *((_QWORD *)&v244 + 1);
    v130 = 56 * v128;
    v131 = *(_OWORD *)v308.m256i_i8;
    v132 = *(_OWORD *)&v308.m256i_u64[2];
    v133 = v309;
    *(_QWORD *)(*((_QWORD *)&v244 + 1) + v130 + 48) = v310;
    *(_OWORD *)(v129 + v130 + 32) = v133;
    *(_OWORD *)(v129 + v130 + 16) = v132;
    *(_OWORD *)(v129 + v130) = v131;
    v245 = v128 + 1;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    v209,
    a2,
    anon_73fe86e94af803e79a7413c597bf8ca8_50_llvm_2470886751594806832,
    6LL);
  *(_QWORD *)&v211 = anon_73fe86e94af803e79a7413c597bf8ca8_50_llvm_2470886751594806832;
  *((_QWORD *)&v211 + 1) = 6LL;
  if ( *(_QWORD *)v209 )
  {
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_899730b44f50ab02bfd9ca63d23e76e8_2_llvm_11807341281290569930;
    v204 = &off_1FEF68;
    goto LABEL_550;
  }
  *(_OWORD *)&v356[48] = v210;
  *(_OWORD *)&v356[32] = *(_OWORD *)&v209[40];
  *(_OWORD *)&v356[16] = *(_OWORD *)&v209[24];
  *(_OWORD *)v356 = *(_OWORD *)&v209[8];
  v355 = 1LL;
  v357 = 0LL;
  v362[0] = 0LL;
  while ( 1 )
  {
LABEL_374:
    v134 = &v238;
    if ( v355 )
    {
      v238.m256i_i64[0] = *(_QWORD *)v356;
      *(_OWORD *)v209 = *(_OWORD *)&v356[8];
      *(_OWORD *)&v209[16] = *(_OWORD *)&v356[24];
      *(_OWORD *)&v209[32] = *(_OWORD *)&v356[40];
      *(_QWORD *)&v209[48] = *(_QWORD *)&v356[56];
      v134 = (__m256i *)v356;
    }
    v134->m256i_i64[0] = 0LL;
    if ( v238.m256i_i64[0] )
    {
      v357 = v238.m256i_i64[0];
      v361 = *(_QWORD *)&v209[48];
      v360 = *(_OWORD *)&v209[32];
      v359 = *(_OWORD *)&v209[16];
      v358 = *(_OWORD *)v209;
      goto LABEL_383;
    }
    if ( !v362[0] )
      break;
    v135 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v362);
    if ( !v135 )
    {
      v362[0] = 0LL;
      break;
    }
    do
    {
      if ( !*(_QWORD *)(v135 + 8) || *(__int64 *)(v135 + 16) < 0 )
        goto LABEL_517;
      uucore::parser::parse_glob::from_str(v347);
      if ( *(_QWORD *)&v347[0] == 0x8000000000000000LL )
      {
        v141 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v142 = *(_QWORD *)(v141 + 8);
        v143 = *(_QWORD *)(v141 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v142, 1LL, 1LL, v143);
        v296[0] = v142;
        v296[1] = v143;
        v295[0] = v296;
        v295[1] = <&T as core::fmt::Display>::fmt;
        v343[0] = &unk_1FF0B8;
        v343[1] = 2LL;
        v343[4] = 0LL;
        v343[2] = v295;
        v343[3] = 1LL;
        std::io::stdio::_eprint(v343);
        v144 = *(_QWORD *)(v135 + 8);
        if ( !v144 )
          goto LABEL_517;
        v145 = *(_QWORD *)(v135 + 16);
        if ( v145 < 0 )
          goto LABEL_517;
        v320[0] = 0LL;
        v320[1] = v144;
        v320[2] = v145;
        v321 = 1;
        v297[0] = v320;
        v297[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v344[0] = &off_1FF0F8;
        v344[1] = 2LL;
        v344[4] = 0LL;
        v344[2] = v297;
        v344[3] = 1LL;
        std::io::stdio::_eprint(v344);
      }
      else
      {
        v314 = v348;
        v313 = v347[2];
        v312 = v347[1];
        v311 = v347[0];
        v146 = v245;
        if ( v245 == (_QWORD)v244 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v244);
        v136 = *((_QWORD *)&v244 + 1);
        v137 = 56 * v146;
        v138 = v311;
        v139 = v312;
        v140 = v313;
        *(_QWORD *)(*((_QWORD *)&v244 + 1) + v137 + 48) = v314;
        *(_OWORD *)(v136 + v137 + 32) = v140;
        *(_OWORD *)(v136 + v137 + 16) = v139;
        *(_OWORD *)(v136 + v137) = v138;
        v245 = v146 + 1;
      }
      if ( !v357 )
        goto LABEL_374;
LABEL_383:
      v135 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v357);
    }
    while ( v135 );
    v357 = 0LL;
  }
  if ( (_BYTE)v250 == 2 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
      v209,
      a2,
      anon_73fe86e94af803e79a7413c597bf8ca8_49_llvm_2470886751594806832,
      4LL);
    *(_QWORD *)&v211 = anon_73fe86e94af803e79a7413c597bf8ca8_49_llvm_2470886751594806832;
    *((_QWORD *)&v211 + 1) = 4LL;
    if ( !*(_QWORD *)v209 )
    {
      *(_OWORD *)&v364[48] = v210;
      *(_OWORD *)&v364[32] = *(_OWORD *)&v209[40];
      *(_OWORD *)&v364[16] = *(_OWORD *)&v209[24];
      *(_OWORD *)v364 = *(_OWORD *)&v209[8];
      v363 = 1LL;
      v365 = 0LL;
      v370[0] = 0LL;
      while ( 1 )
      {
LABEL_396:
        v147 = &v238;
        if ( v363 )
        {
          v238.m256i_i64[0] = *(_QWORD *)v364;
          *(_OWORD *)v209 = *(_OWORD *)&v364[8];
          *(_OWORD *)&v209[16] = *(_OWORD *)&v364[24];
          *(_OWORD *)&v209[32] = *(_OWORD *)&v364[40];
          *(_QWORD *)&v209[48] = *(_QWORD *)&v364[56];
          v147 = (__m256i *)v364;
        }
        v147->m256i_i64[0] = 0LL;
        if ( v238.m256i_i64[0] )
        {
          v365 = v238.m256i_i64[0];
          v369 = *(_QWORD *)&v209[48];
          v368 = *(_OWORD *)&v209[32];
          v367 = *(_OWORD *)&v209[16];
          v366 = *(_OWORD *)v209;
          goto LABEL_405;
        }
        if ( !v370[0] )
          goto LABEL_414;
        v148 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v370);
        if ( !v148 )
        {
          v370[0] = 0LL;
          goto LABEL_414;
        }
        do
        {
          if ( !*(_QWORD *)(v148 + 8) || *(__int64 *)(v148 + 16) < 0 )
            goto LABEL_517;
          uucore::parser::parse_glob::from_str(v349);
          if ( *(_QWORD *)&v349[0] == 0x8000000000000000LL )
          {
            v154 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            v155 = *(_QWORD *)(v154 + 8);
            v156 = *(_QWORD *)(v154 + 16);
            core::slice::raw::from_raw_parts::precondition_check(v155, 1LL, 1LL, v156);
            v299[0] = v155;
            v299[1] = v156;
            v298[0] = v299;
            v298[1] = <&T as core::fmt::Display>::fmt;
            v345[0] = &unk_1FF0B8;
            v345[1] = 2LL;
            v345[4] = 0LL;
            v345[2] = v298;
            v345[3] = 1LL;
            std::io::stdio::_eprint(v345);
            v157 = *(_QWORD *)(v148 + 8);
            if ( !v157 )
              goto LABEL_517;
            v158 = *(_QWORD *)(v148 + 16);
            if ( v158 < 0 )
              goto LABEL_517;
            v322[0] = 0LL;
            v322[1] = v157;
            v322[2] = v158;
            v323 = 1;
            v300[0] = v322;
            v300[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            v346[0] = &off_1FF0D8;
            v346[1] = 2LL;
            v346[4] = 0LL;
            v346[2] = v300;
            v346[3] = 1LL;
            std::io::stdio::_eprint(v346);
          }
          else
          {
            v318 = v350;
            v317 = v349[2];
            v316 = v349[1];
            v315 = v349[0];
            v159 = v245;
            if ( v245 == (_QWORD)v244 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v244);
            v149 = *((_QWORD *)&v244 + 1);
            v150 = 56 * v159;
            v151 = v315;
            v152 = v316;
            v153 = v317;
            *(_QWORD *)(*((_QWORD *)&v244 + 1) + v150 + 48) = v318;
            *(_OWORD *)(v149 + v150 + 32) = v153;
            *(_OWORD *)(v149 + v150 + 16) = v152;
            *(_OWORD *)(v149 + v150) = v151;
            v245 = v159 + 1;
          }
          if ( !v365 )
            goto LABEL_396;
LABEL_405:
          v148 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v365);
        }
        while ( v148 );
        v365 = 0LL;
      }
    }
    v240 = v210;
    v239 = *(_OWORD *)&v209[40];
    v238 = *(__m256i *)&v209[8];
    v214.m256i_i64[0] = (__int64)&v211;
    v214.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v214.m256i_i64[2] = (__int64)&v238;
    v214.m256i_i64[3] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v229 = &anon_899730b44f50ab02bfd9ca63d23e76e8_2_llvm_11807341281290569930;
    v204 = &off_1FEF80;
LABEL_550:
    v230 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v233 = 0LL;
    v231 = &v214;
    v232 = (__int64 (__fastcall *)())(&dword_0 + 2);
    core::panicking::panic_fmt(&v229, v204);
  }
LABEL_414:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                          a2,
                          anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832,
                          4LL,
                          &anon_11f7478bcb2f9b4befb7b1d3f51baba0_217_llvm_2775220154043362954) == 2 )
  {
    v160 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(
             a2,
             anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832,
             4LL,
             &anon_11f7478bcb2f9b4befb7b1d3f51baba0_218_llvm_2775220154043362954);
    v162 = v161;
    if ( !v160 )
      v162 = 0LL;
  }
  else
  {
    v162 = 0LL;
  }
  v336[1] = anon_d13c0a923ac77d86b5cd3d5212361a5f_62_llvm_13257680528908953851;
  v336[2] = 1LL;
  v336[3] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  v336[4] = 1LL;
  v336[5] = anon_d13c0a923ac77d86b5cd3d5212361a5f_64_llvm_13257680528908953851;
  v336[6] = 1LL;
  v336[7] = anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851;
  v336[8] = 4LL;
  v336[9] = anon_d13c0a923ac77d86b5cd3d5212361a5f_66_llvm_13257680528908953851;
  v336[10] = 1LL;
  v336[11] = anon_d13c0a923ac77d86b5cd3d5212361a5f_65_llvm_13257680528908953851;
  v336[12] = 1LL;
  v336[13] = anon_d13c0a923ac77d86b5cd3d5212361a5f_67_llvm_13257680528908953851;
  v336[14] = 15LL;
  v336[15] = anon_d13c0a923ac77d86b5cd3d5212361a5f_59_llvm_13257680528908953851;
  v336[16] = 1LL;
  v336[17] = anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832;
  v336[18] = 6LL;
  v336[19] = 0LL;
  v336[20] = 9LL;
  v336[0] = a2;
  if ( !core::iter::traits::iterator::Iterator::reduce(v336) )
    v163 = 0LL;
  v164 = (unsigned __int8)v220;
  if ( v162 > v163 )
    v164 = (unsigned __int8)(2 - ((_BYTE)v220 == 1));
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                          a2,
                          anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832,
                          4LL,
                          &anon_11f7478bcb2f9b4befb7b1d3f51baba0_217_llvm_2775220154043362954) == 2 )
  {
    v165 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(
             a2,
             anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832,
             4LL,
             &anon_11f7478bcb2f9b4befb7b1d3f51baba0_218_llvm_2775220154043362954);
    v167 = v166;
    if ( !v165 )
      v167 = 0LL;
  }
  else
  {
    v167 = 0LL;
  }
  v324[1] = anon_73fe86e94af803e79a7413c597bf8ca8_44_llvm_2470886751594806832;
  v324[2] = 5LL;
  v324[3] = 0LL;
  v324[4] = 1LL;
  v324[0] = a2;
  if ( !core::iter::traits::iterator::Iterator::reduce(v324) )
    v168 = 0LL;
  v169 = v167 <= v168;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                          a2,
                          anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832,
                          4LL,
                          &anon_11f7478bcb2f9b4befb7b1d3f51baba0_217_llvm_2775220154043362954) == 2 )
  {
    v170 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(
             a2,
             anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832,
             4LL,
             &anon_11f7478bcb2f9b4befb7b1d3f51baba0_218_llvm_2775220154043362954);
    v172 = v171;
    if ( !v170 )
      v172 = 0LL;
  }
  else
  {
    v172 = 0LL;
  }
  v334[1] = anon_73fe86e94af803e79a7413c597bf8ca8_31_llvm_2470886751594806832;
  v334[2] = 18LL;
  v334[3] = anon_73fe86e94af803e79a7413c597bf8ca8_32_llvm_2470886751594806832;
  v334[4] = 18LL;
  v334[5] = 0LL;
  v334[6] = 2LL;
  v334[0] = a2;
  if ( !core::iter::traits::iterator::Iterator::reduce(v334) )
    v173 = 0LL;
  v174 = v221;
  if ( v172 > v173 )
    v174 = 1;
  v221 = v174;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                          a2,
                          anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832,
                          4LL,
                          &anon_11f7478bcb2f9b4befb7b1d3f51baba0_217_llvm_2775220154043362954) == 2 )
  {
    v175 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(
             a2,
             anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832,
             4LL,
             &anon_11f7478bcb2f9b4befb7b1d3f51baba0_218_llvm_2775220154043362954);
    v177 = v176;
    if ( !v175 )
      v177 = 0LL;
  }
  else
  {
    v177 = 0LL;
  }
  v335[1] = anon_73fe86e94af803e79a7413c597bf8ca8_30_llvm_2470886751594806832;
  v335[2] = 13LL;
  v335[3] = anon_7c1e270846ccb77ed0002241600464f7_23_llvm_18082322705867691778;
  v335[4] = 10LL;
  v335[5] = anon_7c1e270846ccb77ed0002241600464f7_21_llvm_18082322705867691778;
  v335[6] = 6LL;
  v335[7] = anon_7c1e270846ccb77ed0002241600464f7_22_llvm_18082322705867691778;
  v335[8] = 7LL;
  v335[9] = 0LL;
  v335[10] = 4LL;
  v335[0] = a2;
  v178 = core::iter::traits::iterator::Iterator::reduce(v335);
  v180 = v249 & v169;
  if ( !v178 )
    v179 = 0LL;
  v181 = (unsigned __int8)v213;
  if ( v177 > v179 )
    v181 = (unsigned __int8)v221;
  v182 = 3;
  if ( v177 <= v179 )
    v182 = (unsigned __int8)v218;
  if ( !v180 )
  {
    v372[0] = 0x8000000000000000LL;
    if ( !(_BYTE)v252 )
      goto LABEL_473;
    goto LABEL_454;
  }
  lscolors::LsColors::from_env(src);
  if ( src[0] == 0x8000000000000000LL )
    <lscolors::LsColors as core::default::Default>::default(v374);
  else
    memcpy(v374, src, sizeof(v374));
  memcpy(v372, v374, sizeof(v372));
  if ( (_BYTE)v252 )
  {
LABEL_454:
    LOBYTE(v164) = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832,
                             4LL,
                             &off_1FEF98) )
      goto LABEL_475;
    LOBYTE(v351) = 4;
    v183 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
    if ( !v183 )
      alloc::alloc::handle_alloc_error(8LL, 56LL);
    *(_QWORD *)(v183 + 48) = v354;
    v184 = v351;
    v185 = v352;
    *(_OWORD *)(v183 + 32) = v353;
    *(_OWORD *)(v183 + 16) = v185;
    *(_OWORD *)v183 = v184;
    v186 = v253;
    *((_QWORD *)v253 + 1) = v183;
    v186[2] = &off_1FEDD8;
    *v186 = 0x8000000000000000LL;
    if ( v372[0] != 0x8000000000000000LL )
    {
      hashbrown::raw::RawTableInner::drop_inner_table(&v372[13], &v372[17], 22LL, 16LL);
      core::ptr::drop_in_place<lscolors::suffix::SuffixMap>(v372);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<glob::Pattern>>(&v244);
    if ( (__int64)v272 >= (__int64)0x8000000000000004LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(v209, &v272);
      if ( *(_QWORD *)&v209[8] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          &v273,
          *(_QWORD *)v209,
          *(_QWORD *)&v209[8],
          *(_QWORD *)&v209[16]);
    }
LABEL_461:
    alloc::raw_vec::RawVec<T,A>::current_memory(v209, &v255);
    if ( *(_QWORD *)&v209[8] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        v256,
        *(_QWORD *)v209,
        *(_QWORD *)&v209[8],
        *(_QWORD *)&v209[16]);
    if ( v275[0] != 0x8000000000000000LL )
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v275);
    if ( (((_QWORD)v261 != 0x8000000000000000LL) & (unsigned __int8)~(_BYTE)v237) != 0 )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(v209, &v261);
      if ( *(_QWORD *)&v209[8] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          &v262,
          *(_QWORD *)v209,
          *(_QWORD *)&v209[8],
          *(_QWORD *)&v209[16]);
    }
    if ( !(((_QWORD)v259 == 0x8000000000000000LL) | (unsigned __int8)v236) )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(v209, &v259);
      v187 = *(_QWORD *)&v209[8];
      if ( *(_QWORD *)&v209[8] )
        goto LABEL_490;
    }
    goto LABEL_491;
  }
LABEL_473:
  is_dired_arg_present = uu_ls::dired::is_dired_arg_present();
  v189 = (unsigned __int8)v164;
  v164 = 1;
  if ( !is_dired_arg_present )
    v164 = v189;
LABEL_475:
  v190 = 3;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a2,
                           anon_3be94dd0f3faa6e1be050a424a444ce8_27_llvm_3153282441382346823,
                           11LL,
                           &off_1FEFB0) )
  {
    v190 = 2;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_3be94dd0f3faa6e1be050a424a444ce8_28_llvm_3153282441382346823,
                             24LL,
                             &off_1FEFC8) )
    {
      v190 = 1;
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               a2,
                               anon_3be94dd0f3faa6e1be050a424a444ce8_29_llvm_3153282441382346823,
                               39LL,
                               &off_1FEFE0) )
      {
        v191 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_73fe86e94af803e79a7413c597bf8ca8_40_llvm_2470886751594806832,
                 9LL,
                 &off_1FEFF8);
        v190 = ((_BYTE)v215 != 3) & ~v191 & ((_BYTE)v164 != 1);
      }
    }
  }
  v192 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_73fe86e94af803e79a7413c597bf8ca8_43_llvm_2470886751594806832,
           9LL,
           &off_1FF010);
  LOBYTE(v221) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                   a2,
                   anon_73fe86e94af803e79a7413c597bf8ca8_42_llvm_2470886751594806832,
                   7LL,
                   &off_1FF028);
  v292 = v245;
  v291 = v244;
  LOBYTE(v213) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                   a2,
                   anon_73fe86e94af803e79a7413c597bf8ca8_40_llvm_2470886751594806832,
                   9LL,
                   &off_1FF040);
  LOBYTE(v249) = v192;
  v220 = v182;
  memcpy(v376, v372, sizeof(v376));
  LOBYTE(v218) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                   a2,
                   anon_73fe86e94af803e79a7413c597bf8ca8_41_llvm_2470886751594806832,
                   5LL,
                   &off_1FF058);
  v193 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_3be94dd0f3faa6e1be050a424a444ce8_22_llvm_3153282441382346823,
           4LL,
           &off_1FF070);
  v223 = v190;
  v263 = v164;
  v264 = v181;
  v294 = v273;
  v293 = v272;
  v194 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_73fe86e94af803e79a7413c597bf8ca8_52_llvm_2470886751594806832,
           23LL,
           &off_1FF088);
  v195 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832,
                          4LL,
                          &off_1FF0A0) )
    v195 = 0;
  *(_QWORD *)&v373[1] = v292;
  v373[0] = v291;
  memcpy((char *)&v373[1] + 8, v376, 0xA0uLL);
  v196 = (v224 << 24) | ((v225 ^ 1) << 16) | (v254 << 8) | v226;
  *(_OWORD *)((char *)&v373[11] + 8) = v293;
  *((_QWORD *)&v373[12] + 1) = v294;
  v197 = v253;
  memcpy(v253, v373, 0xD0uLL);
  v197[26] = v234;
  v197[27] = v251;
  *((_DWORD *)v197 + 56) = v196;
  *((_WORD *)v197 + 114) = v243;
  *((_BYTE *)v197 + 230) = v249;
  *((_BYTE *)v197 + 231) = v221;
  *((_BYTE *)v197 + 232) = v213;
  *((_BYTE *)v197 + 233) = v218;
  *((_BYTE *)v197 + 234) = v193;
  *((_BYTE *)v197 + 235) = v228;
  *((_BYTE *)v197 + 236) = 0;
  *((_BYTE *)v197 + 237) = v194;
  *((_BYTE *)v197 + 238) = (_BYTE)v252;
  *((_BYTE *)v197 + 239) = v266;
  *((_BYTE *)v197 + 240) = v250;
  *((_BYTE *)v197 + 241) = v265;
  *((_BYTE *)v197 + 242) = v223;
  *((_BYTE *)v197 + 243) = v227;
  *((_BYTE *)v197 + 244) = (_BYTE)v215;
  *((_BYTE *)v197 + 245) = v264;
  *((_BYTE *)v197 + 246) = v222;
  *((_BYTE *)v197 + 247) = v220;
  *((_BYTE *)v197 + 248) = v263;
  *((_BYTE *)v197 + 249) = v267;
  *((_BYTE *)v197 + 250) = v195;
  alloc::raw_vec::RawVec<T,A>::current_memory(v209, &v255);
  if ( *(_QWORD *)&v209[8] )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
      v256,
      *(_QWORD *)v209,
      *(_QWORD *)&v209[8],
      *(_QWORD *)&v209[16]);
  if ( v275[0] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v275);
  if ( (((_QWORD)v261 != 0x8000000000000000LL) & (unsigned __int8)~(_BYTE)v237) != 0 )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v209, &v261);
    if ( *(_QWORD *)&v209[8] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &v262,
        *(_QWORD *)v209,
        *(_QWORD *)&v209[8],
        *(_QWORD *)&v209[16]);
  }
  if ( !(((_QWORD)v259 == 0x8000000000000000LL) | (unsigned __int8)v236) )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v209, &v259);
    v187 = *(_QWORD *)&v209[8];
    if ( *(_QWORD *)&v209[8] )
LABEL_490:
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v260, *(_QWORD *)v209, v187, *(_QWORD *)&v209[16]);
  }
LABEL_491:
  if ( !(((_QWORD)v257 == 0x8000000000000000LL) | (unsigned __int8)v235) )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v209, &v257);
    if ( *(_QWORD *)&v209[8] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &v258,
        *(_QWORD *)v209,
        *(_QWORD *)&v209[8],
        *(_QWORD *)&v209[16]);
  }
  return v253;
}
