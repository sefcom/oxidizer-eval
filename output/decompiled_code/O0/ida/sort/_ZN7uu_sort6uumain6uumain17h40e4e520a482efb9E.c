__int64 __fastcall uu_sort::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  int *v20; // rsi
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  int v66; // esi
  __int64 v67; // rdx
  int v68; // edx
  int v69; // r8d
  int v70; // r9d
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  struct _Unwind_Exception *v75; // rdx
  __int64 v76; // [rsp+0h] [rbp-1738h]
  int v77; // [rsp+0h] [rbp-1738h]
  struct _Unwind_Exception *v78; // [rsp+0h] [rbp-1738h]
  int v79; // [rsp+8h] [rbp-1730h]
  int v80; // [rsp+8h] [rbp-1730h]
  int v81; // [rsp+8h] [rbp-1730h]
  struct _Unwind_Exception *v82; // [rsp+10h] [rbp-1728h]
  int v83; // [rsp+10h] [rbp-1728h]
  int v84; // [rsp+10h] [rbp-1728h]
  int v85; // [rsp+18h] [rbp-1720h]
  int v86; // [rsp+18h] [rbp-1720h]
  int v87; // [rsp+18h] [rbp-1720h]
  struct _Unwind_Exception *v88; // [rsp+20h] [rbp-1718h]
  int v89; // [rsp+20h] [rbp-1718h]
  int v90; // [rsp+28h] [rbp-1710h]
  int v91; // [rsp+28h] [rbp-1710h]
  int v92; // [rsp+30h] [rbp-1708h]
  int v93; // [rsp+38h] [rbp-1700h]
  struct _Unwind_Exception *v94; // [rsp+40h] [rbp-16F8h]
  int v95; // [rsp+48h] [rbp-16F0h]
  int v96; // [rsp+50h] [rbp-16E8h]
  int v97; // [rsp+58h] [rbp-16E0h]
  struct _Unwind_Exception *v98; // [rsp+60h] [rbp-16D8h]
  int v99; // [rsp+68h] [rbp-16D0h]
  struct _Unwind_Exception *v100; // [rsp+70h] [rbp-16C8h]
  int v101; // [rsp+78h] [rbp-16C0h]
  __int64 v102; // [rsp+A0h] [rbp-1698h]
  __int64 v103; // [rsp+C0h] [rbp-1678h]
  char v104; // [rsp+E7h] [rbp-1651h]
  char v105; // [rsp+107h] [rbp-1631h]
  int v106; // [rsp+11Ch] [rbp-161Ch]
  char v107; // [rsp+14Fh] [rbp-15E9h]
  __int64 v108; // [rsp+160h] [rbp-15D8h]
  __int64 v109; // [rsp+198h] [rbp-15A0h]
  __int64 v110; // [rsp+1A8h] [rbp-1590h]
  char v111; // [rsp+1B7h] [rbp-1581h]
  __int64 v112; // [rsp+1C8h] [rbp-1570h]
  char v113; // [rsp+1D4h] [rbp-1564h]
  char v114; // [rsp+22Fh] [rbp-1509h]
  __int64 v115; // [rsp+250h] [rbp-14E8h]
  char v116; // [rsp+267h] [rbp-14D1h]
  __int64 v117; // [rsp+278h] [rbp-14C0h]
  __int64 v118; // [rsp+290h] [rbp-14A8h]
  __int64 v119; // [rsp+2A8h] [rbp-1490h]
  __int64 v120; // [rsp+2B0h] [rbp-1488h]
  int v121; // [rsp+2B8h] [rbp-1480h]
  char v122; // [rsp+2C7h] [rbp-1471h]
  __int64 one; // [rsp+2D8h] [rbp-1460h]
  char v124; // [rsp+2E7h] [rbp-1451h]
  __int64 v125; // [rsp+2F8h] [rbp-1440h]
  char v126; // [rsp+307h] [rbp-1431h]
  __int64 v127; // [rsp+318h] [rbp-1420h]
  char v128; // [rsp+327h] [rbp-1411h]
  __int64 v129; // [rsp+338h] [rbp-1400h]
  char v130; // [rsp+347h] [rbp-13F1h]
  __int64 v131; // [rsp+358h] [rbp-13E0h]
  char v132; // [rsp+367h] [rbp-13D1h]
  __int64 v133; // [rsp+378h] [rbp-13C0h]
  char flag; // [rsp+39Eh] [rbp-139Ah]
  char v135; // [rsp+39Fh] [rbp-1399h]
  __int64 v136; // [rsp+3A0h] [rbp-1398h]
  __int64 v137; // [rsp+3C0h] [rbp-1378h]
  int v138[6]; // [rsp+3D0h] [rbp-1368h] BYREF
  int v139[4]; // [rsp+3E8h] [rbp-1350h] BYREF
  __int64 v140; // [rsp+3F8h] [rbp-1340h]
  __int128 v141; // [rsp+400h] [rbp-1338h] BYREF
  __int64 v142; // [rsp+410h] [rbp-1328h]
  __int64 v143; // [rsp+438h] [rbp-1300h]
  unsigned __int64 v144; // [rsp+440h] [rbp-12F8h]
  int v145; // [rsp+448h] [rbp-12F0h]
  char v146; // [rsp+44Ch] [rbp-12ECh]
  char v147; // [rsp+44Dh] [rbp-12EBh]
  char v148; // [rsp+44Eh] [rbp-12EAh]
  char v149; // [rsp+44Fh] [rbp-12E9h]
  char v150; // [rsp+450h] [rbp-12E8h]
  char v151; // [rsp+451h] [rbp-12E7h]
  char v152; // [rsp+452h] [rbp-12E6h]
  char v153; // [rsp+453h] [rbp-12E5h]
  char v154; // [rsp+454h] [rbp-12E4h]
  char v155; // [rsp+455h] [rbp-12E3h]
  char v156; // [rsp+456h] [rbp-12E2h]
  __int64 v157; // [rsp+457h] [rbp-12E1h] BYREF
  __int64 v158; // [rsp+45Fh] [rbp-12D9h]
  char v159; // [rsp+467h] [rbp-12D1h]
  char v160; // [rsp+468h] [rbp-12D0h]
  char v161; // [rsp+469h] [rbp-12CFh]
  _OWORD v162[6]; // [rsp+470h] [rbp-12C8h] BYREF
  __int64 v163; // [rsp+4D0h] [rbp-1268h]
  int v164[4]; // [rsp+4E0h] [rbp-1258h] BYREF
  __int128 v165; // [rsp+4F0h] [rbp-1248h]
  __int128 v166; // [rsp+500h] [rbp-1238h]
  __int128 v167; // [rsp+510h] [rbp-1228h]
  __int128 v168; // [rsp+520h] [rbp-1218h]
  __int128 v169; // [rsp+530h] [rbp-1208h]
  __int64 v170; // [rsp+540h] [rbp-11F8h]
  int v171[124]; // [rsp+548h] [rbp-11F0h] BYREF
  __int64 v172; // [rsp+738h] [rbp-1000h]
  __int128 v173; // [rsp+810h] [rbp-F28h]
  __int128 v174; // [rsp+820h] [rbp-F18h]
  __int128 v175; // [rsp+830h] [rbp-F08h]
  __int128 v176; // [rsp+840h] [rbp-EF8h]
  __int128 v177; // [rsp+850h] [rbp-EE8h]
  __int128 v178; // [rsp+860h] [rbp-ED8h]
  __int64 v179; // [rsp+870h] [rbp-EC8h]
  __int64 v180; // [rsp+878h] [rbp-EC0h] BYREF
  __int128 v181; // [rsp+880h] [rbp-EB8h] BYREF
  __int64 v182; // [rsp+890h] [rbp-EA8h]
  _BYTE v183[24]; // [rsp+8A0h] [rbp-E98h] BYREF
  _BYTE v184[24]; // [rsp+8B8h] [rbp-E80h] BYREF
  _BYTE v185[64]; // [rsp+8D0h] [rbp-E68h] BYREF
  __int128 v186; // [rsp+910h] [rbp-E28h] BYREF
  __int64 v187; // [rsp+920h] [rbp-E18h]
  _QWORD v188[2]; // [rsp+928h] [rbp-E10h] BYREF
  __int64 v189; // [rsp+938h] [rbp-E00h]
  int v190[2]; // [rsp+940h] [rbp-DF8h]
  int v191[2]; // [rsp+948h] [rbp-DF0h]
  __int64 v192; // [rsp+950h] [rbp-DE8h] BYREF
  __int64 v193; // [rsp+958h] [rbp-DE0h]
  __int64 v194; // [rsp+960h] [rbp-DD8h]
  _BYTE v195[24]; // [rsp+968h] [rbp-DD0h] BYREF
  int v196[14]; // [rsp+980h] [rbp-DB8h] BYREF
  _BYTE v197[112]; // [rsp+9B8h] [rbp-D80h] BYREF
  _BYTE v198[112]; // [rsp+A28h] [rbp-D10h] BYREF
  _BYTE v199[64]; // [rsp+A98h] [rbp-CA0h] BYREF
  _BYTE v200[112]; // [rsp+AD8h] [rbp-C60h] BYREF
  __int128 v201; // [rsp+B48h] [rbp-BF0h] BYREF
  __int64 v202; // [rsp+B58h] [rbp-BE0h]
  __int128 v203; // [rsp+B60h] [rbp-BD8h] BYREF
  __int64 v204; // [rsp+B70h] [rbp-BC8h]
  _BYTE v205[24]; // [rsp+B80h] [rbp-BB8h] BYREF
  _BYTE v206[24]; // [rsp+B98h] [rbp-BA0h] BYREF
  _BYTE v207[24]; // [rsp+BB0h] [rbp-B88h] BYREF
  _BYTE v208[71]; // [rsp+BC8h] [rbp-B70h] BYREF
  char v209; // [rsp+C0Fh] [rbp-B29h]
  _QWORD v210[2]; // [rsp+C10h] [rbp-B28h] BYREF
  _QWORD v211[2]; // [rsp+C20h] [rbp-B18h] BYREF
  _QWORD v212[2]; // [rsp+C30h] [rbp-B08h] BYREF
  _QWORD v213[2]; // [rsp+C40h] [rbp-AF8h] BYREF
  _QWORD v214[2]; // [rsp+C50h] [rbp-AE8h] BYREF
  _QWORD v215[2]; // [rsp+C60h] [rbp-AD8h] BYREF
  _BYTE v216[17]; // [rsp+C77h] [rbp-AC1h]
  __int64 v217; // [rsp+C88h] [rbp-AB0h] BYREF
  __int64 v218; // [rsp+C90h] [rbp-AA8h]
  __int128 v219; // [rsp+C98h] [rbp-AA0h] BYREF
  __int64 v220; // [rsp+CA8h] [rbp-A90h]
  _BYTE v221[24]; // [rsp+CB0h] [rbp-A88h] BYREF
  __int64 v222; // [rsp+CC8h] [rbp-A70h] BYREF
  __int64 v223; // [rsp+CD0h] [rbp-A68h]
  int v224[4]; // [rsp+CD8h] [rbp-A60h] BYREF
  int v225[2]; // [rsp+CE8h] [rbp-A50h] BYREF
  __int64 v226; // [rsp+CF0h] [rbp-A48h]
  int v227[16]; // [rsp+CF8h] [rbp-A40h] BYREF
  _BYTE v228[24]; // [rsp+D38h] [rbp-A00h] BYREF
  _BYTE v229[24]; // [rsp+D50h] [rbp-9E8h] BYREF
  __int128 v230; // [rsp+D68h] [rbp-9D0h] BYREF
  __int64 v231; // [rsp+D78h] [rbp-9C0h]
  __int64 v232; // [rsp+D80h] [rbp-9B8h]
  __int64 v233; // [rsp+D88h] [rbp-9B0h] BYREF
  _BYTE v234[8]; // [rsp+D90h] [rbp-9A8h] BYREF
  unsigned __int64 v235; // [rsp+D98h] [rbp-9A0h]
  _BYTE v236[48]; // [rsp+DA0h] [rbp-998h] BYREF
  __int128 v237; // [rsp+DD0h] [rbp-968h] BYREF
  __int128 v238; // [rsp+DE0h] [rbp-958h]
  _QWORD v239[2]; // [rsp+DF0h] [rbp-948h] BYREF
  _BYTE v240[48]; // [rsp+E00h] [rbp-938h] BYREF
  __int128 v241; // [rsp+E30h] [rbp-908h] BYREF
  __int128 v242; // [rsp+E40h] [rbp-8F8h]
  char v243; // [rsp+E57h] [rbp-8E1h] BYREF
  __int128 v244; // [rsp+E58h] [rbp-8E0h]
  __int64 v245; // [rsp+E68h] [rbp-8D0h]
  _BYTE v246[48]; // [rsp+E70h] [rbp-8C8h] BYREF
  __int128 v247; // [rsp+EA0h] [rbp-898h] BYREF
  __int128 v248; // [rsp+EB0h] [rbp-888h]
  _QWORD v249[2]; // [rsp+EC0h] [rbp-878h] BYREF
  _BYTE v250[48]; // [rsp+ED0h] [rbp-868h] BYREF
  __int128 v251; // [rsp+F00h] [rbp-838h] BYREF
  __int128 v252; // [rsp+F18h] [rbp-820h]
  _BYTE v253[32]; // [rsp+F28h] [rbp-810h] BYREF
  __int128 v254; // [rsp+F48h] [rbp-7F0h] BYREF
  __int64 v255; // [rsp+F58h] [rbp-7E0h]
  _BYTE v256[48]; // [rsp+F60h] [rbp-7D8h] BYREF
  __int128 v257; // [rsp+F90h] [rbp-7A8h] BYREF
  __int128 v258; // [rsp+FA0h] [rbp-798h]
  __int64 v259; // [rsp+FB0h] [rbp-788h] BYREF
  __int64 v260; // [rsp+FB8h] [rbp-780h] BYREF
  __int64 v261; // [rsp+FC0h] [rbp-778h]
  _BYTE v262[16]; // [rsp+FC8h] [rbp-770h] BYREF
  __int128 v263; // [rsp+FD8h] [rbp-760h] BYREF
  __int64 v264; // [rsp+FE8h] [rbp-750h]
  _BYTE v265[48]; // [rsp+FF0h] [rbp-748h] BYREF
  __int128 v266; // [rsp+1020h] [rbp-718h] BYREF
  __int128 v267; // [rsp+1030h] [rbp-708h]
  _BYTE v268[32]; // [rsp+1040h] [rbp-6F8h] BYREF
  int v269[4]; // [rsp+1060h] [rbp-6D8h] BYREF
  __int64 v270; // [rsp+1070h] [rbp-6C8h]
  char v271; // [rsp+107Fh] [rbp-6B9h]
  __int64 v272; // [rsp+1080h] [rbp-6B8h]
  __int64 v273; // [rsp+1088h] [rbp-6B0h]
  _BYTE v274[24]; // [rsp+1090h] [rbp-6A8h] BYREF
  _BYTE v275[24]; // [rsp+10A8h] [rbp-690h] BYREF
  int v276[2]; // [rsp+10C0h] [rbp-678h] BYREF
  __int64 v277; // [rsp+10C8h] [rbp-670h]
  __int64 v278; // [rsp+10D0h] [rbp-668h]
  _QWORD v279[3]; // [rsp+10D8h] [rbp-660h] BYREF
  _BYTE v280[48]; // [rsp+10F0h] [rbp-648h] BYREF
  __int128 v281; // [rsp+1120h] [rbp-618h] BYREF
  __int128 v282; // [rsp+1138h] [rbp-600h]
  _BYTE v283[32]; // [rsp+1148h] [rbp-5F0h] BYREF
  __int64 v284; // [rsp+1168h] [rbp-5D0h]
  const char *v285; // [rsp+1170h] [rbp-5C8h] BYREF
  __int64 v286; // [rsp+1178h] [rbp-5C0h]
  __int64 v287; // [rsp+1180h] [rbp-5B8h] BYREF
  const char *v288; // [rsp+1188h] [rbp-5B0h]
  __int64 v289; // [rsp+1190h] [rbp-5A8h]
  _BYTE v290[24]; // [rsp+1198h] [rbp-5A0h] BYREF
  int v291[2]; // [rsp+11B0h] [rbp-588h] BYREF
  __int64 v292; // [rsp+11B8h] [rbp-580h]
  __int64 v293; // [rsp+11C0h] [rbp-578h]
  _QWORD v294[3]; // [rsp+11C8h] [rbp-570h] BYREF
  _BYTE v295[48]; // [rsp+11E0h] [rbp-558h] BYREF
  __int128 v296; // [rsp+1210h] [rbp-528h] BYREF
  __int128 v297; // [rsp+1228h] [rbp-510h]
  _BYTE v298[36]; // [rsp+1238h] [rbp-500h] BYREF
  int v299; // [rsp+125Ch] [rbp-4DCh]
  _QWORD v300[2]; // [rsp+1260h] [rbp-4D8h] BYREF
  _OWORD v301[4]; // [rsp+1270h] [rbp-4C8h] BYREF
  _OWORD v302[4]; // [rsp+12B0h] [rbp-488h] BYREF
  _BYTE src[64]; // [rsp+12F8h] [rbp-440h] BYREF
  _BYTE dest[64]; // [rsp+1338h] [rbp-400h] BYREF
  __int64 v305; // [rsp+1378h] [rbp-3C0h]
  __int128 v306; // [rsp+1380h] [rbp-3B8h]
  __int128 v307; // [rsp+1390h] [rbp-3A8h]
  __int128 v308; // [rsp+13A0h] [rbp-398h]
  __int64 v309; // [rsp+13B0h] [rbp-388h] BYREF
  __int128 v310; // [rsp+13C0h] [rbp-378h] BYREF
  __int128 v311; // [rsp+13D0h] [rbp-368h]
  __int128 v312; // [rsp+13E0h] [rbp-358h]
  __int64 v313; // [rsp+13F0h] [rbp-348h]
  _BYTE v314[56]; // [rsp+13F8h] [rbp-340h] BYREF
  int v315[4]; // [rsp+1430h] [rbp-308h] BYREF
  __int128 v316; // [rsp+1440h] [rbp-2F8h]
  __int128 v317; // [rsp+1450h] [rbp-2E8h]
  __int64 v318; // [rsp+1460h] [rbp-2D8h]
  _BYTE v319[17]; // [rsp+146Fh] [rbp-2C9h]
  __int64 v320; // [rsp+1480h] [rbp-2B8h] BYREF
  __int64 v321; // [rsp+1488h] [rbp-2B0h]
  int v322; // [rsp+1490h] [rbp-2A8h]
  __int16 v323; // [rsp+1494h] [rbp-2A4h]
  int v324[14]; // [rsp+1498h] [rbp-2A0h] BYREF
  __int128 v325; // [rsp+14D0h] [rbp-268h] BYREF
  __int64 v326; // [rsp+14E0h] [rbp-258h]
  char v327; // [rsp+1507h] [rbp-231h]
  _QWORD v328[2]; // [rsp+1508h] [rbp-230h] BYREF
  char v329; // [rsp+1518h] [rbp-220h]
  _BYTE v330[24]; // [rsp+1520h] [rbp-218h] BYREF
  _QWORD v331[2]; // [rsp+1538h] [rbp-200h] BYREF
  __int64 v332; // [rsp+1548h] [rbp-1F0h]
  _QWORD v333[2]; // [rsp+1550h] [rbp-1E8h] BYREF
  __int64 v334; // [rsp+1560h] [rbp-1D8h] BYREF
  __int64 v335; // [rsp+1568h] [rbp-1D0h]
  __int64 v336; // [rsp+1570h] [rbp-1C8h]
  _BYTE v337[24]; // [rsp+1578h] [rbp-1C0h] BYREF
  __int128 v338; // [rsp+1590h] [rbp-1A8h]
  __int128 v339; // [rsp+15A0h] [rbp-198h]
  __int128 v340; // [rsp+15B0h] [rbp-188h] BYREF
  __int128 v341; // [rsp+15C0h] [rbp-178h]
  _BYTE v342[32]; // [rsp+15D0h] [rbp-168h] BYREF
  __int128 v343; // [rsp+15F0h] [rbp-148h]
  __int128 v344; // [rsp+1600h] [rbp-138h]
  int v345[2]; // [rsp+1610h] [rbp-128h]
  __int64 v346; // [rsp+1618h] [rbp-120h]
  _OWORD v347[2]; // [rsp+1620h] [rbp-118h] BYREF
  char v348; // [rsp+1645h] [rbp-F3h]
  char v349; // [rsp+1646h] [rbp-F2h]
  char v350; // [rsp+1647h] [rbp-F1h]
  int v351; // [rsp+1658h] [rbp-E0h]
  __int16 v352; // [rsp+165Ch] [rbp-DCh]
  int v353; // [rsp+1660h] [rbp-D8h]
  unsigned int v354; // [rsp+1664h] [rbp-D4h]
  _QWORD *v355; // [rsp+1668h] [rbp-D0h]
  __int64 (__fastcall *v356)(); // [rsp+1670h] [rbp-C8h]
  _QWORD *v357; // [rsp+1678h] [rbp-C0h]
  __int64 (__fastcall *v358)(); // [rsp+1680h] [rbp-B8h]
  __int64 *v359; // [rsp+1688h] [rbp-B0h]
  __int64 (__fastcall *v360)(); // [rsp+1690h] [rbp-A8h]
  _BYTE *v361; // [rsp+1698h] [rbp-A0h]
  __int64 (__fastcall *v362)(); // [rsp+16A0h] [rbp-98h]
  _BYTE *v363; // [rsp+16A8h] [rbp-90h]
  __int64 (__fastcall *v364)(); // [rsp+16B0h] [rbp-88h]
  _BYTE *v365; // [rsp+16B8h] [rbp-80h]
  __int64 (__fastcall *v366)(); // [rsp+16C0h] [rbp-78h]
  _BYTE *v367; // [rsp+16C8h] [rbp-70h]
  __int64 (__fastcall *v368)(); // [rsp+16D0h] [rbp-68h]
  __int64 *v369; // [rsp+16D8h] [rbp-60h]
  __int64 (__fastcall *v370)(); // [rsp+16E0h] [rbp-58h]
  int v371; // [rsp+16ECh] [rbp-4Ch]
  __int128 v372; // [rsp+16F0h] [rbp-48h] BYREF
  __int64 v373; // [rsp+1700h] [rbp-38h]
  __int64 v374; // [rsp+1718h] [rbp-20h]
  __int64 v375[3]; // [rsp+1720h] [rbp-18h] BYREF

  v172 = 0LL;
  v349 = 0;
  v348 = 0;
  v350 = 1;
  <uu_sort::GlobalSettings as core::default::Default>::default(v138);
  uu_sort::uu_app(v171);
  v350 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v164,
    (int)v171,
    a1,
    a2,
    v2,
    v3,
    v76,
    v79,
    v82,
    v85);
  if ( *(_QWORD *)v164 == 0x8000000000000000LL )
  {
    v180 = *(_QWORD *)&v164[2];
    v136 = clap_builder::error::Error<F>::print(&v180);
    v374 = v136;
    if ( v136 )
    {
      v375[0] = v374;
      core::result::unwrap_failed(aCalledResultUn, 43LL, v375, &off_1CEDD8, &off_1CF508);
    }
    if ( (clap_builder::error::Error<F>::use_stderr(&v180) & 1) != 0 )
      uucore::mods::error::set_exit_code(2LL);
    v137 = 0LL;
    core::ptr::drop_in_place<clap_builder::error::Error>(&v180);
    goto LABEL_123;
  }
  v179 = v170;
  v178 = v169;
  v177 = v168;
  v176 = v167;
  v175 = v166;
  v174 = v165;
  v173 = *(_OWORD *)v164;
  v163 = v170;
  v162[5] = v169;
  v162[4] = v168;
  v162[3] = v167;
  v162[2] = v166;
  v162[1] = v165;
  v162[0] = *(_OWORD *)v164;
  v146 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v162, aDebug, 5LL, &off_1CEF88) & 1;
  v135 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v162, aFiles0From, 11LL);
  if ( (v135 & 1) != 0 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v185, v162, aFiles0From, 11LL, &off_1CEFB8);
    core::option::Option<T>::map(v184, v185);
    core::option::Option<T>::unwrap_or_default(v183, v184);
    alloc::vec::Vec<T>::new(&v186);
    v188[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v183);
    v188[1] = v4;
    while ( 1 )
    {
      v189 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v188);
      if ( !v189 )
      {
        v182 = v187;
        v181 = v186;
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v183);
        goto LABEL_7;
      }
      uu_sort::open(v195, v189);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v192, v195);
      if ( v192 )
        break;
      *(_QWORD *)v190 = v193;
      *(_QWORD *)v191 = v194;
      v349 = 0;
      std::io::buffered::bufreader::BufReader<R>::new((int)v196, v193, v194);
      std::io::BufRead::split(v199, v196, 0LL);
      core::iter::traits::iterator::Iterator::flatten(v198, v199);
      <I as core::iter::traits::collect::IntoIterator>::into_iter(v197, v198);
      memcpy(v200, v197, sizeof(v200));
      while ( 1 )
      {
        <core::iter::adapters::flatten::Flatten<I> as core::iter::traits::iterator::Iterator>::next((unsigned int)&v201);
        if ( (_QWORD)v201 == 0x8000000000000000LL )
          break;
        v204 = v202;
        v203 = v201;
        v72 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v203, v200);
        v92 = v73;
        v93 = v72;
        core::str::converts::from_utf8(v206, v72, v73);
        v74 = core::result::Result<T,E>::expect(v206, aCouldNotParseS, 50LL, &off_1CF4D8);
        v88 = v75;
        v90 = v74;
        <std::ffi::os_str::OsString as core::convert::From<&T>>::from(v205, v74, v75);
        alloc::vec::Vec<T,A>::push(&v186, v205);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v203);
      }
      core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::io::Split<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>>>>(
        v200,
        v200);
      v349 = 0;
    }
    v137 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             v193,
             v194,
             &off_1CF4F0);
    v349 = 0;
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v186);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v183);
    goto LABEL_116;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v208, v162, aFiles, 5LL, &off_1CEFA0);
  core::option::Option<T>::map(v207, v208);
  core::option::Option<T>::unwrap_or_default(&v181, v207);
LABEL_7:
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v162, aHumanNumericSo, 18LL, &off_1CEFD0);
  if ( (flag & 1) != 0
    || (v133 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aSort, 4LL, &off_1CEFE8),
        v210[0] = core::option::Option<T>::map(v133),
        v210[1] = v5,
        v132 = <core::option::Option<T> as core::cmp::PartialEq>::eq(v210, &off_1CF000),
        (v132 & 1) != 0) )
  {
    v209 = 1;
  }
  else if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v162, aMonthSort, 10LL, &off_1CF010) & 1) != 0
         || (v131 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aSort, 4LL, &off_1CF028),
             v211[0] = core::option::Option<T>::map(v131),
             v211[1] = v6,
             v130 = <core::option::Option<T> as core::cmp::PartialEq>::eq(v211, &off_1CF040),
             (v130 & 1) != 0) )
  {
    v209 = 3;
  }
  else if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v162, aGeneralNumeric, 20LL, &off_1CF050) & 1) != 0
         || (v129 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aSort, 4LL, &off_1CF068),
             v212[0] = core::option::Option<T>::map(v129),
             v212[1] = v7,
             v128 = <core::option::Option<T> as core::cmp::PartialEq>::eq(v212, &off_1CF080),
             (v128 & 1) != 0) )
  {
    v209 = 2;
  }
  else if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v162, aNumericSort, 12LL, &off_1CF090) & 1) != 0
         || (v127 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aSort, 4LL, &off_1CF0A8),
             v213[0] = core::option::Option<T>::map(v127),
             v213[1] = v8,
             v126 = <core::option::Option<T> as core::cmp::PartialEq>::eq(v213, &off_1CF0C0),
             (v126 & 1) != 0) )
  {
    v209 = 0;
  }
  else if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v162, aVersionSort, 12LL, &off_1CF0D0) & 1) != 0
         || (v125 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aSort, 4LL, &off_1CF0E8),
             v214[0] = core::option::Option<T>::map(v125),
             v214[1] = v9,
             v124 = <core::option::Option<T> as core::cmp::PartialEq>::eq(v214, &off_1CF100),
             (v124 & 1) != 0) )
  {
    v209 = 4;
  }
  else if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v162, aRandomSort, 11LL, &off_1CF110) & 1) != 0
         || (one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aSort, 4LL, &off_1CF128),
             v215[0] = core::option::Option<T>::map(one),
             v215[1] = v10,
             v122 = <core::option::Option<T> as core::cmp::PartialEq>::eq(v215, &off_1CF140),
             (v122 & 1) != 0) )
  {
    uu_sort::get_rand_string(&v217);
    *(_QWORD *)&v216[1] = v217;
    *(_QWORD *)&v216[9] = v218;
    v216[0] = 1;
    v157 = *(_QWORD *)v216;
    v158 = *(_QWORD *)&v216[8];
    v159 = HIBYTE(v218);
    v209 = 5;
  }
  else
  {
    v209 = 6;
  }
  v160 = v209;
  v149 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v162, aDictionaryOrde, 16LL, &off_1CF150) & 1;
  v150 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v162, aIgnoreNonprint, 18LL, &off_1CF168) & 1;
  if ( (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v162, aParallel, 8LL) & 1) != 0 )
  {
    v120 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aParallel, 8LL, &off_1CF180);
    core::option::Option<T>::map(v221, v120);
    core::option::Option<T>::unwrap_or_else(&v219, v221, &off_1CF198);
    core::ptr::drop_in_place<alloc::string::String>(v139);
    v140 = v220;
    *(_OWORD *)v139 = v219;
    std::env::set_var(
      (int)aRayonNumThread,
      17,
      (int)v139,
      v11,
      v12,
      v13,
      v77,
      v80,
      v83,
      v86,
      (int)v88,
      v90,
      v92,
      v93,
      (int)v94,
      v95,
      v96,
      v97,
      (int)v98,
      v99,
      v100,
      v101);
  }
  v121 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aBufferSize, 11LL, &off_1CF1B0);
  v226 = 1000000000LL;
  *(_QWORD *)v225 = 0LL;
  core::option::Option<T>::map_or((int)v224, v121, (int)v225, v14, v15, v16, v77, v80, v83, v86, v88, v90);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v222, v224);
  if ( !v222 )
  {
    v143 = v223;
    v119 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aTemporaryDirec, 19LL, &off_1CF1C8);
    core::option::Option<T>::map(v229, v119);
    core::option::Option<T>::unwrap_or_else(v228, v229, &off_1CF1E0);
    uu_sort::tmp_dir::TmpDirWrapper::new(v227, v228);
    v118 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aCompressProgra, 16LL, &off_1CF1F8);
    core::option::Option<T>::map(&v230, v118);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v141);
    v142 = v231;
    v141 = v230;
    v117 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aBatchSize, 10LL, &off_1CF210);
    v232 = v117;
    if ( v117 == 0 )
    {
LABEL_43:
      v116 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               v162,
               "zero-terminatedmergecheckcheck-silentsilentquietignore-caseignore-leading-blanksreversestableuniqueextra "
               "operand  not allowed with -c-field-separator\\0",
               15LL,
               &off_1CF2A0);
      v161 = uucore::mods::line_ending::LineEnding::from_zero_flag(v116 & 1);
      v151 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               v162,
               "mergecheckcheck-silentsilentquietignore-caseignore-leading-blanksreversestableuniqueextra operand  not al"
               "lowed with -c-field-separator\\0",
               5LL,
               &off_1CF2B8) & 1;
      v155 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
               v162,
               "checkcheck-silentsilentquietignore-caseignore-leading-blanksreversestableuniqueextra operand  not allowed"
               " with -c-field-separator\\0",
               5LL) & 1;
      v113 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               v162,
               "check-silentsilentquietignore-caseignore-leading-blanksreversestableuniqueextra operand  not allowed with"
               " -c-field-separator\\0",
               12LL,
               &off_1CF2D0);
      if ( (v113 & 1) != 0
        || (v112 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                     v162,
                     "checkcheck-silentsilentquietignore-caseignore-leading-blanksreversestableuniqueextra operand  not a"
                     "llowed with -c-field-separator\\0",
                     5LL,
                     &off_1CF2E8),
            v34 = core::option::Option<T>::map(v112),
            v272 = v34,
            v273 = v35,
            v34 == 0
          ? (v271 = 0)
          : (v111 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(
                      v272,
                      v273,
                      "silentquietignore-caseignore-leading-blanksreversestableuniqueextra operand  not allowed with -c-f"
                      "ield-separator\\0",
                      6LL),
             (v111 & 1) != 0
           ? (v271 = 1)
           : (v271 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(
                       v272,
                       v273,
                       "quietignore-caseignore-leading-blanksreversestableuniqueextra operand  not allowed with -c-field-separator\\0",
                       5LL) & 1)),
            (v271 & 1) != 0) )
      {
        v156 = 1;
        v155 = 1;
      }
      v148 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               v162,
               "ignore-caseignore-leading-blanksreversestableuniqueextra operand  not allowed with -c-field-separator\\0",
               11LL,
               &off_1CF300) & 1;
      v147 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               v162,
               "ignore-leading-blanksreversestableuniqueextra operand  not allowed with -c-field-separator\\0",
               21LL,
               &off_1CF318) & 1;
      v152 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               v162,
               "reversestableuniqueextra operand  not allowed with -c-field-separator\\0",
               7LL,
               &off_1CF330) & 1;
      v153 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               v162,
               "stableuniqueextra operand  not allowed with -c-field-separator\\0",
               6LL,
               &off_1CF348) & 1;
      v154 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               v162,
               "uniqueextra operand  not allowed with -c-field-separator\\0",
               6LL,
               &off_1CF360) & 1;
      if ( (alloc::vec::Vec<T,A>::is_empty(&v181) & 1) != 0 )
      {
        <str as alloc::string::ToString>::to_string(v275, "-field-separator\\0", 1LL);
        <T as core::convert::Into<U>>::into(v274, v275, &off_1CF3B0);
        alloc::vec::Vec<T,A>::push(&v181, v274);
      }
      else if ( (v155 & 1) != 0 && alloc::vec::Vec<T,A>::len(&v181) != 1 )
      {
        v109 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(&v181, 1LL, &off_1CF398);
        v36 = <std::ffi::os_str::OsString as core::ops::deref::Deref>::deref(v109);
        <std::ffi::os_str::OsStr as os_display::native::Quotable>::quote(v283, v36, v37);
        v363 = v283;
        v364 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v282 = v283;
        *((_QWORD *)&v282 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v281 = v282;
        core::fmt::Arguments::new_v1(v280, &off_1CF378, &v281);
        alloc::fmt::format(v279, v280);
        *(_QWORD *)v276 = v279[0];
        v277 = v279[1];
        v278 = v279[2];
        v20 = v276;
        v22 = uucore::mods::error::UUsageError::new(
                2,
                (int)v276,
                v38,
                v39,
                v40,
                v41,
                (int)v78,
                v81,
                v84,
                v87,
                v89,
                v91,
                v92,
                v93,
                v94,
                v95);
        v137 = v22;
        goto LABEL_49;
      }
      v110 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
               v162,
               "field-separator\\0",
               15LL,
               &off_1CF3C8);
      v284 = v110;
      if ( v110 != 0 )
      {
        v108 = v284;
        v42 = <std::ffi::os_str::OsString as core::ops::deref::Deref>::deref(v284);
        v44 = std::ffi::os_str::OsStr::to_str(v42, v43);
        core::option::Option<T>::ok_or_else(v290, v44, v45, v108);
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v287, v290);
        if ( v287 )
        {
          LODWORD(v20) = v289;
          v22 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v288,
                  v289,
                  &off_1CF418);
          v137 = v22;
          goto LABEL_49;
        }
        v285 = v288;
        v286 = v289;
        v107 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v285, &off_1CF3E0);
        if ( (v107 & 1) != 0 )
        {
          v285 = "";
          v286 = 1LL;
        }
        if ( core::str::<impl str>::len(v285, v286) != 1 )
        {
          <str as os_display::native::Quotable>::quote(v298, v285, v286);
          v361 = v298;
          v362 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v297 = v298;
          *((_QWORD *)&v297 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          v296 = v297;
          core::fmt::Arguments::new_v1(v295, &off_1CF408, &v296);
          alloc::fmt::format(v294, v295);
          *(_QWORD *)v291 = v294[0];
          v292 = v294[1];
          v293 = v294[2];
          v20 = v291;
          v22 = uucore::mods::error::UUsageError::new(
                  2,
                  (int)v291,
                  v47,
                  v48,
                  v49,
                  v50,
                  (int)v78,
                  v81,
                  v84,
                  v87,
                  v89,
                  v91,
                  v92,
                  v93,
                  v94,
                  v95);
          v137 = v22;
          goto LABEL_49;
        }
        v300[0] = core::str::<impl str>::chars(v285, v286);
        v300[1] = v46;
        v106 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::next(v300);
        v371 = v106;
        if ( v106 == 1114112 )
          core::option::unwrap_failed(&off_1CF3F0);
        v299 = v371;
        v145 = v371;
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v301, v162, aKey, 3LL, &off_1CF430);
      if ( *(_QWORD *)&v301[0] != 0LL )
      {
        v302[3] = v301[3];
        v302[2] = v301[2];
        v302[1] = v301[1];
        v302[0] = v301[0];
        <I as core::iter::traits::collect::IntoIterator>::into_iter(src, v302);
        memcpy(dest, src, sizeof(dest));
        while ( 1 )
        {
          v305 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(dest);
          if ( !v305 )
            break;
          v51 = <alloc::string::String as core::ops::deref::Deref>::deref(v305);
          uu_sort::FieldSelector::parse(v314, v51, v52, v138);
          <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v310, v314);
          if ( HIBYTE(v313) == 2 )
          {
            LODWORD(v20) = DWORD2(v310);
            v22 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                    v310,
                    *((_QWORD *)&v310 + 1),
                    &off_1CF448);
            v137 = v22;
            goto LABEL_49;
          }
          v318 = v313;
          v317 = v312;
          v316 = v311;
          *(_OWORD *)v315 = v310;
          v309 = v313;
          v308 = v312;
          v307 = v311;
          v306 = v310;
          v104 = <uu_sort::SortMode as core::cmp::PartialEq>::eq((char *)&v309 + 5, &unk_295AC);
          if ( (v104 & 1) != 0 && (core::option::Option<T>::is_none(&v157) & 1) != 0 )
          {
            uu_sort::get_rand_string(&v320);
            *(_QWORD *)&v319[1] = v320;
            *(_QWORD *)&v319[9] = v321;
            v319[0] = 1;
            v157 = *(_QWORD *)v319;
            v158 = *(_QWORD *)&v319[8];
            v159 = HIBYTE(v321);
          }
          v318 = v309;
          v317 = v308;
          v316 = v307;
          *(_OWORD *)v315 = v306;
          alloc::vec::Vec<T,A>::push(
            (int)v138,
            (int)v315,
            v53,
            v54,
            v55,
            v56,
            (int)v78,
            v81,
            v84,
            v87,
            v89,
            v91,
            v92,
            v93,
            (int)v94,
            v95,
            v96,
            v97,
            v98,
            v99);
        }
      }
      v105 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v162, aKey, 3LL);
      if ( (v105 & 1) == 0 )
      {
        v103 = <uu_sort::KeySettings as core::convert::From<&uu_sort::GlobalSettings>>::from(v138);
        v351 = v103;
        v352 = WORD2(v103);
        v323 = WORD2(v103);
        v322 = v103;
        v328[0] = 1LL;
        v328[1] = 1LL;
        v329 = v103 & 1;
        v330[16] = 2;
        LOWORD(v354) = WORD2(v103);
        v353 = v103;
        uu_sort::FieldSelector::new(&v325, v328, v330, ((unsigned __int64)v354 << 32) | (unsigned int)v103);
        if ( v327 == 2 )
        {
          v373 = v326;
          v372 = v325;
          core::result::unwrap_failed(aCalledResultUn, 43LL, &v372, &off_1CEDB8, &off_1CF460);
        }
        memcpy(v324, &v325, sizeof(v324));
        alloc::vec::Vec<T,A>::push(
          (int)v138,
          (int)v324,
          v57,
          v58,
          v59,
          v60,
          (int)v78,
          v81,
          v84,
          v87,
          v89,
          v91,
          v92,
          v93,
          (int)v94,
          v95,
          v96,
          v97,
          v98,
          v99);
      }
      v331[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v181);
      v331[1] = v61;
      while ( 1 )
      {
        v332 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v331);
        if ( !v332 )
          break;
        uu_sort::open(v337, v332);
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v334, v337);
        if ( v334 )
        {
          LODWORD(v20) = v336;
          v22 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v335,
                  v336,
                  &off_1CF4A8);
          v137 = v22;
          goto LABEL_49;
        }
        v333[0] = v335;
        v333[1] = v336;
        core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>(v333);
      }
      v102 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v162, aOutput, 6LL, &off_1CF478);
      v62 = core::option::Option<T>::map(v102);
      uu_sort::Output::new(v342, v62, v63);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v340, v342);
      if ( (_QWORD)v340 != 0x8000000000000001LL )
      {
        v344 = v341;
        v343 = v340;
        v348 = 1;
        v339 = v341;
        v338 = v340;
        uu_sort::GlobalSettings::init_precomputed(v138);
        v64 = <alloc::vec::Vec<T,A> as core::ops::deref::DerefMut>::deref_mut(&v181);
        v66 = v65;
        v348 = 0;
        v347[1] = v339;
        v347[0] = v338;
        *(_QWORD *)v345 = uu_sort::exec(v64, v65, v138, v347, v227);
        v346 = v67;
        uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(v227);
        v137 = *(_QWORD *)v345;
        v348 = 0;
        core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>((int)v227, v66, v68, v345[0], v69, v70, v78, v81);
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v181);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v162);
        core::ptr::drop_in_place<uu_sort::GlobalSettings>(v138);
        return v137;
      }
      LODWORD(v20) = v341;
      v22 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *((_QWORD *)&v340 + 1),
              v341,
              &off_1CF490);
      v137 = v22;
      v348 = 0;
      goto LABEL_49;
    }
    v233 = v232;
    v17 = <alloc::string::String as core::ops::deref::Deref>::deref(v232);
    core::str::<impl str>::parse(v234, v17, v18);
    if ( (v234[0] & 1) != 0 )
    {
      v243 = v234[1];
      v115 = core::num::error::ParseIntError::kind(&v243);
      v114 = <core::num::error::IntErrorKind as core::cmp::PartialEq>::eq(v115, &unk_2946E);
      if ( (v114 & 1) != 0 )
      {
        v249[0] = uucore::util_name();
        v249[1] = v31;
        v355 = v249;
        v356 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v248 = v249;
        *((_QWORD *)&v248 + 1) = <&T as core::fmt::Display>::fmt;
        v247 = v248;
        core::fmt::Arguments::new_v1(v246, &unk_1CEF28, &v247);
        std::io::stdio::_eprint(v246);
        v32 = <alloc::string::String as core::ops::deref::Deref>::deref(v233);
        <str as os_display::native::Quotable>::quote(v253, v32, v33);
        v365 = v253;
        v366 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v252 = v253;
        *((_QWORD *)&v252 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v251 = v252;
        core::fmt::Arguments::new_v1(v250, &off_1CF258, &v251);
        std::io::stdio::_eprint(v250);
        uu_sort::get_rlimit(v262);
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v260, v262);
        if ( v260 )
        {
          LODWORD(v20) = v261;
          v22 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v260,
                  v261,
                  &off_1CF288);
          v137 = v22;
          goto LABEL_49;
        }
        v259 = v261;
        v369 = &v259;
        v370 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)&v258 = &v259;
        *((_QWORD *)&v258 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v257 = v258;
        core::fmt::Arguments::new_v1(v256, &off_1CF278, &v257);
        alloc::fmt::format(&v254, v256);
        v244 = v254;
        v245 = v255;
      }
      else
      {
        v25 = <alloc::string::String as core::ops::deref::Deref>::deref(v233);
        <str as os_display::native::Quotable>::quote(v268, v25, v26);
        v367 = v268;
        v368 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v267 = v268;
        *((_QWORD *)&v267 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v266 = v267;
        core::fmt::Arguments::new_v1(v265, &off_1CF248, &v266);
        alloc::fmt::format(&v263, v265);
        v244 = v263;
        v245 = v264;
      }
      v270 = v245;
      *(_OWORD *)v269 = v244;
      v20 = v269;
      v22 = uucore::mods::error::UUsageError::new(
              2,
              (int)v269,
              v27,
              v28,
              v29,
              v30,
              (int)v78,
              v81,
              v84,
              v87,
              v89,
              v91,
              v92,
              v93,
              v94,
              v95);
      v137 = v22;
    }
    else
    {
      if ( v235 >= 2 )
      {
        v144 = v235;
        goto LABEL_43;
      }
      v239[0] = uucore::util_name();
      v239[1] = v19;
      v357 = v239;
      v358 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v238 = v239;
      *((_QWORD *)&v238 + 1) = <&T as core::fmt::Display>::fmt;
      v237 = v238;
      core::fmt::Arguments::new_v1(v236, &unk_1CEF28, &v237);
      std::io::stdio::_eprint(v236);
      v359 = &v233;
      v360 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v242 = &v233;
      *((_QWORD *)&v242 + 1) = <&T as core::fmt::Display>::fmt;
      v241 = v242;
      core::fmt::Arguments::new_v1(v240, &off_1CF228, &v241);
      std::io::stdio::_eprint(v240);
      v20 = (int *)aMinimumBatchSi;
      v22 = uucore::mods::error::UUsageError::new(2LL, aMinimumBatchSi, 36LL);
      v137 = v22;
    }
LABEL_49:
    core::ptr::drop_in_place<uu_sort::tmp_dir::TmpDirWrapper>((int)v227, (int)v20, v21, v22, v23, v24, v78, v81);
    goto LABEL_115;
  }
  v137 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v222,
           v223,
           &off_1CF4C0);
LABEL_115:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v181);
LABEL_116:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v162);
LABEL_123:
  core::ptr::drop_in_place<uu_sort::GlobalSettings>(v138);
  return v137;
}
