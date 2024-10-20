void *__fastcall uu_ls::Config::from(void *a1, _QWORD *a2)
{
  char flag; // bl
  const char *v3; // r15
  size_t v4; // r14
  _DWORD *v5; // rbx
  char v6; // al
  unsigned __int64 v7; // r12
  char v8; // al
  char v9; // bl
  int v10; // eax
  int v11; // ecx
  _QWORD *v12; // r14
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  const char *v22; // rsi
  size_t v23; // rdx
  const char *v24; // r12
  __int64 v25; // r15
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 *v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  char v35; // r13
  __int64 v36; // rcx
  __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rax
  size_t v40; // r15
  __m128i *v41; // rbx
  __int64 v42; // rbp
  __int64 v43; // r13
  __int64 v44; // r14
  int v45; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rbx
  __int64 v48; // rbp
  int v49; // eax
  unsigned __int64 *v50; // rcx
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rdi
  unsigned __int64 *v56; // rcx
  unsigned __int64 *v57; // rax
  _BYTE *v58; // r9
  __int64 v59; // rdx
  unsigned __int64 v60; // rdi
  __int64 v61; // rdx
  unsigned __int64 v62; // rsi
  char v63; // cl
  __int64 v64; // r15
  size_t v65; // rbp
  size_t v66; // rbx
  __int64 v67; // rax
  char *v68; // r15
  _QWORD *v69; // r14
  size_t v70; // rdx
  unsigned __int8 *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // r13
  __int64 v82; // r15
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r12
  unsigned __int8 v92; // bl
  int v93; // ecx
  __int32 v94; // eax
  __int64 v95; // rsi
  __int64 v96; // rdx
  __int32 v97; // eax
  __int64 v98; // r14
  __int64 v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  __m128i v103; // xmm0
  __m128i v104; // xmm1
  _QWORD *v105; // rcx
  __int64 v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rsi
  __int64 v111; // rbp
  unsigned int v112; // eax
  _BYTE *v113; // r14
  signed __int64 v114; // rbx
  bool v115; // al
  __int64 v116; // r14
  unsigned int v117; // eax
  unsigned int v118; // eax
  __int64 v119; // rdx
  unsigned int v120; // eax
  __int64 v121; // r12
  __int64 v122; // rax
  void *v123; // r15
  __int64 v124; // r15
  __int64 v125; // rbx
  unsigned int v126; // r12d
  unsigned int v127; // r15d
  _QWORD *v128; // r14
  unsigned int matched; // eax
  unsigned int v130; // eax
  unsigned int v131; // ecx
  _QWORD *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rax
  char v135; // al
  unsigned int v136; // eax
  __int64 v137; // rax
  char v138; // al
  unsigned int v139; // ecx
  __int64 v140; // rsi
  __int64 v141; // rdi
  unsigned __int8 v142; // al
  __int64 v143; // rax
  unsigned int v144; // r15d
  _QWORD *v145; // rax
  _QWORD *v146; // r14
  _QWORD *v147; // rax
  _QWORD *v148; // r13
  __int64 v149; // rax
  __int64 v150; // rbp
  __int64 v151; // rax
  __int64 v152; // rbx
  __m128i *v153; // rax
  __int64 *v154; // rbx
  _QWORD *v155; // r14
  __int64 *v156; // rsi
  unsigned __int64 v157; // rdx
  __int64 v158; // rcx
  unsigned __int64 v159; // r8
  unsigned __int64 v160; // r9
  char **v161; // rdi
  unsigned __int64 v162; // rax
  __int64 v163; // r10
  unsigned __int64 *v164; // r11
  __int64 v165; // rbx
  unsigned __int64 *v166; // rax
  unsigned __int64 v167; // rdi
  char v168; // al
  unsigned __int64 v169; // rdx
  unsigned __int64 *v170; // r11
  __int64 *v171; // r10
  __int64 *v172; // r11
  __int64 v173; // r10
  char ***v174; // rdx
  char **v175; // rsi
  __int64 v176; // rax
  bool v177; // al
  int v178; // eax
  int v179; // eax
  int v180; // edx
  int v181; // r8d
  unsigned __int64 *i; // rcx
  unsigned __int64 v183; // rsi
  unsigned __int64 v184; // rdx
  __m128i v185; // xmm0
  __m128i v186; // xmm0
  __m128i v187; // xmm1
  _QWORD *v188; // rcx
  __int64 v189; // rsi
  __int64 v190; // rsi
  __int64 v191; // rsi
  __int64 v192; // rsi
  __m128i v193; // xmm0
  __m128i v194; // xmm1
  __int64 v195; // r14
  __int64 v196; // rax
  __int64 v197; // rcx
  __m128i si128; // xmm0
  __m128i v199; // xmm1
  __m128i v200; // xmm0
  __m128i v201; // xmm1
  __int64 v202; // rbx
  __int64 v203; // rax
  __int64 v204; // rcx
  __m128i v205; // xmm0
  __m128i v206; // xmm1
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // rbx
  __int64 (__fastcall *v210)(_QWORD); // rdx
  __int64 v211; // rax
  __m128i v212; // xmm0
  __m128i v213; // xmm1
  __int64 v214; // rdi
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // r15
  __int64 v218; // r14
  __int64 v219; // r14
  __int64 v220; // r14
  __int64 v221; // rax
  __m128i v222; // xmm0
  __m128i v223; // xmm1
  __int64 v224; // rdi
  __int64 v225; // rax
  __int64 v226; // rax
  __int64 v227; // r15
  __int64 v228; // rbp
  __int64 v229; // r15
  __int64 v230; // rbx
  __int64 v231; // r14
  unsigned __int64 v232; // r15
  __int64 v233; // rax
  unsigned __int64 v234; // rdi
  unsigned __int8 v235; // r13
  unsigned __int64 v236; // rsi
  __int64 v237; // rax
  _QWORD *v238; // rax
  __int64 v239; // rsi
  __int64 v240; // rax
  unsigned __int64 v241; // rdi
  unsigned __int64 v242; // rax
  unsigned __int64 v243; // rax
  __int64 v244; // rdx
  int v245; // ebp
  unsigned __int64 v246; // r15
  __int64 v247; // rax
  __int64 v248; // rax
  _QWORD *v249; // rax
  __int64 v250; // rsi
  __int64 v251; // rax
  unsigned __int64 v252; // rdi
  unsigned __int64 v253; // rax
  __int64 v254; // rdx
  bool v255; // r15
  unsigned __int64 v256; // r12
  __int64 v257; // rax
  __int64 v258; // rax
  _QWORD *v259; // rax
  __int64 v260; // rsi
  __int64 v261; // rax
  unsigned __int64 v262; // rdi
  __m128i v263; // xmm0
  __m128i v264; // xmm1
  unsigned __int64 v265; // rax
  unsigned __int64 v266; // rax
  _QWORD *v267; // rdx
  unsigned __int64 v268; // r12
  __int64 v269; // rax
  __int64 v270; // rax
  _QWORD *v271; // rax
  __int64 v272; // rax
  unsigned __int64 v273; // rdi
  unsigned __int64 v274; // rax
  __int64 v275; // rsi
  __int64 v276; // r11
  unsigned __int64 v277; // rax
  char v278; // cl
  int v279; // r15d
  char v280; // bl
  __int8 v281; // r14
  __m128i v282; // xmm0
  __m128i v283; // xmm1
  __m128i v284; // xmm1
  __m128i v285; // xmm2
  __m128i v286; // xmm3
  unsigned __int8 v287; // bl
  unsigned __int128 v288; // rax
  __m128i v289; // xmm0
  __m128i v290; // xmm1
  _QWORD *v291; // rcx
  __int64 v292; // rsi
  signed __int64 v293; // rbx
  __int64 v294; // r14
  char is_dired_arg_present; // al
  int v296; // ecx
  char v297; // r14
  char v298; // r12
  char v299; // r13
  char v300; // bl
  _QWORD *v301; // rbp
  void *result; // rax
  __m128i v303; // xmm0
  unsigned int v304; // eax
  __m128i v305; // xmm0
  bool v306; // zf
  int v307; // eax
  __m128i v308; // xmm0
  char **v309; // rsi
  __m128i *v310; // rax
  __int64 v311; // rcx
  __int64 v312; // rdx
  __int64 *v313; // rdi
  __m128i v314; // xmm0
  __m128i v315; // xmm0
  char **v316; // r8
  __m128i v317; // xmm0
  __int64 *v318; // rdi
  char v320; // [rsp+Ch] [rbp-4FCh]
  unsigned __int8 v321; // [rsp+10h] [rbp-4F8h]
  unsigned __int8 v322; // [rsp+16h] [rbp-4F2h]
  char v323; // [rsp+17h] [rbp-4F1h]
  char v324; // [rsp+17h] [rbp-4F1h]
  void *s2; // [rsp+18h] [rbp-4F0h]
  void *s2a; // [rsp+18h] [rbp-4F0h]
  __int64 s2b; // [rsp+18h] [rbp-4F0h]
  char s2c; // [rsp+18h] [rbp-4F0h]
  unsigned __int64 v329; // [rsp+20h] [rbp-4E8h]
  __int64 v330; // [rsp+20h] [rbp-4E8h]
  __int64 v331; // [rsp+20h] [rbp-4E8h]
  __int64 v332; // [rsp+20h] [rbp-4E8h]
  char v333; // [rsp+20h] [rbp-4E8h]
  __int64 v334; // [rsp+30h] [rbp-4D8h]
  __int64 v335; // [rsp+30h] [rbp-4D8h]
  __int64 (__fastcall *v336)(_QWORD); // [rsp+30h] [rbp-4D8h]
  __int64 (__fastcall *v337)(_QWORD); // [rsp+30h] [rbp-4D8h]
  char v338; // [rsp+30h] [rbp-4D8h]
  char v339; // [rsp+3Ch] [rbp-4CCh]
  __m128i v340; // [rsp+40h] [rbp-4C8h] BYREF
  __int64 v341; // [rsp+50h] [rbp-4B8h]
  __int64 v342; // [rsp+58h] [rbp-4B0h]
  __int64 v343; // [rsp+60h] [rbp-4A8h]
  __int32 v344; // [rsp+6Ch] [rbp-49Ch]
  unsigned int v345; // [rsp+70h] [rbp-498h]
  char v346; // [rsp+74h] [rbp-494h]
  char v347; // [rsp+75h] [rbp-493h]
  char v348; // [rsp+76h] [rbp-492h]
  char v349; // [rsp+77h] [rbp-491h]
  unsigned __int64 v350; // [rsp+78h] [rbp-490h]
  unsigned int v351; // [rsp+84h] [rbp-484h]
  __int32 v352; // [rsp+88h] [rbp-480h]
  __int32 v353; // [rsp+8Ch] [rbp-47Ch]
  __m128i n[12]; // [rsp+90h] [rbp-478h] BYREF
  __m128i *v355; // [rsp+150h] [rbp-3B8h]
  __int64 v356; // [rsp+158h] [rbp-3B0h]
  __int64 v357; // [rsp+160h] [rbp-3A8h]
  int v358; // [rsp+168h] [rbp-3A0h]
  unsigned int v359; // [rsp+16Ch] [rbp-39Ch]
  __m128i v360; // [rsp+170h] [rbp-398h] BYREF
  __m128i v361; // [rsp+180h] [rbp-388h] BYREF
  __m128i v362; // [rsp+190h] [rbp-378h] BYREF
  __int64 v363; // [rsp+1A0h] [rbp-368h]
  __m128i v364; // [rsp+1A8h] [rbp-360h]
  __m128i v365; // [rsp+1B8h] [rbp-350h]
  __m128i v366; // [rsp+1C8h] [rbp-340h]
  __int8 v367; // [rsp+1D8h] [rbp-330h]
  void *v368; // [rsp+1E8h] [rbp-320h]
  __m128i dest[10]; // [rsp+1F0h] [rbp-318h] BYREF
  __m128i src[10]; // [rsp+290h] [rbp-278h] BYREF
  __int64 v371; // [rsp+330h] [rbp-1D8h]
  int v372; // [rsp+338h] [rbp-1D0h]
  int v373; // [rsp+33Ch] [rbp-1CCh]
  __m128i v374; // [rsp+340h] [rbp-1C8h] BYREF
  __m128i v375; // [rsp+350h] [rbp-1B8h] BYREF
  __m128i v376; // [rsp+360h] [rbp-1A8h] BYREF
  __m128i v377[2]; // [rsp+370h] [rbp-198h] BYREF
  __m128i v378; // [rsp+390h] [rbp-178h] BYREF
  __int64 v379; // [rsp+3A0h] [rbp-168h]
  __int64 v380; // [rsp+3B0h] [rbp-158h]
  __int64 v381; // [rsp+3B8h] [rbp-150h]
  __int64 v382; // [rsp+3C0h] [rbp-148h]
  __int64 v383; // [rsp+3C8h] [rbp-140h]
  _QWORD v384[2]; // [rsp+3D0h] [rbp-138h] BYREF
  int v385; // [rsp+3E4h] [rbp-124h]
  int v386; // [rsp+3E8h] [rbp-120h]
  int v387; // [rsp+3ECh] [rbp-11Ch]
  int v388; // [rsp+3F0h] [rbp-118h]
  int v389; // [rsp+3F4h] [rbp-114h]
  __int64 v390; // [rsp+3F8h] [rbp-110h] BYREF
  __int64 v391; // [rsp+400h] [rbp-108h]
  __int64 v392; // [rsp+408h] [rbp-100h]
  __int64 v393; // [rsp+410h] [rbp-F8h] BYREF
  __int64 v394; // [rsp+418h] [rbp-F0h]
  __int64 v395; // [rsp+420h] [rbp-E8h]
  __int64 v396; // [rsp+428h] [rbp-E0h] BYREF
  __int64 v397; // [rsp+430h] [rbp-D8h]
  __int64 v398; // [rsp+438h] [rbp-D0h]
  __m128i *v399; // [rsp+440h] [rbp-C8h]
  _QWORD v400[3]; // [rsp+448h] [rbp-C0h] BYREF
  __int64 *v401; // [rsp+460h] [rbp-A8h]
  __m128i v402; // [rsp+468h] [rbp-A0h] BYREF
  __m128i v403; // [rsp+478h] [rbp-90h] BYREF
  __m128i v404; // [rsp+488h] [rbp-80h] BYREF
  __int64 v405; // [rsp+498h] [rbp-70h]
  __m128i v406; // [rsp+4A0h] [rbp-68h] BYREF
  __m128i v407; // [rsp+4B0h] [rbp-58h] BYREF
  __m128i v408; // [rsp+4C0h] [rbp-48h] BYREF
  __int64 v409; // [rsp+4D0h] [rbp-38h]

  v368 = a1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_e31c85536e11aee39654ff72a53ef708_42_llvm_4239552918814193354,
           7LL);
  v3 = anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    src,
    a2,
    anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354,
    6LL);
  v374.m128i_i64[0] = (__int64)anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354;
  v374.m128i_i64[1] = 6LL;
  if ( src[0].m128i_i32[0] != 2 )
    goto LABEL_664;
  v349 = flag;
  if ( src[0].m128i_i64[1] )
  {
    v4 = *(_QWORD *)(src[0].m128i_i64[1] + 16);
    v5 = *(_DWORD **)(src[0].m128i_i64[1] + 8);
    switch ( v4 )
    {
      case 4uLL:
        if ( *v5 != 1735290732 )
          goto LABEL_671;
        v6 = 1;
        goto LABEL_21;
      case 6uLL:
        v7 = 6LL;
        if ( !bcmp(*(const void **)(src[0].m128i_i64[1] + 8), aAcross, *(_QWORD *)(src[0].m128i_i64[1] + 16)) )
          goto LABEL_17;
        if ( !bcmp(v5, aCommas, v4) )
          goto LABEL_16;
        goto LABEL_671;
      case 7uLL:
        v7 = 6LL;
        if ( !(*v5 ^ 0x62726576 | *(_DWORD *)((char *)v5 + 3) ^ 0x65736F62) )
          goto LABEL_7;
        v10 = *v5 ^ 0x756C6F63;
        v11 = *(_DWORD *)((char *)v5 + 3) ^ 0x736E6D75;
        v9 = 0;
        v321 = 0;
        if ( v10 | v11 )
        {
LABEL_671:
          n[0].m128i_i64[0] = (__int64)&off_1AC428;
          n[0].m128i_i64[1] = 1LL;
          n[1].m128i_i64[0] = (__int64)v384;
          *(__m128i *)((char *)&n[1] + 8) = 0LL;
          core::panicking::panic_fmt(n, &off_1AC438);
        }
        goto LABEL_27;
      case 8uLL:
        if ( *(_QWORD *)v5 != 0x6C61636974726576LL )
          goto LABEL_671;
        v7 = 6LL;
        v9 = 0;
        v321 = 0;
        goto LABEL_27;
      case 0xAuLL:
        if ( bcmp(*(const void **)(src[0].m128i_i64[1] + 8), aHorizontal, *(_QWORD *)(src[0].m128i_i64[1] + 16)) )
          goto LABEL_671;
        v6 = 3;
        goto LABEL_21;
      case 0xDuLL:
        if ( *(_QWORD *)v5 ^ 0x632D656C676E6973LL | *(_QWORD *)((char *)v5 + 5) ^ 0x6E6D756C6F632D65LL )
          goto LABEL_671;
        v6 = 2;
LABEL_21:
        v321 = v6;
        v7 = 6LL;
        v9 = 0;
        break;
      default:
        goto LABEL_671;
    }
    goto LABEL_27;
  }
  v3 = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870;
  v7 = 4LL;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870,
                          4LL) )
  {
LABEL_7:
    v8 = 1;
LABEL_18:
    v321 = v8;
    v9 = 0;
    goto LABEL_27;
  }
  v3 = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_13_llvm_15267917218625265870;
  v7 = 1LL;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_8ad7a2c4114f08ca7db24dfdc43d9a46_13_llvm_15267917218625265870,
                          1LL) )
  {
LABEL_17:
    v8 = 3;
    goto LABEL_18;
  }
  v3 = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_15_llvm_15267917218625265870;
  v7 = 1LL;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          anon_8ad7a2c4114f08ca7db24dfdc43d9a46_15_llvm_15267917218625265870,
                          1LL) )
  {
LABEL_16:
    v8 = 4;
    goto LABEL_18;
  }
  v3 = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  v7 = 1LL;
  v9 = 0;
  v321 = 0;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a2,
                           anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870,
                           1LL) )
  {
    ((void (*)(void))std::io::stdio::stdout)();
    v321 = 2 * (isatty(1) == 0);
    v9 = 1;
    v3 = 0LL;
  }
LABEL_27:
  v12 = a2;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a2,
                           anon_e31c85536e11aee39654ff72a53ef708_15_llvm_4239552918814193354,
                           3LL) )
  {
    LOBYTE(v13) = 2
                - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                    a2,
                    anon_e31c85536e11aee39654ff72a53ef708_16_llvm_4239552918814193354,
                    10LL);
    v358 = v13;
    if ( v321 != 1 )
      goto LABEL_40;
LABEL_31:
    v321 = 1;
    goto LABEL_32;
  }
  v358 = 0;
  if ( v321 == 1 )
    goto LABEL_31;
LABEL_40:
  if ( v9 )
  {
    v15 = a2[1];
    v16 = a2[2];
  }
  else
  {
    v15 = a2[1];
    v17 = a2[2];
    if ( v17 )
    {
      v343 = a2[2];
      v18 = 16 * v17;
      v19 = 40LL;
      v329 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      s2 = (void *)v7;
      while ( 1 )
      {
        if ( *(_QWORD *)(v15 + v20 + 8) == v7 )
        {
          v22 = v3;
          v23 = v7;
          v24 = v3;
          v25 = v15;
          v26 = bcmp(*(const void **)(v15 + v20), v22, v23);
          v15 = v25;
          v3 = v24;
          v7 = (unsigned __int64)s2;
          if ( !v26 )
            break;
        }
        v20 += 16LL;
        v19 += 104LL;
        ++v21;
        if ( v18 == v20 )
        {
          v12 = a2;
          v16 = v343;
          goto LABEL_79;
        }
      }
      v28 = a2[5];
      if ( v21 >= v28 )
        core::panicking::panic_bounds_check(
          v21,
          v28,
          &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
          v27,
          v15);
      v29 = a2[4];
      v30 = *(unsigned __int64 **)(v29 + v19 - 8);
      v31 = *(_QWORD *)(v29 + v19);
      v16 = v343;
      if ( v31 )
      {
        v32 = v30 + 1;
        v329 = *v30;
        v33 = 1LL;
      }
      else
      {
        v33 = 0LL;
        v32 = *(unsigned __int64 **)(v29 + v19 - 8);
      }
      v12 = a2;
      if ( !v33 )
        core::option::unwrap_failed(&off_1AC6E0, 0LL, v31, v30, v15, v343);
      for ( i = &v30[v31]; v32 != i; v329 = v183 )
      {
        v184 = *v32++;
        v183 = v329;
        if ( v329 <= v184 )
          v183 = v184;
      }
      goto LABEL_79;
    }
    v16 = 0LL;
  }
  v329 = 0LL;
LABEL_79:
  n[0].m128i_i64[0] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_16_llvm_15267917218625265870;
  n[0].m128i_i64[1] = 1LL;
  n[1].m128i_i64[0] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_17_llvm_15267917218625265870;
  n[1].m128i_i64[1] = 1LL;
  n[2].m128i_i64[0] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_18_llvm_15267917218625265870;
  n[2].m128i_i64[1] = 15LL;
  n[3].m128i_i64[0] = (__int64)&anon_e31c85536e11aee39654ff72a53ef708_39_llvm_4239552918814193354;
  n[3].m128i_i64[1] = 9LL;
  v36 = v12[4];
  v350 = v12[5];
  v37 = 16 * v16;
  v355 = (__m128i *)(v36 + 97);
  v371 = v36;
  v357 = v36 + 40;
  v38 = 0LL;
  v343 = v16;
  do
  {
    while ( 1 )
    {
      v39 = v38;
      v38 += 16LL;
      if ( v16 )
        break;
      if ( v38 == 64 )
        goto LABEL_32;
    }
    v334 = v38;
    s2a = *(void **)((char *)n[0].m128i_i64 + v39);
    v40 = *(unsigned __int64 *)((char *)&n[0].m128i_u64[1] + v39);
    v41 = v355;
    v42 = 0LL;
    v7 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)(v15 + v42 + 8) == v40 )
      {
        v43 = v15;
        v44 = v37;
        v45 = bcmp(*(const void **)(v15 + v42), s2a, v40);
        v37 = v44;
        v15 = v43;
        if ( !v45 )
          break;
      }
      v42 += 16LL;
      v41 = (__m128i *)((char *)v41 + 104);
      ++v7;
      if ( v37 == v42 )
        goto LABEL_80;
    }
    if ( v7 >= v350 )
LABEL_665:
      core::panicking::panic_bounds_check(
        v7,
        v350,
        &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
        v46,
        v15);
    if ( v41->m128i_i8[0] == 2 )
    {
      v47 = (_QWORD *)v357;
      v48 = 0LL;
      v7 = 0LL;
      while ( 1 )
      {
        if ( *(_QWORD *)(v15 + v48 + 8) == v40 )
        {
          v49 = bcmp(*(const void **)(v15 + v48), s2a, v40);
          v37 = v44;
          v15 = v43;
          if ( !v49 )
            break;
        }
        v48 += 16LL;
        v47 += 13;
        ++v7;
        if ( v37 == v48 )
          goto LABEL_80;
      }
      if ( v7 >= v350 )
        goto LABEL_665;
      v50 = (unsigned __int64 *)*(v47 - 1);
      v51 = &v50[*v47];
      while ( v50 != v51 )
      {
        v52 = *v50++;
        v12 = a2;
        if ( v329 <= v52 )
          goto LABEL_31;
      }
    }
LABEL_80:
    v38 = v334;
    v12 = a2;
    v16 = v343;
  }
  while ( v334 != 64 );
  if ( v343 )
  {
    v53 = (_QWORD *)(v371 + 40);
    v54 = 0LL;
    v55 = 0LL;
    while ( *(_QWORD *)(v15 + v54 + 8) != 1LL || **(_BYTE **)(v15 + v54) != 49 )
    {
      v54 += 16LL;
      v53 += 13;
      ++v55;
      if ( v37 == v54 )
        goto LABEL_32;
    }
    if ( v55 >= v350 )
      core::panicking::panic_bounds_check(
        v55,
        v350,
        &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
        v54,
        v15);
    v56 = (unsigned __int64 *)*(v53 - 1);
    v57 = &v56[*v53];
    v58 = (_BYTE *)(v371 + 97);
    v59 = 0LL;
    v60 = 0LL;
    while ( *(_QWORD *)(v15 + v59 + 8) != 1LL || **(_BYTE **)(v15 + v59) != 49 )
    {
      v59 += 16LL;
      v58 += 104;
      ++v60;
      if ( v37 == v59 )
        goto LABEL_32;
    }
    if ( v60 >= v350 )
      core::panicking::panic_bounds_check(
        v60,
        v350,
        &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
        v56,
        v15);
    if ( *v58 == 2 )
    {
      while ( v56 != v57 )
      {
        v62 = *v56++;
        v61 = 1LL;
        if ( v329 < v62 )
          goto LABEL_117;
      }
      v61 = 0LL;
LABEL_117:
      v63 = 2;
      if ( v61 != 1 )
        v63 = v321;
      v321 = v63;
    }
  }
LABEL_32:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    src,
    v12,
    anon_e31c85536e11aee39654ff72a53ef708_28_llvm_4239552918814193354,
    4LL);
  v374.m128i_i64[0] = (__int64)anon_e31c85536e11aee39654ff72a53ef708_28_llvm_4239552918814193354;
  v374.m128i_i64[1] = 4LL;
  if ( src[0].m128i_i32[0] != 2 )
    goto LABEL_664;
  if ( src[0].m128i_i64[1] )
  {
    v14 = *(_QWORD *)(src[0].m128i_i64[1] + 8);
    switch ( *(_QWORD *)(src[0].m128i_i64[1] + 16) )
    {
      case 4LL:
        switch ( *(_DWORD *)v14 )
        {
          case 0x656E6F6E:
            goto LABEL_45;
          case 0x656D616E:
            LOBYTE(v7) = 1;
            break;
          case 0x656D6974:
            LOBYTE(v7) = 3;
            break;
          default:
            LOBYTE(v7) = 2;
            if ( *(_DWORD *)v14 != 1702521203 )
            {
LABEL_670:
              n[0].m128i_i64[0] = (__int64)&off_1AC450;
              n[0].m128i_i64[1] = 1LL;
              n[1].m128i_i64[0] = (__int64)v384;
              *(__m128i *)((char *)&n[1] + 8) = 0LL;
              core::panicking::panic_fmt(n, &off_1AC460);
            }
            break;
        }
        return result;
      case 5LL:
        LOBYTE(v7) = 6;
        if ( !(*(_DWORD *)v14 ^ 0x74646977 | *(unsigned __int8 *)(v14 + 4) ^ 0x68) )
          break;
        goto LABEL_670;
      case 7LL:
        LOBYTE(v7) = 4;
        if ( *(_DWORD *)v14 ^ 0x73726576 | *(_DWORD *)(v14 + 3) ^ 0x6E6F6973 )
          goto LABEL_670;
        break;
      case 9LL:
        LOBYTE(v7) = 5;
        if ( *(_QWORD *)v14 ^ 0x6F69736E65747865LL | *(unsigned __int8 *)(v14 + 8) ^ 0x6ELL )
          goto LABEL_670;
        break;
      default:
        goto LABEL_670;
    }
  }
  else
  {
    LOBYTE(v7) = 3;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             v12,
                             anon_f495c38c206597a00c0fd0501da6313e_7_llvm_13630389227175191794,
                             1LL) )
    {
      LOBYTE(v7) = 2;
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               v12,
                               anon_f495c38c206597a00c0fd0501da6313e_6_llvm_13630389227175191794,
                               1LL) )
      {
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                v12,
                                anon_f495c38c206597a00c0fd0501da6313e_8_llvm_13630389227175191794,
                                1LL) )
        {
LABEL_45:
          LODWORD(v7) = 0;
        }
        else
        {
          LOBYTE(v7) = 4;
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                   v12,
                                   anon_f495c38c206597a00c0fd0501da6313e_9_llvm_13630389227175191794,
                                   1LL) )
          {
            LODWORD(v7) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            v12,
                            anon_f495c38c206597a00c0fd0501da6313e_10_llvm_13630389227175191794,
                            1LL);
            LOBYTE(v7) = (4 * v7) | 1;
          }
        }
      }
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    src,
    v12,
    anon_e31c85536e11aee39654ff72a53ef708_29_llvm_4239552918814193354,
    4LL);
  v374.m128i_i64[0] = (__int64)anon_e31c85536e11aee39654ff72a53ef708_29_llvm_4239552918814193354;
  v374.m128i_i64[1] = 4LL;
  if ( src[0].m128i_i32[0] != 2 )
    goto LABEL_664;
  if ( src[0].m128i_i64[1] )
  {
    v34 = *(_QWORD *)(src[0].m128i_i64[1] + 8);
    switch ( *(_QWORD *)(src[0].m128i_i64[1] + 16) )
    {
      case 3LL:
        v35 = 1;
        if ( *(_WORD *)v34 ^ 0x7375 | *(unsigned __int8 *)(v34 + 2) ^ 0x65 )
          goto LABEL_74;
        break;
      case 5LL:
        if ( !(*(_DWORD *)v34 ^ 0x6D697463 | *(unsigned __int8 *)(v34 + 4) ^ 0x65) )
          goto LABEL_75;
        if ( *(_DWORD *)v34 ^ 0x6D697461 | *(unsigned __int8 *)(v34 + 4) ^ 0x65 )
        {
          v35 = 3;
          if ( *(_DWORD *)v34 ^ 0x74726962 | *(unsigned __int8 *)(v34 + 4) ^ 0x68 )
            goto LABEL_74;
        }
        else
        {
          v35 = 1;
        }
        break;
      case 6LL:
        if ( *(_DWORD *)v34 ^ 0x74617473 | *(unsigned __int16 *)(v34 + 4) ^ 0x7375 )
        {
          v35 = 1;
          if ( *(_DWORD *)v34 ^ 0x65636361 | *(unsigned __int16 *)(v34 + 4) ^ 0x7373 )
          {
LABEL_74:
            n[0].m128i_i64[0] = (__int64)&off_1AC478;
            n[0].m128i_i64[1] = 1LL;
            n[1].m128i_i64[0] = (__int64)v384;
            *(__m128i *)((char *)&n[1] + 8) = 0LL;
            core::panicking::panic_fmt(n, &off_1AC488);
          }
        }
        else
        {
LABEL_75:
          v35 = 2;
        }
        return result;
      case 8LL:
        v35 = 3;
        if ( *(_QWORD *)v34 != 0x6E6F697461657263LL )
          goto LABEL_74;
        break;
      default:
        goto LABEL_74;
    }
  }
  else
  {
    v35 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             v12,
                             anon_85d03d1a699a17dda65ec78a38b83d9c_11_llvm_14964567593500591213,
                             1LL) )
      v35 = 2
          * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              v12,
              anon_85d03d1a699a17dda65ec78a38b83d9c_12_llvm_14964567593500591213,
              1LL);
  }
  std::env::_var(n, aTerm, 4LL);
  v64 = n[0].m128i_i64[0];
  if ( (!n[0].m128i_i64[0] || n[0].m128i_i64[1] != 0x8000000000000000LL) && n[0].m128i_i64[1] )
    _rust_dealloc(n[1].m128i_i64[0], n[0].m128i_i64[1], 1LL);
  std::env::_var(n, aColorterm, 9LL);
  v65 = n[0].m128i_i64[0];
  if ( (!n[0].m128i_i64[0] || n[0].m128i_i64[1] != 0x8000000000000000LL) && n[0].m128i_i64[1] )
    _rust_dealloc(n[1].m128i_i64[0], n[0].m128i_i64[1], 1LL);
  std::env::_var(n, aTerm, 4LL);
  if ( n[0].m128i_i64[0] )
  {
    s2b = 1LL;
    if ( n[0].m128i_i64[1] != 0x8000000000000000LL && n[0].m128i_i64[1] )
    {
      s2b = 1LL;
      _rust_dealloc(n[1].m128i_i64[0], n[0].m128i_i64[1], 1LL);
    }
    v66 = 0LL;
    v335 = 0LL;
  }
  else
  {
    v335 = n[0].m128i_i64[1];
    v66 = n[1].m128i_u64[1];
    s2b = n[1].m128i_i64[0];
  }
  std::env::_var(n, aColorterm, 9LL);
  if ( n[0].m128i_i64[0] )
  {
    v343 = 1LL;
    if ( n[0].m128i_i64[1] != 0x8000000000000000LL && n[0].m128i_i64[1] )
    {
      v343 = 1LL;
      _rust_dealloc(n[1].m128i_i64[0], n[0].m128i_i64[1], 1LL);
    }
    v67 = 0LL;
    v330 = 0LL;
  }
  else
  {
    v330 = n[0].m128i_i64[1];
    v67 = n[1].m128i_i64[1];
    v343 = n[1].m128i_i64[0];
  }
  v355 = n;
  v348 = v35;
  v388 = v7;
  if ( v66 | v64 )
  {
    if ( v66 )
    {
      v7 = 8LL;
      while ( 1 )
      {
        v68 = *(char **)((char *)&anon_4406f472a8377c7ece58ca9d20f54484_79_llvm_13238753694568376422 + v7 - 8);
        v65 = *(size_t *)((char *)&anon_4406f472a8377c7ece58ca9d20f54484_79_llvm_13238753694568376422 + v7);
        if ( v66 == v65
          && !bcmp(
                (const void *)s2b,
                *(char **)((char *)&anon_4406f472a8377c7ece58ca9d20f54484_79_llvm_13238753694568376422 + v7 - 8),
                v66) )
        {
          break;
        }
        if ( v65 )
        {
          if ( v68[v65 - 1] == 42 && v66 >= --v65 && !bcmp(v68, (const void *)s2b, v65) )
            break;
        }
        v7 += 16LL;
        if ( v7 == 408 )
          goto LABEL_166;
      }
    }
  }
  else
  {
    v65 |= v67;
    if ( !v65 )
    {
LABEL_166:
      if ( v330 )
        _rust_dealloc(v343, v330, 1LL);
      v69 = a2;
      if ( v335 )
        _rust_dealloc(s2b, v335, 1LL);
      goto LABEL_177;
    }
  }
  if ( v330 )
    _rust_dealloc(v343, v330, 1LL);
  v69 = a2;
  if ( v335 )
    _rust_dealloc(s2b, v335, 1LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    src,
    a2,
    &anon_e31c85536e11aee39654ff72a53ef708_35_llvm_4239552918814193354,
    5LL);
  v374.m128i_i64[0] = (__int64)&anon_e31c85536e11aee39654ff72a53ef708_35_llvm_4239552918814193354;
  v374.m128i_i64[1] = 5LL;
  if ( src[0].m128i_i32[0] != 2 )
    goto LABEL_664;
  if ( src[0].m128i_i64[1] )
  {
    v70 = *(_QWORD *)(src[0].m128i_i64[1] + 16);
    v71 = *(unsigned __int8 **)(src[0].m128i_i64[1] + 8);
    LOBYTE(v65) = 1;
    switch ( v70 )
    {
      case 0uLL:
        goto LABEL_178;
      case 3uLL:
        if ( !(*(_WORD *)v71 ^ 0x6579 | v71[2] ^ 0x73) )
          goto LABEL_178;
        if ( !(*(_WORD *)v71 ^ 0x7474 | v71[2] ^ 0x79) )
          goto LABEL_320;
        goto LABEL_177;
      case 4uLL:
        if ( *(_DWORD *)v71 != 1869903201 )
          goto LABEL_177;
        goto LABEL_320;
      case 5uLL:
        LOBYTE(v65) = (*(_DWORD *)v71 ^ 0x63726F66 | v71[4] ^ 0x65) == 0;
        goto LABEL_178;
      case 6uLL:
        if ( !(*(_DWORD *)v71 ^ 0x61776C61 | *((unsigned __int16 *)v71 + 2) ^ 0x7379) )
          goto LABEL_178;
        if ( bcmp(v71, &unk_2DD48, v70) )
          goto LABEL_177;
LABEL_320:
        ((void (*)(void))std::io::stdio::stdout)();
        LOBYTE(v65) = isatty(1) != 0;
        break;
      default:
        goto LABEL_177;
    }
    goto LABEL_178;
  }
  v72 = a2[2];
  if ( v72 )
  {
    v73 = a2[1];
    v74 = 16 * v72;
    v75 = 0LL;
    while ( *(_QWORD *)(v73 + v75 + 8) != 5LL
         || anon_e31c85536e11aee39654ff72a53ef708_35_llvm_4239552918814193354 ^ **(_DWORD **)(v73 + v75) | *(_BYTE *)(*(_QWORD *)(v73 + v75) + 4LL) ^ 0x72 )
    {
      v75 += 16LL;
      if ( v74 == v75 )
        goto LABEL_177;
    }
    LOBYTE(v65) = 1;
    goto LABEL_178;
  }
LABEL_177:
  LODWORD(v65) = 0;
LABEL_178:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v69, "hyperlink", 9LL);
  v374.m128i_i64[0] = (__int64)"hyperlink";
  v374.m128i_i64[1] = 9LL;
  if ( src[0].m128i_i32[0] != 2 )
    goto LABEL_664;
  if ( !src[0].m128i_i64[1] )
    core::option::unwrap_failed(&off_1AC4A0, v69, v76, v77, v78, v79);
  v80 = *(_QWORD *)(src[0].m128i_i64[1] + 8);
  switch ( *(_QWORD *)(src[0].m128i_i64[1] + 16) )
  {
    case 2LL:
      if ( *(_WORD *)v80 != 28526 )
        goto LABEL_669;
      goto LABEL_191;
    case 3LL:
      if ( !(*(_WORD *)v80 ^ 0x6579 | *(unsigned __int8 *)(v80 + 2) ^ 0x73) )
        goto LABEL_195;
      if ( !(*(_WORD *)v80 ^ 0x7474 | *(unsigned __int8 *)(v80 + 2) ^ 0x79) )
        goto LABEL_194;
      goto LABEL_669;
    case 4LL:
      if ( *(_DWORD *)v80 == 1869903201 )
        goto LABEL_194;
      if ( *(_DWORD *)v80 != 1701736302 )
        goto LABEL_669;
      goto LABEL_191;
    case 5LL:
      if ( !(*(_DWORD *)v80 ^ 0x63726F66 | *(unsigned __int8 *)(v80 + 4) ^ 0x65) )
        goto LABEL_195;
      if ( *(_DWORD *)v80 ^ 0x6576656E | *(unsigned __int8 *)(v80 + 4) ^ 0x72 )
        goto LABEL_669;
LABEL_191:
      LODWORD(v7) = 0;
      break;
    case 6LL:
      if ( *(_DWORD *)v80 ^ 0x61776C61 | *(unsigned __int16 *)(v80 + 4) ^ 0x7379 )
      {
        if ( *(_DWORD *)v80 ^ 0x742D6669 | *(unsigned __int16 *)(v80 + 4) ^ 0x7974 )
        {
LABEL_669:
          n[0].m128i_i64[0] = (__int64)&off_1AC4B8;
          n[0].m128i_i64[1] = 1LL;
          n[1].m128i_i64[0] = (__int64)v384;
          *(__m128i *)((char *)&n[1] + 8) = 0LL;
          core::panicking::panic_fmt(n, &off_1AC4C8);
        }
LABEL_194:
        ((void (*)(void))std::io::stdio::stdout)();
        LOBYTE(v7) = isatty(1) != 0;
      }
      else
      {
LABEL_195:
        LOBYTE(v7) = 1;
      }
      break;
    default:
      goto LABEL_669;
  }
  v81 = (__int64)src;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    src,
    v69,
    &anon_4d12444acd339d9ec9ecb6c591c39f29_19_llvm_11628331613161155184,
    10LL);
  v374.m128i_i64[0] = (__int64)&anon_4d12444acd339d9ec9ecb6c591c39f29_19_llvm_11628331613161155184;
  v374.m128i_i64[1] = 10LL;
  if ( src[0].m128i_i32[0] != 2 )
    goto LABEL_664;
  v82 = src[0].m128i_i64[1];
  v387 = v7;
  v389 = v65;
  if ( !src[0].m128i_i64[1] )
  {
    LOBYTE(v65) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                    v69,
                    anon_4d12444acd339d9ec9ecb6c591c39f29_21_llvm_11628331613161155184,
                    2LL);
    goto LABEL_209;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    src,
    v69,
    &anon_4d12444acd339d9ec9ecb6c591c39f29_19_llvm_11628331613161155184,
    10LL);
  v374.m128i_i64[0] = (__int64)&anon_4d12444acd339d9ec9ecb6c591c39f29_19_llvm_11628331613161155184;
  v374.m128i_i64[1] = 10LL;
  if ( src[0].m128i_i32[0] != 2 )
    goto LABEL_664;
  if ( !src[0].m128i_i64[1] )
    core::option::unwrap_failed(&off_1AC578, v69, v83, v84, v85, v86);
  if ( *(_QWORD *)(src[0].m128i_i64[1] + 16) == 2LL && **(_WORD **)(src[0].m128i_i64[1] + 8) == 26995 )
    LOBYTE(v65) = 1;
  else
    LODWORD(v65) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                     v69,
                     anon_4d12444acd339d9ec9ecb6c591c39f29_21_llvm_11628331613161155184,
                     2LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    src,
    v69,
    &anon_4d12444acd339d9ec9ecb6c591c39f29_19_llvm_11628331613161155184,
    10LL);
  v374.m128i_i64[0] = (__int64)&anon_4d12444acd339d9ec9ecb6c591c39f29_19_llvm_11628331613161155184;
  v374.m128i_i64[1] = 10LL;
  if ( src[0].m128i_i32[0] != 2 )
  {
LABEL_664:
    dest[2].m128i_i64[0] = src[2].m128i_i64[0];
    dest[1] = src[1];
    dest[0] = src[0];
    v360.m128i_i64[0] = (__int64)&v374;
    v360.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v361.m128i_i64[0] = (__int64)dest;
    v361.m128i_i64[1] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    n[0].m128i_i64[0] = (__int64)&anon_85d03d1a699a17dda65ec78a38b83d9c_4_llvm_14964567593500591213;
    n[0].m128i_i64[1] = 2LL;
    n[2].m128i_i64[0] = 0LL;
    n[1].m128i_i64[0] = (__int64)&v360;
    n[1].m128i_i64[1] = 2LL;
    core::panicking::panic_fmt(n, &anon_85d03d1a699a17dda65ec78a38b83d9c_6_llvm_14964567593500591213);
  }
  if ( !src[0].m128i_i64[1] )
    core::option::unwrap_failed(&off_1AC590, v69, v87, v88, v89, v90);
  if ( *(_QWORD *)(src[0].m128i_i64[1] + 16) == 14LL
    && !(**(_QWORD **)(src[0].m128i_i64[1] + 8) ^ 0x65722D6E616D7568LL | *(_QWORD *)(*(_QWORD *)(src[0].m128i_i64[1] + 8)
                                                                                   + 6LL) ^ 0x656C626164616572LL) )
  {
    v91 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v69,
                          anon_4d12444acd339d9ec9ecb6c591c39f29_22_llvm_11628331613161155184,
                          9LL);
    v373 = v65 + 1;
    v92 = 1;
    goto LABEL_212;
  }
LABEL_209:
  v92 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v69,
          anon_4d12444acd339d9ec9ecb6c591c39f29_20_llvm_11628331613161155184,
          14LL);
  v91 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                        v69,
                        anon_4d12444acd339d9ec9ecb6c591c39f29_22_llvm_11628331613161155184,
                        9LL);
  v93 = 2;
  if ( !(_BYTE)v65 )
    v93 = v92;
  v373 = v93;
LABEL_212:
  std::env::_var_os(&v390, aBlocksize, 9LL);
  std::env::_var_os(&v393, aBlockSize, 10LL);
  std::env::_var_os(&v396, aLsBlockSize, 13LL);
  std::env::_var_os(v400, aPosixlyCorrect, 15LL);
  if ( v82 )
  {
    std::sys::os_str::bytes::Slice::to_owned(n, *(_QWORD *)(v82 + 8), *(_QWORD *)(v82 + 16));
  }
  else
  {
    v97 = 0;
    v356 = v396;
    if ( v396 != 0x8000000000000000LL )
    {
      v95 = v397;
      v96 = v398;
      LOBYTE(v97) = 1;
      v352 = v97;
      v344 = 0;
      goto LABEL_220;
    }
    v356 = v393;
    if ( v393 != 0x8000000000000000LL )
    {
      v95 = v394;
      v96 = v395;
      LOBYTE(v97) = 1;
      v344 = v97;
      v352 = 0;
      LOBYTE(v97) = 1;
      v353 = v97;
      goto LABEL_221;
    }
    v356 = v390;
    if ( v390 != 0x8000000000000000LL )
    {
      v95 = v391;
      v96 = v392;
      LOBYTE(v97) = 1;
      v344 = v97;
      v352 = 0;
      v353 = 0;
      v339 = 1;
      goto LABEL_222;
    }
    std::sys::os_str::bytes::Slice::to_owned(n, 1LL, 0LL);
  }
  v94 = n[0].m128i_i32[0];
  v95 = n[0].m128i_i64[1];
  v356 = n[0].m128i_i64[0];
  v96 = n[1].m128i_i64[0];
  LOBYTE(v94) = 1;
  v344 = v94;
  v352 = 0;
LABEL_220:
  v353 = 0;
LABEL_221:
  v339 = 0;
LABEL_222:
  v383 = v95;
  if ( (unsigned __int8)v65 | v92 || !v96 )
  {
    if ( v400[0] == 0x8000000000000000LL )
    {
      v101 = 1024LL;
      if ( (_BYTE)v65 )
        v101 = 1000LL;
      v382 = v101;
    }
    else
    {
      v382 = ((unsigned __int8)v91 << 9) + 512LL;
    }
    v381 = 1LL;
LABEL_254:
    v347 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a2,
             anon_e31c85536e11aee39654ff72a53ef708_25_llvm_4239552918814193354,
             6LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            anon_e31c85536e11aee39654ff72a53ef708_26_llvm_4239552918814193354,
                            8LL) )
    {
      v111 = 0LL;
    }
    else
    {
      v112 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a2,
               anon_8ad7a2c4114f08ca7db24dfdc43d9a46_17_llvm_15267917218625265870,
               1LL);
      v111 = v112;
      LOBYTE(v111) = v112 ^ 1;
    }
    v323 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a2,
             anon_8ad7a2c4114f08ca7db24dfdc43d9a46_16_llvm_15267917218625265870,
             1LL);
    v346 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a2,
             anon_8ad7a2c4114f08ca7db24dfdc43d9a46_18_llvm_15267917218625265870,
             15LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      src,
      a2,
      anon_e31c85536e11aee39654ff72a53ef708_24_llvm_4239552918814193354,
      5LL);
    v374.m128i_i64[0] = (__int64)anon_e31c85536e11aee39654ff72a53ef708_24_llvm_4239552918814193354;
    v374.m128i_i64[1] = 5LL;
    if ( src[0].m128i_i32[0] != 2 )
      goto LABEL_666;
    if ( src[0].m128i_i64[1] )
    {
      v113 = *(_BYTE **)(src[0].m128i_i64[1] + 8);
      v114 = *(_QWORD *)(src[0].m128i_i64[1] + 16);
      if ( v114 )
        v115 = *v113 == 48;
      else
        v115 = 0;
      v118 = 2 * !v115 + 8;
      v119 = 10LL;
      if ( (unsigned __int64)v114 >= 2 )
        v119 = v118;
      v120 = core::num::<impl u16>::from_str_radix(v113, v114, v119);
      if ( (v120 & 1) == 0 )
      {
        v91 = HIWORD(v120);
        goto LABEL_284;
      }
      LOWORD(v91) = -1;
      if ( (v120 & 0xFF00) != 0x200 )
      {
        if ( v114 )
        {
          if ( v114 < 0 )
          {
            v121 = 0LL;
          }
          else
          {
            v121 = 1LL;
            v122 = _rust_alloc(v114, 1LL);
            if ( v122 )
            {
              v123 = (void *)v122;
              goto LABEL_323;
            }
          }
          alloc::raw_vec::handle_error(v121, v114);
        }
        v123 = &dword_0 + 1;
LABEL_323:
        memcpy(v123, v113, v114);
        n[0].m128i_i8[0] = 0;
        n[0].m128i_i64[1] = v114;
        n[1].m128i_i64[0] = (__int64)v123;
        n[1].m128i_i64[1] = v114;
        v137 = _rust_alloc(56LL, 8LL);
        if ( !v137 )
          alloc::alloc::handle_alloc_error(8LL, 56LL);
        goto LABEL_405;
      }
    }
    else
    {
      std::env::_var_os(src, aColumns_0, 7LL);
      v116 = src[0].m128i_i64[0];
      if ( src[0].m128i_i64[0] == 0x8000000000000000LL )
      {
        v117 = terminal_size::unix::terminal_size();
        v91 = 80LL;
        if ( (_WORD)v117 )
          v91 = HIWORD(v117);
      }
      else
      {
        v124 = src[0].m128i_i64[1];
        v125 = src[1].m128i_i64[0];
        std::sys::os_str::bytes::Slice::to_str(n, src[0].m128i_i64[1], src[1].m128i_i64[0]);
        if ( n[0].m128i_i64[0]
          || (v126 = core::num::<impl core::str::traits::FromStr for u16>::from_str(
                       n[0].m128i_i64[1],
                       n[1].m128i_i64[0]),
              (v126 & 1) != 0) )
        {
          if ( uucore::UTIL_NAME != 2 )
            once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          dest[0] = _mm_loadu_si128((const __m128i *)&xmmword_1B7CA8);
          v91 = (__int64)dest;
          v360.m128i_i64[0] = (__int64)dest;
          v360.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          n[0].m128i_i64[0] = (__int64)&unk_1AC538;
          n[0].m128i_i64[1] = 2LL;
          n[2].m128i_i64[0] = 0LL;
          v81 = (__int64)&v360;
          n[1].m128i_i64[0] = (__int64)&v360;
          n[1].m128i_i64[1] = 1LL;
          std::io::stdio::_eprint(n);
          dest[0].m128i_i64[0] = 1LL;
          dest[0].m128i_i64[1] = v124;
          dest[1].m128i_i64[0] = v125;
          dest[1].m128i_i8[8] = 1;
          v360.m128i_i64[0] = (__int64)dest;
          v360.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
          n[0].m128i_i64[0] = (__int64)&off_1AC558;
          n[0].m128i_i64[1] = 2LL;
          n[2].m128i_i64[0] = 0LL;
          n[1].m128i_i64[0] = (__int64)&v360;
          n[1].m128i_i64[1] = 1LL;
          std::io::stdio::_eprint(n);
          LOWORD(v91) = 80;
        }
        else
        {
          v91 = HIWORD(v126);
        }
        if ( v116 )
          _rust_dealloc(v124, v116, 1LL);
      }
    }
LABEL_284:
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            a2,
                            &anon_e31c85536e11aee39654ff72a53ef708_22_llvm_4239552918814193354,
                            18LL) )
    {
      v81 = 0LL;
    }
    else
    {
      LOBYTE(v81) = 1;
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               a2,
                               anon_e31c85536e11aee39654ff72a53ef708_23_llvm_4239552918814193354,
                               18LL) )
      {
        ((void (*)(void))std::io::stdio::stdout)();
        LOBYTE(v81) = isatty(1) == 0;
      }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      src,
      a2,
      &anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354,
      13LL);
    v374.m128i_i64[0] = (__int64)&anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354;
    v374.m128i_i64[1] = 13LL;
    if ( src[0].m128i_i32[0] == 2 )
    {
      v127 = (unsigned __int8)v81;
      v128 = a2;
      if ( src[0].m128i_i64[1] )
      {
        matched = uu_ls::match_quoting_style_name(
                    *(_BYTE **)(src[0].m128i_i64[1] + 8),
                    *(_QWORD *)(src[0].m128i_i64[1] + 16),
                    v81);
        v81 = matched;
        v351 = HIWORD(matched);
        if ( BYTE2(matched) == 4 )
        {
          n[0].m128i_i64[0] = (__int64)&off_1AC4E0;
          v309 = &off_1AC4F0;
          v310 = (__m128i *)v384;
          v311 = 1LL;
          v312 = 0LL;
LABEL_667:
          v313 = (__int64 *)v355;
          v355->m128i_i64[1] = v311;
          v313[4] = 0LL;
          v313[2] = (__int64)v310;
          v313[3] = v312;
          core::panicking::panic_fmt(v313, v309);
        }
        v345 = matched >> 8;
        goto LABEL_297;
      }
      v130 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a2,
               anon_806b356b6f45880ddaa2d5affbddf45c_23_llvm_15944453427201852302,
               7LL);
      LOBYTE(v131) = 3;
      v351 = v131;
      if ( (_BYTE)v130 )
        goto LABEL_295;
      v130 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a2,
               anon_806b356b6f45880ddaa2d5affbddf45c_22_llvm_15944453427201852302,
               6LL);
      if ( (_BYTE)v130 )
      {
        LOBYTE(v130) = 2;
        v351 = v130;
        v81 = 0LL;
LABEL_295:
        v345 = v130;
LABEL_296:
        v128 = a2;
        goto LABEL_297;
      }
      v136 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a2,
               anon_806b356b6f45880ddaa2d5affbddf45c_24_llvm_15944453427201852302,
               10LL);
      if ( (_BYTE)v136 )
      {
        LOBYTE(v136) = 2;
        v351 = v136;
        v345 = v136;
        LOBYTE(v81) = 2;
        goto LABEL_296;
      }
      v138 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a2,
               anon_e31c85536e11aee39654ff72a53ef708_45_llvm_4239552918814193354,
               5LL);
      v345 = v139;
      v128 = a2;
      if ( !v138 )
      {
        std::env::_var(&v360, aQuotingStyle, 13LL);
        if ( v360.m128i_i64[0] )
        {
          v140 = v360.m128i_i64[1];
          if ( v360.m128i_i64[1] == 0x8000000000000000LL || !v360.m128i_i64[1] )
            goto LABEL_658;
          v141 = v361.m128i_i64[0];
LABEL_657:
          _rust_dealloc(v141, v140, 1LL);
LABEL_658:
          ((void (*)(void))std::io::stdio::stdout)();
          v81 = 1LL;
          v306 = isatty(1) == 0;
          v307 = 3;
          if ( !v306 )
            v307 = v127;
          v351 = v307;
          if ( v306 )
            v81 = v127;
          v345 = 0;
          goto LABEL_296;
        }
        v303 = _mm_loadu_si128((const __m128i *)&v360.m128i_u64[1]);
        v340 = v303;
        v341 = v361.m128i_i64[1];
        v304 = uu_ls::match_quoting_style_name((_BYTE *)v303.m128i_i64[1], v361.m128i_u64[1], v81);
        v81 = v304;
        v351 = HIWORD(v304);
        if ( BYTE2(v304) == 4 )
        {
          std::env::args(dest);
          <std::env::Args as core::iter::traits::iterator::Iterator>::next(src, dest);
          if ( src[0].m128i_i64[0] == 0x8000000000000000LL )
          {
            <T as alloc::slice::hack::ConvertVec>::to_vec(n, aLs, 2LL);
            v375.m128i_i64[0] = n[1].m128i_i64[0];
            v305 = _mm_loadu_si128(n);
          }
          else
          {
            v375.m128i_i64[0] = src[1].m128i_i64[0];
            v305 = _mm_loadu_si128(src);
          }
          v374 = v305;
          src[0].m128i_i64[0] = (__int64)&v374;
          src[0].m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          src[1].m128i_i64[0] = (__int64)&v340;
          src[1].m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          n[0].m128i_i64[0] = (__int64)&unk_1AC508;
          n[0].m128i_i64[1] = 3LL;
          n[2].m128i_i64[0] = 0LL;
          n[1].m128i_i64[0] = (__int64)src;
          n[1].m128i_i64[1] = 2LL;
          std::io::stdio::_eprint(n);
          if ( v374.m128i_i64[0] )
            _rust_dealloc(v374.m128i_i64[1], v374.m128i_i64[0], 1LL);
          <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(dest);
          v140 = v340.m128i_i64[0];
          if ( !v340.m128i_i64[0] )
            goto LABEL_658;
          v141 = v340.m128i_i64[1];
          goto LABEL_657;
        }
        v345 = v304 >> 8;
        v128 = a2;
        if ( v340.m128i_i64[0] )
          _rust_dealloc(v303.m128i_i64[1], v340.m128i_i64[0], 1LL);
      }
LABEL_297:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        src,
        v128,
        anon_e31c85536e11aee39654ff72a53ef708_37_llvm_4239552918814193354,
        15LL);
      v374.m128i_i64[0] = (__int64)anon_e31c85536e11aee39654ff72a53ef708_37_llvm_4239552918814193354;
      v374.m128i_i64[1] = 15LL;
      if ( src[0].m128i_i32[0] == 2 )
      {
        v132 = a2;
        if ( src[0].m128i_i64[1] )
        {
          v320 = 0;
          v133 = *(_QWORD *)(src[0].m128i_i64[1] + 8);
          switch ( *(_QWORD *)(src[0].m128i_i64[1] + 16) )
          {
            case 4LL:
              v320 = 0;
              break;
            case 5LL:
              v320 = (*(_DWORD *)v133 ^ 0x73616C73 | *(unsigned __int8 *)(v133 + 4) ^ 0x68) == 0;
              break;
            case 8LL:
              if ( *(_QWORD *)v133 == 0x7966697373616C63LL )
                goto LABEL_336;
              goto LABEL_314;
            case 9LL:
              if ( *(_QWORD *)v133 ^ 0x7079742D656C6966LL | *(unsigned __int8 *)(v133 + 8) ^ 0x65LL )
                goto LABEL_314;
              v320 = 2;
              break;
            default:
              goto LABEL_340;
          }
          goto LABEL_340;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
          src,
          a2,
          anon_2fc61395128ff650a82ff2a09ac6a647_2_llvm_11692075339398190683,
          8LL);
        v374.m128i_i64[0] = (__int64)anon_2fc61395128ff650a82ff2a09ac6a647_2_llvm_11692075339398190683;
        v374.m128i_i64[1] = 8LL;
        if ( src[0].m128i_i32[0] == 2 )
        {
          v132 = a2;
          if ( src[0].m128i_i64[1] )
          {
            v134 = *(_QWORD *)(src[0].m128i_i64[1] + 8);
            switch ( *(_QWORD *)(src[0].m128i_i64[1] + 16) )
            {
              case 3LL:
                if ( !(*(_WORD *)v134 ^ 0x6579 | *(unsigned __int8 *)(v134 + 2) ^ 0x73) )
                  goto LABEL_336;
                if ( *(_WORD *)v134 ^ 0x7474 | *(unsigned __int8 *)(v134 + 2) ^ 0x79 )
                  goto LABEL_314;
                goto LABEL_338;
              case 4LL:
                if ( *(_DWORD *)v134 == 1869903201 )
                  goto LABEL_338;
                goto LABEL_314;
              case 5LL:
                if ( !(*(_DWORD *)v134 ^ 0x6576656E | *(unsigned __int8 *)(v134 + 4) ^ 0x72) )
                  goto LABEL_314;
                v320 = 3 * ((*(_DWORD *)v134 ^ 0x63726F66 | *(unsigned __int8 *)(v134 + 4) ^ 0x65) == 0);
                goto LABEL_340;
              case 6LL:
                if ( !(*(_DWORD *)v134 ^ 0x61776C61 | *(unsigned __int16 *)(v134 + 4) ^ 0x7379) )
                {
LABEL_336:
                  v320 = 3;
                  goto LABEL_340;
                }
                if ( *(_DWORD *)v134 ^ 0x742D6669 | *(unsigned __int16 *)(v134 + 4) ^ 0x7974 )
                {
LABEL_314:
                  v320 = 0;
                  goto LABEL_340;
                }
LABEL_338:
                std::io::stdio::stdout(a2);
                v135 = 3 * (isatty(1) != 0);
                break;
              default:
                goto LABEL_314;
            }
          }
          else
          {
            v320 = 1;
            v132 = a2;
            if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                    a2,
                                    anon_2fc61395128ff650a82ff2a09ac6a647_0_llvm_11692075339398190683,
                                    1LL) )
              goto LABEL_340;
            v135 = 2
                 * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                     a2,
                     anon_2fc61395128ff650a82ff2a09ac6a647_1_llvm_11692075339398190683,
                     9LL);
          }
          v320 = v135;
          v132 = a2;
LABEL_340:
          v142 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                   v132,
                   anon_e31c85536e11aee39654ff72a53ef708_45_llvm_4239552918814193354,
                   5LL);
          v359 = v127;
          v385 = v91;
          v386 = v111;
          v322 = v142;
          if ( ((v142 ^ 1) & (v321 != 1)) != 0 )
          {
            v342 = 0x8000000000000002LL;
            v155 = a2;
          }
          else
          {
            v143 = _rust_alloc(120LL, 8LL);
            if ( !v143 )
              alloc::alloc::handle_alloc_error(8LL, 120LL);
            v91 = v143;
            v144 = v81;
            v145 = (_QWORD *)_rust_alloc(8LL, 1LL);
            if ( !v145 )
              alloc::raw_vec::handle_error(1LL, 8LL);
            v146 = v145;
            s2b = 0x6F73692D6C6C7566LL;
            *v145 = 0x6F73692D6C6C7566LL;
            v147 = (_QWORD *)_rust_alloc(8LL, 1LL);
            if ( !v147 )
              alloc::raw_vec::handle_error(1LL, 8LL);
            v148 = v147;
            *v147 = 0x6F73692D676E6F6CLL;
            v149 = _rust_alloc(3LL, 1LL);
            if ( !v149 )
              alloc::raw_vec::handle_error(1LL, 3LL);
            v150 = v149;
            *(_BYTE *)(v149 + 2) = 111;
            *(_WORD *)v149 = 29545;
            v151 = _rust_alloc(6LL, 1LL);
            if ( !v151 )
              alloc::raw_vec::handle_error(1LL, 6LL);
            v152 = v151;
            *(_WORD *)(v151 + 4) = 25964;
            *(_DWORD *)v151 = 1633906540;
            v153 = (__m128i *)_rust_alloc(48LL, 1LL);
            if ( !v153 )
              alloc::raw_vec::handle_error(1LL, 48LL);
            qmemcpy(&v153[1], "%H:%M) for a 'date'-style format", 32);
            *v153 = _mm_loadu_si128((const __m128i *)&xmmword_2DBBF);
            *(_QWORD *)v91 = 8LL;
            *(_QWORD *)(v91 + 8) = v146;
            *(_QWORD *)(v91 + 16) = 8LL;
            *(_QWORD *)(v91 + 24) = 8LL;
            *(_QWORD *)(v91 + 32) = v148;
            *(_QWORD *)(v91 + 40) = 8LL;
            *(_QWORD *)(v91 + 48) = 3LL;
            *(_QWORD *)(v91 + 56) = v150;
            *(_QWORD *)(v91 + 64) = 3LL;
            *(_QWORD *)(v91 + 72) = 6LL;
            *(_QWORD *)(v91 + 80) = v152;
            *(_QWORD *)(v91 + 88) = 6LL;
            *(_QWORD *)(v91 + 96) = 48LL;
            *(_QWORD *)(v91 + 104) = v153;
            *(_QWORD *)(v91 + 112) = 48LL;
            v374.m128i_i64[0] = 5LL;
            v374.m128i_i64[1] = v91;
            v375.m128i_i64[0] = 5LL;
            v154 = &anon_e31c85536e11aee39654ff72a53ef708_38_llvm_4239552918814193354;
            v155 = a2;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
              src,
              a2,
              &anon_e31c85536e11aee39654ff72a53ef708_38_llvm_4239552918814193354,
              10LL);
            v340.m128i_i64[0] = (__int64)&anon_e31c85536e11aee39654ff72a53ef708_38_llvm_4239552918814193354;
            v340.m128i_i64[1] = 10LL;
            if ( src[0].m128i_i32[0] != 2 )
            {
              dest[2].m128i_i64[0] = src[2].m128i_i64[0];
              v315 = _mm_loadu_si128(src);
              dest[1] = _mm_loadu_si128(&src[1]);
              dest[0] = v315;
              v360.m128i_i64[0] = (__int64)&v340;
              v360.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
              v361.m128i_i64[0] = (__int64)dest;
              v361.m128i_i64[1] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
              n[0].m128i_i64[0] = (__int64)&anon_85d03d1a699a17dda65ec78a38b83d9c_4_llvm_14964567593500591213;
              n[0].m128i_i64[1] = 2LL;
              n[2].m128i_i64[0] = 0LL;
              n[1].m128i_i64[0] = (__int64)&v360;
              n[1].m128i_i64[1] = 2LL;
              core::panicking::panic_fmt(n, &anon_85d03d1a699a17dda65ec78a38b83d9c_6_llvm_14964567593500591213);
            }
            v81 = v144;
            v111 = src[0].m128i_i64[1];
            if ( src[0].m128i_i64[1] )
            {
              v156 = &anon_e31c85536e11aee39654ff72a53ef708_39_llvm_4239552918814193354;
              if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                       a2,
                                       &anon_e31c85536e11aee39654ff72a53ef708_39_llvm_4239552918814193354,
                                       9LL) )
                goto LABEL_706;
              v157 = a2[2];
              v161 = &off_1AC3C8;
              if ( !v157 )
                goto LABEL_663;
              v159 = a2[1];
              v157 *= 16LL;
              v158 = 40LL;
              v156 = 0LL;
              v162 = 0LL;
              while ( 1 )
              {
                if ( *(__int64 *)((char *)v156 + v159 + 8) == 9 )
                {
                  v160 = anon_e31c85536e11aee39654ff72a53ef708_39_llvm_4239552918814193354 ^ **(_QWORD **)((char *)v156 + v159) | *(_BYTE *)(*(__int64 *)((char *)v156 + v159) + 8) ^ 0x65u;
                  if ( !v160 )
                    break;
                }
                v156 += 2;
                v158 += 104LL;
                ++v162;
                if ( (__int64 *)v157 == v156 )
                  goto LABEL_663;
              }
              v156 = (__int64 *)a2[5];
              if ( v162 >= (unsigned __int64)v156 )
                goto LABEL_690;
              v163 = a2[4];
              v164 = *(unsigned __int64 **)(v163 + v158 - 8);
              v165 = *(_QWORD *)(v163 + v158);
              if ( v165 )
              {
                v166 = v164 + 1;
                v167 = *v164;
                v158 = 1LL;
                v170 = &v164[v165];
                while ( 1 )
                {
                  v160 = v167;
                  if ( v166 == v170 )
                    break;
                  v167 = *v166++;
                }
              }
              else
              {
                v158 = 0LL;
              }
              v171 = (__int64 *)(v163 + 40);
              v172 = 0LL;
              v161 = &off_1AC3E0;
              v162 = 0LL;
              while ( 1 )
              {
                if ( *(__int64 *)((char *)v172 + v159 + 8) == 10 )
                {
                  v154 = (__int64 *)(anon_e31c85536e11aee39654ff72a53ef708_38_llvm_4239552918814193354 ^ **(_QWORD **)((char *)v172 + v159) | *(_WORD *)(*(__int64 *)((char *)v172 + v159) + 8) ^ 0x656Cu);
                  if ( !v154 )
                    break;
                }
                v172 += 2;
                v171 += 13;
                ++v162;
                if ( (__int64 *)v157 == v172 )
                  goto LABEL_663;
              }
              v155 = a2;
              if ( v162 >= (unsigned __int64)v156 )
LABEL_690:
                core::panicking::panic_bounds_check(
                  v162,
                  v156,
                  &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
                  v158,
                  v159);
              v159 = *(v171 - 1);
              v173 = *v171;
              if ( v173 )
              {
                v174 = (char ***)(v159 + 8);
                v175 = *(char ***)v159;
                v176 = 1LL;
                v159 += 8 * v173;
                while ( 1 )
                {
                  v161 = v175;
                  if ( v174 == (char ***)v159 )
                    break;
                  v175 = *v174++;
                }
                v157 = v159;
              }
              else
              {
                v176 = 0LL;
                v157 = v159;
              }
              v177 = v176 != 1;
              LOBYTE(v157) = v160 > (unsigned __int64)v161;
              if ( v158 == 1 && (unsigned __int8)v157 | v177 )
              {
LABEL_390:
                v342 = 0x8000000000000000LL;
              }
              else
              {
LABEL_706:
                v156 = *(__int64 **)(v111 + 8);
                v158 = *(_QWORD *)(v111 + 16);
                v161 = &off_1AC3F8;
                switch ( v158 )
                {
                  case 0LL:
                    goto LABEL_663;
                  case 3LL:
                    v157 = *((unsigned __int8 *)v156 + 2) ^ 0x6Fu;
                    LOWORD(v157) = *(_WORD *)v156 ^ 0x7369 | *((unsigned __int8 *)v156 + 2) ^ 0x6F;
                    if ( (_WORD)v157 )
                      goto LABEL_386;
                    v342 = 0x8000000000000002LL;
                    break;
                  case 6LL:
                    v178 = *(_DWORD *)v156 ^ 0x61636F6C;
                    v157 = v178 | *((unsigned __int16 *)v156 + 2) ^ 0x656Cu;
                    if ( v178 | *((unsigned __int16 *)v156 + 2) ^ 0x656C )
                      goto LABEL_386;
                    v342 = 0x8000000000000003LL;
                    break;
                  case 8LL:
                    if ( *v156 == 0x6F73692D6C6C7566LL )
                      goto LABEL_390;
                    if ( *v156 == 0x6F73692D676E6F6CLL )
                    {
                      v342 = 0x8000000000000001LL;
                    }
                    else
                    {
LABEL_386:
                      v179 = *(unsigned __int8 *)v156;
                      if ( (v179 & 0x80u) != 0 )
                      {
                        v180 = v179 & 0x1F;
                        v160 = *((_BYTE *)v156 + 1) & 0x3F;
                        if ( (unsigned __int8)v179 <= 0xDFu )
                        {
                          v157 = (unsigned int)v160 | (v180 << 6);
                          v179 = v157;
                        }
                        else
                        {
                          v160 = (unsigned int)((_DWORD)v160 << 6);
                          v181 = v160 | *((_BYTE *)v156 + 2) & 0x3F;
                          if ( (unsigned __int8)v179 < 0xF0u )
                          {
                            v157 = (unsigned int)(v180 << 12);
                            v159 = (unsigned int)v157 | v181;
                            v179 = v159;
                          }
                          else
                          {
                            v157 = (unsigned __int8)(v179 & 7) << 18;
                            v159 = (unsigned int)(v181 << 6);
                            v179 = v157 | v159 | *((_BYTE *)v156 + 3) & 0x3F;
                          }
                        }
                      }
                      if ( v179 != 43 )
                      {
                        if ( v179 != (_DWORD)&loc_10FFFC + 4 )
                        {
                          <alloc::string::String as core::clone::Clone>::clone(dest, v111);
                          n[3].m128i_i64[0] = v375.m128i_i64[0];
                          n[2] = v374;
                          v185 = _mm_loadu_si128(dest);
                          n[1].m128i_i64[1] = dest[1].m128i_i64[0];
                          n[0].m128i_i8[0] = 6;
                          *(__m128i *)((char *)n + 8) = v185;
                          v137 = _rust_alloc(56LL, 8LL);
                          if ( !v137 )
                            alloc::alloc::handle_alloc_error(8LL, 56LL);
LABEL_405:
                          *(_QWORD *)(v137 + 48) = n[3].m128i_i64[0];
                          v186 = _mm_loadu_si128(n);
                          v187 = _mm_loadu_si128(&n[1]);
                          *(__m128i *)(v137 + 32) = _mm_loadu_si128(&n[2]);
                          *(__m128i *)(v137 + 16) = v187;
                          *(__m128i *)v137 = v186;
                          v188 = v368;
                          *((_QWORD *)v368 + 1) = v137;
                          v188[2] = &off_1AC5E0;
                          *v188 = 0x8000000000000000LL;
                          goto LABEL_632;
                        }
LABEL_663:
                        core::option::unwrap_failed(v161, v156, v157, v158, v159, v160);
                      }
                      if ( v158 != 1 && *((char *)v156 + 1) <= -65 )
                        core::str::slice_error_fail(
                          *(_QWORD *)(v111 + 8),
                          *(_QWORD *)(v111 + 16),
                          1LL,
                          v158,
                          &off_1AC410);
                      <T as alloc::slice::hack::ConvertVec>::to_vec(n, (char *)v156 + 1, v158 - 1);
                      v380 = n[0].m128i_i64[1];
                      v342 = n[0].m128i_i64[0];
                      v154 = (__int64 *)n[1].m128i_i64[0];
                    }
                    break;
                  default:
                    goto LABEL_386;
                }
              }
            }
            else
            {
              v168 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                       a2,
                       &anon_e31c85536e11aee39654ff72a53ef708_39_llvm_4239552918814193354,
                       9LL);
              v169 = 0x8000000000000003LL;
              if ( v168 )
                v169 = 0x8000000000000000LL;
              v342 = v169;
            }
            if ( *(_QWORD *)v91 )
              _rust_dealloc(*(_QWORD *)(v91 + 8), *(_QWORD *)v91, 1LL);
            v189 = *(_QWORD *)(v91 + 24);
            if ( v189 )
              _rust_dealloc(*(_QWORD *)(v91 + 32), v189, 1LL);
            v190 = *(_QWORD *)(v91 + 48);
            if ( v190 )
              _rust_dealloc(*(_QWORD *)(v91 + 56), v190, 1LL);
            v191 = *(_QWORD *)(v91 + 72);
            if ( v191 )
              _rust_dealloc(*(_QWORD *)(v91 + 80), v191, 1LL);
            v401 = v154;
            v192 = *(_QWORD *)(v91 + 96);
            if ( v192 )
              _rust_dealloc(*(_QWORD *)(v91 + 104), v192, 1LL);
            _rust_dealloc(v91, 120LL, 8LL);
          }
          v340.m128i_i64[0] = 0LL;
          v340.m128i_i64[1] = 8LL;
          v341 = 0LL;
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                   v155,
                                   anon_e31c85536e11aee39654ff72a53ef708_30_llvm_4239552918814193354,
                                   14LL) )
            goto LABEL_428;
          glob::Pattern::new(n, asc_2DEF0, 2LL);
          if ( n[0].m128i_i64[0] == 0x8000000000000000LL )
          {
            v316 = &off_1AC650;
          }
          else
          {
            dest[3].m128i_i64[0] = n[3].m128i_i64[0];
            v193 = _mm_loadu_si128(n);
            v194 = _mm_loadu_si128(&n[1]);
            dest[2] = _mm_loadu_si128(&n[2]);
            dest[1] = v194;
            dest[0] = v193;
            v195 = v341;
            if ( v341 == v340.m128i_i64[0] )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v340);
            v196 = v340.m128i_i64[1];
            v197 = 56 * v195;
            *(_QWORD *)(v340.m128i_i64[1] + v197 + 48) = dest[3].m128i_i64[0];
            si128 = _mm_load_si128(dest);
            v199 = _mm_load_si128(&dest[1]);
            *(__m128i *)(v196 + v197 + 32) = _mm_load_si128(&dest[2]);
            *(__m128i *)(v196 + v197 + 16) = v199;
            *(__m128i *)(v196 + v197) = si128;
            v341 = v195 + 1;
            glob::Pattern::new(n, asc_2DEF2, 3LL);
            if ( n[0].m128i_i64[0] != 0x8000000000000000LL )
            {
              dest[3].m128i_i64[0] = n[3].m128i_i64[0];
              v200 = _mm_loadu_si128(n);
              v201 = _mm_loadu_si128(&n[1]);
              dest[2] = _mm_loadu_si128(&n[2]);
              dest[1] = v201;
              dest[0] = v200;
              v202 = v341;
              if ( v341 == v340.m128i_i64[0] )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v340);
              v203 = v340.m128i_i64[1];
              v204 = 56 * v202;
              *(_QWORD *)(v340.m128i_i64[1] + v204 + 48) = dest[3].m128i_i64[0];
              v205 = _mm_load_si128(dest);
              v206 = _mm_load_si128(&dest[1]);
              *(__m128i *)(v203 + v204 + 32) = _mm_load_si128(&dest[2]);
              *(__m128i *)(v203 + v204 + 16) = v206;
              *(__m128i *)(v203 + v204) = v205;
              v341 = v202 + 1;
LABEL_428:
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
                n,
                a2,
                anon_e31c85536e11aee39654ff72a53ef708_41_llvm_4239552918814193354,
                6LL);
              v372 = v81;
              v374.m128i_i64[0] = (__int64)anon_e31c85536e11aee39654ff72a53ef708_41_llvm_4239552918814193354;
              v374.m128i_i64[1] = 6LL;
              if ( n[0].m128i_i64[0] )
              {
                src[2].m128i_i64[0] = n[2].m128i_i64[1];
                v314 = _mm_loadu_si128((const __m128i *)&n[0].m128i_u64[1]);
                src[1] = _mm_loadu_si128((const __m128i *)&n[1].m128i_u64[1]);
                src[0] = v314;
                v360.m128i_i64[0] = (__int64)&v374;
                v360.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
                v361.m128i_i64[0] = (__int64)src;
                v361.m128i_i64[1] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                dest[0].m128i_i64[0] = (__int64)&anon_85d03d1a699a17dda65ec78a38b83d9c_4_llvm_14964567593500591213;
                v399 = dest;
                goto LABEL_688;
              }
              v324 = v323 ^ 1;
              v331 = n[0].m128i_i64[1];
              v209 = n[1].m128i_i64[1];
              v343 = n[1].m128i_i64[0];
              v350 = n[2].m128i_u64[1];
              v355 = (__m128i *)n[2].m128i_i64[0];
              v371 = n[3].m128i_i64[1];
              v357 = n[3].m128i_i64[0];
              v210 = 0LL;
              v399 = dest;
              while ( 1 )
              {
                v214 = s2b;
                if ( !v210 )
                {
LABEL_448:
                  v210 = (__int64 (__fastcall *)(_QWORD))v331;
                  v331 = 0LL;
                  v214 = v357;
                  v91 = v350;
                  v111 = (__int64)v355;
                  v81 = v343;
                  if ( !v210 )
                  {
                    if ( (_BYTE)v358 == 2 )
                    {
                      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
                        n,
                        a2,
                        anon_e31c85536e11aee39654ff72a53ef708_40_llvm_4239552918814193354,
                        4LL);
                      v374.m128i_i64[0] = (__int64)anon_e31c85536e11aee39654ff72a53ef708_40_llvm_4239552918814193354;
                      v374.m128i_i64[1] = 4LL;
                      if ( !n[0].m128i_i64[0] )
                      {
                        v332 = n[0].m128i_i64[1];
                        v220 = n[1].m128i_i64[1];
                        v343 = n[1].m128i_i64[0];
                        v350 = n[2].m128i_u64[1];
                        v355 = (__m128i *)n[2].m128i_i64[0];
                        v371 = n[3].m128i_i64[1];
                        v357 = n[3].m128i_i64[0];
                        v210 = 0LL;
                        while ( 1 )
                        {
                          v224 = s2b;
                          if ( !v210 )
                            goto LABEL_470;
                          while ( !v209 || v209 == v81 )
                          {
                            while ( v91 && v91 != v220 )
                            {
                              v225 = v91 + 24;
                              v209 = *(_QWORD *)(v91 + 8);
                              v207 = *(_QWORD *)(v91 + 16);
                              v81 = v209 + 32 * v207;
                              v91 += 24LL;
                              if ( v207 )
                                goto LABEL_460;
                            }
                            if ( v224 && v224 != v371 )
                            {
                              s2b = v224 + 32;
                              v209 = 0LL;
                              goto LABEL_461;
                            }
LABEL_470:
                            v210 = (__int64 (__fastcall *)(_QWORD))v332;
                            v332 = 0LL;
                            v224 = v357;
                            v81 = v350;
                            v209 = (__int64)v355;
                            v91 = v343;
                            if ( !v210 )
                              goto LABEL_471;
                          }
                          v225 = v91;
LABEL_460:
                          s2b = v224;
                          v224 = v209;
                          v209 += 32LL;
                          v91 = v225;
LABEL_461:
                          v337 = v210;
                          v226 = v210(v224);
                          v227 = *(_QWORD *)(v226 + 8);
                          v228 = *(_QWORD *)(v226 + 16);
                          uucore::parser::parse_glob::from_str(&v406, v227, v228);
                          if ( v406.m128i_i64[0] == 0x8000000000000000LL )
                          {
                            if ( uucore::UTIL_NAME != 2 )
                              once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
                            dest[0] = _mm_loadu_si128((const __m128i *)&xmmword_1B7CA8);
                            src[0].m128i_i64[0] = (__int64)dest;
                            src[0].m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
                            n[0].m128i_i64[0] = (__int64)&unk_1AC680;
                            n[0].m128i_i64[1] = 2LL;
                            n[2].m128i_i64[0] = 0LL;
                            n[1].m128i_i64[0] = (__int64)src;
                            n[1].m128i_i64[1] = 1LL;
                            std::io::stdio::_eprint(n);
                            dest[0].m128i_i64[0] = 0LL;
                            dest[0].m128i_i64[1] = v227;
                            dest[1].m128i_i64[0] = v228;
                            dest[1].m128i_i8[8] = 1;
                            src[0].m128i_i64[0] = (__int64)dest;
                            src[0].m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
                            n[0].m128i_i64[0] = (__int64)&off_1AC6A0;
                            n[0].m128i_i64[1] = 2LL;
                            n[2].m128i_i64[0] = 0LL;
                            n[1].m128i_i64[0] = (__int64)src;
                            n[1].m128i_i64[1] = 1LL;
                            std::io::stdio::_eprint(n);
                            v210 = v337;
                          }
                          else
                          {
                            v229 = v341;
                            if ( v341 == v340.m128i_i64[0] )
                              alloc::raw_vec::RawVec<T,A>::grow_one(&v340);
                            v221 = v340.m128i_i64[1];
                            v207 = 56 * v229;
                            *(_QWORD *)(v340.m128i_i64[1] + v207 + 48) = v409;
                            v222 = _mm_loadu_si128(&v406);
                            v223 = _mm_loadu_si128(&v407);
                            *(__m128i *)(v221 + v207 + 32) = _mm_loadu_si128(&v408);
                            *(__m128i *)(v221 + v207 + 16) = v223;
                            *(__m128i *)(v221 + v207) = v222;
                            v341 = v229 + 1;
                            v210 = v337;
                          }
                        }
                      }
                      src[2].m128i_i64[0] = n[2].m128i_i64[1];
                      v317 = _mm_loadu_si128((const __m128i *)&n[0].m128i_u64[1]);
                      src[1] = _mm_loadu_si128((const __m128i *)&n[1].m128i_u64[1]);
                      src[0] = v317;
                      v360.m128i_i64[0] = (__int64)&v374;
                      v360.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
                      v361.m128i_i64[0] = (__int64)src;
                      v361.m128i_i64[1] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                      dest[0].m128i_i64[0] = (__int64)&anon_85d03d1a699a17dda65ec78a38b83d9c_4_llvm_14964567593500591213;
LABEL_688:
                      v318 = (__int64 *)v399;
                      v399->m128i_i64[1] = 2LL;
                      v318[4] = 0LL;
                      v318[2] = (__int64)&v360;
                      v318[3] = 2LL;
                      core::panicking::panic_fmt(
                        v318,
                        &anon_85d03d1a699a17dda65ec78a38b83d9c_6_llvm_14964567593500591213);
                    }
LABEL_471:
                    v230 = a2[1];
                    v231 = a2[2];
                    if ( !v231 )
                    {
                      v232 = 0LL;
                      v239 = 0LL;
                      v235 = v372;
                      goto LABEL_503;
                    }
                    v207 = 16 * v231;
                    v210 = (__int64 (__fastcall *)(_QWORD))(&qword_60 + 1);
                    v232 = 0LL;
                    v233 = 0LL;
                    v234 = 0LL;
                    v235 = v372;
                    while ( *(_QWORD *)(v230 + v233 + 8) != 4LL
                         || **(_DWORD **)(v230 + v233) != *(_DWORD *)anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354 )
                    {
                      v233 += 16LL;
                      v210 = (__int64 (__fastcall *)(_QWORD))((char *)v210 + 104);
                      ++v234;
                      if ( v207 == v233 )
                        goto LABEL_487;
                    }
                    v236 = a2[5];
                    if ( v234 >= v236 )
                      goto LABEL_675;
                    v237 = a2[4];
                    if ( *((_BYTE *)v210 + v237) == 2 )
                    {
                      v238 = (_QWORD *)(v237 + 40);
                      v232 = 0LL;
                      v210 = 0LL;
                      v234 = 0LL;
                      while ( 1 )
                      {
                        if ( *(_QWORD *)((char *)v210 + v230 + 8) == 4LL )
                        {
                          v208 = **(unsigned int **)((char *)v210 + v230);
                          if ( (_DWORD)v208 == *(_DWORD *)anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354 )
                            break;
                        }
                        v210 = (__int64 (__fastcall *)(_QWORD))((char *)v210 + 16);
                        v238 += 13;
                        ++v234;
                        if ( (__int64 (__fastcall *)(_QWORD))v207 == v210 )
                          goto LABEL_487;
                      }
                      if ( v234 < v236 )
                      {
                        if ( *v238 )
                          v232 = *(_QWORD *)*(v238 - 1);
                        else
                          v232 = 0LL;
                        goto LABEL_487;
                      }
LABEL_675:
                      core::panicking::panic_bounds_check(
                        v234,
                        v236,
                        &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
                        v207,
                        v208);
                    }
                    v232 = 0LL;
LABEL_487:
                    v208 = 97LL;
                    v239 = 0LL;
                    v240 = 0LL;
                    v241 = 0LL;
                    while ( 1 )
                    {
                      if ( *(_QWORD *)(v230 + v240 + 8) == 1LL )
                      {
                        v210 = *(__int64 (__fastcall **)(_QWORD))(v230 + v240);
                        if ( *(_BYTE *)v210 == 120 )
                          break;
                      }
                      v240 += 16LL;
                      v208 += 104LL;
                      ++v241;
                      if ( v207 == v240 )
                        goto LABEL_503;
                    }
                    v242 = a2[5];
                    if ( v241 >= v242 )
                      goto LABEL_693;
                    v210 = (__int64 (__fastcall *)(_QWORD))a2[4];
                    if ( *((_BYTE *)v210 + v208) != 2 )
                      goto LABEL_502;
                    v210 = (__int64 (__fastcall *)(_QWORD))((char *)v210 + 40);
                    v239 = 0LL;
                    v208 = 0LL;
                    v241 = 0LL;
                    while ( *(_QWORD *)(v230 + v208 + 8) != 1LL || **(_BYTE **)(v230 + v208) != 120 )
                    {
                      v208 += 16LL;
                      v210 = (__int64 (__fastcall *)(_QWORD))((char *)v210 + 104);
                      ++v241;
                      if ( v207 == v208 )
                        goto LABEL_503;
                    }
                    if ( v241 >= v242 )
LABEL_693:
                      core::panicking::panic_bounds_check(
                        v241,
                        a2[5],
                        &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
                        v207,
                        v208);
                    if ( *(_QWORD *)v210 )
                    {
                      v239 = **((_QWORD **)v210 - 1);
                      goto LABEL_503;
                    }
LABEL_502:
                    v239 = 0LL;
LABEL_503:
                    n[0].m128i_i64[0] = (__int64)a2;
                    n[0].m128i_i64[1] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_13_llvm_15267917218625265870;
                    n[1].m128i_i64[0] = 1LL;
                    n[1].m128i_i64[1] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
                    n[2].m128i_i64[0] = 1LL;
                    n[2].m128i_i64[1] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_15_llvm_15267917218625265870;
                    n[3].m128i_i64[0] = 1LL;
                    n[3].m128i_i64[1] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870;
                    n[4].m128i_i64[0] = 4LL;
                    n[4].m128i_i64[1] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_17_llvm_15267917218625265870;
                    n[5].m128i_i64[0] = 1LL;
                    n[5].m128i_i64[1] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_16_llvm_15267917218625265870;
                    n[6].m128i_i64[0] = 1LL;
                    n[6].m128i_i64[1] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_18_llvm_15267917218625265870;
                    n[7].m128i_i64[0] = 15LL;
                    n[7].m128i_i64[1] = (__int64)anon_8ad7a2c4114f08ca7db24dfdc43d9a46_10_llvm_15267917218625265870;
                    n[8].m128i_i64[0] = 1LL;
                    n[8].m128i_i64[1] = (__int64)anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354;
                    n[9].m128i_i64[0] = 6LL;
                    n[9].m128i_i64[1] = 1LL;
                    n[10].m128i_i64[0] = 9LL;
                    v243 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(
                             n,
                             v239,
                             v210,
                             v207,
                             v208);
                    LOBYTE(v207) = v321 == 1;
                    LOBYTE(v244) = 2 - (v321 == 1);
                    v245 = v321;
                    if ( v232 > v243 )
                      v245 = (unsigned __int8)v244;
                    if ( v231 )
                    {
                      v207 = 16 * v231;
                      v244 = 97LL;
                      v246 = 0LL;
                      v247 = 0LL;
                      v234 = 0LL;
                      while ( *(_QWORD *)(v230 + v247 + 8) != 4LL
                           || **(_DWORD **)(v230 + v247) != *(_DWORD *)anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354 )
                      {
                        v247 += 16LL;
                        v244 += 104LL;
                        ++v234;
                        if ( v207 == v247 )
                          goto LABEL_521;
                      }
                      v236 = a2[5];
                      if ( v234 >= v236 )
                        goto LABEL_675;
                      v248 = a2[4];
                      if ( *(_BYTE *)(v248 + v244) != 2 )
                        goto LABEL_520;
                      v249 = (_QWORD *)(v248 + 40);
                      v246 = 0LL;
                      v244 = 0LL;
                      v234 = 0LL;
                      while ( 1 )
                      {
                        if ( *(_QWORD *)(v230 + v244 + 8) == 4LL )
                        {
                          v208 = **(unsigned int **)(v230 + v244);
                          if ( (_DWORD)v208 == *(_DWORD *)anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354 )
                            break;
                        }
                        v244 += 16LL;
                        v249 += 13;
                        ++v234;
                        if ( v207 == v244 )
                          goto LABEL_521;
                      }
                      if ( v234 >= v236 )
                        goto LABEL_675;
                      if ( *v249 )
                        v246 = *(_QWORD *)*(v249 - 1);
                      else
LABEL_520:
                        v246 = 0LL;
LABEL_521:
                      v208 = 97LL;
                      v250 = 0LL;
                      v251 = 0LL;
                      v252 = 0LL;
                      while ( 1 )
                      {
                        if ( *(_QWORD *)(v230 + v251 + 8) == 5LL )
                        {
                          v244 = anon_e31c85536e11aee39654ff72a53ef708_35_llvm_4239552918814193354 ^ **(_DWORD **)(v230 + v251) | *(_BYTE *)(*(_QWORD *)(v230 + v251) + 4LL) ^ 0x72u;
                          if ( !(_DWORD)v244 )
                            break;
                        }
                        v251 += 16LL;
                        v208 += 104LL;
                        ++v252;
                        if ( v207 == v251 )
                          goto LABEL_535;
                      }
                      v253 = a2[5];
                      if ( v252 >= v253 )
                        goto LABEL_692;
                      v244 = a2[4];
                      if ( *(_BYTE *)(v244 + v208) != 2 )
                        goto LABEL_534;
                      v244 += 40LL;
                      v250 = 0LL;
                      v208 = 0LL;
                      v252 = 0LL;
                      while ( *(_QWORD *)(v230 + v208 + 8) != 5LL
                           || anon_e31c85536e11aee39654ff72a53ef708_35_llvm_4239552918814193354 ^ **(_DWORD **)(v230 + v208) | *(_BYTE *)(*(_QWORD *)(v230 + v208) + 4LL) ^ 0x72 )
                      {
                        v208 += 16LL;
                        v244 += 104LL;
                        ++v252;
                        if ( v207 == v208 )
                          goto LABEL_535;
                      }
                      if ( v252 >= v253 )
LABEL_692:
                        core::panicking::panic_bounds_check(
                          v252,
                          a2[5],
                          &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
                          v207,
                          v208);
                      if ( *(_QWORD *)v244 )
                      {
                        v250 = **(_QWORD **)(v244 - 8);
                        goto LABEL_535;
                      }
                    }
                    else
                    {
                      v246 = 0LL;
                    }
LABEL_534:
                    v250 = 0LL;
LABEL_535:
                    n[0].m128i_i64[0] = (__int64)a2;
                    n[0].m128i_i64[1] = (__int64)&anon_e31c85536e11aee39654ff72a53ef708_35_llvm_4239552918814193354;
                    n[1].m128i_i64[0] = 5LL;
                    n[1].m128i_i64[1] = 1LL;
                    n[2].m128i_i64[0] = 1LL;
                    v255 = v246 <= <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(
                                     n,
                                     v250,
                                     v244,
                                     v207,
                                     v208);
                    if ( v231 )
                    {
                      v207 = 16 * v231;
                      v254 = 97LL;
                      v256 = 0LL;
                      v257 = 0LL;
                      v234 = 0LL;
                      while ( *(_QWORD *)(v230 + v257 + 8) != 4LL
                           || **(_DWORD **)(v230 + v257) != *(_DWORD *)anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354 )
                      {
                        v257 += 16LL;
                        v254 += 104LL;
                        ++v234;
                        if ( v207 == v257 )
                          goto LABEL_551;
                      }
                      v236 = a2[5];
                      if ( v234 >= v236 )
                        goto LABEL_675;
                      v258 = a2[4];
                      if ( *(_BYTE *)(v258 + v254) == 2 )
                      {
                        v259 = (_QWORD *)(v258 + 40);
                        v256 = 0LL;
                        v254 = 0LL;
                        v234 = 0LL;
                        while ( 1 )
                        {
                          if ( *(_QWORD *)(v230 + v254 + 8) == 4LL )
                          {
                            v208 = **(unsigned int **)(v230 + v254);
                            if ( (_DWORD)v208 == *(_DWORD *)anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354 )
                              break;
                          }
                          v254 += 16LL;
                          v259 += 13;
                          ++v234;
                          if ( v207 == v254 )
                            goto LABEL_551;
                        }
                        if ( v234 >= v236 )
                          goto LABEL_675;
                        if ( *v259 )
                          v256 = *(_QWORD *)*(v259 - 1);
                        else
                          v256 = 0LL;
                      }
                      else
                      {
                        v256 = 0LL;
                      }
LABEL_551:
                      v208 = 97LL;
                      v260 = 0LL;
                      v261 = 0LL;
                      v262 = 0LL;
                      while ( 1 )
                      {
                        if ( *(_QWORD *)(v230 + v261 + 8) == 18LL )
                        {
                          v263 = _mm_loadu_si128((const __m128i *)&anon_e31c85536e11aee39654ff72a53ef708_22_llvm_4239552918814193354);
                          v264 = _mm_cvtsi32_si128(0x7372u);
                          v254 = (unsigned int)_mm_movemask_epi8(
                                                 _mm_and_si128(
                                                   _mm_cmpeq_epi8(
                                                     _mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)(v230 + v261)
                                                                                           + 16LL)),
                                                     v264),
                                                   _mm_cmpeq_epi8(
                                                     _mm_loadu_si128((const __m128i *)*(_QWORD *)(v230 + v261)),
                                                     v263)));
                          if ( (_DWORD)v254 == 0xFFFF )
                            break;
                        }
                        v261 += 16LL;
                        v208 += 104LL;
                        ++v262;
                        if ( v207 == v261 )
                          goto LABEL_566;
                      }
                      v265 = a2[5];
                      if ( v262 >= v265 )
                        goto LABEL_694;
                      v254 = a2[4];
                      if ( *(_BYTE *)(v254 + v208) != 2 )
                        goto LABEL_565;
                      v254 += 40LL;
                      v260 = 0LL;
                      v208 = 0LL;
                      v262 = 0LL;
                      while ( *(_QWORD *)(v230 + v208 + 8) != 18LL
                           || _mm_movemask_epi8(
                                _mm_and_si128(
                                  _mm_cmpeq_epi8(
                                    _mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)(v230 + v208) + 16LL)),
                                    v264),
                                  _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v230 + v208)), v263))) != 0xFFFF )
                      {
                        v208 += 16LL;
                        v254 += 104LL;
                        ++v262;
                        if ( v207 == v208 )
                          goto LABEL_566;
                      }
                      if ( v262 >= v265 )
LABEL_694:
                        core::panicking::panic_bounds_check(
                          v262,
                          a2[5],
                          &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
                          v207,
                          v208);
                      if ( *(_QWORD *)v254 )
                      {
                        v260 = **(_QWORD **)(v254 - 8);
                        goto LABEL_566;
                      }
                    }
                    else
                    {
                      v256 = 0LL;
                    }
LABEL_565:
                    v260 = 0LL;
LABEL_566:
                    n[0].m128i_i64[0] = (__int64)a2;
                    n[0].m128i_i64[1] = (__int64)&anon_e31c85536e11aee39654ff72a53ef708_22_llvm_4239552918814193354;
                    n[1].m128i_i64[0] = 18LL;
                    n[1].m128i_i64[1] = (__int64)anon_e31c85536e11aee39654ff72a53ef708_23_llvm_4239552918814193354;
                    n[2].m128i_i64[0] = 18LL;
                    n[2].m128i_i64[1] = 1LL;
                    n[3].m128i_i64[0] = 2LL;
                    v266 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(
                             n,
                             v260,
                             v254,
                             v207,
                             v208);
                    v207 = v359;
                    if ( v256 > v266 )
                      v207 = 1LL;
                    v359 = v207;
                    if ( !v231 )
                    {
                      v268 = 0LL;
                      v275 = 0LL;
                      v276 = (__int64)a2;
                      goto LABEL_599;
                    }
                    v207 = 16 * v231;
                    v267 = &qword_60 + 1;
                    v268 = 0LL;
                    v269 = 0LL;
                    v234 = 0LL;
                    while ( *(_QWORD *)(v230 + v269 + 8) != 4LL
                         || **(_DWORD **)(v230 + v269) != *(_DWORD *)anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354 )
                    {
                      v269 += 16LL;
                      v267 += 13;
                      ++v234;
                      if ( v207 == v269 )
                        goto LABEL_584;
                    }
                    v236 = a2[5];
                    if ( v234 >= v236 )
                      goto LABEL_675;
                    v270 = a2[4];
                    if ( *((_BYTE *)v267 + v270) == 2 )
                    {
                      v271 = (_QWORD *)(v270 + 40);
                      v268 = 0LL;
                      v267 = 0LL;
                      v234 = 0LL;
                      while ( 1 )
                      {
                        if ( *(_QWORD *)((char *)v267 + v230 + 8) == 4LL )
                        {
                          v208 = **(unsigned int **)((char *)v267 + v230);
                          if ( (_DWORD)v208 == *(_DWORD *)anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354 )
                            break;
                        }
                        v267 += 2;
                        v271 += 13;
                        ++v234;
                        if ( (_QWORD *)v207 == v267 )
                          goto LABEL_584;
                      }
                      if ( v234 >= v236 )
                        goto LABEL_675;
                      if ( *v271 )
                        v268 = *(_QWORD *)*(v271 - 1);
                      else
                        v268 = 0LL;
                    }
                    else
                    {
                      v268 = 0LL;
                    }
LABEL_584:
                    v208 = 97LL;
                    v275 = 0LL;
                    v272 = 0LL;
                    v273 = 0LL;
                    v276 = (__int64)a2;
                    while ( 1 )
                    {
                      if ( *(_QWORD *)(v230 + v272 + 8) == 13LL )
                      {
                        v267 = (_QWORD *)(anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354 ^ **(_QWORD **)(v230 + v272) | *(__int64 *)((char *)&anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354 + 5) ^ *(_QWORD *)(*(_QWORD *)(v230 + v272) + 5LL));
                        if ( !v267 )
                          break;
                      }
                      v272 += 16LL;
                      v208 += 104LL;
                      ++v273;
                      if ( v207 == v272 )
                        goto LABEL_599;
                    }
                    v274 = a2[5];
                    if ( v273 >= v274 )
                      goto LABEL_695;
                    v267 = (_QWORD *)a2[4];
                    if ( *((_BYTE *)v267 + v208) != 2 )
                      goto LABEL_597;
                    v267 += 5;
                    v275 = 0LL;
                    v208 = 0LL;
                    v273 = 0LL;
                    while ( *(_QWORD *)(v230 + v208 + 8) != 13LL
                         || anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354 ^ **(_QWORD **)(v230 + v208) | *(__int64 *)((char *)&anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354 + 5) ^ *(_QWORD *)(*(_QWORD *)(v230 + v208) + 5LL) )
                    {
                      v208 += 16LL;
                      v267 += 13;
                      ++v273;
                      if ( v207 == v208 )
                        goto LABEL_599;
                    }
                    if ( v273 >= v274 )
LABEL_695:
                      core::panicking::panic_bounds_check(
                        v273,
                        a2[5],
                        &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
                        v207,
                        v208);
                    if ( *v267 )
                    {
                      v275 = *(_QWORD *)*(v267 - 1);
                      goto LABEL_599;
                    }
LABEL_597:
                    v275 = 0LL;
LABEL_599:
                    n[0].m128i_i64[0] = v276;
                    n[0].m128i_i64[1] = (__int64)&anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354;
                    n[1].m128i_i64[0] = 13LL;
                    n[1].m128i_i64[1] = (__int64)anon_806b356b6f45880ddaa2d5affbddf45c_24_llvm_15944453427201852302;
                    n[2].m128i_i64[0] = 10LL;
                    n[2].m128i_i64[1] = (__int64)anon_806b356b6f45880ddaa2d5affbddf45c_22_llvm_15944453427201852302;
                    n[3].m128i_i64[0] = 6LL;
                    n[3].m128i_i64[1] = (__int64)anon_806b356b6f45880ddaa2d5affbddf45c_23_llvm_15944453427201852302;
                    n[4].m128i_i64[0] = 7LL;
                    n[4].m128i_i64[1] = 1LL;
                    n[5].m128i_i64[0] = 4LL;
                    v277 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(
                             n,
                             v275,
                             v267,
                             v207,
                             v208);
                    v278 = v255 & v389;
                    v279 = v235;
                    if ( v268 > v277 )
                      v279 = (unsigned __int8)v359;
                    v280 = 3;
                    if ( v268 <= v277 )
                      v280 = v351;
                    s2c = v280;
                    if ( v278 )
                    {
                      lscolors::LsColors::from_env(n);
                      if ( n[0].m128i_i64[0] == 0x8000000000000000LL )
                      {
                        <lscolors::LsColorsBuilder as core::default::Default>::default(&v360);
                        v281 = v367;
                        dest[3].m128i_i64[0] = v363;
                        v282 = _mm_loadu_si128(&v360);
                        v283 = _mm_loadu_si128(&v361);
                        dest[2] = _mm_loadu_si128(&v362);
                        dest[1] = v283;
                        dest[0] = v282;
                        lscolors::suffix::SuffixMapBuilder::build(&v374, dest);
                        *(__m128i *)((char *)&dest[6] + 8) = v364;
                        *(__m128i *)((char *)&dest[7] + 8) = v365;
                        *(__m128i *)((char *)&dest[8] + 8) = v366;
                        v284 = _mm_loadu_si128(&v375);
                        v285 = _mm_loadu_si128(&v376);
                        v286 = _mm_loadu_si128(v377);
                        dest[0] = v374;
                        dest[1] = v284;
                        dest[2] = v285;
                        dest[3] = v286;
                        dest[4] = v377[1];
                        dest[5] = _mm_loadu_si128(&v378);
                        dest[6].m128i_i64[0] = v379;
                      }
                      else
                      {
                        memcpy(dest, n, 0x98uLL);
                        v281 = n[9].m128i_i8[8];
                        v360.m128i_i32[0] = *(__int32 *)((char *)&n[9].m128i_i32[2] + 1);
                        *(__int32 *)((char *)v360.m128i_i32 + 3) = n[9].m128i_i32[3];
                      }
                      v287 = v322;
                      memcpy(src, dest, 0x98uLL);
                      src[9].m128i_i8[8] = v281;
                      *(__int32 *)((char *)&src[9].m128i_i32[2] + 1) = v360.m128i_i32[0];
                      src[9].m128i_i32[3] = *(__int32 *)((char *)v360.m128i_i32 + 3);
                    }
                    else
                    {
                      src[0].m128i_i64[0] = 0x8000000000000000LL;
                      v287 = v322;
                    }
                    if ( v287 )
                    {
                      LOBYTE(v245) = 1;
                      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                              a2,
                                              anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354,
                                              4LL) )
                      {
                        n[0].m128i_i8[0] = 4;
                        *(_QWORD *)&v288 = _rust_alloc(56LL, 8LL);
                        if ( !(_QWORD)v288 )
                          alloc::alloc::handle_alloc_error(8LL, 56LL);
                        *(_QWORD *)(v288 + 48) = n[3].m128i_i64[0];
                        v289 = _mm_loadu_si128(n);
                        v290 = _mm_loadu_si128(&n[1]);
                        *(__m128i *)(v288 + 32) = _mm_loadu_si128(&n[2]);
                        *(__m128i *)(v288 + 16) = v290;
                        *(__m128i *)v288 = v289;
                        v291 = v368;
                        *((_QWORD *)v368 + 1) = v288;
                        v291[2] = &off_1AC5E0;
                        *v291 = 0x8000000000000000LL;
                        if ( src[0].m128i_i64[0] != 0x8000000000000000LL )
                        {
                          v292 = src[7].m128i_i64[0];
                          if ( src[7].m128i_i64[0] )
                          {
                            v288 = 0x16 * (unsigned __int128)(unsigned __int64)(src[7].m128i_i64[0] + 1);
                            *(_QWORD *)&v288 = (v288 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                            v292 = v288 + src[7].m128i_i64[0] + 17;
                            if ( (_QWORD)v288 + src[7].m128i_i64[0] != -17 )
                              _rust_dealloc(src[6].m128i_i64[1] - v288, v292, 16LL);
                          }
                          core::ptr::drop_in_place<lscolors::suffix::SuffixMap>(src, v292, *((_QWORD *)&v288 + 1));
                        }
                        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v340);
                        v293 = v342;
                        v294 = v380;
                        if ( v340.m128i_i64[0] )
                          _rust_dealloc(v340.m128i_i64[1], 56 * v340.m128i_i64[0], 8LL);
                        if ( v293 >= (__int64)0x8000000000000004LL && v293 )
                        {
                          v107 = v294;
                          v106 = v293;
LABEL_622:
                          _rust_dealloc(v107, v106, 1LL);
                        }
                        goto LABEL_632;
                      }
                    }
                    else
                    {
                      is_dired_arg_present = uu_ls::dired::is_dired_arg_present();
                      v296 = (unsigned __int8)v245;
                      v245 = 1;
                      if ( !is_dired_arg_present )
                        v245 = v296;
                    }
                    v297 = 3;
                    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                             a2,
                                             anon_e31c85536e11aee39654ff72a53ef708_17_llvm_4239552918814193354,
                                             11LL) )
                    {
                      v297 = 2;
                      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                               a2,
                                               anon_e31c85536e11aee39654ff72a53ef708_18_llvm_4239552918814193354,
                                               24LL) )
                      {
                        v297 = 1;
                        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                 a2,
                                                 anon_e31c85536e11aee39654ff72a53ef708_19_llvm_4239552918814193354,
                                                 39LL) )
                          v297 = ~(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                     a2,
                                                     anon_e31c85536e11aee39654ff72a53ef708_31_llvm_4239552918814193354,
                                                     9LL) & (v320 != 3 && (_BYTE)v245 != 1);
                      }
                    }
                    v338 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_e31c85536e11aee39654ff72a53ef708_34_llvm_4239552918814193354,
                             9LL);
                    v333 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_e31c85536e11aee39654ff72a53ef708_33_llvm_4239552918814193354,
                             7LL);
                    LODWORD(v343) = v279;
                    v361.m128i_i64[0] = v341;
                    v360 = _mm_loadu_si128(&v340);
                    LOBYTE(v355) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                     a2,
                                     anon_e31c85536e11aee39654ff72a53ef708_31_llvm_4239552918814193354,
                                     9LL);
                    memcpy(dest, src, sizeof(dest));
                    LOBYTE(v350) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                     a2,
                                     anon_e31c85536e11aee39654ff72a53ef708_32_llvm_4239552918814193354,
                                     5LL);
                    v298 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_4d12444acd339d9ec9ecb6c591c39f29_18_llvm_11628331613161155184,
                             4LL);
                    LODWORD(v357) = v245;
                    v299 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_e31c85536e11aee39654ff72a53ef708_43_llvm_4239552918814193354,
                             23LL);
                    v300 = 10;
                    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                            a2,
                                            anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354,
                                            4LL) )
                      v300 = 0;
                    n[1].m128i_i64[0] = v361.m128i_i64[0];
                    n[0] = _mm_load_si128(&v360);
                    memcpy(&n[1].m128i_u64[1], dest, 0xA0uLL);
                    v301 = v368;
                    memcpy(v368, n, 0xB8uLL);
                    v301[23] = v342;
                    v301[24] = v380;
                    v301[25] = v401;
                    v301[26] = v381;
                    v301[27] = v382;
                    *((_BYTE *)v301 + 224) = v347;
                    *((_BYTE *)v301 + 225) = v386;
                    *((_BYTE *)v301 + 226) = v324;
                    *((_BYTE *)v301 + 227) = v346;
                    *((_WORD *)v301 + 114) = v385;
                    *((_BYTE *)v301 + 230) = v338;
                    *((_BYTE *)v301 + 231) = v333;
                    *((_BYTE *)v301 + 232) = (_BYTE)v355;
                    *((_BYTE *)v301 + 233) = v350;
                    *((_BYTE *)v301 + 234) = v298;
                    *((_BYTE *)v301 + 235) = v349;
                    *((_BYTE *)v301 + 236) = 0;
                    *((_BYTE *)v301 + 237) = v299;
                    *((_BYTE *)v301 + 238) = v322;
                    *((_BYTE *)v301 + 239) = v387;
                    *((_BYTE *)v301 + 240) = v358;
                    *((_BYTE *)v301 + 241) = v373;
                    *((_BYTE *)v301 + 242) = v297;
                    *((_BYTE *)v301 + 243) = v348;
                    *((_BYTE *)v301 + 244) = v320;
                    *((_BYTE *)v301 + 245) = v343;
                    *((_BYTE *)v301 + 246) = v345;
                    *((_BYTE *)v301 + 247) = s2c;
                    *((_BYTE *)v301 + 248) = v357;
                    *((_BYTE *)v301 + 249) = v388;
                    *((_BYTE *)v301 + 250) = v300;
                    goto LABEL_632;
                  }
                }
                if ( !v111 || v111 == v91 )
                {
                  while ( v81 && v81 != v209 )
                  {
                    v215 = v81 + 24;
                    v111 = *(_QWORD *)(v81 + 8);
                    v207 = *(_QWORD *)(v81 + 16);
                    v91 = v111 + 32 * v207;
                    v81 += 24LL;
                    if ( v207 )
                      goto LABEL_438;
                  }
                  if ( v214 && v214 != v371 )
                  {
                    s2b = v214 + 32;
                    v111 = 0LL;
                    goto LABEL_439;
                  }
                  goto LABEL_448;
                }
                v215 = v81;
LABEL_438:
                s2b = v214;
                v214 = v111;
                v111 += 32LL;
                v81 = v215;
LABEL_439:
                v336 = v210;
                v216 = v210(v214);
                v217 = *(_QWORD *)(v216 + 8);
                v218 = *(_QWORD *)(v216 + 16);
                uucore::parser::parse_glob::from_str(&v402, v217, v218);
                if ( v402.m128i_i64[0] == 0x8000000000000000LL )
                {
                  if ( uucore::UTIL_NAME != 2 )
                    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
                  dest[0] = _mm_loadu_si128((const __m128i *)&xmmword_1B7CA8);
                  src[0].m128i_i64[0] = (__int64)dest;
                  src[0].m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
                  n[0].m128i_i64[0] = (__int64)&unk_1AC680;
                  n[0].m128i_i64[1] = 2LL;
                  n[2].m128i_i64[0] = 0LL;
                  n[1].m128i_i64[0] = (__int64)src;
                  n[1].m128i_i64[1] = 1LL;
                  std::io::stdio::_eprint(n);
                  dest[0].m128i_i64[0] = 0LL;
                  dest[0].m128i_i64[1] = v217;
                  dest[1].m128i_i64[0] = v218;
                  dest[1].m128i_i8[8] = 1;
                  src[0].m128i_i64[0] = (__int64)dest;
                  src[0].m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
                  n[0].m128i_i64[0] = (__int64)&off_1AC6C0;
                  n[0].m128i_i64[1] = 2LL;
                  n[2].m128i_i64[0] = 0LL;
                  n[1].m128i_i64[0] = (__int64)src;
                  n[1].m128i_i64[1] = 1LL;
                  std::io::stdio::_eprint(n);
                  v210 = v336;
                }
                else
                {
                  v219 = v341;
                  if ( v341 == v340.m128i_i64[0] )
                    alloc::raw_vec::RawVec<T,A>::grow_one(&v340);
                  v211 = v340.m128i_i64[1];
                  v207 = 56 * v219;
                  *(_QWORD *)(v340.m128i_i64[1] + v207 + 48) = v405;
                  v212 = _mm_loadu_si128(&v402);
                  v213 = _mm_loadu_si128(&v403);
                  *(__m128i *)(v211 + v207 + 32) = _mm_loadu_si128(&v404);
                  *(__m128i *)(v211 + v207 + 16) = v213;
                  *(__m128i *)(v211 + v207) = v212;
                  v341 = v219 + 1;
                  v210 = v336;
                }
              }
            }
            v316 = &off_1AC668;
          }
          dest[1].m128i_i64[0] = n[1].m128i_i64[1];
          dest[0] = _mm_loadu_si128((const __m128i *)&n[0].m128i_u64[1]);
          core::result::unwrap_failed(aCalledResultUn_4, 43LL, dest, &unk_1AC1C0, v316);
        }
      }
    }
LABEL_666:
    dest[2].m128i_i64[0] = src[2].m128i_i64[0];
    v308 = _mm_loadu_si128(src);
    dest[1] = _mm_loadu_si128(&src[1]);
    dest[0] = v308;
    v360.m128i_i64[0] = (__int64)&v374;
    v360.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v361.m128i_i64[0] = (__int64)dest;
    v361.m128i_i64[1] = (__int64)<clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    n[0].m128i_i64[0] = (__int64)&anon_85d03d1a699a17dda65ec78a38b83d9c_4_llvm_14964567593500591213;
    v309 = &anon_85d03d1a699a17dda65ec78a38b83d9c_6_llvm_14964567593500591213;
    v310 = &v360;
    v311 = 2LL;
    v312 = 2LL;
    goto LABEL_667;
  }
  std::sys::os_str::bytes::Slice::to_string_lossy(&v340);
  v98 = v340.m128i_i64[1];
  v99 = v341;
  dest[2].m128i_i16[0] = 0;
  dest[2].m128i_i8[2] = 0;
  dest[0].m128i_i64[0] = 0LL;
  dest[1].m128i_i64[0] = 0LL;
  uucore::parser::parse_size::Parser::parse(&v374, dest, v340.m128i_i64[1], v341);
  if ( v374.m128i_i32[0] == 3 )
  {
    if ( !v375.m128i_i64[1] )
    {
      v108 = 1024LL;
      if ( !(_BYTE)v91 )
        v108 = v375.m128i_i64[0];
      v109 = v375.m128i_i64[0];
      if ( !v82 )
        v109 = v108;
      v110 = 1LL;
      if ( !v339 )
        v110 = v375.m128i_i64[0];
      v381 = v110;
      if ( v339 )
        v109 = v108;
      v382 = v109;
      goto LABEL_252;
    }
    src[0].m128i_i64[0] = 0LL;
    src[0].m128i_i64[1] = v98;
    src[1].m128i_i64[0] = v99;
    src[1].m128i_i8[8] = 1;
    v384[0] = src;
    v384[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    n[0].m128i_i64[0] = (__int64)&anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
    n[0].m128i_i64[1] = 2LL;
    n[2].m128i_i64[0] = 0LL;
    n[1].m128i_i64[0] = (__int64)v384;
    n[1].m128i_i64[1] = 1LL;
    alloc::fmt::format::format_inner(&v360.m128i_u64[1], n);
    v91 = v360.m128i_i64[1];
    v81 = v361.m128i_i64[0];
    if ( !v82 )
    {
LABEL_227:
      v100 = 1LL;
      v382 = 1024LL;
      if ( !v339 )
        v100 = 1024LL;
      v381 = v100;
      if ( v91 )
        _rust_dealloc(v81, v91, 1LL);
LABEL_252:
      if ( 2 * v340.m128i_i64[0] )
        _rust_dealloc(v98, v340.m128i_i64[0], 1LL);
      goto LABEL_254;
    }
  }
  else
  {
    v91 = v374.m128i_i64[1];
    v81 = v375.m128i_i64[0];
    if ( !v82 )
      goto LABEL_227;
  }
  <alloc::string::String as core::clone::Clone>::clone(dest, v82);
  n[1].m128i_i64[1] = dest[1].m128i_i64[0];
  *(__m128i *)((char *)n + 8) = _mm_loadu_si128(dest);
  n[0].m128i_i8[0] = 3;
  v102 = _rust_alloc(56LL, 8LL);
  if ( !v102 )
    alloc::alloc::handle_alloc_error(8LL, 56LL);
  *(_QWORD *)(v102 + 48) = n[3].m128i_i64[0];
  v103 = _mm_loadu_si128(n);
  v104 = _mm_loadu_si128(&n[1]);
  *(__m128i *)(v102 + 32) = _mm_loadu_si128(&n[2]);
  *(__m128i *)(v102 + 16) = v104;
  *(__m128i *)v102 = v103;
  v105 = v368;
  *((_QWORD *)v368 + 1) = v102;
  v105[2] = &off_1AC5E0;
  *v105 = 0x8000000000000000LL;
  if ( v91 )
    _rust_dealloc(v81, v91, 1LL);
  v106 = v340.m128i_i64[0];
  if ( 2 * v340.m128i_i64[0] )
  {
    v107 = v98;
    goto LABEL_622;
  }
LABEL_632:
  if ( v356 )
    _rust_dealloc(v383, v356, 1LL);
  if ( v400[0] != 0x8000000000000000LL && v400[0] )
    _rust_dealloc(v400[1], v400[0], 1LL);
  if ( ((v396 != 0x8000000000000000LL) & (unsigned __int8)~(_BYTE)v352) != 0 && v396 )
    _rust_dealloc(v397, v396, 1LL);
  if ( !((v393 == 0x8000000000000000LL) | (unsigned __int8)v353) && v393 )
    _rust_dealloc(v394, v393, 1LL);
  if ( !((v390 == 0x8000000000000000LL) | (unsigned __int8)v339) && v390 )
    _rust_dealloc(v391, v390, 1LL);
  return v368;
}
