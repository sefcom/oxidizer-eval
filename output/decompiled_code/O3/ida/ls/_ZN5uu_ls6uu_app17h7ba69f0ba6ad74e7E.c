__int64 __fastcall uu_ls::uu_app(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r14
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r14
  __int64 v122; // rax
  __int64 v123; // rsi
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // r14
  __int64 v127; // rax
  __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // r14
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rbx
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rsi
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rsi
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rsi
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rsi
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rsi
  __int64 v168; // rax
  __int64 v169; // rcx
  __int64 v170; // r14
  __int64 v171; // rax
  __int64 v172; // rsi
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // r14
  __int64 v176; // rax
  __int64 v177; // rsi
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // rax
  __int64 v181; // rcx
  __int64 v182; // rax
  __int64 v183; // rsi
  __int64 v184; // rax
  __int64 v185; // rcx
  __int64 v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rsi
  __int64 v190; // rax
  __int64 v191; // rcx
  __int64 v192; // rax
  __int64 v193; // rcx
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rcx
  __int64 v197; // rax
  __int64 v198; // rsi
  __int64 v199; // rax
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rcx
  __int64 v203; // r14
  __int64 v204; // rsi
  __int64 v205; // rax
  __int64 v206; // rcx
  __int64 v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rbx
  __int64 v210; // rbx
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // rcx
  __int64 v214; // rax
  __int64 v215; // rsi
  __int64 v216; // rax
  __int64 v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rcx
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 v222; // rcx
  __int64 v223; // rax
  __int64 v224; // rsi
  __int64 v225; // rax
  __int64 v226; // rcx
  __int64 v227; // rax
  __int64 v228; // rcx
  __int64 v229; // r14
  __int64 v230; // rsi
  __int64 v231; // rax
  __int64 v232; // rcx
  __int64 v233; // rax
  __int64 v234; // rcx
  __int64 v235; // rax
  __int64 v236; // rbx
  __int64 v237; // rax
  __int64 v238; // rax
  __int64 v239; // rcx
  __int64 v240; // rax
  __int64 v241; // rax
  __int64 v242; // rcx
  __int64 v243; // rax
  __int64 v244; // rax
  __int64 v245; // rcx
  __int64 v246; // rax
  __int64 v247; // rax
  __int64 v248; // rcx
  __int64 v249; // rax
  __int64 v250; // rax
  __int64 v251; // rax
  __int64 v252; // rax
  __int64 v253; // rax
  __int64 v254; // rax
  __int64 v255; // rax
  __int64 v256; // rax
  __int64 v257; // rcx
  __int64 v258; // rax
  __int64 v259; // rsi
  __int64 v260; // rax
  __int64 v261; // rcx
  __int64 v262; // r14
  __int64 v263; // rax
  __int64 v264; // rax
  __int64 v265; // rax
  __int64 v266; // rax
  __int64 v267; // rax
  __int64 v268; // rax
  __int64 v269; // rax
  __int64 v270; // rsi
  __int64 v271; // rax
  __int64 v272; // rcx
  __int64 v273; // rax
  __int64 v274; // rcx
  __int64 v275; // rax
  __int64 v276; // rsi
  __int64 v277; // rax
  __int64 v278; // rcx
  __int64 v279; // rax
  __int64 v280; // rcx
  __int64 v281; // rax
  __int64 v282; // rsi
  __int64 v283; // rax
  __int64 v284; // rcx
  __int64 v285; // rax
  __int64 v286; // rcx
  __int64 v287; // rax
  __int64 v288; // rsi
  __int64 v289; // rax
  __int64 v290; // rcx
  __int64 v291; // rax
  __int64 v292; // rax
  __int64 v293; // rcx
  __int64 v294; // rbx
  __int64 v295; // rax
  __int64 v296; // rcx
  __int64 v297; // rax
  __int64 v298; // rax
  __int64 v299; // rcx
  __int64 v300; // rax
  __int64 v301; // rbx
  _OWORD v303[45]; // [rsp+0h] [rbp-C18h] BYREF
  _OWORD src[37]; // [rsp+2D0h] [rbp-948h] BYREF
  _OWORD dest[45]; // [rsp+520h] [rbp-6F8h] BYREF
  __int128 v306; // [rsp+7F0h] [rbp-428h] BYREF
  unsigned __int128 v307; // [rsp+800h] [rbp-418h]
  __int128 v308; // [rsp+810h] [rbp-408h]
  __int128 v309; // [rsp+820h] [rbp-3F8h]
  __int64 v310; // [rsp+830h] [rbp-3E8h]
  __int128 v311; // [rsp+840h] [rbp-3D8h]
  _OWORD v312[37]; // [rsp+850h] [rbp-3C8h] BYREF
  __int128 v313; // [rsp+AA0h] [rbp-178h]
  unsigned __int128 v314; // [rsp+AB0h] [rbp-168h]
  __int128 v315; // [rsp+AC0h] [rbp-158h]
  __int128 v316; // [rsp+AD0h] [rbp-148h]
  __int64 v317; // [rsp+AE0h] [rbp-138h]
  __int128 v318; // [rsp+AF0h] [rbp-128h]
  unsigned __int128 v319; // [rsp+B00h] [rbp-118h]
  __int128 v320; // [rsp+B10h] [rbp-108h]
  __int128 v321; // [rsp+B20h] [rbp-F8h]
  __int64 v322; // [rsp+B30h] [rbp-E8h]
  __int64 v323; // [rsp+B40h] [rbp-D8h]
  __int128 v324; // [rsp+B48h] [rbp-D0h]
  __int128 v325; // [rsp+B58h] [rbp-C0h]
  __int128 v326; // [rsp+B68h] [rbp-B0h]
  __int128 v327; // [rsp+B78h] [rbp-A0h]
  __int64 v328; // [rsp+B88h] [rbp-90h]
  __int128 v329; // [rsp+B90h] [rbp-88h]
  __int128 v330; // [rsp+BA0h] [rbp-78h]
  __int128 v331; // [rsp+BB0h] [rbp-68h]
  __int128 v332; // [rsp+BC0h] [rbp-58h]
  __int64 v333; // [rsp+BD0h] [rbp-48h]
  __int128 v334; // [rsp+BD8h] [rbp-40h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(v303, xmmword_1B7CA8, *((_QWORD *)&xmmword_1B7CA8 + 1));
  *(_QWORD *)&v303[38] = a0027;
  *((_QWORD *)&v303[38] + 1) = 6LL;
  memcpy(dest, v303, 0x2C8uLL);
  uucore::format_usage(src, aOptionFile, 24LL);
  v1 = *(_QWORD *)&src[0];
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    v303[0] = *(_OWORD *)((char *)src + 8);
  v323 = a1;
  if ( *(_QWORD *)&dest[29] != 0x8000000000000000LL && *(_QWORD *)&dest[29] )
    _rust_dealloc(*((_QWORD *)&dest[29] + 1), *(_QWORD *)&dest[29], 1LL);
  *(_QWORD *)&dest[29] = v1;
  *(_OWORD *)((char *)&dest[29] + 8) = v303[0];
  memcpy(v303, dest, 0x2C8uLL);
  clap_builder::builder::command::Command::about(dest, v303, aListDirectoryC, 84LL);
  memcpy(v303, dest, 0x2BCuLL);
  *(_QWORD *)((char *)&v303[43] + 12) = *(_QWORD *)((char *)&dest[43] + 12) | 0x4008800040088LL;
  DWORD1(v303[44]) = DWORD1(dest[44]);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *((_QWORD *)&dest[33] + 1) = 4LL;
  *(_QWORD *)&dest[34] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *((_QWORD *)&dest[34] + 1) = 4LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 23LL);
  v2 = *((_QWORD *)&src[0] + 1);
  v3 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1]) = xmmword_2DFA8;
  *(_QWORD *)(v2 + v3 + 15) = 0x2E6E6F6974616D72LL;
  *(_QWORD *)&src[1] = v3 + 23;
  v4 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v4;
  dest[28] = src[0];
  memcpy(src, dest, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(src[36]) = HIBYTE(dest[36]);
  BYTE12(src[36]) = 5;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 6LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 6LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000110000LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 23LL);
  v5 = *((_QWORD *)&src[0] + 1);
  v6 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1]) = xmmword_2DFBF;
  *(_QWORD *)(v5 + v6 + 15) = 0x2E74616D726F6620LL;
  *(_QWORD *)&src[1] = v6 + 23;
  v7 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v7;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[0] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870;
  *((_QWORD *)&v303[0] + 1) = 4LL;
  *(_QWORD *)&v303[1] = aVerbose;
  *((_QWORD *)&v303[1] + 1) = 7LL;
  *(_QWORD *)&v303[2] = aSingleColumn;
  *((_QWORD *)&v303[2] + 1) = 13LL;
  *(_QWORD *)&v303[3] = aColumns;
  *((_QWORD *)&v303[3] + 1) = 7LL;
  *(_QWORD *)&v303[4] = aVertical;
  *((_QWORD *)&v303[4] + 1) = 8LL;
  *(_QWORD *)&v303[5] = aAcross;
  *((_QWORD *)&v303[5] + 1) = 6LL;
  *(_QWORD *)&v303[6] = aHorizontal;
  *((_QWORD *)&v303[6] + 1) = 10LL;
  *(_QWORD *)&v303[7] = aCommas;
  *(_OWORD *)((char *)&v303[7] + 8) = 6uLL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v312, v303);
  clap_builder::builder::arg::Arg::value_parser(v303, src);
  memcpy(src, v303, 0x248uLL);
  *((_QWORD *)&src[36] + 1) = *((_QWORD *)&v303[36] + 1) | 0x90LL;
  v8 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 5uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 6LL);
    v8 = *(_QWORD *)&src[9];
  }
  v9 = *((_QWORD *)&src[8] + 1);
  v10 = 16 * v8;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v10) = anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354;
  *(_QWORD *)(v9 + v10 + 8) = 6LL;
  *(_QWORD *)(v9 + v10 + 16) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *(_QWORD *)(v9 + v10 + 24) = 1LL;
  *(_QWORD *)(v9 + v10 + 32) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870;
  *(_QWORD *)(v9 + v10 + 40) = 4LL;
  *(_QWORD *)(v9 + v10 + 48) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_13_llvm_15267917218625265870;
  *(_QWORD *)(v9 + v10 + 56) = 1LL;
  *(_QWORD *)(v9 + v10 + 64) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *(_QWORD *)(v9 + v10 + 72) = 1LL;
  *(_QWORD *)(v9 + v10 + 80) = anon_e31c85536e11aee39654ff72a53ef708_45_llvm_4239552918814193354;
  *(_QWORD *)(v9 + v10 + 88) = 5LL;
  *(_QWORD *)&src[9] = v8 + 6;
  memcpy(v312, src, sizeof(v312));
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *((_QWORD *)&dest[33] + 1) = 1LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000043LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 29LL);
  v11 = *((_QWORD *)&src[0] + 1);
  v12 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 13LL) = *(__int128 *)((char *)&xmmword_2DFD6 + 13);
  *(_OWORD *)(v11 + v12) = xmmword_2DFD6;
  *(_QWORD *)&src[1] = v12 + 29;
  v13 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v13;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v14 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 4uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 5LL);
    v14 = *(_QWORD *)&src[9];
  }
  v15 = *((_QWORD *)&src[8] + 1);
  v16 = 16 * v14;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v16) = anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354;
  *(_QWORD *)(v15 + v16 + 8) = 6LL;
  *(_QWORD *)(v15 + v16 + 16) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *(_QWORD *)(v15 + v16 + 24) = 1LL;
  *(_QWORD *)(v15 + v16 + 32) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870;
  *(_QWORD *)(v15 + v16 + 40) = 4LL;
  *(_QWORD *)(v15 + v16 + 48) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_13_llvm_15267917218625265870;
  *(_QWORD *)(v15 + v16 + 56) = 1LL;
  *(_QWORD *)(v15 + v16 + 64) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *(_QWORD *)(v15 + v16 + 72) = 1LL;
  *(_QWORD *)&src[9] = v14 + 5;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870;
  *((_QWORD *)&v303[33] + 1) = 4LL;
  *(_QWORD *)&v303[34] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870;
  *((_QWORD *)&v303[34] + 1) = 4LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x1100000000006CLL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 29LL);
  v17 = *((_QWORD *)&src[0] + 1);
  v18 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 13LL) = *(__int128 *)((char *)&xmmword_2DFF3 + 13);
  *(_OWORD *)(v17 + v18) = xmmword_2DFF3;
  *(_QWORD *)&src[1] = v18 + 29;
  v19 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v19;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  v20 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 4uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 5LL);
    v20 = *(_QWORD *)&src[9];
  }
  v21 = *((_QWORD *)&src[8] + 1);
  v22 = 16 * v20;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v22) = anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354;
  *(_QWORD *)(v21 + v22 + 8) = 6LL;
  *(_QWORD *)(v21 + v22 + 16) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *(_QWORD *)(v21 + v22 + 24) = 1LL;
  *(_QWORD *)(v21 + v22 + 32) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870;
  *(_QWORD *)(v21 + v22 + 40) = 4LL;
  *(_QWORD *)(v21 + v22 + 48) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_13_llvm_15267917218625265870;
  *(_QWORD *)(v21 + v22 + 56) = 1LL;
  *(_QWORD *)(v21 + v22 + 64) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *(_QWORD *)(v21 + v22 + 72) = 1LL;
  *(_QWORD *)&src[9] = v20 + 5;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_13_llvm_15267917218625265870;
  *((_QWORD *)&dest[33] + 1) = 1LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000078LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 43LL);
  v23 = *((_QWORD *)&src[0] + 1);
  v24 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 27LL) = *(__int128 *)((char *)&xmmword_2E020 + 11);
  qmemcpy((void *)(v23 + v24), "List entries in rows instead of ", 32);
  *(_QWORD *)&src[1] = v24 + 43;
  v25 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v25;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v26 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 4uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 5LL);
    v26 = *(_QWORD *)&src[9];
  }
  v27 = *((_QWORD *)&src[8] + 1);
  v28 = 16 * v26;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v28) = anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354;
  *(_QWORD *)(v27 + v28 + 8) = 6LL;
  *(_QWORD *)(v27 + v28 + 16) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *(_QWORD *)(v27 + v28 + 24) = 1LL;
  *(_QWORD *)(v27 + v28 + 32) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870;
  *(_QWORD *)(v27 + v28 + 40) = 4LL;
  *(_QWORD *)(v27 + v28 + 48) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_13_llvm_15267917218625265870;
  *(_QWORD *)(v27 + v28 + 56) = 1LL;
  *(_QWORD *)(v27 + v28 + 64) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *(_QWORD *)(v27 + v28 + 72) = 1LL;
  *(_QWORD *)&src[9] = v26 + 5;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[22] = 8uLL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_14_llvm_15267917218625265870;
  *((_QWORD *)&src[33] + 1) = 7LL;
  *(_QWORD *)&src[34] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_14_llvm_15267917218625265870;
  *((_QWORD *)&src[34] + 1) = 7LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000054LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  std::env::_var_os(v312, &unk_2E03B, 7LL);
  *((_QWORD *)&src[30] + 1) = &unk_2E03B;
  *(_QWORD *)&src[31] = 7LL;
  *((_QWORD *)&src[32] + 1) = *(_QWORD *)&v312[1];
  *(_OWORD *)((char *)&src[31] + 8) = v312[0];
  memcpy(v303, src, 0x168uLL);
  memcpy(&v303[23], &src[23], 0xE0uLL);
  *((_QWORD *)&v303[22] + 1) = *((_QWORD *)&src[22] + 1);
  *(_QWORD *)&v312[0] = aCols;
  *((_QWORD *)&v312[0] + 1) = 4LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *((_QWORD *)&v303[21] + 1) )
    _rust_dealloc(*(_QWORD *)&v303[22], 16LL * *((_QWORD *)&v303[21] + 1), 8LL);
  *((_QWORD *)&v303[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&v303[21] + 8) = src[0];
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 1LL;
  *(_QWORD *)&v303[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v303, 0LL, 58LL);
  v29 = *((_QWORD *)&v303[0] + 1);
  v30 = *(_QWORD *)&v303[1];
  *(_OWORD *)(*((_QWORD *)&v303[0] + 1) + *(_QWORD *)&v303[1] + 42LL) = *(__int128 *)((char *)&xmmword_2E062 + 10);
  qmemcpy((void *)(v29 + v30), "Assume tab stops at each COLS instead of 8 (unim", 48);
  *(_QWORD *)&v303[1] = v30 + 58;
  v31 = *(_QWORD *)&v303[0];
  v312[0] = *(_OWORD *)((char *)v303 + 8);
  if ( *(_QWORD *)&v303[0] != 0x8000000000000000LL )
    v303[0] = v312[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v31;
  src[28] = v303[0];
  memcpy(v312, src, sizeof(v312));
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_15_llvm_15267917218625265870;
  *((_QWORD *)&dest[33] + 1) = 1LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x1100000000006DLL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 33LL);
  v32 = *((_QWORD *)&src[0] + 1);
  v33 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = xmmword_2E08C;
  *(_OWORD *)(v32 + v33) = xmmword_2E07C;
  *(_BYTE *)(v32 + v33 + 32) = 46;
  *(_QWORD *)&src[1] = v33 + 33;
  v34 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v34;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v35 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 4uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 5LL);
    v35 = *(_QWORD *)&src[9];
  }
  v36 = *((_QWORD *)&src[8] + 1);
  v37 = 16 * v35;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v37) = anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354;
  *(_QWORD *)(v36 + v37 + 8) = 6LL;
  *(_QWORD *)(v36 + v37 + 16) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *(_QWORD *)(v36 + v37 + 24) = 1LL;
  *(_QWORD *)(v36 + v37 + 32) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870;
  *(_QWORD *)(v36 + v37 + 40) = 4LL;
  *(_QWORD *)(v36 + v37 + 48) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_13_llvm_15267917218625265870;
  *(_QWORD *)(v36 + v37 + 56) = 1LL;
  *(_QWORD *)(v36 + v37 + 64) = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870;
  *(_QWORD *)(v36 + v37 + 72) = 1LL;
  *(_QWORD *)&src[9] = v35 + 5;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 4LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 4LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000110000LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v303[8]);
  v38 = *((_QWORD *)&v303[8] + 1);
  **((_QWORD **)&v303[8] + 1) = anon_e31c85536e11aee39654ff72a53ef708_44_llvm_4239552918814193354;
  *(_QWORD *)(v38 + 8) = 4LL;
  *(_QWORD *)&v303[9] = 1LL;
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 1LL;
  *(_QWORD *)&v303[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v303, 0LL, 47LL);
  v39 = *((_QWORD *)&v303[0] + 1);
  v40 = *(_QWORD *)&v303[1];
  *(_OWORD *)(*((_QWORD *)&v303[0] + 1) + *(_QWORD *)&v303[1] + 31LL) = *(__int128 *)((char *)&xmmword_2E0AD + 15);
  qmemcpy((void *)(v39 + v40), "List entries separated by ASCII ", 32);
  *(_QWORD *)&v303[1] = v40 + 47;
  v41 = *(_QWORD *)&v303[0];
  v312[0] = *(_OWORD *)((char *)v303 + 8);
  if ( *(_QWORD *)&v303[0] != 0x8000000000000000LL )
    v303[0] = v312[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v41;
  src[28] = v303[0];
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_45_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = anon_e31c85536e11aee39654ff72a53ef708_45_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 5LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)((char *)&dest[36] + 4) = (char *)&loc_10FFFC + 4;
  WORD6(dest[36]) = 3337;
  LODWORD(dest[36]) = 68;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 65LL);
  v42 = *((_QWORD *)&src[0] + 1);
  v43 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 48LL) = xmmword_2E0FC;
  qmemcpy((void *)(v42 + v43), "generate output designed for Emacs' dired (Direc", 48);
  *(_BYTE *)(v42 + v43 + 64) = 101;
  *(_QWORD *)&src[1] = v43 + 65;
  v44 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v44;
  dest[28] = src[0];
  memcpy(src, dest, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(src[36]) = HIBYTE(dest[36]);
  BYTE12(src[36]) = 2;
  v45 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  v46 = *((_QWORD *)&src[8] + 1);
  v47 = 16 * v45;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v47) = "hyperlink";
  *(_QWORD *)(v46 + v47 + 8) = 9LL;
  *(_QWORD *)&src[9] = v45 + 1;
  memcpy(v312, src, sizeof(v312));
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = "hyperlink";
  *((_QWORD *)&v303[33] + 1) = 9LL;
  *(_QWORD *)&v303[34] = "hyperlink";
  *((_QWORD *)&v303[34] + 1) = 9LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000110000LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 25LL);
  v48 = *((_QWORD *)&src[0] + 1);
  v49 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 9LL) = *(__int128 *)((char *)&xmmword_2E10D + 9);
  *(_OWORD *)(v48 + v49) = xmmword_2E10D;
  *(_QWORD *)&src[1] = v49 + 25;
  v50 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v50;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[3] = aAlways;
  *((_QWORD *)&v303[3] + 1) = 6LL;
  *((_QWORD *)&v303[1] + 1) = 0x8000000000000000LL;
  v303[2] = v311;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 8LL;
  *(_QWORD *)&v303[1] = 0LL;
  LOBYTE(v303[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(v303);
  v51 = *((_QWORD *)&v303[0] + 1);
  **((_QWORD **)&v303[0] + 1) = aYes;
  *(_QWORD *)(v51 + 8) = 3LL;
  *(_QWORD *)&v303[1] = 1LL;
  v312[0] = v303[0];
  v312[2] = v303[2];
  v312[3] = v303[3];
  *(_QWORD *)&v312[4] = *(_QWORD *)&v303[4];
  v312[1] = __PAIR128__(*((unsigned __int64 *)&v303[1] + 1), 1LL);
  if ( *(_QWORD *)&v303[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(v312);
  v52 = *((_QWORD *)&v312[0] + 1);
  *(_QWORD *)(*((_QWORD *)&v312[0] + 1) + 16LL) = &unk_2DD40;
  *(_QWORD *)(v52 + 24) = 5LL;
  *(_QWORD *)&v312[1] = 2LL;
  v318 = v312[0];
  v320 = v312[2];
  v321 = v312[3];
  v322 = *(_QWORD *)&v312[4];
  v319 = __PAIR128__(*((unsigned __int64 *)&v312[1] + 1), 2LL);
  *(_QWORD *)&v303[3] = aAuto;
  *((_QWORD *)&v303[3] + 1) = 4LL;
  *((_QWORD *)&v303[1] + 1) = 0x8000000000000000LL;
  v303[2] = v311;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 8LL;
  *(_QWORD *)&v303[1] = 0LL;
  LOBYTE(v303[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(v303);
  v53 = *((_QWORD *)&v303[0] + 1);
  **((_QWORD **)&v303[0] + 1) = aTty;
  *(_QWORD *)(v53 + 8) = 3LL;
  *(_QWORD *)&v303[1] = 1LL;
  v312[0] = v303[0];
  v312[2] = v303[2];
  v312[3] = v303[3];
  *(_QWORD *)&v312[4] = *(_QWORD *)&v303[4];
  v312[1] = __PAIR128__(*((unsigned __int64 *)&v303[1] + 1), 1LL);
  if ( *(_QWORD *)&v303[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(v312);
  v54 = *((_QWORD *)&v312[0] + 1);
  *(_QWORD *)(*((_QWORD *)&v312[0] + 1) + 16LL) = &unk_2DD48;
  *(_QWORD *)(v54 + 24) = 6LL;
  *(_QWORD *)&v312[1] = 2LL;
  v313 = v312[0];
  v315 = v312[2];
  v316 = v312[3];
  v317 = *(_QWORD *)&v312[4];
  v314 = __PAIR128__(*((unsigned __int64 *)&v312[1] + 1), 2LL);
  *(_QWORD *)&v303[3] = aNever;
  *((_QWORD *)&v303[3] + 1) = 5LL;
  *((_QWORD *)&v303[1] + 1) = 0x8000000000000000LL;
  v303[2] = v311;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 8LL;
  *(_QWORD *)&v303[1] = 0LL;
  LOBYTE(v303[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(v303);
  v55 = *((_QWORD *)&v303[0] + 1);
  **((_QWORD **)&v303[0] + 1) = aNo;
  *(_QWORD *)(v55 + 8) = 2LL;
  *(_QWORD *)&v303[1] = 1LL;
  v306 = v303[0];
  v308 = v303[2];
  v309 = v303[3];
  v310 = *(_QWORD *)&v303[4];
  v307 = __PAIR128__(*((unsigned __int64 *)&v303[1] + 1), 1LL);
  if ( *(_QWORD *)&v303[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v306);
  v56 = *((_QWORD *)&v306 + 1);
  *(_QWORD *)(*((_QWORD *)&v306 + 1) + 16LL) = aNone;
  *(_QWORD *)(v56 + 24) = 4LL;
  *(_QWORD *)&v307 = 2LL;
  v312[9] = v306;
  v312[11] = v308;
  v312[12] = v309;
  *(_QWORD *)&v312[13] = v310;
  v312[10] = __PAIR128__(*((unsigned __int64 *)&v307 + 1), 2LL);
  v312[0] = v318;
  v312[1] = v319;
  v312[2] = v320;
  v312[3] = v321;
  *(_QWORD *)&v312[4] = v322;
  *((_QWORD *)&v312[8] + 1) = v317;
  *(_OWORD *)((char *)&v312[7] + 8) = v316;
  *(_OWORD *)((char *)&v312[6] + 8) = v315;
  *(_OWORD *)((char *)&v312[5] + 8) = v314;
  *(_OWORD *)((char *)&v312[4] + 8) = v313;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 3LL;
  memcpy(&v303[1], v312, 0xD8uLL);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v306, v303);
  clap_builder::builder::arg::Arg::value_parser(v312, src);
  v303[0] = v312[0];
  memcpy((char *)&v303[2] + 8, (char *)&v312[2] + 8, 0x220uLL);
  v303[1] = 1uLL;
  *(_QWORD *)&v303[2] = 1LL;
  *((_QWORD *)&v303[36] + 1) = *((_QWORD *)&v312[36] + 1) | 0x80LL;
  *(_QWORD *)&v312[0] = aAlways;
  *((_QWORD *)&v312[0] + 1) = 6LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *(_QWORD *)&v303[26] )
    _rust_dealloc(*((_QWORD *)&v303[26] + 1), 16LL * *(_QWORD *)&v303[26], 8LL);
  *(_QWORD *)&v303[27] = *(_QWORD *)&src[1];
  v303[26] = src[0];
  memcpy(src, v303, 0x168uLL);
  v57 = *((_QWORD *)&v303[22] + 1);
  src[23] = v303[23];
  memcpy((char *)&src[24] + 8, (char *)&v303[24] + 8, 0xC8uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v303[22] + 1);
  *(_QWORD *)&src[24] = *(_QWORD *)&v303[24];
  *(_QWORD *)&v312[0] = aNever;
  *((_QWORD *)&v312[0] + 1) = 5LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v303, v312);
  if ( *(_QWORD *)&src[23] )
    _rust_dealloc(*((_QWORD *)&src[23] + 1), 16LL * *(_QWORD *)&src[23], 8LL);
  *(_QWORD *)&src[24] = *(_QWORD *)&v303[1];
  src[23] = v303[0];
  memcpy(v303, src, 0x168uLL);
  v303[23] = src[23];
  memcpy((char *)&v303[24] + 8, (char *)&src[24] + 8, 0xC8uLL);
  *((_QWORD *)&v303[22] + 1) = v57;
  *(_QWORD *)&v303[24] = *(_QWORD *)&src[24];
  *(_QWORD *)&v312[0] = aWhen;
  *((_QWORD *)&v312[0] + 1) = 4LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *((_QWORD *)&v303[21] + 1) )
    _rust_dealloc(*(_QWORD *)&v303[22], 16LL * *((_QWORD *)&v303[21] + 1), 8LL);
  *((_QWORD *)&v303[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&v303[21] + 8) = src[0];
  memcpy(src, v303, sizeof(src));
  v58 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  v59 = *((_QWORD *)&src[8] + 1);
  v60 = 16 * v58;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v60) = anon_e31c85536e11aee39654ff72a53ef708_45_llvm_4239552918814193354;
  *(_QWORD *)(v59 + v60 + 8) = 5LL;
  *(_QWORD *)&src[9] = v58 + 1;
  memcpy(v312, src, sizeof(v312));
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_10_llvm_15267917218625265870;
  *((_QWORD *)&dest[33] + 1) = 1LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000031LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 23LL);
  v61 = *((_QWORD *)&src[0] + 1);
  v62 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1]) = xmmword_2E126;
  *(_QWORD *)(v61 + v62 + 15) = 0x2E656E696C207265LL;
  *(_QWORD *)&src[1] = v62 + 23;
  v63 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v63;
  dest[28] = src[0];
  memcpy(src, dest, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(src[36]) = HIBYTE(dest[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_17_llvm_15267917218625265870;
  *((_QWORD *)&v303[33] + 1) = 1LL;
  *(_QWORD *)&v303[34] = 0LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x1100000000006FLL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 82LL);
  v64 = *((_QWORD *)&src[0] + 1);
  v65 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 64LL) = xmmword_2E17D;
  qmemcpy((void *)(v64 + v65), "Long format without group information. Identical to --format=lon", 64);
  *(_WORD *)(v64 + v65 + 80) = 11888;
  *(_QWORD *)&src[1] = v65 + 82;
  v66 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v66;
  v303[28] = src[0];
  memcpy(src, v303, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v303[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v303[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_16_llvm_15267917218625265870;
  *((_QWORD *)&dest[33] + 1) = 1LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000067LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 38LL);
  v67 = *((_QWORD *)&src[0] + 1);
  v68 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = xmmword_2E19F;
  *(_OWORD *)(v67 + v68) = xmmword_2E18F;
  *(_QWORD *)(v67 + v68 + 30) = 0x2E6E6F6974616D72LL;
  *(_QWORD *)&src[1] = v68 + 38;
  v69 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v69;
  dest[28] = src[0];
  memcpy(src, dest, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(src[36]) = HIBYTE(dest[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_18_llvm_15267917218625265870;
  *((_QWORD *)&v303[33] + 1) = 15LL;
  *(_QWORD *)&v303[34] = anon_8ad7a2c4114f08ca7db24dfdc43d9a46_18_llvm_15267917218625265870;
  *((_QWORD *)&v303[34] + 1) = 15LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x1100000000006ELL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 30LL);
  v70 = *((_QWORD *)&src[0] + 1);
  v71 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 14LL) = *(__int128 *)((char *)&xmmword_2E1B5 + 14);
  *(_OWORD *)(v70 + v71) = xmmword_2E1B5;
  *(_QWORD *)&src[1] = v71 + 30;
  v72 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v72;
  v303[28] = src[0];
  memcpy(src, v303, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v303[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v303[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = &anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 13LL;
  *(_QWORD *)&dest[34] = &anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 13LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 18LL);
  v73 = *((_QWORD *)&src[0] + 1);
  v74 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1]) = xmmword_2E1D3;
  *(_WORD *)(v73 + v74 + 16) = 11877;
  *(_QWORD *)&src[1] = v74 + 18;
  v75 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v75;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&v327 = aLiteral;
  *((_QWORD *)&v327 + 1) = 7LL;
  *((_QWORD *)&v325 + 1) = 0x8000000000000000LL;
  v326 = v311;
  *(_QWORD *)&v324 = 0LL;
  *((_QWORD *)&v324 + 1) = 8LL;
  *(_QWORD *)&v325 = 0LL;
  LOBYTE(v328) = 0;
  *(_QWORD *)&v332 = aShell;
  *((_QWORD *)&v332 + 1) = 5LL;
  *((_QWORD *)&v330 + 1) = 0x8000000000000000LL;
  v331 = v311;
  *(_QWORD *)&v329 = 0LL;
  *((_QWORD *)&v329 + 1) = 8LL;
  *(_QWORD *)&v330 = 0LL;
  LOBYTE(v333) = 0;
  *(_QWORD *)&v321 = aShellEscape;
  *((_QWORD *)&v321 + 1) = 12LL;
  *((_QWORD *)&v319 + 1) = 0x8000000000000000LL;
  v320 = v311;
  *(_QWORD *)&v318 = 0LL;
  *((_QWORD *)&v318 + 1) = 8LL;
  *(_QWORD *)&v319 = 0LL;
  LOBYTE(v322) = 0;
  *(_QWORD *)&v316 = aShellAlways;
  *((_QWORD *)&v316 + 1) = 12LL;
  *((_QWORD *)&v314 + 1) = 0x8000000000000000LL;
  v315 = v311;
  *(_QWORD *)&v313 = 0LL;
  *((_QWORD *)&v313 + 1) = 8LL;
  *(_QWORD *)&v314 = 0LL;
  LOBYTE(v317) = 0;
  *(_QWORD *)&v309 = aShellEscapeAlw;
  *((_QWORD *)&v309 + 1) = 19LL;
  *((_QWORD *)&v307 + 1) = 0x8000000000000000LL;
  v308 = v311;
  *(_QWORD *)&v306 = 0LL;
  *((_QWORD *)&v306 + 1) = 8LL;
  *(_QWORD *)&v307 = 0LL;
  LOBYTE(v310) = 0;
  *(_QWORD *)&dest[3] = aC_0;
  *((_QWORD *)&dest[3] + 1) = 1LL;
  *((_QWORD *)&dest[1] + 1) = 0x8000000000000000LL;
  dest[2] = v311;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 8LL;
  *(_QWORD *)&dest[1] = 0LL;
  LOBYTE(dest[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(dest);
  v76 = *((_QWORD *)&dest[0] + 1);
  **((_QWORD **)&dest[0] + 1) = aCMaybe;
  *(_QWORD *)(v76 + 8) = 7LL;
  *(_OWORD *)((char *)&v312[22] + 8) = dest[0];
  *(_OWORD *)((char *)&v312[24] + 8) = dest[2];
  *(_OWORD *)((char *)&v312[25] + 8) = dest[3];
  *((_QWORD *)&v312[26] + 1) = *(_QWORD *)&dest[4];
  *((_QWORD *)&v312[23] + 1) = 1LL;
  *(_QWORD *)&v312[24] = *((_QWORD *)&dest[1] + 1);
  dest[30] = v311;
  v312[0] = v324;
  v312[1] = v325;
  v312[2] = v326;
  v312[3] = v327;
  *(_QWORD *)&v312[4] = v328;
  *((_QWORD *)&v312[8] + 1) = v333;
  *(_OWORD *)((char *)&v312[7] + 8) = v332;
  *(_OWORD *)((char *)&v312[6] + 8) = v331;
  *(_OWORD *)((char *)&v312[5] + 8) = v330;
  *(_OWORD *)((char *)&v312[4] + 8) = v329;
  *(_QWORD *)&v312[13] = v322;
  v312[12] = v321;
  v312[11] = v320;
  v312[10] = v319;
  v312[9] = v318;
  *((_QWORD *)&v312[17] + 1) = v317;
  *(_OWORD *)((char *)&v312[16] + 8) = v316;
  *(_OWORD *)((char *)&v312[15] + 8) = v315;
  *(_OWORD *)((char *)&v312[14] + 8) = v314;
  *(_OWORD *)((char *)&v312[13] + 8) = v313;
  *(_QWORD *)&v312[22] = v310;
  v312[21] = v309;
  v312[20] = v308;
  v312[19] = v307;
  v312[18] = v306;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 7LL;
  memcpy(&dest[1], v312, 0x1B0uLL);
  *(_QWORD *)&dest[28] = 0LL;
  *((_QWORD *)&dest[28] + 1) = 8LL;
  *(_QWORD *)&dest[29] = 0LL;
  *((_QWORD *)&dest[29] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[31] = aEscape;
  *((_QWORD *)&dest[31] + 1) = 6LL;
  LOBYTE(dest[32]) = 0;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v306, dest);
  clap_builder::builder::arg::Arg::value_parser(dest, src);
  v77 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[8] - *(_QWORD *)&dest[9] <= 3uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&dest[8], *(_QWORD *)&dest[9], 4LL);
    v77 = *(_QWORD *)&dest[9];
  }
  v78 = *((_QWORD *)&dest[8] + 1);
  v79 = 16 * v77;
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v79) = &anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354;
  *(_QWORD *)(v78 + v79 + 8) = 13LL;
  *(_QWORD *)(v78 + v79 + 16) = anon_806b356b6f45880ddaa2d5affbddf45c_23_llvm_15944453427201852302;
  *(_QWORD *)(v78 + v79 + 24) = 7LL;
  *(_QWORD *)(v78 + v79 + 32) = anon_806b356b6f45880ddaa2d5affbddf45c_22_llvm_15944453427201852302;
  *(_QWORD *)(v78 + v79 + 40) = 6LL;
  *(_QWORD *)(v78 + v79 + 48) = anon_806b356b6f45880ddaa2d5affbddf45c_24_llvm_15944453427201852302;
  *(_QWORD *)(v78 + v79 + 56) = 10LL;
  *(_QWORD *)&dest[9] = v77 + 4;
  memcpy(src, dest, sizeof(src));
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_806b356b6f45880ddaa2d5affbddf45c_23_llvm_15944453427201852302;
  *((_QWORD *)&v303[33] + 1) = 7LL;
  *(_QWORD *)&v303[34] = anon_806b356b6f45880ddaa2d5affbddf45c_23_llvm_15944453427201852302;
  *((_QWORD *)&v303[34] + 1) = 7LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x1100000000004ELL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v303[18] + 8);
  v80 = *(_QWORD *)&v303[19];
  **(_QWORD **)&v303[19] = &unk_2E1EC;
  *(_QWORD *)(v80 + 8) = 1LL;
  *(_BYTE *)(v80 + 16) = 0;
  *((_QWORD *)&v303[19] + 1) = 1LL;
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 1LL;
  *(_QWORD *)&v303[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v303, 0LL, 66LL);
  v81 = *((_QWORD *)&v303[0] + 1);
  v82 = *(_QWORD *)&v303[1];
  *(_OWORD *)(*((_QWORD *)&v303[0] + 1) + *(_QWORD *)&v303[1] + 48LL) = xmmword_2E21D;
  qmemcpy((void *)(v81 + v82), "Use literal quoting style. Equivalent to `--quot", 48);
  *(_WORD *)(v81 + v82 + 64) = 24684;
  *(_QWORD *)&v303[1] = v82 + 66;
  v83 = *(_QWORD *)&v303[0];
  v312[0] = *(_OWORD *)((char *)v303 + 8);
  if ( *(_QWORD *)&v303[0] != 0x8000000000000000LL )
    v303[0] = v312[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v83;
  src[28] = v303[0];
  memcpy(v303, src, 0x250uLL);
  v84 = *(_QWORD *)&v303[9];
  if ( *(_QWORD *)&v303[8] - *(_QWORD *)&v303[9] <= 3uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v303[8], *(_QWORD *)&v303[9], 4LL);
    v84 = *(_QWORD *)&v303[9];
  }
  v85 = *((_QWORD *)&v303[8] + 1);
  v86 = 16 * v84;
  *(_QWORD *)(*((_QWORD *)&v303[8] + 1) + v86) = &anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354;
  *(_QWORD *)(v85 + v86 + 8) = 13LL;
  *(_QWORD *)(v85 + v86 + 16) = anon_806b356b6f45880ddaa2d5affbddf45c_23_llvm_15944453427201852302;
  *(_QWORD *)(v85 + v86 + 24) = 7LL;
  *(_QWORD *)(v85 + v86 + 32) = anon_806b356b6f45880ddaa2d5affbddf45c_22_llvm_15944453427201852302;
  *(_QWORD *)(v85 + v86 + 40) = 6LL;
  *(_QWORD *)(v85 + v86 + 48) = anon_806b356b6f45880ddaa2d5affbddf45c_24_llvm_15944453427201852302;
  *(_QWORD *)(v85 + v86 + 56) = 10LL;
  *(_QWORD *)&v303[9] = v84 + 4;
  memcpy(src, v303, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v303[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v303[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_806b356b6f45880ddaa2d5affbddf45c_22_llvm_15944453427201852302;
  *((_QWORD *)&dest[33] + 1) = 6LL;
  *(_QWORD *)&dest[34] = anon_806b356b6f45880ddaa2d5affbddf45c_22_llvm_15944453427201852302;
  *((_QWORD *)&dest[34] + 1) = 6LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000062LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 64LL);
  v87 = *((_QWORD *)&src[0] + 1);
  v88 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 48LL) = xmmword_2E25F;
  qmemcpy((void *)(v87 + v88), "Use escape quoting style. Equivalent to `--quoti", 48);
  *(_QWORD *)&src[1] = v88 + 64;
  v89 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v89;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v90 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 3uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 4LL);
    v90 = *(_QWORD *)&src[9];
  }
  v91 = *((_QWORD *)&src[8] + 1);
  v92 = 16 * v90;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v92) = &anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354;
  *(_QWORD *)(v91 + v92 + 8) = 13LL;
  *(_QWORD *)(v91 + v92 + 16) = anon_806b356b6f45880ddaa2d5affbddf45c_23_llvm_15944453427201852302;
  *(_QWORD *)(v91 + v92 + 24) = 7LL;
  *(_QWORD *)(v91 + v92 + 32) = anon_806b356b6f45880ddaa2d5affbddf45c_22_llvm_15944453427201852302;
  *(_QWORD *)(v91 + v92 + 40) = 6LL;
  *(_QWORD *)(v91 + v92 + 48) = anon_806b356b6f45880ddaa2d5affbddf45c_24_llvm_15944453427201852302;
  *(_QWORD *)(v91 + v92 + 56) = 10LL;
  *(_QWORD *)&src[9] = v90 + 4;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_806b356b6f45880ddaa2d5affbddf45c_24_llvm_15944453427201852302;
  *((_QWORD *)&v303[33] + 1) = 10LL;
  *(_QWORD *)&v303[34] = anon_806b356b6f45880ddaa2d5affbddf45c_24_llvm_15944453427201852302;
  *((_QWORD *)&v303[34] + 1) = 10LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000000051LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 54LL);
  v93 = *((_QWORD *)&src[0] + 1);
  v94 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_2E28F;
  qmemcpy((void *)(v93 + v94), "Use C quoting style. Equivalent ", 32);
  *(_QWORD *)(v93 + v94 + 46) = 0x60633D656C797473LL;
  *(_QWORD *)&src[1] = v94 + 54;
  v95 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v95;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  v96 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 3uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 4LL);
    v96 = *(_QWORD *)&src[9];
  }
  v97 = *((_QWORD *)&src[8] + 1);
  v98 = 16 * v96;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v98) = &anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354;
  *(_QWORD *)(v97 + v98 + 8) = 13LL;
  *(_QWORD *)(v97 + v98 + 16) = anon_806b356b6f45880ddaa2d5affbddf45c_23_llvm_15944453427201852302;
  *(_QWORD *)(v97 + v98 + 24) = 7LL;
  *(_QWORD *)(v97 + v98 + 32) = anon_806b356b6f45880ddaa2d5affbddf45c_22_llvm_15944453427201852302;
  *(_QWORD *)(v97 + v98 + 40) = 6LL;
  *(_QWORD *)(v97 + v98 + 48) = anon_806b356b6f45880ddaa2d5affbddf45c_24_llvm_15944453427201852302;
  *(_QWORD *)(v97 + v98 + 56) = 10LL;
  *(_QWORD *)&src[9] = v96 + 4;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = &anon_e31c85536e11aee39654ff72a53ef708_22_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 18LL;
  *(_QWORD *)&dest[34] = &anon_e31c85536e11aee39654ff72a53ef708_22_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 18LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000071LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 60LL);
  v99 = *((_QWORD *)&src[0] + 1);
  v100 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 44LL) = *(__int128 *)((char *)&xmmword_2E2C5 + 12);
  qmemcpy((void *)(v99 + v100), "Replace control characters with '?' if they are ", 48);
  *(_QWORD *)&src[1] = v100 + 60;
  v101 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v101;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v102 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 2LL);
    v102 = *(_QWORD *)&src[9];
  }
  v103 = *((_QWORD *)&src[8] + 1);
  v104 = 16 * v102;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v104) = &anon_e31c85536e11aee39654ff72a53ef708_22_llvm_4239552918814193354;
  *(_QWORD *)(v103 + v104 + 8) = 18LL;
  *(_QWORD *)(v103 + v104 + 16) = anon_e31c85536e11aee39654ff72a53ef708_23_llvm_4239552918814193354;
  *(_QWORD *)(v103 + v104 + 24) = 18LL;
  *(_QWORD *)&src[9] = v102 + 2;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_23_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 18LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_23_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 18LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000110000LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 56LL);
  v105 = *((_QWORD *)&src[0] + 1);
  v106 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_2E301;
  qmemcpy((void *)(v105 + v106), "Show control characters 'as is' ", 32);
  *(_QWORD *)(v105 + v106 + 48) = 0x2E64657061637365LL;
  *(_QWORD *)&src[1] = v106 + 56;
  v107 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v107;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  v108 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 2LL);
    v108 = *(_QWORD *)&src[9];
  }
  v109 = *((_QWORD *)&src[8] + 1);
  v110 = 16 * v108;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v110) = &anon_e31c85536e11aee39654ff72a53ef708_22_llvm_4239552918814193354;
  *(_QWORD *)(v109 + v110 + 8) = 18LL;
  *(_QWORD *)(v109 + v110 + 16) = anon_e31c85536e11aee39654ff72a53ef708_23_llvm_4239552918814193354;
  *(_QWORD *)(v109 + v110 + 24) = 18LL;
  *(_QWORD *)&src[9] = v108 + 2;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[22] = 8uLL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = anon_e31c85536e11aee39654ff72a53ef708_29_llvm_4239552918814193354;
  *((_QWORD *)&src[33] + 1) = 4LL;
  *(_QWORD *)&src[34] = anon_e31c85536e11aee39654ff72a53ef708_29_llvm_4239552918814193354;
  *((_QWORD *)&src[34] + 1) = 4LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 124LL);
  v111 = *((_QWORD *)&dest[0] + 1);
  v112 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 108LL) = *(__int128 *)((char *)&xmmword_2E379 + 12);
  qmemcpy(
    (void *)(v111 + v112),
    "Show time in <field>:\n"
    "\taccess time (-u): atime, access, use;\n"
    "\tchange time (-t): ctime, status.\n"
    "\tbirth time: birt",
    112);
  *(_QWORD *)&dest[1] = v112 + 124;
  v113 = *(_QWORD *)&dest[0];
  v312[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v312[0];
  *((_QWORD *)&src[27] + 1) = v113;
  src[28] = dest[0];
  memcpy(dest, src, 0x168uLL);
  memcpy(&dest[23], &src[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&src[22] + 1);
  *(_QWORD *)&v312[0] = aField;
  *((_QWORD *)&v312[0] + 1) = 5LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&dest[21] + 8) = src[0];
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[3] = aAtime;
  *((_QWORD *)&dest[3] + 1) = 5LL;
  *((_QWORD *)&dest[1] + 1) = 0x8000000000000000LL;
  dest[2] = v311;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 8LL;
  *(_QWORD *)&dest[1] = 0LL;
  LOBYTE(dest[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(dest);
  v114 = *((_QWORD *)&dest[0] + 1);
  **((_QWORD **)&dest[0] + 1) = aAccess;
  *(_QWORD *)(v114 + 8) = 6LL;
  *(_QWORD *)&dest[1] = 1LL;
  v312[0] = dest[0];
  v312[2] = dest[2];
  v312[3] = dest[3];
  *(_QWORD *)&v312[4] = *(_QWORD *)&dest[4];
  v312[1] = __PAIR128__(*((unsigned __int64 *)&dest[1] + 1), 1LL);
  if ( *(_QWORD *)&dest[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(v312);
  v115 = *((_QWORD *)&v312[0] + 1);
  *(_QWORD *)(*((_QWORD *)&v312[0] + 1) + 16LL) = &unk_2DCE4;
  *(_QWORD *)(v115 + 24) = 3LL;
  *(_QWORD *)&v312[1] = 2LL;
  v313 = v312[0];
  v315 = v312[2];
  v316 = v312[3];
  v317 = *(_QWORD *)&v312[4];
  v314 = __PAIR128__(*((unsigned __int64 *)&v312[1] + 1), 2LL);
  *(_QWORD *)&dest[3] = aCtime;
  *((_QWORD *)&dest[3] + 1) = 5LL;
  *((_QWORD *)&dest[1] + 1) = 0x8000000000000000LL;
  dest[2] = v311;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 8LL;
  *(_QWORD *)&dest[1] = 0LL;
  LOBYTE(dest[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(dest);
  v116 = *((_QWORD *)&dest[0] + 1);
  **((_QWORD **)&dest[0] + 1) = aStatus;
  *(_QWORD *)(v116 + 8) = 6LL;
  v306 = dest[0];
  v308 = dest[2];
  v309 = dest[3];
  v310 = *(_QWORD *)&dest[4];
  *(_QWORD *)&v307 = 1LL;
  *((_QWORD *)&v307 + 1) = *((_QWORD *)&dest[1] + 1);
  *(_QWORD *)&dest[3] = aBirth;
  *((_QWORD *)&dest[3] + 1) = 5LL;
  *((_QWORD *)&dest[1] + 1) = 0x8000000000000000LL;
  dest[2] = v311;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 8LL;
  *(_QWORD *)&dest[1] = 0LL;
  LOBYTE(dest[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(dest);
  v117 = *((_QWORD *)&dest[0] + 1);
  **((_QWORD **)&dest[0] + 1) = aCreation;
  *(_QWORD *)(v117 + 8) = 8LL;
  v312[9] = dest[0];
  v312[11] = dest[2];
  v312[12] = dest[3];
  *(_QWORD *)&v312[13] = *(_QWORD *)&dest[4];
  v312[10] = __PAIR128__(*((unsigned __int64 *)&dest[1] + 1), 1LL);
  v312[0] = v313;
  v312[1] = v314;
  v312[2] = v315;
  v312[3] = v316;
  *(_QWORD *)&v312[4] = v317;
  *((_QWORD *)&v312[8] + 1) = v310;
  *(_OWORD *)((char *)&v312[7] + 8) = v309;
  *(_OWORD *)((char *)&v312[6] + 8) = v308;
  *(_OWORD *)((char *)&v312[5] + 8) = v307;
  *(_OWORD *)((char *)&v312[4] + 8) = v306;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 3LL;
  memcpy(&dest[1], v312, 0xD8uLL);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v306, dest);
  clap_builder::builder::arg::Arg::value_parser(dest, src);
  memcpy(src, dest, 0x248uLL);
  *((_QWORD *)&src[36] + 1) = *((_QWORD *)&dest[36] + 1) | 0x90LL;
  v118 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 2uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 3LL);
    v118 = *(_QWORD *)&src[9];
  }
  v119 = *((_QWORD *)&src[8] + 1);
  v120 = 16 * v118;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v120) = anon_e31c85536e11aee39654ff72a53ef708_29_llvm_4239552918814193354;
  *(_QWORD *)(v119 + v120 + 8) = 4LL;
  *(_QWORD *)(v119 + v120 + 16) = anon_85d03d1a699a17dda65ec78a38b83d9c_11_llvm_14964567593500591213;
  *(_QWORD *)(v119 + v120 + 24) = 1LL;
  *(_QWORD *)(v119 + v120 + 32) = anon_85d03d1a699a17dda65ec78a38b83d9c_12_llvm_14964567593500591213;
  *(_QWORD *)(v119 + v120 + 40) = 1LL;
  *(_QWORD *)&src[9] = v118 + 3;
  memcpy(v312, src, sizeof(v312));
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_85d03d1a699a17dda65ec78a38b83d9c_12_llvm_14964567593500591213;
  *((_QWORD *)&v303[33] + 1) = 1LL;
  *(_QWORD *)&v303[34] = 0LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000000063LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 281LL);
  v121 = *(_QWORD *)&src[1];
  memcpy((void *)(*(_QWORD *)&src[1] + *((_QWORD *)&src[0] + 1)), aIfTheLongListi, 0x119uLL);
  *(_QWORD *)&src[1] = v121 + 281;
  v122 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v122;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  v123 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 2uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 3LL);
    v123 = *(_QWORD *)&src[9];
  }
  v124 = *((_QWORD *)&src[8] + 1);
  v125 = 16 * v123;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v125) = anon_e31c85536e11aee39654ff72a53ef708_29_llvm_4239552918814193354;
  *(_QWORD *)(v124 + v125 + 8) = 4LL;
  *(_QWORD *)(v124 + v125 + 16) = anon_85d03d1a699a17dda65ec78a38b83d9c_11_llvm_14964567593500591213;
  *(_QWORD *)(v124 + v125 + 24) = 1LL;
  *(_QWORD *)(v124 + v125 + 32) = anon_85d03d1a699a17dda65ec78a38b83d9c_12_llvm_14964567593500591213;
  *(_QWORD *)(v124 + v125 + 40) = 1LL;
  *(_QWORD *)&src[9] = v123 + 3;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_85d03d1a699a17dda65ec78a38b83d9c_11_llvm_14964567593500591213;
  *((_QWORD *)&dest[33] + 1) = 1LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000075LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 247LL);
  v126 = *(_QWORD *)&src[1];
  memcpy((void *)(*(_QWORD *)&src[1] + *((_QWORD *)&src[0] + 1)), aIfTheLongListi_0, 0xF7uLL);
  *(_QWORD *)&src[1] = v126 + 247;
  v127 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v127;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v128 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 2uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 3LL);
    v128 = *(_QWORD *)&src[9];
  }
  v129 = *((_QWORD *)&src[8] + 1);
  v130 = 16 * v128;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v130) = anon_e31c85536e11aee39654ff72a53ef708_29_llvm_4239552918814193354;
  *(_QWORD *)(v129 + v130 + 8) = 4LL;
  *(_QWORD *)(v129 + v130 + 16) = anon_85d03d1a699a17dda65ec78a38b83d9c_11_llvm_14964567593500591213;
  *(_QWORD *)(v129 + v130 + 24) = 1LL;
  *(_QWORD *)(v129 + v130 + 32) = anon_85d03d1a699a17dda65ec78a38b83d9c_12_llvm_14964567593500591213;
  *(_QWORD *)(v129 + v130 + 40) = 1LL;
  *(_QWORD *)&src[9] = v128 + 3;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  v303[22] = 8uLL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_40_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 4LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_40_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 4LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000110000LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3329;
  *(_QWORD *)&v312[0] = aPattern;
  *((_QWORD *)&v312[0] + 1) = 7LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *((_QWORD *)&v303[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&v303[21] + 1), 8LL);
  *((_QWORD *)&v303[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&v303[21] + 8) = src[0];
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 1LL;
  *(_QWORD *)&v303[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v303, 0LL, 75LL);
  v131 = *((_QWORD *)&v303[0] + 1);
  v132 = *(_QWORD *)&v303[1];
  *(_OWORD *)(*((_QWORD *)&v303[0] + 1) + *(_QWORD *)&v303[1] + 59LL) = *(__int128 *)((char *)&xmmword_2E5E1 + 11);
  qmemcpy((void *)(v131 + v132), "do not list implied entries matching shell PATTERN (overridden b", 64);
  *(_QWORD *)&v303[1] = v132 + 75;
  v133 = *(_QWORD *)&v303[0];
  v312[0] = *(_OWORD *)((char *)v303 + 8);
  if ( *(_QWORD *)&v303[0] != 0x8000000000000000LL )
    v303[0] = v312[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v133;
  src[28] = v303[0];
  memcpy(v312, src, sizeof(v312));
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *(_OWORD *)((char *)&dest[1] + 8) = v313;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  dest[4] = v318;
  *(_QWORD *)&dest[5] = 5LL;
  *(_OWORD *)((char *)&dest[5] + 8) = v329;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  dest[22] = 8uLL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  dest[28] = v324;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&dest[30] + 8) = v307;
  *(_OWORD *)((char *)&dest[29] + 8) = v306;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  dest[32] = v334;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_41_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 6LL;
  *(_QWORD *)&dest[34] = anon_e31c85536e11aee39654ff72a53ef708_41_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 6LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000049LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3329;
  *(_QWORD *)&v312[0] = aPattern;
  *((_QWORD *)&v312[0] + 1) = 7LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&dest[21] + 8) = src[0];
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 50LL);
  v134 = *((_QWORD *)&dest[0] + 1);
  v135 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 32LL) = xmmword_2E61C;
  qmemcpy((void *)(v134 + v135), "do not list implied entries matc", 32);
  *(_WORD *)(v134 + v135 + 48) = 20050;
  *(_QWORD *)&dest[1] = v135 + 50;
  v136 = *(_QWORD *)&dest[0];
  v312[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v312[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v136;
  src[28] = dest[0];
  memcpy(v312, src, sizeof(v312));
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_30_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 14LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_30_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 14LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000000042LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 32LL);
  v137 = *((_QWORD *)&src[0] + 1);
  v138 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = xmmword_21DC0;
  *(_OWORD *)(v137 + v138) = xmmword_21DB0;
  *(_QWORD *)&src[1] = v138 + 32;
  v139 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v139;
  v303[28] = src[0];
  memcpy(src, v303, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v303[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v303[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[22] = 8uLL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = anon_e31c85536e11aee39654ff72a53ef708_28_llvm_4239552918814193354;
  *((_QWORD *)&src[33] + 1) = 4LL;
  *(_QWORD *)&src[34] = anon_e31c85536e11aee39654ff72a53ef708_28_llvm_4239552918814193354;
  *((_QWORD *)&src[34] + 1) = 4LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 79LL);
  v140 = *((_QWORD *)&dest[0] + 1);
  v141 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 63LL) = *(__int128 *)((char *)&xmmword_2E65E + 15);
  qmemcpy((void *)(v140 + v141), "Sort by <field>: name, none (-U), time (-t), size (-S), extensio", 64);
  *(_QWORD *)&dest[1] = v141 + 79;
  v142 = *(_QWORD *)&dest[0];
  v312[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v312[0];
  *((_QWORD *)&src[27] + 1) = v142;
  src[28] = dest[0];
  memcpy(dest, src, 0x168uLL);
  memcpy(&dest[23], &src[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&src[22] + 1);
  *(_QWORD *)&v312[0] = aField;
  *((_QWORD *)&v312[0] + 1) = 5LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&dest[21] + 8) = src[0];
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = aName;
  *((_QWORD *)&dest[0] + 1) = 4LL;
  *(_QWORD *)&dest[1] = aNone;
  *((_QWORD *)&dest[1] + 1) = 4LL;
  *(_QWORD *)&dest[2] = anon_e31c85536e11aee39654ff72a53ef708_29_llvm_4239552918814193354;
  *((_QWORD *)&dest[2] + 1) = 4LL;
  *(_QWORD *)&dest[3] = anon_4d12444acd339d9ec9ecb6c591c39f29_18_llvm_11628331613161155184;
  *((_QWORD *)&dest[3] + 1) = 4LL;
  *(_QWORD *)&dest[4] = aVersion;
  *((_QWORD *)&dest[4] + 1) = 7LL;
  *(_QWORD *)&dest[5] = aExtension;
  *((_QWORD *)&dest[5] + 1) = 9LL;
  *(_QWORD *)&dest[6] = aWidth;
  *((_QWORD *)&dest[6] + 1) = 5LL;
  *(_QWORD *)&dest[7] = 0LL;
  *((_QWORD *)&dest[7] + 1) = 7LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v312, dest);
  clap_builder::builder::arg::Arg::value_parser(dest, src);
  memcpy(src, dest, 0x248uLL);
  *((_QWORD *)&src[36] + 1) = *((_QWORD *)&dest[36] + 1) | 0x80LL;
  v143 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 5uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 6LL);
    v143 = *(_QWORD *)&src[9];
  }
  v144 = *((_QWORD *)&src[8] + 1);
  v145 = 16 * v143;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v145) = anon_e31c85536e11aee39654ff72a53ef708_28_llvm_4239552918814193354;
  *(_QWORD *)(v144 + v145 + 8) = 4LL;
  *(_QWORD *)(v144 + v145 + 16) = anon_f495c38c206597a00c0fd0501da6313e_6_llvm_13630389227175191794;
  *(_QWORD *)(v144 + v145 + 24) = 1LL;
  *(_QWORD *)(v144 + v145 + 32) = anon_f495c38c206597a00c0fd0501da6313e_7_llvm_13630389227175191794;
  *(_QWORD *)(v144 + v145 + 40) = 1LL;
  *(_QWORD *)(v144 + v145 + 48) = anon_f495c38c206597a00c0fd0501da6313e_8_llvm_13630389227175191794;
  *(_QWORD *)(v144 + v145 + 56) = 1LL;
  *(_QWORD *)(v144 + v145 + 64) = anon_f495c38c206597a00c0fd0501da6313e_9_llvm_13630389227175191794;
  *(_QWORD *)(v144 + v145 + 72) = 1LL;
  *(_QWORD *)(v144 + v145 + 80) = anon_f495c38c206597a00c0fd0501da6313e_10_llvm_13630389227175191794;
  *(_QWORD *)(v144 + v145 + 88) = 1LL;
  *(_QWORD *)&src[9] = v143 + 6;
  memcpy(v312, src, sizeof(v312));
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_f495c38c206597a00c0fd0501da6313e_6_llvm_13630389227175191794;
  *((_QWORD *)&v303[33] + 1) = 1LL;
  *(_QWORD *)&v303[34] = 0LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000000053LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 33LL);
  v146 = *((_QWORD *)&src[0] + 1);
  v147 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = xmmword_2E68D;
  *(_OWORD *)(v146 + v147) = xmmword_2E67D;
  *(_BYTE *)(v146 + v147 + 32) = 46;
  *(_QWORD *)&src[1] = v147 + 33;
  v148 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v148;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  v149 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 5uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 6LL);
    v149 = *(_QWORD *)&src[9];
  }
  v150 = *((_QWORD *)&src[8] + 1);
  v151 = 16 * v149;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v151) = anon_e31c85536e11aee39654ff72a53ef708_28_llvm_4239552918814193354;
  *(_QWORD *)(v150 + v151 + 8) = 4LL;
  *(_QWORD *)(v150 + v151 + 16) = anon_f495c38c206597a00c0fd0501da6313e_6_llvm_13630389227175191794;
  *(_QWORD *)(v150 + v151 + 24) = 1LL;
  *(_QWORD *)(v150 + v151 + 32) = anon_f495c38c206597a00c0fd0501da6313e_7_llvm_13630389227175191794;
  *(_QWORD *)(v150 + v151 + 40) = 1LL;
  *(_QWORD *)(v150 + v151 + 48) = anon_f495c38c206597a00c0fd0501da6313e_8_llvm_13630389227175191794;
  *(_QWORD *)(v150 + v151 + 56) = 1LL;
  *(_QWORD *)(v150 + v151 + 64) = anon_f495c38c206597a00c0fd0501da6313e_9_llvm_13630389227175191794;
  *(_QWORD *)(v150 + v151 + 72) = 1LL;
  *(_QWORD *)(v150 + v151 + 80) = anon_f495c38c206597a00c0fd0501da6313e_10_llvm_13630389227175191794;
  *(_QWORD *)(v150 + v151 + 88) = 1LL;
  *(_QWORD *)&src[9] = v149 + 6;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_f495c38c206597a00c0fd0501da6313e_7_llvm_13630389227175191794;
  *((_QWORD *)&dest[33] + 1) = 1LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000074LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 67LL);
  v152 = *((_QWORD *)&src[0] + 1);
  v153 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 48LL) = xmmword_2E6CE;
  qmemcpy((void *)(v152 + v153), "Sort by modification time (the 'mtime' in the in", 48);
  *(_DWORD *)(v152 + v153 + 63) = 779383666;
  *(_QWORD *)&src[1] = v153 + 67;
  v154 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v154;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v155 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 5uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 6LL);
    v155 = *(_QWORD *)&src[9];
  }
  v156 = *((_QWORD *)&src[8] + 1);
  v157 = 16 * v155;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v157) = anon_e31c85536e11aee39654ff72a53ef708_28_llvm_4239552918814193354;
  *(_QWORD *)(v156 + v157 + 8) = 4LL;
  *(_QWORD *)(v156 + v157 + 16) = anon_f495c38c206597a00c0fd0501da6313e_6_llvm_13630389227175191794;
  *(_QWORD *)(v156 + v157 + 24) = 1LL;
  *(_QWORD *)(v156 + v157 + 32) = anon_f495c38c206597a00c0fd0501da6313e_7_llvm_13630389227175191794;
  *(_QWORD *)(v156 + v157 + 40) = 1LL;
  *(_QWORD *)(v156 + v157 + 48) = anon_f495c38c206597a00c0fd0501da6313e_8_llvm_13630389227175191794;
  *(_QWORD *)(v156 + v157 + 56) = 1LL;
  *(_QWORD *)(v156 + v157 + 64) = anon_f495c38c206597a00c0fd0501da6313e_9_llvm_13630389227175191794;
  *(_QWORD *)(v156 + v157 + 72) = 1LL;
  *(_QWORD *)(v156 + v157 + 80) = anon_f495c38c206597a00c0fd0501da6313e_10_llvm_13630389227175191794;
  *(_QWORD *)(v156 + v157 + 88) = 1LL;
  *(_QWORD *)&src[9] = v155 + 6;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_f495c38c206597a00c0fd0501da6313e_9_llvm_13630389227175191794;
  *((_QWORD *)&v303[33] + 1) = 1LL;
  *(_QWORD *)&v303[34] = 0LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000000076LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 51LL);
  v158 = *((_QWORD *)&src[0] + 1);
  v159 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_2E701;
  qmemcpy((void *)(v158 + v159), "Natural sort of (version) number", 32);
  *(_DWORD *)(v158 + v159 + 47) = 779314541;
  *(_QWORD *)&src[1] = v159 + 51;
  v160 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v160;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  v161 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 5uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 6LL);
    v161 = *(_QWORD *)&src[9];
  }
  v162 = *((_QWORD *)&src[8] + 1);
  v163 = 16 * v161;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v163) = anon_e31c85536e11aee39654ff72a53ef708_28_llvm_4239552918814193354;
  *(_QWORD *)(v162 + v163 + 8) = 4LL;
  *(_QWORD *)(v162 + v163 + 16) = anon_f495c38c206597a00c0fd0501da6313e_6_llvm_13630389227175191794;
  *(_QWORD *)(v162 + v163 + 24) = 1LL;
  *(_QWORD *)(v162 + v163 + 32) = anon_f495c38c206597a00c0fd0501da6313e_7_llvm_13630389227175191794;
  *(_QWORD *)(v162 + v163 + 40) = 1LL;
  *(_QWORD *)(v162 + v163 + 48) = anon_f495c38c206597a00c0fd0501da6313e_8_llvm_13630389227175191794;
  *(_QWORD *)(v162 + v163 + 56) = 1LL;
  *(_QWORD *)(v162 + v163 + 64) = anon_f495c38c206597a00c0fd0501da6313e_9_llvm_13630389227175191794;
  *(_QWORD *)(v162 + v163 + 72) = 1LL;
  *(_QWORD *)(v162 + v163 + 80) = anon_f495c38c206597a00c0fd0501da6313e_10_llvm_13630389227175191794;
  *(_QWORD *)(v162 + v163 + 88) = 1LL;
  *(_QWORD *)&src[9] = v161 + 6;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_f495c38c206597a00c0fd0501da6313e_10_llvm_13630389227175191794;
  *((_QWORD *)&dest[33] + 1) = 1LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000058LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 39LL);
  v164 = *((_QWORD *)&src[0] + 1);
  v165 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = xmmword_2E724;
  *(_OWORD *)(v164 + v165) = xmmword_2E714;
  *(_QWORD *)(v164 + v165 + 31) = 0x2E6E6F69736E6574LL;
  *(_QWORD *)&src[1] = v165 + 39;
  v166 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v166;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v167 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 5uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 6LL);
    v167 = *(_QWORD *)&src[9];
  }
  v168 = *((_QWORD *)&src[8] + 1);
  v169 = 16 * v167;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v169) = anon_e31c85536e11aee39654ff72a53ef708_28_llvm_4239552918814193354;
  *(_QWORD *)(v168 + v169 + 8) = 4LL;
  *(_QWORD *)(v168 + v169 + 16) = anon_f495c38c206597a00c0fd0501da6313e_6_llvm_13630389227175191794;
  *(_QWORD *)(v168 + v169 + 24) = 1LL;
  *(_QWORD *)(v168 + v169 + 32) = anon_f495c38c206597a00c0fd0501da6313e_7_llvm_13630389227175191794;
  *(_QWORD *)(v168 + v169 + 40) = 1LL;
  *(_QWORD *)(v168 + v169 + 48) = anon_f495c38c206597a00c0fd0501da6313e_8_llvm_13630389227175191794;
  *(_QWORD *)(v168 + v169 + 56) = 1LL;
  *(_QWORD *)(v168 + v169 + 64) = anon_f495c38c206597a00c0fd0501da6313e_9_llvm_13630389227175191794;
  *(_QWORD *)(v168 + v169 + 72) = 1LL;
  *(_QWORD *)(v168 + v169 + 80) = anon_f495c38c206597a00c0fd0501da6313e_10_llvm_13630389227175191794;
  *(_QWORD *)(v168 + v169 + 88) = 1LL;
  *(_QWORD *)&src[9] = v167 + 6;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_f495c38c206597a00c0fd0501da6313e_8_llvm_13630389227175191794;
  *((_QWORD *)&v303[33] + 1) = 1LL;
  *(_QWORD *)&v303[34] = 0LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000000055LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 197LL);
  v170 = *(_QWORD *)&src[1];
  memcpy((void *)(*(_QWORD *)&src[1] + *((_QWORD *)&src[0] + 1)), aDoNotSortListT, 0xC5uLL);
  *(_QWORD *)&src[1] = v170 + 197;
  v171 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v171;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  v172 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 5uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 6LL);
    v172 = *(_QWORD *)&src[9];
  }
  v173 = *((_QWORD *)&src[8] + 1);
  v174 = 16 * v172;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v174) = anon_e31c85536e11aee39654ff72a53ef708_28_llvm_4239552918814193354;
  *(_QWORD *)(v173 + v174 + 8) = 4LL;
  *(_QWORD *)(v173 + v174 + 16) = anon_f495c38c206597a00c0fd0501da6313e_6_llvm_13630389227175191794;
  *(_QWORD *)(v173 + v174 + 24) = 1LL;
  *(_QWORD *)(v173 + v174 + 32) = anon_f495c38c206597a00c0fd0501da6313e_7_llvm_13630389227175191794;
  *(_QWORD *)(v173 + v174 + 40) = 1LL;
  *(_QWORD *)(v173 + v174 + 48) = anon_f495c38c206597a00c0fd0501da6313e_8_llvm_13630389227175191794;
  *(_QWORD *)(v173 + v174 + 56) = 1LL;
  *(_QWORD *)(v173 + v174 + 64) = anon_f495c38c206597a00c0fd0501da6313e_9_llvm_13630389227175191794;
  *(_QWORD *)(v173 + v174 + 72) = 1LL;
  *(_QWORD *)(v173 + v174 + 80) = anon_f495c38c206597a00c0fd0501da6313e_10_llvm_13630389227175191794;
  *(_QWORD *)(v173 + v174 + 88) = 1LL;
  *(_QWORD *)&src[9] = v172 + 6;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_17_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 11LL;
  *(_QWORD *)&dest[34] = anon_e31c85536e11aee39654ff72a53ef708_17_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 11LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x1100000000004CLL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 129LL);
  v175 = *(_QWORD *)&src[1];
  memcpy((void *)(*(_QWORD *)&src[1] + *((_QWORD *)&src[0] + 1)), aWhenShowingFil, 0x81uLL);
  *(_QWORD *)&src[1] = v175 + 129;
  v176 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v176;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v177 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 2uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 3LL);
    v177 = *(_QWORD *)&src[9];
  }
  v178 = *((_QWORD *)&src[8] + 1);
  v179 = 16 * v177;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v179) = anon_e31c85536e11aee39654ff72a53ef708_17_llvm_4239552918814193354;
  *(_QWORD *)(v178 + v179 + 8) = 11LL;
  *(_QWORD *)(v178 + v179 + 16) = anon_e31c85536e11aee39654ff72a53ef708_19_llvm_4239552918814193354;
  *(_QWORD *)(v178 + v179 + 24) = 39LL;
  *(_QWORD *)(v178 + v179 + 32) = anon_e31c85536e11aee39654ff72a53ef708_18_llvm_4239552918814193354;
  *(_QWORD *)(v178 + v179 + 40) = 24LL;
  *(_QWORD *)&src[9] = v177 + 3;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_19_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 39LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_19_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 39LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000110000LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 100LL);
  v180 = *((_QWORD *)&src[0] + 1);
  v181 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 80LL) = xmmword_2E8D1;
  qmemcpy((void *)(v180 + v181), "Do not follow symlinks except when they link to directories and are given as com", 80);
  *(_DWORD *)(v180 + v181 + 96) = 779318382;
  *(_QWORD *)&src[1] = v181 + 100;
  v182 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v182;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  v183 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 2uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 3LL);
    v183 = *(_QWORD *)&src[9];
  }
  v184 = *((_QWORD *)&src[8] + 1);
  v185 = 16 * v183;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v185) = anon_e31c85536e11aee39654ff72a53ef708_17_llvm_4239552918814193354;
  *(_QWORD *)(v184 + v185 + 8) = 11LL;
  *(_QWORD *)(v184 + v185 + 16) = anon_e31c85536e11aee39654ff72a53ef708_19_llvm_4239552918814193354;
  *(_QWORD *)(v184 + v185 + 24) = 39LL;
  *(_QWORD *)(v184 + v185 + 32) = anon_e31c85536e11aee39654ff72a53ef708_18_llvm_4239552918814193354;
  *(_QWORD *)(v184 + v185 + 40) = 24LL;
  *(_QWORD *)&src[9] = v183 + 3;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_18_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 24LL;
  *(_QWORD *)&dest[34] = anon_e31c85536e11aee39654ff72a53ef708_18_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 24LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000048LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 67LL);
  v186 = *((_QWORD *)&src[0] + 1);
  v187 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 48LL) = xmmword_2E915;
  qmemcpy((void *)(v186 + v187), "Do not follow symlinks except when given as comm", 48);
  *(_DWORD *)(v186 + v187 + 63) = 779318382;
  *(_QWORD *)&src[1] = v187 + 67;
  v188 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v188;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v189 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 2uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 3LL);
    v189 = *(_QWORD *)&src[9];
  }
  v190 = *((_QWORD *)&src[8] + 1);
  v191 = 16 * v189;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v191) = anon_e31c85536e11aee39654ff72a53ef708_17_llvm_4239552918814193354;
  *(_QWORD *)(v190 + v191 + 8) = 11LL;
  *(_QWORD *)(v190 + v191 + 16) = anon_e31c85536e11aee39654ff72a53ef708_19_llvm_4239552918814193354;
  *(_QWORD *)(v190 + v191 + 24) = 39LL;
  *(_QWORD *)(v190 + v191 + 32) = anon_e31c85536e11aee39654ff72a53ef708_18_llvm_4239552918814193354;
  *(_QWORD *)(v190 + v191 + 40) = 24LL;
  *(_QWORD *)&src[9] = v189 + 3;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_26_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 8LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_26_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 8LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)((char *)&v303[36] + 4) = (char *)&loc_10FFFC + 4;
  WORD6(v303[36]) = 3337;
  LODWORD(v303[36]) = 71;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 33LL);
  v192 = *((_QWORD *)&src[0] + 1);
  v193 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = xmmword_2E938;
  *(_OWORD *)(v192 + v193) = xmmword_2E928;
  *(_BYTE *)(v192 + v193 + 32) = 46;
  *(_QWORD *)&src[1] = v193 + 33;
  v194 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v194;
  v303[28] = src[0];
  memcpy(src, v303, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v303[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v303[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_25_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 6LL;
  *(_QWORD *)&dest[34] = anon_e31c85536e11aee39654ff72a53ef708_25_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 6LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 97LL);
  v195 = *((_QWORD *)&src[0] + 1);
  v196 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 80LL) = xmmword_2E999;
  qmemcpy((void *)(v195 + v196), "Show author in long format. On the supported platforms, the author always matche", 80);
  *(_BYTE *)(v195 + v196 + 96) = 46;
  *(_QWORD *)&src[1] = v196 + 97;
  v197 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v197;
  dest[28] = src[0];
  memcpy(src, dest, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(src[36]) = HIBYTE(dest[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_15_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 3LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_15_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 3LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000000061LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v303[8], 0LL, 2LL);
  v198 = *(_QWORD *)&v303[9];
  v199 = *((_QWORD *)&v303[8] + 1);
  v200 = 16LL * *(_QWORD *)&v303[9];
  *(_QWORD *)(*((_QWORD *)&v303[8] + 1) + v200) = anon_e31c85536e11aee39654ff72a53ef708_15_llvm_4239552918814193354;
  *(_QWORD *)(v199 + v200 + 8) = 3LL;
  *(_QWORD *)(v199 + v200 + 16) = anon_e31c85536e11aee39654ff72a53ef708_16_llvm_4239552918814193354;
  *(_QWORD *)(v199 + v200 + 24) = 10LL;
  *(_QWORD *)&v303[9] = v198 + 2;
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 1LL;
  *(_QWORD *)&v303[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v303, 0LL, 66LL);
  v201 = *((_QWORD *)&v303[0] + 1);
  v202 = *(_QWORD *)&v303[1];
  *(_OWORD *)(*((_QWORD *)&v303[0] + 1) + *(_QWORD *)&v303[1] + 48LL) = xmmword_2E9DA;
  qmemcpy((void *)(v201 + v202), "Do not ignore hidden files (files with names tha", 48);
  *(_WORD *)(v201 + v202 + 64) = 11817;
  *(_QWORD *)&v303[1] = v202 + 66;
  v203 = *(_QWORD *)&v303[0];
  v312[0] = *(_OWORD *)((char *)v303 + 8);
  if ( *(_QWORD *)&v303[0] != 0x8000000000000000LL )
    v303[0] = v312[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v203;
  src[28] = v303[0];
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_16_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 10LL;
  *(_QWORD *)&dest[34] = anon_e31c85536e11aee39654ff72a53ef708_16_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 10LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000041LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&dest[8], 0LL, 2LL);
  v204 = *(_QWORD *)&dest[9];
  v205 = *((_QWORD *)&dest[8] + 1);
  v206 = 16LL * *(_QWORD *)&dest[9];
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v206) = anon_e31c85536e11aee39654ff72a53ef708_15_llvm_4239552918814193354;
  *(_QWORD *)(v205 + v206 + 8) = 3LL;
  *(_QWORD *)(v205 + v206 + 16) = anon_e31c85536e11aee39654ff72a53ef708_16_llvm_4239552918814193354;
  *(_QWORD *)(v205 + v206 + 24) = 10LL;
  *(_QWORD *)&dest[9] = v204 + 2;
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 91LL);
  v207 = *((_QWORD *)&dest[0] + 1);
  v208 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 75LL) = *(__int128 *)((char *)&xmmword_2EA2C + 11);
  qmemcpy((void *)(v207 + v208), "In a directory, do not ignore all file names that start with '.', only ignore '.", 80);
  *(_QWORD *)&dest[1] = v208 + 91;
  v209 = *(_QWORD *)&dest[0];
  v312[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v312[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v209;
  src[28] = dest[0];
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_31_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 9LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_31_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 9LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000000064LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 243LL);
  v210 = *(_QWORD *)&src[1];
  memcpy((void *)(*(_QWORD *)&src[1] + *((_QWORD *)&src[0] + 1)), aOnlyListTheNam, 0xF3uLL);
  *(_QWORD *)&src[1] = v210 + 243;
  v211 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v211;
  v303[28] = src[0];
  memcpy(src, v303, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v303[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v303[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_4d12444acd339d9ec9ecb6c591c39f29_20_llvm_11628331613161155184;
  *((_QWORD *)&dest[33] + 1) = 14LL;
  *(_QWORD *)&dest[34] = anon_4d12444acd339d9ec9ecb6c591c39f29_20_llvm_11628331613161155184;
  *((_QWORD *)&dest[34] + 1) = 14LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000068LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 51LL);
  v212 = *((_QWORD *)&src[0] + 1);
  v213 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_2EB5A;
  qmemcpy((void *)(v212 + v213), "Print human readable file sizes ", 32);
  *(_DWORD *)(v212 + v213 + 47) = 774457142;
  *(_QWORD *)&src[1] = v213 + 51;
  v214 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v214;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v215 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 2LL);
    v215 = *(_QWORD *)&src[9];
  }
  v216 = *((_QWORD *)&src[8] + 1);
  v217 = 16 * v215;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v217) = &anon_4d12444acd339d9ec9ecb6c591c39f29_19_llvm_11628331613161155184;
  *(_QWORD *)(v216 + v217 + 8) = 10LL;
  *(_QWORD *)(v216 + v217 + 16) = anon_4d12444acd339d9ec9ecb6c591c39f29_21_llvm_11628331613161155184;
  *(_QWORD *)(v216 + v217 + 24) = 2LL;
  *(_QWORD *)&src[9] = v215 + 2;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_4d12444acd339d9ec9ecb6c591c39f29_22_llvm_11628331613161155184;
  *((_QWORD *)&v303[33] + 1) = 9LL;
  *(_QWORD *)&v303[34] = anon_4d12444acd339d9ec9ecb6c591c39f29_22_llvm_11628331613161155184;
  *((_QWORD *)&v303[34] + 1) = 9LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x1100000000006BLL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 93LL);
  v218 = *((_QWORD *)&src[0] + 1);
  v219 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 77LL) = *(__int128 *)((char *)&xmmword_2EBAD + 13);
  qmemcpy((void *)(v218 + v219), "default to 1024-byte blocks for file system usage; used only with -s and per dir", 80);
  *(_QWORD *)&src[1] = v219 + 93;
  v220 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v220;
  v303[28] = src[0];
  memcpy(src, v303, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v303[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v303[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_4d12444acd339d9ec9ecb6c591c39f29_21_llvm_11628331613161155184;
  *((_QWORD *)&dest[33] + 1) = 2LL;
  *(_QWORD *)&dest[34] = anon_4d12444acd339d9ec9ecb6c591c39f29_21_llvm_11628331613161155184;
  *((_QWORD *)&dest[34] + 1) = 2LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 69LL);
  v221 = *((_QWORD *)&src[0] + 1);
  v222 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 48LL) = xmmword_2EBFA;
  qmemcpy((void *)(v221 + v222), "Print human readable file sizes using powers of ", 48);
  *(_QWORD *)(v221 + v222 + 61) = 0x2E3432303120666FLL;
  *(_QWORD *)&src[1] = v222 + 69;
  v223 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v223;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v224 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 2LL);
    v224 = *(_QWORD *)&src[9];
  }
  v225 = *((_QWORD *)&src[8] + 1);
  v226 = 16 * v224;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v226) = &anon_4d12444acd339d9ec9ecb6c591c39f29_19_llvm_11628331613161155184;
  *(_QWORD *)(v225 + v226 + 8) = 10LL;
  *(_QWORD *)(v225 + v226 + 16) = anon_4d12444acd339d9ec9ecb6c591c39f29_20_llvm_11628331613161155184;
  *(_QWORD *)(v225 + v226 + 24) = 14LL;
  *(_QWORD *)&src[9] = v224 + 2;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  v303[22] = 8uLL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = &anon_4d12444acd339d9ec9ecb6c591c39f29_19_llvm_11628331613161155184;
  *((_QWORD *)&v303[33] + 1) = 10LL;
  *(_QWORD *)&v303[34] = &anon_4d12444acd339d9ec9ecb6c591c39f29_19_llvm_11628331613161155184;
  *((_QWORD *)&v303[34] + 1) = 10LL;
  *(_QWORD *)&v303[35] = 0LL;
  v303[36] = xmmword_1D430;
  *(_QWORD *)&v312[0] = aBlockSize;
  *((_QWORD *)&v312[0] + 1) = 10LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *((_QWORD *)&v303[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&v303[21] + 1), 8LL);
  *((_QWORD *)&v303[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&v303[21] + 8) = src[0];
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 1LL;
  *(_QWORD *)&v303[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v303, 0LL, 44LL);
  v227 = *((_QWORD *)&v303[0] + 1);
  v228 = *(_QWORD *)&v303[1];
  *(_OWORD *)(*((_QWORD *)&v303[0] + 1) + *(_QWORD *)&v303[1] + 28LL) = *(__int128 *)((char *)&xmmword_2EC1F + 12);
  qmemcpy((void *)(v227 + v228), "scale sizes by BLOCK_SIZE when p", 32);
  *(_QWORD *)&v303[1] = v228 + 44;
  v229 = *(_QWORD *)&v303[0];
  v312[0] = *(_OWORD *)((char *)v303 + 8);
  if ( *(_QWORD *)&v303[0] != 0x8000000000000000LL )
    v303[0] = v312[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v229;
  src[28] = v303[0];
  memcpy(v303, src, 0x250uLL);
  v230 = *(_QWORD *)&v303[9];
  if ( *(_QWORD *)&v303[8] - *(_QWORD *)&v303[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v303[8], *(_QWORD *)&v303[9], 2LL);
    v230 = *(_QWORD *)&v303[9];
  }
  v231 = *((_QWORD *)&v303[8] + 1);
  v232 = 16 * v230;
  *(_QWORD *)(*((_QWORD *)&v303[8] + 1) + v232) = anon_4d12444acd339d9ec9ecb6c591c39f29_21_llvm_11628331613161155184;
  *(_QWORD *)(v231 + v232 + 8) = 2LL;
  *(_QWORD *)(v231 + v232 + 16) = anon_4d12444acd339d9ec9ecb6c591c39f29_20_llvm_11628331613161155184;
  *(_QWORD *)(v231 + v232 + 24) = 14LL;
  *(_QWORD *)&v303[9] = v230 + 2;
  memcpy(src, v303, sizeof(src));
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_32_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = anon_e31c85536e11aee39654ff72a53ef708_32_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 5LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000069LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 35LL);
  v233 = *((_QWORD *)&src[0] + 1);
  v234 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = xmmword_2EC4B;
  *(_OWORD *)(v233 + v234) = xmmword_2EC3B;
  *(_DWORD *)(v233 + v234 + 31) = 1701603686;
  *(_QWORD *)&src[1] = v234 + 35;
  v235 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v235;
  dest[28] = src[0];
  memcpy(src, dest, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(src[36]) = HIBYTE(dest[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_33_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 7LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_33_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 7LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000000072LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 131LL);
  v236 = *(_QWORD *)&src[1];
  memcpy((void *)(*(_QWORD *)&src[1] + *((_QWORD *)&src[0] + 1)), aReverseWhateve, 0x83uLL);
  *(_QWORD *)&src[1] = v236 + 131;
  v237 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v237;
  v303[28] = src[0];
  memcpy(src, v303, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v303[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v303[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_34_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 9LL;
  *(_QWORD *)&dest[34] = anon_e31c85536e11aee39654ff72a53ef708_34_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 9LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000052LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 49LL);
  v238 = *((_QWORD *)&src[0] + 1);
  v239 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_2ED01;
  qmemcpy((void *)(v238 + v239), "List the contents of all directo", 32);
  *(_BYTE *)(v238 + v239 + 48) = 46;
  *(_QWORD *)&src[1] = v239 + 49;
  v240 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v240;
  dest[28] = src[0];
  memcpy(src, dest, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(src[36]) = HIBYTE(dest[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[22] = 8uLL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = anon_e31c85536e11aee39654ff72a53ef708_24_llvm_4239552918814193354;
  *((_QWORD *)&src[33] + 1) = 5LL;
  *(_QWORD *)&src[34] = anon_e31c85536e11aee39654ff72a53ef708_24_llvm_4239552918814193354;
  *((_QWORD *)&src[34] + 1) = 5LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)((char *)&src[36] + 4) = (char *)&loc_10FFFC + 4;
  WORD6(src[36]) = 3337;
  LODWORD(src[36]) = 119;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 1LL;
  *(_QWORD *)&v303[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v303, 0LL, 46LL);
  v241 = *((_QWORD *)&v303[0] + 1);
  v242 = *(_QWORD *)&v303[1];
  *(_OWORD *)(*((_QWORD *)&v303[0] + 1) + *(_QWORD *)&v303[1] + 30LL) = *(__int128 *)((char *)&xmmword_2ED22 + 14);
  qmemcpy((void *)(v241 + v242), "Assume that the terminal is COLS", 32);
  *(_QWORD *)&v303[1] = v242 + 46;
  v243 = *(_QWORD *)&v303[0];
  v312[0] = *(_OWORD *)((char *)v303 + 8);
  if ( *(_QWORD *)&v303[0] != 0x8000000000000000LL )
    v303[0] = v312[0];
  *((_QWORD *)&src[27] + 1) = v243;
  src[28] = v303[0];
  memcpy(v303, src, 0x168uLL);
  memcpy(&v303[23], &src[23], 0xE0uLL);
  *((_QWORD *)&v303[22] + 1) = *((_QWORD *)&src[22] + 1);
  *(_QWORD *)&v312[0] = aCols;
  *((_QWORD *)&v312[0] + 1) = 4LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *((_QWORD *)&v303[21] + 1) )
    _rust_dealloc(*(_QWORD *)&v303[22], 16LL * *((_QWORD *)&v303[21] + 1), 8LL);
  *((_QWORD *)&v303[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&v303[21] + 8) = src[0];
  memcpy(src, v303, sizeof(src));
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_4d12444acd339d9ec9ecb6c591c39f29_18_llvm_11628331613161155184;
  *((_QWORD *)&dest[33] + 1) = 4LL;
  *(_QWORD *)&dest[34] = anon_4d12444acd339d9ec9ecb6c591c39f29_18_llvm_11628331613161155184;
  *((_QWORD *)&dest[34] + 1) = 4LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000073LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 48LL);
  v244 = *((_QWORD *)&src[0] + 1);
  v245 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_2ED60;
  qmemcpy((void *)(v244 + v245), "print the allocated size of each", 32);
  *(_QWORD *)&src[1] = v245 + 48;
  v246 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v246;
  dest[28] = src[0];
  memcpy(src, dest, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(src[36]) = HIBYTE(dest[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = &anon_e31c85536e11aee39654ff72a53ef708_35_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 5LL;
  *(_QWORD *)&v303[34] = &anon_e31c85536e11aee39654ff72a53ef708_35_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 5LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000110000LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 32LL);
  v247 = *((_QWORD *)&src[0] + 1);
  v248 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = xmmword_21DE0;
  *(_OWORD *)(v247 + v248) = xmmword_21DD0;
  *(_QWORD *)&src[1] = v248 + 32;
  v249 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v249;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[3] = aAlways;
  *((_QWORD *)&v303[3] + 1) = 6LL;
  *((_QWORD *)&v303[1] + 1) = 0x8000000000000000LL;
  v303[2] = v311;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 8LL;
  *(_QWORD *)&v303[1] = 0LL;
  LOBYTE(v303[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(v303);
  v250 = *((_QWORD *)&v303[0] + 1);
  **((_QWORD **)&v303[0] + 1) = aYes;
  *(_QWORD *)(v250 + 8) = 3LL;
  *(_QWORD *)&v303[1] = 1LL;
  v312[0] = v303[0];
  v312[2] = v303[2];
  v312[3] = v303[3];
  *(_QWORD *)&v312[4] = *(_QWORD *)&v303[4];
  v312[1] = __PAIR128__(*((unsigned __int64 *)&v303[1] + 1), 1LL);
  if ( *(_QWORD *)&v303[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(v312);
  v251 = *((_QWORD *)&v312[0] + 1);
  *(_QWORD *)(*((_QWORD *)&v312[0] + 1) + 16LL) = &unk_2DD40;
  *(_QWORD *)(v251 + 24) = 5LL;
  *(_QWORD *)&v312[1] = 2LL;
  v318 = v312[0];
  v320 = v312[2];
  v321 = v312[3];
  v322 = *(_QWORD *)&v312[4];
  v319 = __PAIR128__(*((unsigned __int64 *)&v312[1] + 1), 2LL);
  *(_QWORD *)&v303[3] = aAuto;
  *((_QWORD *)&v303[3] + 1) = 4LL;
  *((_QWORD *)&v303[1] + 1) = 0x8000000000000000LL;
  v303[2] = v311;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 8LL;
  *(_QWORD *)&v303[1] = 0LL;
  LOBYTE(v303[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(v303);
  v252 = *((_QWORD *)&v303[0] + 1);
  **((_QWORD **)&v303[0] + 1) = aTty;
  *(_QWORD *)(v252 + 8) = 3LL;
  *(_QWORD *)&v303[1] = 1LL;
  v312[0] = v303[0];
  v312[2] = v303[2];
  v312[3] = v303[3];
  *(_QWORD *)&v312[4] = *(_QWORD *)&v303[4];
  v312[1] = __PAIR128__(*((unsigned __int64 *)&v303[1] + 1), 1LL);
  if ( *(_QWORD *)&v303[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(v312);
  v253 = *((_QWORD *)&v312[0] + 1);
  *(_QWORD *)(*((_QWORD *)&v312[0] + 1) + 16LL) = &unk_2DD48;
  *(_QWORD *)(v253 + 24) = 6LL;
  *(_QWORD *)&v312[1] = 2LL;
  v313 = v312[0];
  v315 = v312[2];
  v316 = v312[3];
  v317 = *(_QWORD *)&v312[4];
  v314 = __PAIR128__(*((unsigned __int64 *)&v312[1] + 1), 2LL);
  *(_QWORD *)&v303[3] = aNever;
  *((_QWORD *)&v303[3] + 1) = 5LL;
  *((_QWORD *)&v303[1] + 1) = 0x8000000000000000LL;
  v303[2] = v311;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 8LL;
  *(_QWORD *)&v303[1] = 0LL;
  LOBYTE(v303[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(v303);
  v254 = *((_QWORD *)&v303[0] + 1);
  **((_QWORD **)&v303[0] + 1) = aNo;
  *(_QWORD *)(v254 + 8) = 2LL;
  *(_QWORD *)&v303[1] = 1LL;
  v306 = v303[0];
  v308 = v303[2];
  v309 = v303[3];
  v310 = *(_QWORD *)&v303[4];
  v307 = __PAIR128__(*((unsigned __int64 *)&v303[1] + 1), 1LL);
  if ( *(_QWORD *)&v303[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v306);
  v255 = *((_QWORD *)&v306 + 1);
  *(_QWORD *)(*((_QWORD *)&v306 + 1) + 16LL) = aNone;
  *(_QWORD *)(v255 + 24) = 4LL;
  *(_QWORD *)&v307 = 2LL;
  v312[9] = v306;
  v312[11] = v308;
  v312[12] = v309;
  *(_QWORD *)&v312[13] = v310;
  v312[10] = __PAIR128__(*((unsigned __int64 *)&v307 + 1), 2LL);
  v312[0] = v318;
  v312[1] = v319;
  v312[2] = v320;
  v312[3] = v321;
  *(_QWORD *)&v312[4] = v322;
  *((_QWORD *)&v312[8] + 1) = v317;
  *(_OWORD *)((char *)&v312[7] + 8) = v316;
  *(_OWORD *)((char *)&v312[6] + 8) = v315;
  *(_OWORD *)((char *)&v312[5] + 8) = v314;
  *(_OWORD *)((char *)&v312[4] + 8) = v313;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 3LL;
  memcpy(&v303[1], v312, 0xD8uLL);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v306, v303);
  clap_builder::builder::arg::Arg::value_parser(v303, src);
  src[0] = v303[0];
  memcpy((char *)&src[2] + 8, (char *)&v303[2] + 8, 0x220uLL);
  src[1] = 1uLL;
  *(_QWORD *)&src[2] = 1LL;
  *((_QWORD *)&src[36] + 1) = *((_QWORD *)&v303[36] + 1) | 0x80LL;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_37_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 15LL;
  *(_QWORD *)&dest[34] = anon_e31c85536e11aee39654ff72a53ef708_37_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 15LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 116LL);
  v256 = *((_QWORD *)&src[0] + 1);
  v257 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 96LL) = xmmword_2EDD0;
  qmemcpy(
    (void *)(v256 + v257),
    "Append indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-",
    96);
  *(_DWORD *)(v256 + v257 + 112) = 692464936;
  *(_QWORD *)&src[1] = v257 + 116;
  v258 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v258;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = aNone;
  *((_QWORD *)&dest[0] + 1) = 4LL;
  *(_QWORD *)&dest[1] = aSlash;
  *((_QWORD *)&dest[1] + 1) = 5LL;
  *(_QWORD *)&dest[2] = aFileType;
  *((_QWORD *)&dest[2] + 1) = 9LL;
  *(_QWORD *)&dest[3] = anon_2fc61395128ff650a82ff2a09ac6a647_2_llvm_11692075339398190683;
  *((_QWORD *)&dest[3] + 1) = 8LL;
  *(_QWORD *)&dest[4] = 0LL;
  *((_QWORD *)&dest[4] + 1) = 4LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v312, dest);
  clap_builder::builder::arg::Arg::value_parser(dest, src);
  v259 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[8] - *(_QWORD *)&dest[9] <= 3uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&dest[8], *(_QWORD *)&dest[9], 4LL);
    v259 = *(_QWORD *)&dest[9];
  }
  v260 = *((_QWORD *)&dest[8] + 1);
  v261 = 16 * v259;
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v261) = anon_2fc61395128ff650a82ff2a09ac6a647_1_llvm_11692075339398190683;
  *(_QWORD *)(v260 + v261 + 8) = 9LL;
  *(_QWORD *)(v260 + v261 + 16) = anon_2fc61395128ff650a82ff2a09ac6a647_0_llvm_11692075339398190683;
  *(_QWORD *)(v260 + v261 + 24) = 1LL;
  *(_QWORD *)(v260 + v261 + 32) = anon_2fc61395128ff650a82ff2a09ac6a647_2_llvm_11692075339398190683;
  *(_QWORD *)(v260 + v261 + 40) = 8LL;
  *(_QWORD *)(v260 + v261 + 48) = anon_e31c85536e11aee39654ff72a53ef708_37_llvm_4239552918814193354;
  *(_QWORD *)(v260 + v261 + 56) = 15LL;
  *(_QWORD *)&dest[9] = v259 + 4;
  memcpy(src, dest, sizeof(src));
  clap_builder::builder::command::Command::arg(dest, v303);
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[22] = 8uLL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = anon_2fc61395128ff650a82ff2a09ac6a647_2_llvm_11692075339398190683;
  *((_QWORD *)&src[33] + 1) = 8LL;
  *(_QWORD *)&src[34] = anon_2fc61395128ff650a82ff2a09ac6a647_2_llvm_11692075339398190683;
  *((_QWORD *)&src[34] + 1) = 8LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000046LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 1LL;
  *(_QWORD *)&v303[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v303, 0LL, 697LL);
  v262 = *(_QWORD *)&v303[1];
  memcpy((void *)(*(_QWORD *)&v303[1] + *((_QWORD *)&v303[0] + 1)), aAppendACharact, 0x2B9uLL);
  *(_QWORD *)&v303[1] = v262 + 697;
  v263 = *(_QWORD *)&v303[0];
  v312[0] = *(_OWORD *)((char *)v303 + 8);
  if ( *(_QWORD *)&v303[0] != 0x8000000000000000LL )
    v303[0] = v312[0];
  *((_QWORD *)&src[27] + 1) = v263;
  src[28] = v303[0];
  memcpy(v303, src, 0x168uLL);
  memcpy(&v303[23], &src[23], 0xE0uLL);
  *((_QWORD *)&v303[22] + 1) = *((_QWORD *)&src[22] + 1);
  *(_QWORD *)&v312[0] = aWhen_0;
  *((_QWORD *)&v312[0] + 1) = 4LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *((_QWORD *)&v303[21] + 1) )
    _rust_dealloc(*(_QWORD *)&v303[22], 16LL * *((_QWORD *)&v303[21] + 1), 8LL);
  *((_QWORD *)&v303[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&v303[21] + 8) = src[0];
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[3] = aAlways;
  *((_QWORD *)&v303[3] + 1) = 6LL;
  *((_QWORD *)&v303[1] + 1) = 0x8000000000000000LL;
  v303[2] = v311;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 8LL;
  *(_QWORD *)&v303[1] = 0LL;
  LOBYTE(v303[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(v303);
  v264 = *((_QWORD *)&v303[0] + 1);
  **((_QWORD **)&v303[0] + 1) = aYes;
  *(_QWORD *)(v264 + 8) = 3LL;
  *(_QWORD *)&v303[1] = 1LL;
  v312[0] = v303[0];
  v312[2] = v303[2];
  v312[3] = v303[3];
  *(_QWORD *)&v312[4] = *(_QWORD *)&v303[4];
  v312[1] = __PAIR128__(*((unsigned __int64 *)&v303[1] + 1), 1LL);
  if ( *(_QWORD *)&v303[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(v312);
  v265 = *((_QWORD *)&v312[0] + 1);
  *(_QWORD *)(*((_QWORD *)&v312[0] + 1) + 16LL) = &unk_2DD40;
  *(_QWORD *)(v265 + 24) = 5LL;
  *(_QWORD *)&v312[1] = 2LL;
  v318 = v312[0];
  v320 = v312[2];
  v321 = v312[3];
  v322 = *(_QWORD *)&v312[4];
  v319 = __PAIR128__(*((unsigned __int64 *)&v312[1] + 1), 2LL);
  *(_QWORD *)&v303[3] = aAuto;
  *((_QWORD *)&v303[3] + 1) = 4LL;
  *((_QWORD *)&v303[1] + 1) = 0x8000000000000000LL;
  v303[2] = v311;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 8LL;
  *(_QWORD *)&v303[1] = 0LL;
  LOBYTE(v303[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(v303);
  v266 = *((_QWORD *)&v303[0] + 1);
  **((_QWORD **)&v303[0] + 1) = aTty;
  *(_QWORD *)(v266 + 8) = 3LL;
  *(_QWORD *)&v303[1] = 1LL;
  v312[0] = v303[0];
  v312[2] = v303[2];
  v312[3] = v303[3];
  *(_QWORD *)&v312[4] = *(_QWORD *)&v303[4];
  v312[1] = __PAIR128__(*((unsigned __int64 *)&v303[1] + 1), 1LL);
  if ( *(_QWORD *)&v303[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(v312);
  v267 = *((_QWORD *)&v312[0] + 1);
  *(_QWORD *)(*((_QWORD *)&v312[0] + 1) + 16LL) = &unk_2DD48;
  *(_QWORD *)(v267 + 24) = 6LL;
  *(_QWORD *)&v312[1] = 2LL;
  v313 = v312[0];
  v315 = v312[2];
  v316 = v312[3];
  v317 = *(_QWORD *)&v312[4];
  v314 = __PAIR128__(*((unsigned __int64 *)&v312[1] + 1), 2LL);
  *(_QWORD *)&v303[3] = aNever;
  *((_QWORD *)&v303[3] + 1) = 5LL;
  *((_QWORD *)&v303[1] + 1) = 0x8000000000000000LL;
  v303[2] = v311;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 8LL;
  *(_QWORD *)&v303[1] = 0LL;
  LOBYTE(v303[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(v303);
  v268 = *((_QWORD *)&v303[0] + 1);
  **((_QWORD **)&v303[0] + 1) = aNo;
  *(_QWORD *)(v268 + 8) = 2LL;
  *(_QWORD *)&v303[1] = 1LL;
  v306 = v303[0];
  v308 = v303[2];
  v309 = v303[3];
  v310 = *(_QWORD *)&v303[4];
  v307 = __PAIR128__(*((unsigned __int64 *)&v303[1] + 1), 1LL);
  if ( *(_QWORD *)&v303[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v306);
  v269 = *((_QWORD *)&v306 + 1);
  *(_QWORD *)(*((_QWORD *)&v306 + 1) + 16LL) = aNone;
  *(_QWORD *)(v269 + 24) = 4LL;
  *(_QWORD *)&v307 = 2LL;
  v312[9] = v306;
  v312[11] = v308;
  v312[12] = v309;
  *(_QWORD *)&v312[13] = v310;
  v312[10] = __PAIR128__(*((unsigned __int64 *)&v307 + 1), 2LL);
  v312[0] = v318;
  v312[1] = v319;
  v312[2] = v320;
  v312[3] = v321;
  *(_QWORD *)&v312[4] = v322;
  *((_QWORD *)&v312[8] + 1) = v317;
  *(_OWORD *)((char *)&v312[7] + 8) = v316;
  *(_OWORD *)((char *)&v312[6] + 8) = v315;
  *(_OWORD *)((char *)&v312[5] + 8) = v314;
  *(_OWORD *)((char *)&v312[4] + 8) = v313;
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 3LL;
  memcpy(&v303[1], v312, 0xD8uLL);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v306, v303);
  clap_builder::builder::arg::Arg::value_parser(v312, src);
  memcpy(v303, v312, 0x250uLL);
  *(_QWORD *)&v306 = aAlways;
  *((_QWORD *)&v306 + 1) = 6LL;
  *(_QWORD *)&v307 = 0LL;
  *((_QWORD *)&v307 + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, &v306);
  if ( *(_QWORD *)&v303[26] )
    _rust_dealloc(*((_QWORD *)&v303[26] + 1), 16LL * *(_QWORD *)&v303[26], 8LL);
  *(_QWORD *)&v303[27] = *(_QWORD *)&src[1];
  v303[26] = src[0];
  src[0] = v303[0];
  memcpy((char *)&src[2] + 8, (char *)&v303[2] + 8, 0x220uLL);
  src[1] = 1uLL;
  *(_QWORD *)&src[2] = 1LL;
  *((_QWORD *)&src[36] + 1) = *((_QWORD *)&v303[36] + 1) | 0x80LL;
  v270 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 3uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 4LL);
    v270 = *(_QWORD *)&src[9];
  }
  v271 = *((_QWORD *)&src[8] + 1);
  v272 = 16 * v270;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v272) = anon_2fc61395128ff650a82ff2a09ac6a647_1_llvm_11692075339398190683;
  *(_QWORD *)(v271 + v272 + 8) = 9LL;
  *(_QWORD *)(v271 + v272 + 16) = anon_2fc61395128ff650a82ff2a09ac6a647_0_llvm_11692075339398190683;
  *(_QWORD *)(v271 + v272 + 24) = 1LL;
  *(_QWORD *)(v271 + v272 + 32) = anon_2fc61395128ff650a82ff2a09ac6a647_2_llvm_11692075339398190683;
  *(_QWORD *)(v271 + v272 + 40) = 8LL;
  *(_QWORD *)(v271 + v272 + 48) = anon_e31c85536e11aee39654ff72a53ef708_37_llvm_4239552918814193354;
  *(_QWORD *)(v271 + v272 + 56) = 15LL;
  *(_QWORD *)&src[9] = v270 + 4;
  memcpy(v312, src, sizeof(v312));
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_2fc61395128ff650a82ff2a09ac6a647_1_llvm_11692075339398190683;
  *((_QWORD *)&dest[33] + 1) = 9LL;
  *(_QWORD *)&dest[34] = anon_2fc61395128ff650a82ff2a09ac6a647_1_llvm_11692075339398190683;
  *((_QWORD *)&dest[34] + 1) = 9LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 41LL);
  v273 = *((_QWORD *)&src[0] + 1);
  v274 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 25LL) = *(__int128 *)((char *)&xmmword_2F0AD + 9);
  qmemcpy((void *)(v273 + v274), "Same as --classify, but do not a", 32);
  *(_QWORD *)&src[1] = v274 + 41;
  v275 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v275;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v276 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 3uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 4LL);
    v276 = *(_QWORD *)&src[9];
  }
  v277 = *((_QWORD *)&src[8] + 1);
  v278 = 16 * v276;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v278) = anon_2fc61395128ff650a82ff2a09ac6a647_1_llvm_11692075339398190683;
  *(_QWORD *)(v277 + v278 + 8) = 9LL;
  *(_QWORD *)(v277 + v278 + 16) = anon_2fc61395128ff650a82ff2a09ac6a647_0_llvm_11692075339398190683;
  *(_QWORD *)(v277 + v278 + 24) = 1LL;
  *(_QWORD *)(v277 + v278 + 32) = anon_2fc61395128ff650a82ff2a09ac6a647_2_llvm_11692075339398190683;
  *(_QWORD *)(v277 + v278 + 40) = 8LL;
  *(_QWORD *)(v277 + v278 + 48) = anon_e31c85536e11aee39654ff72a53ef708_37_llvm_4239552918814193354;
  *(_QWORD *)(v277 + v278 + 56) = 15LL;
  *(_QWORD *)&src[9] = v276 + 4;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_2fc61395128ff650a82ff2a09ac6a647_0_llvm_11692075339398190683;
  *((_QWORD *)&v303[33] + 1) = 1LL;
  *(_QWORD *)&v303[34] = 0LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000000070LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 34LL);
  v279 = *((_QWORD *)&src[0] + 1);
  v280 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = xmmword_2F0D6;
  *(_OWORD *)(v279 + v280) = xmmword_2F0C6;
  *(_WORD *)(v279 + v280 + 32) = 11891;
  *(_QWORD *)&src[1] = v280 + 34;
  v281 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v281;
  v303[28] = src[0];
  memcpy(src, v303, sizeof(src));
  v282 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 3uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 4LL);
    v282 = *(_QWORD *)&src[9];
  }
  v283 = *((_QWORD *)&src[8] + 1);
  v284 = 16 * v282;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v284) = anon_2fc61395128ff650a82ff2a09ac6a647_1_llvm_11692075339398190683;
  *(_QWORD *)(v283 + v284 + 8) = 9LL;
  *(_QWORD *)(v283 + v284 + 16) = anon_2fc61395128ff650a82ff2a09ac6a647_0_llvm_11692075339398190683;
  *(_QWORD *)(v283 + v284 + 24) = 1LL;
  *(_QWORD *)(v283 + v284 + 32) = anon_2fc61395128ff650a82ff2a09ac6a647_2_llvm_11692075339398190683;
  *(_QWORD *)(v283 + v284 + 40) = 8LL;
  *(_QWORD *)(v283 + v284 + 48) = anon_e31c85536e11aee39654ff72a53ef708_37_llvm_4239552918814193354;
  *(_QWORD *)(v283 + v284 + 56) = 15LL;
  *(_QWORD *)&src[9] = v282 + 4;
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[22] = 8uLL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = &anon_e31c85536e11aee39654ff72a53ef708_38_llvm_4239552918814193354;
  *((_QWORD *)&src[33] + 1) = 10LL;
  *(_QWORD *)&src[34] = &anon_e31c85536e11aee39654ff72a53ef708_38_llvm_4239552918814193354;
  *((_QWORD *)&src[34] + 1) = 10LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 46LL);
  v285 = *((_QWORD *)&dest[0] + 1);
  v286 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 30LL) = *(__int128 *)((char *)&xmmword_2F0F8 + 14);
  qmemcpy((void *)(v285 + v286), "time/date format with -l; see TI", 32);
  *(_QWORD *)&dest[1] = v286 + 46;
  v287 = *(_QWORD *)&dest[0];
  v312[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v312[0];
  *((_QWORD *)&src[27] + 1) = v287;
  src[28] = dest[0];
  memcpy(dest, src, 0x168uLL);
  memcpy(&dest[23], &src[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&src[22] + 1);
  *(_QWORD *)&v312[0] = aTimeStyle;
  *((_QWORD *)&v312[0] + 1) = 10LL;
  *(_QWORD *)&v312[1] = 0LL;
  *((_QWORD *)&v312[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v312);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&dest[21] + 8) = src[0];
  memcpy(src, dest, sizeof(src));
  std::env::_var_os(v312, aTimeStyle, 10LL);
  if ( *((__int64 *)&src[31] + 1) >= (__int64)0x8000000000000002LL && *((_QWORD *)&src[31] + 1) )
    _rust_dealloc(*(_QWORD *)&src[32], *((_QWORD *)&src[31] + 1), 1LL);
  *((_QWORD *)&src[30] + 1) = aTimeStyle;
  *(_QWORD *)&src[31] = 10LL;
  *((_QWORD *)&src[32] + 1) = *(_QWORD *)&v312[1];
  *(_OWORD *)((char *)&src[31] + 8) = v312[0];
  memcpy(dest, src, 0x250uLL);
  clap_builder::builder::arg::Arg::value_parser(src, dest);
  v288 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] == *(_QWORD *)&src[9] )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 1LL);
    v288 = *(_QWORD *)&src[9];
  }
  v289 = *((_QWORD *)&src[8] + 1);
  v290 = 16 * v288;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v290) = &anon_e31c85536e11aee39654ff72a53ef708_38_llvm_4239552918814193354;
  *(_QWORD *)(v289 + v290 + 8) = 10LL;
  *(_QWORD *)&src[9] = v288 + 1;
  memcpy(v312, src, sizeof(v312));
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = &anon_e31c85536e11aee39654ff72a53ef708_39_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 9LL;
  *(_QWORD *)&v303[34] = &anon_e31c85536e11aee39654ff72a53ef708_39_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 9LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000110000LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v303[8]);
  v291 = *((_QWORD *)&v303[8] + 1);
  **((_QWORD **)&v303[8] + 1) = &anon_e31c85536e11aee39654ff72a53ef708_39_llvm_4239552918814193354;
  *(_QWORD *)(v291 + 8) = 9LL;
  *(_QWORD *)&v303[9] = 1LL;
  memcpy(src, v303, sizeof(src));
  *(_QWORD *)&v303[0] = 0LL;
  *((_QWORD *)&v303[0] + 1) = 1LL;
  *(_QWORD *)&v303[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v303, 0LL, 29LL);
  v292 = *((_QWORD *)&v303[0] + 1);
  v293 = *(_QWORD *)&v303[1];
  *(_OWORD *)(*((_QWORD *)&v303[0] + 1) + *(_QWORD *)&v303[1] + 13LL) = *(__int128 *)((char *)&xmmword_2F120 + 13);
  *(_OWORD *)(v292 + v293) = xmmword_2F120;
  *(_QWORD *)&v303[1] = v293 + 29;
  v294 = *(_QWORD *)&v303[0];
  v312[0] = *(_OWORD *)((char *)v303 + 8);
  if ( *(_QWORD *)&v303[0] != 0x8000000000000000LL )
    v303[0] = v312[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v294;
  src[28] = v303[0];
  memcpy(v312, src, 0x24CuLL);
  *(_WORD *)((char *)&v312[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v312[36]) = HIBYTE(src[36]);
  BYTE12(v312[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_42_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 7LL;
  *(_QWORD *)&dest[34] = anon_e31c85536e11aee39654ff72a53ef708_42_llvm_4239552918814193354;
  *((_QWORD *)&dest[34] + 1) = 7LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x1100000000005ALL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 53LL);
  v295 = *((_QWORD *)&src[0] + 1);
  v296 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_2DA1C;
  qmemcpy((void *)(v295 + v296), "print any security context of ea", 32);
  *(_QWORD *)(v295 + v296 + 45) = 0x2964656C62616E65LL;
  *(_QWORD *)&src[1] = v296 + 53;
  v297 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&dest[27] + 1) = v297;
  dest[28] = src[0];
  memcpy(src, dest, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(src[36]) = HIBYTE(dest[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v303);
  v303[7] = 8uLL;
  v303[9] = 0LL;
  v303[10] = 8uLL;
  v303[12] = 0LL;
  v303[13] = 8uLL;
  v303[15] = 0LL;
  v303[16] = 8uLL;
  v303[18] = 0LL;
  v303[19] = 8uLL;
  v303[21] = 0LL;
  v303[22] = 8uLL;
  v303[24] = 0LL;
  v303[25] = 8uLL;
  *(_QWORD *)&v303[0] = 0LL;
  *(_QWORD *)&v303[1] = 0LL;
  *((_QWORD *)&v303[2] + 1) = 0LL;
  *((_QWORD *)&v303[3] + 1) = 0LL;
  *(_QWORD *)&v303[5] = 5LL;
  *((_QWORD *)&v303[6] + 1) = 0LL;
  *((_QWORD *)&v303[8] + 1) = 8LL;
  *((_QWORD *)&v303[11] + 1) = 8LL;
  *((_QWORD *)&v303[14] + 1) = 8LL;
  *((_QWORD *)&v303[17] + 1) = 8LL;
  *((_QWORD *)&v303[20] + 1) = 4LL;
  *((_QWORD *)&v303[23] + 1) = 8LL;
  *((_QWORD *)&v303[26] + 1) = 8LL;
  *(_QWORD *)&v303[27] = 0LL;
  *((_QWORD *)&v303[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v303[29] = 0x8000000000000000LL;
  *((_QWORD *)&v303[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v303[33] = anon_e31c85536e11aee39654ff72a53ef708_43_llvm_4239552918814193354;
  *((_QWORD *)&v303[33] + 1) = 23LL;
  *(_QWORD *)&v303[34] = anon_e31c85536e11aee39654ff72a53ef708_43_llvm_4239552918814193354;
  *((_QWORD *)&v303[34] + 1) = 23LL;
  *(_QWORD *)&v303[35] = 0LL;
  *(_QWORD *)&v303[36] = 0x11000000110000LL;
  DWORD2(v303[36]) = 0;
  WORD6(v303[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 120LL);
  v298 = *((_QWORD *)&src[0] + 1);
  v299 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 96LL) = xmmword_2F19D;
  qmemcpy(
    (void *)(v298 + v299),
    "group directories before files; can be augmented with a --sort option, but any use of --sort=non",
    96);
  *(_QWORD *)(v298 + v299 + 112) = 0x676E6970756F7267LL;
  *(_QWORD *)&src[1] = v299 + 120;
  v300 = *(_QWORD *)&src[0];
  v312[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v312[0];
  *((_QWORD *)&v303[27] + 1) = v300;
  v303[28] = src[0];
  memcpy(src, v303, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v303[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v303[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(v303, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_e31c85536e11aee39654ff72a53ef708_36_llvm_4239552918814193354;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 513;
  *(_QWORD *)&v312[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(src, dest);
  clap_builder::builder::command::Command::arg(dest, v303);
  v301 = v323;
  clap_builder::builder::command::Command::after_help(v323, dest, aTheTimeStyleAr, 182LL);
  return v301;
}
