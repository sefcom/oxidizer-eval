__int64 __fastcall uu_cksum::cksum(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // r9d
  char **v12; // rsi
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rax
  struct _Unwind_Exception *v35; // rdx
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  struct _Unwind_Exception *v51; // [rsp+0h] [rbp-13A8h]
  struct _Unwind_Exception *v52; // [rsp+0h] [rbp-13A8h]
  int v53; // [rsp+8h] [rbp-13A0h]
  int v54; // [rsp+8h] [rbp-13A0h]
  int v55; // [rsp+10h] [rbp-1398h]
  int v56; // [rsp+18h] [rbp-1390h]
  int v57; // [rsp+20h] [rbp-1388h]
  int v58; // [rsp+28h] [rbp-1380h]
  int v59; // [rsp+30h] [rbp-1378h]
  int v60; // [rsp+38h] [rbp-1370h]
  int v61; // [rsp+40h] [rbp-1368h]
  __int64 v62; // [rsp+48h] [rbp-1360h]
  struct _Unwind_Exception *v63; // [rsp+50h] [rbp-1358h]
  int v64; // [rsp+58h] [rbp-1350h]
  __int64 v65; // [rsp+60h] [rbp-1348h]
  int v66; // [rsp+68h] [rbp-1340h]
  struct _Unwind_Exception *v67; // [rsp+70h] [rbp-1338h]
  int v68; // [rsp+78h] [rbp-1330h]
  __int64 v69; // [rsp+80h] [rbp-1328h]
  __int64 v70; // [rsp+88h] [rbp-1320h]
  int v71; // [rsp+90h] [rbp-1318h]
  int v72; // [rsp+98h] [rbp-1310h]
  __int64 v73; // [rsp+A0h] [rbp-1308h]
  int v74; // [rsp+A8h] [rbp-1300h]
  char v75; // [rsp+AEh] [rbp-12FAh]
  char v76; // [rsp+AFh] [rbp-12F9h]
  int v77; // [rsp+B0h] [rbp-12F8h]
  char v78; // [rsp+B8h] [rbp-12F0h]
  int v79; // [rsp+C0h] [rbp-12E8h]
  char v80; // [rsp+C7h] [rbp-12E1h]
  int v81; // [rsp+C8h] [rbp-12E0h]
  int v82; // [rsp+D0h] [rbp-12D8h]
  int v83; // [rsp+D8h] [rbp-12D0h]
  char v84; // [rsp+DFh] [rbp-12C9h]
  int v85; // [rsp+E0h] [rbp-12C8h]
  int v86; // [rsp+E8h] [rbp-12C0h]
  int v87; // [rsp+F0h] [rbp-12B8h]
  int v88; // [rsp+F8h] [rbp-12B0h]
  int v89; // [rsp+100h] [rbp-12A8h]
  int v90; // [rsp+108h] [rbp-12A0h]
  int v91; // [rsp+110h] [rbp-1298h]
  int v92; // [rsp+118h] [rbp-1290h]
  char v93; // [rsp+11Fh] [rbp-1289h]
  int v94; // [rsp+120h] [rbp-1288h]
  int v95; // [rsp+128h] [rbp-1280h]
  struct _Unwind_Exception *v96; // [rsp+130h] [rbp-1278h]
  __int64 v97; // [rsp+130h] [rbp-1278h]
  int v98; // [rsp+138h] [rbp-1270h]
  __int64 v99; // [rsp+138h] [rbp-1270h]
  __int64 v100; // [rsp+158h] [rbp-1250h]
  int v101; // [rsp+164h] [rbp-1244h]
  char v102; // [rsp+187h] [rbp-1221h]
  char v103; // [rsp+19Fh] [rbp-1209h]
  char v104; // [rsp+1CDh] [rbp-11DBh]
  char v105; // [rsp+1CEh] [rbp-11DAh]
  char v106; // [rsp+1CFh] [rbp-11D9h]
  __int64 *v107; // [rsp+200h] [rbp-11A8h]
  void *dest; // [rsp+208h] [rbp-11A0h]
  _DWORD *v109; // [rsp+230h] [rbp-1178h]
  __int64 v110; // [rsp+238h] [rbp-1170h]
  char is_dir; // [rsp+246h] [rbp-1162h]
  char v112; // [rsp+247h] [rbp-1161h]
  unsigned __int64 *v113; // [rsp+2A8h] [rbp-1100h]
  __int64 v115; // [rsp+2D0h] [rbp-10D8h]
  __int128 v116; // [rsp+2E0h] [rbp-10C8h] BYREF
  __int64 v117; // [rsp+2F0h] [rbp-10B8h]
  unsigned __int64 v118; // [rsp+2F8h] [rbp-10B0h]
  unsigned __int64 v119; // [rsp+300h] [rbp-10A8h]
  unsigned __int64 v120; // [rsp+308h] [rbp-10A0h]
  _QWORD v121[4]; // [rsp+310h] [rbp-1098h] BYREF
  __int128 v122; // [rsp+330h] [rbp-1078h] BYREF
  __int64 v123; // [rsp+340h] [rbp-1068h]
  _QWORD v124[4]; // [rsp+350h] [rbp-1058h] BYREF
  __int64 v125; // [rsp+370h] [rbp-1038h]
  __int64 v126; // [rsp+378h] [rbp-1030h]
  int v127[2]; // [rsp+380h] [rbp-1028h] BYREF
  int v128[3]; // [rsp+388h] [rbp-1020h]
  int v129; // [rsp+394h] [rbp-1014h]
  _QWORD v130[2]; // [rsp+398h] [rbp-1010h] BYREF
  int v131[2]; // [rsp+3A8h] [rbp-1000h] BYREF
  int v132[2]; // [rsp+3E0h] [rbp-FC8h]
  int v133[2]; // [rsp+3E8h] [rbp-FC0h]
  _DWORD *v134; // [rsp+3F0h] [rbp-FB8h]
  __int64 (__fastcall **v135)(); // [rsp+3F8h] [rbp-FB0h]
  _BYTE src[40]; // [rsp+400h] [rbp-FA8h] BYREF
  int v137; // [rsp+428h] [rbp-F80h] BYREF
  int v138; // [rsp+42Ch] [rbp-F7Ch]
  int v139[2]; // [rsp+430h] [rbp-F78h]
  __int64 v140; // [rsp+438h] [rbp-F70h] BYREF
  _BYTE v141[48]; // [rsp+440h] [rbp-F68h] BYREF
  _OWORD v142[2]; // [rsp+470h] [rbp-F38h] BYREF
  __int128 v143; // [rsp+490h] [rbp-F18h]
  _QWORD v144[2]; // [rsp+4A0h] [rbp-F08h] BYREF
  __int128 v145; // [rsp+4B0h] [rbp-EF8h]
  _QWORD v146[2]; // [rsp+4C0h] [rbp-EE8h] BYREF
  _QWORD v147[3]; // [rsp+4D0h] [rbp-ED8h] BYREF
  _QWORD v148[3]; // [rsp+4E8h] [rbp-EC0h] BYREF
  _BYTE v149[48]; // [rsp+500h] [rbp-EA8h] BYREF
  __int128 v150; // [rsp+530h] [rbp-E78h] BYREF
  __int128 v151; // [rsp+540h] [rbp-E68h]
  _QWORD v152[2]; // [rsp+550h] [rbp-E58h] BYREF
  _BYTE v153[48]; // [rsp+560h] [rbp-E48h] BYREF
  _OWORD v154[2]; // [rsp+590h] [rbp-E18h] BYREF
  __int128 v155; // [rsp+5B0h] [rbp-DF8h]
  _QWORD v156[2]; // [rsp+5C0h] [rbp-DE8h] BYREF
  __int128 v157; // [rsp+5D0h] [rbp-DD8h]
  __int128 v158; // [rsp+5E0h] [rbp-DC8h] BYREF
  __int128 v159; // [rsp+5F0h] [rbp-DB8h] BYREF
  __int128 v160; // [rsp+600h] [rbp-DA8h] BYREF
  __int128 v161; // [rsp+610h] [rbp-D98h]
  _BYTE v162[32]; // [rsp+620h] [rbp-D88h] BYREF
  int v163[8]; // [rsp+640h] [rbp-D68h] BYREF
  __int128 v164; // [rsp+660h] [rbp-D48h]
  __int128 v165; // [rsp+670h] [rbp-D38h]
  __int128 v166; // [rsp+680h] [rbp-D28h] BYREF
  __int64 v167; // [rsp+690h] [rbp-D18h]
  __int64 v168; // [rsp+698h] [rbp-D10h] BYREF
  __int128 v169; // [rsp+6A0h] [rbp-D08h]
  int v170; // [rsp+6B4h] [rbp-CF4h] BYREF
  __int64 v171; // [rsp+6B8h] [rbp-CF0h]
  __int16 v172; // [rsp+6C2h] [rbp-CE6h] BYREF
  int v173; // [rsp+6C4h] [rbp-CE4h]
  __int64 v174; // [rsp+6C8h] [rbp-CE0h] BYREF
  __int128 v175; // [rsp+6D0h] [rbp-CD8h]
  __int128 v176; // [rsp+6E0h] [rbp-CC8h] BYREF
  __int64 v177; // [rsp+6F0h] [rbp-CB8h]
  __int64 v178; // [rsp+700h] [rbp-CA8h]
  __int64 v179; // [rsp+708h] [rbp-CA0h] BYREF
  __int128 v180; // [rsp+710h] [rbp-C98h] BYREF
  char *v181; // [rsp+720h] [rbp-C88h]
  __int64 v182; // [rsp+730h] [rbp-C78h] BYREF
  __int128 v183; // [rsp+738h] [rbp-C70h]
  __int64 v184; // [rsp+748h] [rbp-C60h] BYREF
  __int128 v185; // [rsp+750h] [rbp-C58h]
  __int128 v186; // [rsp+760h] [rbp-C48h]
  __int64 v187; // [rsp+770h] [rbp-C38h]
  __int64 v188; // [rsp+780h] [rbp-C28h]
  _QWORD v189[3]; // [rsp+788h] [rbp-C20h] BYREF
  _QWORD v190[3]; // [rsp+7A0h] [rbp-C08h] BYREF
  __int64 v191; // [rsp+7B8h] [rbp-BF0h]
  __int64 v192; // [rsp+7C0h] [rbp-BE8h]
  __int64 v193; // [rsp+7C8h] [rbp-BE0h]
  char v194; // [rsp+7D0h] [rbp-BD8h]
  __int64 v195; // [rsp+7D8h] [rbp-BD0h]
  __int64 v196; // [rsp+7E0h] [rbp-BC8h]
  __int64 v197; // [rsp+7E8h] [rbp-BC0h]
  __int64 v198; // [rsp+7F0h] [rbp-BB8h]
  __int64 v199; // [rsp+7F8h] [rbp-BB0h]
  __int64 v200; // [rsp+800h] [rbp-BA8h]
  _QWORD v201[3]; // [rsp+808h] [rbp-BA0h] BYREF
  _BYTE v202[48]; // [rsp+820h] [rbp-B88h] BYREF
  _OWORD v203[3]; // [rsp+850h] [rbp-B58h] BYREF
  __int128 v204; // [rsp+888h] [rbp-B20h]
  __int16 v205; // [rsp+89Ah] [rbp-B0Eh] BYREF
  int v206; // [rsp+89Ch] [rbp-B0Ch]
  __int128 v207; // [rsp+8A0h] [rbp-B08h]
  struct _Unwind_Exception *v208; // [rsp+8B0h] [rbp-AF8h] BYREF
  __int128 v209; // [rsp+8B8h] [rbp-AF0h]
  const char *v210; // [rsp+8C8h] [rbp-AE0h] BYREF
  __int64 v211; // [rsp+8D0h] [rbp-AD8h]
  _QWORD v212[3]; // [rsp+8D8h] [rbp-AD0h] BYREF
  __int64 v213; // [rsp+8F0h] [rbp-AB8h]
  __int64 v214; // [rsp+8F8h] [rbp-AB0h]
  __int64 v215; // [rsp+900h] [rbp-AA8h]
  _QWORD v216[3]; // [rsp+908h] [rbp-AA0h] BYREF
  _BYTE v217[48]; // [rsp+920h] [rbp-A88h] BYREF
  _QWORD v218[8]; // [rsp+950h] [rbp-A58h] BYREF
  __int16 *v219; // [rsp+990h] [rbp-A18h]
  __int64 (__fastcall *v220)(); // [rsp+998h] [rbp-A10h]
  __int16 v221; // [rsp+9A2h] [rbp-A06h] BYREF
  int v222; // [rsp+9A4h] [rbp-A04h]
  _QWORD *v223; // [rsp+9A8h] [rbp-A00h]
  __int64 (__fastcall *v224)(); // [rsp+9B0h] [rbp-9F8h]
  _QWORD v225[3]; // [rsp+9B8h] [rbp-9F0h] BYREF
  const char *v226; // [rsp+9D0h] [rbp-9D8h] BYREF
  __int64 v227; // [rsp+9D8h] [rbp-9D0h]
  __int64 v228; // [rsp+9E0h] [rbp-9C8h]
  __int64 v229; // [rsp+9E8h] [rbp-9C0h]
  _BYTE v230[56]; // [rsp+9F0h] [rbp-9B8h] BYREF
  __int64 v231; // [rsp+A28h] [rbp-980h] BYREF
  __int64 v232; // [rsp+A60h] [rbp-948h] BYREF
  _QWORD v233[5]; // [rsp+A98h] [rbp-910h] BYREF
  int v234; // [rsp+AC0h] [rbp-8E8h]
  int v235; // [rsp+AC4h] [rbp-8E4h]
  char v236; // [rsp+AC8h] [rbp-8E0h]
  char v237; // [rsp+AD7h] [rbp-8D1h]
  __int64 v238; // [rsp+AD8h] [rbp-8D0h]
  __int64 v239; // [rsp+AE0h] [rbp-8C8h]
  __int64 v240; // [rsp+AE8h] [rbp-8C0h]
  __int64 v241; // [rsp+AF0h] [rbp-8B8h]
  _QWORD v242[5]; // [rsp+AF8h] [rbp-8B0h] BYREF
  int v243; // [rsp+B20h] [rbp-888h]
  int v244; // [rsp+B24h] [rbp-884h]
  char v245; // [rsp+B28h] [rbp-880h]
  char v246; // [rsp+B37h] [rbp-871h]
  __int64 v247; // [rsp+B38h] [rbp-870h]
  __int64 v248; // [rsp+B40h] [rbp-868h]
  __int64 v249; // [rsp+B48h] [rbp-860h]
  __int64 v250; // [rsp+B50h] [rbp-858h]
  _QWORD v251[5]; // [rsp+B58h] [rbp-850h] BYREF
  int v252; // [rsp+B80h] [rbp-828h]
  int v253; // [rsp+B84h] [rbp-824h]
  char v254; // [rsp+B88h] [rbp-820h]
  char v255; // [rsp+B97h] [rbp-811h]
  __int64 v256; // [rsp+B98h] [rbp-810h]
  __int64 v257; // [rsp+BA0h] [rbp-808h]
  __int64 v258; // [rsp+BA8h] [rbp-800h]
  __int64 v259; // [rsp+BB0h] [rbp-7F8h]
  _QWORD v260[3]; // [rsp+BB8h] [rbp-7F0h] BYREF
  __int64 v261; // [rsp+BD0h] [rbp-7D8h]
  __int64 v262; // [rsp+BD8h] [rbp-7D0h]
  __int64 v263; // [rsp+BE0h] [rbp-7C8h]
  _QWORD v264[3]; // [rsp+BE8h] [rbp-7C0h] BYREF
  _BYTE v265[48]; // [rsp+C00h] [rbp-7A8h] BYREF
  _OWORD v266[3]; // [rsp+C30h] [rbp-778h] BYREF
  const char **v267; // [rsp+C60h] [rbp-748h]
  __int128 *v268; // [rsp+C68h] [rbp-740h]
  char *v269; // [rsp+C70h] [rbp-738h]
  const char *v270; // [rsp+C78h] [rbp-730h] BYREF
  __int64 v271; // [rsp+C80h] [rbp-728h]
  __int128 v272; // [rsp+C88h] [rbp-720h]
  __int128 v273; // [rsp+C98h] [rbp-710h]
  __int128 v274; // [rsp+CA8h] [rbp-700h]
  _QWORD v275[3]; // [rsp+CB8h] [rbp-6F0h] BYREF
  __int64 v276; // [rsp+CD0h] [rbp-6D8h] BYREF
  __int64 v277; // [rsp+CD8h] [rbp-6D0h]
  __int64 v278; // [rsp+CE0h] [rbp-6C8h]
  _QWORD v279[3]; // [rsp+CE8h] [rbp-6C0h] BYREF
  _BYTE v280[48]; // [rsp+D00h] [rbp-6A8h] BYREF
  __int128 v281; // [rsp+D30h] [rbp-678h] BYREF
  __int128 v282; // [rsp+D48h] [rbp-660h]
  _QWORD v283[4]; // [rsp+D58h] [rbp-650h] BYREF
  __int64 v284; // [rsp+D78h] [rbp-630h] BYREF
  __int64 v285; // [rsp+D80h] [rbp-628h]
  __int64 v286; // [rsp+D88h] [rbp-620h]
  _BYTE v287[48]; // [rsp+D90h] [rbp-618h] BYREF
  __int128 v288; // [rsp+DC0h] [rbp-5E8h] BYREF
  __int128 v289; // [rsp+DD8h] [rbp-5D0h]
  __int64 v290; // [rsp+DE8h] [rbp-5C0h]
  __int64 v291; // [rsp+DF0h] [rbp-5B8h]
  __int64 v292; // [rsp+DF8h] [rbp-5B0h]
  __int64 v293; // [rsp+E00h] [rbp-5A8h]
  __int64 v294; // [rsp+E08h] [rbp-5A0h]
  __int64 v295; // [rsp+E10h] [rbp-598h]
  __int64 v296; // [rsp+E18h] [rbp-590h] BYREF
  __int64 v297; // [rsp+E20h] [rbp-588h]
  __int64 v298; // [rsp+E28h] [rbp-580h]
  _BYTE v299[48]; // [rsp+E30h] [rbp-578h] BYREF
  __int128 v300; // [rsp+E60h] [rbp-548h] BYREF
  __int128 v301; // [rsp+E78h] [rbp-530h]
  int v302[6]; // [rsp+E88h] [rbp-520h] BYREF
  __int64 v303; // [rsp+EA0h] [rbp-508h]
  __int64 v304; // [rsp+EA8h] [rbp-500h]
  __int64 v305; // [rsp+EB0h] [rbp-4F8h]
  __int64 v306; // [rsp+EB8h] [rbp-4F0h] BYREF
  __int64 v307; // [rsp+EC0h] [rbp-4E8h]
  __int64 v308; // [rsp+EC8h] [rbp-4E0h]
  _BYTE v309[48]; // [rsp+ED0h] [rbp-4D8h] BYREF
  __int128 v310; // [rsp+F00h] [rbp-4A8h] BYREF
  __int128 v311; // [rsp+F10h] [rbp-498h]
  _QWORD v312[2]; // [rsp+F20h] [rbp-488h] BYREF
  __int64 v313; // [rsp+F30h] [rbp-478h]
  __int64 v314; // [rsp+F38h] [rbp-470h]
  __int64 v315; // [rsp+F40h] [rbp-468h]
  _QWORD v316[3]; // [rsp+F48h] [rbp-460h] BYREF
  _BYTE v317[48]; // [rsp+F60h] [rbp-448h] BYREF
  _OWORD v318[2]; // [rsp+F90h] [rbp-418h] BYREF
  __int128 v319; // [rsp+FB8h] [rbp-3F0h]
  __int128 v320; // [rsp+FC8h] [rbp-3E0h]
  _QWORD v321[3]; // [rsp+FD8h] [rbp-3D0h] BYREF
  _BYTE v322[48]; // [rsp+FF0h] [rbp-3B8h] BYREF
  __int128 v323; // [rsp+1020h] [rbp-388h] BYREF
  __int128 v324; // [rsp+1030h] [rbp-378h]
  __int64 v325; // [rsp+1040h] [rbp-368h] BYREF
  __int64 v326; // [rsp+1048h] [rbp-360h] BYREF
  __int64 v327; // [rsp+1050h] [rbp-358h] BYREF
  __int64 v328; // [rsp+1058h] [rbp-350h]
  __int64 v329; // [rsp+1060h] [rbp-348h]
  _BYTE v330[24]; // [rsp+1068h] [rbp-340h] BYREF
  _BYTE v331[48]; // [rsp+1080h] [rbp-328h] BYREF
  __int128 v332; // [rsp+10B0h] [rbp-2F8h] BYREF
  __int128 v333; // [rsp+10C0h] [rbp-2E8h]
  char v334; // [rsp+10D5h] [rbp-2D3h]
  char v335; // [rsp+10D6h] [rbp-2D2h]
  char v336; // [rsp+10D7h] [rbp-2D1h]
  int v337; // [rsp+10ECh] [rbp-2BCh]
  int v338; // [rsp+10F0h] [rbp-2B8h]
  __int16 v339; // [rsp+10F6h] [rbp-2B2h]
  __int64 v340; // [rsp+10F8h] [rbp-2B0h]
  __int64 v341; // [rsp+1100h] [rbp-2A8h]
  int v342; // [rsp+110Ch] [rbp-29Ch]
  int v343; // [rsp+1110h] [rbp-298h]
  int v344; // [rsp+1114h] [rbp-294h]
  int v345; // [rsp+1118h] [rbp-290h]
  int v346; // [rsp+111Ch] [rbp-28Ch]
  __int64 v347; // [rsp+1120h] [rbp-288h]
  __int64 v348; // [rsp+1128h] [rbp-280h]
  struct _Unwind_Exception **v349; // [rsp+1130h] [rbp-278h]
  __int64 (__fastcall *v350)(); // [rsp+1138h] [rbp-270h]
  _QWORD *v351; // [rsp+1140h] [rbp-268h]
  __int64 (__fastcall *v352)(); // [rsp+1148h] [rbp-260h]
  char *v353; // [rsp+1150h] [rbp-258h]
  __int64 (__fastcall *v354)(); // [rsp+1158h] [rbp-250h]
  _QWORD *v355; // [rsp+1160h] [rbp-248h]
  __int64 (__fastcall *v356)(); // [rsp+1168h] [rbp-240h]
  _QWORD *v357; // [rsp+1170h] [rbp-238h]
  __int64 (__fastcall *v358)(); // [rsp+1178h] [rbp-230h]
  const char **v359; // [rsp+1180h] [rbp-228h]
  __int64 (__fastcall *v360)(); // [rsp+1188h] [rbp-220h]
  const char **v361; // [rsp+1190h] [rbp-218h]
  __int64 (__fastcall *v362)(); // [rsp+1198h] [rbp-210h]
  const char **v363; // [rsp+11A0h] [rbp-208h]
  __int64 (__fastcall *v364)(); // [rsp+11A8h] [rbp-200h]
  _QWORD *v365; // [rsp+11B0h] [rbp-1F8h]
  __int64 (__fastcall *v366)(); // [rsp+11B8h] [rbp-1F0h]
  _QWORD *v367; // [rsp+11C0h] [rbp-1E8h]
  __int64 (__fastcall *v368)(); // [rsp+11C8h] [rbp-1E0h]
  __int16 *v369; // [rsp+11D0h] [rbp-1D8h]
  __int64 (__fastcall *v370)(); // [rsp+11D8h] [rbp-1D0h]
  __int16 *v371; // [rsp+11E0h] [rbp-1C8h]
  __int64 (__fastcall *v372)(); // [rsp+11E8h] [rbp-1C0h]
  _QWORD *v373; // [rsp+11F0h] [rbp-1B8h]
  __int64 (__fastcall *v374)(); // [rsp+11F8h] [rbp-1B0h]
  __int64 *v375; // [rsp+1200h] [rbp-1A8h]
  __int64 (__fastcall *v376)(); // [rsp+1208h] [rbp-1A0h]
  _QWORD *v377; // [rsp+1210h] [rbp-198h]
  __int64 (__fastcall *v378)(); // [rsp+1218h] [rbp-190h]
  _QWORD *v379; // [rsp+1220h] [rbp-188h]
  __int64 (__fastcall *v380)(); // [rsp+1228h] [rbp-180h]
  __int128 *v381; // [rsp+1230h] [rbp-178h]
  __int64 (__fastcall *v382)(); // [rsp+1238h] [rbp-170h]
  __int128 *v383; // [rsp+1240h] [rbp-168h]
  __int64 (__fastcall *v384)(); // [rsp+1248h] [rbp-160h]
  __int128 *v385; // [rsp+1250h] [rbp-158h]
  __int64 (__fastcall *v386)(); // [rsp+1258h] [rbp-150h]
  int *v387; // [rsp+1260h] [rbp-148h]
  __int64 (__fastcall *v388)(); // [rsp+1268h] [rbp-140h]
  __int128 *v389; // [rsp+1270h] [rbp-138h]
  __int64 (__fastcall *v390)(); // [rsp+1278h] [rbp-130h]
  _QWORD *v391; // [rsp+1280h] [rbp-128h]
  __int64 (__fastcall *v392)(); // [rsp+1288h] [rbp-120h]
  int v393; // [rsp+1294h] [rbp-114h]
  int v394; // [rsp+1298h] [rbp-110h]
  char v395[21]; // [rsp+129Fh] [rbp-109h] BYREF
  int v396; // [rsp+12B4h] [rbp-F4h]
  int v397; // [rsp+12B8h] [rbp-F0h]
  char v398[21]; // [rsp+12BFh] [rbp-E9h] BYREF
  int v399; // [rsp+12D4h] [rbp-D4h]
  int v400; // [rsp+12D8h] [rbp-D0h]
  char v401[17]; // [rsp+12DFh] [rbp-C9h] BYREF
  __int128 v402; // [rsp+12F0h] [rbp-B8h] BYREF
  __int128 v403; // [rsp+1310h] [rbp-98h] BYREF
  __int64 v404; // [rsp+1338h] [rbp-70h]
  __int64 v405; // [rsp+1340h] [rbp-68h]
  char v406[37]; // [rsp+134Fh] [rbp-59h] BYREF
  int v407; // [rsp+1374h] [rbp-34h]

  *(_QWORD *)v131 = 0LL;
  v335 = 0;
  v336 = 0;
  v334 = 0;
  core::iter::traits::iterator::Iterator::collect(&v116);
  v335 = 1;
  if ( (<uu_cksum::OutputFormat as core::cmp::PartialEq>::eq(a1 + 58, &unk_44CB2) & 1) != 0
    && (unsigned __int64)alloc::vec::Vec<T,A>::len(&v116) > 1 )
  {
    v118 = 0x8000000000000000LL;
    v113 = (unsigned __int64 *)alloc::alloc::exchange_malloc(24LL, 8LL);
    *v113 = v118;
    v113[1] = v119;
    v113[2] = v120;
    v115 = (__int64)v113;
    goto LABEL_110;
  }
  v335 = 0;
  v123 = v117;
  v122 = v116;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v121, &v122);
  v124[0] = v121[0];
  v124[1] = v121[1];
  v124[2] = v121[2];
  v124[3] = v121[3];
  while ( 1 )
  {
    while ( 1 )
    {
      v125 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v124);
      v126 = v1;
      if ( !v125 )
      {
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(v124);
        v115 = 0LL;
        v335 = 0;
        core::ptr::drop_in_place<uu_cksum::Options>(a1);
        return v115;
      }
      *(_QWORD *)v127 = std::path::Path::new(v125, v126);
      *(_QWORD *)v128 = v3;
      v130[0] = std::ffi::os_str::OsStr::new(asc_44294, 1LL);
      v130[1] = v4;
      v112 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(v127, v130);
      if ( (v112 & 1) != 0 )
      {
        v110 = std::io::stdio::stdin();
        v107 = (__int64 *)alloc::alloc::exchange_malloc(8LL, 8LL);
        *v107 = v110;
        *(_QWORD *)v132 = v107;
        *(_QWORD *)v133 = &unk_30CF20;
      }
      else
      {
        is_dir = std::path::Path::is_dir(*(_QWORD *)v127, *(_QWORD *)v128);
        if ( (is_dir & 1) != 0 )
        {
          std::io::util::empty();
          std::io::buffered::bufreader::BufReader<R>::new((int)src);
          dest = (void *)alloc::alloc::exchange_malloc(40LL, 8LL);
          memcpy(dest, src, 0x28uLL);
          v134 = dest;
          v135 = &off_30D228;
        }
        else
        {
          std::fs::File::open(
            (int)&v137,
            v127[0],
            v128[0],
            v5,
            v6,
            v7,
            (int)v51,
            v53,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          if ( v137 )
          {
            v8 = *(_QWORD *)v127;
            v140 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                     v139[0],
                     (__int64)v51,
                     v53,
                     v55,
                     v56,
                     v57,
                     v58,
                     v59,
                     v60,
                     v61,
                     v62,
                     (int)v63,
                     v64,
                     v65,
                     v66,
                     v67,
                     v68,
                     v69,
                     v70);
            v9 = (unsigned int)uucore::mods::error::UError::code(v140, v8);
            uucore::mods::error::set_exit_code(v9);
            v144[0] = uucore::util_name();
            v144[1] = v10;
            v367 = v144;
            v368 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v143 = v144;
            *((_QWORD *)&v143 + 1) = <&T as core::fmt::Display>::fmt;
            v375 = &v140;
            v376 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)&v145 = &v140;
            *((_QWORD *)&v145 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v142[0] = v143;
            v142[1] = v145;
            core::fmt::Arguments::new_v1(v141, &unk_30D1F8, v142);
            std::io::stdio::_eprint(v141);
            core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(&v140);
            goto LABEL_19;
          }
          v129 = v138;
          v336 = 0;
          v407 = v138;
          v109 = (_DWORD *)alloc::alloc::exchange_malloc(4LL, 4LL);
          *v109 = v407;
          v134 = v109;
          v135 = &off_30D1A0;
        }
        *(_QWORD *)v132 = v134;
        *(_QWORD *)v133 = v135;
      }
      std::io::buffered::bufreader::BufReader<R>::new((int)v131, v132[0], v133[0]);
      if ( (std::path::Path::is_dir(*(_QWORD *)v127, *(_QWORD *)v128) & 1) == 0 )
        break;
      v152[0] = std::path::Path::display(*(_QWORD *)v127, *(_QWORD *)v128);
      v152[1] = v41;
      v373 = v152;
      v374 = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&v151 = v152;
      *((_QWORD *)&v151 + 1) = <std::path::Display as core::fmt::Display>::fmt;
      v150 = v151;
      core::fmt::Arguments::new_v1(v149, &unk_30D428, &v150);
      alloc::fmt::format(v148, v149);
      v147[0] = v148[0];
      v147[1] = v148[1];
      v147[2] = v148[2];
      v42 = uucore::mods::error::USimpleError::new(1LL, v147);
      v58 = v43;
      v59 = v42;
      v146[0] = v42;
      v146[1] = v43;
      v44 = (*(unsigned int (__fastcall **)(__int64))(v43 + 96))(v42);
      uucore::mods::error::set_exit_code(v44);
      v45 = uucore::util_name();
      v55 = v46;
      v56 = v45;
      v156[0] = v45;
      v156[1] = v46;
      v357 = v156;
      v358 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v155 = v156;
      *((_QWORD *)&v155 + 1) = <&T as core::fmt::Display>::fmt;
      v391 = v146;
      v392 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v157 = v146;
      *((_QWORD *)&v157 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v154[0] = v155;
      v154[1] = v157;
      core::fmt::Arguments::new_v1(v153, &unk_30D1F8, v154);
      std::io::stdio::_eprint(v153);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v146);
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
        (int)v131,
        (int)&unk_30D1F8,
        v47,
        v48,
        v49,
        v50,
        v51,
        v53);
LABEL_19:
      v336 = 0;
    }
    uucore::features::checksum::digest_reader(
      (int)v163,
      a1 + 32,
      (int)v131,
      0,
      *(_QWORD *)(a1 + 48),
      v11,
      (int)v51,
      v53,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      (int)v63,
      v64,
      v65,
      v66,
      (int)v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v77,
      v78,
      v79,
      v81,
      v82,
      v83,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92,
      v94,
      v95,
      v96,
      v98);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v162,
      v163);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v160, v162);
    if ( (_QWORD)v160 == 0x8000000000000000LL )
    {
      LODWORD(v12) = v161;
      v13 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *((_QWORD *)&v160 + 1),
              v161,
              &off_30D410);
      v40 = v13;
      v115 = v13;
      goto LABEL_109;
    }
    v165 = v161;
    v164 = v160;
    v334 = 1;
    v159 = v161;
    v158 = v160;
    if ( !*(_BYTE *)(a1 + 58) )
    {
      v334 = 0;
      v166 = v158;
      v167 = v159;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(a1 + 58) == 1LL )
      break;
    v105 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(a1 + 24),
             aCrc,
             3LL);
    if ( (v105 & 1) != 0
      || (v93 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(
                  *(_QWORD *)(a1 + 16),
                  *(_QWORD *)(a1 + 24),
                  aSysv,
                  4LL),
          (v93 & 1) != 0
       || (core::str::traits::<impl core::cmp::PartialEq for str>::eq(
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(a1 + 24),
             aBsd,
             3LL) & 1) != 0) )
    {
      v334 = 0;
      v166 = v158;
      v167 = v159;
    }
    else
    {
      v181 = (char *)&dword_200 + 2;
      v180 = unk_30D2E0;
      v334 = 0;
      v187 = v159;
      v186 = v158;
      hex::decode((__int64)&v184);
      if ( v184 == 0x8000000000000000LL )
      {
        v402 = v185;
        core::result::unwrap_failed(aCalledResultUn, 43LL, &v402, &unk_30CE70, &off_30D2F8);
      }
      v182 = v184;
      v183 = v185;
      v24 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v182);
      v89 = v25;
      v90 = v24;
      data_encoding::Encoding::encode(&v166, &v180, v24, v25);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v182);
      core::ptr::drop_in_place<data_encoding::Encoding>(&v180);
    }
LABEL_30:
    v188 = 5LL;
    v104 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(a1 + 24),
             aSysv,
             4LL);
    if ( (v104 & 1) != 0 )
    {
      v26 = <alloc::string::String as core::ops::deref::Deref>::deref(&v166);
      v81 = v27;
      v82 = v26;
      LODWORD(v69) = core::str::<impl str>::parse(v26, v27);
      v345 = v69;
      v206 = v69;
      v346 = v69;
      v394 = v69;
      v393 = v69;
      if ( (v69 & 1) != 0 )
      {
        v395[0] = BYTE1(v393);
        core::result::unwrap_failed(aCalledResultUn, 43LL, v395, &unk_30CE50, &off_30D3E0);
      }
      v205 = HIWORD(v393);
      v369 = &v205;
      v370 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      *(_QWORD *)&v204 = &v205;
      *((_QWORD *)&v204 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      v67 = (struct _Unwind_Exception *)uucore::features::sum::div_ceil(*((_QWORD *)&v159 + 1), *(_QWORD *)(a1 + 48));
      v208 = v67;
      v349 = &v208;
      v350 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v207 = &v208;
      *((_QWORD *)&v207 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      if ( (v112 & 1) != 0 )
      {
        v210 = (_BYTE *)(&dword_0 + 1);
        v211 = 0LL;
      }
      else
      {
        v210 = asc_480F2;
        v211 = 1LL;
      }
      v359 = &v210;
      v360 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v209 = &v210;
      *((_QWORD *)&v209 + 1) = <&T as core::fmt::Display>::fmt;
      v203[0] = v204;
      v203[1] = v207;
      v203[2] = v209;
      core::fmt::Arguments::new_v1(v202, &unk_30D398, v203);
      alloc::fmt::format(v201, v202);
      v198 = v201[0];
      v199 = v201[1];
      v200 = v201[2];
      alloc::string::String::new(v212);
      v191 = v198;
      v192 = v199;
      v193 = v200;
      v194 = (v112 ^ 1) & 1;
      v195 = v212[0];
      v196 = v212[1];
      v197 = v212[2];
    }
    else
    {
      v84 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(
              *(_QWORD *)(a1 + 16),
              *(_QWORD *)(a1 + 24),
              aBsd,
              3LL);
      if ( (v84 & 1) != 0 )
      {
        v28 = <alloc::string::String as core::ops::deref::Deref>::deref(&v166);
        v77 = v29;
        v78 = v28;
        v72 = core::str::<impl str>::parse(v28, v29);
        v343 = v72;
        v222 = v72;
        v344 = v72;
        v397 = v72;
        v396 = v72;
        if ( (v72 & 1) != 0 )
        {
          v398[0] = BYTE1(v396);
          core::result::unwrap_failed(aCalledResultUn, 43LL, v398, &unk_30CE50, &off_30D3C8);
        }
        v221 = HIWORD(v396);
        v371 = &v221;
        v372 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v219 = &v221;
        v220 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v70 = uucore::features::sum::div_ceil(*((_QWORD *)&v159 + 1), *(_QWORD *)(a1 + 48));
        v225[0] = v70;
        v351 = v225;
        v352 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v223 = v225;
        v224 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        if ( (v112 & 1) != 0 )
        {
          v226 = (_BYTE *)(&dword_0 + 1);
          v227 = 0LL;
        }
        else
        {
          v226 = asc_480F2;
          v227 = 1LL;
        }
        v361 = &v226;
        v362 = <&T as core::fmt::Display>::fmt;
        v225[1] = &v226;
        v225[2] = <&T as core::fmt::Display>::fmt;
        v347 = v188;
        v348 = 0LL;
        v228 = v188;
        v229 = 0LL;
        v218[0] = v219;
        v218[1] = v220;
        v218[2] = v223;
        v218[3] = v224;
        v218[4] = &v226;
        v218[5] = <&T as core::fmt::Display>::fmt;
        v218[6] = v188;
        v218[7] = 0LL;
        v237 = 3;
        v238 = 2LL;
        v241 = 3LL;
        v240 = 1LL;
        v233[4] = 0LL;
        v234 = 32;
        v236 = 3;
        v235 = 8;
        v233[0] = 2LL;
        v233[1] = v239;
        v233[2] = 1LL;
        v233[3] = 3LL;
        v246 = 3;
        v247 = 2LL;
        v250 = 3LL;
        v249 = 1LL;
        v242[4] = 1LL;
        v243 = 32;
        v245 = 3;
        v244 = 0;
        v242[0] = 2LL;
        v242[1] = v248;
        v242[2] = 1LL;
        v242[3] = 3LL;
        v255 = 3;
        v256 = 2LL;
        v258 = 2LL;
        v251[4] = 2LL;
        v252 = 32;
        v254 = 3;
        v253 = 0;
        v251[0] = 2LL;
        v251[1] = v257;
        v251[2] = 2LL;
        v251[3] = v259;
        memcpy(v230, v233, sizeof(v230));
        memcpy(&v231, v242, 0x38uLL);
        memcpy(&v232, v251, 0x38uLL);
        core::fmt::Arguments::new_v1_formatted(
          (unsigned int)v217,
          (unsigned int)&unk_30D398,
          3,
          (unsigned int)v218,
          4,
          (unsigned int)v230,
          3LL);
        alloc::fmt::format(v216, v217);
        v213 = v216[0];
        v214 = v216[1];
        v215 = v216[2];
        HIBYTE(v69) = v112 ^ 1;
        alloc::string::String::new(v260);
        v191 = v213;
        v192 = v214;
        v193 = v215;
        v194 = (v112 ^ 1) & 1;
        v195 = v260[0];
        v196 = v260[1];
        v197 = v260[2];
      }
      else
      {
        v80 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(
                *(_QWORD *)(a1 + 16),
                *(_QWORD *)(a1 + 24),
                aCrc,
                3LL);
        if ( (v80 & 1) != 0 )
        {
          if ( (v112 & 1) != 0 )
          {
            v270 = (_BYTE *)(&dword_0 + 1);
            v271 = 0LL;
          }
          else
          {
            v270 = asc_480F2;
            v271 = 1LL;
          }
          v267 = &v270;
          v268 = &v166;
          v269 = (char *)&v159 + 8;
          v381 = &v166;
          v382 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v272 = &v166;
          *((_QWORD *)&v272 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v353 = (char *)&v159 + 8;
          v354 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v273 = (char *)&v159 + 8;
          *((_QWORD *)&v273 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v363 = &v270;
          v364 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v274 = &v270;
          *((_QWORD *)&v274 + 1) = <&T as core::fmt::Display>::fmt;
          v266[0] = v272;
          v266[1] = v273;
          v266[2] = v274;
          core::fmt::Arguments::new_v1(v265, &unk_30D398, v266);
          alloc::fmt::format(v264, v265);
          v261 = v264[0];
          v262 = v264[1];
          v263 = v264[2];
          alloc::string::String::new(v275);
          v191 = v261;
          v192 = v262;
          v193 = v263;
          v194 = (v112 ^ 1) & 1;
          v195 = v275[0];
          v196 = v275[1];
          v197 = v275[2];
        }
        else
        {
          v30 = *(_QWORD *)(a1 + 24);
          v76 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(*(_QWORD *)(a1 + 16), v30, aBlake2b_0, 7LL);
          if ( (v76 & 1) != 0 && (*(_BYTE *)(a1 + 56) & 1) != 0 )
          {
            if ( *(_QWORD *)a1 == 1LL )
            {
              v73 = 8LL * *(_QWORD *)(a1 + 8);
              if ( !is_mul_ok(8uLL, *(_QWORD *)(a1 + 8)) )
                core::panicking::panic_const::panic_const_mul_overflow(
                  &off_30D380,
                  v30,
                  (8 * (unsigned __int128)*(unsigned __int64 *)(a1 + 8)) >> 64);
              v283[0] = 8LL * *(_QWORD *)(a1 + 8);
              v355 = v283;
              v356 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              *(_QWORD *)&v282 = v283;
              *((_QWORD *)&v282 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              v281 = v282;
              core::fmt::Arguments::new_v1(v280, &off_30D360, &v281);
              alloc::fmt::format(v279, v280);
              v276 = v279[0];
              v277 = v279[1];
              v278 = v279[2];
            }
            else
            {
              alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v276, aBlake2b_1, 9LL);
            }
            v383 = &v166;
            v384 = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v289 = &v166;
            *((_QWORD *)&v289 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            v288 = v289;
            core::fmt::Arguments::new_v1(v287, &off_30D350, &v288);
            alloc::fmt::format(&v284, v287);
            v283[1] = v284;
            v283[2] = v285;
            v283[3] = v286;
            v191 = v276;
            v192 = v277;
            v193 = v278;
            v194 = 1;
            v195 = v284;
            v196 = v285;
            v197 = v286;
          }
          else if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
          {
            alloc::str::<impl str>::to_ascii_uppercase(
              (int)v302,
              *(_QWORD *)(a1 + 16),
              *(_QWORD *)(a1 + 24),
              v31,
              v32,
              v33,
              (int)v52,
              v54,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64);
            v387 = v302;
            v388 = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v301 = v302;
            *((_QWORD *)&v301 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            v300 = v301;
            core::fmt::Arguments::new_v1(v299, &unk_30D330, &v300);
            alloc::fmt::format(&v296, v299);
            core::ptr::drop_in_place<alloc::string::String>(v302);
            v293 = v296;
            v294 = v297;
            v295 = v298;
            v290 = v296;
            v291 = v297;
            v292 = v298;
            v385 = &v166;
            v386 = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v311 = &v166;
            *((_QWORD *)&v311 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            v310 = v311;
            core::fmt::Arguments::new_v1(v309, &off_30D350, &v310);
            alloc::fmt::format(&v306, v309);
            v303 = v306;
            v304 = v307;
            v305 = v308;
            v191 = v290;
            v192 = v291;
            v193 = v292;
            v194 = 1;
            v195 = v306;
            v196 = v307;
            v197 = v308;
          }
          else
          {
            if ( (*(_BYTE *)(a1 + 57) & 1) != 0 )
              v312[0] = asc_480F3;
            else
              v312[0] = asc_480F2;
            v312[1] = 1LL;
            v389 = &v166;
            v390 = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v319 = &v166;
            *((_QWORD *)&v319 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            v365 = v312;
            v366 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v320 = v312;
            *((_QWORD *)&v320 + 1) = <&T as core::fmt::Display>::fmt;
            v318[0] = v319;
            v318[1] = v320;
            core::fmt::Arguments::new_v1(v317, &unk_30D310, v318);
            alloc::fmt::format(v316, v317);
            v313 = v316[0];
            v314 = v316[1];
            v315 = v316[2];
            alloc::string::String::new(v321);
            v191 = v313;
            v192 = v314;
            v193 = v315;
            v194 = 1;
            v195 = v321[0];
            v196 = v321[1];
            v197 = v321[2];
          }
        }
      }
    }
    v189[0] = v191;
    v189[1] = v192;
    v189[2] = v193;
    v75 = v194;
    v190[0] = v195;
    v190[1] = v196;
    v190[2] = v197;
    v379 = v189;
    v380 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v324 = v189;
    *((_QWORD *)&v324 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v323 = v324;
    core::fmt::Arguments::new_v1(v322, &anon_f907210316a4f48a9c7de5c93e2a79ff_193_llvm_5503381581801417789, &v323);
    std::io::stdio::_print(v322);
    if ( (v75 & 1) != 0 )
    {
      v65 = std::io::stdio::stdout(v322, &anon_f907210316a4f48a9c7de5c93e2a79ff_193_llvm_5503381581801417789);
      v326 = v65;
      v34 = std::path::Path::as_os_str(*(_QWORD *)v127, *(_QWORD *)v128);
      v63 = v35;
      v64 = v34;
      uucore::os_str_as_bytes(v330, v34, v35);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v327, v330);
      if ( v327 )
      {
        LODWORD(v12) = v329;
        v115 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                 v328,
                 v329,
                 &off_30D3F8);
        core::ptr::drop_in_place<alloc::string::String>(v190);
        core::ptr::drop_in_place<alloc::string::String>(v189);
        core::ptr::drop_in_place<alloc::string::String>(&v166);
        goto LABEL_52;
      }
      v62 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v326, v328, v329);
      v325 = v62;
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v325);
    }
    v377 = v190;
    v378 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v333 = v190;
    *((_QWORD *)&v333 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v332 = v333;
    core::fmt::Arguments::new_v1(v331, &unk_30CF00, &v332);
    std::io::stdio::_print(v331);
    core::ptr::drop_in_place<alloc::string::String>(v190);
    core::ptr::drop_in_place<alloc::string::String>(v189);
    core::ptr::drop_in_place<alloc::string::String>(&v166);
    v334 = 0;
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
      (int)v131,
      (int)&unk_30CF00,
      v36,
      v37,
      v38,
      v39,
      v52,
      v54);
    v336 = 0;
  }
  v106 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(
           *(_QWORD *)(a1 + 16),
           *(_QWORD *)(a1 + 24),
           aCrc,
           3LL);
  if ( (v106 & 1) != 0 )
  {
    v17 = <alloc::string::String as core::ops::deref::Deref>::deref(&v158);
    v100 = core::str::<impl str>::parse(v17, v21);
    v340 = v100;
    v171 = v100;
    v341 = v100;
    v405 = v100;
    v404 = v100;
    if ( (v100 & 1) != 0 )
    {
      v406[0] = BYTE1(v404);
      core::result::unwrap_failed(aCalledResultUn, 43LL, v406, &unk_30CE50, &off_30D2B0);
    }
    v342 = core::num::<impl u32>::to_be_bytes(HIDWORD(v404));
    v170 = v342;
    v18 = &v168;
    v12 = (char **)&v170;
    alloc::slice::<impl [T]>::to_vec(&v168, &v170, 4LL);
  }
  else
  {
    v103 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(a1 + 24),
             aSysv,
             4LL);
    if ( (v103 & 1) != 0
      || (v102 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(
                   *(_QWORD *)(a1 + 16),
                   *(_QWORD *)(a1 + 24),
                   aBsd,
                   3LL),
          (v102 & 1) != 0) )
    {
      v19 = <alloc::string::String as core::ops::deref::Deref>::deref(&v158);
      v101 = core::str::<impl str>::parse(v19, v20);
      v337 = v101;
      v173 = v101;
      v338 = v101;
      v400 = v101;
      v399 = v101;
      if ( (v101 & 1) != 0 )
      {
        v401[0] = BYTE1(v399);
        core::result::unwrap_failed(aCalledResultUn, 43LL, v401, &unk_30CE50, &off_30D298);
      }
      LOWORD(v19) = HIWORD(v399);
      v339 = core::num::<impl u16>::to_be_bytes(v19);
      v172 = v339;
      v18 = &v168;
      v12 = (char **)&v172;
      alloc::slice::<impl [T]>::to_vec(&v168, &v172, 2LL);
    }
    else
    {
      v334 = 0;
      v177 = v159;
      v176 = v158;
      v18 = &v174;
      v12 = (char **)&v176;
      hex::decode((__int64)&v174);
      if ( v174 == 0x8000000000000000LL )
      {
        v403 = v175;
        core::result::unwrap_failed(aCalledResultUn, 43LL, &v403, &unk_30CE70, &off_30D280);
      }
      v168 = v174;
      v169 = v175;
    }
  }
  v179 = std::io::stdio::stdout(v18, v12);
  v22 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v168);
  LODWORD(v12) = v22;
  v99 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v179, v22, v23);
  v97 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v99);
  v178 = v97;
  if ( v97 )
  {
    v12 = &off_30D2C8;
    v115 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             v178,
             &off_30D2C8);
  }
  else
  {
    v115 = 0LL;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v168);
LABEL_52:
  if ( (v334 & 1) != 0 )
    core::ptr::drop_in_place<alloc::string::String>(&v158);
  v334 = 0;
LABEL_109:
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
    (int)v131,
    (int)v12,
    v14,
    v40,
    v15,
    v16,
    v52,
    v54);
  v336 = 0;
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(v124);
LABEL_110:
  if ( (v335 & 1) != 0 )
    core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v116);
  v335 = 0;
  core::ptr::drop_in_place<uu_cksum::Options>(a1);
  return v115;
}
