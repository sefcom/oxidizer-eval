void *__fastcall uu_ls::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // ebp
  int v6; // r14d
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // r14
  __int64 v36; // r14
  __int64 v37; // r14
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // r15
  __int64 v46; // r15
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // r15
  __int64 v56; // r15
  __int64 v57; // r15
  __int64 v58; // r14
  __int64 v59; // r14
  __int64 v60; // r14
  __int64 v61; // rbx
  __int64 v62; // r15
  __int64 v63; // r15
  __int64 v64; // r15
  __int64 v65; // r15
  __int64 v66; // r15
  __int64 v67; // r14
  __int64 v68; // r15
  __int64 v69; // r15
  __int64 v70; // rbx
  __int64 v71; // rbx
  __int64 v72; // r15
  __int64 v73; // rbx
  __int64 v74; // rbx
  __int64 v75; // r14
  __int64 v76; // r15
  __int64 v77; // r15
  __int64 v78; // r15
  __int64 v79; // rbx
  __int64 v80; // rbx
  __int64 v81; // rbx
  __int64 v82; // rbx
  __int64 v83; // rbx
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rbx
  __int64 v93; // rbx
  __int64 v94; // r14
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // r14
  __int64 v102; // r14
  __int64 v103; // r14
  __int64 v104; // r14
  __int64 v105; // r14
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rbx
  __int64 v109; // rbx
  __int64 v110; // rbx
  void *v111; // rbx
  __int128 v113; // [rsp-1B000h] [rbp-1C408h] BYREF
  __int64 v114; // [rsp-1AFF0h] [rbp-1C3F8h]
  _OWORD v115[37]; // [rsp-1AFE0h] [rbp-1C3E8h] BYREF
  _OWORD v116[37]; // [rsp-1AD90h] [rbp-1C198h] BYREF
  __int128 v117; // [rsp-1AB40h] [rbp-1BF48h] BYREF
  __int64 v118; // [rsp-1AB30h] [rbp-1BF38h]
  unsigned __int64 v119; // [rsp-1AB28h] [rbp-1BF30h]
  __int128 v120; // [rsp-1AB20h] [rbp-1BF28h]
  __int128 v121; // [rsp-1AB10h] [rbp-1BF18h]
  __int64 v122; // [rsp-1AB00h] [rbp-1BF08h]
  __int128 v123; // [rsp-1AAF0h] [rbp-1BEF8h] BYREF
  __int64 v124; // [rsp-1AAE0h] [rbp-1BEE8h]
  unsigned __int64 v125; // [rsp-1AAD8h] [rbp-1BEE0h]
  __int128 v126; // [rsp-1AAD0h] [rbp-1BED8h]
  __int128 v127; // [rsp-1AAC0h] [rbp-1BEC8h]
  __int64 v128; // [rsp-1AAB0h] [rbp-1BEB8h]
  __int128 v129; // [rsp-1AAA0h] [rbp-1BEA8h] BYREF
  __int64 v130; // [rsp-1AA90h] [rbp-1BE98h]
  unsigned __int64 v131; // [rsp-1AA88h] [rbp-1BE90h]
  __int128 v132; // [rsp-1AA80h] [rbp-1BE88h]
  __int128 v133; // [rsp-1AA70h] [rbp-1BE78h]
  __int64 v134; // [rsp-1AA60h] [rbp-1BE68h]
  __int128 v135; // [rsp-1AA50h] [rbp-1BE58h] BYREF
  __int64 v136; // [rsp-1AA40h] [rbp-1BE48h]
  unsigned __int64 v137; // [rsp-1AA38h] [rbp-1BE40h]
  __int128 v138; // [rsp-1AA30h] [rbp-1BE38h]
  __int128 v139; // [rsp-1AA20h] [rbp-1BE28h]
  __int64 v140; // [rsp-1AA10h] [rbp-1BE18h]
  __int128 v141; // [rsp-1AA00h] [rbp-1BE08h] BYREF
  __int64 v142; // [rsp-1A9F0h] [rbp-1BDF8h]
  unsigned __int64 v143; // [rsp-1A9E8h] [rbp-1BDF0h]
  __int128 v144; // [rsp-1A9E0h] [rbp-1BDE8h]
  __int128 v145; // [rsp-1A9D0h] [rbp-1BDD8h]
  __int64 v146; // [rsp-1A9C0h] [rbp-1BDC8h]
  __int128 v147; // [rsp-1A9B0h] [rbp-1BDB8h] BYREF
  __int64 v148; // [rsp-1A9A0h] [rbp-1BDA8h]
  unsigned __int64 v149; // [rsp-1A998h] [rbp-1BDA0h]
  __int128 v150; // [rsp-1A990h] [rbp-1BD98h]
  __int128 v151; // [rsp-1A980h] [rbp-1BD88h]
  __int64 v152; // [rsp-1A970h] [rbp-1BD78h]
  __int128 v153; // [rsp-1A960h] [rbp-1BD68h] BYREF
  __int64 v154; // [rsp-1A950h] [rbp-1BD58h]
  unsigned __int64 v155; // [rsp-1A948h] [rbp-1BD50h]
  __int128 v156; // [rsp-1A940h] [rbp-1BD48h]
  __int128 v157; // [rsp-1A930h] [rbp-1BD38h]
  __int64 v158; // [rsp-1A920h] [rbp-1BD28h]
  __int128 v159; // [rsp-1A910h] [rbp-1BD18h] BYREF
  __int64 v160; // [rsp-1A900h] [rbp-1BD08h]
  unsigned __int64 v161; // [rsp-1A8F8h] [rbp-1BD00h]
  __int128 v162; // [rsp-1A8F0h] [rbp-1BCF8h]
  __int128 v163; // [rsp-1A8E0h] [rbp-1BCE8h]
  __int64 v164; // [rsp-1A8D0h] [rbp-1BCD8h]
  __int128 v165; // [rsp-1A8C0h] [rbp-1BCC8h] BYREF
  __int64 v166; // [rsp-1A8B0h] [rbp-1BCB8h]
  unsigned __int64 v167; // [rsp-1A8A8h] [rbp-1BCB0h]
  __int128 v168; // [rsp-1A8A0h] [rbp-1BCA8h]
  __int128 v169; // [rsp-1A890h] [rbp-1BC98h]
  __int64 v170; // [rsp-1A880h] [rbp-1BC88h]
  __int128 v171; // [rsp-1A870h] [rbp-1BC78h] BYREF
  __int64 v172; // [rsp-1A860h] [rbp-1BC68h]
  unsigned __int64 v173; // [rsp-1A858h] [rbp-1BC60h]
  __int128 v174; // [rsp-1A850h] [rbp-1BC58h]
  __int128 v175; // [rsp-1A840h] [rbp-1BC48h]
  __int64 v176; // [rsp-1A830h] [rbp-1BC38h]
  __int64 v177; // [rsp-1A820h] [rbp-1BC28h]
  void *v178; // [rsp-1A818h] [rbp-1BC20h]
  __int128 v179; // [rsp-1A810h] [rbp-1BC18h] BYREF
  __int64 v180; // [rsp-1A800h] [rbp-1BC08h]
  unsigned __int64 v181; // [rsp-1A7F8h] [rbp-1BC00h]
  __int128 v182; // [rsp-1A7F0h] [rbp-1BBF8h]
  __int128 v183; // [rsp-1A7E0h] [rbp-1BBE8h]
  __int64 v184; // [rsp-1A7D0h] [rbp-1BBD8h]
  __int128 v185; // [rsp-1A7C8h] [rbp-1BBD0h] BYREF
  __int64 v186; // [rsp-1A7B8h] [rbp-1BBC0h]
  unsigned __int64 v187; // [rsp-1A7B0h] [rbp-1BBB8h]
  __int128 v188; // [rsp-1A7A8h] [rbp-1BBB0h]
  __int128 v189; // [rsp-1A798h] [rbp-1BBA0h]
  __int64 v190; // [rsp-1A788h] [rbp-1BB90h]
  __int128 v191; // [rsp-1A780h] [rbp-1BB88h] BYREF
  __int64 v192; // [rsp-1A770h] [rbp-1BB78h]
  unsigned __int64 v193; // [rsp-1A768h] [rbp-1BB70h]
  __int128 v194; // [rsp-1A760h] [rbp-1BB68h]
  __int128 v195; // [rsp-1A750h] [rbp-1BB58h]
  __int64 v196; // [rsp-1A740h] [rbp-1BB48h]
  __int128 v197; // [rsp-1A738h] [rbp-1BB40h] BYREF
  __int64 v198; // [rsp-1A728h] [rbp-1BB30h]
  unsigned __int64 v199; // [rsp-1A720h] [rbp-1BB28h]
  __int128 v200; // [rsp-1A718h] [rbp-1BB20h]
  __int128 v201; // [rsp-1A708h] [rbp-1BB10h]
  __int64 v202; // [rsp-1A6F8h] [rbp-1BB00h]
  __int128 v203; // [rsp-1A6F0h] [rbp-1BAF8h] BYREF
  __int64 v204; // [rsp-1A6E0h] [rbp-1BAE8h]
  unsigned __int64 v205; // [rsp-1A6D8h] [rbp-1BAE0h]
  __int128 v206; // [rsp-1A6D0h] [rbp-1BAD8h]
  __int128 v207; // [rsp-1A6C0h] [rbp-1BAC8h]
  __int64 v208; // [rsp-1A6B0h] [rbp-1BAB8h]
  __int128 v209; // [rsp-1A6A8h] [rbp-1BAB0h] BYREF
  __int64 v210; // [rsp-1A698h] [rbp-1BAA0h]
  unsigned __int64 v211; // [rsp-1A690h] [rbp-1BA98h]
  __int128 v212; // [rsp-1A688h] [rbp-1BA90h]
  __int128 v213; // [rsp-1A678h] [rbp-1BA80h]
  __int64 v214; // [rsp-1A668h] [rbp-1BA70h]
  __int128 v215; // [rsp-1A660h] [rbp-1BA68h] BYREF
  __int64 v216; // [rsp-1A650h] [rbp-1BA58h]
  unsigned __int64 v217; // [rsp-1A648h] [rbp-1BA50h]
  __int128 v218; // [rsp-1A640h] [rbp-1BA48h]
  __int128 v219; // [rsp-1A630h] [rbp-1BA38h]
  __int64 v220; // [rsp-1A620h] [rbp-1BA28h]
  __int128 v221; // [rsp-1A618h] [rbp-1BA20h] BYREF
  __int64 v222; // [rsp-1A608h] [rbp-1BA10h]
  unsigned __int64 v223; // [rsp-1A600h] [rbp-1BA08h]
  __int128 v224; // [rsp-1A5F8h] [rbp-1BA00h]
  __int128 v225; // [rsp-1A5E8h] [rbp-1B9F0h]
  __int64 v226; // [rsp-1A5D8h] [rbp-1B9E0h]
  __int128 v227; // [rsp-1A5D0h] [rbp-1B9D8h] BYREF
  __int64 v228; // [rsp-1A5C0h] [rbp-1B9C8h]
  unsigned __int64 v229; // [rsp-1A5B8h] [rbp-1B9C0h]
  __int128 v230; // [rsp-1A5B0h] [rbp-1B9B8h]
  __int128 v231; // [rsp-1A5A0h] [rbp-1B9A8h]
  __int64 v232; // [rsp-1A590h] [rbp-1B998h]
  __int128 v233; // [rsp-1A588h] [rbp-1B990h] BYREF
  __int64 v234; // [rsp-1A578h] [rbp-1B980h]
  unsigned __int64 v235; // [rsp-1A570h] [rbp-1B978h]
  __int128 v236; // [rsp-1A568h] [rbp-1B970h]
  __int128 v237; // [rsp-1A558h] [rbp-1B960h]
  __int64 v238; // [rsp-1A548h] [rbp-1B950h]
  __int128 v239; // [rsp-1A540h] [rbp-1B948h] BYREF
  __int64 v240; // [rsp-1A530h] [rbp-1B938h]
  unsigned __int64 v241; // [rsp-1A528h] [rbp-1B930h]
  __int128 v242; // [rsp-1A520h] [rbp-1B928h]
  __int128 v243; // [rsp-1A510h] [rbp-1B918h]
  __int64 v244; // [rsp-1A500h] [rbp-1B908h]
  __int128 v245; // [rsp-1A4F8h] [rbp-1B900h] BYREF
  __int64 v246; // [rsp-1A4E8h] [rbp-1B8F0h]
  unsigned __int64 v247; // [rsp-1A4E0h] [rbp-1B8E8h]
  __int128 v248; // [rsp-1A4D8h] [rbp-1B8E0h]
  __int128 v249; // [rsp-1A4C8h] [rbp-1B8D0h]
  __int64 v250; // [rsp-1A4B8h] [rbp-1B8C0h]
  __int128 v251; // [rsp-1A4B0h] [rbp-1B8B8h] BYREF
  __int64 v252; // [rsp-1A4A0h] [rbp-1B8A8h]
  unsigned __int64 v253; // [rsp-1A498h] [rbp-1B8A0h]
  __int128 v254; // [rsp-1A490h] [rbp-1B898h]
  __int128 v255; // [rsp-1A480h] [rbp-1B888h]
  __int64 v256; // [rsp-1A470h] [rbp-1B878h]
  __int128 v257; // [rsp-1A468h] [rbp-1B870h]
  __int128 v258; // [rsp-1A458h] [rbp-1B860h]
  __int128 v259; // [rsp-1A448h] [rbp-1B850h]
  __int128 v260; // [rsp-1A438h] [rbp-1B840h]
  __int64 v261; // [rsp-1A428h] [rbp-1B830h]
  __int128 v262; // [rsp-1A420h] [rbp-1B828h]
  __int128 v263; // [rsp-1A410h] [rbp-1B818h]
  __int128 v264; // [rsp-1A400h] [rbp-1B808h]
  __int128 v265; // [rsp-1A3F0h] [rbp-1B7F8h]
  __int64 v266; // [rsp-1A3E0h] [rbp-1B7E8h]
  __int128 v267; // [rsp-1A3D8h] [rbp-1B7E0h]
  __int128 v268; // [rsp-1A3C8h] [rbp-1B7D0h]
  __int128 v269; // [rsp-1A3B8h] [rbp-1B7C0h]
  __int128 v270; // [rsp-1A3A8h] [rbp-1B7B0h]
  __int64 v271; // [rsp-1A398h] [rbp-1B7A0h]
  __int128 v272; // [rsp-1A390h] [rbp-1B798h]
  __int128 v273; // [rsp-1A380h] [rbp-1B788h]
  __int128 v274; // [rsp-1A370h] [rbp-1B778h]
  __int128 v275; // [rsp-1A360h] [rbp-1B768h]
  __int64 v276; // [rsp-1A350h] [rbp-1B758h]
  __int128 v277; // [rsp-1A348h] [rbp-1B750h]
  __int128 v278; // [rsp-1A338h] [rbp-1B740h]
  __int128 v279; // [rsp-1A328h] [rbp-1B730h]
  __int128 v280; // [rsp-1A318h] [rbp-1B720h]
  __int64 v281; // [rsp-1A308h] [rbp-1B710h]
  __int128 v282; // [rsp-1A300h] [rbp-1B708h]
  unsigned __int128 v283; // [rsp-1A2F0h] [rbp-1B6F8h]
  __int128 v284; // [rsp-1A2E0h] [rbp-1B6E8h]
  __int128 v285; // [rsp-1A2D0h] [rbp-1B6D8h]
  __int64 v286; // [rsp-1A2C0h] [rbp-1B6C8h]
  __int128 v287; // [rsp-1A2B0h] [rbp-1B6B8h]
  unsigned __int128 v288; // [rsp-1A2A0h] [rbp-1B6A8h]
  __int128 v289; // [rsp-1A290h] [rbp-1B698h]
  __int128 v290; // [rsp-1A280h] [rbp-1B688h]
  __int64 v291; // [rsp-1A270h] [rbp-1B678h]
  __int128 v292; // [rsp-1A260h] [rbp-1B668h]
  unsigned __int128 v293; // [rsp-1A250h] [rbp-1B658h]
  __int128 v294; // [rsp-1A240h] [rbp-1B648h]
  __int128 v295; // [rsp-1A230h] [rbp-1B638h]
  __int64 v296; // [rsp-1A220h] [rbp-1B628h]
  __int128 v297; // [rsp-1A210h] [rbp-1B618h]
  unsigned __int128 v298; // [rsp-1A200h] [rbp-1B608h]
  __int128 v299; // [rsp-1A1F0h] [rbp-1B5F8h]
  __int128 v300; // [rsp-1A1E0h] [rbp-1B5E8h]
  __int64 v301; // [rsp-1A1D0h] [rbp-1B5D8h]
  __int128 v302; // [rsp-1A1C0h] [rbp-1B5C8h]
  unsigned __int128 v303; // [rsp-1A1B0h] [rbp-1B5B8h]
  __int128 v304; // [rsp-1A1A0h] [rbp-1B5A8h]
  __int128 v305; // [rsp-1A190h] [rbp-1B598h]
  __int64 v306; // [rsp-1A180h] [rbp-1B588h]
  __int128 v307; // [rsp-1A170h] [rbp-1B578h]
  unsigned __int128 v308; // [rsp-1A160h] [rbp-1B568h]
  __int128 v309; // [rsp-1A150h] [rbp-1B558h]
  __int128 v310; // [rsp-1A140h] [rbp-1B548h]
  __int64 v311; // [rsp-1A130h] [rbp-1B538h]
  __int128 v312; // [rsp-1A120h] [rbp-1B528h]
  unsigned __int128 v313; // [rsp-1A110h] [rbp-1B518h]
  __int128 v314; // [rsp-1A100h] [rbp-1B508h]
  __int128 v315; // [rsp-1A0F0h] [rbp-1B4F8h]
  __int64 v316; // [rsp-1A0E0h] [rbp-1B4E8h]
  __int128 v317; // [rsp-1A0D0h] [rbp-1B4D8h]
  unsigned __int128 v318; // [rsp-1A0C0h] [rbp-1B4C8h]
  __int128 v319; // [rsp-1A0B0h] [rbp-1B4B8h]
  __int128 v320; // [rsp-1A0A0h] [rbp-1B4A8h]
  __int64 v321; // [rsp-1A090h] [rbp-1B498h]
  __int128 v322; // [rsp-1A080h] [rbp-1B488h] BYREF
  __int64 v323; // [rsp-1A070h] [rbp-1B478h]
  __int128 v324; // [rsp-1A060h] [rbp-1B468h] BYREF
  __int64 v325; // [rsp-1A050h] [rbp-1B458h]
  __int128 v326; // [rsp-1A040h] [rbp-1B448h] BYREF
  __int64 v327; // [rsp-1A030h] [rbp-1B438h]
  __int128 v328; // [rsp-1A020h] [rbp-1B428h] BYREF
  __int64 v329; // [rsp-1A010h] [rbp-1B418h]
  __int128 v330; // [rsp-1A000h] [rbp-1B408h] BYREF
  __int64 v331; // [rsp-19FF0h] [rbp-1B3F8h]
  __int128 v332; // [rsp-19FE0h] [rbp-1B3E8h] BYREF
  __int64 v333; // [rsp-19FD0h] [rbp-1B3D8h]
  __int128 v334; // [rsp-19FC0h] [rbp-1B3C8h] BYREF
  __int64 v335; // [rsp-19FB0h] [rbp-1B3B8h]
  __int128 v336; // [rsp-19FA0h] [rbp-1B3A8h] BYREF
  __int64 v337; // [rsp-19F90h] [rbp-1B398h]
  __int64 v338; // [rsp-19F88h] [rbp-1B390h] BYREF
  __int128 v339; // [rsp-19F80h] [rbp-1B388h]
  _OWORD v340[14]; // [rsp-19F70h] [rbp-1B378h] BYREF
  _OWORD v341[14]; // [rsp-19E90h] [rbp-1B298h] BYREF
  _OWORD v342[14]; // [rsp-19DB0h] [rbp-1B1B8h] BYREF
  _OWORD v343[14]; // [rsp-19CD0h] [rbp-1B0D8h] BYREF
  _OWORD v344[27]; // [rsp-19BF0h] [rbp-1AFF8h] BYREF
  _BYTE v345[588]; // [rsp-19A40h] [rbp-1AE48h] BYREF
  int v346; // [rsp-197F4h] [rbp-1ABFCh]
  _BYTE v347[588]; // [rsp-197F0h] [rbp-1ABF8h] BYREF
  int v348; // [rsp-195A4h] [rbp-1A9ACh]
  _BYTE v349[588]; // [rsp-195A0h] [rbp-1A9A8h] BYREF
  int v350; // [rsp-19354h] [rbp-1A75Ch]
  _BYTE v351[588]; // [rsp-19350h] [rbp-1A758h] BYREF
  int v352; // [rsp-19104h] [rbp-1A50Ch]
  _BYTE v353[588]; // [rsp-19100h] [rbp-1A508h] BYREF
  int v354; // [rsp-18EB4h] [rbp-1A2BCh]
  _BYTE v355[588]; // [rsp-18EB0h] [rbp-1A2B8h] BYREF
  int v356; // [rsp-18C64h] [rbp-1A06Ch]
  _BYTE v357[588]; // [rsp-18C60h] [rbp-1A068h] BYREF
  int v358; // [rsp-18A14h] [rbp-19E1Ch]
  _BYTE v359[588]; // [rsp-18A10h] [rbp-19E18h] BYREF
  int v360; // [rsp-187C4h] [rbp-19BCCh]
  _BYTE v361[588]; // [rsp-187C0h] [rbp-19BC8h] BYREF
  int v362; // [rsp-18574h] [rbp-1997Ch]
  _BYTE v363[588]; // [rsp-18570h] [rbp-19978h] BYREF
  int v364; // [rsp-18324h] [rbp-1972Ch]
  _BYTE v365[588]; // [rsp-18320h] [rbp-19728h] BYREF
  int v366; // [rsp-180D4h] [rbp-194DCh]
  _BYTE v367[592]; // [rsp-180D0h] [rbp-194D8h] BYREF
  _OWORD v368[37]; // [rsp-17E80h] [rbp-19288h] BYREF
  _OWORD v369[37]; // [rsp-17C30h] [rbp-19038h] BYREF
  _OWORD v370[37]; // [rsp-179E0h] [rbp-18DE8h] BYREF
  _OWORD v371[37]; // [rsp-17790h] [rbp-18B98h] BYREF
  _OWORD v372[37]; // [rsp-17540h] [rbp-18948h] BYREF
  _OWORD v373[37]; // [rsp-172F0h] [rbp-186F8h] BYREF
  _OWORD v374[37]; // [rsp-170A0h] [rbp-184A8h] BYREF
  _BYTE v375[592]; // [rsp-16E50h] [rbp-18258h] BYREF
  _OWORD v376[37]; // [rsp-16C00h] [rbp-18008h] BYREF
  _OWORD v377[37]; // [rsp-169B0h] [rbp-17DB8h] BYREF
  _OWORD v378[37]; // [rsp-16760h] [rbp-17B68h] BYREF
  _BYTE v379[592]; // [rsp-16510h] [rbp-17918h] BYREF
  _BYTE v380[588]; // [rsp-162C0h] [rbp-176C8h] BYREF
  int v381; // [rsp-16074h] [rbp-1747Ch]
  _BYTE v382[588]; // [rsp-16070h] [rbp-17478h] BYREF
  int v383; // [rsp-15E24h] [rbp-1722Ch]
  _BYTE v384[588]; // [rsp-15E20h] [rbp-17228h] BYREF
  int v385; // [rsp-15BD4h] [rbp-16FDCh]
  _OWORD v386[37]; // [rsp-15BD0h] [rbp-16FD8h] BYREF
  _OWORD v387[37]; // [rsp-15980h] [rbp-16D88h] BYREF
  _OWORD v388[37]; // [rsp-15730h] [rbp-16B38h] BYREF
  _OWORD v389[37]; // [rsp-154E0h] [rbp-168E8h] BYREF
  _OWORD v390[37]; // [rsp-15290h] [rbp-16698h] BYREF
  _OWORD v391[37]; // [rsp-15040h] [rbp-16448h] BYREF
  _OWORD v392[37]; // [rsp-14DF0h] [rbp-161F8h] BYREF
  _OWORD v393[37]; // [rsp-14BA0h] [rbp-15FA8h] BYREF
  _OWORD v394[37]; // [rsp-14950h] [rbp-15D58h] BYREF
  _OWORD v395[37]; // [rsp-14700h] [rbp-15B08h] BYREF
  _OWORD v396[37]; // [rsp-144B0h] [rbp-158B8h] BYREF
  _OWORD v397[37]; // [rsp-14260h] [rbp-15668h] BYREF
  _OWORD v398[37]; // [rsp-14010h] [rbp-15418h] BYREF
  _OWORD v399[37]; // [rsp-13DC0h] [rbp-151C8h] BYREF
  _OWORD v400[37]; // [rsp-13B70h] [rbp-14F78h] BYREF
  _OWORD v401[37]; // [rsp-13920h] [rbp-14D28h] BYREF
  _OWORD v402[37]; // [rsp-136D0h] [rbp-14AD8h] BYREF
  _OWORD v403[37]; // [rsp-13480h] [rbp-14888h] BYREF
  _OWORD v404[37]; // [rsp-13230h] [rbp-14638h] BYREF
  _OWORD v405[37]; // [rsp-12FE0h] [rbp-143E8h] BYREF
  _OWORD v406[37]; // [rsp-12D90h] [rbp-14198h] BYREF
  _OWORD v407[37]; // [rsp-12B40h] [rbp-13F48h] BYREF
  _OWORD v408[37]; // [rsp-128F0h] [rbp-13CF8h] BYREF
  _OWORD v409[37]; // [rsp-126A0h] [rbp-13AA8h] BYREF
  _OWORD v410[37]; // [rsp-12450h] [rbp-13858h] BYREF
  _OWORD v411[37]; // [rsp-12200h] [rbp-13608h] BYREF
  _OWORD v412[37]; // [rsp-11FB0h] [rbp-133B8h] BYREF
  _OWORD v413[37]; // [rsp-11D60h] [rbp-13168h] BYREF
  _QWORD v414[74]; // [rsp-11B10h] [rbp-12F18h] BYREF
  _OWORD v415[37]; // [rsp-118C0h] [rbp-12CC8h] BYREF
  _QWORD v416[74]; // [rsp-11670h] [rbp-12A78h] BYREF
  _QWORD v417[73]; // [rsp-11420h] [rbp-12828h] BYREF
  int v418; // [rsp-111D8h] [rbp-125E0h]
  int v419; // [rsp-111D4h] [rbp-125DCh]
  _QWORD v420[73]; // [rsp-111D0h] [rbp-125D8h] BYREF
  int v421; // [rsp-10F88h] [rbp-12390h]
  int v422; // [rsp-10F84h] [rbp-1238Ch]
  _OWORD v423[37]; // [rsp-10F80h] [rbp-12388h] BYREF
  _OWORD v424[37]; // [rsp-10D30h] [rbp-12138h] BYREF
  _OWORD v425[37]; // [rsp-10AE0h] [rbp-11EE8h] BYREF
  _OWORD v426[37]; // [rsp-10890h] [rbp-11C98h] BYREF
  _OWORD v427[37]; // [rsp-10638h] [rbp-11A40h] BYREF
  _OWORD v428[37]; // [rsp-103E8h] [rbp-117F0h] BYREF
  _OWORD v429[37]; // [rsp-10198h] [rbp-115A0h] BYREF
  _QWORD v430[74]; // [rsp-FF48h] [rbp-11350h] BYREF
  _OWORD v431[37]; // [rsp-FCF8h] [rbp-11100h] BYREF
  _OWORD v432[37]; // [rsp-FAA8h] [rbp-10EB0h] BYREF
  _OWORD v433[37]; // [rsp-F858h] [rbp-10C60h] BYREF
  _OWORD v434[37]; // [rsp-F608h] [rbp-10A10h] BYREF
  _QWORD v435[74]; // [rsp-F3B8h] [rbp-107C0h] BYREF
  _QWORD v436[74]; // [rsp-F168h] [rbp-10570h] BYREF
  _QWORD v437[74]; // [rsp-EF18h] [rbp-10320h] BYREF
  _QWORD v438[74]; // [rsp-ECC8h] [rbp-100D0h] BYREF
  _QWORD v439[89]; // [rsp-EA78h] [rbp-FE80h] BYREF
  _QWORD v440[74]; // [rsp-E7B0h] [rbp-FBB8h] BYREF
  _DWORD v441[178]; // [rsp-E560h] [rbp-F968h] BYREF
  _QWORD v442[74]; // [rsp-E298h] [rbp-F6A0h] BYREF
  _BYTE v443[592]; // [rsp-E048h] [rbp-F450h] BYREF
  _BYTE v444[592]; // [rsp-DDF8h] [rbp-F200h] BYREF
  _BYTE v445[592]; // [rsp-DBA8h] [rbp-EFB0h] BYREF
  _BYTE v446[592]; // [rsp-D958h] [rbp-ED60h] BYREF
  _BYTE v447[592]; // [rsp-D708h] [rbp-EB10h] BYREF
  _BYTE v448[592]; // [rsp-D4B8h] [rbp-E8C0h] BYREF
  _BYTE v449[592]; // [rsp-D268h] [rbp-E670h] BYREF
  _BYTE v450[592]; // [rsp-D018h] [rbp-E420h] BYREF
  _BYTE v451[592]; // [rsp-CDC8h] [rbp-E1D0h] BYREF
  _DWORD v452[148]; // [rsp-CB78h] [rbp-DF80h] BYREF
  _BYTE v453[592]; // [rsp-C928h] [rbp-DD30h] BYREF
  _BYTE v454[592]; // [rsp-C6D8h] [rbp-DAE0h] BYREF
  _DWORD v455[148]; // [rsp-C488h] [rbp-D890h] BYREF
  _BYTE v456[592]; // [rsp-C238h] [rbp-D640h] BYREF
  _BYTE v457[592]; // [rsp-BFE8h] [rbp-D3F0h] BYREF
  _BYTE v458[592]; // [rsp-BD98h] [rbp-D1A0h] BYREF
  _BYTE v459[592]; // [rsp-BB48h] [rbp-CF50h] BYREF
  _BYTE v460[592]; // [rsp-B8F8h] [rbp-CD00h] BYREF
  _BYTE v461[592]; // [rsp-B6A8h] [rbp-CAB0h] BYREF
  _BYTE v462[592]; // [rsp-B458h] [rbp-C860h] BYREF
  _BYTE v463[592]; // [rsp-B208h] [rbp-C610h] BYREF
  _BYTE v464[592]; // [rsp-AFB8h] [rbp-C3C0h] BYREF
  _BYTE v465[592]; // [rsp-AD68h] [rbp-C170h] BYREF
  _BYTE v466[592]; // [rsp-AB18h] [rbp-BF20h] BYREF
  _BYTE v467[592]; // [rsp-A8C8h] [rbp-BCD0h] BYREF
  _BYTE v468[700]; // [rsp-A678h] [rbp-BA80h] BYREF
  int v469; // [rsp-A3BCh] [rbp-B7C4h]
  int v470; // [rsp-A3B8h] [rbp-B7C0h]
  int v471; // [rsp-A3B4h] [rbp-B7BCh]
  _BYTE v472[712]; // [rsp-A3B0h] [rbp-B7B8h] BYREF
  _BYTE v473[712]; // [rsp-A0E8h] [rbp-B4F0h] BYREF
  _BYTE v474[712]; // [rsp-9E20h] [rbp-B228h] BYREF
  _BYTE v475[712]; // [rsp-9B58h] [rbp-AF60h] BYREF
  _BYTE v476[712]; // [rsp-9890h] [rbp-AC98h] BYREF
  _BYTE v477[712]; // [rsp-95C8h] [rbp-A9D0h] BYREF
  _BYTE v478[712]; // [rsp-9300h] [rbp-A708h] BYREF
  _BYTE v479[712]; // [rsp-9038h] [rbp-A440h] BYREF
  _BYTE v480[712]; // [rsp-8D70h] [rbp-A178h] BYREF
  _BYTE v481[712]; // [rsp-8AA8h] [rbp-9EB0h] BYREF
  _BYTE v482[712]; // [rsp-87E0h] [rbp-9BE8h] BYREF
  _BYTE v483[712]; // [rsp-8518h] [rbp-9920h] BYREF
  _BYTE v484[712]; // [rsp-8250h] [rbp-9658h] BYREF
  _BYTE v485[712]; // [rsp-7F88h] [rbp-9390h] BYREF
  _BYTE v486[712]; // [rsp-7CC0h] [rbp-90C8h] BYREF
  _BYTE v487[712]; // [rsp-79F8h] [rbp-8E00h] BYREF
  _BYTE v488[712]; // [rsp-7730h] [rbp-8B38h] BYREF
  _BYTE v489[712]; // [rsp-7468h] [rbp-8870h] BYREF
  _BYTE v490[712]; // [rsp-71A0h] [rbp-85A8h] BYREF
  _BYTE v491[712]; // [rsp-6ED8h] [rbp-82E0h] BYREF
  _BYTE v492[712]; // [rsp-6C10h] [rbp-8018h] BYREF
  _BYTE v493[712]; // [rsp-6948h] [rbp-7D50h] BYREF
  _BYTE v494[712]; // [rsp-6680h] [rbp-7A88h] BYREF
  _BYTE v495[712]; // [rsp-63B8h] [rbp-77C0h] BYREF
  _BYTE v496[712]; // [rsp-60F0h] [rbp-74F8h] BYREF
  _BYTE v497[712]; // [rsp-5E28h] [rbp-7230h] BYREF
  _BYTE v498[712]; // [rsp-5B60h] [rbp-6F68h] BYREF
  _BYTE v499[712]; // [rsp-5898h] [rbp-6CA0h] BYREF
  _BYTE v500[712]; // [rsp-55D0h] [rbp-69D8h] BYREF
  _BYTE v501[712]; // [rsp-5308h] [rbp-6710h] BYREF
  _BYTE v502[712]; // [rsp-5040h] [rbp-6448h] BYREF
  _BYTE v503[712]; // [rsp-4D78h] [rbp-6180h] BYREF
  _BYTE v504[712]; // [rsp-4AB0h] [rbp-5EB8h] BYREF
  _BYTE v505[712]; // [rsp-47E8h] [rbp-5BF0h] BYREF
  _BYTE v506[712]; // [rsp-4520h] [rbp-5928h] BYREF
  _BYTE v507[712]; // [rsp-4258h] [rbp-5660h] BYREF
  _BYTE v508[712]; // [rsp-3F90h] [rbp-5398h] BYREF
  _BYTE v509[712]; // [rsp-3CC8h] [rbp-50D0h] BYREF
  _BYTE v510[712]; // [rsp-3A00h] [rbp-4E08h] BYREF
  _BYTE v511[712]; // [rsp-3738h] [rbp-4B40h] BYREF
  _BYTE v512[712]; // [rsp-3470h] [rbp-4878h] BYREF
  _BYTE v513[712]; // [rsp-31A8h] [rbp-45B0h] BYREF
  _BYTE v514[712]; // [rsp-2EE0h] [rbp-42E8h] BYREF
  _BYTE v515[712]; // [rsp-2C18h] [rbp-4020h] BYREF
  _BYTE v516[712]; // [rsp-2950h] [rbp-3D58h] BYREF
  _BYTE v517[712]; // [rsp-2688h] [rbp-3A90h] BYREF
  _BYTE v518[712]; // [rsp-23C0h] [rbp-37C8h] BYREF
  _BYTE v519[712]; // [rsp-20F8h] [rbp-3500h] BYREF
  _BYTE v520[712]; // [rsp-1E30h] [rbp-3238h] BYREF
  _BYTE v521[712]; // [rsp-1B68h] [rbp-2F70h] BYREF
  _BYTE v522[712]; // [rsp-18A0h] [rbp-2CA8h] BYREF
  _BYTE v523[712]; // [rsp-15D8h] [rbp-29E0h] BYREF
  _BYTE v524[712]; // [rsp-1310h] [rbp-2718h] BYREF
  _BYTE v525[712]; // [rsp-1048h] [rbp-2450h] BYREF
  _BYTE v526[712]; // [rsp-D80h] [rbp-2188h] BYREF
  _BYTE v527[712]; // [rsp-AB8h] [rbp-1EC0h] BYREF
  _BYTE v528[712]; // [rsp-7F0h] [rbp-1BF8h] BYREF
  _BYTE v529[712]; // [rsp-528h] [rbp-1930h] BYREF
  _BYTE v530[592]; // [rsp-260h] [rbp-1668h] BYREF
  _OWORD v531[37]; // [rsp-10h] [rbp-1418h] BYREF
  _OWORD v532[37]; // [rsp+240h] [rbp-11C8h] BYREF
  _OWORD v533[37]; // [rsp+490h] [rbp-F78h] BYREF
  _BYTE v534[712]; // [rsp+6E0h] [rbp-D28h] BYREF
  _OWORD v535[37]; // [rsp+9A8h] [rbp-A60h] BYREF
  _OWORD v536[37]; // [rsp+BF8h] [rbp-810h] BYREF
  _BYTE v537[712]; // [rsp+E48h] [rbp-5C0h] BYREF
  _BYTE v538[712]; // [rsp+1110h] [rbp-2F8h] BYREF

  do
    *((_QWORD *)&v116[22] + 1) = 0LL;
  while ( (_OWORD *)((char *)&v116[22] + 8) != (_OWORD *)((char *)&v343[10] + 8 - (char *)&unk_1C000) );
  v178 = a1;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  ((void (__fastcall *)(_BYTE *, __int64, __int64))clap_builder::builder::command::Command::new::new_inner)(
    v534,
    v2,
    v3);
  *(_QWORD *)&v534[608] = a0027;
  *(_QWORD *)&v534[616] = 6LL;
  memcpy(v439, v534, sizeof(v439));
  uucore::format_usage((unsigned int)&v338);
  v4 = v338;
  if ( v338 != 0x8000000000000000LL )
    v115[0] = v339;
  if ( v439[58] != 0x8000000000000000LL )
    ((void (__fastcall *)(_QWORD *, const char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(
      &v439[58],
      aOptionFile);
  v439[58] = v4;
  *(_OWORD *)&v439[59] = v115[0];
  memcpy(v538, v439, sizeof(v538));
  clap_builder::builder::command::Command::about(v468, v538);
  v5 = v469;
  v6 = v470;
  v469 |= 0x80u;
  v470 |= 0x80u;
  memcpy(v441, v468, 0x2BCuLL);
  v441[175] = v5 | 0x40088;
  v441[176] = v6 | 0x40088;
  v441[177] = v471;
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_29_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 4LL;
  memcpy(v367, v115, 0x220uLL);
  *(_OWORD *)&v367[560] = v115[35];
  *(_OWORD *)&v367[576] = v115[36];
  *(_QWORD *)&v367[544] = anon_73fe86e94af803e79a7413c597bf8ca8_29_llvm_2470886751594806832;
  *(_QWORD *)&v367[552] = 4LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aPrintHelpInfor, 23LL);
  v7 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v367[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v367[440]);
  *(_QWORD *)&v367[440] = v7;
  *(_OWORD *)&v367[448] = v113;
  memcpy(v115, v367, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v367[589];
  HIBYTE(v115[36]) = v367[591];
  BYTE12(v115[36]) = 5;
  ((void (__fastcall *)(_DWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v441, v115);
  memcpy(v529, v441, sizeof(v529));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 6LL;
  memcpy(v387, v115, 0x220uLL);
  v387[35] = v115[35];
  v387[36] = v115[36];
  *(_QWORD *)&v387[34] = anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832;
  *((_QWORD *)&v387[34] + 1) = 6LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aSetTheDisplayF, 23LL);
  v8 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v387[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v387[27] + 8);
  *((_QWORD *)&v387[27] + 1) = v8;
  v387[28] = v115[0];
  memcpy(v414, v387, sizeof(v414));
  *(_QWORD *)&v115[0] = anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = aVerbose;
  *((_QWORD *)&v115[1] + 1) = 7LL;
  *(_QWORD *)&v115[2] = aSingleColumn;
  *((_QWORD *)&v115[2] + 1) = 13LL;
  *(_QWORD *)&v115[3] = aColumns;
  *((_QWORD *)&v115[3] + 1) = 7LL;
  *(_QWORD *)&v115[4] = aVertical;
  *((_QWORD *)&v115[4] + 1) = 8LL;
  *(_QWORD *)&v115[5] = aAcross;
  *((_QWORD *)&v115[5] + 1) = 6LL;
  *(_QWORD *)&v115[6] = aHorizontal;
  *((_QWORD *)&v115[6] + 1) = 10LL;
  *(_QWORD *)&v115[7] = aCommas;
  *((_QWORD *)&v115[7] + 1) = 6LL;
  *(_QWORD *)&v115[8] = 0LL;
  *((_QWORD *)&v115[8] + 1) = 8LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v116,
    v115);
  v322 = v116[0];
  v323 = *(_QWORD *)&v116[1];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v115, &v322);
  v9 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 5LL )
    v115[0] = v116[0];
  if ( v414[10] >= 4uLL && v414[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v414[11]);
  v414[10] = v9;
  *(_OWORD *)&v414[11] = v115[0];
  memcpy(v442, v414, 0x248uLL);
  v442[73] = v414[73] | 0x90LL;
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 6LL;
  *(_QWORD *)&v115[1] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851;
  *((_QWORD *)&v115[2] + 1) = 4LL;
  *(_QWORD *)&v115[3] = anon_d13c0a923ac77d86b5cd3d5212361a5f_62_llvm_13257680528908953851;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = anon_73fe86e94af803e79a7413c597bf8ca8_54_llvm_2470886751594806832;
  *((_QWORD *)&v115[5] + 1) = 5LL;
  *(_QWORD *)&v115[6] = 0LL;
  *((_QWORD *)&v115[6] + 1) = 6LL;
  ((void (__fastcall *)(_QWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v442[16], v115);
  memcpy(v115, v442, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v529, v115);
  memcpy(v528, v529, sizeof(v528));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v399, v115, 0x240uLL);
  *(_QWORD *)((char *)&v399[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v399[36]) = HIDWORD(v115[36]);
  LODWORD(v399[36]) = 67;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aDisplayTheFile, 29LL);
  v10 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v399[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v399[27] + 8);
  *((_QWORD *)&v399[27] + 1) = v10;
  v399[28] = v115[0];
  memcpy(v443, v399, sizeof(v443));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 6LL;
  *(_QWORD *)&v115[1] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851;
  *((_QWORD *)&v115[2] + 1) = 4LL;
  *(_QWORD *)&v115[3] = anon_d13c0a923ac77d86b5cd3d5212361a5f_62_llvm_13257680528908953851;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = 0LL;
  *((_QWORD *)&v115[5] + 1) = 5LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v443[128], v115);
  memcpy(v115, v443, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v443[589];
  HIBYTE(v115[36]) = v443[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v528, v115);
  memcpy(v527, v528, sizeof(v527));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851;
  *((_QWORD *)&v115[33] + 1) = 4LL;
  memcpy(v368, v115, 0x220uLL);
  v368[35] = v115[35];
  *(_QWORD *)((char *)&v368[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v368[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v368[34] = anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851;
  *((_QWORD *)&v368[34] + 1) = 4LL;
  LODWORD(v368[36]) = 108;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aDisplayDetaile, 29LL);
  v11 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v368[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v368[27] + 8);
  *((_QWORD *)&v368[27] + 1) = v11;
  v368[28] = v115[0];
  memcpy(v444, v368, sizeof(v444));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 6LL;
  *(_QWORD *)&v115[1] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851;
  *((_QWORD *)&v115[2] + 1) = 4LL;
  *(_QWORD *)&v115[3] = anon_d13c0a923ac77d86b5cd3d5212361a5f_62_llvm_13257680528908953851;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = 0LL;
  *((_QWORD *)&v115[5] + 1) = 5LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v444[128], v115);
  memcpy(v115, v444, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v444[589];
  HIBYTE(v115[36]) = v444[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v527, v115);
  memcpy(v526, v527, sizeof(v526));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_d13c0a923ac77d86b5cd3d5212361a5f_62_llvm_13257680528908953851;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v400, v115, 0x240uLL);
  *(_QWORD *)((char *)&v400[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v400[36]) = HIDWORD(v115[36]);
  LODWORD(v400[36]) = 120;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aListEntriesInR, 43LL);
  v12 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v400[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v400[27] + 8);
  *((_QWORD *)&v400[27] + 1) = v12;
  v400[28] = v115[0];
  memcpy(v445, v400, sizeof(v445));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 6LL;
  *(_QWORD *)&v115[1] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851;
  *((_QWORD *)&v115[2] + 1) = 4LL;
  *(_QWORD *)&v115[3] = anon_d13c0a923ac77d86b5cd3d5212361a5f_62_llvm_13257680528908953851;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = 0LL;
  *((_QWORD *)&v115[5] + 1) = 5LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v445[128], v115);
  memcpy(v115, v445, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v445[589];
  HIBYTE(v115[36]) = v445[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v526, v115);
  memcpy(v525, v526, sizeof(v525));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_d13c0a923ac77d86b5cd3d5212361a5f_63_llvm_13257680528908953851;
  *((_QWORD *)&v115[33] + 1) = 7LL;
  memcpy(v369, v115, 0x220uLL);
  v369[35] = v115[35];
  *(_QWORD *)((char *)&v369[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v369[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v369[34] = anon_d13c0a923ac77d86b5cd3d5212361a5f_63_llvm_13257680528908953851;
  *((_QWORD *)&v369[34] + 1) = 7LL;
  LODWORD(v369[36]) = 84;
  std::env::_var_os(&v113, &unk_39986, 7LL);
  *(_QWORD *)&v116[1] = v114;
  v116[0] = v113;
  v177 = 0x8000000000000002LL;
  if ( *((__int64 *)&v369[31] + 1) >= (__int64)0x8000000000000002LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v369[31] + 8);
  *((_QWORD *)&v369[30] + 1) = &unk_39986;
  *(_QWORD *)&v369[31] = 7LL;
  *((_QWORD *)&v369[32] + 1) = *(_QWORD *)&v116[1];
  *(_OWORD *)((char *)&v369[31] + 8) = v116[0];
  memcpy(v115, v369, sizeof(v115));
  *(_QWORD *)&v116[0] = aCols;
  *((_QWORD *)&v116[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v429, v115);
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aAssumeTabStops, 58LL);
  v13 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v429[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v429[27] + 8);
  *((_QWORD *)&v429[27] + 1) = v13;
  v429[28] = v113;
  memcpy(v115, v429, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v525, v115);
  memcpy(v524, v525, sizeof(v524));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_d13c0a923ac77d86b5cd3d5212361a5f_64_llvm_13257680528908953851;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v401, v115, 0x240uLL);
  *(_QWORD *)((char *)&v401[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v401[36]) = HIDWORD(v115[36]);
  LODWORD(v401[36]) = 109;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aListEntriesSep, 33LL);
  v14 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v401[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v401[27] + 8);
  *((_QWORD *)&v401[27] + 1) = v14;
  v401[28] = v115[0];
  memcpy(v446, v401, sizeof(v446));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 6LL;
  *(_QWORD *)&v115[1] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851;
  *((_QWORD *)&v115[2] + 1) = 4LL;
  *(_QWORD *)&v115[3] = anon_d13c0a923ac77d86b5cd3d5212361a5f_62_llvm_13257680528908953851;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = 0LL;
  *((_QWORD *)&v115[5] + 1) = 5LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v446[128], v115);
  memcpy(v115, v446, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v446[589];
  HIBYTE(v115[36]) = v446[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v524, v115);
  memcpy(v523, v524, sizeof(v523));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 4LL;
  memcpy(v402, v115, 0x220uLL);
  v402[35] = v115[35];
  v402[36] = v115[36];
  *(_QWORD *)&v402[34] = anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832;
  *((_QWORD *)&v402[34] + 1) = 4LL;
  v15 = *(_QWORD *)&v402[9];
  if ( *(_QWORD *)&v402[9] == *(_QWORD *)&v402[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v402[8]);
  v16 = *((_QWORD *)&v402[8] + 1);
  v17 = 16 * v15;
  *(_QWORD *)(*((_QWORD *)&v402[8] + 1) + v17) = anon_73fe86e94af803e79a7413c597bf8ca8_53_llvm_2470886751594806832;
  *(_QWORD *)(v16 + v17 + 8) = 4LL;
  *(_QWORD *)&v402[9] = v15 + 1;
  memcpy(v415, v402, sizeof(v415));
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aListEntriesSep_0, 47LL);
  v18 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v415[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v415[27] + 8);
  *((_QWORD *)&v415[27] + 1) = v18;
  v415[28] = v113;
  memcpy(v115, v415, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v415[36] + 13);
  HIBYTE(v115[36]) = HIBYTE(v415[36]);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v523, v115);
  memcpy(v522, v523, sizeof(v522));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_54_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 5LL;
  memcpy(v345, v115, 0x220uLL);
  *(_OWORD *)&v345[560] = v115[35];
  *(_QWORD *)&v345[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v346 = HIDWORD(v115[36]);
  *(_QWORD *)&v345[544] = anon_73fe86e94af803e79a7413c597bf8ca8_54_llvm_2470886751594806832;
  *(_QWORD *)&v345[552] = 5LL;
  *(_DWORD *)&v345[576] = 68;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aGenerateOutput, 65LL);
  v19 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *(_QWORD *)&v345[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v345[440]);
  *(_QWORD *)&v345[440] = v19;
  *(_OWORD *)&v345[448] = v115[0];
  memcpy(v416, v345, 0x24CuLL);
  *(_WORD *)((char *)&v416[73] + 5) = *(_WORD *)((char *)&v346 + 1);
  HIBYTE(v416[73]) = HIBYTE(v346);
  BYTE4(v416[73]) = 2;
  v20 = v416[18];
  if ( v416[18] == v416[16] )
    ((void (__fastcall *)(_QWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v416[16]);
  v21 = v416[17];
  v22 = 16 * v20;
  *(_QWORD *)(v416[17] + v22) = &anon_73fe86e94af803e79a7413c597bf8ca8_55_llvm_2470886751594806832;
  *(_QWORD *)(v21 + v22 + 8) = 9LL;
  v416[18] = v20 + 1;
  memcpy(v115, v416, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v522, v115);
  memcpy(v521, v522, sizeof(v521));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = &anon_73fe86e94af803e79a7413c597bf8ca8_55_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 9LL;
  memcpy(v388, v115, 0x220uLL);
  v388[35] = v115[35];
  v388[36] = v115[36];
  *(_QWORD *)&v388[34] = &anon_73fe86e94af803e79a7413c597bf8ca8_55_llvm_2470886751594806832;
  *((_QWORD *)&v388[34] + 1) = 9LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aHyperlinkFileN, 25LL);
  v23 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v388[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v388[27] + 8);
  *((_QWORD *)&v388[27] + 1) = v23;
  v388[28] = v115[0];
  memcpy(v403, v388, sizeof(v403));
  *(_QWORD *)&v183 = aAlways;
  *((_QWORD *)&v183 + 1) = 6LL;
  v181 = 0x8000000000000000LL;
  *(_QWORD *)&v179 = 0LL;
  *((_QWORD *)&v179 + 1) = 8LL;
  v180 = 0LL;
  LOBYTE(v184) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v179);
  v24 = *((_QWORD *)&v179 + 1);
  **((_QWORD **)&v179 + 1) = aYes;
  *(_QWORD *)(v24 + 8) = 3LL;
  v180 = 1LL;
  v118 = 1LL;
  v119 = v181;
  v117 = v179;
  v120 = v182;
  v121 = v183;
  v122 = v184;
  if ( (_QWORD)v179 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v117);
  v25 = *((_QWORD *)&v117 + 1);
  *(_QWORD *)(*((_QWORD *)&v117 + 1) + 16LL) = &unk_3968C;
  *(_QWORD *)(v25 + 24) = 5LL;
  v118 = 2LL;
  v282 = v117;
  v284 = v120;
  v285 = v121;
  v286 = v122;
  v283 = __PAIR128__(v119, 2LL);
  *(_QWORD *)&v189 = aAuto;
  *((_QWORD *)&v189 + 1) = 4LL;
  v187 = 0x8000000000000000LL;
  *(_QWORD *)&v185 = 0LL;
  *((_QWORD *)&v185 + 1) = 8LL;
  v186 = 0LL;
  LOBYTE(v190) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v185);
  v26 = *((_QWORD *)&v185 + 1);
  **((_QWORD **)&v185 + 1) = aTty;
  *(_QWORD *)(v26 + 8) = 3LL;
  v186 = 1LL;
  v124 = 1LL;
  v125 = v187;
  v123 = v185;
  v126 = v188;
  v127 = v189;
  v128 = v190;
  if ( (_QWORD)v185 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v123);
  v27 = *((_QWORD *)&v123 + 1);
  *(_QWORD *)(*((_QWORD *)&v123 + 1) + 16LL) = &unk_39694;
  *(_QWORD *)(v27 + 24) = 6LL;
  v124 = 2LL;
  v287 = v123;
  v289 = v126;
  v290 = v127;
  v291 = v128;
  v288 = __PAIR128__(v125, 2LL);
  *(_QWORD *)&v195 = aNever;
  *((_QWORD *)&v195 + 1) = 5LL;
  v193 = 0x8000000000000000LL;
  *(_QWORD *)&v191 = 0LL;
  *((_QWORD *)&v191 + 1) = 8LL;
  v192 = 0LL;
  LOBYTE(v196) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v191);
  v28 = *((_QWORD *)&v191 + 1);
  **((_QWORD **)&v191 + 1) = aNo_0;
  *(_QWORD *)(v28 + 8) = 2LL;
  v192 = 1LL;
  v130 = 1LL;
  v131 = v193;
  v129 = v191;
  v132 = v194;
  v133 = v195;
  v134 = v196;
  if ( (_QWORD)v191 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v129);
  v29 = *((_QWORD *)&v129 + 1);
  *(_QWORD *)(*((_QWORD *)&v129 + 1) + 16LL) = aNone;
  *(_QWORD *)(v29 + 24) = 4LL;
  v130 = 2LL;
  v340[9] = v129;
  v340[11] = v132;
  v340[12] = v133;
  *(_QWORD *)&v340[13] = v134;
  v340[10] = __PAIR128__(v131, 2LL);
  v340[0] = v282;
  v340[1] = v283;
  v340[2] = v284;
  v340[3] = v285;
  *(_QWORD *)&v340[4] = v286;
  *((_QWORD *)&v340[8] + 1) = v291;
  *(_OWORD *)((char *)&v340[7] + 8) = v290;
  *(_OWORD *)((char *)&v340[6] + 8) = v289;
  *(_OWORD *)((char *)&v340[5] + 8) = v288;
  *(_OWORD *)((char *)&v340[4] + 8) = v287;
  memcpy(&v115[1], v340, 0xD8uLL);
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 3LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v116,
    v115);
  v324 = v116[0];
  v325 = *(_QWORD *)&v116[1];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v115, &v324);
  v30 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 5LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v403[5] >= 4uLL && *(_QWORD *)&v403[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v403[5] + 8);
  *(_QWORD *)&v403[5] = v30;
  *(_OWORD *)((char *)&v403[5] + 8) = v113;
  v115[0] = v403[0];
  memcpy((char *)&v115[2] + 8, (char *)&v403[2] + 8, 0x220uLL);
  v115[1] = 1uLL;
  *(_QWORD *)&v115[2] = 1LL;
  *((_QWORD *)&v115[36] + 1) = *((_QWORD *)&v403[36] + 1) | 0x80LL;
  *(_QWORD *)&v116[0] = aAlways;
  *((_QWORD *)&v116[0] + 1) = 6LL;
  *(_QWORD *)&v116[1] = 0LL;
  *((_QWORD *)&v116[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v113,
    v116);
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::raw_vec::RawVec<T,A>::current_memory)(v116, &v115[26]);
  if ( *((_QWORD *)&v116[0] + 1) )
    ((void (__fastcall *)(_OWORD *, _QWORD, _QWORD, _QWORD))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
      &v115[27],
      *(_QWORD *)&v116[0],
      *((_QWORD *)&v116[0] + 1),
      *(_QWORD *)&v116[1]);
  *(_QWORD *)&v115[27] = v114;
  v115[26] = v113;
  memcpy(v116, v115, sizeof(v116));
  *(_QWORD *)&v115[0] = aNever;
  *((_QWORD *)&v115[0] + 1) = 5LL;
  *(_QWORD *)&v115[1] = 0LL;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v113,
    v115);
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::raw_vec::RawVec<T,A>::current_memory)(v115, &v116[23]);
  if ( *((_QWORD *)&v115[0] + 1) )
    ((void (__fastcall *)(_OWORD *, _QWORD, _QWORD, _QWORD))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
      &v116[24],
      *(_QWORD *)&v115[0],
      *((_QWORD *)&v115[0] + 1),
      *(_QWORD *)&v115[1]);
  *(_QWORD *)&v116[24] = v114;
  v116[23] = v113;
  memcpy(v115, v116, sizeof(v115));
  *(_QWORD *)&v116[0] = aWhen;
  *((_QWORD *)&v116[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v440, v115);
  v31 = v440[18];
  if ( v440[18] == v440[16] )
    ((void (__fastcall *)(_QWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v440[16]);
  v32 = v440[17];
  v33 = 16 * v31;
  *(_QWORD *)(v440[17] + v33) = anon_73fe86e94af803e79a7413c597bf8ca8_54_llvm_2470886751594806832;
  *(_QWORD *)(v32 + v33 + 8) = 5LL;
  v440[18] = v31 + 1;
  memcpy(v115, v440, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v521, v115);
  memcpy(v520, v521, sizeof(v520));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_d13c0a923ac77d86b5cd3d5212361a5f_59_llvm_13257680528908953851;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v380, v115, 0x240uLL);
  *(_QWORD *)&v380[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v381 = HIDWORD(v115[36]);
  *(_DWORD *)&v380[576] = 49;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aListOneFilePer, 23LL);
  v34 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v380[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v380[440]);
  *(_QWORD *)&v380[440] = v34;
  *(_OWORD *)&v380[448] = v113;
  memcpy(v115, v380, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v381 + 1);
  HIBYTE(v115[36]) = HIBYTE(v381);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v520, v115);
  memcpy(v519, v520, sizeof(v519));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_d13c0a923ac77d86b5cd3d5212361a5f_66_llvm_13257680528908953851;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v382, v115, 0x240uLL);
  *(_QWORD *)&v382[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v383 = HIDWORD(v115[36]);
  *(_DWORD *)&v382[576] = 111;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aLongFormatWith, 82LL);
  v35 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v382[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v382[440]);
  *(_QWORD *)&v382[440] = v35;
  *(_OWORD *)&v382[448] = v113;
  memcpy(v115, v382, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v383 + 1);
  HIBYTE(v115[36]) = HIBYTE(v383);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v519, v115);
  memcpy(v518, v519, sizeof(v518));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_d13c0a923ac77d86b5cd3d5212361a5f_65_llvm_13257680528908953851;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v384, v115, 0x240uLL);
  *(_QWORD *)&v384[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v385 = HIDWORD(v115[36]);
  *(_DWORD *)&v384[576] = 103;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aLongFormatWith_0, 38LL);
  v36 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v384[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v384[440]);
  *(_QWORD *)&v384[440] = v36;
  *(_OWORD *)&v384[448] = v113;
  memcpy(v115, v384, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v385 + 1);
  HIBYTE(v115[36]) = HIBYTE(v385);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v518, v115);
  memcpy(v517, v518, sizeof(v517));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_d13c0a923ac77d86b5cd3d5212361a5f_67_llvm_13257680528908953851;
  *((_QWORD *)&v115[33] + 1) = 15LL;
  memcpy(v347, v115, 0x220uLL);
  *(_OWORD *)&v347[560] = v115[35];
  *(_QWORD *)&v347[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v348 = HIDWORD(v115[36]);
  *(_QWORD *)&v347[544] = anon_d13c0a923ac77d86b5cd3d5212361a5f_67_llvm_13257680528908953851;
  *(_QWORD *)&v347[552] = 15LL;
  *(_DWORD *)&v347[576] = 110;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aLWithNumericUi, 30LL);
  v37 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v347[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v347[440]);
  *(_QWORD *)&v347[440] = v37;
  *(_OWORD *)&v347[448] = v113;
  memcpy(v115, v347, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v348 + 1);
  HIBYTE(v115[36]) = HIBYTE(v348);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v517, v115);
  memcpy(v516, v517, sizeof(v516));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_30_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 13LL;
  memcpy(v389, v115, 0x220uLL);
  v389[35] = v115[35];
  v389[36] = v115[36];
  *(_QWORD *)&v389[34] = anon_73fe86e94af803e79a7413c597bf8ca8_30_llvm_2470886751594806832;
  *((_QWORD *)&v389[34] + 1) = 13LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aSetQuotingStyl, 18LL);
  v38 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v389[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v389[27] + 8);
  *((_QWORD *)&v389[27] + 1) = v38;
  v389[28] = v115[0];
  memcpy(v430, v389, sizeof(v430));
  *(_QWORD *)&v260 = aLiteral;
  *((_QWORD *)&v260 + 1) = 7LL;
  *((_QWORD *)&v258 + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v257 = 0LL;
  *((_QWORD *)&v257 + 1) = 8LL;
  *(_QWORD *)&v258 = 0LL;
  LOBYTE(v261) = 0;
  *(_QWORD *)&v265 = aShell;
  *((_QWORD *)&v265 + 1) = 5LL;
  *((_QWORD *)&v263 + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v262 = 0LL;
  *((_QWORD *)&v262 + 1) = 8LL;
  *(_QWORD *)&v263 = 0LL;
  LOBYTE(v266) = 0;
  *(_QWORD *)&v270 = aShellEscape;
  *((_QWORD *)&v270 + 1) = 12LL;
  *((_QWORD *)&v268 + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v267 = 0LL;
  *((_QWORD *)&v267 + 1) = 8LL;
  *(_QWORD *)&v268 = 0LL;
  LOBYTE(v271) = 0;
  *(_QWORD *)&v275 = aShellAlways;
  *((_QWORD *)&v275 + 1) = 12LL;
  *((_QWORD *)&v273 + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v272 = 0LL;
  *((_QWORD *)&v272 + 1) = 8LL;
  *(_QWORD *)&v273 = 0LL;
  LOBYTE(v276) = 0;
  *(_QWORD *)&v280 = aShellEscapeAlw_0;
  *((_QWORD *)&v280 + 1) = 19LL;
  *((_QWORD *)&v278 + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v277 = 0LL;
  *((_QWORD *)&v277 + 1) = 8LL;
  *(_QWORD *)&v278 = 0LL;
  LOBYTE(v281) = 0;
  *(_QWORD *)&v201 = aC_0;
  *((_QWORD *)&v201 + 1) = 1LL;
  v199 = 0x8000000000000000LL;
  *(_QWORD *)&v197 = 0LL;
  *((_QWORD *)&v197 + 1) = 8LL;
  v198 = 0LL;
  LOBYTE(v202) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v197);
  v39 = *((_QWORD *)&v197 + 1);
  **((_QWORD **)&v197 + 1) = aCMaybe;
  *(_QWORD *)(v39 + 8) = 7LL;
  v198 = 1LL;
  *(_OWORD *)((char *)&v344[22] + 8) = v197;
  *(_OWORD *)((char *)&v344[24] + 8) = v200;
  *(_OWORD *)((char *)&v344[25] + 8) = v201;
  *((_QWORD *)&v344[26] + 1) = v202;
  *((_QWORD *)&v344[23] + 1) = 1LL;
  *(_QWORD *)&v344[24] = v199;
  v344[0] = v257;
  v344[1] = v258;
  v344[2] = v259;
  v344[3] = v260;
  *(_QWORD *)&v344[4] = v261;
  *((_QWORD *)&v344[8] + 1) = v266;
  *(_OWORD *)((char *)&v344[7] + 8) = v265;
  *(_OWORD *)((char *)&v344[6] + 8) = v264;
  *(_OWORD *)((char *)&v344[5] + 8) = v263;
  *(_OWORD *)((char *)&v344[4] + 8) = v262;
  *(_QWORD *)&v344[13] = v271;
  v344[12] = v270;
  v344[11] = v269;
  v344[10] = v268;
  v344[9] = v267;
  *((_QWORD *)&v344[17] + 1) = v276;
  *(_OWORD *)((char *)&v344[16] + 8) = v275;
  *(_OWORD *)((char *)&v344[15] + 8) = v274;
  *(_OWORD *)((char *)&v344[14] + 8) = v273;
  *(_OWORD *)((char *)&v344[13] + 8) = v272;
  *(_QWORD *)&v344[22] = v281;
  v344[21] = v280;
  v344[20] = v279;
  v344[19] = v278;
  v344[18] = v277;
  memcpy(&v115[1], v344, 0x1B0uLL);
  *(_QWORD *)&v115[28] = 0LL;
  *((_QWORD *)&v115[28] + 1) = 8LL;
  *(_QWORD *)&v115[29] = 0LL;
  *((_QWORD *)&v115[29] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v115[31] = aEscape;
  *((_QWORD *)&v115[31] + 1) = 6LL;
  LOBYTE(v115[32]) = 0;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 7LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v116,
    v115);
  v326 = v116[0];
  v327 = *(_QWORD *)&v116[1];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v115, &v326);
  v40 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 5LL )
    v115[0] = v116[0];
  if ( v430[10] >= 4uLL && v430[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v430[11]);
  v430[10] = v40;
  *(_OWORD *)&v430[11] = v115[0];
  memcpy(v530, v430, sizeof(v530));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_30_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 13LL;
  *(_QWORD *)&v115[1] = anon_7c1e270846ccb77ed0002241600464f7_22_llvm_18082322705867691778;
  *((_QWORD *)&v115[1] + 1) = 7LL;
  *(_QWORD *)&v115[2] = anon_7c1e270846ccb77ed0002241600464f7_21_llvm_18082322705867691778;
  *((_QWORD *)&v115[2] + 1) = 6LL;
  *(_QWORD *)&v115[3] = anon_7c1e270846ccb77ed0002241600464f7_23_llvm_18082322705867691778;
  *((_QWORD *)&v115[3] + 1) = 10LL;
  *(_QWORD *)&v115[4] = 0LL;
  *((_QWORD *)&v115[4] + 1) = 4LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v530[128], v115);
  memcpy(v115, v530, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v516, v115);
  memcpy(v515, v516, sizeof(v515));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_7c1e270846ccb77ed0002241600464f7_22_llvm_18082322705867691778;
  *((_QWORD *)&v115[33] + 1) = 7LL;
  memcpy(v386, v115, 0x220uLL);
  v386[35] = v115[35];
  *(_QWORD *)((char *)&v386[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v386[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v386[34] = anon_7c1e270846ccb77ed0002241600464f7_22_llvm_18082322705867691778;
  *((_QWORD *)&v386[34] + 1) = 7LL;
  LODWORD(v386[36]) = 78;
  v41 = *((_QWORD *)&v386[19] + 1);
  if ( *((_QWORD *)&v386[19] + 1) == *((_QWORD *)&v386[18] + 1) )
    ((void (__fastcall *)(char *))alloc::raw_vec::RawVec<T,A>::grow_one)((char *)&v386[18] + 8);
  v42 = *(_QWORD *)&v386[19];
  v43 = 3 * v41;
  *(_QWORD *)(*(_QWORD *)&v386[19] + 8 * v43) = &unk_39B37;
  *(_QWORD *)(v42 + 8 * v43 + 8) = 1LL;
  *(_BYTE *)(v42 + 8 * v43 + 16) = 0;
  *((_QWORD *)&v386[19] + 1) = v41 + 1;
  memcpy(v431, v386, sizeof(v431));
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aUseLiteralQuot, 66LL);
  v44 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v431[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v431[27] + 8);
  *((_QWORD *)&v431[27] + 1) = v44;
  v431[28] = v115[0];
  memcpy(v447, v431, sizeof(v447));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_30_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 13LL;
  *(_QWORD *)&v115[1] = anon_7c1e270846ccb77ed0002241600464f7_22_llvm_18082322705867691778;
  *((_QWORD *)&v115[1] + 1) = 7LL;
  *(_QWORD *)&v115[2] = anon_7c1e270846ccb77ed0002241600464f7_21_llvm_18082322705867691778;
  *((_QWORD *)&v115[2] + 1) = 6LL;
  *(_QWORD *)&v115[3] = anon_7c1e270846ccb77ed0002241600464f7_23_llvm_18082322705867691778;
  *((_QWORD *)&v115[3] + 1) = 10LL;
  *(_QWORD *)&v115[4] = 0LL;
  *((_QWORD *)&v115[4] + 1) = 4LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v447[128], v115);
  memcpy(v115, v447, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v447[589];
  HIBYTE(v115[36]) = v447[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v515, v115);
  memcpy(v514, v515, sizeof(v514));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_7c1e270846ccb77ed0002241600464f7_21_llvm_18082322705867691778;
  *((_QWORD *)&v115[33] + 1) = 6LL;
  memcpy(v370, v115, 0x220uLL);
  v370[35] = v115[35];
  *(_QWORD *)((char *)&v370[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v370[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v370[34] = anon_7c1e270846ccb77ed0002241600464f7_21_llvm_18082322705867691778;
  *((_QWORD *)&v370[34] + 1) = 6LL;
  LODWORD(v370[36]) = 98;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aUseEscapeQuoti, 64LL);
  v45 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v370[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v370[27] + 8);
  *((_QWORD *)&v370[27] + 1) = v45;
  v370[28] = v115[0];
  memcpy(v448, v370, sizeof(v448));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_30_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 13LL;
  *(_QWORD *)&v115[1] = anon_7c1e270846ccb77ed0002241600464f7_22_llvm_18082322705867691778;
  *((_QWORD *)&v115[1] + 1) = 7LL;
  *(_QWORD *)&v115[2] = anon_7c1e270846ccb77ed0002241600464f7_21_llvm_18082322705867691778;
  *((_QWORD *)&v115[2] + 1) = 6LL;
  *(_QWORD *)&v115[3] = anon_7c1e270846ccb77ed0002241600464f7_23_llvm_18082322705867691778;
  *((_QWORD *)&v115[3] + 1) = 10LL;
  *(_QWORD *)&v115[4] = 0LL;
  *((_QWORD *)&v115[4] + 1) = 4LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v448[128], v115);
  memcpy(v115, v448, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v448[589];
  HIBYTE(v115[36]) = v448[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v514, v115);
  memcpy(v513, v514, sizeof(v513));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_7c1e270846ccb77ed0002241600464f7_23_llvm_18082322705867691778;
  *((_QWORD *)&v115[33] + 1) = 10LL;
  memcpy(v371, v115, 0x220uLL);
  v371[35] = v115[35];
  *(_QWORD *)((char *)&v371[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v371[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v371[34] = anon_7c1e270846ccb77ed0002241600464f7_23_llvm_18082322705867691778;
  *((_QWORD *)&v371[34] + 1) = 10LL;
  LODWORD(v371[36]) = 81;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aUseCQuotingSty, 54LL);
  v46 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v371[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v371[27] + 8);
  *((_QWORD *)&v371[27] + 1) = v46;
  v371[28] = v115[0];
  memcpy(v449, v371, sizeof(v449));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_30_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 13LL;
  *(_QWORD *)&v115[1] = anon_7c1e270846ccb77ed0002241600464f7_22_llvm_18082322705867691778;
  *((_QWORD *)&v115[1] + 1) = 7LL;
  *(_QWORD *)&v115[2] = anon_7c1e270846ccb77ed0002241600464f7_21_llvm_18082322705867691778;
  *((_QWORD *)&v115[2] + 1) = 6LL;
  *(_QWORD *)&v115[3] = anon_7c1e270846ccb77ed0002241600464f7_23_llvm_18082322705867691778;
  *((_QWORD *)&v115[3] + 1) = 10LL;
  *(_QWORD *)&v115[4] = 0LL;
  *((_QWORD *)&v115[4] + 1) = 4LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v449[128], v115);
  memcpy(v115, v449, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v449[589];
  HIBYTE(v115[36]) = v449[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v513, v115);
  memcpy(v512, v513, sizeof(v512));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_31_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 18LL;
  memcpy(v372, v115, 0x220uLL);
  v372[35] = v115[35];
  *(_QWORD *)((char *)&v372[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v372[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v372[34] = anon_73fe86e94af803e79a7413c597bf8ca8_31_llvm_2470886751594806832;
  *((_QWORD *)&v372[34] + 1) = 18LL;
  LODWORD(v372[36]) = 113;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aReplaceControl, 60LL);
  v47 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v372[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v372[27] + 8);
  *((_QWORD *)&v372[27] + 1) = v47;
  v372[28] = v115[0];
  memcpy(v450, v372, sizeof(v450));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_31_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 18LL;
  *(_QWORD *)&v115[1] = anon_73fe86e94af803e79a7413c597bf8ca8_32_llvm_2470886751594806832;
  *((_QWORD *)&v115[1] + 1) = 18LL;
  *(_QWORD *)&v115[2] = 0LL;
  *((_QWORD *)&v115[2] + 1) = 2LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v450[128], v115);
  memcpy(v115, v450, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v450[589];
  HIBYTE(v115[36]) = v450[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v512, v115);
  memcpy(v511, v512, sizeof(v511));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_32_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 18LL;
  memcpy(v390, v115, 0x220uLL);
  v390[35] = v115[35];
  v390[36] = v115[36];
  *(_QWORD *)&v390[34] = anon_73fe86e94af803e79a7413c597bf8ca8_32_llvm_2470886751594806832;
  *((_QWORD *)&v390[34] + 1) = 18LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aShowControlCha, 56LL);
  v48 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v390[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v390[27] + 8);
  *((_QWORD *)&v390[27] + 1) = v48;
  v390[28] = v115[0];
  memcpy(v451, v390, sizeof(v451));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_31_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 18LL;
  *(_QWORD *)&v115[1] = anon_73fe86e94af803e79a7413c597bf8ca8_32_llvm_2470886751594806832;
  *((_QWORD *)&v115[1] + 1) = 18LL;
  *(_QWORD *)&v115[2] = 0LL;
  *((_QWORD *)&v115[2] + 1) = 2LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v451[128], v115);
  memcpy(v115, v451, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v451[589];
  HIBYTE(v115[36]) = v451[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v511, v115);
  memcpy(v510, v511, sizeof(v510));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_38_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 4LL;
  memcpy(v391, v115, 0x220uLL);
  v391[35] = v115[35];
  v391[36] = v115[36];
  *(_QWORD *)&v391[34] = anon_73fe86e94af803e79a7413c597bf8ca8_38_llvm_2470886751594806832;
  *((_QWORD *)&v391[34] + 1) = 4LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aShowTimeInFiel, 124LL);
  v49 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v391[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v391[27] + 8);
  *((_QWORD *)&v391[27] + 1) = v49;
  v391[28] = v113;
  memcpy(v115, v391, sizeof(v115));
  *(_QWORD *)&v116[0] = aField;
  *((_QWORD *)&v116[0] + 1) = 5LL;
  clap_builder::builder::arg::Arg::value_names(v417, v115);
  *(_QWORD *)&v207 = aAtime;
  *((_QWORD *)&v207 + 1) = 5LL;
  v205 = 0x8000000000000000LL;
  *(_QWORD *)&v203 = 0LL;
  *((_QWORD *)&v203 + 1) = 8LL;
  v204 = 0LL;
  LOBYTE(v208) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v203);
  v50 = *((_QWORD *)&v203 + 1);
  **((_QWORD **)&v203 + 1) = aAccess;
  *(_QWORD *)(v50 + 8) = 6LL;
  v204 = 1LL;
  v136 = 1LL;
  v137 = v205;
  v135 = v203;
  v138 = v206;
  v139 = v207;
  v140 = v208;
  if ( (_QWORD)v203 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v135);
  v51 = *((_QWORD *)&v135 + 1);
  *(_QWORD *)(*((_QWORD *)&v135 + 1) + 16LL) = &unk_39630;
  *(_QWORD *)(v51 + 24) = 3LL;
  v136 = 2LL;
  v292 = v135;
  v294 = v138;
  v295 = v139;
  v296 = v140;
  v293 = __PAIR128__(v137, 2LL);
  *(_QWORD *)&v213 = aCtime;
  *((_QWORD *)&v213 + 1) = 5LL;
  v211 = 0x8000000000000000LL;
  *(_QWORD *)&v209 = 0LL;
  *((_QWORD *)&v209 + 1) = 8LL;
  v210 = 0LL;
  LOBYTE(v214) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v209);
  v52 = *((_QWORD *)&v209 + 1);
  **((_QWORD **)&v209 + 1) = aStatus;
  *(_QWORD *)(v52 + 8) = 6LL;
  v210 = 1LL;
  v297 = v209;
  v299 = v212;
  v300 = v213;
  v301 = v214;
  v298 = __PAIR128__(v211, 1LL);
  *(_QWORD *)&v219 = aBirth;
  *((_QWORD *)&v219 + 1) = 5LL;
  v217 = 0x8000000000000000LL;
  *(_QWORD *)&v215 = 0LL;
  *((_QWORD *)&v215 + 1) = 8LL;
  v216 = 0LL;
  LOBYTE(v220) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v215);
  v53 = *((_QWORD *)&v215 + 1);
  **((_QWORD **)&v215 + 1) = aCreation;
  *(_QWORD *)(v53 + 8) = 8LL;
  v216 = 1LL;
  v341[9] = v215;
  v341[11] = v218;
  v341[12] = v219;
  *(_QWORD *)&v341[13] = v220;
  v341[10] = __PAIR128__(v217, 1LL);
  v341[0] = v292;
  v341[1] = v293;
  v341[2] = v294;
  v341[3] = v295;
  *(_QWORD *)&v341[4] = v296;
  *((_QWORD *)&v341[8] + 1) = v301;
  *(_OWORD *)((char *)&v341[7] + 8) = v300;
  *(_OWORD *)((char *)&v341[6] + 8) = v299;
  *(_OWORD *)((char *)&v341[5] + 8) = v298;
  *(_OWORD *)((char *)&v341[4] + 8) = v297;
  memcpy(&v115[1], v341, 0xD8uLL);
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 3LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v116,
    v115);
  v328 = v116[0];
  v329 = *(_QWORD *)&v116[1];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v115, &v328);
  v54 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 5LL )
    v115[0] = v116[0];
  if ( v417[10] >= 4uLL && v417[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v417[11]);
  v417[10] = v54;
  *(_OWORD *)&v417[11] = v115[0];
  memcpy(v452, v417, 0x248uLL);
  v452[146] = v418 | 0x90;
  v452[147] = v419;
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_38_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = anon_899730b44f50ab02bfd9ca63d23e76e8_64_llvm_11807341281290569930;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_899730b44f50ab02bfd9ca63d23e76e8_65_llvm_11807341281290569930;
  *((_QWORD *)&v115[2] + 1) = 1LL;
  *(_QWORD *)&v115[3] = 0LL;
  *((_QWORD *)&v115[3] + 1) = 3LL;
  ((void (__fastcall *)(_DWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v452[32], v115);
  memcpy(v115, v452, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v510, v115);
  memcpy(v509, v510, sizeof(v509));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_899730b44f50ab02bfd9ca63d23e76e8_65_llvm_11807341281290569930;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v404, v115, 0x240uLL);
  *(_QWORD *)((char *)&v404[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v404[36]) = HIDWORD(v115[36]);
  LODWORD(v404[36]) = 99;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aIfTheLongListi, 281LL);
  v55 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v404[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v404[27] + 8);
  *((_QWORD *)&v404[27] + 1) = v55;
  v404[28] = v115[0];
  memcpy(v453, v404, sizeof(v453));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_38_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = anon_899730b44f50ab02bfd9ca63d23e76e8_64_llvm_11807341281290569930;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_899730b44f50ab02bfd9ca63d23e76e8_65_llvm_11807341281290569930;
  *((_QWORD *)&v115[2] + 1) = 1LL;
  *(_QWORD *)&v115[3] = 0LL;
  *((_QWORD *)&v115[3] + 1) = 3LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v453[128], v115);
  memcpy(v115, v453, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v453[589];
  HIBYTE(v115[36]) = v453[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v509, v115);
  memcpy(v508, v509, sizeof(v508));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_899730b44f50ab02bfd9ca63d23e76e8_64_llvm_11807341281290569930;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v405, v115, 0x240uLL);
  *(_QWORD *)((char *)&v405[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v405[36]) = HIDWORD(v115[36]);
  LODWORD(v405[36]) = 117;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(
    v115,
    aIfTheLongListi_0,
    247LL);
  v56 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v405[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v405[27] + 8);
  *((_QWORD *)&v405[27] + 1) = v56;
  v405[28] = v115[0];
  memcpy(v454, v405, sizeof(v454));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_38_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = anon_899730b44f50ab02bfd9ca63d23e76e8_64_llvm_11807341281290569930;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_899730b44f50ab02bfd9ca63d23e76e8_65_llvm_11807341281290569930;
  *((_QWORD *)&v115[2] + 1) = 1LL;
  *(_QWORD *)&v115[3] = 0LL;
  *((_QWORD *)&v115[3] + 1) = 3LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v454[128], v115);
  memcpy(v115, v454, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v454[589];
  HIBYTE(v115[36]) = v454[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v508, v115);
  memcpy(v507, v508, sizeof(v507));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v116);
  *(_QWORD *)&v116[33] = anon_73fe86e94af803e79a7413c597bf8ca8_49_llvm_2470886751594806832;
  *((_QWORD *)&v116[33] + 1) = 4LL;
  memcpy(v115, v116, 0x220uLL);
  v115[35] = v116[35];
  *(_OWORD *)((char *)&v115[35] + 12) = *(_OWORD *)((char *)&v116[35] + 12);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v116[36] + 13);
  HIBYTE(v115[36]) = HIBYTE(v116[36]);
  *(_QWORD *)&v115[34] = anon_73fe86e94af803e79a7413c597bf8ca8_49_llvm_2470886751594806832;
  *((_QWORD *)&v115[34] + 1) = 4LL;
  BYTE12(v115[36]) = 1;
  *(_QWORD *)&v116[0] = aPattern;
  *((_QWORD *)&v116[0] + 1) = 7LL;
  clap_builder::builder::arg::Arg::value_names(v432, v115);
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aDoNotListImpli, 75LL);
  v57 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v432[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v432[27] + 8);
  *((_QWORD *)&v432[27] + 1) = v57;
  v432[28] = v113;
  memcpy(v115, v432, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v507, v115);
  memcpy(v506, v507, sizeof(v506));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v116);
  *(_QWORD *)&v116[33] = anon_73fe86e94af803e79a7413c597bf8ca8_50_llvm_2470886751594806832;
  *((_QWORD *)&v116[33] + 1) = 6LL;
  memcpy(v115, v116, 0x220uLL);
  v115[35] = v116[35];
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v116[36] + 13);
  HIBYTE(v115[36]) = HIBYTE(v116[36]);
  *(_QWORD *)&v115[34] = anon_73fe86e94af803e79a7413c597bf8ca8_50_llvm_2470886751594806832;
  *((_QWORD *)&v115[34] + 1) = 6LL;
  LODWORD(v115[36]) = 73;
  *(_QWORD *)((char *)&v115[36] + 4) = *(_QWORD *)((char *)&v116[36] + 4);
  BYTE12(v115[36]) = 1;
  *(_QWORD *)&v116[0] = aPattern;
  *((_QWORD *)&v116[0] + 1) = 7LL;
  clap_builder::builder::arg::Arg::value_names(v433, v115);
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aDoNotListImpli_0, 50LL);
  v58 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v433[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v433[27] + 8);
  *((_QWORD *)&v433[27] + 1) = v58;
  v433[28] = v113;
  memcpy(v115, v433, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v506, v115);
  memcpy(v505, v506, sizeof(v505));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_39_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 14LL;
  memcpy(v349, v115, 0x220uLL);
  *(_OWORD *)&v349[560] = v115[35];
  *(_QWORD *)&v349[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v350 = HIDWORD(v115[36]);
  *(_QWORD *)&v349[544] = anon_73fe86e94af803e79a7413c597bf8ca8_39_llvm_2470886751594806832;
  *(_QWORD *)&v349[552] = 14LL;
  *(_DWORD *)&v349[576] = 66;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aIgnoreEntriesW, 32LL);
  v59 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v349[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v349[440]);
  *(_QWORD *)&v349[440] = v59;
  *(_OWORD *)&v349[448] = v113;
  memcpy(v115, v349, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v350 + 1);
  HIBYTE(v115[36]) = HIBYTE(v350);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v505, v115);
  memcpy(v504, v505, sizeof(v504));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_37_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 4LL;
  memcpy(v392, v115, 0x220uLL);
  v392[35] = v115[35];
  v392[36] = v115[36];
  *(_QWORD *)&v392[34] = anon_73fe86e94af803e79a7413c597bf8ca8_37_llvm_2470886751594806832;
  *((_QWORD *)&v392[34] + 1) = 4LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aSortByFieldNam, 79LL);
  v60 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v392[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v392[27] + 8);
  *((_QWORD *)&v392[27] + 1) = v60;
  v392[28] = v113;
  memcpy(v115, v392, sizeof(v115));
  *(_QWORD *)&v116[0] = aField;
  *((_QWORD *)&v116[0] + 1) = 5LL;
  clap_builder::builder::arg::Arg::value_names(v420, v115);
  *(_QWORD *)&v115[0] = aName;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = aNone;
  *((_QWORD *)&v115[1] + 1) = 4LL;
  *(_QWORD *)&v115[2] = anon_73fe86e94af803e79a7413c597bf8ca8_38_llvm_2470886751594806832;
  *((_QWORD *)&v115[2] + 1) = 4LL;
  *(_QWORD *)&v115[3] = anon_3be94dd0f3faa6e1be050a424a444ce8_22_llvm_3153282441382346823;
  *((_QWORD *)&v115[3] + 1) = 4LL;
  *(_QWORD *)&v115[4] = aVersion;
  *((_QWORD *)&v115[4] + 1) = 7LL;
  *(_QWORD *)&v115[5] = aExtension;
  *((_QWORD *)&v115[5] + 1) = 9LL;
  *(_QWORD *)&v115[6] = aWidth;
  *((_QWORD *)&v115[6] + 1) = 5LL;
  *(_QWORD *)&v115[7] = 0LL;
  *((_QWORD *)&v115[7] + 1) = 7LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v116,
    v115);
  v330 = v116[0];
  v331 = *(_QWORD *)&v116[1];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v115, &v330);
  v61 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 5LL )
    v115[0] = v116[0];
  if ( v420[10] >= 4uLL && v420[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v420[11]);
  v420[10] = v61;
  *(_OWORD *)&v420[11] = v115[0];
  memcpy(v455, v420, 0x248uLL);
  v455[146] = v421 | 0x80;
  v455[147] = v422;
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_37_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = anon_67430bfcc3c4a58d9404b61b13f0b7af_12_llvm_8600737904036372337;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_67430bfcc3c4a58d9404b61b13f0b7af_13_llvm_8600737904036372337;
  *((_QWORD *)&v115[2] + 1) = 1LL;
  *(_QWORD *)&v115[3] = anon_67430bfcc3c4a58d9404b61b13f0b7af_14_llvm_8600737904036372337;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_67430bfcc3c4a58d9404b61b13f0b7af_15_llvm_8600737904036372337;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = anon_67430bfcc3c4a58d9404b61b13f0b7af_16_llvm_8600737904036372337;
  *((_QWORD *)&v115[5] + 1) = 1LL;
  *(_QWORD *)&v115[6] = 0LL;
  *((_QWORD *)&v115[6] + 1) = 6LL;
  ((void (__fastcall *)(_DWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v455[32], v115);
  memcpy(v115, v455, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v504, v115);
  memcpy(v503, v504, sizeof(v503));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_67430bfcc3c4a58d9404b61b13f0b7af_12_llvm_8600737904036372337;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v406, v115, 0x240uLL);
  *(_QWORD *)((char *)&v406[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v406[36]) = HIDWORD(v115[36]);
  LODWORD(v406[36]) = 83;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aSortByFileSize, 33LL);
  v62 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v406[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v406[27] + 8);
  *((_QWORD *)&v406[27] + 1) = v62;
  v406[28] = v115[0];
  memcpy(v456, v406, sizeof(v456));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_37_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = anon_67430bfcc3c4a58d9404b61b13f0b7af_12_llvm_8600737904036372337;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_67430bfcc3c4a58d9404b61b13f0b7af_13_llvm_8600737904036372337;
  *((_QWORD *)&v115[2] + 1) = 1LL;
  *(_QWORD *)&v115[3] = anon_67430bfcc3c4a58d9404b61b13f0b7af_14_llvm_8600737904036372337;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_67430bfcc3c4a58d9404b61b13f0b7af_15_llvm_8600737904036372337;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = anon_67430bfcc3c4a58d9404b61b13f0b7af_16_llvm_8600737904036372337;
  *((_QWORD *)&v115[5] + 1) = 1LL;
  *(_QWORD *)&v115[6] = 0LL;
  *((_QWORD *)&v115[6] + 1) = 6LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v456[128], v115);
  memcpy(v115, v456, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v456[589];
  HIBYTE(v115[36]) = v456[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v503, v115);
  memcpy(v502, v503, sizeof(v502));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_67430bfcc3c4a58d9404b61b13f0b7af_13_llvm_8600737904036372337;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v407, v115, 0x240uLL);
  *(_QWORD *)((char *)&v407[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v407[36]) = HIDWORD(v115[36]);
  LODWORD(v407[36]) = 116;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aSortByModifica, 67LL);
  v63 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v407[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v407[27] + 8);
  *((_QWORD *)&v407[27] + 1) = v63;
  v407[28] = v115[0];
  memcpy(v457, v407, sizeof(v457));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_37_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = anon_67430bfcc3c4a58d9404b61b13f0b7af_12_llvm_8600737904036372337;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_67430bfcc3c4a58d9404b61b13f0b7af_13_llvm_8600737904036372337;
  *((_QWORD *)&v115[2] + 1) = 1LL;
  *(_QWORD *)&v115[3] = anon_67430bfcc3c4a58d9404b61b13f0b7af_14_llvm_8600737904036372337;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_67430bfcc3c4a58d9404b61b13f0b7af_15_llvm_8600737904036372337;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = anon_67430bfcc3c4a58d9404b61b13f0b7af_16_llvm_8600737904036372337;
  *((_QWORD *)&v115[5] + 1) = 1LL;
  *(_QWORD *)&v115[6] = 0LL;
  *((_QWORD *)&v115[6] + 1) = 6LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v457[128], v115);
  memcpy(v115, v457, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v457[589];
  HIBYTE(v115[36]) = v457[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v502, v115);
  memcpy(v501, v502, sizeof(v501));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_67430bfcc3c4a58d9404b61b13f0b7af_15_llvm_8600737904036372337;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v408, v115, 0x240uLL);
  *(_QWORD *)((char *)&v408[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v408[36]) = HIDWORD(v115[36]);
  LODWORD(v408[36]) = 118;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aNaturalSortOfV, 51LL);
  v64 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v408[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v408[27] + 8);
  *((_QWORD *)&v408[27] + 1) = v64;
  v408[28] = v115[0];
  memcpy(v458, v408, sizeof(v458));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_37_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = anon_67430bfcc3c4a58d9404b61b13f0b7af_12_llvm_8600737904036372337;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_67430bfcc3c4a58d9404b61b13f0b7af_13_llvm_8600737904036372337;
  *((_QWORD *)&v115[2] + 1) = 1LL;
  *(_QWORD *)&v115[3] = anon_67430bfcc3c4a58d9404b61b13f0b7af_14_llvm_8600737904036372337;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_67430bfcc3c4a58d9404b61b13f0b7af_15_llvm_8600737904036372337;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = anon_67430bfcc3c4a58d9404b61b13f0b7af_16_llvm_8600737904036372337;
  *((_QWORD *)&v115[5] + 1) = 1LL;
  *(_QWORD *)&v115[6] = 0LL;
  *((_QWORD *)&v115[6] + 1) = 6LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v458[128], v115);
  memcpy(v115, v458, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v458[589];
  HIBYTE(v115[36]) = v458[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v501, v115);
  memcpy(v500, v501, sizeof(v500));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_67430bfcc3c4a58d9404b61b13f0b7af_16_llvm_8600737904036372337;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v409, v115, 0x240uLL);
  *(_QWORD *)((char *)&v409[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v409[36]) = HIDWORD(v115[36]);
  LODWORD(v409[36]) = 88;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aSortAlphabetic, 39LL);
  v65 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v409[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v409[27] + 8);
  *((_QWORD *)&v409[27] + 1) = v65;
  v409[28] = v115[0];
  memcpy(v459, v409, sizeof(v459));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_37_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = anon_67430bfcc3c4a58d9404b61b13f0b7af_12_llvm_8600737904036372337;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_67430bfcc3c4a58d9404b61b13f0b7af_13_llvm_8600737904036372337;
  *((_QWORD *)&v115[2] + 1) = 1LL;
  *(_QWORD *)&v115[3] = anon_67430bfcc3c4a58d9404b61b13f0b7af_14_llvm_8600737904036372337;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_67430bfcc3c4a58d9404b61b13f0b7af_15_llvm_8600737904036372337;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = anon_67430bfcc3c4a58d9404b61b13f0b7af_16_llvm_8600737904036372337;
  *((_QWORD *)&v115[5] + 1) = 1LL;
  *(_QWORD *)&v115[6] = 0LL;
  *((_QWORD *)&v115[6] + 1) = 6LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v459[128], v115);
  memcpy(v115, v459, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v459[589];
  HIBYTE(v115[36]) = v459[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v500, v115);
  memcpy(v499, v500, sizeof(v499));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_67430bfcc3c4a58d9404b61b13f0b7af_14_llvm_8600737904036372337;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v410, v115, 0x240uLL);
  *(_QWORD *)((char *)&v410[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v410[36]) = HIDWORD(v115[36]);
  LODWORD(v410[36]) = 85;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aDoNotSortListT, 197LL);
  v66 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v410[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v410[27] + 8);
  *((_QWORD *)&v410[27] + 1) = v66;
  v410[28] = v115[0];
  memcpy(v460, v410, sizeof(v460));
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_37_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = anon_67430bfcc3c4a58d9404b61b13f0b7af_12_llvm_8600737904036372337;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_67430bfcc3c4a58d9404b61b13f0b7af_13_llvm_8600737904036372337;
  *((_QWORD *)&v115[2] + 1) = 1LL;
  *(_QWORD *)&v115[3] = anon_67430bfcc3c4a58d9404b61b13f0b7af_14_llvm_8600737904036372337;
  *((_QWORD *)&v115[3] + 1) = 1LL;
  *(_QWORD *)&v115[4] = anon_67430bfcc3c4a58d9404b61b13f0b7af_15_llvm_8600737904036372337;
  *((_QWORD *)&v115[4] + 1) = 1LL;
  *(_QWORD *)&v115[5] = anon_67430bfcc3c4a58d9404b61b13f0b7af_16_llvm_8600737904036372337;
  *((_QWORD *)&v115[5] + 1) = 1LL;
  *(_QWORD *)&v115[6] = 0LL;
  *((_QWORD *)&v115[6] + 1) = 6LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v460[128], v115);
  memcpy(v115, v460, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v460[589];
  HIBYTE(v115[36]) = v460[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v499, v115);
  memcpy(v498, v499, sizeof(v498));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_3be94dd0f3faa6e1be050a424a444ce8_27_llvm_3153282441382346823;
  *((_QWORD *)&v115[33] + 1) = 11LL;
  memcpy(v373, v115, 0x220uLL);
  v373[35] = v115[35];
  *(_QWORD *)((char *)&v373[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v373[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v373[34] = anon_3be94dd0f3faa6e1be050a424a444ce8_27_llvm_3153282441382346823;
  *((_QWORD *)&v373[34] + 1) = 11LL;
  LODWORD(v373[36]) = 76;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aWhenShowingFil, 129LL);
  v67 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v373[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v373[27] + 8);
  *((_QWORD *)&v373[27] + 1) = v67;
  v373[28] = v115[0];
  memcpy(v461, v373, sizeof(v461));
  *(_QWORD *)&v115[0] = anon_3be94dd0f3faa6e1be050a424a444ce8_27_llvm_3153282441382346823;
  *((_QWORD *)&v115[0] + 1) = 11LL;
  *(_QWORD *)&v115[1] = anon_3be94dd0f3faa6e1be050a424a444ce8_29_llvm_3153282441382346823;
  *((_QWORD *)&v115[1] + 1) = 39LL;
  *(_QWORD *)&v115[2] = anon_3be94dd0f3faa6e1be050a424a444ce8_28_llvm_3153282441382346823;
  *((_QWORD *)&v115[2] + 1) = 24LL;
  *(_QWORD *)&v115[3] = 0LL;
  *((_QWORD *)&v115[3] + 1) = 3LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v461[128], v115);
  memcpy(v115, v461, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v461[589];
  HIBYTE(v115[36]) = v461[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v498, v115);
  memcpy(v497, v498, sizeof(v497));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_3be94dd0f3faa6e1be050a424a444ce8_29_llvm_3153282441382346823;
  *((_QWORD *)&v115[33] + 1) = 39LL;
  memcpy(v393, v115, 0x220uLL);
  v393[35] = v115[35];
  v393[36] = v115[36];
  *(_QWORD *)&v393[34] = anon_3be94dd0f3faa6e1be050a424a444ce8_29_llvm_3153282441382346823;
  *((_QWORD *)&v393[34] + 1) = 39LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aDoNotFollowSym, 100LL);
  v68 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v393[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v393[27] + 8);
  *((_QWORD *)&v393[27] + 1) = v68;
  v393[28] = v115[0];
  memcpy(v462, v393, sizeof(v462));
  *(_QWORD *)&v115[0] = anon_3be94dd0f3faa6e1be050a424a444ce8_27_llvm_3153282441382346823;
  *((_QWORD *)&v115[0] + 1) = 11LL;
  *(_QWORD *)&v115[1] = anon_3be94dd0f3faa6e1be050a424a444ce8_29_llvm_3153282441382346823;
  *((_QWORD *)&v115[1] + 1) = 39LL;
  *(_QWORD *)&v115[2] = anon_3be94dd0f3faa6e1be050a424a444ce8_28_llvm_3153282441382346823;
  *((_QWORD *)&v115[2] + 1) = 24LL;
  *(_QWORD *)&v115[3] = 0LL;
  *((_QWORD *)&v115[3] + 1) = 3LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v462[128], v115);
  memcpy(v115, v462, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v462[589];
  HIBYTE(v115[36]) = v462[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v497, v115);
  memcpy(v496, v497, sizeof(v496));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_3be94dd0f3faa6e1be050a424a444ce8_28_llvm_3153282441382346823;
  *((_QWORD *)&v115[33] + 1) = 24LL;
  memcpy(v374, v115, 0x220uLL);
  v374[35] = v115[35];
  *(_QWORD *)((char *)&v374[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v374[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v374[34] = anon_3be94dd0f3faa6e1be050a424a444ce8_28_llvm_3153282441382346823;
  *((_QWORD *)&v374[34] + 1) = 24LL;
  LODWORD(v374[36]) = 72;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aDoNotFollowSym_0, 67LL);
  v69 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v374[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v374[27] + 8);
  *((_QWORD *)&v374[27] + 1) = v69;
  v374[28] = v115[0];
  memcpy(v463, v374, sizeof(v463));
  *(_QWORD *)&v115[0] = anon_3be94dd0f3faa6e1be050a424a444ce8_27_llvm_3153282441382346823;
  *((_QWORD *)&v115[0] + 1) = 11LL;
  *(_QWORD *)&v115[1] = anon_3be94dd0f3faa6e1be050a424a444ce8_29_llvm_3153282441382346823;
  *((_QWORD *)&v115[1] + 1) = 39LL;
  *(_QWORD *)&v115[2] = anon_3be94dd0f3faa6e1be050a424a444ce8_28_llvm_3153282441382346823;
  *((_QWORD *)&v115[2] + 1) = 24LL;
  *(_QWORD *)&v115[3] = 0LL;
  *((_QWORD *)&v115[3] + 1) = 3LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v463[128], v115);
  memcpy(v115, v463, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v463[589];
  HIBYTE(v115[36]) = v463[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v496, v115);
  memcpy(v495, v496, sizeof(v495));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_35_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 8LL;
  memcpy(v351, v115, 0x220uLL);
  *(_OWORD *)&v351[560] = v115[35];
  *(_QWORD *)&v351[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v352 = HIDWORD(v115[36]);
  *(_QWORD *)&v351[544] = anon_73fe86e94af803e79a7413c597bf8ca8_35_llvm_2470886751594806832;
  *(_QWORD *)&v351[552] = 8LL;
  *(_DWORD *)&v351[576] = 71;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aDoNotShowGroup, 33LL);
  v70 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v351[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v351[440]);
  *(_QWORD *)&v351[440] = v70;
  *(_OWORD *)&v351[448] = v113;
  memcpy(v115, v351, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v352 + 1);
  HIBYTE(v115[36]) = HIBYTE(v352);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v495, v115);
  memcpy(v494, v495, sizeof(v494));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_34_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 6LL;
  memcpy(v375, v115, 0x220uLL);
  *(_OWORD *)&v375[560] = v115[35];
  *(_OWORD *)&v375[576] = v115[36];
  *(_QWORD *)&v375[544] = anon_73fe86e94af803e79a7413c597bf8ca8_34_llvm_2470886751594806832;
  *(_QWORD *)&v375[552] = 6LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aShowAuthorInLo, 97LL);
  v71 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v375[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v375[440]);
  *(_QWORD *)&v375[440] = v71;
  *(_OWORD *)&v375[448] = v113;
  memcpy(v115, v375, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v375[589];
  HIBYTE(v115[36]) = v375[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v494, v115);
  memcpy(v493, v494, sizeof(v493));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_56a86b1069743e99bc79dbf4ab213c19_8_llvm_18389660236208733448;
  *((_QWORD *)&v115[33] + 1) = 3LL;
  memcpy(v427, v115, 0x220uLL);
  v427[35] = v115[35];
  *(_QWORD *)((char *)&v427[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v427[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v427[34] = anon_56a86b1069743e99bc79dbf4ab213c19_8_llvm_18389660236208733448;
  *((_QWORD *)&v427[34] + 1) = 3LL;
  LODWORD(v427[36]) = 97;
  *(_QWORD *)&v115[0] = anon_56a86b1069743e99bc79dbf4ab213c19_8_llvm_18389660236208733448;
  *((_QWORD *)&v115[0] + 1) = 3LL;
  *(_QWORD *)&v115[1] = anon_56a86b1069743e99bc79dbf4ab213c19_9_llvm_18389660236208733448;
  *((_QWORD *)&v115[1] + 1) = 10LL;
  *(_QWORD *)&v115[2] = 0LL;
  *((_QWORD *)&v115[2] + 1) = 2LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v427[8], v115);
  memcpy(v423, v427, sizeof(v423));
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aDoNotIgnoreHid, 66LL);
  v72 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v423[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v423[27] + 8);
  *((_QWORD *)&v423[27] + 1) = v72;
  v423[28] = v113;
  memcpy(v115, v423, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v423[36] + 13);
  HIBYTE(v115[36]) = HIBYTE(v423[36]);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v493, v115);
  memcpy(v492, v493, sizeof(v492));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_56a86b1069743e99bc79dbf4ab213c19_9_llvm_18389660236208733448;
  *((_QWORD *)&v115[33] + 1) = 10LL;
  memcpy(v428, v115, 0x220uLL);
  v428[35] = v115[35];
  *(_QWORD *)((char *)&v428[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v428[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v428[34] = anon_56a86b1069743e99bc79dbf4ab213c19_9_llvm_18389660236208733448;
  *((_QWORD *)&v428[34] + 1) = 10LL;
  LODWORD(v428[36]) = 65;
  *(_QWORD *)&v115[0] = anon_56a86b1069743e99bc79dbf4ab213c19_8_llvm_18389660236208733448;
  *((_QWORD *)&v115[0] + 1) = 3LL;
  *(_QWORD *)&v115[1] = anon_56a86b1069743e99bc79dbf4ab213c19_9_llvm_18389660236208733448;
  *((_QWORD *)&v115[1] + 1) = 10LL;
  *(_QWORD *)&v115[2] = 0LL;
  *((_QWORD *)&v115[2] + 1) = 2LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v428[8], v115);
  memcpy(v424, v428, sizeof(v424));
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aInADirectoryDo, 91LL);
  v73 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v424[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v424[27] + 8);
  *((_QWORD *)&v424[27] + 1) = v73;
  v424[28] = v113;
  memcpy(v115, v424, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v424[36] + 13);
  HIBYTE(v115[36]) = HIBYTE(v424[36]);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v492, v115);
  memcpy(v491, v492, sizeof(v491));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_40_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 9LL;
  memcpy(v353, v115, 0x220uLL);
  *(_OWORD *)&v353[560] = v115[35];
  *(_QWORD *)&v353[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v354 = HIDWORD(v115[36]);
  *(_QWORD *)&v353[544] = anon_73fe86e94af803e79a7413c597bf8ca8_40_llvm_2470886751594806832;
  *(_QWORD *)&v353[552] = 9LL;
  *(_DWORD *)&v353[576] = 100;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aOnlyListTheNam, 243LL);
  v74 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v353[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v353[440]);
  *(_QWORD *)&v353[440] = v74;
  *(_OWORD *)&v353[448] = v113;
  memcpy(v115, v353, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v354 + 1);
  HIBYTE(v115[36]) = HIBYTE(v354);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v491, v115);
  memcpy(v490, v491, sizeof(v490));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_3be94dd0f3faa6e1be050a424a444ce8_24_llvm_3153282441382346823;
  *((_QWORD *)&v115[33] + 1) = 14LL;
  memcpy(v376, v115, 0x220uLL);
  v376[35] = v115[35];
  *(_QWORD *)((char *)&v376[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v376[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v376[34] = anon_3be94dd0f3faa6e1be050a424a444ce8_24_llvm_3153282441382346823;
  *((_QWORD *)&v376[34] + 1) = 14LL;
  LODWORD(v376[36]) = 104;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aPrintHumanRead, 51LL);
  v75 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v376[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v376[27] + 8);
  *((_QWORD *)&v376[27] + 1) = v75;
  v376[28] = v115[0];
  memcpy(v464, v376, sizeof(v464));
  *(_QWORD *)&v115[0] = anon_3be94dd0f3faa6e1be050a424a444ce8_23_llvm_3153282441382346823;
  *((_QWORD *)&v115[0] + 1) = 10LL;
  *(_QWORD *)&v115[1] = anon_3be94dd0f3faa6e1be050a424a444ce8_25_llvm_3153282441382346823;
  *((_QWORD *)&v115[1] + 1) = 2LL;
  *(_QWORD *)&v115[2] = 0LL;
  *((_QWORD *)&v115[2] + 1) = 2LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v464[128], v115);
  memcpy(v115, v464, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v464[589];
  HIBYTE(v115[36]) = v464[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v490, v115);
  memcpy(v489, v490, sizeof(v489));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_3be94dd0f3faa6e1be050a424a444ce8_26_llvm_3153282441382346823;
  *((_QWORD *)&v115[33] + 1) = 9LL;
  memcpy(v355, v115, 0x220uLL);
  *(_OWORD *)&v355[560] = v115[35];
  *(_QWORD *)&v355[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v356 = HIDWORD(v115[36]);
  *(_QWORD *)&v355[544] = anon_3be94dd0f3faa6e1be050a424a444ce8_26_llvm_3153282441382346823;
  *(_QWORD *)&v355[552] = 9LL;
  *(_DWORD *)&v355[576] = 107;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aDefaultTo1024B, 93LL);
  v76 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v355[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v355[440]);
  *(_QWORD *)&v355[440] = v76;
  *(_OWORD *)&v355[448] = v113;
  memcpy(v115, v355, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v356 + 1);
  HIBYTE(v115[36]) = HIBYTE(v356);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v489, v115);
  memcpy(v488, v489, sizeof(v488));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_3be94dd0f3faa6e1be050a424a444ce8_25_llvm_3153282441382346823;
  *((_QWORD *)&v115[33] + 1) = 2LL;
  memcpy(v394, v115, 0x220uLL);
  v394[35] = v115[35];
  v394[36] = v115[36];
  *(_QWORD *)&v394[34] = anon_3be94dd0f3faa6e1be050a424a444ce8_25_llvm_3153282441382346823;
  *((_QWORD *)&v394[34] + 1) = 2LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aPrintHumanRead_0, 69LL);
  v77 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v394[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v394[27] + 8);
  *((_QWORD *)&v394[27] + 1) = v77;
  v394[28] = v115[0];
  memcpy(v465, v394, sizeof(v465));
  *(_QWORD *)&v115[0] = anon_3be94dd0f3faa6e1be050a424a444ce8_23_llvm_3153282441382346823;
  *((_QWORD *)&v115[0] + 1) = 10LL;
  *(_QWORD *)&v115[1] = anon_3be94dd0f3faa6e1be050a424a444ce8_24_llvm_3153282441382346823;
  *((_QWORD *)&v115[1] + 1) = 14LL;
  *(_QWORD *)&v115[2] = 0LL;
  *((_QWORD *)&v115[2] + 1) = 2LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v465[128], v115);
  memcpy(v115, v465, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v465[589];
  HIBYTE(v115[36]) = v465[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v488, v115);
  memcpy(v487, v488, sizeof(v487));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v116);
  *(_QWORD *)&v116[33] = anon_3be94dd0f3faa6e1be050a424a444ce8_23_llvm_3153282441382346823;
  *((_QWORD *)&v116[33] + 1) = 10LL;
  memcpy(v115, v116, 0x220uLL);
  v115[35] = v116[35];
  *(_QWORD *)&v115[36] = *(_QWORD *)&v116[36];
  *(_QWORD *)&v115[34] = anon_3be94dd0f3faa6e1be050a424a444ce8_23_llvm_3153282441382346823;
  *((_QWORD *)&v115[34] + 1) = 10LL;
  *((_QWORD *)&v115[36] + 1) = *((_QWORD *)&v116[36] + 1) | 0x80LL;
  *(_QWORD *)&v116[0] = aBlockSize;
  *((_QWORD *)&v116[0] + 1) = 10LL;
  clap_builder::builder::arg::Arg::value_names(v434, v115);
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aScaleSizesByBl, 44LL);
  v78 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v434[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v434[27] + 8);
  *((_QWORD *)&v434[27] + 1) = v78;
  v434[28] = v115[0];
  memcpy(v531, v434, sizeof(v531));
  *(_QWORD *)&v115[0] = anon_3be94dd0f3faa6e1be050a424a444ce8_25_llvm_3153282441382346823;
  *((_QWORD *)&v115[0] + 1) = 2LL;
  *(_QWORD *)&v115[1] = anon_3be94dd0f3faa6e1be050a424a444ce8_24_llvm_3153282441382346823;
  *((_QWORD *)&v115[1] + 1) = 14LL;
  *(_QWORD *)&v115[2] = 0LL;
  *((_QWORD *)&v115[2] + 1) = 2LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v531[8], v115);
  memcpy(v115, v531, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v487, v115);
  memcpy(v486, v487, sizeof(v486));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_41_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 5LL;
  memcpy(v357, v115, 0x220uLL);
  *(_OWORD *)&v357[560] = v115[35];
  *(_QWORD *)&v357[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v358 = HIDWORD(v115[36]);
  *(_QWORD *)&v357[544] = anon_73fe86e94af803e79a7413c597bf8ca8_41_llvm_2470886751594806832;
  *(_QWORD *)&v357[552] = 5LL;
  *(_DWORD *)&v357[576] = 105;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aPrintTheIndexN, 35LL);
  v79 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v357[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v357[440]);
  *(_QWORD *)&v357[440] = v79;
  *(_OWORD *)&v357[448] = v113;
  memcpy(v115, v357, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v358 + 1);
  HIBYTE(v115[36]) = HIBYTE(v358);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v486, v115);
  memcpy(v485, v486, sizeof(v485));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_42_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 7LL;
  memcpy(v359, v115, 0x220uLL);
  *(_OWORD *)&v359[560] = v115[35];
  *(_QWORD *)&v359[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v360 = HIDWORD(v115[36]);
  *(_QWORD *)&v359[544] = anon_73fe86e94af803e79a7413c597bf8ca8_42_llvm_2470886751594806832;
  *(_QWORD *)&v359[552] = 7LL;
  *(_DWORD *)&v359[576] = 114;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aReverseWhateve, 131LL);
  v80 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v359[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v359[440]);
  *(_QWORD *)&v359[440] = v80;
  *(_OWORD *)&v359[448] = v113;
  memcpy(v115, v359, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v360 + 1);
  HIBYTE(v115[36]) = HIBYTE(v360);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v485, v115);
  memcpy(v484, v485, sizeof(v484));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_43_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 9LL;
  memcpy(v361, v115, 0x220uLL);
  *(_OWORD *)&v361[560] = v115[35];
  *(_QWORD *)&v361[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v362 = HIDWORD(v115[36]);
  *(_QWORD *)&v361[544] = anon_73fe86e94af803e79a7413c597bf8ca8_43_llvm_2470886751594806832;
  *(_QWORD *)&v361[552] = 9LL;
  *(_DWORD *)&v361[576] = 82;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aListTheContent, 49LL);
  v81 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v361[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v361[440]);
  *(_QWORD *)&v361[440] = v81;
  *(_OWORD *)&v361[448] = v113;
  memcpy(v115, v361, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v362 + 1);
  HIBYTE(v115[36]) = HIBYTE(v362);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v484, v115);
  memcpy(v483, v484, sizeof(v483));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_33_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 5LL;
  memcpy(v377, v115, 0x220uLL);
  v377[35] = v115[35];
  *(_QWORD *)((char *)&v377[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v377[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v377[34] = anon_73fe86e94af803e79a7413c597bf8ca8_33_llvm_2470886751594806832;
  *((_QWORD *)&v377[34] + 1) = 5LL;
  LODWORD(v377[36]) = 119;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aAssumeThatTheT, 46LL);
  v82 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v377[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v377[27] + 8);
  *((_QWORD *)&v377[27] + 1) = v82;
  v377[28] = v113;
  memcpy(v115, v377, sizeof(v115));
  *(_QWORD *)&v116[0] = aCols;
  *((_QWORD *)&v116[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v535, v115);
  memcpy(v115, v535, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v483, v115);
  memcpy(v482, v483, sizeof(v482));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_3be94dd0f3faa6e1be050a424a444ce8_22_llvm_3153282441382346823;
  *((_QWORD *)&v115[33] + 1) = 4LL;
  memcpy(v363, v115, 0x220uLL);
  *(_OWORD *)&v363[560] = v115[35];
  *(_QWORD *)&v363[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v364 = HIDWORD(v115[36]);
  *(_QWORD *)&v363[544] = anon_3be94dd0f3faa6e1be050a424a444ce8_22_llvm_3153282441382346823;
  *(_QWORD *)&v363[552] = 4LL;
  *(_DWORD *)&v363[576] = 115;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aPrintTheAlloca, 48LL);
  v83 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v363[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v363[440]);
  *(_QWORD *)&v363[440] = v83;
  *(_OWORD *)&v363[448] = v113;
  memcpy(v115, v363, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v364 + 1);
  HIBYTE(v115[36]) = HIBYTE(v364);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v482, v115);
  memcpy(v481, v482, sizeof(v481));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_44_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 5LL;
  memcpy(v395, v115, 0x220uLL);
  v395[35] = v115[35];
  v395[36] = v115[36];
  *(_QWORD *)&v395[34] = anon_73fe86e94af803e79a7413c597bf8ca8_44_llvm_2470886751594806832;
  *((_QWORD *)&v395[34] + 1) = 5LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aColorOutputBas, 32LL);
  v84 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v395[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v395[27] + 8);
  *((_QWORD *)&v395[27] + 1) = v84;
  v395[28] = v115[0];
  memcpy(v411, v395, sizeof(v411));
  *(_QWORD *)&v225 = aAlways;
  *((_QWORD *)&v225 + 1) = 6LL;
  v223 = 0x8000000000000000LL;
  *(_QWORD *)&v221 = 0LL;
  *((_QWORD *)&v221 + 1) = 8LL;
  v222 = 0LL;
  LOBYTE(v226) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v221);
  v85 = *((_QWORD *)&v221 + 1);
  **((_QWORD **)&v221 + 1) = aYes;
  *(_QWORD *)(v85 + 8) = 3LL;
  v222 = 1LL;
  v142 = 1LL;
  v143 = v223;
  v141 = v221;
  v144 = v224;
  v145 = v225;
  v146 = v226;
  if ( (_QWORD)v221 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v141);
  v86 = *((_QWORD *)&v141 + 1);
  *(_QWORD *)(*((_QWORD *)&v141 + 1) + 16LL) = &unk_3968C;
  *(_QWORD *)(v86 + 24) = 5LL;
  v142 = 2LL;
  v302 = v141;
  v304 = v144;
  v305 = v145;
  v306 = v146;
  v303 = __PAIR128__(v143, 2LL);
  *(_QWORD *)&v231 = aAuto;
  *((_QWORD *)&v231 + 1) = 4LL;
  v229 = 0x8000000000000000LL;
  *(_QWORD *)&v227 = 0LL;
  *((_QWORD *)&v227 + 1) = 8LL;
  v228 = 0LL;
  LOBYTE(v232) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v227);
  v87 = *((_QWORD *)&v227 + 1);
  **((_QWORD **)&v227 + 1) = aTty;
  *(_QWORD *)(v87 + 8) = 3LL;
  v228 = 1LL;
  v148 = 1LL;
  v149 = v229;
  v147 = v227;
  v150 = v230;
  v151 = v231;
  v152 = v232;
  if ( (_QWORD)v227 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v147);
  v88 = *((_QWORD *)&v147 + 1);
  *(_QWORD *)(*((_QWORD *)&v147 + 1) + 16LL) = &unk_39694;
  *(_QWORD *)(v88 + 24) = 6LL;
  v148 = 2LL;
  v307 = v147;
  v309 = v150;
  v310 = v151;
  v311 = v152;
  v308 = __PAIR128__(v149, 2LL);
  *(_QWORD *)&v237 = aNever;
  *((_QWORD *)&v237 + 1) = 5LL;
  v235 = 0x8000000000000000LL;
  *(_QWORD *)&v233 = 0LL;
  *((_QWORD *)&v233 + 1) = 8LL;
  v234 = 0LL;
  LOBYTE(v238) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v233);
  v89 = *((_QWORD *)&v233 + 1);
  **((_QWORD **)&v233 + 1) = aNo_0;
  *(_QWORD *)(v89 + 8) = 2LL;
  v234 = 1LL;
  v154 = 1LL;
  v155 = v235;
  v153 = v233;
  v156 = v236;
  v157 = v237;
  v158 = v238;
  if ( (_QWORD)v233 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v153);
  v90 = *((_QWORD *)&v153 + 1);
  *(_QWORD *)(*((_QWORD *)&v153 + 1) + 16LL) = aNone;
  *(_QWORD *)(v90 + 24) = 4LL;
  v154 = 2LL;
  v342[9] = v153;
  v342[11] = v156;
  v342[12] = v157;
  *(_QWORD *)&v342[13] = v158;
  v342[10] = __PAIR128__(v155, 2LL);
  v342[0] = v302;
  v342[1] = v303;
  v342[2] = v304;
  v342[3] = v305;
  *(_QWORD *)&v342[4] = v306;
  *((_QWORD *)&v342[8] + 1) = v311;
  *(_OWORD *)((char *)&v342[7] + 8) = v310;
  *(_OWORD *)((char *)&v342[6] + 8) = v309;
  *(_OWORD *)((char *)&v342[5] + 8) = v308;
  *(_OWORD *)((char *)&v342[4] + 8) = v307;
  memcpy(&v115[1], v342, 0xD8uLL);
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 3LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v116,
    v115);
  v332 = v116[0];
  v333 = *(_QWORD *)&v116[1];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v115, &v332);
  v91 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 5LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v411[5] >= 4uLL && *(_QWORD *)&v411[5] != 5LL )
    ((void (__fastcall *)(char *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)((char *)&v411[5] + 8);
  *(_QWORD *)&v411[5] = v91;
  *(_OWORD *)((char *)&v411[5] + 8) = v113;
  v115[0] = v411[0];
  memcpy((char *)&v115[2] + 8, (char *)&v411[2] + 8, 0x220uLL);
  v115[1] = 1uLL;
  *(_QWORD *)&v115[2] = 1LL;
  *((_QWORD *)&v115[36] + 1) = *((_QWORD *)&v411[36] + 1) | 0x80LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v481, v115);
  memcpy(v480, v481, sizeof(v480));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_46_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 15LL;
  memcpy(v396, v115, 0x220uLL);
  v396[35] = v115[35];
  v396[36] = v115[36];
  *(_QWORD *)&v396[34] = anon_73fe86e94af803e79a7413c597bf8ca8_46_llvm_2470886751594806832;
  *((_QWORD *)&v396[34] + 1) = 15LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aAppendIndicato, 116LL);
  v92 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v396[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v396[27] + 8);
  *((_QWORD *)&v396[27] + 1) = v92;
  v396[28] = v115[0];
  memcpy(v435, v396, sizeof(v435));
  *(_QWORD *)&v115[0] = aNone;
  *((_QWORD *)&v115[0] + 1) = 4LL;
  *(_QWORD *)&v115[1] = aSlash;
  *((_QWORD *)&v115[1] + 1) = 5LL;
  *(_QWORD *)&v115[2] = aFileType;
  *((_QWORD *)&v115[2] + 1) = 9LL;
  *(_QWORD *)&v115[3] = anon_a470bffdfb79839f15e930f2b0f6282f_33_llvm_1637152639412489551;
  *((_QWORD *)&v115[3] + 1) = 8LL;
  *(_QWORD *)&v115[4] = 0LL;
  *((_QWORD *)&v115[4] + 1) = 4LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v116,
    v115);
  v334 = v116[0];
  v335 = *(_QWORD *)&v116[1];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v115, &v334);
  v93 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 5LL )
    v115[0] = v116[0];
  if ( v435[10] >= 4uLL && v435[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v435[11]);
  v435[10] = v93;
  *(_OWORD *)&v435[11] = v115[0];
  memcpy(v532, v435, sizeof(v532));
  *(_QWORD *)&v115[0] = anon_a470bffdfb79839f15e930f2b0f6282f_32_llvm_1637152639412489551;
  *((_QWORD *)&v115[0] + 1) = 9LL;
  *(_QWORD *)&v115[1] = anon_a470bffdfb79839f15e930f2b0f6282f_31_llvm_1637152639412489551;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_a470bffdfb79839f15e930f2b0f6282f_33_llvm_1637152639412489551;
  *((_QWORD *)&v115[2] + 1) = 8LL;
  *(_QWORD *)&v115[3] = anon_73fe86e94af803e79a7413c597bf8ca8_46_llvm_2470886751594806832;
  *((_QWORD *)&v115[3] + 1) = 15LL;
  *(_QWORD *)&v115[4] = 0LL;
  *((_QWORD *)&v115[4] + 1) = 4LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v532[8], v115);
  memcpy(v115, v532, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v480, v115);
  memcpy(v479, v480, sizeof(v479));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_a470bffdfb79839f15e930f2b0f6282f_33_llvm_1637152639412489551;
  *((_QWORD *)&v115[33] + 1) = 8LL;
  memcpy(v378, v115, 0x220uLL);
  v378[35] = v115[35];
  *(_QWORD *)((char *)&v378[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v378[36]) = HIDWORD(v115[36]);
  *(_QWORD *)&v378[34] = anon_a470bffdfb79839f15e930f2b0f6282f_33_llvm_1637152639412489551;
  *((_QWORD *)&v378[34] + 1) = 8LL;
  LODWORD(v378[36]) = 70;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aAppendACharact, 697LL);
  v94 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v378[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v378[27] + 8);
  *((_QWORD *)&v378[27] + 1) = v94;
  v378[28] = v113;
  memcpy(v115, v378, sizeof(v115));
  *(_QWORD *)&v116[0] = aWhen_0;
  *((_QWORD *)&v116[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v436, v115);
  *(_QWORD *)&v243 = aAlways;
  *((_QWORD *)&v243 + 1) = 6LL;
  v241 = 0x8000000000000000LL;
  *(_QWORD *)&v239 = 0LL;
  *((_QWORD *)&v239 + 1) = 8LL;
  v240 = 0LL;
  LOBYTE(v244) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v239);
  v95 = *((_QWORD *)&v239 + 1);
  **((_QWORD **)&v239 + 1) = aYes;
  *(_QWORD *)(v95 + 8) = 3LL;
  v240 = 1LL;
  v160 = 1LL;
  v161 = v241;
  v159 = v239;
  v162 = v242;
  v163 = v243;
  v164 = v244;
  if ( (_QWORD)v239 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v159);
  v96 = *((_QWORD *)&v159 + 1);
  *(_QWORD *)(*((_QWORD *)&v159 + 1) + 16LL) = &unk_3968C;
  *(_QWORD *)(v96 + 24) = 5LL;
  v160 = 2LL;
  v312 = v159;
  v314 = v162;
  v315 = v163;
  v316 = v164;
  v313 = __PAIR128__(v161, 2LL);
  *(_QWORD *)&v249 = aAuto;
  *((_QWORD *)&v249 + 1) = 4LL;
  v247 = 0x8000000000000000LL;
  *(_QWORD *)&v245 = 0LL;
  *((_QWORD *)&v245 + 1) = 8LL;
  v246 = 0LL;
  LOBYTE(v250) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v245);
  v97 = *((_QWORD *)&v245 + 1);
  **((_QWORD **)&v245 + 1) = aTty;
  *(_QWORD *)(v97 + 8) = 3LL;
  v246 = 1LL;
  v166 = 1LL;
  v167 = v247;
  v165 = v245;
  v168 = v248;
  v169 = v249;
  v170 = v250;
  if ( (_QWORD)v245 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v165);
  v98 = *((_QWORD *)&v165 + 1);
  *(_QWORD *)(*((_QWORD *)&v165 + 1) + 16LL) = &unk_39694;
  *(_QWORD *)(v98 + 24) = 6LL;
  v166 = 2LL;
  v317 = v165;
  v319 = v168;
  v320 = v169;
  v321 = v170;
  v318 = __PAIR128__(v167, 2LL);
  *(_QWORD *)&v255 = aNever;
  *((_QWORD *)&v255 + 1) = 5LL;
  v253 = 0x8000000000000000LL;
  *(_QWORD *)&v251 = 0LL;
  *((_QWORD *)&v251 + 1) = 8LL;
  v252 = 0LL;
  LOBYTE(v256) = 0;
  ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v251);
  v99 = *((_QWORD *)&v251 + 1);
  **((_QWORD **)&v251 + 1) = aNo_0;
  *(_QWORD *)(v99 + 8) = 2LL;
  v252 = 1LL;
  v172 = 1LL;
  v173 = v253;
  v171 = v251;
  v174 = v254;
  v175 = v255;
  v176 = v256;
  if ( (_QWORD)v251 == 1LL )
    ((void (__fastcall *)(__int128 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v171);
  v100 = *((_QWORD *)&v171 + 1);
  *(_QWORD *)(*((_QWORD *)&v171 + 1) + 16LL) = aNone;
  *(_QWORD *)(v100 + 24) = 4LL;
  v172 = 2LL;
  v343[9] = v171;
  v343[11] = v174;
  v343[12] = v175;
  *(_QWORD *)&v343[13] = v176;
  v343[10] = __PAIR128__(v173, 2LL);
  v343[0] = v312;
  v343[1] = v313;
  v343[2] = v314;
  v343[3] = v315;
  *(_QWORD *)&v343[4] = v316;
  *((_QWORD *)&v343[8] + 1) = v321;
  *(_OWORD *)((char *)&v343[7] + 8) = v320;
  *(_OWORD *)((char *)&v343[6] + 8) = v319;
  *(_OWORD *)((char *)&v343[5] + 8) = v318;
  *(_OWORD *)((char *)&v343[4] + 8) = v317;
  memcpy(&v115[1], v343, 0xD8uLL);
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 3LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v116,
    v115);
  v336 = v116[0];
  v337 = *(_QWORD *)&v116[1];
  ((void (__fastcall *)(_OWORD *, __int128 *))clap_builder::builder::value_parser::ValueParser::new)(v115, &v336);
  v101 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 5LL )
    v113 = v116[0];
  if ( v436[10] >= 4uLL && v436[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v436[11]);
  v436[10] = v101;
  *(_OWORD *)&v436[11] = v113;
  memcpy(v115, v436, sizeof(v115));
  *(_QWORD *)&v116[0] = aAlways;
  *((_QWORD *)&v116[0] + 1) = 6LL;
  *(_QWORD *)&v116[1] = 0LL;
  *((_QWORD *)&v116[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v113,
    v116);
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::raw_vec::RawVec<T,A>::current_memory)(v116, &v115[26]);
  if ( *((_QWORD *)&v116[0] + 1) )
    ((void (__fastcall *)(_OWORD *, _QWORD, _QWORD, _QWORD))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
      &v115[27],
      *(_QWORD *)&v116[0],
      *((_QWORD *)&v116[0] + 1),
      *(_QWORD *)&v116[1]);
  *(_QWORD *)&v115[27] = v114;
  v115[26] = v113;
  v426[0] = v115[0];
  memcpy((char *)&v426[2] + 8, (char *)&v115[2] + 8, 0x220uLL);
  v426[1] = 1uLL;
  *(_QWORD *)&v426[2] = 1LL;
  *((_QWORD *)&v426[36] + 1) = *((_QWORD *)&v115[36] + 1) | 0x80LL;
  *(_QWORD *)&v115[0] = anon_a470bffdfb79839f15e930f2b0f6282f_32_llvm_1637152639412489551;
  *((_QWORD *)&v115[0] + 1) = 9LL;
  *(_QWORD *)&v115[1] = anon_a470bffdfb79839f15e930f2b0f6282f_31_llvm_1637152639412489551;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_a470bffdfb79839f15e930f2b0f6282f_33_llvm_1637152639412489551;
  *((_QWORD *)&v115[2] + 1) = 8LL;
  *(_QWORD *)&v115[3] = anon_73fe86e94af803e79a7413c597bf8ca8_46_llvm_2470886751594806832;
  *((_QWORD *)&v115[3] + 1) = 15LL;
  *(_QWORD *)&v115[4] = 0LL;
  *((_QWORD *)&v115[4] + 1) = 4LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v426[8], v115);
  memcpy(v115, v426, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v479, v115);
  memcpy(v478, v479, sizeof(v478));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_a470bffdfb79839f15e930f2b0f6282f_32_llvm_1637152639412489551;
  *((_QWORD *)&v115[33] + 1) = 9LL;
  memcpy(v397, v115, 0x220uLL);
  v397[35] = v115[35];
  v397[36] = v115[36];
  *(_QWORD *)&v397[34] = anon_a470bffdfb79839f15e930f2b0f6282f_32_llvm_1637152639412489551;
  *((_QWORD *)&v397[34] + 1) = 9LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aSameAsClassify, 41LL);
  v102 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v397[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v397[27] + 8);
  *((_QWORD *)&v397[27] + 1) = v102;
  v397[28] = v115[0];
  memcpy(v466, v397, sizeof(v466));
  *(_QWORD *)&v115[0] = anon_a470bffdfb79839f15e930f2b0f6282f_32_llvm_1637152639412489551;
  *((_QWORD *)&v115[0] + 1) = 9LL;
  *(_QWORD *)&v115[1] = anon_a470bffdfb79839f15e930f2b0f6282f_31_llvm_1637152639412489551;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_a470bffdfb79839f15e930f2b0f6282f_33_llvm_1637152639412489551;
  *((_QWORD *)&v115[2] + 1) = 8LL;
  *(_QWORD *)&v115[3] = anon_73fe86e94af803e79a7413c597bf8ca8_46_llvm_2470886751594806832;
  *((_QWORD *)&v115[3] + 1) = 15LL;
  *(_QWORD *)&v115[4] = 0LL;
  *((_QWORD *)&v115[4] + 1) = 4LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v466[128], v115);
  memcpy(v115, v466, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v466[589];
  HIBYTE(v115[36]) = v466[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v478, v115);
  memcpy(v477, v478, sizeof(v477));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_a470bffdfb79839f15e930f2b0f6282f_31_llvm_1637152639412489551;
  *((_QWORD *)&v115[33] + 1) = 1LL;
  memcpy(v412, v115, 0x240uLL);
  *(_QWORD *)((char *)&v412[36] + 4) = *(_QWORD *)((char *)&v115[36] + 4);
  HIDWORD(v412[36]) = HIDWORD(v115[36]);
  LODWORD(v412[36]) = 112;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aAppendIndicato_0, 34LL);
  v103 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v115[0] = v116[0];
  if ( *((_QWORD *)&v412[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v412[27] + 8);
  *((_QWORD *)&v412[27] + 1) = v103;
  v412[28] = v115[0];
  memcpy(v467, v412, sizeof(v467));
  *(_QWORD *)&v115[0] = anon_a470bffdfb79839f15e930f2b0f6282f_32_llvm_1637152639412489551;
  *((_QWORD *)&v115[0] + 1) = 9LL;
  *(_QWORD *)&v115[1] = anon_a470bffdfb79839f15e930f2b0f6282f_31_llvm_1637152639412489551;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  *(_QWORD *)&v115[2] = anon_a470bffdfb79839f15e930f2b0f6282f_33_llvm_1637152639412489551;
  *((_QWORD *)&v115[2] + 1) = 8LL;
  *(_QWORD *)&v115[3] = anon_73fe86e94af803e79a7413c597bf8ca8_46_llvm_2470886751594806832;
  *((_QWORD *)&v115[3] + 1) = 15LL;
  *(_QWORD *)&v115[4] = 0LL;
  *((_QWORD *)&v115[4] + 1) = 4LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v467[128], v115);
  memcpy(v115, v467, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v467[589];
  HIBYTE(v115[36]) = v467[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v477, v115);
  memcpy(v476, v477, sizeof(v476));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_47_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 10LL;
  memcpy(v398, v115, 0x220uLL);
  v398[35] = v115[35];
  v398[36] = v115[36];
  *(_QWORD *)&v398[34] = anon_73fe86e94af803e79a7413c597bf8ca8_47_llvm_2470886751594806832;
  *((_QWORD *)&v398[34] + 1) = 10LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aTimeDateFormat, 46LL);
  v104 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v398[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v398[27] + 8);
  *((_QWORD *)&v398[27] + 1) = v104;
  v398[28] = v113;
  memcpy(v115, v398, sizeof(v115));
  *(_QWORD *)&v116[0] = aTimeStyle;
  *((_QWORD *)&v116[0] + 1) = 10LL;
  clap_builder::builder::arg::Arg::value_names(v437, v115);
  std::env::_var_os(v116, aTimeStyle, 10LL);
  *(_QWORD *)&v115[1] = *(_QWORD *)&v116[1];
  v115[0] = v116[0];
  if ( v437[63] >= v177 )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v437[63]);
  v437[61] = aTimeStyle;
  v437[62] = 10LL;
  v437[65] = *(_QWORD *)&v115[1];
  *(_OWORD *)&v437[63] = v115[0];
  memcpy(v536, v437, sizeof(v536));
  clap_builder::builder::arg::Arg::value_parser(v533, v536);
  *(_QWORD *)&v115[0] = anon_73fe86e94af803e79a7413c597bf8ca8_47_llvm_2470886751594806832;
  *((_QWORD *)&v115[0] + 1) = 10LL;
  *(_QWORD *)&v115[1] = 0LL;
  *((_QWORD *)&v115[1] + 1) = 1LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))alloc::vec::Vec<T,A>::extend_trusted)(&v533[8], v115);
  memcpy(v115, v533, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v476, v115);
  memcpy(v475, v476, sizeof(v475));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_48_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 9LL;
  memcpy(v413, v115, 0x220uLL);
  v413[35] = v115[35];
  v413[36] = v115[36];
  *(_QWORD *)&v413[34] = anon_73fe86e94af803e79a7413c597bf8ca8_48_llvm_2470886751594806832;
  *((_QWORD *)&v413[34] + 1) = 9LL;
  v105 = *(_QWORD *)&v413[9];
  if ( *(_QWORD *)&v413[9] == *(_QWORD *)&v413[8] )
    ((void (__fastcall *)(_OWORD *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v413[8]);
  v106 = *((_QWORD *)&v413[8] + 1);
  v107 = 16 * v105;
  *(_QWORD *)(*((_QWORD *)&v413[8] + 1) + v107) = anon_73fe86e94af803e79a7413c597bf8ca8_48_llvm_2470886751594806832;
  *(_QWORD *)(v106 + v107 + 8) = 9LL;
  *(_QWORD *)&v413[9] = v105 + 1;
  memcpy(v425, v413, sizeof(v425));
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aLikeLTimeStyle, 29LL);
  v108 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *((_QWORD *)&v425[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v425[27] + 8);
  *((_QWORD *)&v425[27] + 1) = v108;
  v425[28] = v113;
  memcpy(v115, v425, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v425[36] + 13);
  HIBYTE(v115[36]) = HIBYTE(v425[36]);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v475, v115);
  memcpy(v474, v475, sizeof(v474));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_51_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 7LL;
  memcpy(v365, v115, 0x220uLL);
  *(_OWORD *)&v365[560] = v115[35];
  *(_QWORD *)&v365[580] = *(_QWORD *)((char *)&v115[36] + 4);
  v366 = HIDWORD(v115[36]);
  *(_QWORD *)&v365[544] = anon_73fe86e94af803e79a7413c597bf8ca8_51_llvm_2470886751594806832;
  *(_QWORD *)&v365[552] = 7LL;
  *(_DWORD *)&v365[576] = 90;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aPrintAnySecuri, 53LL);
  v109 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v365[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v365[440]);
  *(_QWORD *)&v365[440] = v109;
  *(_OWORD *)&v365[448] = v113;
  memcpy(v115, v365, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)((char *)&v366 + 1);
  HIBYTE(v115[36]) = HIBYTE(v366);
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v474, v115);
  memcpy(v473, v474, sizeof(v473));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_52_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 23LL;
  memcpy(v379, v115, 0x220uLL);
  *(_OWORD *)&v379[560] = v115[35];
  *(_OWORD *)&v379[576] = v115[36];
  *(_QWORD *)&v379[544] = anon_73fe86e94af803e79a7413c597bf8ca8_52_llvm_2470886751594806832;
  *(_QWORD *)&v379[552] = 23LL;
  *(_QWORD *)&v115[0] = 0LL;
  *((_QWORD *)&v115[0] + 1) = 1LL;
  *(_QWORD *)&v115[1] = 0LL;
  ((void (__fastcall *)(_OWORD *, const char *, __int64))alloc::string::String::push_str)(v115, aGroupDirectori, 120LL);
  v110 = *(_QWORD *)&v115[0];
  v116[0] = *(_OWORD *)((char *)v115 + 8);
  if ( *(_QWORD *)&v115[0] != 0x8000000000000000LL )
    v113 = v116[0];
  if ( *(_QWORD *)&v379[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v379[440]);
  *(_QWORD *)&v379[440] = v110;
  *(_OWORD *)&v379[448] = v113;
  memcpy(v115, v379, 0x24CuLL);
  *(_WORD *)((char *)&v115[36] + 13) = *(_WORD *)&v379[589];
  HIBYTE(v115[36]) = v379[591];
  BYTE12(v115[36]) = 2;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v473, v115);
  memcpy(v472, v473, sizeof(v472));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v115);
  *(_QWORD *)&v115[33] = anon_73fe86e94af803e79a7413c597bf8ca8_45_llvm_2470886751594806832;
  *((_QWORD *)&v115[33] + 1) = 5LL;
  memcpy(v438, v115, 0x24CuLL);
  WORD2(v438[73]) = 513;
  HIWORD(v438[73]) = HIWORD(v115[36]);
  if ( v438[10] >= 4uLL && v438[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v438[11]);
  v438[10] = 2LL;
  memcpy(v115, v438, sizeof(v115));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v472, v115);
  memcpy(v537, v472, sizeof(v537));
  v111 = v178;
  clap_builder::builder::command::Command::after_help(v178, v537);
  return v111;
}
