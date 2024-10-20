__int64 __fastcall uu_date::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  void *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int128 *v17; // rsi
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // r9d
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // edx
  __int64 v33; // rdx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v39; // rax
  void *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  int v44; // eax
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  int v49; // eax
  int v50; // edx
  int v51; // edx
  int v52; // edx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // [rsp+0h] [rbp-15E8h]
  struct _Unwind_Exception *v60; // [rsp+0h] [rbp-15E8h]
  int v61; // [rsp+0h] [rbp-15E8h]
  int v62; // [rsp+0h] [rbp-15E8h]
  int v63; // [rsp+8h] [rbp-15E0h]
  int v64; // [rsp+8h] [rbp-15E0h]
  int v65; // [rsp+8h] [rbp-15E0h]
  struct _Unwind_Exception *v66; // [rsp+10h] [rbp-15D8h]
  int v67; // [rsp+10h] [rbp-15D8h]
  int v68; // [rsp+10h] [rbp-15D8h]
  int v69; // [rsp+18h] [rbp-15D0h]
  int v70; // [rsp+18h] [rbp-15D0h]
  char v71; // [rsp+18h] [rbp-15D0h]
  int v72; // [rsp+20h] [rbp-15C8h]
  int v73; // [rsp+20h] [rbp-15C8h]
  int v74; // [rsp+28h] [rbp-15C0h]
  int v75; // [rsp+28h] [rbp-15C0h]
  unsigned int v76; // [rsp+2Ch] [rbp-15BCh]
  int v77; // [rsp+30h] [rbp-15B8h]
  int v78; // [rsp+30h] [rbp-15B8h]
  int v79; // [rsp+38h] [rbp-15B0h]
  int v80; // [rsp+38h] [rbp-15B0h]
  struct _Unwind_Exception *v81; // [rsp+40h] [rbp-15A8h]
  int v82; // [rsp+40h] [rbp-15A8h]
  int v83; // [rsp+48h] [rbp-15A0h]
  int v84; // [rsp+48h] [rbp-15A0h]
  struct _Unwind_Exception *v85; // [rsp+50h] [rbp-1598h]
  int v86; // [rsp+50h] [rbp-1598h]
  int v87; // [rsp+58h] [rbp-1590h]
  int v88; // [rsp+58h] [rbp-1590h]
  int v89; // [rsp+60h] [rbp-1588h]
  int v90; // [rsp+60h] [rbp-1588h]
  int v91; // [rsp+68h] [rbp-1580h]
  int v92; // [rsp+68h] [rbp-1580h]
  struct _Unwind_Exception *v93; // [rsp+70h] [rbp-1578h]
  int v94; // [rsp+70h] [rbp-1578h]
  int v95; // [rsp+78h] [rbp-1570h]
  int v96; // [rsp+78h] [rbp-1570h]
  int v97; // [rsp+80h] [rbp-1568h]
  char v98; // [rsp+87h] [rbp-1561h]
  int v99; // [rsp+88h] [rbp-1560h]
  struct _Unwind_Exception *v100; // [rsp+90h] [rbp-1558h]
  int v101; // [rsp+98h] [rbp-1550h]
  int format_string; // [rsp+D0h] [rbp-1518h]
  int v103; // [rsp+D8h] [rbp-1510h]
  void *v104; // [rsp+F0h] [rbp-14F8h]
  void *v105; // [rsp+108h] [rbp-14E0h]
  void *v106; // [rsp+120h] [rbp-14C8h]
  char is_dir; // [rsp+15Fh] [rbp-1489h]
  void *v108; // [rsp+160h] [rbp-1488h]
  void *dest; // [rsp+178h] [rbp-1470h]
  int v110; // [rsp+180h] [rbp-1468h]
  __int64 v111; // [rsp+1A8h] [rbp-1440h]
  __int64 v112; // [rsp+1B8h] [rbp-1430h]
  char flag; // [rsp+20Fh] [rbp-13D9h]
  char v114; // [rsp+227h] [rbp-13C1h]
  __int64 v115; // [rsp+228h] [rbp-13C0h]
  __int64 v116; // [rsp+240h] [rbp-13A8h]
  __int64 v117; // [rsp+250h] [rbp-1398h]
  __int64 v118; // [rsp+268h] [rbp-1380h]
  __int64 v119; // [rsp+270h] [rbp-1378h]
  char v120; // [rsp+27Fh] [rbp-1369h]
  __int64 v121; // [rsp+280h] [rbp-1368h]
  char v122; // [rsp+28Fh] [rbp-1359h]
  __int64 v123; // [rsp+290h] [rbp-1358h]
  char v124; // [rsp+2CFh] [rbp-1319h]
  __int64 v125; // [rsp+2D0h] [rbp-1318h]
  __int64 one; // [rsp+2F8h] [rbp-12F0h]
  __int64 v127; // [rsp+310h] [rbp-12D8h]
  _OWORD v128[6]; // [rsp+320h] [rbp-12C8h] BYREF
  __int64 v129; // [rsp+380h] [rbp-1268h]
  __int128 v130; // [rsp+388h] [rbp-1260h] BYREF
  __int128 v131; // [rsp+398h] [rbp-1250h]
  __int128 v132; // [rsp+3A8h] [rbp-1240h]
  __int128 v133; // [rsp+3B8h] [rbp-1230h]
  __int128 v134; // [rsp+3C8h] [rbp-1220h]
  __int128 v135; // [rsp+3D8h] [rbp-1210h]
  __int64 v136; // [rsp+3E8h] [rbp-1200h]
  int v137[26]; // [rsp+3F0h] [rbp-11F8h] BYREF
  int v138[100]; // [rsp+458h] [rbp-1190h] BYREF
  __int64 v139; // [rsp+5E8h] [rbp-1000h]
  __int128 v140; // [rsp+720h] [rbp-EC8h]
  __int128 v141; // [rsp+730h] [rbp-EB8h]
  __int128 v142; // [rsp+740h] [rbp-EA8h]
  __int128 v143; // [rsp+750h] [rbp-E98h]
  __int128 v144; // [rsp+760h] [rbp-E88h]
  __int128 v145; // [rsp+770h] [rbp-E78h]
  __int64 v146; // [rsp+780h] [rbp-E68h]
  unsigned __int64 v147; // [rsp+790h] [rbp-E58h] BYREF
  __int64 v148; // [rsp+798h] [rbp-E50h]
  __int64 v149; // [rsp+7A0h] [rbp-E48h]
  __int64 v150; // [rsp+7A8h] [rbp-E40h]
  _QWORD v151[3]; // [rsp+7B0h] [rbp-E38h] BYREF
  _QWORD v152[3]; // [rsp+7C8h] [rbp-E20h] BYREF
  _BYTE v153[48]; // [rsp+7E0h] [rbp-E08h] BYREF
  __int128 v154; // [rsp+810h] [rbp-DD8h] BYREF
  __int128 v155; // [rsp+828h] [rbp-DC0h]
  _BYTE v156[32]; // [rsp+838h] [rbp-DB0h] BYREF
  _QWORD v157[3]; // [rsp+858h] [rbp-D90h] BYREF
  char v158; // [rsp+877h] [rbp-D71h]
  _BYTE v159[71]; // [rsp+878h] [rbp-D70h] BYREF
  char v160; // [rsp+8BFh] [rbp-D29h]
  __int64 v161; // [rsp+8C0h] [rbp-D28h] BYREF
  __int64 v162; // [rsp+8C8h] [rbp-D20h]
  __int64 v163; // [rsp+8D0h] [rbp-D18h]
  __int64 v164; // [rsp+8D8h] [rbp-D10h]
  __int64 v165; // [rsp+8E0h] [rbp-D08h]
  __int128 v166; // [rsp+8E8h] [rbp-D00h] BYREF
  __int64 v167; // [rsp+8F8h] [rbp-CF0h] BYREF
  __int128 v168; // [rsp+900h] [rbp-CE8h]
  __int128 v169; // [rsp+910h] [rbp-CD8h]
  _QWORD v170[3]; // [rsp+928h] [rbp-CC0h] BYREF
  __int64 v171; // [rsp+940h] [rbp-CA8h]
  _QWORD v172[3]; // [rsp+948h] [rbp-CA0h] BYREF
  __int128 v173; // [rsp+960h] [rbp-C88h]
  _QWORD v174[6]; // [rsp+970h] [rbp-C78h] BYREF
  __int128 v175; // [rsp+9A0h] [rbp-C48h] BYREF
  __int64 v176; // [rsp+9B0h] [rbp-C38h]
  __int128 v177; // [rsp+9C0h] [rbp-C28h] BYREF
  __int64 v178; // [rsp+9D0h] [rbp-C18h]
  _QWORD v179[3]; // [rsp+9E0h] [rbp-C08h] BYREF
  _QWORD v180[3]; // [rsp+9F8h] [rbp-BF0h] BYREF
  _BYTE v181[48]; // [rsp+A10h] [rbp-BD8h] BYREF
  __int128 v182; // [rsp+A40h] [rbp-BA8h] BYREF
  __int128 v183; // [rsp+A50h] [rbp-B98h]
  _BYTE v184[32]; // [rsp+A60h] [rbp-B88h] BYREF
  __int64 v185; // [rsp+A80h] [rbp-B68h]
  __int64 v186; // [rsp+A88h] [rbp-B60h]
  int v187[2]; // [rsp+A90h] [rbp-B58h] BYREF
  __int64 v188; // [rsp+A98h] [rbp-B50h] BYREF
  __int64 v189; // [rsp+AA0h] [rbp-B48h]
  __int64 v190; // [rsp+AA8h] [rbp-B40h]
  unsigned __int64 v191; // [rsp+AB0h] [rbp-B38h]
  __int64 v192; // [rsp+AB8h] [rbp-B30h]
  __int64 v193; // [rsp+AC0h] [rbp-B28h]
  __int128 v194; // [rsp+AC8h] [rbp-B20h]
  char v195; // [rsp+AD8h] [rbp-B10h]
  unsigned __int64 v196; // [rsp+AE0h] [rbp-B08h]
  __int64 v197; // [rsp+AE8h] [rbp-B00h]
  __int64 v198; // [rsp+AF0h] [rbp-AF8h]
  __int64 v199; // [rsp+AF8h] [rbp-AF0h]
  __int64 v200; // [rsp+B00h] [rbp-AE8h]
  __int64 v201; // [rsp+B08h] [rbp-AE0h]
  __int64 v202; // [rsp+B10h] [rbp-AD8h]
  __int128 v203; // [rsp+B1Ch] [rbp-ACCh]
  __int128 v204; // [rsp+B2Ch] [rbp-ABCh] BYREF
  __int64 v205; // [rsp+B3Ch] [rbp-AACh] BYREF
  int v206; // [rsp+B44h] [rbp-AA4h]
  __int64 v207; // [rsp+B48h] [rbp-AA0h] BYREF
  int v208; // [rsp+B50h] [rbp-A98h]
  __int128 v209; // [rsp+B58h] [rbp-A90h] BYREF
  _BYTE v210[12]; // [rsp+B68h] [rbp-A80h] BYREF
  int v211; // [rsp+B74h] [rbp-A74h] BYREF
  _BYTE v212[16]; // [rsp+B78h] [rbp-A70h] BYREF
  void *v213; // [rsp+B88h] [rbp-A60h]
  __int64 (__fastcall **v214)(); // [rsp+B90h] [rbp-A58h]
  void *v215; // [rsp+B98h] [rbp-A50h]
  __int64 (__fastcall **v216)(); // [rsp+BA0h] [rbp-A48h]
  int v217[12]; // [rsp+BA8h] [rbp-A40h] BYREF
  int v218[6]; // [rsp+BD8h] [rbp-A10h] BYREF
  _BYTE v219[48]; // [rsp+BF0h] [rbp-9F8h] BYREF
  int v220[2]; // [rsp+C20h] [rbp-9C8h] BYREF
  int v221; // [rsp+C28h] [rbp-9C0h]
  int v222[4]; // [rsp+C30h] [rbp-9B8h] BYREF
  int v223[4]; // [rsp+C40h] [rbp-9A8h] BYREF
  __int128 v224; // [rsp+C50h] [rbp-998h]
  _BYTE v225[48]; // [rsp+C60h] [rbp-988h] BYREF
  unsigned __int64 v226; // [rsp+C90h] [rbp-958h] BYREF
  __int128 v227; // [rsp+C98h] [rbp-950h]
  _QWORD v228[3]; // [rsp+CC0h] [rbp-928h] BYREF
  _QWORD v229[3]; // [rsp+CD8h] [rbp-910h] BYREF
  _BYTE v230[48]; // [rsp+CF0h] [rbp-8F8h] BYREF
  __int128 v231; // [rsp+D20h] [rbp-8C8h] BYREF
  __int128 v232; // [rsp+D30h] [rbp-8B8h]
  _BYTE v233[48]; // [rsp+D40h] [rbp-8A8h] BYREF
  int v234[12]; // [rsp+D70h] [rbp-878h] BYREF
  _BYTE v235[48]; // [rsp+DA0h] [rbp-848h] BYREF
  _BYTE v236[48]; // [rsp+DD0h] [rbp-818h] BYREF
  _QWORD v237[3]; // [rsp+E00h] [rbp-7E8h] BYREF
  _QWORD v238[3]; // [rsp+E18h] [rbp-7D0h] BYREF
  _BYTE v239[48]; // [rsp+E30h] [rbp-7B8h] BYREF
  __int128 v240; // [rsp+E60h] [rbp-788h] BYREF
  __int128 v241; // [rsp+E78h] [rbp-770h]
  _BYTE v242[36]; // [rsp+E88h] [rbp-760h] BYREF
  int v243; // [rsp+EACh] [rbp-73Ch]
  __int64 v244; // [rsp+EB0h] [rbp-738h] BYREF
  __int64 v245; // [rsp+EB8h] [rbp-730h]
  _BYTE v246[16]; // [rsp+EC0h] [rbp-728h] BYREF
  int v247[4]; // [rsp+ED0h] [rbp-718h] BYREF
  _BYTE v248[48]; // [rsp+EE0h] [rbp-708h] BYREF
  _BYTE v249[48]; // [rsp+F10h] [rbp-6D8h] BYREF
  _BYTE v250[48]; // [rsp+F40h] [rbp-6A8h] BYREF
  _BYTE v251[48]; // [rsp+F70h] [rbp-678h] BYREF
  _BYTE src[48]; // [rsp+FA0h] [rbp-648h] BYREF
  unsigned __int64 v253; // [rsp+FD0h] [rbp-618h] BYREF
  __int128 v254; // [rsp+FD8h] [rbp-610h]
  __int128 v255; // [rsp+1000h] [rbp-5E8h]
  _QWORD v256[2]; // [rsp+1010h] [rbp-5D8h] BYREF
  _QWORD v257[6]; // [rsp+1020h] [rbp-5C8h] BYREF
  _BYTE v258[24]; // [rsp+1050h] [rbp-598h] BYREF
  __int128 v259; // [rsp+1068h] [rbp-580h]
  __int64 v260; // [rsp+1078h] [rbp-570h]
  int v261[4]; // [rsp+1080h] [rbp-568h] BYREF
  int v262[6]; // [rsp+1090h] [rbp-558h] BYREF
  _QWORD v263[6]; // [rsp+10A8h] [rbp-540h] BYREF
  __int64 v264; // [rsp+10D8h] [rbp-510h] BYREF
  __int64 v265; // [rsp+10E0h] [rbp-508h]
  __int64 v266; // [rsp+10E8h] [rbp-500h]
  _BYTE v267[48]; // [rsp+10F0h] [rbp-4F8h] BYREF
  __int128 v268; // [rsp+1120h] [rbp-4C8h] BYREF
  __int128 v269; // [rsp+1130h] [rbp-4B8h]
  int v270[6]; // [rsp+1140h] [rbp-4A8h] BYREF
  int v271[8]; // [rsp+1158h] [rbp-490h] BYREF
  _BYTE v272[32]; // [rsp+1178h] [rbp-470h] BYREF
  _QWORD v273[6]; // [rsp+1198h] [rbp-450h] BYREF
  __int64 v274; // [rsp+11C8h] [rbp-420h] BYREF
  __int64 v275; // [rsp+11D0h] [rbp-418h]
  __int64 v276; // [rsp+11D8h] [rbp-410h]
  _BYTE v277[48]; // [rsp+11E0h] [rbp-408h] BYREF
  __int128 v278; // [rsp+1210h] [rbp-3D8h] BYREF
  __int128 v279; // [rsp+1228h] [rbp-3C0h]
  int v280[6]; // [rsp+1238h] [rbp-3B0h] BYREF
  int v281[6]; // [rsp+1250h] [rbp-398h] BYREF
  int v282[6]; // [rsp+1268h] [rbp-380h] BYREF
  int v283[20]; // [rsp+1280h] [rbp-368h] BYREF
  _BYTE v284[48]; // [rsp+12D0h] [rbp-318h] BYREF
  __int128 v285; // [rsp+1300h] [rbp-2E8h] BYREF
  __int128 v286; // [rsp+1310h] [rbp-2D8h]
  __int128 v287; // [rsp+1320h] [rbp-2C8h] BYREF
  __int64 v288; // [rsp+1330h] [rbp-2B8h]
  __int128 v289; // [rsp+1340h] [rbp-2A8h] BYREF
  __int64 v290; // [rsp+1350h] [rbp-298h]
  _QWORD v291[2]; // [rsp+1360h] [rbp-288h] BYREF
  _QWORD v292[3]; // [rsp+1370h] [rbp-278h] BYREF
  _QWORD v293[3]; // [rsp+1388h] [rbp-260h] BYREF
  _BYTE v294[48]; // [rsp+13A0h] [rbp-248h] BYREF
  __int128 v295; // [rsp+13D0h] [rbp-218h] BYREF
  __int128 v296; // [rsp+13E0h] [rbp-208h]
  _BYTE v297[32]; // [rsp+13F0h] [rbp-1F8h] BYREF
  _BYTE v298[48]; // [rsp+1410h] [rbp-1D8h] BYREF
  _OWORD v299[2]; // [rsp+1440h] [rbp-1A8h] BYREF
  __int128 v300; // [rsp+1468h] [rbp-180h]
  _QWORD v301[2]; // [rsp+1478h] [rbp-170h] BYREF
  __int128 v302; // [rsp+1488h] [rbp-160h]
  char v303; // [rsp+149Bh] [rbp-14Dh]
  char v304; // [rsp+149Ch] [rbp-14Ch]
  char v305; // [rsp+149Dh] [rbp-14Bh]
  char v306; // [rsp+149Eh] [rbp-14Ah]
  char v307; // [rsp+149Fh] [rbp-149h]
  __int128 v308; // [rsp+14B0h] [rbp-138h] BYREF
  int v309[4]; // [rsp+14C0h] [rbp-128h] BYREF
  int v310[4]; // [rsp+14D0h] [rbp-118h] BYREF
  __int128 v311; // [rsp+14E0h] [rbp-108h] BYREF
  int *v312; // [rsp+14F8h] [rbp-F0h]
  __int64 (__fastcall *v313)(); // [rsp+1500h] [rbp-E8h]
  int *v314; // [rsp+1508h] [rbp-E0h]
  __int64 (__fastcall *v315)(); // [rsp+1510h] [rbp-D8h]
  int *v316; // [rsp+1518h] [rbp-D0h]
  __int64 (__fastcall *v317)(); // [rsp+1520h] [rbp-C8h]
  _QWORD *v318; // [rsp+1528h] [rbp-C0h]
  __int64 (__fastcall *v319)(); // [rsp+1530h] [rbp-B8h]
  _BYTE *v320; // [rsp+1538h] [rbp-B0h]
  __int64 (__fastcall *v321)(); // [rsp+1540h] [rbp-A8h]
  _BYTE *v322; // [rsp+1548h] [rbp-A0h]
  __int64 (__fastcall *v323)(); // [rsp+1550h] [rbp-98h]
  _BYTE *v324; // [rsp+1558h] [rbp-90h]
  __int64 (__fastcall *v325)(); // [rsp+1560h] [rbp-88h]
  _BYTE *v326; // [rsp+1568h] [rbp-80h]
  __int64 (__fastcall *v327)(); // [rsp+1570h] [rbp-78h]
  _QWORD *v328; // [rsp+1578h] [rbp-70h]
  __int64 (__fastcall *v329)(); // [rsp+1580h] [rbp-68h]
  int *v330; // [rsp+1588h] [rbp-60h]
  __int64 (__fastcall *v331)(); // [rsp+1590h] [rbp-58h]

  v139 = 0LL;
  v304 = 0;
  v303 = 0;
  v305 = 0;
  v306 = 0;
  v307 = 1;
  uu_date::uu_app(v138);
  v307 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v137,
    (int)v138,
    a1,
    a2,
    v2,
    v3,
    v59,
    v63,
    v66,
    v69);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v130, v137);
  if ( (_QWORD)v130 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v130 + 1),
             &off_2CE6F0);
  v146 = v136;
  v145 = v135;
  v144 = v134;
  v143 = v133;
  v142 = v132;
  v141 = v131;
  v140 = v130;
  v129 = v136;
  v128[5] = v135;
  v128[4] = v134;
  v128[3] = v133;
  v128[2] = v132;
  v128[1] = v131;
  v128[0] = v130;
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v128, aFormat, 6LL, &off_2CE4B0);
  v150 = one;
  if ( one != 0 )
  {
    v125 = v150;
    v4 = (void *)((__int64 (*)(void))<alloc::string::String as core::ops::deref::Deref>::deref)();
    v124 = core::str::<impl str>::starts_with(v4);
    if ( (v124 & 1) == 0 )
    {
      v5 = <alloc::string::String as core::ops::deref::Deref>::deref(v125);
      <str as os_display::native::Quotable>::quote(v156, v5, v7);
      v326 = v156;
      v327 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v155 = v156;
      *((_QWORD *)&v155 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v154 = v155;
      core::fmt::Arguments::new_v1(v153, &off_2CE4C8, &v154);
      alloc::fmt::format(v152, v153);
      v151[0] = v152[0];
      v151[1] = v152[1];
      v151[2] = v152[2];
      v127 = uucore::mods::error::USimpleError::new(1LL, v151);
LABEL_10:
      v304 = 0;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v128);
      return v127;
    }
    v6 = <alloc::string::String as core::ops::index::Index<I>>::index(v125, 1LL, &off_2CE4D8);
    <str as alloc::string::ToString>::to_string(v157, v6, v8);
    v304 = 1;
    v147 = v157[0];
    v148 = v157[1];
    v149 = v157[2];
  }
  else
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v159, v128, aIso8601, 8LL, &off_2CE4F0);
    v122 = core::option::Option<T>::map((unsigned int)v159);
    v158 = v122;
    if ( v122 != 5 )
    {
      v304 = 1;
      LOBYTE(v148) = v158;
      v147 = 0x8000000000000000LL;
    }
    else if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, aRfcEmail, 9LL, &off_2CE508) & 1) != 0 )
    {
      v304 = 1;
      v147 = 0x8000000000000001LL;
    }
    else
    {
      v121 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v128, aRfc3339, 8LL, &off_2CE520);
      v120 = core::option::Option<T>::map(v121);
      v160 = v120;
      v304 = 1;
      if ( v120 != 3 )
      {
        LOBYTE(v148) = v160;
        v147 = 0x8000000000000002LL;
      }
      else
      {
        v147 = 0x8000000000000004LL;
      }
    }
  }
  v123 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v128, "datethur]", 4LL, &off_2CE538);
  v165 = v123;
  if ( v123 != 0 )
  {
    v119 = v165;
    chrono::offset::local::Local::now(&v166);
    v9 = alloc::string::String::as_str(v119);
    v308 = v166;
    parse_datetime::parse_datetime_at_date(&v167, &v308, v9, v10);
    if ( v167 == 0x8000000000000002LL )
    {
      v169 = v168;
      *(_OWORD *)v309 = v168;
      *(_OWORD *)v310 = v166;
      v117 = chrono::datetime::DateTime<Tz>::signed_duration_since(
               (int)v309,
               (int)v310,
               2,
               0,
               v11,
               v12,
               (int)v60,
               v64,
               v67,
               v70,
               v72,
               v74,
               v77,
               v79,
               v81,
               v83);
      v303 = 1;
      v162 = v117;
      LODWORD(v163) = v13;
      v161 = 4LL;
    }
    else
    {
      <T as core::convert::Into<U>>::into(v170, v119, &off_2CE550);
      v303 = 1;
      v162 = v170[0];
      v163 = v170[1];
      v164 = v170[2];
      v161 = 1LL;
    }
    core::ptr::drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>(&v167);
  }
  else
  {
    v118 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v128, aFile_0, 4LL, &off_2CE568);
    v171 = v118;
    if ( v118 != 0 )
    {
      v115 = v171;
      v14 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(v171);
      v114 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v14, v15, asc_58FA0, 1LL);
      if ( (v114 & 1) != 0 )
      {
        v303 = 1;
        v161 = 3LL;
      }
      else
      {
        <T as core::convert::Into<U>>::into(v172, v115, &off_2CE580);
        v303 = 1;
        v162 = v172[0];
        v163 = v172[1];
        v164 = v172[2];
        v161 = 2LL;
      }
    }
    else
    {
      v303 = 1;
      v161 = 0LL;
    }
  }
  v116 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v128, aSet, 3LL, &off_2CE598);
  core::option::Option<T>::map(v174, v116);
  if ( v174[0] == 0x8000000000000001LL )
  {
    LODWORD(v173) = 0;
  }
  else
  {
    if ( v174[0] != 0x8000000000000000LL )
    {
      v176 = v174[2];
      v175 = *(_OWORD *)v174;
      v178 = v174[5];
      v177 = *(_OWORD *)&v174[3];
      v16 = <alloc::string::String as core::ops::deref::Deref>::deref(&v175);
      <str as os_display::native::Quotable>::quote(v184, v16, v58);
      v320 = v184;
      v321 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v183 = v184;
      *((_QWORD *)&v183 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v182 = v183;
      core::fmt::Arguments::new_v1(v181, &off_2CE4C8, &v182);
      alloc::fmt::format(v180, v181);
      v179[0] = v180[0];
      v179[1] = v180[1];
      v179[2] = v180[2];
      v127 = uucore::mods::error::USimpleError::new(1LL, v179);
      core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(&v177);
      core::ptr::drop_in_place<alloc::string::String>(&v175);
LABEL_78:
      if ( (v303 & 1) != 0 )
        core::ptr::drop_in_place<uu_date::DateSource>(&v161);
      v303 = 0;
      if ( (v304 & 1) != 0 )
        core::ptr::drop_in_place<uu_date::Format>(&v147);
      goto LABEL_10;
    }
    v185 = v174[1];
    v186 = v174[2];
    v173 = *(_OWORD *)&v174[1];
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v128, aUniversal, 9LL, &off_2CE5B0);
  v304 = 0;
  v196 = v147;
  v197 = v148;
  v198 = v149;
  v303 = 0;
  v199 = v161;
  v200 = v162;
  v201 = v163;
  v202 = v164;
  v203 = v173;
  v195 = flag & 1;
  v191 = v147;
  v192 = v148;
  v193 = v149;
  *(_QWORD *)v187 = v161;
  v188 = v162;
  v189 = v163;
  v190 = v164;
  v194 = v173;
  if ( (_DWORD)v173 != 0 )
  {
    v204 = v194;
    if ( (v195 & 1) != 0 )
    {
      v17 = &v204;
      chrono::datetime::DateTime<Tz>::with_timezone(&v205, &v204, 1LL);
    }
    else
    {
      v311 = v204;
      v17 = &v311;
      <T as core::convert::Into<U>>::into(&v205, &v311, &off_2CE5C8);
    }
    v208 = v206;
    v207 = v205;
    v19 = uu_date::set_system_datetime(&v207);
    v127 = v19;
LABEL_47:
    core::ptr::drop_in_place<uu_date::Settings>((int)v187, (int)v17, v18, v19, v20, v21, v60, v64);
    goto LABEL_78;
  }
  if ( (v195 & 1) != 0 )
  {
    chrono::offset::utc::Utc::now(v210);
    v111 = chrono::datetime::DateTime<Tz>::offset(v210);
    v211 = <chrono::offset::utc::Utc as chrono::offset::Offset>::fix(v111);
    chrono::datetime::DateTime<Tz>::with_timezone(&v209, v210, &v211);
  }
  else
  {
    chrono::offset::local::Local::now(v212);
    v112 = chrono::datetime::DateTime<Tz>::offset(v212);
    chrono::datetime::DateTime<Tz>::with_timezone(&v209, v212, v112);
  }
  switch ( *(_QWORD *)v187 )
  {
    case 0LL:
      v255 = v209;
      v254 = v209;
      v253 = 0x8000000000000000LL;
      core::iter::sources::once::once(src, &v253);
      dest = (void *)alloc::alloc::exchange_malloc(48LL, 8LL);
      memcpy(dest, src, 0x30uLL);
      v215 = dest;
      v216 = &off_2CE5E0;
      goto LABEL_55;
    case 1LL:
      <alloc::string::String as core::clone::Clone>::clone(v218, &v188);
      uu_date::parse_date((int)v217, (__int64)v218);
      core::iter::sources::once::once(v219, v217);
      v108 = (void *)alloc::alloc::exchange_malloc(48LL, 8LL);
      memcpy(v108, v219, 0x30uLL);
      v215 = v108;
      v216 = &off_2CE5E0;
      goto LABEL_55;
    case 2LL:
      v24 = ((__int64 (*)(void))<std::path::PathBuf as core::ops::deref::Deref>::deref)();
      is_dir = std::path::Path::is_dir(v24, v25);
      if ( (is_dir & 1) != 0 )
      {
        v30 = <std::path::PathBuf as core::ops::deref::Deref>::deref(&v188);
        <std::path::Path as os_display::native::Quotable>::quote(v242, v30, v31);
        v324 = v242;
        v325 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v241 = v242;
        *((_QWORD *)&v241 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v240 = v241;
        core::fmt::Arguments::new_v1(v239, &off_2CE668, &v240);
        alloc::fmt::format(v238, v239);
        v237[0] = v238[0];
        v237[1] = v238[1];
        v237[2] = v238[2];
        v17 = (__int128 *)v237;
        v19 = uucore::mods::error::USimpleError::new(2LL, v237);
        v127 = v19;
        goto LABEL_62;
      }
      std::fs::File::open(
        (int)v247,
        (int)&v188,
        v26,
        v27,
        v28,
        v29,
        (int)v60,
        v64,
        v67,
        v70,
        v72,
        v74,
        v77,
        v79,
        (int)v81,
        v83,
        v85,
        v87);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v246,
        v247,
        &v188);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v244, v246);
      if ( !v244 )
      {
        v243 = v245;
        v306 = 0;
        std::io::buffered::bufreader::BufReader<R>::new(v249, (unsigned int)v245);
        std::io::BufRead::lines(v248, v249);
        core::iter::traits::iterator::Iterator::map_while(v251, v248);
        core::iter::traits::iterator::Iterator::map(v250, v251);
        v106 = (void *)alloc::alloc::exchange_malloc(48LL, 8LL);
        memcpy(v106, v250, 0x30uLL);
        v215 = v106;
        v216 = &off_2CE618;
        v306 = 0;
        goto LABEL_55;
      }
      LODWORD(v17) = v245;
      v19 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v244,
              v245,
              &off_2CE650);
      v127 = v19;
      v306 = 0;
      goto LABEL_62;
    case 3LL:
      v110 = std::io::stdio::stdin();
      std::io::buffered::bufreader::BufReader<R>::new((int)v234, v110);
      std::io::BufRead::lines(v233, v234);
      core::iter::traits::iterator::Iterator::map_while(v236, v233);
      core::iter::traits::iterator::Iterator::map(v235, v236);
      v105 = (void *)alloc::alloc::exchange_malloc(48LL, 8LL);
      memcpy(v105, v235, 0x30uLL);
      v215 = v105;
      v216 = &off_2CE678;
      goto LABEL_55;
    case 4LL:
      *(_QWORD *)v220 = v188;
      v221 = v189;
      *(_OWORD *)v223 = v209;
      chrono::datetime::DateTime<Tz>::checked_add_signed(
        (int)v222,
        (int)v223,
        v188,
        v189,
        v22,
        v23,
        (int)v60,
        v64,
        v67,
        v70,
        v72,
        v74,
        v77,
        v79,
        (int)v81,
        v83,
        (int)v85,
        v87,
        v89,
        v91,
        v93,
        v95);
      if ( !v222[0] )
      {
        v330 = v220;
        v331 = <chrono::time_delta::TimeDelta as core::fmt::Display>::fmt;
        *(_QWORD *)&v232 = v220;
        *((_QWORD *)&v232 + 1) = <chrono::time_delta::TimeDelta as core::fmt::Display>::fmt;
        v231 = v232;
        core::fmt::Arguments::new_v1(v230, &off_2CE4C8, &v231);
        alloc::fmt::format(v229, v230);
        v228[0] = v229[0];
        v228[1] = v229[1];
        v228[2] = v229[2];
        v17 = (__int128 *)v228;
        v19 = uucore::mods::error::USimpleError::new(1LL, v228);
        v127 = v19;
        goto LABEL_62;
      }
      v224 = *(_OWORD *)v222;
      v227 = *(_OWORD *)v222;
      v226 = 0x8000000000000000LL;
      core::iter::sources::once::once(v225, &v226);
      v104 = (void *)alloc::alloc::exchange_malloc(48LL, 8LL);
      memcpy(v104, v225, 0x30uLL);
      v215 = v104;
      v216 = &off_2CE5E0;
LABEL_55:
      v305 = 1;
      v213 = v215;
      v214 = v216;
      format_string = uu_date::make_format_string(v187);
      v103 = v32;
      v305 = 0;
      v256[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(v213, v214);
      v256[1] = v33;
      while ( 1 )
      {
        <alloc::boxed::Box<I,A> as core::iter::traits::iterator::Iterator>::next(v257, v256);
        if ( v257[0] == 0x8000000000000001LL )
          break;
        memcpy(v258, v257, 0x30uLL);
        if ( *(_QWORD *)v258 == 0x8000000000000000LL )
        {
          *(_OWORD *)v261 = *(_OWORD *)&v258[8];
          alloc::str::<impl str>::replace((int)v262, format_string, v103, (int)aN_0, 2, (int)asc_58FCA, 2uLL);
          v40 = (void *)<alloc::string::String as core::ops::deref::Deref>::deref(v262);
          if ( (core::str::<impl str>::contains(v40) & 1) != 0 )
          {
            v43 = <alloc::string::String as core::ops::deref::Deref>::deref(v262);
            alloc::str::<impl str>::replace((int)v270, v43, v52, (int)asc_58FCA, 2, (int)aN_0, 2uLL);
            v312 = v270;
            v313 = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v269 = v270;
            *((_QWORD *)&v269 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            v268 = v269;
            core::fmt::Arguments::new_v1(v267, &off_2CE6B0, &v268);
            alloc::fmt::format(&v264, v267);
            core::ptr::drop_in_place<alloc::string::String>(v270);
            v263[3] = v264;
            v263[4] = v265;
            v263[5] = v266;
            v263[0] = v264;
            v263[1] = v265;
            v263[2] = v266;
            v17 = (__int128 *)v263;
            v127 = uucore::mods::error::USimpleError::new(1LL, v263);
            goto LABEL_77;
          }
          v41 = <alloc::string::String as core::ops::deref::Deref>::deref(v262);
          v101 = v42;
          chrono::format::strftime::StrftimeItems::new(v271, v41, v42);
          <chrono::format::strftime::StrftimeItems as core::clone::Clone>::clone(v272, v271);
          v98 = core::iter::traits::iterator::Iterator::any(v272);
          if ( (v98 & 1) != 0 )
          {
            v44 = <alloc::string::String as core::ops::deref::Deref>::deref(v262);
            alloc::str::<impl str>::replace((int)v280, v44, v51, (int)asc_58FCA, 2, (int)aN_0, 2uLL);
            v314 = v280;
            v315 = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v279 = v280;
            *((_QWORD *)&v279 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            v278 = v279;
            core::fmt::Arguments::new_v1(v277, &off_2CE6B0, &v278);
            alloc::fmt::format(&v274, v277);
            core::ptr::drop_in_place<alloc::string::String>(v280);
            v273[3] = v274;
            v273[4] = v275;
            v273[5] = v276;
            v273[0] = v274;
            v273[1] = v275;
            v273[2] = v276;
            v17 = (__int128 *)v273;
            v127 = uucore::mods::error::USimpleError::new(1LL, v273);
LABEL_77:
            core::ptr::drop_in_place<alloc::string::String>(v262);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,(alloc::string::String,parse_datetime::ParseDateTimeError)>>>(v256);
LABEL_62:
            v305 = 0;
            goto LABEL_47;
          }
          chrono::datetime::DateTime<Tz>::format_with_items(
            (int)v283,
            (int)v261,
            (int)v271,
            v61,
            v64,
            v67,
            v70,
            v72,
            v74,
            v77,
            v79,
            (int)v81,
            v83,
            (int)v85,
            v87,
            v89,
            v91,
            v93,
            v95);
          <T as alloc::string::ToString>::to_string(
            (int)v282,
            (int)v283,
            v45,
            v46,
            v47,
            v48,
            v62,
            v65,
            v68,
            v71,
            v73,
            v75,
            v78,
            v80,
            v82,
            v84,
            v86,
            v88,
            v90,
            v92,
            v94,
            v96,
            v97,
            v99,
            v100,
            v101);
          v49 = <alloc::string::String as core::ops::deref::Deref>::deref(v282);
          v89 = v50;
          v91 = v49;
          alloc::str::<impl str>::replace((int)v281, v49, v50, (int)asc_58FCA, 2, (int)aN_0, 2uLL);
          core::ptr::drop_in_place<alloc::string::String>(v282);
          core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(v283);
          v316 = v281;
          v317 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v286 = v281;
          *((_QWORD *)&v286 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v285 = v286;
          core::fmt::Arguments::new_v1(v284, &unk_2CE470, &v285);
          std::io::stdio::_print(v284);
          core::ptr::drop_in_place<alloc::string::String>(v281);
          core::ptr::drop_in_place<alloc::string::String>(v262);
        }
        else
        {
          v288 = *(_QWORD *)&v258[16];
          v287 = *(_OWORD *)v258;
          v290 = v260;
          v289 = v259;
          v39 = <alloc::string::String as core::ops::deref::Deref>::deref(&v287);
          <str as os_display::native::Quotable>::quote(v297, v39, v53);
          v322 = v297;
          v323 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v296 = v297;
          *((_QWORD *)&v296 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          v295 = v296;
          core::fmt::Arguments::new_v1(v294, &off_2CE4C8, &v295);
          alloc::fmt::format(v293, v294);
          v292[0] = v293[0];
          v292[1] = v293[1];
          v292[2] = v293[2];
          v54 = uucore::mods::error::USimpleError::new(1LL, v292);
          v77 = v55;
          v79 = v54;
          v291[0] = v54;
          v291[1] = v55;
          v76 = (*(__int64 (__fastcall **)(__int64))(v55 + 96))(v54);
          uucore::mods::error::set_exit_code(v76);
          v56 = uucore::util_name();
          v70 = v57;
          v72 = v56;
          v301[0] = v56;
          v301[1] = v57;
          v328 = v301;
          v329 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v300 = v301;
          *((_QWORD *)&v300 + 1) = <&T as core::fmt::Display>::fmt;
          v318 = v291;
          v319 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          *(_QWORD *)&v302 = v291;
          *((_QWORD *)&v302 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          v299[0] = v300;
          v299[1] = v302;
          core::fmt::Arguments::new_v1(v298, &unk_2CE6C0, v299);
          std::io::stdio::_eprint(v298);
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v291);
          core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(&v289);
          core::ptr::drop_in_place<alloc::string::String>(&v287);
        }
      }
      core::ptr::drop_in_place<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,(alloc::string::String,parse_datetime::ParseDateTimeError)>>>(v256);
      v305 = 0;
      v127 = 0LL;
      core::ptr::drop_in_place<uu_date::Settings>((int)v187, (int)v256, v34, v35, v36, v37, v60, v64);
      v303 = 0;
      v304 = 0;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v128);
      break;
  }
  return v127;
}
