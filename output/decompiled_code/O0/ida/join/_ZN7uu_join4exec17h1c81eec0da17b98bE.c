__int64 __fastcall uu_join::exec(int a1, int a2, int a3, int a4, __int128 *a5, const void *a6)
{
  char **v6; // rsi
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // ecx
  __int64 v29; // rdx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  int v50; // edx
  __int64 v51; // rcx
  int v52; // r8d
  int v53; // r9d
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  int v57; // r9d
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  int v62; // edx
  __int64 v63; // rcx
  int v64; // r8d
  int v65; // r9d
  struct _Unwind_Exception *v66; // [rsp+0h] [rbp-EA0h]
  int v67; // [rsp+0h] [rbp-EA0h]
  struct _Unwind_Exception *v68; // [rsp+0h] [rbp-EA0h]
  struct _Unwind_Exception *v69; // [rsp+0h] [rbp-EA0h]
  struct _Unwind_Exception *v70; // [rsp+0h] [rbp-EA0h]
  struct _Unwind_Exception *v71; // [rsp+0h] [rbp-EA0h]
  struct _Unwind_Exception *v72; // [rsp+0h] [rbp-EA0h]
  int v73; // [rsp+8h] [rbp-E98h]
  int v74; // [rsp+8h] [rbp-E98h]
  int v75; // [rsp+8h] [rbp-E98h]
  int v76; // [rsp+8h] [rbp-E98h]
  int v77; // [rsp+8h] [rbp-E98h]
  int v78; // [rsp+8h] [rbp-E98h]
  int v79; // [rsp+8h] [rbp-E98h]
  int v80; // [rsp+10h] [rbp-E90h]
  int v81; // [rsp+10h] [rbp-E90h]
  int v82; // [rsp+10h] [rbp-E90h]
  int v83; // [rsp+18h] [rbp-E88h]
  int v84; // [rsp+18h] [rbp-E88h]
  int v85; // [rsp+18h] [rbp-E88h]
  int v86; // [rsp+20h] [rbp-E80h]
  int v87; // [rsp+20h] [rbp-E80h]
  int v88; // [rsp+20h] [rbp-E80h]
  int v89; // [rsp+28h] [rbp-E78h]
  int v90; // [rsp+28h] [rbp-E78h]
  int v91; // [rsp+28h] [rbp-E78h]
  int v92; // [rsp+30h] [rbp-E70h]
  int v93; // [rsp+30h] [rbp-E70h]
  int v94; // [rsp+30h] [rbp-E70h]
  int v95; // [rsp+38h] [rbp-E68h]
  int v96; // [rsp+38h] [rbp-E68h]
  int v97; // [rsp+38h] [rbp-E68h]
  __int64 v98; // [rsp+38h] [rbp-E68h]
  int v99; // [rsp+40h] [rbp-E60h]
  int v100; // [rsp+40h] [rbp-E60h]
  int v101; // [rsp+40h] [rbp-E60h]
  __int64 v102; // [rsp+40h] [rbp-E60h]
  int v103; // [rsp+48h] [rbp-E58h]
  int v104; // [rsp+48h] [rbp-E58h]
  int v105; // [rsp+48h] [rbp-E58h]
  int v106; // [rsp+50h] [rbp-E50h]
  int v107; // [rsp+50h] [rbp-E50h]
  int v108; // [rsp+50h] [rbp-E50h]
  int v109; // [rsp+58h] [rbp-E48h]
  int v110; // [rsp+58h] [rbp-E48h]
  int v111; // [rsp+58h] [rbp-E48h]
  __int64 v112; // [rsp+58h] [rbp-E48h]
  int v113; // [rsp+60h] [rbp-E40h]
  int v114; // [rsp+60h] [rbp-E40h]
  int v115; // [rsp+60h] [rbp-E40h]
  int v116; // [rsp+68h] [rbp-E38h]
  int v117; // [rsp+68h] [rbp-E38h]
  int v118; // [rsp+68h] [rbp-E38h]
  int v119; // [rsp+70h] [rbp-E30h]
  int v120; // [rsp+70h] [rbp-E30h]
  int v121; // [rsp+70h] [rbp-E30h]
  __int64 v122; // [rsp+70h] [rbp-E30h]
  int v123; // [rsp+78h] [rbp-E28h]
  int v124; // [rsp+78h] [rbp-E28h]
  int v125; // [rsp+78h] [rbp-E28h]
  int v126; // [rsp+80h] [rbp-E20h]
  int v127; // [rsp+80h] [rbp-E20h]
  int v128; // [rsp+80h] [rbp-E20h]
  int v129; // [rsp+88h] [rbp-E18h]
  int v130; // [rsp+88h] [rbp-E18h]
  int v131; // [rsp+88h] [rbp-E18h]
  int v132; // [rsp+90h] [rbp-E10h]
  int v133; // [rsp+90h] [rbp-E10h]
  int v134; // [rsp+90h] [rbp-E10h]
  __int64 v135; // [rsp+90h] [rbp-E10h]
  int v136; // [rsp+98h] [rbp-E08h]
  int v137; // [rsp+98h] [rbp-E08h]
  int v138; // [rsp+98h] [rbp-E08h]
  __int64 v139; // [rsp+98h] [rbp-E08h]
  int v140; // [rsp+A0h] [rbp-E00h]
  int v141; // [rsp+A0h] [rbp-E00h]
  int v142; // [rsp+A0h] [rbp-E00h]
  __int64 v143; // [rsp+A0h] [rbp-E00h]
  int v144; // [rsp+A8h] [rbp-DF8h]
  int v145; // [rsp+A8h] [rbp-DF8h]
  int v146; // [rsp+A8h] [rbp-DF8h]
  int v147; // [rsp+B0h] [rbp-DF0h]
  char v148; // [rsp+B0h] [rbp-DF0h]
  int v149; // [rsp+B0h] [rbp-DF0h]
  int v150; // [rsp+B8h] [rbp-DE8h]
  int v151; // [rsp+B8h] [rbp-DE8h]
  int v152; // [rsp+B8h] [rbp-DE8h]
  __int64 v153; // [rsp+B8h] [rbp-DE8h]
  int v154; // [rsp+C0h] [rbp-DE0h]
  int v155; // [rsp+C0h] [rbp-DE0h]
  int v156; // [rsp+C0h] [rbp-DE0h]
  __int64 v157; // [rsp+C0h] [rbp-DE0h]
  int v158; // [rsp+C8h] [rbp-DD8h]
  int v159; // [rsp+C8h] [rbp-DD8h]
  int v160; // [rsp+C8h] [rbp-DD8h]
  int v161; // [rsp+D0h] [rbp-DD0h]
  int v162; // [rsp+D0h] [rbp-DD0h]
  int v163; // [rsp+D0h] [rbp-DD0h]
  int v164; // [rsp+D8h] [rbp-DC8h]
  int v165; // [rsp+D8h] [rbp-DC8h]
  int v166; // [rsp+D8h] [rbp-DC8h]
  int v167; // [rsp+E0h] [rbp-DC0h]
  int v168; // [rsp+E0h] [rbp-DC0h]
  int v169; // [rsp+E0h] [rbp-DC0h]
  int v170; // [rsp+E8h] [rbp-DB8h]
  int v171; // [rsp+E8h] [rbp-DB8h]
  int v172; // [rsp+E8h] [rbp-DB8h]
  char v173; // [rsp+EFh] [rbp-DB1h]
  int v174; // [rsp+F0h] [rbp-DB0h]
  int v175; // [rsp+F0h] [rbp-DB0h]
  int v176; // [rsp+F0h] [rbp-DB0h]
  __int64 current_key; // [rsp+F0h] [rbp-DB0h]
  int v178; // [rsp+F8h] [rbp-DA8h]
  int v179; // [rsp+F8h] [rbp-DA8h]
  int v180; // [rsp+F8h] [rbp-DA8h]
  __int64 v181; // [rsp+F8h] [rbp-DA8h]
  struct _Unwind_Exception *v182; // [rsp+100h] [rbp-DA0h]
  int v183; // [rsp+100h] [rbp-DA0h]
  struct _Unwind_Exception *v184; // [rsp+100h] [rbp-DA0h]
  int v185; // [rsp+108h] [rbp-D98h]
  int v186; // [rsp+108h] [rbp-D98h]
  int v187; // [rsp+108h] [rbp-D98h]
  int v188; // [rsp+110h] [rbp-D90h]
  int v189; // [rsp+110h] [rbp-D90h]
  int v190; // [rsp+118h] [rbp-D88h]
  int v191; // [rsp+118h] [rbp-D88h]
  int v192; // [rsp+120h] [rbp-D80h]
  int v193; // [rsp+120h] [rbp-D80h]
  int v194; // [rsp+128h] [rbp-D78h]
  int v195; // [rsp+128h] [rbp-D78h]
  int v196; // [rsp+130h] [rbp-D70h]
  int v197; // [rsp+130h] [rbp-D70h]
  __int64 v198; // [rsp+130h] [rbp-D70h]
  int v199; // [rsp+138h] [rbp-D68h]
  int v200; // [rsp+138h] [rbp-D68h]
  int v201; // [rsp+140h] [rbp-D60h]
  int v202; // [rsp+140h] [rbp-D60h]
  int v203; // [rsp+148h] [rbp-D58h]
  int v204; // [rsp+148h] [rbp-D58h]
  int v205; // [rsp+150h] [rbp-D50h]
  int v206; // [rsp+150h] [rbp-D50h]
  __int64 v207; // [rsp+150h] [rbp-D50h]
  int v208; // [rsp+158h] [rbp-D48h]
  int v209; // [rsp+158h] [rbp-D48h]
  __int64 v210; // [rsp+158h] [rbp-D48h]
  int v211; // [rsp+160h] [rbp-D40h]
  int v212; // [rsp+160h] [rbp-D40h]
  int v213; // [rsp+168h] [rbp-D38h]
  int v214; // [rsp+168h] [rbp-D38h]
  int v215; // [rsp+170h] [rbp-D30h]
  int v216; // [rsp+170h] [rbp-D30h]
  int v217; // [rsp+178h] [rbp-D28h]
  int v218; // [rsp+178h] [rbp-D28h]
  int v219; // [rsp+180h] [rbp-D20h]
  int v220; // [rsp+180h] [rbp-D20h]
  __int64 v221; // [rsp+180h] [rbp-D20h]
  int v222; // [rsp+188h] [rbp-D18h]
  int v223; // [rsp+188h] [rbp-D18h]
  __int64 v224; // [rsp+188h] [rbp-D18h]
  int v225; // [rsp+190h] [rbp-D10h]
  int v226; // [rsp+190h] [rbp-D10h]
  int v227; // [rsp+198h] [rbp-D08h]
  int v228; // [rsp+198h] [rbp-D08h]
  struct _Unwind_Exception *v229; // [rsp+1A0h] [rbp-D00h]
  struct _Unwind_Exception *v230; // [rsp+1A0h] [rbp-D00h]
  int v231; // [rsp+1A8h] [rbp-CF8h]
  int v232; // [rsp+1A8h] [rbp-CF8h]
  __int64 v233; // [rsp+1C8h] [rbp-CD8h]
  __int64 v234; // [rsp+1E0h] [rbp-CC0h]
  __int64 v235; // [rsp+1E8h] [rbp-CB8h]
  __int64 line; // [rsp+200h] [rbp-CA0h]
  __int64 v237; // [rsp+210h] [rbp-C90h]
  char has_line; // [rsp+21Fh] [rbp-C81h]
  char v239; // [rsp+237h] [rbp-C69h]
  __int64 v240; // [rsp+248h] [rbp-C58h]
  __int64 v245; // [rsp+2A8h] [rbp-BF8h]
  __int64 v246; // [rsp+2B8h] [rbp-BE8h] BYREF
  int v247[4]; // [rsp+2C0h] [rbp-BE0h] BYREF
  __int128 v248; // [rsp+2D0h] [rbp-BD0h]
  __int128 v249; // [rsp+2E0h] [rbp-BC0h]
  __int128 v250; // [rsp+2F0h] [rbp-BB0h]
  __int128 v251; // [rsp+300h] [rbp-BA0h]
  __int128 v252; // [rsp+310h] [rbp-B90h]
  __int128 v253; // [rsp+328h] [rbp-B78h] BYREF
  __int128 v254; // [rsp+338h] [rbp-B68h]
  __int128 v255; // [rsp+348h] [rbp-B58h]
  __int128 v256; // [rsp+358h] [rbp-B48h]
  __int128 v257; // [rsp+368h] [rbp-B38h]
  __int128 v258; // [rsp+378h] [rbp-B28h]
  _BYTE v259[104]; // [rsp+388h] [rbp-B18h] BYREF
  __int128 v260; // [rsp+3F0h] [rbp-AB0h]
  __int128 v261; // [rsp+400h] [rbp-AA0h]
  __int128 v262; // [rsp+410h] [rbp-A90h]
  __int128 v263; // [rsp+420h] [rbp-A80h]
  __int128 v264; // [rsp+430h] [rbp-A70h]
  __int128 v265; // [rsp+440h] [rbp-A60h]
  int v266[4]; // [rsp+450h] [rbp-A50h] BYREF
  __int128 v267; // [rsp+460h] [rbp-A40h]
  __int128 v268; // [rsp+470h] [rbp-A30h]
  __int128 v269; // [rsp+480h] [rbp-A20h]
  __int128 v270; // [rsp+490h] [rbp-A10h]
  __int128 v271; // [rsp+4A0h] [rbp-A00h]
  __int128 v272; // [rsp+4B8h] [rbp-9E8h] BYREF
  __int128 v273; // [rsp+4C8h] [rbp-9D8h]
  __int128 v274; // [rsp+4D8h] [rbp-9C8h]
  __int128 v275; // [rsp+4E8h] [rbp-9B8h]
  __int128 v276; // [rsp+4F8h] [rbp-9A8h]
  __int128 v277; // [rsp+508h] [rbp-998h]
  _BYTE v278[104]; // [rsp+518h] [rbp-988h] BYREF
  __int128 v279; // [rsp+580h] [rbp-920h]
  __int128 v280; // [rsp+590h] [rbp-910h]
  __int128 v281; // [rsp+5A0h] [rbp-900h]
  __int128 v282; // [rsp+5B0h] [rbp-8F0h]
  __int128 v283; // [rsp+5C0h] [rbp-8E0h]
  __int128 v284; // [rsp+5D0h] [rbp-8D0h]
  _BYTE v285[320]; // [rsp+5E0h] [rbp-8C0h] BYREF
  _BYTE v286[296]; // [rsp+720h] [rbp-780h] BYREF
  __int128 v287; // [rsp+848h] [rbp-658h]
  __int64 v288; // [rsp+858h] [rbp-648h]
  __int128 v289; // [rsp+860h] [rbp-640h] BYREF
  __int64 v290; // [rsp+870h] [rbp-630h]
  __int128 v291; // [rsp+878h] [rbp-628h]
  _QWORD v292[3]; // [rsp+888h] [rbp-618h] BYREF
  int v293[88]; // [rsp+8A0h] [rbp-600h] BYREF
  _BYTE dest[288]; // [rsp+A00h] [rbp-4A0h] BYREF
  __int128 v295; // [rsp+B20h] [rbp-380h] BYREF
  __int64 v296; // [rsp+B30h] [rbp-370h]
  __int64 v297; // [rsp+B40h] [rbp-360h] BYREF
  int v298[10]; // [rsp+B48h] [rbp-358h] BYREF
  int v299[2]; // [rsp+B70h] [rbp-330h]
  int v300[2]; // [rsp+B78h] [rbp-328h]
  __int64 v301; // [rsp+B80h] [rbp-320h]
  char v302; // [rsp+B8Fh] [rbp-311h]
  __int64 v303; // [rsp+B90h] [rbp-310h] BYREF
  __int64 v304; // [rsp+B98h] [rbp-308h]
  _QWORD v305[2]; // [rsp+BA0h] [rbp-300h] BYREF
  __int64 v306; // [rsp+BB0h] [rbp-2F0h]
  __int64 v307; // [rsp+BB8h] [rbp-2E8h] BYREF
  __int64 v308; // [rsp+BC0h] [rbp-2E0h]
  _QWORD v309[2]; // [rsp+BC8h] [rbp-2D8h] BYREF
  __int64 v310; // [rsp+BD8h] [rbp-2C8h]
  __int128 v311; // [rsp+BE0h] [rbp-2C0h] BYREF
  __int128 v312; // [rsp+BF0h] [rbp-2B0h]
  __int128 v313; // [rsp+C00h] [rbp-2A0h]
  int v314[4]; // [rsp+C10h] [rbp-290h] BYREF
  __int128 v315; // [rsp+C20h] [rbp-280h]
  __int128 v316; // [rsp+C30h] [rbp-270h]
  __int128 v317; // [rsp+C40h] [rbp-260h]
  __int128 v318; // [rsp+C50h] [rbp-250h]
  __int128 v319; // [rsp+C60h] [rbp-240h]
  _QWORD v320[2]; // [rsp+C78h] [rbp-228h] BYREF
  __int64 v321; // [rsp+C88h] [rbp-218h]
  _OWORD v322[3]; // [rsp+C90h] [rbp-210h] BYREF
  int v323[2]; // [rsp+CC0h] [rbp-1E0h] BYREF
  __int64 v324; // [rsp+CC8h] [rbp-1D8h]
  __int64 v325; // [rsp+CD0h] [rbp-1D0h]
  _BYTE v326[48]; // [rsp+CF0h] [rbp-1B0h] BYREF
  _QWORD v327[2]; // [rsp+D20h] [rbp-180h] BYREF
  __int64 v328; // [rsp+D30h] [rbp-170h]
  __int64 v329; // [rsp+D38h] [rbp-168h]
  _OWORD v330[3]; // [rsp+D40h] [rbp-160h] BYREF
  _OWORD v331[3]; // [rsp+D70h] [rbp-130h] BYREF
  __int64 v332; // [rsp+DA8h] [rbp-F8h] BYREF
  __int64 v333; // [rsp+DB0h] [rbp-F0h]
  int v334[2]; // [rsp+DB8h] [rbp-E8h] BYREF
  __int64 v335; // [rsp+DC0h] [rbp-E0h]
  int v336[2]; // [rsp+DC8h] [rbp-D8h]
  __int64 v337; // [rsp+DD0h] [rbp-D0h] BYREF
  __int64 v338; // [rsp+DD8h] [rbp-C8h]
  _QWORD v339[2]; // [rsp+DE0h] [rbp-C0h] BYREF
  __int64 v340; // [rsp+DF0h] [rbp-B0h]
  int v341[2]; // [rsp+DF8h] [rbp-A8h]
  _BYTE v342[48]; // [rsp+E00h] [rbp-A0h] BYREF
  __int128 v343; // [rsp+E30h] [rbp-70h] BYREF
  __int128 v344; // [rsp+E40h] [rbp-60h]
  _QWORD v345[2]; // [rsp+E50h] [rbp-50h] BYREF
  char v346; // [rsp+E64h] [rbp-3Ch]
  char v347; // [rsp+E65h] [rbp-3Bh]
  char v348; // [rsp+E66h] [rbp-3Ah]
  char v349; // [rsp+E67h] [rbp-39h]
  char v350; // [rsp+E68h] [rbp-38h]
  char v351; // [rsp+E69h] [rbp-37h]
  char v352; // [rsp+E6Ah] [rbp-36h]
  char v353; // [rsp+E6Bh] [rbp-35h]
  char v354; // [rsp+E6Ch] [rbp-34h]
  char v355; // [rsp+E6Dh] [rbp-33h]
  char v356; // [rsp+E6Eh] [rbp-32h]
  char v357; // [rsp+E6Fh] [rbp-31h]
  _QWORD *v358; // [rsp+E80h] [rbp-20h]
  __int64 (__fastcall *v359)(); // [rsp+E88h] [rbp-18h]

  v357 = 0;
  v356 = 0;
  v352 = 0;
  v351 = 0;
  v355 = 0;
  v350 = 0;
  v354 = 0;
  v349 = 0;
  v348 = 0;
  v347 = 0;
  v346 = 1;
  v353 = 1;
  v246 = std::io::stdio::stdin();
  v259[103] = 0;
  uu_join::State::new(
    (unsigned int)v259,
    0,
    a1,
    a2,
    (unsigned int)&v246,
    *((_QWORD *)a5 + 9),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 88) & 1);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v253, v259);
  if ( (_QWORD)v253 == 0x8000000000000000LL )
  {
    v245 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v253 + 1),
             v254,
             &off_12E200);
LABEL_104:
    if ( (v353 & 1) != 0 )
      core::ptr::drop_in_place<uu_join::MultiByteSep>(a6);
    core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
    if ( (v346 & 1) != 0 )
      core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
    goto LABEL_55;
  }
  v265 = v258;
  v264 = v257;
  v263 = v256;
  v262 = v255;
  v261 = v254;
  v260 = v253;
  v252 = v258;
  v251 = v257;
  v250 = v256;
  v249 = v255;
  v248 = v254;
  *(_OWORD *)v247 = v253;
  v278[103] = 1;
  uu_join::State::new(
    (unsigned int)v278,
    1,
    a3,
    a4,
    (unsigned int)&v246,
    *((_QWORD *)a5 + 10),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 89) & 1);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v272, v278);
  if ( (_QWORD)v272 == 0x8000000000000000LL )
  {
    LODWORD(v6) = v273;
    v63 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v272 + 1),
            v273,
            &off_12E1E8);
    v245 = v63;
LABEL_103:
    core::ptr::drop_in_place<uu_join::State>((int)v247, (int)v6, v62, v63, v64, v65, v66, v73);
    goto LABEL_104;
  }
  v284 = v277;
  v283 = v276;
  v282 = v275;
  v281 = v274;
  v280 = v273;
  v279 = v272;
  v271 = v277;
  v270 = v276;
  v269 = v275;
  v268 = v274;
  v267 = v273;
  *(_OWORD *)v266 = v272;
  <uu_join::MultiByteSep as core::clone::Clone>::clone((unsigned int)v286);
  uu_join::Input<Sep>::new(v285, v286, *((_BYTE *)a5 + 91) & 1, *((_BYTE *)a5 + 94));
  if ( (*((_BYTE *)a5 + 92) & 1) != 0 )
  {
    v240 = alloc::alloc::exchange_malloc(16LL, 8LL);
    LOBYTE(v291) = 0;
    if ( (v240 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v240, &off_12E0A8);
    *(_OWORD *)v240 = v291;
    alloc::slice::<impl [T]>::into_vec(&v289, v240, 1LL);
    v292[0] = a6;
    v292[1] = (char *)a5 + 92;
    v292[2] = &v289;
    uu_join::exec::{{closure}}((unsigned int)v292, (unsigned int)v247);
    uu_join::exec::{{closure}}((unsigned int)v292, (unsigned int)v266);
    v287 = v289;
    v288 = v290;
  }
  else
  {
    uu_join::State::initialize(
      (int)v247,
      (int)a6,
      *((_BYTE *)a5 + 92) & 1,
      v7,
      v8,
      v9,
      (int)v66,
      v73,
      v80,
      v83,
      v86,
      v89,
      v92,
      v95,
      v99,
      v103,
      v106,
      v109,
      v113,
      v116,
      v119,
      v123,
      v126,
      v129,
      v132,
      v136,
      v140,
      v144,
      v147,
      v150,
      v154,
      v158,
      v161,
      v164,
      v167,
      v170,
      v174,
      v178,
      (int)v182,
      v185,
      v188,
      v190,
      v192,
      v194,
      v196,
      v199,
      v201,
      v203,
      v205,
      v208,
      v211,
      v213,
      v215,
      v217,
      v219,
      v222,
      v225,
      v227,
      v229,
      v231);
    uu_join::State::initialize(
      (int)v266,
      (int)a6,
      *((_BYTE *)a5 + 92) & 1,
      v10,
      v11,
      v12,
      v67,
      v74,
      v81,
      v84,
      v87,
      v90,
      v93,
      v96,
      v100,
      v104,
      v107,
      v110,
      v114,
      v117,
      v120,
      v124,
      v127,
      v130,
      v133,
      v137,
      v141,
      v145,
      v148,
      v151,
      v155,
      v159,
      v162,
      v165,
      v168,
      v171,
      v175,
      v179,
      v183,
      v186,
      v189,
      v191,
      v193,
      v195,
      v197,
      v200,
      v202,
      v204,
      v206,
      v209,
      v212,
      v214,
      v216,
      v218,
      v220,
      v223,
      v226,
      v228,
      v230,
      v232);
    v346 = 0;
    v287 = *a5;
    v288 = *((_QWORD *)a5 + 2);
  }
  v239 = *((_BYTE *)a5 + 95);
  v353 = 0;
  v357 = 1;
  memcpy(dest, a6, sizeof(dest));
  v356 = 1;
  v296 = v288;
  v295 = v287;
  v13 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref((char *)a5 + 24);
  v357 = 0;
  v356 = 0;
  uu_join::Repr<Sep>::new((__int64)v293, v239, dest, &v295, v13, v14);
  v356 = 0;
  v357 = 0;
  v297 = std::io::stdio::stdout();
  v15 = std::io::stdio::Stdout::lock(&v297);
  std::io::buffered::bufwriter::BufWriter<W>::new((int)v298, v15);
  if ( (*((_BYTE *)a5 + 93) & 1) != 0 )
  {
    v237 = uu_join::State::print_headers(v247, v298, v266, v293);
    *(_QWORD *)v299 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v237);
    if ( *(_QWORD *)v299 )
    {
      v6 = &off_12E1D0;
      v51 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *(_QWORD *)v299,
              &off_12E1D0);
      v245 = v51;
    }
    else
    {
      line = uu_join::State::reset_read_line(
               (int)v247,
               (int)v285,
               0,
               0,
               v16,
               v17,
               (int)v66,
               v73,
               v80,
               v83,
               v86,
               v89,
               v92,
               v95,
               v99,
               v103,
               v106,
               v109,
               v113,
               v116,
               v119,
               v123,
               v126,
               v129,
               v132,
               v136,
               v140,
               v144,
               v147,
               v150,
               v154,
               v158,
               v161,
               v164,
               v167,
               v170,
               v174,
               v178,
               v182,
               v185);
      v235 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(line);
      *(_QWORD *)v300 = v235;
      if ( v235 )
      {
        v6 = &off_12E1B8;
        v51 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                *(_QWORD *)v300,
                &off_12E1B8);
        v245 = v51;
      }
      else
      {
        v234 = uu_join::State::reset_read_line(
                 (int)v266,
                 (int)v285,
                 0,
                 0,
                 v18,
                 v19,
                 (int)v66,
                 v73,
                 v82,
                 v85,
                 v88,
                 v91,
                 v94,
                 v97,
                 v101,
                 v105,
                 v108,
                 v111,
                 v115,
                 v118,
                 v121,
                 v125,
                 v128,
                 v131,
                 v134,
                 v138,
                 v142,
                 v146,
                 v149,
                 v152,
                 v156,
                 v160,
                 v163,
                 v166,
                 v169,
                 v172,
                 v176,
                 v180,
                 v184,
                 v187);
        v233 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v234);
        v301 = v233;
        if ( !v233 )
          goto LABEL_15;
        v6 = &off_12E1A0;
        v51 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v301,
                &off_12E1A0);
        v245 = v51;
      }
    }
    goto LABEL_37;
  }
LABEL_15:
  while ( 1 )
  {
    has_line = uu_join::State::has_line(v247);
    if ( (has_line & 1) == 0 || (uu_join::State::has_line(v266) & 1) == 0 )
      break;
    current_key = uu_join::State::get_current_key(v247);
    v181 = v43;
    v44 = uu_join::State::get_current_key(v266);
    v173 = uu_join::Input<Sep>::compare((__int64)v285, current_key, v181, v44, v45);
    v302 = v173;
    if ( v173 == -1 )
    {
      v6 = (char **)v298;
      v46 = uu_join::State::skip_line((int)v247, (int)v298, (char)v285, (int)v293);
      v303 = v46;
      v304 = v48;
      if ( v46 != 0 )
      {
        v352 = 1;
        v305[0] = v303;
        v305[1] = v304;
        v157 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v298);
        v153 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v157);
        v306 = v153;
        v50 = v153;
        if ( v153 )
        {
          v6 = &off_12E128;
          v51 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v306,
                  &off_12E128);
          v245 = v51;
        }
        else
        {
          v352 = 0;
          LODWORD(v51) = v305[0];
          v245 = v305[0];
        }
        if ( (v352 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v305);
        v352 = 0;
        goto LABEL_37;
      }
      core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v303);
      BYTE11(v252) = 1;
      BYTE11(v271) = 1;
    }
    else if ( v173 )
    {
      v6 = (char **)v298;
      v47 = uu_join::State::skip_line((int)v266, (int)v298, (char)v285, (int)v293);
      v307 = v47;
      v308 = v49;
      if ( v47 != 0 )
      {
        v351 = 1;
        v309[0] = v307;
        v309[1] = v308;
        v102 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v298);
        v98 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v102);
        v310 = v98;
        v50 = v98;
        if ( v98 )
        {
          v6 = &off_12E188;
          v51 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v310,
                  &off_12E188);
          v245 = v51;
        }
        else
        {
          v351 = 0;
          LODWORD(v51) = v309[0];
          v245 = v309[0];
        }
        if ( (v351 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v309);
        v351 = 0;
        goto LABEL_37;
      }
      core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v307);
      BYTE11(v252) = 1;
      BYTE11(v271) = 1;
    }
    else
    {
      v6 = (char **)v247;
      uu_join::State::extend(v314, v247, v285);
      if ( *(_QWORD *)v314 == 0x8000000000000001LL )
      {
        v350 = 1;
        v320[0] = *(_QWORD *)&v314[2];
        v320[1] = v315;
        v143 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v298);
        v112 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v143);
        v321 = v112;
        v50 = v112;
        if ( v112 )
        {
          v6 = &off_12E170;
          v51 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v321,
                  &off_12E170);
          v245 = v51;
        }
        else
        {
          v350 = 0;
          LODWORD(v51) = v320[0];
          v245 = v320[0];
        }
        if ( (v350 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v320);
        v350 = 0;
        goto LABEL_87;
      }
      v319 = v316;
      v318 = v315;
      v317 = *(_OWORD *)v314;
      v355 = 1;
      v313 = v316;
      v312 = v315;
      v311 = *(_OWORD *)v314;
      v6 = (char **)v266;
      uu_join::State::extend(v323, v266, v285);
      if ( *(_QWORD *)v323 == 0x8000000000000001LL )
      {
        v349 = 1;
        v327[0] = v324;
        v327[1] = v325;
        v139 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v298);
        v122 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v139);
        v328 = v122;
        if ( v122 )
        {
          v6 = &off_12E158;
          v245 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                   v328,
                   &off_12E158);
        }
        else
        {
          v349 = 0;
          v245 = v327[0];
        }
        if ( (v349 & 1) != 0 )
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v327);
        v349 = 0;
        goto LABEL_80;
      }
      memcpy(v326, v323, sizeof(v326));
      v354 = 1;
      memcpy(v322, v326, sizeof(v322));
      if ( (*((_BYTE *)a5 + 90) & 1) != 0 )
      {
        v135 = uu_join::State::combine((int)v247, (int)v298, (int)v266, (int)v293);
        v329 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v135);
        if ( v329 )
        {
          v6 = &off_12E140;
          v245 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                   v329,
                   &off_12E140);
          core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(v322);
LABEL_80:
          v354 = 0;
          core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v311);
LABEL_87:
          v355 = 0;
          goto LABEL_37;
        }
      }
      v355 = 0;
      v330[2] = v313;
      v330[1] = v312;
      v330[0] = v311;
      uu_join::State::reset(v247, v330);
      v354 = 0;
      v331[2] = v322[2];
      v331[1] = v322[1];
      v331[0] = v322[0];
      uu_join::State::reset(v266, v331);
      v354 = 0;
      v355 = 0;
    }
  }
  v6 = (char **)v298;
  v20 = uu_join::State::finalize(v247, v298, v285, v293);
  v332 = v20;
  v333 = v21;
  if ( v20 != 0 )
  {
    v348 = 1;
    *(_QWORD *)v334 = v332;
    v335 = v333;
    v224 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v298);
    v221 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v224);
    *(_QWORD *)v336 = v221;
    v50 = v221;
    if ( v221 )
    {
      v6 = &off_12E0C0;
      v51 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *(_QWORD *)v336,
              &off_12E0C0);
      v245 = v51;
    }
    else
    {
      v348 = 0;
      LODWORD(v51) = v334[0];
      v245 = *(_QWORD *)v334;
    }
    if ( (v348 & 1) != 0 )
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v334);
    v348 = 0;
LABEL_37:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(
      (int)v298,
      (int)v6,
      v50,
      v51,
      v52,
      v53,
      v66,
      v73);
    core::ptr::drop_in_place<uu_join::Repr<uu_join::MultiByteSep>>((int)v293, (int)v6, v54, v55, v56, v57, v71, v78);
    core::ptr::drop_in_place<uu_join::Input<uu_join::MultiByteSep>>(v285);
    core::ptr::drop_in_place<uu_join::State>((int)v266, (int)v6, v58, v59, v60, v61, v72, v79);
    goto LABEL_103;
  }
  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v332);
  v6 = (char **)v298;
  v22 = uu_join::State::finalize(v266, v298, v285, v293);
  v337 = v22;
  v338 = v23;
  if ( v22 != 0 )
  {
    v347 = 1;
    v339[0] = v337;
    v339[1] = v338;
    v210 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v298);
    v207 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v210);
    v340 = v207;
    v50 = v207;
    if ( v207 )
    {
      v6 = &off_12E0D8;
      v51 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v340,
              &off_12E0D8);
      v245 = v51;
    }
    else
    {
      v347 = 0;
      LODWORD(v51) = v339[0];
      v245 = v339[0];
    }
    if ( (v347 & 1) != 0 )
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v339);
    v347 = 0;
    goto LABEL_37;
  }
  core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v337);
  v24 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush((int)v298);
  v198 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v24);
  *(_QWORD *)v341 = v198;
  v27 = v198;
  v28 = 0;
  if ( v198 )
  {
    v6 = &off_12E110;
    v51 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *(_QWORD *)v341,
            &off_12E110);
    v245 = v51;
    goto LABEL_37;
  }
  if ( (BYTE10(v252) & 1) != 0 || (BYTE10(v271) & 1) != 0 )
  {
    v345[0] = uucore::execution_phrase();
    v345[1] = v29;
    v358 = v345;
    v359 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v344 = v345;
    *((_QWORD *)&v344 + 1) = <&T as core::fmt::Display>::fmt;
    v343 = v344;
    v6 = (char **)&unk_12E0F0;
    core::fmt::Arguments::new_v1(v342, &unk_12E0F0, &v343);
    std::io::stdio::_eprint(v342);
    uucore::mods::error::set_exit_code(1LL);
  }
  v245 = 0LL;
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(
    (int)v298,
    (int)v6,
    v27,
    v28,
    v25,
    v26,
    v66,
    v73);
  core::ptr::drop_in_place<uu_join::Repr<uu_join::MultiByteSep>>((int)v293, (int)v6, v30, v31, v32, v33, v68, v75);
  core::ptr::drop_in_place<uu_join::Input<uu_join::MultiByteSep>>(v285);
  core::ptr::drop_in_place<uu_join::State>((int)v266, (int)v6, v34, v35, v36, v37, v69, v76);
  core::ptr::drop_in_place<uu_join::State>((int)v247, (int)v6, v38, v39, v40, v41, v70, v77);
  core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
  if ( (v346 & 1) != 0 )
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
LABEL_55:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>((char *)a5 + 24);
  return v245;
}
