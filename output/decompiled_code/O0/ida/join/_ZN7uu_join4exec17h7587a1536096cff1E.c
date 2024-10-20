__int64 __fastcall uu_join::exec(int a1, int a2, int a3, int a4, __int64 a5)
{
  char **v5; // rsi
  char v6; // dl
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r9d
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  int v24; // r8d
  int v25; // r9d
  int v26; // edx
  int v27; // ecx
  __int64 v28; // rdx
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // r8d
  int v50; // r9d
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // r8d
  int v58; // r9d
  __int64 v59; // rdx
  struct _Unwind_Exception *v60; // [rsp+0h] [rbp-9D8h]
  int v61; // [rsp+0h] [rbp-9D8h]
  struct _Unwind_Exception *v62; // [rsp+0h] [rbp-9D8h]
  struct _Unwind_Exception *v63; // [rsp+0h] [rbp-9D8h]
  struct _Unwind_Exception *v64; // [rsp+0h] [rbp-9D8h]
  int v65; // [rsp+8h] [rbp-9D0h]
  int v66; // [rsp+8h] [rbp-9D0h]
  int v67; // [rsp+8h] [rbp-9D0h]
  int v68; // [rsp+8h] [rbp-9D0h]
  int v69; // [rsp+8h] [rbp-9D0h]
  int v70; // [rsp+10h] [rbp-9C8h]
  int v71; // [rsp+10h] [rbp-9C8h]
  int v72; // [rsp+10h] [rbp-9C8h]
  int v73; // [rsp+18h] [rbp-9C0h]
  int v74; // [rsp+18h] [rbp-9C0h]
  int v75; // [rsp+18h] [rbp-9C0h]
  int v76; // [rsp+20h] [rbp-9B8h]
  int v77; // [rsp+20h] [rbp-9B8h]
  int v78; // [rsp+20h] [rbp-9B8h]
  __int64 v79; // [rsp+20h] [rbp-9B8h]
  int v80; // [rsp+28h] [rbp-9B0h]
  int v81; // [rsp+28h] [rbp-9B0h]
  int v82; // [rsp+28h] [rbp-9B0h]
  __int64 v83; // [rsp+28h] [rbp-9B0h]
  int v84; // [rsp+30h] [rbp-9A8h]
  int v85; // [rsp+30h] [rbp-9A8h]
  int v86; // [rsp+30h] [rbp-9A8h]
  int v87; // [rsp+38h] [rbp-9A0h]
  int v88; // [rsp+38h] [rbp-9A0h]
  int v89; // [rsp+38h] [rbp-9A0h]
  int v90; // [rsp+40h] [rbp-998h]
  int v91; // [rsp+40h] [rbp-998h]
  int v92; // [rsp+40h] [rbp-998h]
  __int64 v93; // [rsp+40h] [rbp-998h]
  int v94; // [rsp+48h] [rbp-990h]
  int v95; // [rsp+48h] [rbp-990h]
  int v96; // [rsp+48h] [rbp-990h]
  int v97; // [rsp+50h] [rbp-988h]
  int v98; // [rsp+50h] [rbp-988h]
  int v99; // [rsp+50h] [rbp-988h]
  int v100; // [rsp+58h] [rbp-980h]
  int v101; // [rsp+58h] [rbp-980h]
  int v102; // [rsp+58h] [rbp-980h]
  __int64 v103; // [rsp+58h] [rbp-980h]
  int v104; // [rsp+60h] [rbp-978h]
  int v105; // [rsp+60h] [rbp-978h]
  int v106; // [rsp+60h] [rbp-978h]
  int v107; // [rsp+68h] [rbp-970h]
  int v108; // [rsp+68h] [rbp-970h]
  int v109; // [rsp+68h] [rbp-970h]
  int v110; // [rsp+70h] [rbp-968h]
  int v111; // [rsp+70h] [rbp-968h]
  int v112; // [rsp+70h] [rbp-968h]
  int v113; // [rsp+78h] [rbp-960h]
  int v114; // [rsp+78h] [rbp-960h]
  int v115; // [rsp+78h] [rbp-960h]
  __int64 v116; // [rsp+78h] [rbp-960h]
  int v117; // [rsp+80h] [rbp-958h]
  int v118; // [rsp+80h] [rbp-958h]
  int v119; // [rsp+80h] [rbp-958h]
  __int64 v120; // [rsp+80h] [rbp-958h]
  int v121; // [rsp+88h] [rbp-950h]
  int v122; // [rsp+88h] [rbp-950h]
  int v123; // [rsp+88h] [rbp-950h]
  __int64 v124; // [rsp+88h] [rbp-950h]
  int v125; // [rsp+90h] [rbp-948h]
  int v126; // [rsp+90h] [rbp-948h]
  int v127; // [rsp+90h] [rbp-948h]
  int v128; // [rsp+98h] [rbp-940h]
  int v129; // [rsp+98h] [rbp-940h]
  int v130; // [rsp+98h] [rbp-940h]
  int v131; // [rsp+A0h] [rbp-938h]
  int v132; // [rsp+A0h] [rbp-938h]
  int v133; // [rsp+A0h] [rbp-938h]
  __int64 v134; // [rsp+A0h] [rbp-938h]
  int v135; // [rsp+A8h] [rbp-930h]
  int v136; // [rsp+A8h] [rbp-930h]
  int v137; // [rsp+A8h] [rbp-930h]
  __int64 v138; // [rsp+A8h] [rbp-930h]
  int v139; // [rsp+B0h] [rbp-928h]
  char v140; // [rsp+B0h] [rbp-928h]
  int v141; // [rsp+B0h] [rbp-928h]
  int v142; // [rsp+B8h] [rbp-920h]
  int v143; // [rsp+B8h] [rbp-920h]
  int v144; // [rsp+B8h] [rbp-920h]
  int v145; // [rsp+C0h] [rbp-918h]
  int v146; // [rsp+C0h] [rbp-918h]
  int v147; // [rsp+C0h] [rbp-918h]
  int v148; // [rsp+C8h] [rbp-910h]
  int v149; // [rsp+C8h] [rbp-910h]
  int v150; // [rsp+C8h] [rbp-910h]
  int v151; // [rsp+D0h] [rbp-908h]
  int v152; // [rsp+D0h] [rbp-908h]
  int v153; // [rsp+D0h] [rbp-908h]
  char v154; // [rsp+D7h] [rbp-901h]
  int v155; // [rsp+D8h] [rbp-900h]
  int v156; // [rsp+D8h] [rbp-900h]
  int v157; // [rsp+D8h] [rbp-900h]
  __int64 current_key; // [rsp+D8h] [rbp-900h]
  int v159; // [rsp+E0h] [rbp-8F8h]
  int v160; // [rsp+E0h] [rbp-8F8h]
  int v161; // [rsp+E0h] [rbp-8F8h]
  __int64 v162; // [rsp+E0h] [rbp-8F8h]
  int v163; // [rsp+E8h] [rbp-8F0h]
  int v164; // [rsp+E8h] [rbp-8F0h]
  int v165; // [rsp+E8h] [rbp-8F0h]
  int v166; // [rsp+F0h] [rbp-8E8h]
  int v167; // [rsp+F0h] [rbp-8E8h]
  int v168; // [rsp+F0h] [rbp-8E8h]
  int v169; // [rsp+F8h] [rbp-8E0h]
  int v170; // [rsp+F8h] [rbp-8E0h]
  int v171; // [rsp+F8h] [rbp-8E0h]
  struct _Unwind_Exception *v172; // [rsp+100h] [rbp-8D8h]
  int v173; // [rsp+100h] [rbp-8D8h]
  struct _Unwind_Exception *v174; // [rsp+100h] [rbp-8D8h]
  int v175; // [rsp+108h] [rbp-8D0h]
  int v176; // [rsp+108h] [rbp-8D0h]
  int v177; // [rsp+108h] [rbp-8D0h]
  int v178; // [rsp+110h] [rbp-8C8h]
  int v179; // [rsp+110h] [rbp-8C8h]
  int v180; // [rsp+118h] [rbp-8C0h]
  int v181; // [rsp+118h] [rbp-8C0h]
  __int64 v182; // [rsp+118h] [rbp-8C0h]
  int v183; // [rsp+120h] [rbp-8B8h]
  int v184; // [rsp+120h] [rbp-8B8h]
  int v185; // [rsp+128h] [rbp-8B0h]
  int v186; // [rsp+128h] [rbp-8B0h]
  int v187; // [rsp+130h] [rbp-8A8h]
  int v188; // [rsp+130h] [rbp-8A8h]
  int v189; // [rsp+138h] [rbp-8A0h]
  int v190; // [rsp+138h] [rbp-8A0h]
  __int64 v191; // [rsp+138h] [rbp-8A0h]
  int v192; // [rsp+140h] [rbp-898h]
  int v193; // [rsp+140h] [rbp-898h]
  __int64 v194; // [rsp+140h] [rbp-898h]
  int v195; // [rsp+148h] [rbp-890h]
  int v196; // [rsp+148h] [rbp-890h]
  int v197; // [rsp+150h] [rbp-888h]
  int v198; // [rsp+150h] [rbp-888h]
  int v199; // [rsp+158h] [rbp-880h]
  int v200; // [rsp+158h] [rbp-880h]
  int v201; // [rsp+160h] [rbp-878h]
  int v202; // [rsp+160h] [rbp-878h]
  int v203; // [rsp+168h] [rbp-870h]
  int v204; // [rsp+168h] [rbp-870h]
  __int64 v205; // [rsp+168h] [rbp-870h]
  int v206; // [rsp+170h] [rbp-868h]
  int v207; // [rsp+170h] [rbp-868h]
  __int64 v208; // [rsp+170h] [rbp-868h]
  int v209; // [rsp+178h] [rbp-860h]
  int v210; // [rsp+178h] [rbp-860h]
  int v211; // [rsp+180h] [rbp-858h]
  int v212; // [rsp+180h] [rbp-858h]
  int v213; // [rsp+188h] [rbp-850h]
  int v214; // [rsp+188h] [rbp-850h]
  int v215; // [rsp+190h] [rbp-848h]
  int v216; // [rsp+190h] [rbp-848h]
  int v217; // [rsp+198h] [rbp-840h]
  int v218; // [rsp+198h] [rbp-840h]
  struct _Unwind_Exception *v219; // [rsp+1A0h] [rbp-838h]
  struct _Unwind_Exception *v220; // [rsp+1A0h] [rbp-838h]
  int v221; // [rsp+1A8h] [rbp-830h]
  int v222; // [rsp+1A8h] [rbp-830h]
  __int64 v223; // [rsp+1B0h] [rbp-828h]
  __int64 v224; // [rsp+1C8h] [rbp-810h]
  __int64 v225; // [rsp+1D0h] [rbp-808h]
  __int64 line; // [rsp+1E8h] [rbp-7F0h]
  __int64 v227; // [rsp+1F8h] [rbp-7E0h]
  char has_line; // [rsp+207h] [rbp-7D1h]
  int v229; // [rsp+208h] [rbp-7D0h]
  char v230; // [rsp+21Fh] [rbp-7B9h]
  __int64 v231; // [rsp+230h] [rbp-7A8h]
  char v232; // [rsp+23Fh] [rbp-799h]
  _BYTE v236[9]; // [rsp+297h] [rbp-741h] BYREF
  __int64 v237; // [rsp+2A0h] [rbp-738h]
  __int64 v238; // [rsp+2A8h] [rbp-730h] BYREF
  int v239[4]; // [rsp+2B0h] [rbp-728h] BYREF
  __int128 v240; // [rsp+2C0h] [rbp-718h]
  __int128 v241; // [rsp+2D0h] [rbp-708h]
  __int128 v242; // [rsp+2E0h] [rbp-6F8h]
  __int128 v243; // [rsp+2F0h] [rbp-6E8h]
  __int128 v244; // [rsp+300h] [rbp-6D8h]
  __int128 v245; // [rsp+318h] [rbp-6C0h] BYREF
  __int128 v246; // [rsp+328h] [rbp-6B0h]
  __int128 v247; // [rsp+338h] [rbp-6A0h]
  __int128 v248; // [rsp+348h] [rbp-690h]
  __int128 v249; // [rsp+358h] [rbp-680h]
  __int128 v250; // [rsp+368h] [rbp-670h]
  _BYTE v251[104]; // [rsp+378h] [rbp-660h] BYREF
  __int128 v252; // [rsp+3E0h] [rbp-5F8h]
  __int128 v253; // [rsp+3F0h] [rbp-5E8h]
  __int128 v254; // [rsp+400h] [rbp-5D8h]
  __int128 v255; // [rsp+410h] [rbp-5C8h]
  __int128 v256; // [rsp+420h] [rbp-5B8h]
  __int128 v257; // [rsp+430h] [rbp-5A8h]
  int v258[4]; // [rsp+440h] [rbp-598h] BYREF
  __int128 v259; // [rsp+450h] [rbp-588h]
  __int128 v260; // [rsp+460h] [rbp-578h]
  __int128 v261; // [rsp+470h] [rbp-568h]
  __int128 v262; // [rsp+480h] [rbp-558h]
  __int128 v263; // [rsp+490h] [rbp-548h]
  __int128 v264; // [rsp+4A8h] [rbp-530h] BYREF
  __int128 v265; // [rsp+4B8h] [rbp-520h]
  __int128 v266; // [rsp+4C8h] [rbp-510h]
  __int128 v267; // [rsp+4D8h] [rbp-500h]
  __int128 v268; // [rsp+4E8h] [rbp-4F0h]
  __int128 v269; // [rsp+4F8h] [rbp-4E0h]
  _BYTE v270[104]; // [rsp+508h] [rbp-4D0h] BYREF
  __int128 v271; // [rsp+570h] [rbp-468h]
  __int128 v272; // [rsp+580h] [rbp-458h]
  __int128 v273; // [rsp+590h] [rbp-448h]
  __int128 v274; // [rsp+5A0h] [rbp-438h]
  __int128 v275; // [rsp+5B0h] [rbp-428h]
  __int128 v276; // [rsp+5C0h] [rbp-418h]
  _WORD v277[9]; // [rsp+5D6h] [rbp-402h] BYREF
  __int64 v278; // [rsp+5E8h] [rbp-3F0h]
  __int128 v279; // [rsp+5F0h] [rbp-3E8h] BYREF
  __int64 v280; // [rsp+600h] [rbp-3D8h]
  __int128 v281; // [rsp+608h] [rbp-3D0h]
  _QWORD v282[3]; // [rsp+618h] [rbp-3C0h] BYREF
  int v283[12]; // [rsp+630h] [rbp-3A8h] BYREF
  __int128 v284; // [rsp+660h] [rbp-378h] BYREF
  __int64 v285; // [rsp+670h] [rbp-368h]
  __int64 v286; // [rsp+680h] [rbp-358h] BYREF
  int v287[10]; // [rsp+688h] [rbp-350h] BYREF
  int v288[2]; // [rsp+6B0h] [rbp-328h]
  int v289[2]; // [rsp+6B8h] [rbp-320h]
  __int64 v290; // [rsp+6C0h] [rbp-318h]
  char v291; // [rsp+6CFh] [rbp-309h]
  __int64 v292; // [rsp+6D0h] [rbp-308h] BYREF
  __int64 v293; // [rsp+6D8h] [rbp-300h]
  __int64 v294; // [rsp+6E0h] [rbp-2F8h] BYREF
  __int64 v295; // [rsp+6E8h] [rbp-2F0h]
  __int64 v296; // [rsp+6F0h] [rbp-2E8h]
  __int64 v297; // [rsp+6F8h] [rbp-2E0h] BYREF
  __int64 v298; // [rsp+700h] [rbp-2D8h]
  __int64 v299; // [rsp+708h] [rbp-2D0h] BYREF
  __int64 v300; // [rsp+710h] [rbp-2C8h]
  __int64 v301; // [rsp+718h] [rbp-2C0h]
  __int128 v302; // [rsp+720h] [rbp-2B8h] BYREF
  __int128 v303; // [rsp+730h] [rbp-2A8h]
  __int128 v304; // [rsp+740h] [rbp-298h]
  int v305[4]; // [rsp+750h] [rbp-288h] BYREF
  __int128 v306; // [rsp+760h] [rbp-278h]
  __int128 v307; // [rsp+770h] [rbp-268h]
  __int128 v308; // [rsp+780h] [rbp-258h]
  __int128 v309; // [rsp+790h] [rbp-248h]
  __int128 v310; // [rsp+7A0h] [rbp-238h]
  __int64 v311; // [rsp+7B8h] [rbp-220h] BYREF
  __int64 v312; // [rsp+7C0h] [rbp-218h]
  __int64 v313; // [rsp+7C8h] [rbp-210h]
  _OWORD v314[3]; // [rsp+7D0h] [rbp-208h] BYREF
  _QWORD src[6]; // [rsp+800h] [rbp-1D8h] BYREF
  _BYTE dest[48]; // [rsp+830h] [rbp-1A8h] BYREF
  __int64 v317; // [rsp+860h] [rbp-178h] BYREF
  __int64 v318; // [rsp+868h] [rbp-170h]
  __int64 v319; // [rsp+870h] [rbp-168h]
  __int64 v320; // [rsp+878h] [rbp-160h]
  _OWORD v321[3]; // [rsp+880h] [rbp-158h] BYREF
  _OWORD v322[3]; // [rsp+8B0h] [rbp-128h] BYREF
  __int64 v323; // [rsp+8E8h] [rbp-F0h] BYREF
  __int64 v324; // [rsp+8F0h] [rbp-E8h]
  int v325[2]; // [rsp+8F8h] [rbp-E0h] BYREF
  __int64 v326; // [rsp+900h] [rbp-D8h]
  int v327[2]; // [rsp+908h] [rbp-D0h]
  __int64 v328; // [rsp+910h] [rbp-C8h] BYREF
  __int64 v329; // [rsp+918h] [rbp-C0h]
  __int64 v330; // [rsp+920h] [rbp-B8h] BYREF
  __int64 v331; // [rsp+928h] [rbp-B0h]
  __int64 v332; // [rsp+930h] [rbp-A8h]
  int v333[2]; // [rsp+938h] [rbp-A0h]
  _BYTE v334[48]; // [rsp+940h] [rbp-98h] BYREF
  __int128 v335; // [rsp+970h] [rbp-68h] BYREF
  __int128 v336; // [rsp+988h] [rbp-50h]
  _QWORD v337[2]; // [rsp+998h] [rbp-40h] BYREF
  char v338; // [rsp+9ACh] [rbp-2Ch]
  char v339; // [rsp+9ADh] [rbp-2Bh]
  char v340; // [rsp+9AEh] [rbp-2Ah]
  char v341; // [rsp+9AFh] [rbp-29h]
  char v342; // [rsp+9B0h] [rbp-28h]
  char v343; // [rsp+9B1h] [rbp-27h]
  char v344; // [rsp+9B2h] [rbp-26h]
  char v345; // [rsp+9B3h] [rbp-25h]
  char v346; // [rsp+9B4h] [rbp-24h]
  char v347; // [rsp+9B5h] [rbp-23h]
  char v348; // [rsp+9B6h] [rbp-22h]
  char v349; // [rsp+9B7h] [rbp-21h]
  _QWORD *v350; // [rsp+9C8h] [rbp-10h]
  __int64 (__fastcall *v351)(); // [rsp+9D0h] [rbp-8h]

  v349 = 0;
  v348 = 0;
  v344 = 0;
  v343 = 0;
  v347 = 0;
  v342 = 0;
  v346 = 0;
  v341 = 0;
  v340 = 0;
  v339 = 0;
  v338 = 1;
  v345 = 1;
  v238 = std::io::stdio::stdin();
  v251[103] = 0;
  uu_join::State::new(
    (unsigned int)v251,
    0,
    a1,
    a2,
    (unsigned int)&v238,
    *(_QWORD *)(a5 + 72),
    *(_BYTE *)(a5 + 95),
    *(_BYTE *)(a5 + 88) & 1);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v245, v251);
  if ( (_QWORD)v245 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v236[1] = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                            *((_QWORD *)&v245 + 1),
                            v246,
                            &off_12E200);
    v237 = v59;
    goto LABEL_104;
  }
  v257 = v250;
  v256 = v249;
  v255 = v248;
  v254 = v247;
  v253 = v246;
  v252 = v245;
  v244 = v250;
  v243 = v249;
  v242 = v248;
  v241 = v247;
  v240 = v246;
  *(_OWORD *)v239 = v245;
  v270[103] = 1;
  uu_join::State::new(
    (unsigned int)v270,
    1,
    a3,
    a4,
    (unsigned int)&v238,
    *(_QWORD *)(a5 + 80),
    *(_BYTE *)(a5 + 95),
    *(_BYTE *)(a5 + 89) & 1);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v264, v270);
  if ( (_QWORD)v264 == 0x8000000000000000LL )
  {
    LODWORD(v5) = v265;
    v56 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v264 + 1),
            v265,
            &off_12E1E8);
    *(_QWORD *)&v236[1] = v56;
    v237 = v55;
LABEL_103:
    core::ptr::drop_in_place<uu_join::State>((int)v239, (int)v5, v55, v56, v57, v58, v60, v65);
LABEL_104:
    core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 48);
    if ( (v338 & 1) != 0 )
      core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
    goto LABEL_55;
  }
  v276 = v269;
  v275 = v268;
  v274 = v267;
  v273 = v266;
  v272 = v265;
  v271 = v264;
  v263 = v269;
  v262 = v268;
  v261 = v267;
  v260 = v266;
  v259 = v265;
  *(_OWORD *)v258 = v264;
  <uu_join::LineSep as core::clone::Clone>::clone(v236);
  v232 = uu_join::Input<Sep>::new(*(_BYTE *)(a5 + 91) & 1);
  LOBYTE(v7) = v6;
  LOBYTE(v277[0]) = v232 & 1;
  HIBYTE(v277[0]) = v6;
  if ( (*(_BYTE *)(a5 + 92) & 1) != 0 )
  {
    v231 = alloc::alloc::exchange_malloc(16LL, 8LL);
    LOBYTE(v281) = 0;
    if ( (v231 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v231, &off_12E0A8);
    *(_OWORD *)v231 = v281;
    alloc::slice::<impl [T]>::into_vec(&v279, v231, 1LL);
    v282[0] = v236;
    v282[1] = a5 + 92;
    v282[2] = &v279;
    uu_join::exec::{{closure}}((unsigned int)v282, (unsigned int)v239);
    uu_join::exec::{{closure}}((unsigned int)v282, (unsigned int)v258);
    *(_OWORD *)&v277[1] = v279;
    v278 = v280;
  }
  else
  {
    uu_join::State::initialize(
      (int)v239,
      (int)v236,
      *(_BYTE *)(a5 + 92) & 1,
      v7,
      v8,
      v9,
      (int)v60,
      v65,
      v70,
      v73,
      v76,
      v80,
      v84,
      v87,
      v90,
      v94,
      v97,
      v100,
      v104,
      v107,
      v110,
      v113,
      v117,
      v121,
      v125,
      v128,
      v131,
      v135,
      v139,
      v142,
      v145,
      v148,
      v151,
      v155,
      v159,
      v163,
      v166,
      v169,
      (int)v172,
      v175,
      v178,
      v180,
      v183,
      v185,
      v187,
      v189,
      v192,
      v195,
      v197,
      v199,
      v201,
      v203,
      v206,
      v209,
      v211,
      v213,
      v215,
      v217,
      v219,
      v221);
    uu_join::State::initialize(
      (int)v258,
      (int)v236,
      *(_BYTE *)(a5 + 92) & 1,
      v10,
      v11,
      v12,
      v61,
      v66,
      v71,
      v74,
      v77,
      v81,
      v85,
      v88,
      v91,
      v95,
      v98,
      v101,
      v105,
      v108,
      v111,
      v114,
      v118,
      v122,
      v126,
      v129,
      v132,
      v136,
      v140,
      v143,
      v146,
      v149,
      v152,
      v156,
      v160,
      v164,
      v167,
      v170,
      v173,
      v176,
      v179,
      v181,
      v184,
      v186,
      v188,
      v190,
      v193,
      v196,
      v198,
      v200,
      v202,
      v204,
      v207,
      v210,
      v212,
      v214,
      v216,
      v218,
      v220,
      v222);
    v338 = 0;
    *(_OWORD *)&v277[1] = *(_OWORD *)a5;
    v278 = *(_QWORD *)(a5 + 16);
  }
  v230 = *(_BYTE *)(a5 + 95);
  v345 = 0;
  v349 = 1;
  v348 = 1;
  v285 = v278;
  v284 = *(_OWORD *)&v277[1];
  v13 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(a5 + 24);
  v349 = 0;
  v348 = 0;
  uu_join::Repr<Sep>::new((__int64)v283, v230, &v284, v13, v14);
  v348 = 0;
  v349 = 0;
  v286 = std::io::stdio::stdout();
  v229 = std::io::stdio::Stdout::lock(&v286);
  std::io::buffered::bufwriter::BufWriter<W>::new((int)v287, v229);
  if ( (*(_BYTE *)(a5 + 93) & 1) != 0 )
  {
    v227 = uu_join::State::print_headers(v239, v287, v258, v283);
    *(_QWORD *)v288 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v227);
    if ( *(_QWORD *)v288 )
    {
      v5 = &off_12E1D0;
      v48 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *(_QWORD *)v288,
              &off_12E1D0);
      *(_QWORD *)&v236[1] = v48;
      v237 = v47;
    }
    else
    {
      line = uu_join::State::reset_read_line(
               (int)v239,
               (int)v277,
               0,
               0,
               v15,
               v16,
               (int)v60,
               v65,
               v70,
               v73,
               v76,
               v80,
               v84,
               v87,
               v90,
               v94,
               v97,
               v100,
               v104,
               v107,
               v110,
               v113,
               v117,
               v121,
               v125,
               v128,
               v131,
               v135,
               v139,
               v142,
               v145,
               v148,
               v151,
               v155,
               v159,
               v163,
               v166,
               v169,
               v172,
               v175);
      v225 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(line);
      *(_QWORD *)v289 = v225;
      if ( v225 )
      {
        v5 = &off_12E1B8;
        v48 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                *(_QWORD *)v289,
                &off_12E1B8);
        *(_QWORD *)&v236[1] = v48;
        v237 = v47;
      }
      else
      {
        v224 = uu_join::State::reset_read_line(
                 (int)v258,
                 (int)v277,
                 0,
                 0,
                 v17,
                 v18,
                 (int)v60,
                 v65,
                 v72,
                 v75,
                 v78,
                 v82,
                 v86,
                 v89,
                 v92,
                 v96,
                 v99,
                 v102,
                 v106,
                 v109,
                 v112,
                 v115,
                 v119,
                 v123,
                 v127,
                 v130,
                 v133,
                 v137,
                 v141,
                 v144,
                 v147,
                 v150,
                 v153,
                 v157,
                 v161,
                 v165,
                 v168,
                 v171,
                 v174,
                 v177);
        v223 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v224);
        v290 = v223;
        if ( !v223 )
          goto LABEL_15;
        v5 = &off_12E1A0;
        v48 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v290,
                &off_12E1A0);
        *(_QWORD *)&v236[1] = v48;
        v237 = v47;
      }
    }
    goto LABEL_37;
  }
LABEL_15:
  while ( 1 )
  {
    has_line = uu_join::State::has_line(v239);
    if ( (has_line & 1) == 0 || (uu_join::State::has_line(v258) & 1) == 0 )
      break;
    current_key = uu_join::State::get_current_key(v239);
    v162 = v38;
    v39 = uu_join::State::get_current_key(v258);
    v154 = uu_join::Input<Sep>::compare(v277, current_key, v162, v39, v40);
    v291 = v154;
    if ( v154 == -1 )
    {
      v5 = (char **)v287;
      v41 = uu_join::State::skip_line((int)v239, (int)v287, (char)v277, (int)v283);
      v292 = v41;
      v293 = v43;
      if ( v41 != 0 )
      {
        v344 = 1;
        v294 = v292;
        v295 = v293;
        v138 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v287);
        v134 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v138);
        v296 = v134;
        LODWORD(v47) = v134;
        if ( v134 )
        {
          v5 = &off_12E128;
          v48 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v296,
                  &off_12E128);
          *(_QWORD *)&v236[1] = v48;
          v237 = v47;
        }
        else
        {
          v344 = 0;
          LODWORD(v48) = v294;
          *(_QWORD *)&v236[1] = v294;
          v237 = v295;
        }
        if ( (v344 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v294);
        v344 = 0;
        goto LABEL_37;
      }
      core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v292);
      BYTE11(v244) = 1;
      BYTE11(v263) = 1;
    }
    else if ( v154 )
    {
      v5 = (char **)v287;
      v42 = uu_join::State::skip_line((int)v258, (int)v287, (char)v277, (int)v283);
      v297 = v42;
      v298 = v46;
      if ( v42 != 0 )
      {
        v343 = 1;
        v299 = v297;
        v300 = v298;
        v83 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v287);
        v79 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v83);
        v301 = v79;
        LODWORD(v47) = v79;
        if ( v79 )
        {
          v5 = &off_12E188;
          v48 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v301,
                  &off_12E188);
          *(_QWORD *)&v236[1] = v48;
          v237 = v47;
        }
        else
        {
          v343 = 0;
          LODWORD(v48) = v299;
          *(_QWORD *)&v236[1] = v299;
          v237 = v300;
        }
        if ( (v343 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v299);
        v343 = 0;
        goto LABEL_37;
      }
      core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v297);
      BYTE11(v244) = 1;
      BYTE11(v263) = 1;
    }
    else
    {
      v5 = (char **)v239;
      uu_join::State::extend(v305, v239, v277);
      if ( *(_QWORD *)v305 == 0x8000000000000001LL )
      {
        v342 = 1;
        v311 = *(_QWORD *)&v305[2];
        v312 = v306;
        v124 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v287);
        v93 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v124);
        v313 = v93;
        LODWORD(v47) = v93;
        if ( v93 )
        {
          v5 = &off_12E170;
          v48 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v313,
                  &off_12E170);
          *(_QWORD *)&v236[1] = v48;
          v237 = v47;
        }
        else
        {
          v342 = 0;
          LODWORD(v48) = v311;
          *(_QWORD *)&v236[1] = v311;
          v237 = v312;
        }
        if ( (v342 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v311);
        v342 = 0;
        goto LABEL_87;
      }
      v310 = v307;
      v309 = v306;
      v308 = *(_OWORD *)v305;
      v347 = 1;
      v304 = v307;
      v303 = v306;
      v302 = *(_OWORD *)v305;
      v5 = (char **)v258;
      uu_join::State::extend(src, v258, v277);
      if ( src[0] == 0x8000000000000001LL )
      {
        v341 = 1;
        v317 = src[1];
        v318 = src[2];
        v120 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v287);
        v103 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v120);
        v319 = v103;
        if ( v103 )
        {
          v5 = &off_12E158;
          *(_QWORD *)&v236[1] = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                                  v319,
                                  &off_12E158);
          v237 = v45;
        }
        else
        {
          v341 = 0;
          *(_QWORD *)&v236[1] = v317;
          v237 = v318;
        }
        if ( (v341 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v317);
        v341 = 0;
        goto LABEL_80;
      }
      memcpy(dest, src, sizeof(dest));
      v346 = 1;
      memcpy(v314, dest, sizeof(v314));
      if ( (*(_BYTE *)(a5 + 90) & 1) != 0 )
      {
        v116 = uu_join::State::combine((int)v239, (int)v287, (int)v258, (int)v283);
        v320 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v116);
        if ( v320 )
        {
          v5 = &off_12E140;
          *(_QWORD *)&v236[1] = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                                  v320,
                                  &off_12E140);
          v237 = v44;
          core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(v314);
LABEL_80:
          v346 = 0;
          core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v302);
LABEL_87:
          v347 = 0;
          goto LABEL_37;
        }
      }
      v347 = 0;
      v321[2] = v304;
      v321[1] = v303;
      v321[0] = v302;
      uu_join::State::reset(v239, v321);
      v346 = 0;
      v322[2] = v314[2];
      v322[1] = v314[1];
      v322[0] = v314[0];
      uu_join::State::reset(v258, v322);
      v346 = 0;
      v347 = 0;
    }
  }
  v5 = (char **)v287;
  v19 = uu_join::State::finalize(v239, v287, v277, v283);
  v323 = v19;
  v324 = v20;
  if ( v19 != 0 )
  {
    v340 = 1;
    *(_QWORD *)v325 = v323;
    v326 = v324;
    v208 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v287);
    v205 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v208);
    *(_QWORD *)v327 = v205;
    LODWORD(v47) = v205;
    if ( v205 )
    {
      v5 = &off_12E0C0;
      v48 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *(_QWORD *)v327,
              &off_12E0C0);
      *(_QWORD *)&v236[1] = v48;
      v237 = v47;
    }
    else
    {
      v340 = 0;
      LODWORD(v48) = v325[0];
      *(_QWORD *)&v236[1] = *(_QWORD *)v325;
      v237 = v326;
    }
    if ( (v340 & 1) != 0 )
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v325);
    v340 = 0;
LABEL_37:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(
      (int)v287,
      (int)v5,
      v47,
      v48,
      v49,
      v50,
      v60,
      v65);
    core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(v283);
    core::ptr::drop_in_place<uu_join::State>((int)v258, (int)v5, v51, v52, v53, v54, v64, v69);
    goto LABEL_103;
  }
  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v323);
  v5 = (char **)v287;
  v21 = uu_join::State::finalize(v258, v287, v277, v283);
  v328 = v21;
  v329 = v22;
  if ( v21 != 0 )
  {
    v339 = 1;
    v330 = v328;
    v331 = v329;
    v194 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v287);
    v191 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v194);
    v332 = v191;
    LODWORD(v47) = v191;
    if ( v191 )
    {
      v5 = &off_12E0D8;
      v48 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v332,
              &off_12E0D8);
      *(_QWORD *)&v236[1] = v48;
      v237 = v47;
    }
    else
    {
      v339 = 0;
      LODWORD(v48) = v330;
      *(_QWORD *)&v236[1] = v330;
      v237 = v331;
    }
    if ( (v339 & 1) != 0 )
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v330);
    v339 = 0;
    goto LABEL_37;
  }
  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v328);
  v23 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v287);
  v182 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v23);
  *(_QWORD *)v333 = v182;
  v26 = v182;
  v27 = 0;
  if ( v182 )
  {
    v5 = &off_12E110;
    v48 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *(_QWORD *)v333,
            &off_12E110);
    *(_QWORD *)&v236[1] = v48;
    v237 = v47;
    goto LABEL_37;
  }
  if ( (BYTE10(v244) & 1) != 0 || (BYTE10(v263) & 1) != 0 )
  {
    v337[0] = uucore::execution_phrase();
    v337[1] = v28;
    v350 = v337;
    v351 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v336 = v337;
    *((_QWORD *)&v336 + 1) = <&T as core::fmt::Display>::fmt;
    v335 = v336;
    v5 = (char **)&unk_12E0F0;
    core::fmt::Arguments::new_v1(v334, &unk_12E0F0, &v335);
    std::io::stdio::_eprint(v334);
    uucore::mods::error::set_exit_code(1LL);
  }
  *(_QWORD *)&v236[1] = 0LL;
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(
    (int)v287,
    (int)v5,
    v26,
    v27,
    v24,
    v25,
    v60,
    v65);
  core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(v283);
  core::ptr::drop_in_place<uu_join::State>((int)v258, (int)v5, v29, v30, v31, v32, v62, v67);
  core::ptr::drop_in_place<uu_join::State>((int)v239, (int)v5, v33, v34, v35, v36, v63, v68);
  core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 48);
  if ( (v338 & 1) != 0 )
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
LABEL_55:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a5 + 24);
  return *(_QWORD *)&v236[1];
}
