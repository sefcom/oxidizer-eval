__int64 __fastcall uu_join::exec(int a1, int a2, int a3, int a4, __int128 *a5, char a6)
{
  char **v6; // rsi
  char v7; // dl
  char v8; // si
  int v9; // r8d
  int v10; // r9d
  int v11; // ecx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // r9d
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  int v26; // r8d
  int v27; // r9d
  int v28; // edx
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // r8d
  int v52; // r9d
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // r8d
  int v60; // r9d
  __int64 v61; // rdx
  struct _Unwind_Exception *v62; // [rsp+0h] [rbp-A08h]
  int v63; // [rsp+0h] [rbp-A08h]
  struct _Unwind_Exception *v64; // [rsp+0h] [rbp-A08h]
  struct _Unwind_Exception *v65; // [rsp+0h] [rbp-A08h]
  struct _Unwind_Exception *v66; // [rsp+0h] [rbp-A08h]
  int v67; // [rsp+8h] [rbp-A00h]
  int v68; // [rsp+8h] [rbp-A00h]
  int v69; // [rsp+8h] [rbp-A00h]
  int v70; // [rsp+8h] [rbp-A00h]
  int v71; // [rsp+8h] [rbp-A00h]
  int v72; // [rsp+10h] [rbp-9F8h]
  int v73; // [rsp+10h] [rbp-9F8h]
  int v74; // [rsp+10h] [rbp-9F8h]
  int v75; // [rsp+18h] [rbp-9F0h]
  int v76; // [rsp+18h] [rbp-9F0h]
  int v77; // [rsp+18h] [rbp-9F0h]
  int v78; // [rsp+20h] [rbp-9E8h]
  int v79; // [rsp+20h] [rbp-9E8h]
  int v80; // [rsp+20h] [rbp-9E8h]
  int v81; // [rsp+28h] [rbp-9E0h]
  int v82; // [rsp+28h] [rbp-9E0h]
  int v83; // [rsp+28h] [rbp-9E0h]
  __int64 v84; // [rsp+28h] [rbp-9E0h]
  int v85; // [rsp+30h] [rbp-9D8h]
  int v86; // [rsp+30h] [rbp-9D8h]
  int v87; // [rsp+30h] [rbp-9D8h]
  __int64 v88; // [rsp+30h] [rbp-9D8h]
  int v89; // [rsp+38h] [rbp-9D0h]
  int v90; // [rsp+38h] [rbp-9D0h]
  int v91; // [rsp+38h] [rbp-9D0h]
  int v92; // [rsp+40h] [rbp-9C8h]
  int v93; // [rsp+40h] [rbp-9C8h]
  int v94; // [rsp+40h] [rbp-9C8h]
  int v95; // [rsp+48h] [rbp-9C0h]
  int v96; // [rsp+48h] [rbp-9C0h]
  int v97; // [rsp+48h] [rbp-9C0h]
  __int64 v98; // [rsp+48h] [rbp-9C0h]
  int v99; // [rsp+50h] [rbp-9B8h]
  int v100; // [rsp+50h] [rbp-9B8h]
  int v101; // [rsp+50h] [rbp-9B8h]
  int v102; // [rsp+58h] [rbp-9B0h]
  int v103; // [rsp+58h] [rbp-9B0h]
  int v104; // [rsp+58h] [rbp-9B0h]
  int v105; // [rsp+60h] [rbp-9A8h]
  int v106; // [rsp+60h] [rbp-9A8h]
  int v107; // [rsp+60h] [rbp-9A8h]
  __int64 v108; // [rsp+60h] [rbp-9A8h]
  int v109; // [rsp+68h] [rbp-9A0h]
  int v110; // [rsp+68h] [rbp-9A0h]
  int v111; // [rsp+68h] [rbp-9A0h]
  int v112; // [rsp+70h] [rbp-998h]
  int v113; // [rsp+70h] [rbp-998h]
  int v114; // [rsp+70h] [rbp-998h]
  int v115; // [rsp+78h] [rbp-990h]
  int v116; // [rsp+78h] [rbp-990h]
  int v117; // [rsp+78h] [rbp-990h]
  int v118; // [rsp+80h] [rbp-988h]
  int v119; // [rsp+80h] [rbp-988h]
  int v120; // [rsp+80h] [rbp-988h]
  __int64 v121; // [rsp+80h] [rbp-988h]
  int v122; // [rsp+88h] [rbp-980h]
  int v123; // [rsp+88h] [rbp-980h]
  int v124; // [rsp+88h] [rbp-980h]
  __int64 v125; // [rsp+88h] [rbp-980h]
  int v126; // [rsp+90h] [rbp-978h]
  int v127; // [rsp+90h] [rbp-978h]
  int v128; // [rsp+90h] [rbp-978h]
  __int64 v129; // [rsp+90h] [rbp-978h]
  int v130; // [rsp+98h] [rbp-970h]
  int v131; // [rsp+98h] [rbp-970h]
  int v132; // [rsp+98h] [rbp-970h]
  int v133; // [rsp+A0h] [rbp-968h]
  int v134; // [rsp+A0h] [rbp-968h]
  int v135; // [rsp+A0h] [rbp-968h]
  int v136; // [rsp+A8h] [rbp-960h]
  int v137; // [rsp+A8h] [rbp-960h]
  int v138; // [rsp+A8h] [rbp-960h]
  __int64 v139; // [rsp+A8h] [rbp-960h]
  int v140; // [rsp+B0h] [rbp-958h]
  char v141; // [rsp+B0h] [rbp-958h]
  int v142; // [rsp+B0h] [rbp-958h]
  __int64 v143; // [rsp+B0h] [rbp-958h]
  int v144; // [rsp+B8h] [rbp-950h]
  int v145; // [rsp+B8h] [rbp-950h]
  int v146; // [rsp+B8h] [rbp-950h]
  int v147; // [rsp+C0h] [rbp-948h]
  int v148; // [rsp+C0h] [rbp-948h]
  int v149; // [rsp+C0h] [rbp-948h]
  int v150; // [rsp+C8h] [rbp-940h]
  int v151; // [rsp+C8h] [rbp-940h]
  int v152; // [rsp+C8h] [rbp-940h]
  int v153; // [rsp+D0h] [rbp-938h]
  int v154; // [rsp+D0h] [rbp-938h]
  int v155; // [rsp+D0h] [rbp-938h]
  int v156; // [rsp+D8h] [rbp-930h]
  int v157; // [rsp+D8h] [rbp-930h]
  int v158; // [rsp+D8h] [rbp-930h]
  char v159; // [rsp+DFh] [rbp-929h]
  int v160; // [rsp+E0h] [rbp-928h]
  int v161; // [rsp+E0h] [rbp-928h]
  int v162; // [rsp+E0h] [rbp-928h]
  __int64 current_key; // [rsp+E0h] [rbp-928h]
  int v164; // [rsp+E8h] [rbp-920h]
  int v165; // [rsp+E8h] [rbp-920h]
  int v166; // [rsp+E8h] [rbp-920h]
  __int64 v167; // [rsp+E8h] [rbp-920h]
  int v168; // [rsp+F0h] [rbp-918h]
  int v169; // [rsp+F0h] [rbp-918h]
  int v170; // [rsp+F0h] [rbp-918h]
  int v171; // [rsp+F8h] [rbp-910h]
  int v172; // [rsp+F8h] [rbp-910h]
  int v173; // [rsp+F8h] [rbp-910h]
  struct _Unwind_Exception *v174; // [rsp+100h] [rbp-908h]
  int v175; // [rsp+100h] [rbp-908h]
  struct _Unwind_Exception *v176; // [rsp+100h] [rbp-908h]
  int v177; // [rsp+108h] [rbp-900h]
  int v178; // [rsp+108h] [rbp-900h]
  int v179; // [rsp+108h] [rbp-900h]
  int v180; // [rsp+110h] [rbp-8F8h]
  int v181; // [rsp+110h] [rbp-8F8h]
  int v182; // [rsp+118h] [rbp-8F0h]
  int v183; // [rsp+118h] [rbp-8F0h]
  int v184; // [rsp+120h] [rbp-8E8h]
  int v185; // [rsp+120h] [rbp-8E8h]
  __int64 v186; // [rsp+120h] [rbp-8E8h]
  int v187; // [rsp+128h] [rbp-8E0h]
  int v188; // [rsp+128h] [rbp-8E0h]
  int v189; // [rsp+130h] [rbp-8D8h]
  int v190; // [rsp+130h] [rbp-8D8h]
  int v191; // [rsp+138h] [rbp-8D0h]
  int v192; // [rsp+138h] [rbp-8D0h]
  int v193; // [rsp+140h] [rbp-8C8h]
  int v194; // [rsp+140h] [rbp-8C8h]
  __int64 v195; // [rsp+140h] [rbp-8C8h]
  int v196; // [rsp+148h] [rbp-8C0h]
  int v197; // [rsp+148h] [rbp-8C0h]
  __int64 v198; // [rsp+148h] [rbp-8C0h]
  int v199; // [rsp+150h] [rbp-8B8h]
  int v200; // [rsp+150h] [rbp-8B8h]
  int v201; // [rsp+158h] [rbp-8B0h]
  int v202; // [rsp+158h] [rbp-8B0h]
  int v203; // [rsp+160h] [rbp-8A8h]
  int v204; // [rsp+160h] [rbp-8A8h]
  int v205; // [rsp+168h] [rbp-8A0h]
  int v206; // [rsp+168h] [rbp-8A0h]
  int v207; // [rsp+170h] [rbp-898h]
  int v208; // [rsp+170h] [rbp-898h]
  __int64 v209; // [rsp+170h] [rbp-898h]
  int v210; // [rsp+178h] [rbp-890h]
  int v211; // [rsp+178h] [rbp-890h]
  __int64 v212; // [rsp+178h] [rbp-890h]
  int v213; // [rsp+180h] [rbp-888h]
  int v214; // [rsp+180h] [rbp-888h]
  int v215; // [rsp+188h] [rbp-880h]
  int v216; // [rsp+188h] [rbp-880h]
  int v217; // [rsp+190h] [rbp-878h]
  int v218; // [rsp+190h] [rbp-878h]
  int v219; // [rsp+198h] [rbp-870h]
  int v220; // [rsp+198h] [rbp-870h]
  struct _Unwind_Exception *v221; // [rsp+1A0h] [rbp-868h]
  struct _Unwind_Exception *v222; // [rsp+1A0h] [rbp-868h]
  int v223; // [rsp+1A8h] [rbp-860h]
  int v224; // [rsp+1A8h] [rbp-860h]
  __int64 v225; // [rsp+1B8h] [rbp-850h]
  __int64 v226; // [rsp+1D0h] [rbp-838h]
  __int64 v227; // [rsp+1D8h] [rbp-830h]
  __int64 line; // [rsp+1F0h] [rbp-818h]
  __int64 v229; // [rsp+200h] [rbp-808h]
  char has_line; // [rsp+20Fh] [rbp-7F9h]
  int v231; // [rsp+210h] [rbp-7F8h]
  char v232; // [rsp+227h] [rbp-7E1h]
  __int64 v233; // [rsp+238h] [rbp-7D0h]
  unsigned int v234; // [rsp+244h] [rbp-7C4h]
  _WORD v238[5]; // [rsp+2A6h] [rbp-762h] BYREF
  __int64 v239; // [rsp+2B0h] [rbp-758h]
  __int64 v240; // [rsp+2B8h] [rbp-750h] BYREF
  int v241[4]; // [rsp+2C0h] [rbp-748h] BYREF
  __int128 v242; // [rsp+2D0h] [rbp-738h]
  __int128 v243; // [rsp+2E0h] [rbp-728h]
  __int128 v244; // [rsp+2F0h] [rbp-718h]
  __int128 v245; // [rsp+300h] [rbp-708h]
  __int128 v246; // [rsp+310h] [rbp-6F8h]
  __int128 v247; // [rsp+328h] [rbp-6E0h] BYREF
  __int128 v248; // [rsp+338h] [rbp-6D0h]
  __int128 v249; // [rsp+348h] [rbp-6C0h]
  __int128 v250; // [rsp+358h] [rbp-6B0h]
  __int128 v251; // [rsp+368h] [rbp-6A0h]
  __int128 v252; // [rsp+378h] [rbp-690h]
  _BYTE v253[104]; // [rsp+388h] [rbp-680h] BYREF
  __int128 v254; // [rsp+3F0h] [rbp-618h]
  __int128 v255; // [rsp+400h] [rbp-608h]
  __int128 v256; // [rsp+410h] [rbp-5F8h]
  __int128 v257; // [rsp+420h] [rbp-5E8h]
  __int128 v258; // [rsp+430h] [rbp-5D8h]
  __int128 v259; // [rsp+440h] [rbp-5C8h]
  int v260[4]; // [rsp+450h] [rbp-5B8h] BYREF
  __int128 v261; // [rsp+460h] [rbp-5A8h]
  __int128 v262; // [rsp+470h] [rbp-598h]
  __int128 v263; // [rsp+480h] [rbp-588h]
  __int128 v264; // [rsp+490h] [rbp-578h]
  __int128 v265; // [rsp+4A0h] [rbp-568h]
  __int128 v266; // [rsp+4B8h] [rbp-550h] BYREF
  __int128 v267; // [rsp+4C8h] [rbp-540h]
  __int128 v268; // [rsp+4D8h] [rbp-530h]
  __int128 v269; // [rsp+4E8h] [rbp-520h]
  __int128 v270; // [rsp+4F8h] [rbp-510h]
  __int128 v271; // [rsp+508h] [rbp-500h]
  _BYTE v272[104]; // [rsp+518h] [rbp-4F0h] BYREF
  __int128 v273; // [rsp+580h] [rbp-488h]
  __int128 v274; // [rsp+590h] [rbp-478h]
  __int128 v275; // [rsp+5A0h] [rbp-468h]
  __int128 v276; // [rsp+5B0h] [rbp-458h]
  __int128 v277; // [rsp+5C0h] [rbp-448h]
  __int128 v278; // [rsp+5D0h] [rbp-438h]
  char v279[4]; // [rsp+5ECh] [rbp-41Ch] BYREF
  __int128 v280; // [rsp+5F0h] [rbp-418h]
  __int64 v281; // [rsp+600h] [rbp-408h]
  __int128 v282; // [rsp+608h] [rbp-400h] BYREF
  __int64 v283; // [rsp+618h] [rbp-3F0h]
  __int128 v284; // [rsp+620h] [rbp-3E8h]
  _QWORD v285[3]; // [rsp+630h] [rbp-3D8h] BYREF
  int v286[13]; // [rsp+648h] [rbp-3C0h] BYREF
  char v287; // [rsp+67Fh] [rbp-389h]
  __int128 v288; // [rsp+680h] [rbp-388h] BYREF
  __int64 v289; // [rsp+690h] [rbp-378h]
  __int64 v290; // [rsp+6A0h] [rbp-368h] BYREF
  int v291[10]; // [rsp+6A8h] [rbp-360h] BYREF
  int v292[2]; // [rsp+6D0h] [rbp-338h]
  int v293[2]; // [rsp+6D8h] [rbp-330h]
  __int64 v294; // [rsp+6E0h] [rbp-328h]
  char v295; // [rsp+6EFh] [rbp-319h]
  __int64 v296; // [rsp+6F0h] [rbp-318h] BYREF
  __int64 v297; // [rsp+6F8h] [rbp-310h]
  __int64 v298; // [rsp+700h] [rbp-308h] BYREF
  __int64 v299; // [rsp+708h] [rbp-300h]
  __int64 v300; // [rsp+710h] [rbp-2F8h]
  __int64 v301; // [rsp+718h] [rbp-2F0h] BYREF
  __int64 v302; // [rsp+720h] [rbp-2E8h]
  __int64 v303; // [rsp+728h] [rbp-2E0h] BYREF
  __int64 v304; // [rsp+730h] [rbp-2D8h]
  __int64 v305; // [rsp+738h] [rbp-2D0h]
  __int128 v306; // [rsp+740h] [rbp-2C8h] BYREF
  __int128 v307; // [rsp+750h] [rbp-2B8h]
  __int128 v308; // [rsp+760h] [rbp-2A8h]
  int v309[4]; // [rsp+770h] [rbp-298h] BYREF
  __int128 v310; // [rsp+780h] [rbp-288h]
  __int128 v311; // [rsp+790h] [rbp-278h]
  __int128 v312; // [rsp+7A0h] [rbp-268h]
  __int128 v313; // [rsp+7B0h] [rbp-258h]
  __int128 v314; // [rsp+7C0h] [rbp-248h]
  __int64 v315; // [rsp+7D8h] [rbp-230h] BYREF
  __int64 v316; // [rsp+7E0h] [rbp-228h]
  __int64 v317; // [rsp+7E8h] [rbp-220h]
  _OWORD v318[3]; // [rsp+7F0h] [rbp-218h] BYREF
  _QWORD src[6]; // [rsp+820h] [rbp-1E8h] BYREF
  _BYTE dest[48]; // [rsp+850h] [rbp-1B8h] BYREF
  __int64 v321; // [rsp+880h] [rbp-188h] BYREF
  __int64 v322; // [rsp+888h] [rbp-180h]
  __int64 v323; // [rsp+890h] [rbp-178h]
  __int64 v324; // [rsp+898h] [rbp-170h]
  _OWORD v325[3]; // [rsp+8A0h] [rbp-168h] BYREF
  _OWORD v326[3]; // [rsp+8D0h] [rbp-138h] BYREF
  __int64 v327; // [rsp+908h] [rbp-100h] BYREF
  __int64 v328; // [rsp+910h] [rbp-F8h]
  int v329[2]; // [rsp+918h] [rbp-F0h] BYREF
  __int64 v330; // [rsp+920h] [rbp-E8h]
  int v331[2]; // [rsp+928h] [rbp-E0h]
  __int64 v332; // [rsp+930h] [rbp-D8h] BYREF
  __int64 v333; // [rsp+938h] [rbp-D0h]
  __int64 v334; // [rsp+940h] [rbp-C8h] BYREF
  __int64 v335; // [rsp+948h] [rbp-C0h]
  __int64 v336; // [rsp+950h] [rbp-B8h]
  int v337[2]; // [rsp+958h] [rbp-B0h]
  _BYTE v338[48]; // [rsp+960h] [rbp-A8h] BYREF
  __int128 v339; // [rsp+990h] [rbp-78h] BYREF
  __int128 v340; // [rsp+9A8h] [rbp-60h]
  _QWORD v341[2]; // [rsp+9B8h] [rbp-50h] BYREF
  char v342; // [rsp+9CCh] [rbp-3Ch]
  char v343; // [rsp+9CDh] [rbp-3Bh]
  char v344; // [rsp+9CEh] [rbp-3Ah]
  char v345; // [rsp+9CFh] [rbp-39h]
  char v346; // [rsp+9D0h] [rbp-38h]
  char v347; // [rsp+9D1h] [rbp-37h]
  char v348; // [rsp+9D2h] [rbp-36h]
  char v349; // [rsp+9D3h] [rbp-35h]
  char v350; // [rsp+9D4h] [rbp-34h]
  char v351; // [rsp+9D5h] [rbp-33h]
  char v352; // [rsp+9D6h] [rbp-32h]
  char v353; // [rsp+9D7h] [rbp-31h]
  unsigned __int8 v354; // [rsp+9EEh] [rbp-1Ah]
  unsigned __int8 v355; // [rsp+9EFh] [rbp-19h]
  __int16 v356; // [rsp+9F0h] [rbp-18h]
  int v357; // [rsp+9F2h] [rbp-16h]
  char v358; // [rsp+9F7h] [rbp-11h]
  _QWORD *v359; // [rsp+9F8h] [rbp-10h]
  __int64 (__fastcall *v360)(); // [rsp+A00h] [rbp-8h]

  HIBYTE(v238[0]) = a6;
  LOBYTE(v238[0]) = a6;
  v353 = 0;
  v352 = 0;
  v348 = 0;
  v347 = 0;
  v351 = 0;
  v346 = 0;
  v350 = 0;
  v345 = 0;
  v344 = 0;
  v343 = 0;
  v342 = 1;
  v349 = 1;
  v240 = std::io::stdio::stdin();
  v253[103] = 0;
  uu_join::State::new(
    (unsigned int)v253,
    0,
    a1,
    a2,
    (unsigned int)&v240,
    *((_QWORD *)a5 + 9),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 88) & 1);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v247, v253);
  if ( (_QWORD)v247 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v238[1] = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                            *((_QWORD *)&v247 + 1),
                            v248,
                            &off_12E200);
    v239 = v61;
    goto LABEL_104;
  }
  v259 = v252;
  v258 = v251;
  v257 = v250;
  v256 = v249;
  v255 = v248;
  v254 = v247;
  v246 = v252;
  v245 = v251;
  v244 = v250;
  v243 = v249;
  v242 = v248;
  *(_OWORD *)v241 = v247;
  v272[103] = 1;
  uu_join::State::new(
    (unsigned int)v272,
    1,
    a3,
    a4,
    (unsigned int)&v240,
    *((_QWORD *)a5 + 10),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 89) & 1);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v266, v272);
  if ( (_QWORD)v266 == 0x8000000000000000LL )
  {
    LODWORD(v6) = v267;
    v58 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v266 + 1),
            v267,
            &off_12E1E8);
    *(_QWORD *)&v238[1] = v58;
    v239 = v57;
LABEL_103:
    core::ptr::drop_in_place<uu_join::State>((int)v241, (int)v6, v57, v58, v59, v60, v62, v67);
LABEL_104:
    core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
    if ( (v342 & 1) != 0 )
      core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
    goto LABEL_55;
  }
  v278 = v271;
  v277 = v270;
  v276 = v269;
  v275 = v268;
  v274 = v267;
  v273 = v266;
  v265 = v271;
  v264 = v270;
  v263 = v269;
  v262 = v268;
  v261 = v267;
  *(_OWORD *)v260 = v266;
  v354 = <uu_join::OneByteSep as core::clone::Clone>::clone(v238);
  v279[3] = v354;
  v7 = *((_BYTE *)a5 + 94);
  v8 = *((_BYTE *)a5 + 91);
  v355 = v354;
  v234 = uu_join::Input<Sep>::new(v354, v8 & 1, v7);
  v356 = v234;
  v11 = HIWORD(v234);
  LOBYTE(v357) = BYTE2(v234);
  BYTE1(v11) = BYTE1(v234);
  *(_WORD *)v279 = v234;
  LOBYTE(v11) = BYTE2(v234);
  v279[2] = BYTE2(v234);
  if ( (*((_BYTE *)a5 + 92) & 1) != 0 )
  {
    v233 = alloc::alloc::exchange_malloc(16LL, 8LL);
    LOBYTE(v284) = 0;
    if ( (v233 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v233, &off_12E0A8);
    *(_OWORD *)v233 = v284;
    alloc::slice::<impl [T]>::into_vec(&v282, v233, 1LL);
    v285[0] = v238;
    v285[1] = (char *)a5 + 92;
    v285[2] = &v282;
    uu_join::exec::{{closure}}((unsigned int)v285, (unsigned int)v241);
    uu_join::exec::{{closure}}((unsigned int)v285, (unsigned int)v260);
    v280 = v282;
    v281 = v283;
  }
  else
  {
    uu_join::State::initialize(
      (int)v241,
      (int)v238,
      *((_BYTE *)a5 + 92) & 1,
      v11,
      v9,
      v10,
      (int)v62,
      v67,
      v72,
      v75,
      v78,
      v81,
      v85,
      v89,
      v92,
      v95,
      v99,
      v102,
      v105,
      v109,
      v112,
      v115,
      v118,
      v122,
      v126,
      v130,
      v133,
      v136,
      v140,
      v144,
      v147,
      v150,
      v153,
      v156,
      v160,
      v164,
      v168,
      v171,
      (int)v174,
      v177,
      v180,
      v182,
      v184,
      v187,
      v189,
      v191,
      v193,
      v196,
      v199,
      v201,
      v203,
      v205,
      v207,
      v210,
      v213,
      v215,
      v217,
      v219,
      v221,
      v223);
    uu_join::State::initialize(
      (int)v260,
      (int)v238,
      *((_BYTE *)a5 + 92) & 1,
      v12,
      v13,
      v14,
      v63,
      v68,
      v73,
      v76,
      v79,
      v82,
      v86,
      v90,
      v93,
      v96,
      v100,
      v103,
      v106,
      v110,
      v113,
      v116,
      v119,
      v123,
      v127,
      v131,
      v134,
      v137,
      v141,
      v145,
      v148,
      v151,
      v154,
      v157,
      v161,
      v165,
      v169,
      v172,
      v175,
      v178,
      v181,
      v183,
      v185,
      v188,
      v190,
      v192,
      v194,
      v197,
      v200,
      v202,
      v204,
      v206,
      v208,
      v211,
      v214,
      v216,
      v218,
      v220,
      v222,
      v224);
    v342 = 0;
    v280 = *a5;
    v281 = *((_QWORD *)a5 + 2);
  }
  v232 = *((_BYTE *)a5 + 95);
  v349 = 0;
  v353 = 1;
  v287 = v238[0];
  v352 = 1;
  v289 = v281;
  v288 = v280;
  v15 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref((char *)a5 + 24);
  v353 = 0;
  v352 = 0;
  v358 = v287;
  uu_join::Repr<Sep>::new((__int64)v286, v232, v287, &v288, v15, v16);
  v352 = 0;
  v353 = 0;
  v290 = std::io::stdio::stdout();
  v231 = std::io::stdio::Stdout::lock(&v290);
  std::io::buffered::bufwriter::BufWriter<W>::new((int)v291, v231);
  if ( (*((_BYTE *)a5 + 93) & 1) != 0 )
  {
    v229 = uu_join::State::print_headers(v241, v291, v260, v286);
    *(_QWORD *)v292 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v229);
    if ( *(_QWORD *)v292 )
    {
      v6 = &off_12E1D0;
      v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *(_QWORD *)v292,
              &off_12E1D0);
      *(_QWORD *)&v238[1] = v50;
      v239 = v49;
    }
    else
    {
      line = uu_join::State::reset_read_line(
               (int)v241,
               (int)v279,
               0,
               0,
               v17,
               v18,
               (int)v62,
               v67,
               v72,
               v75,
               v78,
               v81,
               v85,
               v89,
               v92,
               v95,
               v99,
               v102,
               v105,
               v109,
               v112,
               v115,
               v118,
               v122,
               v126,
               v130,
               v133,
               v136,
               v140,
               v144,
               v147,
               v150,
               v153,
               v156,
               v160,
               v164,
               v168,
               v171,
               v174,
               v177);
      v227 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(line);
      *(_QWORD *)v293 = v227;
      if ( v227 )
      {
        v6 = &off_12E1B8;
        v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                *(_QWORD *)v293,
                &off_12E1B8);
        *(_QWORD *)&v238[1] = v50;
        v239 = v49;
      }
      else
      {
        v226 = uu_join::State::reset_read_line(
                 (int)v260,
                 (int)v279,
                 0,
                 0,
                 v19,
                 v20,
                 (int)v62,
                 v67,
                 v74,
                 v77,
                 v80,
                 v83,
                 v87,
                 v91,
                 v94,
                 v97,
                 v101,
                 v104,
                 v107,
                 v111,
                 v114,
                 v117,
                 v120,
                 v124,
                 v128,
                 v132,
                 v135,
                 v138,
                 v142,
                 v146,
                 v149,
                 v152,
                 v155,
                 v158,
                 v162,
                 v166,
                 v170,
                 v173,
                 v176,
                 v179);
        v225 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v226);
        v294 = v225;
        if ( !v225 )
          goto LABEL_15;
        v6 = &off_12E1A0;
        v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v294,
                &off_12E1A0);
        *(_QWORD *)&v238[1] = v50;
        v239 = v49;
      }
    }
    goto LABEL_37;
  }
LABEL_15:
  while ( 1 )
  {
    has_line = uu_join::State::has_line(v241);
    if ( (has_line & 1) == 0 || (uu_join::State::has_line(v260) & 1) == 0 )
      break;
    current_key = uu_join::State::get_current_key(v241);
    v167 = v40;
    v41 = uu_join::State::get_current_key(v260);
    v159 = uu_join::Input<Sep>::compare(v279, current_key, v167, v41, v42);
    v295 = v159;
    if ( v159 == -1 )
    {
      v6 = (char **)v291;
      v43 = uu_join::State::skip_line((int)v241, (int)v291, (char)v279, (int)v286);
      v296 = v43;
      v297 = v45;
      if ( v43 != 0 )
      {
        v348 = 1;
        v298 = v296;
        v299 = v297;
        v143 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v291);
        v139 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v143);
        v300 = v139;
        LODWORD(v49) = v139;
        if ( v139 )
        {
          v6 = &off_12E128;
          v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v300,
                  &off_12E128);
          *(_QWORD *)&v238[1] = v50;
          v239 = v49;
        }
        else
        {
          v348 = 0;
          LODWORD(v50) = v298;
          *(_QWORD *)&v238[1] = v298;
          v239 = v299;
        }
        if ( (v348 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v298);
        v348 = 0;
        goto LABEL_37;
      }
      core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v296);
      BYTE11(v246) = 1;
      BYTE11(v265) = 1;
    }
    else if ( v159 )
    {
      v6 = (char **)v291;
      v44 = uu_join::State::skip_line((int)v260, (int)v291, (char)v279, (int)v286);
      v301 = v44;
      v302 = v48;
      if ( v44 != 0 )
      {
        v347 = 1;
        v303 = v301;
        v304 = v302;
        v88 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v291);
        v84 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v88);
        v305 = v84;
        LODWORD(v49) = v84;
        if ( v84 )
        {
          v6 = &off_12E188;
          v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v305,
                  &off_12E188);
          *(_QWORD *)&v238[1] = v50;
          v239 = v49;
        }
        else
        {
          v347 = 0;
          LODWORD(v50) = v303;
          *(_QWORD *)&v238[1] = v303;
          v239 = v304;
        }
        if ( (v347 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v303);
        v347 = 0;
        goto LABEL_37;
      }
      core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v301);
      BYTE11(v246) = 1;
      BYTE11(v265) = 1;
    }
    else
    {
      v6 = (char **)v241;
      uu_join::State::extend(v309, v241, v279);
      if ( *(_QWORD *)v309 == 0x8000000000000001LL )
      {
        v346 = 1;
        v315 = *(_QWORD *)&v309[2];
        v316 = v310;
        v129 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v291);
        v98 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v129);
        v317 = v98;
        LODWORD(v49) = v98;
        if ( v98 )
        {
          v6 = &off_12E170;
          v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v317,
                  &off_12E170);
          *(_QWORD *)&v238[1] = v50;
          v239 = v49;
        }
        else
        {
          v346 = 0;
          LODWORD(v50) = v315;
          *(_QWORD *)&v238[1] = v315;
          v239 = v316;
        }
        if ( (v346 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v315);
        v346 = 0;
        goto LABEL_87;
      }
      v314 = v311;
      v313 = v310;
      v312 = *(_OWORD *)v309;
      v351 = 1;
      v308 = v311;
      v307 = v310;
      v306 = *(_OWORD *)v309;
      v6 = (char **)v260;
      uu_join::State::extend(src, v260, v279);
      if ( src[0] == 0x8000000000000001LL )
      {
        v345 = 1;
        v321 = src[1];
        v322 = src[2];
        v125 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v291);
        v108 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v125);
        v323 = v108;
        if ( v108 )
        {
          v6 = &off_12E158;
          *(_QWORD *)&v238[1] = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                                  v323,
                                  &off_12E158);
          v239 = v47;
        }
        else
        {
          v345 = 0;
          *(_QWORD *)&v238[1] = v321;
          v239 = v322;
        }
        if ( (v345 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v321);
        v345 = 0;
        goto LABEL_80;
      }
      memcpy(dest, src, sizeof(dest));
      v350 = 1;
      memcpy(v318, dest, sizeof(v318));
      if ( (*((_BYTE *)a5 + 90) & 1) != 0 )
      {
        v121 = uu_join::State::combine((int)v241, (int)v291, (int)v260, (int)v286);
        v324 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v121);
        if ( v324 )
        {
          v6 = &off_12E140;
          *(_QWORD *)&v238[1] = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                                  v324,
                                  &off_12E140);
          v239 = v46;
          core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(v318);
LABEL_80:
          v350 = 0;
          core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v306);
LABEL_87:
          v351 = 0;
          goto LABEL_37;
        }
      }
      v351 = 0;
      v325[2] = v308;
      v325[1] = v307;
      v325[0] = v306;
      uu_join::State::reset(v241, v325);
      v350 = 0;
      v326[2] = v318[2];
      v326[1] = v318[1];
      v326[0] = v318[0];
      uu_join::State::reset(v260, v326);
      v350 = 0;
      v351 = 0;
    }
  }
  v6 = (char **)v291;
  v21 = uu_join::State::finalize(v241, v291, v279, v286);
  v327 = v21;
  v328 = v22;
  if ( v21 != 0 )
  {
    v344 = 1;
    *(_QWORD *)v329 = v327;
    v330 = v328;
    v212 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v291);
    v209 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v212);
    *(_QWORD *)v331 = v209;
    LODWORD(v49) = v209;
    if ( v209 )
    {
      v6 = &off_12E0C0;
      v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *(_QWORD *)v331,
              &off_12E0C0);
      *(_QWORD *)&v238[1] = v50;
      v239 = v49;
    }
    else
    {
      v344 = 0;
      LODWORD(v50) = v329[0];
      *(_QWORD *)&v238[1] = *(_QWORD *)v329;
      v239 = v330;
    }
    if ( (v344 & 1) != 0 )
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v329);
    v344 = 0;
LABEL_37:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(
      (int)v291,
      (int)v6,
      v49,
      v50,
      v51,
      v52,
      v62,
      v67);
    core::ptr::drop_in_place<uu_join::Repr<uu_join::OneByteSep>>(v286);
    core::ptr::drop_in_place<uu_join::State>((int)v260, (int)v6, v53, v54, v55, v56, v66, v71);
    goto LABEL_103;
  }
  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v327);
  v6 = (char **)v291;
  v23 = uu_join::State::finalize(v260, v291, v279, v286);
  v332 = v23;
  v333 = v24;
  if ( v23 != 0 )
  {
    v343 = 1;
    v334 = v332;
    v335 = v333;
    v198 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v291);
    v195 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v198);
    v336 = v195;
    LODWORD(v49) = v195;
    if ( v195 )
    {
      v6 = &off_12E0D8;
      v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v336,
              &off_12E0D8);
      *(_QWORD *)&v238[1] = v50;
      v239 = v49;
    }
    else
    {
      v343 = 0;
      LODWORD(v50) = v334;
      *(_QWORD *)&v238[1] = v334;
      v239 = v335;
    }
    if ( (v343 & 1) != 0 )
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v334);
    v343 = 0;
    goto LABEL_37;
  }
  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v332);
  v25 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v291);
  v186 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v25);
  *(_QWORD *)v337 = v186;
  v28 = v186;
  v29 = 0;
  if ( v186 )
  {
    v6 = &off_12E110;
    v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *(_QWORD *)v337,
            &off_12E110);
    *(_QWORD *)&v238[1] = v50;
    v239 = v49;
    goto LABEL_37;
  }
  if ( (BYTE10(v246) & 1) != 0 || (BYTE10(v265) & 1) != 0 )
  {
    v341[0] = uucore::execution_phrase();
    v341[1] = v30;
    v359 = v341;
    v360 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v340 = v341;
    *((_QWORD *)&v340 + 1) = <&T as core::fmt::Display>::fmt;
    v339 = v340;
    v6 = (char **)&unk_12E0F0;
    core::fmt::Arguments::new_v1(v338, &unk_12E0F0, &v339);
    std::io::stdio::_eprint(v338);
    uucore::mods::error::set_exit_code(1LL);
  }
  *(_QWORD *)&v238[1] = 0LL;
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(
    (int)v291,
    (int)v6,
    v28,
    v29,
    v26,
    v27,
    v62,
    v67);
  core::ptr::drop_in_place<uu_join::Repr<uu_join::OneByteSep>>(v286);
  core::ptr::drop_in_place<uu_join::State>((int)v260, (int)v6, v31, v32, v33, v34, v64, v69);
  core::ptr::drop_in_place<uu_join::State>((int)v241, (int)v6, v35, v36, v37, v38, v65, v70);
  core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
  if ( (v342 & 1) != 0 )
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
LABEL_55:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>((char *)a5 + 24);
  return *(_QWORD *)&v238[1];
}
