_QWORD *__fastcall uu_dircolors::parse(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  struct _Unwind_Exception *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // [rsp+0h] [rbp-1048h]
  int v35; // [rsp+8h] [rbp-1040h]
  char v36; // [rsp+Fh] [rbp-1039h]
  int v37; // [rsp+10h] [rbp-1038h]
  int v38; // [rsp+18h] [rbp-1030h]
  int v39; // [rsp+20h] [rbp-1028h]
  int v40; // [rsp+28h] [rbp-1020h]
  struct _Unwind_Exception *v41; // [rsp+30h] [rbp-1018h]
  int v42; // [rsp+38h] [rbp-1010h]
  char v43; // [rsp+77h] [rbp-FD1h]
  char v44; // [rsp+93h] [rbp-FB5h]
  char v45; // [rsp+94h] [rbp-FB4h]
  char v46; // [rsp+95h] [rbp-FB3h]
  char v47; // [rsp+96h] [rbp-FB2h]
  char v48; // [rsp+ACh] [rbp-F9Ch]
  char v49; // [rsp+ADh] [rbp-F9Bh]
  char v50; // [rsp+AEh] [rbp-F9Ah]
  char v51; // [rsp+AFh] [rbp-F99h]
  __int64 v52; // [rsp+C0h] [rbp-F88h]
  __int64 v53; // [rsp+C8h] [rbp-F80h]
  char is_empty; // [rsp+D7h] [rbp-F71h]
  char v55; // [rsp+10Fh] [rbp-F39h]
  __int64 v56; // [rsp+118h] [rbp-F30h]
  __int64 v57; // [rsp+120h] [rbp-F28h]
  __int64 v60; // [rsp+170h] [rbp-ED8h] BYREF
  __int128 v61; // [rsp+178h] [rbp-ED0h] BYREF
  __int64 v62; // [rsp+188h] [rbp-EC0h]
  __int128 v63; // [rsp+190h] [rbp-EB8h] BYREF
  __int64 v64; // [rsp+1A0h] [rbp-EA8h]
  __int128 v65; // [rsp+1B0h] [rbp-E98h] BYREF
  __int64 v66; // [rsp+1C0h] [rbp-E88h]
  __int128 v67; // [rsp+1D0h] [rbp-E78h] BYREF
  __int64 v68; // [rsp+1E0h] [rbp-E68h]
  __int128 v69; // [rsp+1E8h] [rbp-E60h]
  __int64 v70; // [rsp+1F8h] [rbp-E50h]
  struct _Unwind_Exception v71; // [rsp+200h] [rbp-E48h] BYREF
  char v72; // [rsp+23Fh] [rbp-E09h] BYREF
  _BYTE src[56]; // [rsp+240h] [rbp-E08h] BYREF
  _BYTE v74[56]; // [rsp+278h] [rbp-DD0h] BYREF
  _BYTE v75[48]; // [rsp+2B0h] [rbp-D98h] BYREF
  _OWORD v76[3]; // [rsp+2E0h] [rbp-D68h] BYREF
  _BYTE dest[56]; // [rsp+310h] [rbp-D38h] BYREF
  __int64 v78; // [rsp+348h] [rbp-D00h] BYREF
  __int64 v79; // [rsp+350h] [rbp-CF8h]
  __int64 v80; // [rsp+358h] [rbp-CF0h]
  __int64 v81; // [rsp+360h] [rbp-CE8h]
  _QWORD v82[3]; // [rsp+368h] [rbp-CE0h] BYREF
  __int64 v83; // [rsp+380h] [rbp-CC8h] BYREF
  _BYTE v84[24]; // [rsp+388h] [rbp-CC0h] BYREF
  void *s2; // [rsp+3A0h] [rbp-CA8h] BYREF
  __int64 v86; // [rsp+3A8h] [rbp-CA0h]
  __int64 v87; // [rsp+3B0h] [rbp-C98h] BYREF
  __int64 v88; // [rsp+3B8h] [rbp-C90h]
  _QWORD v89[2]; // [rsp+3C0h] [rbp-C88h] BYREF
  __int64 v90; // [rsp+3D0h] [rbp-C78h]
  __int64 v91; // [rsp+3D8h] [rbp-C70h]
  __int64 v92; // [rsp+3E0h] [rbp-C68h]
  __int64 v93; // [rsp+3E8h] [rbp-C60h]
  __int64 v94; // [rsp+3F0h] [rbp-C58h]
  _QWORD v95[3]; // [rsp+3F8h] [rbp-C50h] BYREF
  _BYTE v96[48]; // [rsp+410h] [rbp-C38h] BYREF
  _OWORD v97[2]; // [rsp+440h] [rbp-C08h] BYREF
  __int128 v98; // [rsp+468h] [rbp-BE0h]
  _BYTE v99[32]; // [rsp+478h] [rbp-BD0h] BYREF
  __int128 v100; // [rsp+498h] [rbp-BB0h]
  _BYTE v101[32]; // [rsp+4A8h] [rbp-BA0h] BYREF
  int v102[2]; // [rsp+4C8h] [rbp-B80h] BYREF
  __int64 v103; // [rsp+4D0h] [rbp-B78h]
  _QWORD v104[3]; // [rsp+4D8h] [rbp-B70h] BYREF
  _QWORD v105[3]; // [rsp+4F0h] [rbp-B58h] BYREF
  _BYTE v106[48]; // [rsp+508h] [rbp-B40h] BYREF
  _QWORD v107[8]; // [rsp+538h] [rbp-B10h] BYREF
  _BYTE v108[56]; // [rsp+578h] [rbp-AD0h] BYREF
  __int64 v109; // [rsp+5B0h] [rbp-A98h] BYREF
  __int64 v110; // [rsp+5E8h] [rbp-A60h] BYREF
  _QWORD v111[5]; // [rsp+620h] [rbp-A28h] BYREF
  int v112; // [rsp+648h] [rbp-A00h]
  int v113; // [rsp+64Ch] [rbp-9FCh]
  char v114; // [rsp+650h] [rbp-9F8h]
  char v115; // [rsp+65Fh] [rbp-9E9h]
  __int64 v116; // [rsp+660h] [rbp-9E8h]
  __int64 v117; // [rsp+668h] [rbp-9E0h]
  __int64 v118; // [rsp+670h] [rbp-9D8h]
  __int64 v119; // [rsp+678h] [rbp-9D0h]
  _QWORD v120[5]; // [rsp+680h] [rbp-9C8h] BYREF
  int v121; // [rsp+6A8h] [rbp-9A0h]
  int v122; // [rsp+6ACh] [rbp-99Ch]
  char v123; // [rsp+6B0h] [rbp-998h]
  char v124; // [rsp+6BFh] [rbp-989h]
  __int64 v125; // [rsp+6C0h] [rbp-988h]
  __int64 v126; // [rsp+6C8h] [rbp-980h]
  __int64 v127; // [rsp+6D0h] [rbp-978h]
  __int64 v128; // [rsp+6D8h] [rbp-970h]
  _QWORD v129[5]; // [rsp+6E0h] [rbp-968h] BYREF
  int v130; // [rsp+708h] [rbp-940h]
  int v131; // [rsp+70Ch] [rbp-93Ch]
  char v132; // [rsp+710h] [rbp-938h]
  char v133; // [rsp+71Fh] [rbp-929h]
  __int64 v134; // [rsp+720h] [rbp-928h]
  __int64 v135; // [rsp+728h] [rbp-920h]
  __int64 v136; // [rsp+730h] [rbp-918h]
  __int64 v137; // [rsp+738h] [rbp-910h]
  _QWORD v138[3]; // [rsp+740h] [rbp-908h] BYREF
  _QWORD v139[3]; // [rsp+758h] [rbp-8F0h] BYREF
  _BYTE v140[48]; // [rsp+770h] [rbp-8D8h] BYREF
  _OWORD v141[2]; // [rsp+7A0h] [rbp-8A8h] BYREF
  __int128 v142; // [rsp+7C8h] [rbp-880h]
  __int128 v143; // [rsp+7D8h] [rbp-870h]
  _QWORD v144[3]; // [rsp+7E8h] [rbp-860h] BYREF
  _QWORD v145[3]; // [rsp+800h] [rbp-848h] BYREF
  _BYTE v146[48]; // [rsp+818h] [rbp-830h] BYREF
  _QWORD v147[8]; // [rsp+848h] [rbp-800h] BYREF
  _BYTE v148[56]; // [rsp+888h] [rbp-7C0h] BYREF
  __int64 v149; // [rsp+8C0h] [rbp-788h] BYREF
  __int64 v150; // [rsp+8F8h] [rbp-750h] BYREF
  _QWORD v151[5]; // [rsp+930h] [rbp-718h] BYREF
  int v152; // [rsp+958h] [rbp-6F0h]
  int v153; // [rsp+95Ch] [rbp-6ECh]
  char v154; // [rsp+960h] [rbp-6E8h]
  char v155; // [rsp+96Fh] [rbp-6D9h]
  __int64 v156; // [rsp+970h] [rbp-6D8h]
  __int64 v157; // [rsp+978h] [rbp-6D0h]
  __int64 v158; // [rsp+980h] [rbp-6C8h]
  __int64 v159; // [rsp+988h] [rbp-6C0h]
  _QWORD v160[5]; // [rsp+990h] [rbp-6B8h] BYREF
  int v161; // [rsp+9B8h] [rbp-690h]
  int v162; // [rsp+9BCh] [rbp-68Ch]
  char v163; // [rsp+9C0h] [rbp-688h]
  char v164; // [rsp+9CFh] [rbp-679h]
  __int64 v165; // [rsp+9D0h] [rbp-678h]
  __int64 v166; // [rsp+9D8h] [rbp-670h]
  __int64 v167; // [rsp+9E0h] [rbp-668h]
  __int64 v168; // [rsp+9E8h] [rbp-660h]
  _QWORD v169[5]; // [rsp+9F0h] [rbp-658h] BYREF
  int v170; // [rsp+A18h] [rbp-630h]
  int v171; // [rsp+A1Ch] [rbp-62Ch]
  char v172; // [rsp+A20h] [rbp-628h]
  char v173; // [rsp+A2Fh] [rbp-619h]
  __int64 v174; // [rsp+A30h] [rbp-618h]
  __int64 v175; // [rsp+A38h] [rbp-610h]
  __int64 v176; // [rsp+A40h] [rbp-608h]
  __int64 v177; // [rsp+A48h] [rbp-600h]
  _QWORD v178[3]; // [rsp+A50h] [rbp-5F8h] BYREF
  _QWORD v179[3]; // [rsp+A68h] [rbp-5E0h] BYREF
  _BYTE v180[48]; // [rsp+A80h] [rbp-5C8h] BYREF
  _OWORD v181[2]; // [rsp+AB0h] [rbp-598h] BYREF
  __int128 v182; // [rsp+AD8h] [rbp-570h]
  __int128 v183; // [rsp+AE8h] [rbp-560h]
  __int64 v184; // [rsp+AF8h] [rbp-550h]
  int v185[2]; // [rsp+B00h] [rbp-548h] BYREF
  __int64 v186; // [rsp+B08h] [rbp-540h]
  __int64 v187; // [rsp+B10h] [rbp-538h] BYREF
  _QWORD v188[3]; // [rsp+B18h] [rbp-530h] BYREF
  _QWORD v189[3]; // [rsp+B30h] [rbp-518h] BYREF
  _BYTE v190[48]; // [rsp+B48h] [rbp-500h] BYREF
  _QWORD v191[8]; // [rsp+B78h] [rbp-4D0h] BYREF
  _BYTE v192[56]; // [rsp+BB8h] [rbp-490h] BYREF
  __int64 v193; // [rsp+BF0h] [rbp-458h] BYREF
  __int64 v194; // [rsp+C28h] [rbp-420h] BYREF
  _QWORD v195[5]; // [rsp+C60h] [rbp-3E8h] BYREF
  int v196; // [rsp+C88h] [rbp-3C0h]
  int v197; // [rsp+C8Ch] [rbp-3BCh]
  char v198; // [rsp+C90h] [rbp-3B8h]
  char v199; // [rsp+C9Fh] [rbp-3A9h]
  __int64 v200; // [rsp+CA0h] [rbp-3A8h]
  __int64 v201; // [rsp+CA8h] [rbp-3A0h]
  __int64 v202; // [rsp+CB0h] [rbp-398h]
  __int64 v203; // [rsp+CB8h] [rbp-390h]
  _QWORD v204[5]; // [rsp+CC0h] [rbp-388h] BYREF
  int v205; // [rsp+CE8h] [rbp-360h]
  int v206; // [rsp+CECh] [rbp-35Ch]
  char v207; // [rsp+CF0h] [rbp-358h]
  char v208; // [rsp+CFFh] [rbp-349h]
  __int64 v209; // [rsp+D00h] [rbp-348h]
  __int64 v210; // [rsp+D08h] [rbp-340h]
  __int64 v211; // [rsp+D10h] [rbp-338h]
  __int64 v212; // [rsp+D18h] [rbp-330h]
  _QWORD v213[5]; // [rsp+D20h] [rbp-328h] BYREF
  int v214; // [rsp+D48h] [rbp-300h]
  int v215; // [rsp+D4Ch] [rbp-2FCh]
  char v216; // [rsp+D50h] [rbp-2F8h]
  char v217; // [rsp+D5Fh] [rbp-2E9h]
  __int64 v218; // [rsp+D60h] [rbp-2E8h]
  __int64 v219; // [rsp+D68h] [rbp-2E0h]
  __int64 v220; // [rsp+D70h] [rbp-2D8h]
  __int64 v221; // [rsp+D78h] [rbp-2D0h]
  _QWORD v222[3]; // [rsp+D80h] [rbp-2C8h] BYREF
  _QWORD v223[3]; // [rsp+D98h] [rbp-2B0h] BYREF
  _BYTE v224[48]; // [rsp+DB0h] [rbp-298h] BYREF
  _OWORD v225[2]; // [rsp+DE0h] [rbp-268h] BYREF
  __int128 v226; // [rsp+E00h] [rbp-248h]
  __int128 v227; // [rsp+E10h] [rbp-238h]
  __int128 v228; // [rsp+E20h] [rbp-228h]
  __int64 v229; // [rsp+E30h] [rbp-218h]
  __int128 v230; // [rsp+E38h] [rbp-210h] BYREF
  __int64 v231; // [rsp+E48h] [rbp-200h]
  _BYTE v232[48]; // [rsp+E50h] [rbp-1F8h] BYREF
  _OWORD v233[3]; // [rsp+E80h] [rbp-1C8h] BYREF
  __int128 v234; // [rsp+EB0h] [rbp-198h]
  _BYTE v235[32]; // [rsp+EC0h] [rbp-188h] BYREF
  __int128 v236; // [rsp+EE0h] [rbp-168h]
  __int128 v237; // [rsp+EF0h] [rbp-158h]
  __int128 v238; // [rsp+F00h] [rbp-148h]
  __int64 v239; // [rsp+F10h] [rbp-138h]
  char v240; // [rsp+F26h] [rbp-122h]
  char v241; // [rsp+F27h] [rbp-121h]
  __int64 *v242; // [rsp+F38h] [rbp-110h]
  __int64 (__fastcall *v243)(); // [rsp+F40h] [rbp-108h]
  __int64 *v244; // [rsp+F48h] [rbp-100h]
  __int64 (__fastcall *v245)(); // [rsp+F50h] [rbp-F8h]
  void **p_s2; // [rsp+F58h] [rbp-F0h]
  __int64 (__fastcall *v247)(); // [rsp+F60h] [rbp-E8h]
  __int64 *v248; // [rsp+F68h] [rbp-E0h]
  __int64 (__fastcall *v249)(); // [rsp+F70h] [rbp-D8h]
  __int64 *v250; // [rsp+F78h] [rbp-D0h]
  __int64 (__fastcall *v251)(); // [rsp+F80h] [rbp-C8h]
  void **v252; // [rsp+F88h] [rbp-C0h]
  __int64 (__fastcall *v253)(); // [rsp+F90h] [rbp-B8h]
  void **v254; // [rsp+F98h] [rbp-B0h]
  __int64 (__fastcall *v255)(); // [rsp+FA0h] [rbp-A8h]
  __int64 *v256; // [rsp+FA8h] [rbp-A0h]
  __int64 (__fastcall *v257)(); // [rsp+FB0h] [rbp-98h]
  __int64 *v258; // [rsp+FB8h] [rbp-90h]
  __int64 (__fastcall *v259)(); // [rsp+FC0h] [rbp-88h]
  void **v260; // [rsp+FC8h] [rbp-80h]
  __int64 (__fastcall *v261)(); // [rsp+FD0h] [rbp-78h]
  void **v262; // [rsp+FD8h] [rbp-70h]
  __int64 (__fastcall *v263)(); // [rsp+FE0h] [rbp-68h]
  __int64 *v264; // [rsp+FE8h] [rbp-60h]
  __int64 (__fastcall *v265)(); // [rsp+FF0h] [rbp-58h]
  __int64 *v266; // [rsp+FF8h] [rbp-50h]
  __int64 (__fastcall *v267)(); // [rsp+1000h] [rbp-48h]
  __int64 *v268; // [rsp+1008h] [rbp-40h]
  __int64 (__fastcall *v269)(); // [rsp+1010h] [rbp-38h]
  __int64 *v270; // [rsp+1018h] [rbp-30h]
  __int64 (__fastcall *v271)(); // [rsp+1020h] [rbp-28h]
  _BYTE *v272; // [rsp+1028h] [rbp-20h]
  __int64 (__fastcall *v273)(); // [rsp+1030h] [rbp-18h]
  _BYTE *v274; // [rsp+1038h] [rbp-10h]
  __int64 (__fastcall *v275)(); // [rsp+1040h] [rbp-8h]

  v60 = a3;
  v240 = 0;
  v241 = 1;
  alloc::string::String::with_capacity(&v61, 1790LL);
  v240 = 1;
  uu_dircolors::get_colors_format_strings(&v67, v60);
  v64 = v68;
  v63 = v67;
  v66 = v70;
  v65 = v69;
  v5 = <alloc::string::String as core::ops::deref::Deref>::deref(&v63);
  alloc::string::String::push_str(&v61, v5, v6);
  std::env::var(&v71.private_2 + 1, anon_d9dbb84e6d65add41742ac4e81173603_5_llvm_417571283676185119, 4LL);
  core::result::Result<T,E>::unwrap_or_else(&v71, (unsigned int)(&v71.private_2 + 1));
  v56 = alloc::string::String::as_str(&v71);
  v57 = v7;
  v72 = 0;
  v241 = 0;
  v8 = *a2;
  v9 = a2[1];
  v76[2] = a2[2];
  v76[1] = v9;
  v76[0] = v8;
  <I as core::iter::traits::collect::IntoIterator>::into_iter(v75, v76);
  core::iter::traits::iterator::Iterator::enumerate(v74, v75);
  <I as core::iter::traits::collect::IntoIterator>::into_iter(src, v74);
  memcpy(dest, src, sizeof(dest));
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v78, dest);
    if ( v79 == 0x8000000000000000LL )
      break;
    v82[0] = v79;
    v82[1] = v80;
    v82[2] = v81;
    if ( v78 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(&off_11AAE8);
    v83 = v78 + 1;
    v13 = alloc::str::<impl core::borrow::Borrow<str> for alloc::string::String>::borrow(v82);
    v52 = <str as uu_dircolors::StrUtils>::purify(v13, v14);
    v53 = v15;
    is_empty = core::str::<impl str>::is_empty(v52, v15);
    if ( (is_empty & 1) != 0 )
    {
      core::ptr::drop_in_place<alloc::string::String>(v82);
    }
    else
    {
      uu_dircolors::escape(v84, v52, v53);
      v16 = <alloc::string::String as core::ops::deref::Deref>::deref(v84);
      <str as uu_dircolors::StrUtils>::split_two(v89, v16, v17);
      s2 = (void *)v89[0];
      v86 = v89[1];
      v87 = v90;
      v88 = v91;
      v51 = core::str::<impl str>::is_empty(v90, v91);
      if ( (v51 & 1) != 0 )
      {
        os_display::native::Quotable::maybe_quote(v99, a4, a5);
        v272 = v99;
        v273 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v98 = v99;
        *((_QWORD *)&v98 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v242 = &v83;
        v243 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)&v100 = &v83;
        *((_QWORD *)&v100 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v97[0] = v98;
        v97[1] = v100;
        core::fmt::Arguments::new_v1(v96, &unk_11AC60, v97);
        alloc::fmt::format(v95, v96);
        v92 = v95[0];
        v93 = v95[1];
        v94 = v95[2];
        a1[1] = v95[0];
        a1[2] = v93;
        a1[3] = v94;
        *a1 = 1LL;
LABEL_40:
        core::ptr::drop_in_place<alloc::string::String>(v84);
        core::ptr::drop_in_place<alloc::string::String>(v82);
        core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map_while::MapWhile<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>,core::result::Result<alloc::string::String,std::io::error::Error>::ok>>>(dest);
        core::ptr::drop_in_place<alloc::string::String>(&v71);
        core::ptr::drop_in_place<alloc::string::String>(&v65);
        core::ptr::drop_in_place<alloc::string::String>(&v63);
        core::ptr::drop_in_place<alloc::string::String>(&v61);
        v240 = 0;
        return a1;
      }
      alloc::str::<impl str>::to_lowercase(v101, s2, v86);
      v50 = <alloc::string::String as core::cmp::PartialEq<&str>>::eq(v101, &off_11AB00);
      if ( (v50 & 1) != 0
        || (v49 = <alloc::string::String as core::cmp::PartialEq<&str>>::eq(v101, &off_11AB10), (v49 & 1) != 0) )
      {
        v48 = <str as uu_dircolors::StrUtils>::fnmatch(v56, v57, v87, v88);
        if ( (v48 & 1) != 0 )
        {
          v101[29] = 1;
          v72 = 1;
        }
        else
        {
          v36 = core::cmp::PartialEq::ne(&v72, &unk_19BC7);
          if ( (v36 & 1) != 0 )
          {
            v101[30] = 3;
            v72 = 3;
          }
        }
      }
      else
      {
        if ( (<uu_dircolors::ParseState as core::cmp::PartialEq>::eq(&v72, &unk_19BC7) & 1) != 0 )
        {
          v101[31] = 2;
          v72 = 2;
        }
        if ( (core::cmp::PartialEq::ne(&v72, &unk_19BC8) & 1) != 0 )
        {
          *(_QWORD *)v102 = alloc::string::String::as_str(v101);
          v103 = v18;
          if ( (core::str::<impl str>::starts_with(s2) & 1) != 0 )
          {
            v46 = <uu_dircolors::OutputFmt as core::cmp::PartialEq>::eq(v60, &unk_19BBD);
            if ( (v46 & 1) != 0 )
            {
              v248 = &v87;
              v249 = <&T as core::fmt::Display>::fmt;
              v107[4] = &v87;
              v107[5] = <&T as core::fmt::Display>::fmt;
              p_s2 = &s2;
              v247 = <&T as core::fmt::Display>::fmt;
              v107[6] = &s2;
              v107[7] = <&T as core::fmt::Display>::fmt;
              v107[0] = &v87;
              v107[1] = <&T as core::fmt::Display>::fmt;
              v107[2] = &s2;
              v107[3] = <&T as core::fmt::Display>::fmt;
              v115 = 3;
              v116 = 2LL;
              v118 = 2LL;
              v111[4] = 0LL;
              v112 = 32;
              v114 = 3;
              v113 = 0;
              v111[0] = 2LL;
              v111[1] = v117;
              v111[2] = 2LL;
              v111[3] = v119;
              v124 = 3;
              v125 = 2LL;
              v127 = 2LL;
              v120[4] = 1LL;
              v121 = 32;
              v123 = 3;
              v122 = 0;
              v120[0] = 2LL;
              v120[1] = v126;
              v120[2] = 2LL;
              v120[3] = v128;
              v133 = 3;
              v134 = 2LL;
              v136 = 2LL;
              v129[4] = 0LL;
              v130 = 32;
              v132 = 3;
              v131 = 0;
              v129[0] = 2LL;
              v129[1] = v135;
              v129[2] = 2LL;
              v129[3] = v137;
              memcpy(v108, v111, sizeof(v108));
              memcpy(&v109, v120, 0x38uLL);
              memcpy(&v110, v129, 0x38uLL);
              core::fmt::Arguments::new_v1_formatted(
                (unsigned int)v106,
                (unsigned int)&off_11AC20,
                4,
                (unsigned int)v107,
                2,
                (unsigned int)v108,
                3LL);
              alloc::fmt::format(v105, v106);
              v104[0] = v105[0];
              v104[1] = v105[1];
              v104[2] = v105[2];
              v32 = alloc::string::String::as_str(v104);
              v37 = v33;
              v38 = v32;
              alloc::string::String::push_str(&v61, v32, v33);
              core::ptr::drop_in_place<alloc::string::String>(v104);
            }
            else
            {
              v252 = &s2;
              v253 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v142 = &s2;
              *((_QWORD *)&v142 + 1) = <&T as core::fmt::Display>::fmt;
              v250 = &v87;
              v251 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v143 = &v87;
              *((_QWORD *)&v143 + 1) = <&T as core::fmt::Display>::fmt;
              v141[0] = v142;
              v141[1] = v143;
              core::fmt::Arguments::new_v1(v140, &off_11ABF0, v141);
              alloc::fmt::format(v139, v140);
              v138[0] = v139[0];
              v138[1] = v139[1];
              v138[2] = v139[2];
              v30 = alloc::string::String::as_str(v138);
              v39 = v31;
              v40 = v30;
              alloc::string::String::push_str(&v61, v30, v31);
              core::ptr::drop_in_place<alloc::string::String>(v138);
            }
          }
          else
          {
            v47 = core::str::<impl str>::starts_with(s2);
            if ( (v47 & 1) != 0 )
            {
              v44 = <uu_dircolors::OutputFmt as core::cmp::PartialEq>::eq(v60, &unk_19BBD);
              if ( (v44 & 1) != 0 )
              {
                v256 = &v87;
                v257 = <&T as core::fmt::Display>::fmt;
                v147[4] = &v87;
                v147[5] = <&T as core::fmt::Display>::fmt;
                v254 = &s2;
                v255 = <&T as core::fmt::Display>::fmt;
                v147[6] = &s2;
                v147[7] = <&T as core::fmt::Display>::fmt;
                v147[0] = &v87;
                v147[1] = <&T as core::fmt::Display>::fmt;
                v147[2] = &s2;
                v147[3] = <&T as core::fmt::Display>::fmt;
                v155 = 3;
                v156 = 2LL;
                v158 = 2LL;
                v151[4] = 0LL;
                v152 = 32;
                v154 = 3;
                v153 = 0;
                v151[0] = 2LL;
                v151[1] = v157;
                v151[2] = 2LL;
                v151[3] = v159;
                v164 = 3;
                v165 = 2LL;
                v167 = 2LL;
                v160[4] = 1LL;
                v161 = 32;
                v163 = 3;
                v162 = 0;
                v160[0] = 2LL;
                v160[1] = v166;
                v160[2] = 2LL;
                v160[3] = v168;
                v173 = 3;
                v174 = 2LL;
                v176 = 2LL;
                v169[4] = 0LL;
                v170 = 32;
                v172 = 3;
                v171 = 0;
                v169[0] = 2LL;
                v169[1] = v175;
                v169[2] = 2LL;
                v169[3] = v177;
                memcpy(v148, v151, sizeof(v148));
                memcpy(&v149, v160, 0x38uLL);
                memcpy(&v150, v169, 0x38uLL);
                core::fmt::Arguments::new_v1_formatted(
                  (unsigned int)v146,
                  (unsigned int)&off_11AB80,
                  4,
                  (unsigned int)v147,
                  2,
                  (unsigned int)v148,
                  3LL);
                alloc::fmt::format(v145, v146);
                v144[0] = v145[0];
                v144[1] = v145[1];
                v144[2] = v145[2];
                v28 = alloc::string::String::as_str(v144);
                v41 = v29;
                v42 = v28;
                alloc::string::String::push_str(&v61, v28, v29);
                core::ptr::drop_in_place<alloc::string::String>(v144);
              }
              else
              {
                v260 = &s2;
                v261 = <&T as core::fmt::Display>::fmt;
                *(_QWORD *)&v182 = &s2;
                *((_QWORD *)&v182 + 1) = <&T as core::fmt::Display>::fmt;
                v258 = &v87;
                v259 = <&T as core::fmt::Display>::fmt;
                *(_QWORD *)&v183 = &v87;
                *((_QWORD *)&v183 + 1) = <&T as core::fmt::Display>::fmt;
                v181[0] = v182;
                v181[1] = v183;
                core::fmt::Arguments::new_v1(v180, &unk_11AB50, v181);
                alloc::fmt::format(v179, v180);
                v178[0] = v179[0];
                v178[1] = v179[1];
                v178[2] = v179[2];
                v26 = alloc::string::String::as_str(v178);
                alloc::string::String::push_str(&v61, v26, v27);
                core::ptr::drop_in_place<alloc::string::String>(v178);
              }
            }
            else
            {
              v45 = <alloc::string::String as core::cmp::PartialEq<&str>>::eq(v101, &off_11AB20);
              if ( (v45 & 1) == 0
                && (<alloc::string::String as core::cmp::PartialEq<&str>>::eq(v101, &off_11AB30) & 1) == 0
                && (<alloc::string::String as core::cmp::PartialEq<&str>>::eq(v101, &off_11AB40) & 1) == 0 )
              {
                *(_QWORD *)v185 = core::slice::<impl [T]>::iter(
                                    &off_11F680,
                                    *(&uucore::features::colors::FILE_ATTRIBUTE_CODES + 1));
                v186 = v19;
                v184 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(
                         (int)v185,
                         (int)v102,
                         v19,
                         v185[0],
                         v20,
                         v21,
                         v34,
                         v35,
                         v37,
                         v38,
                         v39,
                         v40,
                         v41,
                         v42);
                if ( v184 == 0 )
                {
                  os_display::native::Quotable::maybe_quote(v235, a4, a5);
                  v274 = v235;
                  v275 = <os_display::Quoted as core::fmt::Display>::fmt;
                  *(_QWORD *)&v234 = v235;
                  *((_QWORD *)&v234 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
                  v244 = &v83;
                  v245 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                  *(_QWORD *)&v236 = &v83;
                  *((_QWORD *)&v236 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                  v262 = &s2;
                  v263 = <&T as core::fmt::Display>::fmt;
                  *(_QWORD *)&v237 = &s2;
                  *((_QWORD *)&v237 + 1) = <&T as core::fmt::Display>::fmt;
                  v233[0] = v234;
                  v233[1] = v236;
                  v233[2] = v237;
                  core::fmt::Arguments::new_v1(v232, &unk_11ABC0, v233);
                  alloc::fmt::format(&v230, v232);
                  v228 = v230;
                  v229 = v231;
                  a1[3] = v231;
                  *(_OWORD *)(a1 + 1) = v228;
                  *a1 = 1LL;
                  core::ptr::drop_in_place<alloc::string::String>(v101);
                  goto LABEL_40;
                }
                v187 = v184 + 16;
                v43 = <uu_dircolors::OutputFmt as core::cmp::PartialEq>::eq(v60, &unk_19BBD);
                if ( (v43 & 1) != 0 )
                {
                  v264 = &v87;
                  v265 = <&T as core::fmt::Display>::fmt;
                  v191[4] = &v87;
                  v191[5] = <&T as core::fmt::Display>::fmt;
                  v268 = &v187;
                  v269 = <&T as core::fmt::Display>::fmt;
                  v191[6] = &v187;
                  v191[7] = <&T as core::fmt::Display>::fmt;
                  v191[0] = &v87;
                  v191[1] = <&T as core::fmt::Display>::fmt;
                  v191[2] = &v187;
                  v191[3] = <&T as core::fmt::Display>::fmt;
                  v199 = 3;
                  v200 = 2LL;
                  v202 = 2LL;
                  v195[4] = 0LL;
                  v196 = 32;
                  v198 = 3;
                  v197 = 0;
                  v195[0] = 2LL;
                  v195[1] = v201;
                  v195[2] = 2LL;
                  v195[3] = v203;
                  v208 = 3;
                  v209 = 2LL;
                  v211 = 2LL;
                  v204[4] = 1LL;
                  v205 = 32;
                  v207 = 3;
                  v206 = 0;
                  v204[0] = 2LL;
                  v204[1] = v210;
                  v204[2] = 2LL;
                  v204[3] = v212;
                  v217 = 3;
                  v218 = 2LL;
                  v220 = 2LL;
                  v213[4] = 0LL;
                  v214 = 32;
                  v216 = 3;
                  v215 = 0;
                  v213[0] = 2LL;
                  v213[1] = v219;
                  v213[2] = 2LL;
                  v213[3] = v221;
                  memcpy(v192, v195, sizeof(v192));
                  memcpy(&v193, v204, 0x38uLL);
                  memcpy(&v194, v213, 0x38uLL);
                  core::fmt::Arguments::new_v1_formatted(
                    (unsigned int)v190,
                    (unsigned int)&off_11AB80,
                    4,
                    (unsigned int)v191,
                    2,
                    (unsigned int)v192,
                    3LL);
                  alloc::fmt::format(v189, v190);
                  v188[0] = v189[0];
                  v188[1] = v189[1];
                  v188[2] = v189[2];
                  v24 = alloc::string::String::as_str(v188);
                  alloc::string::String::push_str(&v61, v24, v25);
                  core::ptr::drop_in_place<alloc::string::String>(v188);
                }
                else
                {
                  v270 = &v187;
                  v271 = <&T as core::fmt::Display>::fmt;
                  *(_QWORD *)&v226 = &v187;
                  *((_QWORD *)&v226 + 1) = <&T as core::fmt::Display>::fmt;
                  v266 = &v87;
                  v267 = <&T as core::fmt::Display>::fmt;
                  *(_QWORD *)&v227 = &v87;
                  *((_QWORD *)&v227 + 1) = <&T as core::fmt::Display>::fmt;
                  v225[0] = v226;
                  v225[1] = v227;
                  core::fmt::Arguments::new_v1(v224, &unk_11AB50, v225);
                  alloc::fmt::format(v223, v224);
                  v222[0] = v223[0];
                  v222[1] = v223[1];
                  v222[2] = v223[2];
                  v22 = alloc::string::String::as_str(v222);
                  alloc::string::String::push_str(&v61, v22, v23);
                  core::ptr::drop_in_place<alloc::string::String>(v222);
                }
              }
            }
          }
        }
      }
      core::ptr::drop_in_place<alloc::string::String>(v101);
      core::ptr::drop_in_place<alloc::string::String>(v84);
      core::ptr::drop_in_place<alloc::string::String>(v82);
    }
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map_while::MapWhile<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>,core::result::Result<alloc::string::String,std::io::error::Error>::ok>>>(dest);
  v55 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v60, &off_11AAE0);
  if ( (v55 & 1) != 0 )
    alloc::string::String::pop(&v61);
  v10 = <alloc::string::String as core::ops::deref::Deref>::deref(&v65);
  alloc::string::String::push_str(&v61, v10, v11);
  v240 = 0;
  v239 = v62;
  v238 = v61;
  a1[3] = v62;
  *(_OWORD *)(a1 + 1) = v238;
  *a1 = 0LL;
  core::ptr::drop_in_place<alloc::string::String>(&v71);
  core::ptr::drop_in_place<alloc::string::String>(&v65);
  core::ptr::drop_in_place<alloc::string::String>(&v63);
  v240 = 0;
  return a1;
}
