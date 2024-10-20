__int64 __fastcall uu_ls::display_items(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, char **a6)
{
  unsigned __int64 v6; // r13
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rsi
  bool v12; // bp
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  const char *v23; // rax
  unsigned __int8 has_acl; // bl
  _BOOL8 v25; // rax
  const char *v26; // rcx
  const char *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _BOOL8 v30; // rax
  const char *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // r8d
  __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rdi
  bool v38; // cf
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  __int64 system_time; // rax
  int v42; // edx
  int v43; // ebx
  __int64 v44; // r14
  int v45; // eax
  __int32 v46; // r15d
  unsigned __int32 v47; // r14d
  __int32 v48; // r13d
  unsigned __int32 v49; // ebx
  char v50; // al
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  const char *v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // r14
  __int64 v56; // rax
  int v57; // r8d
  __int64 v58; // rax
  void *v59; // rbx
  size_t v60; // r14
  const void *v61; // rax
  size_t v62; // rdx
  __int64 v63; // rax
  char v64; // bl
  char *v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // r15
  __int64 v68; // r13
  __int64 v69; // rcx
  __int64 v70; // r14
  __int64 v71; // rcx
  __int64 v72; // r13
  __int64 v73; // r14
  _QWORD *v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // rax
  char **v77; // rbx
  bool v78; // zf
  _BOOL8 v79; // rcx
  const char *v80; // rax
  __int64 v81; // rax
  _OWORD *v82; // rax
  __int128 v83; // xmm0
  __int64 v84; // rdx
  __int64 v85; // rsi
  __int64 v86; // rcx
  __int64 *v87; // rdi
  __int64 v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  __int128 v93; // xmm0
  __int64 v94; // rbx
  __int64 v95; // rax
  int v96; // ecx
  __int64 v97; // rax
  __int128 v98; // xmm0
  __int64 v99; // rax
  _OWORD *v100; // rax
  __int128 v101; // xmm0
  __int16 v102; // r15
  __int64 *v103; // rax
  __int16 v104; // ax
  unsigned __int16 v105; // cx
  __int16 v106; // ax
  __int64 v107; // rax
  __int16 v108; // ax
  __int64 *v109; // rax
  __int64 v110; // rax
  _OWORD *v111; // rax
  __int128 v112; // xmm0
  __int64 v113; // rax
  __int64 v115; // rax
  _OWORD *v116; // rax
  __int128 v117; // xmm0
  unsigned __int16 v118; // ax
  char **v119; // rax
  char **v120; // rax
  char v121; // [rsp+Fh] [rbp-E79h] BYREF
  __int64 v122; // [rsp+10h] [rbp-E78h]
  __m256i v123; // [rsp+18h] [rbp-E70h] BYREF
  __int64 v124; // [rsp+38h] [rbp-E50h]
  __int64 v125; // [rsp+40h] [rbp-E48h]
  char v126; // [rsp+48h] [rbp-E40h]
  __int128 v127; // [rsp+68h] [rbp-E20h] BYREF
  __int128 v128; // [rsp+78h] [rbp-E10h] BYREF
  __int64 v129; // [rsp+88h] [rbp-E00h]
  __int64 v130; // [rsp+90h] [rbp-DF8h]
  __int64 v131; // [rsp+98h] [rbp-DF0h]
  __int128 v132; // [rsp+A0h] [rbp-DE8h] BYREF
  __int64 v133; // [rsp+B0h] [rbp-DD8h]
  void *v134; // [rsp+B8h] [rbp-DD0h] BYREF
  __int64 v135; // [rsp+C0h] [rbp-DC8h]
  __int128 *v136; // [rsp+C8h] [rbp-DC0h]
  __int64 v137; // [rsp+D0h] [rbp-DB8h]
  __m256i *v138; // [rsp+D8h] [rbp-DB0h]
  __int64 (__fastcall **v139)(); // [rsp+E0h] [rbp-DA8h]
  __int64 v140; // [rsp+E8h] [rbp-DA0h]
  char v141; // [rsp+F0h] [rbp-D98h]
  unsigned __int32 v142; // [rsp+FCh] [rbp-D8Ch]
  char **v143; // [rsp+100h] [rbp-D88h]
  __int64 v144; // [rsp+108h] [rbp-D80h] BYREF
  __int64 v145; // [rsp+110h] [rbp-D78h]
  __int64 v146; // [rsp+118h] [rbp-D70h] BYREF
  char **v147; // [rsp+120h] [rbp-D68h]
  _QWORD *v148; // [rsp+128h] [rbp-D60h]
  char **v149; // [rsp+130h] [rbp-D58h]
  __int64 v150; // [rsp+138h] [rbp-D50h] BYREF
  __int64 v151; // [rsp+140h] [rbp-D48h]
  __int64 v152; // [rsp+148h] [rbp-D40h]
  unsigned __int32 v153; // [rsp+154h] [rbp-D34h]
  __int128 v154; // [rsp+158h] [rbp-D30h] BYREF
  __int128 v155; // [rsp+168h] [rbp-D20h]
  _QWORD v156[2]; // [rsp+178h] [rbp-D10h] BYREF
  __int64 v157; // [rsp+188h] [rbp-D00h] BYREF
  __int128 v158; // [rsp+190h] [rbp-CF8h] BYREF
  __int64 v159; // [rsp+1A0h] [rbp-CE8h] BYREF
  __int64 v160; // [rsp+1B0h] [rbp-CD8h]
  _QWORD v161[2]; // [rsp+1B8h] [rbp-CD0h] BYREF
  __int64 v162; // [rsp+1C8h] [rbp-CC0h] BYREF
  char v163[8]; // [rsp+1D0h] [rbp-CB8h] BYREF
  void *s2; // [rsp+1D8h] [rbp-CB0h]
  __int64 v165; // [rsp+1E0h] [rbp-CA8h] BYREF
  __int64 v166; // [rsp+1E8h] [rbp-CA0h] BYREF
  __int128 v167; // [rsp+1F0h] [rbp-C98h]
  __int64 v168; // [rsp+200h] [rbp-C88h] BYREF
  __int128 v169; // [rsp+208h] [rbp-C80h] BYREF
  _QWORD v170[2]; // [rsp+218h] [rbp-C70h] BYREF
  __int64 v171; // [rsp+228h] [rbp-C60h] BYREF
  __int128 v172; // [rsp+230h] [rbp-C58h] BYREF
  __int128 v173; // [rsp+240h] [rbp-C48h]
  __int128 v174; // [rsp+250h] [rbp-C38h] BYREF
  __int128 v175; // [rsp+260h] [rbp-C28h]
  _QWORD v176[2]; // [rsp+270h] [rbp-C18h] BYREF
  _BYTE v177[24]; // [rsp+280h] [rbp-C08h] BYREF
  __int128 v178; // [rsp+2A0h] [rbp-BE8h] BYREF
  __int64 v179; // [rsp+2B0h] [rbp-BD8h] BYREF
  __int64 v180; // [rsp+2C0h] [rbp-BC8h] BYREF
  __int128 v181; // [rsp+2C8h] [rbp-BC0h] BYREF
  char v182[8]; // [rsp+2D8h] [rbp-BB0h] BYREF
  __int64 v183; // [rsp+2E0h] [rbp-BA8h]
  __int64 v184; // [rsp+2E8h] [rbp-BA0h] BYREF
  __int128 v185; // [rsp+2F0h] [rbp-B98h] BYREF
  __int64 v186; // [rsp+300h] [rbp-B88h] BYREF
  __int128 v187; // [rsp+310h] [rbp-B78h] BYREF
  __int64 v188; // [rsp+320h] [rbp-B68h] BYREF
  __int128 v189; // [rsp+330h] [rbp-B58h] BYREF
  __int64 v190; // [rsp+340h] [rbp-B48h] BYREF
  __int128 v191; // [rsp+350h] [rbp-B38h] BYREF
  __int64 v192; // [rsp+360h] [rbp-B28h] BYREF
  __int128 v193; // [rsp+370h] [rbp-B18h] BYREF
  __int64 v194; // [rsp+380h] [rbp-B08h] BYREF
  __int128 v195; // [rsp+390h] [rbp-AF8h] BYREF
  __int64 v196; // [rsp+3A0h] [rbp-AE8h] BYREF
  __int128 v197; // [rsp+3B0h] [rbp-AD8h] BYREF
  __int64 v198; // [rsp+3C0h] [rbp-AC8h] BYREF
  __int128 v199; // [rsp+3D0h] [rbp-AB8h] BYREF
  __int64 v200; // [rsp+3E0h] [rbp-AA8h] BYREF
  __int128 v201; // [rsp+3F0h] [rbp-A98h] BYREF
  __int64 v202; // [rsp+400h] [rbp-A88h] BYREF
  __int128 v203; // [rsp+410h] [rbp-A78h] BYREF
  __int64 v204; // [rsp+420h] [rbp-A68h] BYREF
  __int128 v205; // [rsp+430h] [rbp-A58h] BYREF
  __int64 v206; // [rsp+440h] [rbp-A48h] BYREF
  __int128 v207; // [rsp+450h] [rbp-A38h] BYREF
  __int64 v208; // [rsp+460h] [rbp-A28h] BYREF
  __int128 v209; // [rsp+470h] [rbp-A18h] BYREF
  __int64 v210; // [rsp+480h] [rbp-A08h] BYREF
  __int128 v211; // [rsp+490h] [rbp-9F8h] BYREF
  __int64 v212; // [rsp+4A0h] [rbp-9E8h] BYREF
  __int128 v213; // [rsp+4B0h] [rbp-9D8h] BYREF
  __int64 v214; // [rsp+4C0h] [rbp-9C8h] BYREF
  __int128 v215; // [rsp+4D0h] [rbp-9B8h] BYREF
  __int64 v216; // [rsp+4E0h] [rbp-9A8h] BYREF
  __int128 v217; // [rsp+4F0h] [rbp-998h] BYREF
  __int64 v218; // [rsp+500h] [rbp-988h] BYREF
  char v219[8]; // [rsp+510h] [rbp-978h] BYREF
  __int128 v220; // [rsp+518h] [rbp-970h] BYREF
  char v221[8]; // [rsp+528h] [rbp-960h] BYREF
  __int128 v222; // [rsp+530h] [rbp-958h] BYREF
  char v223[8]; // [rsp+540h] [rbp-948h] BYREF
  __int128 v224; // [rsp+548h] [rbp-940h] BYREF
  char v225[8]; // [rsp+558h] [rbp-930h] BYREF
  __int128 v226; // [rsp+560h] [rbp-928h] BYREF
  __int64 v227; // [rsp+570h] [rbp-918h] BYREF
  __int64 v228; // [rsp+578h] [rbp-910h]
  __int64 v229; // [rsp+580h] [rbp-908h]
  __int64 v230; // [rsp+588h] [rbp-900h]
  __int64 v231; // [rsp+590h] [rbp-8F8h]
  unsigned __int64 v232; // [rsp+598h] [rbp-8F0h]
  unsigned __int64 v233; // [rsp+5A0h] [rbp-8E8h]
  unsigned __int64 v234; // [rsp+5A8h] [rbp-8E0h]
  _BYTE v235[16]; // [rsp+5B8h] [rbp-8D0h] BYREF
  char v236[8]; // [rsp+5C8h] [rbp-8C0h] BYREF
  _QWORD v237[3]; // [rsp+5D0h] [rbp-8B8h] BYREF
  _QWORD v238[3]; // [rsp+5E8h] [rbp-8A0h] BYREF
  _QWORD v239[2]; // [rsp+600h] [rbp-888h] BYREF
  _QWORD v240[2]; // [rsp+610h] [rbp-878h] BYREF
  _QWORD v241[2]; // [rsp+620h] [rbp-868h] BYREF
  _QWORD v242[2]; // [rsp+630h] [rbp-858h] BYREF
  _QWORD v243[2]; // [rsp+640h] [rbp-848h] BYREF
  _QWORD v244[2]; // [rsp+650h] [rbp-838h] BYREF
  _QWORD v245[2]; // [rsp+660h] [rbp-828h] BYREF
  _QWORD v246[2]; // [rsp+670h] [rbp-818h] BYREF
  _QWORD v247[2]; // [rsp+680h] [rbp-808h] BYREF
  _QWORD v248[2]; // [rsp+690h] [rbp-7F8h] BYREF
  _QWORD v249[2]; // [rsp+6A0h] [rbp-7E8h] BYREF
  _QWORD v250[2]; // [rsp+6B0h] [rbp-7D8h] BYREF
  _QWORD v251[2]; // [rsp+6C0h] [rbp-7C8h] BYREF
  _QWORD v252[2]; // [rsp+6D0h] [rbp-7B8h] BYREF
  _QWORD v253[2]; // [rsp+6E0h] [rbp-7A8h] BYREF
  _QWORD v254[2]; // [rsp+6F0h] [rbp-798h] BYREF
  _QWORD v255[2]; // [rsp+700h] [rbp-788h] BYREF
  _QWORD v256[2]; // [rsp+710h] [rbp-778h] BYREF
  _QWORD v257[2]; // [rsp+720h] [rbp-768h] BYREF
  _QWORD v258[2]; // [rsp+730h] [rbp-758h] BYREF
  _QWORD v259[2]; // [rsp+740h] [rbp-748h] BYREF
  _QWORD v260[2]; // [rsp+750h] [rbp-738h] BYREF
  __int64 v261; // [rsp+760h] [rbp-728h] BYREF
  __int64 v262; // [rsp+768h] [rbp-720h]
  __int64 v263; // [rsp+770h] [rbp-718h]
  __int64 v264; // [rsp+778h] [rbp-710h] BYREF
  __int64 v265; // [rsp+780h] [rbp-708h]
  __int64 v266; // [rsp+788h] [rbp-700h]
  __int128 v267; // [rsp+790h] [rbp-6F8h] BYREF
  __int64 v268; // [rsp+7A0h] [rbp-6E8h]
  _QWORD v269[3]; // [rsp+7A8h] [rbp-6E0h] BYREF
  _QWORD v270[4]; // [rsp+7C0h] [rbp-6C8h] BYREF
  _QWORD v271[4]; // [rsp+7E0h] [rbp-6A8h] BYREF
  _QWORD v272[4]; // [rsp+800h] [rbp-688h] BYREF
  _QWORD v273[4]; // [rsp+820h] [rbp-668h] BYREF
  _QWORD v274[4]; // [rsp+840h] [rbp-648h] BYREF
  _BYTE v275[24]; // [rsp+860h] [rbp-628h] BYREF
  __int128 v276; // [rsp+878h] [rbp-610h]
  __int64 v277; // [rsp+888h] [rbp-600h]
  _QWORD v278[6]; // [rsp+890h] [rbp-5F8h] BYREF
  _QWORD v279[8]; // [rsp+8C0h] [rbp-5C8h] BYREF
  _QWORD v280[6]; // [rsp+900h] [rbp-588h] BYREF
  _QWORD v281[6]; // [rsp+930h] [rbp-558h] BYREF
  _QWORD v282[6]; // [rsp+960h] [rbp-528h] BYREF
  _QWORD v283[6]; // [rsp+990h] [rbp-4F8h] BYREF
  _QWORD v284[6]; // [rsp+9C0h] [rbp-4C8h] BYREF
  _QWORD v285[6]; // [rsp+9F0h] [rbp-498h] BYREF
  _QWORD v286[6]; // [rsp+A20h] [rbp-468h] BYREF
  _QWORD v287[6]; // [rsp+A50h] [rbp-438h] BYREF
  _QWORD v288[6]; // [rsp+A80h] [rbp-408h] BYREF
  _QWORD v289[6]; // [rsp+AB0h] [rbp-3D8h] BYREF
  _QWORD v290[6]; // [rsp+AE0h] [rbp-3A8h] BYREF
  _QWORD v291[6]; // [rsp+B10h] [rbp-378h] BYREF
  _QWORD v292[6]; // [rsp+B40h] [rbp-348h] BYREF
  _QWORD v293[6]; // [rsp+B70h] [rbp-318h] BYREF
  _QWORD v294[6]; // [rsp+BA0h] [rbp-2E8h] BYREF
  _QWORD v295[6]; // [rsp+BD0h] [rbp-2B8h] BYREF
  _QWORD v296[6]; // [rsp+C00h] [rbp-288h] BYREF
  _QWORD v297[6]; // [rsp+C30h] [rbp-258h] BYREF
  _QWORD v298[6]; // [rsp+C60h] [rbp-228h] BYREF
  _QWORD v299[6]; // [rsp+C90h] [rbp-1F8h] BYREF
  _QWORD v300[6]; // [rsp+CC0h] [rbp-1C8h] BYREF
  _QWORD v301[6]; // [rsp+CF0h] [rbp-198h] BYREF
  _QWORD v302[6]; // [rsp+D20h] [rbp-168h] BYREF
  _QWORD v303[6]; // [rsp+D50h] [rbp-138h] BYREF
  _QWORD v304[6]; // [rsp+D80h] [rbp-108h] BYREF
  _OWORD v305[2]; // [rsp+DB0h] [rbp-D8h] BYREF
  _OWORD v306[2]; // [rsp+DD0h] [rbp-B8h] BYREF
  _BYTE v307[24]; // [rsp+DF8h] [rbp-90h] BYREF
  _QWORD v308[15]; // [rsp+E10h] [rbp-78h] BYREF

  v143 = a6;
  v148 = a5;
  v131 = a4;
  v8 = a1;
  v122 = a3;
  v123.m256i_i64[0] = a3;
  v9 = 304 * a2;
  v10 = 0LL;
  do
  {
    v11 = v10 + a1;
    v12 = v9 != v10 && v10 + a1 != 0;
    if ( !v12 )
      break;
    v10 += 304LL;
  }
  while ( !(unsigned __int8)uu_ls::display_items::{{closure}}(&v123, v11) );
  if ( *(_BYTE *)(v122 + 248) == 1 )
  {
    uu_ls::calculate_padding_collection(&v227, a1, a2, v122, v131);
    if ( a2 )
    {
      v13 = 304 * a2;
      v160 = v122 + 250;
      v149 = &anon_899730b44f50ab02bfd9ca63d23e76e8_28_llvm_11807341281290569930;
      while ( 1 )
      {
        if ( !v8 )
          return 0LL;
        v147 = (char **)v13;
        if ( (*(_BYTE *)(v122 + 233) & 1) != 0 || (*(_BYTE *)(v122 + 234) & 1) != 0 )
        {
          v14 = v131;
          uu_ls::display_additional_leading_info((__int64)&v261, v8, &v227, v122, v131);
          v15 = v262;
          if ( v261 == 0x8000000000000000LL )
            return v15;
          v161[0] = v261;
          v161[1] = v262;
          v162 = v263;
          v239[0] = v161;
          v239[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v280[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v280[1] = 1LL;
          v280[4] = 0LL;
          v280[2] = v239;
          v280[3] = 1LL;
          v16 = std::io::Write::write_fmt(v14, v280);
          if ( v16 )
          {
            v123.m256i_i64[0] = 0x8000000000000000LL;
            v123.m256i_i64[3] = v16;
            v111 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            v15 = (__int64)v111;
            if ( !v111 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v112 = *(_OWORD *)v123.m256i_i8;
            v111[1] = *(_OWORD *)&v123.m256i_u64[2];
            *v111 = v112;
            alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v161);
            v84 = v123.m256i_i64[1];
            if ( v123.m256i_i64[1] )
            {
              v85 = v123.m256i_i64[0];
              v86 = v123.m256i_i64[2];
              v87 = &v162;
              goto LABEL_281;
            }
            return v15;
          }
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v161);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v162,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
        }
        v144 = 0LL;
        v145 = 1LL;
        v146 = 0LL;
        if ( *((_BYTE *)v143 + 29) != 2 )
        {
          v17 = lscolors::LsColors::style_for_indicator(*v143, 0LL);
          if ( v17 && *(_BYTE *)v17 != 2 )
          {
            v123.m256i_i8[0] = *(_BYTE *)v17;
            v18 = *(_OWORD *)(v17 + 1);
            *(__int32 *)((char *)&v123.m256i_i32[4] + 1) = *(_DWORD *)(v17 + 17);
            *(_OWORD *)&v123.m256i_i8[1] = v18;
            uu_ls::colors::StyleManager::get_style_code(v170, v143, &v123);
          }
          else
          {
            v170[0] = 0LL;
            v170[1] = 1LL;
            v171 = 0LL;
          }
          v245[0] = v170;
          v245[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v287[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v287[1] = 1LL;
          v287[4] = 0LL;
          v287[2] = v245;
          v287[3] = 1LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v287) )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF528);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v170);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v171,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
        }
        if ( (*(_BYTE *)(v122 + 238) & 1) != 0 )
        {
          v19 = v146;
          if ( (unsigned __int64)(v144 - v146) <= 1 )
          {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v144, v146, 2LL);
            v19 = v146;
          }
          v20 = v145;
          core::intrinsics::copy_nonoverlapping::precondition_check(asc_3ABC6, v145 + v19, 1LL, 1LL, 2LL);
          *(_WORD *)(v20 + v19) = 8224;
          v146 += 2LL;
        }
        v21 = v8 + 72;
        v22 = *(_QWORD *)(v8 + 72);
        if ( v22 == 3 )
        {
          v21 = core::cell::once::OnceCell<T>::try_init(v8 + 72, v8, v131);
          v22 = *(_QWORD *)v21;
        }
        if ( v22 == 2 )
        {
          if ( *(_DWORD *)(v8 + 248) == 1 )
          {
            v23 = (const char *)&unk_3ABCC;
            switch ( __ROL4__((*(_DWORD *)(v8 + 252) & 0xF000) - 0x2000, 19) )
            {
              case 0:
                v23 = aC_0;
                break;
              case 1:
                v23 = (const char *)&unk_3ABCB;
                break;
              case 2:
                break;
              case 4:
                v23 = (const char *)&unk_39B37;
                break;
              default:
                goto LABEL_88;
            }
          }
          else
          {
LABEL_88:
            v23 = asc_3ABCA;
          }
          v176[0] = v23;
          v176[1] = 1LL;
          v30 = *(_QWORD *)(v8 + 64) >= 2uLL;
          v31 = (_BYTE *)(&dword_0 + 1);
          if ( *(_QWORD *)(v8 + 64) >= 2uLL )
            v31 = asc_3ABB7;
          v255[0] = v31;
          v255[1] = v30;
          *(_QWORD *)&v127 = asc_3ABC0;
          *((_QWORD *)&v127 + 1) = 1LL;
          *(_QWORD *)&v128 = &v127;
          *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
          v129 = v228;
          v130 = 0LL;
          v123.m256i_i64[0] = 2LL;
          v123.m256i_i64[2] = 1LL;
          v123.m256i_i64[3] = 1LL;
          v124 = 0LL;
          v125 = 32LL;
          v126 = 1;
          v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v135 = 1LL;
          v136 = &v128;
          v137 = 2LL;
          v138 = &v123;
          v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&v132, &v134);
          v205 = v132;
          v206 = v133;
          v278[0] = v176;
          v278[1] = <&T as core::fmt::Display>::fmt;
          v278[2] = v255;
          v278[3] = <&T as core::fmt::Display>::fmt;
          v278[4] = &v205;
          v278[5] = <alloc::string::String as core::fmt::Display>::fmt;
          v297[0] = &unk_1FF698;
          v297[1] = 3LL;
          v297[4] = 0LL;
          v297[2] = v278;
          v297[3] = 3LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v297) )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF6C8);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v205);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v206,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          if ( (*(_BYTE *)(v122 + 226) & 1) != 0 )
          {
            *(_QWORD *)&v127 = asc_3ABC0;
            *((_QWORD *)&v127 + 1) = 1LL;
            *(_QWORD *)&v128 = &v127;
            *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
            v129 = v229;
            v130 = 0LL;
            v123.m256i_i64[0] = 2LL;
            v123.m256i_i64[2] = 1LL;
            v123.m256i_i64[3] = 1LL;
            v124 = 0LL;
            v125 = 32LL;
            v126 = 0;
            v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
            v135 = 1LL;
            v136 = &v128;
            v137 = 2LL;
            v138 = &v123;
            v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
            alloc::fmt::format::format_inner(&v132, &v134);
            v207 = v132;
            v208 = v133;
            v256[0] = &v207;
            v256[1] = <alloc::string::String as core::fmt::Display>::fmt;
            v298[0] = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
            v298[1] = 1LL;
            v298[4] = 0LL;
            v298[2] = v256;
            v298[3] = 1LL;
            if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v298) )
              core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF6E0);
            alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v207);
            if ( v123.m256i_i64[1] )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                &v208,
                v123.m256i_i64[0],
                v123.m256i_i64[1],
                v123.m256i_i64[2]);
          }
          if ( (*(_BYTE *)(v122 + 225) & 1) != 0 )
          {
            *(_QWORD *)&v127 = asc_3ABC0;
            *((_QWORD *)&v127 + 1) = 1LL;
            *(_QWORD *)&v128 = &v127;
            *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
            v129 = v230;
            v130 = 0LL;
            v123.m256i_i64[0] = 2LL;
            v123.m256i_i64[2] = 1LL;
            v123.m256i_i64[3] = 1LL;
            v124 = 0LL;
            v125 = 32LL;
            v126 = 0;
            v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
            v135 = 1LL;
            v136 = &v128;
            v137 = 2LL;
            v138 = &v123;
            v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
            alloc::fmt::format::format_inner(&v132, &v134);
            v209 = v132;
            v210 = v133;
            v257[0] = &v209;
            v257[1] = <alloc::string::String as core::fmt::Display>::fmt;
            v299[0] = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
            v299[1] = 1LL;
            v299[4] = 0LL;
            v299[2] = v257;
            v299[3] = 1LL;
            if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v299) )
              core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF6F8);
            alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v209);
            if ( v123.m256i_i64[1] )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                &v210,
                v123.m256i_i64[0],
                v123.m256i_i64[1],
                v123.m256i_i64[2]);
          }
          if ( (*(_BYTE *)(v122 + 235) & 1) != 0 )
          {
            if ( !*(_QWORD *)(v8 + 56) )
              goto LABEL_338;
            v32 = *(_QWORD *)(v8 + 64);
            if ( v32 < 0 )
              goto LABEL_338;
            *(_QWORD *)&v127 = *(_QWORD *)(v8 + 56);
            *((_QWORD *)&v127 + 1) = v32;
            *(_QWORD *)&v128 = &v127;
            *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
            v129 = v231;
            v130 = 0LL;
            v123.m256i_i64[0] = 2LL;
            v123.m256i_i64[2] = 1LL;
            v123.m256i_i64[3] = 1LL;
            v124 = 0LL;
            v125 = 32LL;
            v126 = 0;
            v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
            v135 = 1LL;
            v136 = &v128;
            v137 = 2LL;
            v138 = &v123;
            v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
            alloc::fmt::format::format_inner(&v132, &v134);
            v211 = v132;
            v212 = v133;
            v258[0] = &v211;
            v258[1] = <alloc::string::String as core::fmt::Display>::fmt;
            v300[0] = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
            v300[1] = 1LL;
            v300[4] = 0LL;
            v300[2] = v258;
            v300[3] = 1LL;
            if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v300) )
              core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF710);
            alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v211);
            if ( v123.m256i_i64[1] )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                &v212,
                v123.m256i_i64[0],
                v123.m256i_i64[1],
                v123.m256i_i64[2]);
          }
          if ( (*(_BYTE *)(v122 + 224) & 1) != 0 )
          {
            *(_QWORD *)&v127 = asc_3ABC0;
            *((_QWORD *)&v127 + 1) = 1LL;
            *(_QWORD *)&v128 = &v127;
            *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
            v129 = v229;
            v130 = 0LL;
            v123.m256i_i64[0] = 2LL;
            v123.m256i_i64[2] = 1LL;
            v123.m256i_i64[3] = 1LL;
            v124 = 0LL;
            v125 = 32LL;
            v126 = 0;
            v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
            v135 = 1LL;
            v136 = &v128;
            v137 = 2LL;
            v138 = &v123;
            v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
            alloc::fmt::format::format_inner(&v132, &v134);
            v213 = v132;
            v214 = v133;
            v259[0] = &v213;
            v259[1] = <alloc::string::String as core::fmt::Display>::fmt;
            v301[0] = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
            v301[1] = 1LL;
            v301[4] = 0LL;
            v301[2] = v259;
            v301[3] = 1LL;
            if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v301) )
              core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF728);
            alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v213);
            if ( v123.m256i_i64[1] )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                &v214,
                v123.m256i_i64[0],
                v123.m256i_i64[1],
                v123.m256i_i64[2]);
          }
          v238[0] = 0LL;
          v238[1] = 1LL;
          v238[2] = 0LL;
          if ( !v145 || v146 < 0 )
            goto LABEL_338;
          v33 = ansi_width::ansi_width();
          uu_ls::display_item_name((unsigned int)v182, v8, v122, 0, v34, (unsigned int)v238, v131, (__int64)v143, v33);
          *(_QWORD *)&v127 = asc_3ABC0;
          *((_QWORD *)&v127 + 1) = 1LL;
          *(_QWORD *)&v128 = &v127;
          *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
          v129 = v232;
          v130 = 0LL;
          v123.m256i_i64[0] = 2LL;
          v123.m256i_i64[2] = 1LL;
          v123.m256i_i64[3] = 1LL;
          v124 = 0LL;
          v125 = 32LL;
          v126 = 1;
          v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v135 = 1LL;
          v136 = &v128;
          v137 = 2LL;
          v138 = &v123;
          v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&v132, &v134);
          v215 = v132;
          v216 = v133;
          *(_QWORD *)&v127 = asc_3ABC0;
          *((_QWORD *)&v127 + 1) = 1LL;
          *(_QWORD *)&v128 = &v127;
          *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
          v129 = 12LL;
          v130 = 0LL;
          v123.m256i_i64[0] = 2LL;
          v123.m256i_i64[2] = 1LL;
          v123.m256i_i64[3] = 1LL;
          v124 = 0LL;
          v125 = 32LL;
          v126 = 1;
          v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v135 = 1LL;
          v136 = &v128;
          v137 = 2LL;
          v138 = &v123;
          v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&v132, &v134);
          v217 = v132;
          v218 = v133;
          v273[0] = &v215;
          v273[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v273[2] = &v217;
          v273[3] = <alloc::string::String as core::fmt::Display>::fmt;
          v302[0] = &off_1FF740;
          v302[1] = 3LL;
          v302[4] = 0LL;
          v302[2] = v273;
          v302[3] = 2LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v302) )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF770);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v217);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v218,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v215);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v216,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          if ( (*(_BYTE *)(v122 + 238) & 1) != 0 )
          {
            if ( !v183 || v184 < 0 )
              goto LABEL_338;
            v35 = v146;
            core::str::<impl str>::trim_matches();
            uu_ls::dired::calculate_and_update_positions(v148, v35);
          }
          v274[0] = v182;
          v274[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v274[2] = v160;
          v274[3] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
          v303[0] = "\x01";
          v303[1] = 2LL;
          v303[4] = 0LL;
          v303[2] = v274;
          v303[3] = 2LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v303) )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF788);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v182);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v184,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          goto LABEL_190;
        }
        if ( !*(_QWORD *)(v8 + 8) || *(__int64 *)(v8 + 16) < 0 )
          goto LABEL_338;
        has_acl = uucore::features::fsxattr::has_acl();
        uucore::features::fs::display_permissions_unix(v235, *(unsigned int *)(v21 + 56), 1LL);
        v25 = *(_QWORD *)(v8 + 64) >= 2uLL;
        v26 = (_BYTE *)(&dword_0 + 1);
        if ( *(_QWORD *)(v8 + 64) >= 2uLL )
          v26 = asc_3ABB7;
        v246[0] = v26;
        v27 = (_BYTE *)(&dword_0 + 1);
        if ( has_acl )
          v27 = asc_3ABC9;
        v246[1] = v25;
        v247[0] = v27;
        v247[1] = has_acl;
        uu_ls::display_symlink_count(v219, v21);
        if ( !(_QWORD)v220 || v220 < 0 )
          goto LABEL_338;
        v127 = v220;
        *(_QWORD *)&v128 = &v127;
        *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
        v129 = v228;
        v130 = 0LL;
        v123.m256i_i64[0] = 2LL;
        v123.m256i_i64[2] = 1LL;
        v123.m256i_i64[3] = 1LL;
        v124 = 0LL;
        v125 = 32LL;
        v126 = 1;
        v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
        v135 = 1LL;
        v136 = &v128;
        v137 = 2LL;
        v138 = &v123;
        v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
        alloc::fmt::format::format_inner(&v132, &v134);
        v185 = v132;
        v186 = v133;
        v279[0] = v235;
        v279[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v279[2] = v246;
        v279[3] = <&T as core::fmt::Display>::fmt;
        v279[4] = v247;
        v279[5] = <&T as core::fmt::Display>::fmt;
        v279[6] = &v185;
        v279[7] = <alloc::string::String as core::fmt::Display>::fmt;
        v288[0] = &unk_1FF540;
        v288[1] = 4LL;
        v288[4] = 0LL;
        v288[2] = v279;
        v288[3] = 4LL;
        if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v288) )
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF580);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v185);
        if ( v123.m256i_i64[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v186,
            v123.m256i_i64[0],
            v123.m256i_i64[1],
            v123.m256i_i64[2]);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v219);
        if ( v123.m256i_i64[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            (char *)&v220 + 8,
            v123.m256i_i64[0],
            v123.m256i_i64[1],
            v123.m256i_i64[2]);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v235);
        if ( v123.m256i_i64[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            v236,
            v123.m256i_i64[0],
            v123.m256i_i64[1],
            v123.m256i_i64[2]);
        v28 = v122;
        if ( (*(_BYTE *)(v122 + 226) & 1) != 0 )
        {
          uu_ls::display_uname(v221, v21);
          if ( !(_QWORD)v222 || v222 < 0 )
            goto LABEL_338;
          v127 = v222;
          *(_QWORD *)&v128 = &v127;
          *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
          v129 = v229;
          v130 = 0LL;
          v123.m256i_i64[0] = 2LL;
          v123.m256i_i64[2] = 1LL;
          v123.m256i_i64[3] = 1LL;
          v124 = 0LL;
          v125 = 32LL;
          v126 = 0;
          v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v135 = 1LL;
          v136 = &v128;
          v137 = 2LL;
          v138 = &v123;
          v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&v132, &v134);
          v187 = v132;
          v188 = v133;
          v248[0] = &v187;
          v248[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v289[0] = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
          v289[1] = 1LL;
          v289[4] = 0LL;
          v289[2] = v248;
          v289[3] = 1LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v289) )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF598);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v187);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v188,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v221);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              (char *)&v222 + 8,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          v28 = v122;
        }
        if ( (*(_BYTE *)(v28 + 225) & 1) != 0 )
        {
          uu_ls::display_group(v223, v21);
          if ( !(_QWORD)v224 || v224 < 0 )
            goto LABEL_338;
          v127 = v224;
          *(_QWORD *)&v128 = &v127;
          *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
          v129 = v230;
          v130 = 0LL;
          v123.m256i_i64[0] = 2LL;
          v123.m256i_i64[2] = 1LL;
          v123.m256i_i64[3] = 1LL;
          v124 = 0LL;
          v125 = 32LL;
          v126 = 0;
          v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v135 = 1LL;
          v136 = &v128;
          v137 = 2LL;
          v138 = &v123;
          v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&v132, &v134);
          v189 = v132;
          v190 = v133;
          v249[0] = &v189;
          v249[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v290[0] = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
          v290[1] = 1LL;
          v290[4] = 0LL;
          v290[2] = v249;
          v290[3] = 1LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v290) )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF5B0);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v189);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v190,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v223);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              (char *)&v224 + 8,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          v28 = v122;
        }
        if ( (*(_BYTE *)(v28 + 235) & 1) != 0 )
        {
          if ( !*(_QWORD *)(v8 + 56) )
            goto LABEL_338;
          v29 = *(_QWORD *)(v8 + 64);
          if ( v29 < 0 )
            goto LABEL_338;
          *(_QWORD *)&v127 = *(_QWORD *)(v8 + 56);
          *((_QWORD *)&v127 + 1) = v29;
          *(_QWORD *)&v128 = &v127;
          *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
          v129 = v231;
          v130 = 0LL;
          v123.m256i_i64[0] = 2LL;
          v123.m256i_i64[2] = 1LL;
          v123.m256i_i64[3] = 1LL;
          v124 = 0LL;
          v125 = 32LL;
          v126 = 0;
          v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v135 = 1LL;
          v136 = &v128;
          v137 = 2LL;
          v138 = &v123;
          v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&v132, &v134);
          v191 = v132;
          v192 = v133;
          v250[0] = &v191;
          v250[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v291[0] = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
          v291[1] = 1LL;
          v291[4] = 0LL;
          v291[2] = v250;
          v291[3] = 1LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v291) )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF5C8);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v191);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v192,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
        }
        if ( (*(_BYTE *)(v122 + 224) & 1) != 0 )
        {
          uu_ls::display_uname(v225, v21);
          if ( !(_QWORD)v226 || v226 < 0 )
            goto LABEL_338;
          v127 = v226;
          *(_QWORD *)&v128 = &v127;
          *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
          v129 = v229;
          v130 = 0LL;
          v123.m256i_i64[0] = 2LL;
          v123.m256i_i64[2] = 1LL;
          v123.m256i_i64[3] = 1LL;
          v124 = 0LL;
          v125 = 32LL;
          v126 = 0;
          v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v135 = 1LL;
          v136 = &v128;
          v137 = 2LL;
          v138 = &v123;
          v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&v132, &v134);
          v193 = v132;
          v194 = v133;
          v251[0] = &v193;
          v251[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v292[0] = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
          v292[1] = 1LL;
          v292[4] = 0LL;
          v292[2] = v251;
          v292[3] = 1LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v292) )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF5E0);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v193);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v194,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v225);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              (char *)&v226 + 8,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
        }
        uu_ls::display_len_or_rdev(v275, v21);
        if ( (_QWORD)v276 == 0x8000000000000000LL )
        {
          v195 = *(_OWORD *)v275;
          v196 = *(_QWORD *)&v275[16];
          if ( !*(_QWORD *)&v275[8] || *(__int64 *)&v275[16] < 0 )
            goto LABEL_338;
          v127 = *(_OWORD *)&v275[8];
          *(_QWORD *)&v128 = &v127;
          *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
          v129 = v232;
          v130 = 0LL;
          v123.m256i_i64[0] = 2LL;
          v123.m256i_i64[2] = 1LL;
          v123.m256i_i64[3] = 1LL;
          v124 = 0LL;
          v125 = 32LL;
          v126 = 1;
          v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v135 = 1LL;
          v136 = &v128;
          v137 = 2LL;
          v138 = &v123;
          v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&v132, &v134);
          v197 = v132;
          v198 = v133;
          v252[0] = &v197;
          v252[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v293[0] = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
          v293[1] = 1LL;
          v293[4] = 0LL;
          v293[2] = v252;
          v293[3] = 1LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v293) )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF5F8);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v197);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v198,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v195);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v196,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
        }
        else
        {
          v200 = *(_QWORD *)&v275[16];
          v199 = *(_OWORD *)v275;
          *(_OWORD *)v177 = v276;
          *(_QWORD *)&v177[16] = v277;
          if ( !*(_QWORD *)&v275[8] || *(__int64 *)&v275[16] < 0 )
            goto LABEL_338;
          v36 = v234;
          v37 = v234 + 2;
          if ( v234 >= 0xFFFFFFFFFFFFFFFELL )
            v37 = -1LL;
          v38 = v232 < v37;
          v39 = v232 - v37;
          v40 = 0LL;
          if ( !v38 )
            v40 = v39;
          if ( v233 > v40 )
            v40 = v233;
          v127 = *(_OWORD *)&v275[8];
          *(_QWORD *)&v128 = &v127;
          *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
          v129 = v40;
          v130 = 0LL;
          v123.m256i_i64[0] = 2LL;
          v123.m256i_i64[2] = 1LL;
          v123.m256i_i64[3] = 1LL;
          v124 = 0LL;
          v125 = 32LL;
          v126 = 1;
          v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v135 = 1LL;
          v136 = &v128;
          v137 = 2LL;
          v138 = &v123;
          v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&v132, &v134);
          v201 = v132;
          v202 = v133;
          if ( !*(_QWORD *)&v177[8] || *(__int64 *)&v177[16] < 0 )
            goto LABEL_338;
          v127 = *(_OWORD *)&v177[8];
          *(_QWORD *)&v128 = &v127;
          *((_QWORD *)&v128 + 1) = <&T as core::fmt::Display>::fmt;
          v129 = v36;
          v130 = 0LL;
          v123.m256i_i64[0] = 2LL;
          v123.m256i_i64[2] = 1LL;
          v123.m256i_i64[3] = 1LL;
          v124 = 0LL;
          v125 = 32LL;
          v126 = 1;
          v134 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
          v135 = 1LL;
          v136 = &v128;
          v137 = 2LL;
          v138 = &v123;
          v139 = (__int64 (__fastcall **)())(&dword_0 + 1);
          alloc::fmt::format::format_inner(&v132, &v134);
          v203 = v132;
          v204 = v133;
          v271[0] = &v201;
          v271[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v271[2] = &v203;
          v271[3] = <alloc::string::String as core::fmt::Display>::fmt;
          v294[0] = &off_1FF610;
          v294[1] = 2LL;
          v294[4] = 0LL;
          v294[2] = v271;
          v294[3] = 2LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v294) )
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF630);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v203);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v204,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v201);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v202,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v177);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v177[16],
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v199);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v200,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
        }
        system_time = uu_ls::get_system_time(v21, v122);
        if ( v42 == 1000000000
          || (<chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::convert::From<std::time::SystemTime>>::from(
                &v128,
                system_time),
              v43 = v128,
              v44 = *(_QWORD *)((char *)&v128 + 4),
              LOBYTE(v132) = 0,
              std::thread::local::LocalKey<T>::try_with(
                &v123,
                &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
                &v128,
                &v132),
              core::result::Result<T,E>::expect(
                &v134,
                &v123,
                anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
                70LL,
                &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679),
              v45 = chrono::offset::LocalResult<T>::unwrap(
                      &v134,
                      &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904),
              !v43) )
        {
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v123, 3LL, 0LL);
          v54 = v123.m256i_i64[1];
          if ( v123.m256i_i64[0] )
            alloc::raw_vec::handle_error(v123.m256i_i64[1], v123.m256i_i64[2]);
          v55 = v123.m256i_i64[2];
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_3ABD6, v123.m256i_i64[2], 1LL, 1LL, 3LL);
          *(_BYTE *)(v55 + 2) = 63;
          *(_WORD *)v55 = 16191;
          *(_QWORD *)&v158 = v54;
          *((_QWORD *)&v158 + 1) = v55;
          v159 = 3LL;
        }
        else
        {
          LODWORD(v127) = v43;
          *(_QWORD *)((char *)&v127 + 4) = v44;
          HIDWORD(v127) = v45;
          LODWORD(v132) = v43;
          *(_QWORD *)((char *)&v132 + 4) = v44;
          HIDWORD(v132) = v45;
          chrono::datetime::DateTime<Tz>::checked_add_signed(&v123, &v132, 15778476LL, 0LL);
          v46 = v123.m256i_i32[0];
          if ( !v123.m256i_i32[0] )
            core::option::expect_failed(
              anon_d13c0a923ac77d86b5cd3d5212361a5f_4_llvm_13257680528908953851,
              33LL,
              &anon_d13c0a923ac77d86b5cd3d5212361a5f_6_llvm_13257680528908953851);
          v47 = v123.m256i_u32[1];
          v142 = v123.m256i_u32[2];
          chrono::offset::utc::Utc::now(&v128);
          v48 = v128;
          v49 = DWORD1(v128);
          v153 = DWORD2(v128);
          v121 = 0;
          std::thread::local::LocalKey<T>::try_with(
            &v123,
            &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
            &v128,
            &v121);
          core::result::Result<T,E>::expect(
            &v134,
            &v123,
            anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
            70LL,
            &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
          chrono::offset::LocalResult<T>::unwrap(
            &v134,
            &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904);
          v50 = (v46 > v48) - (v46 < v48);
          if ( v46 > v48 == v46 < v48 )
          {
            v50 = (v47 > v49) - (v47 < v49);
            if ( v47 > v49 == v47 < v49 )
              v50 = (v142 > v153) - (v142 < v153);
          }
          v51 = *(_QWORD *)(v122 + 184) ^ 0x8000000000000000LL;
          if ( v51 >= 4 )
            v51 = 4LL;
          switch ( v51 )
          {
            case 0uLL:
              v52 = 23LL;
              v53 = aYMDHMSFZ;
              goto LABEL_205;
            case 1uLL:
              v52 = 14LL;
              v53 = aYMDHM;
              goto LABEL_205;
            case 2uLL:
              v78 = v50 == 1;
              v79 = v50 == 1;
              v53 = (const char *)&unk_3ABFE;
              v80 = (const char *)&unk_3AC07;
              goto LABEL_201;
            case 3uLL:
              v78 = v50 == 1;
              v79 = v50 == 1;
              v53 = (const char *)&unk_3AC12;
              v80 = (const char *)&unk_3AC1B;
LABEL_201:
              if ( v78 )
                v53 = v80;
              v52 = 2 * v79 + 9;
              goto LABEL_205;
            case 4uLL:
              v53 = *(const char **)(v122 + 192);
              if ( !v53 )
                goto LABEL_338;
              v52 = *(_QWORD *)(v122 + 200);
              if ( v52 < 0 )
                goto LABEL_338;
LABEL_205:
              chrono::datetime::DateTime<Tz>::format(&v123, &v127, v53, v52);
              *(_QWORD *)&v128 = 0LL;
              *((_QWORD *)&v128 + 1) = 1LL;
              v129 = 0LL;
              v140 = 32LL;
              v141 = 3;
              v134 = 0LL;
              v136 = 0LL;
              v138 = (__m256i *)&v128;
              v139 = &anon_d13c0a923ac77d86b5cd3d5212361a5f_7_llvm_13257680528908953851;
              if ( (unsigned __int8)<chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt(
                                      &v123,
                                      &v134) )
                core::result::unwrap_failed(
                  anon_d13c0a923ac77d86b5cd3d5212361a5f_9_llvm_13257680528908953851,
                  55LL,
                  &v121,
                  &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                  &anon_d13c0a923ac77d86b5cd3d5212361a5f_11_llvm_13257680528908953851);
              v158 = v128;
              v159 = v129;
              if ( v123.m256i_i64[0] != 0x8000000000000000LL )
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v123);
              break;
          }
        }
        v253[0] = &v158;
        v253[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v295[0] = &off_1FF648;
        v295[1] = 2LL;
        v295[4] = 0LL;
        v295[2] = v253;
        v295[3] = 1LL;
        if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v295) )
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF668);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v158);
        if ( v123.m256i_i64[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v159,
            v123.m256i_i64[0],
            v123.m256i_i64[1],
            v123.m256i_i64[2]);
        v237[0] = 0LL;
        v237[1] = 1LL;
        v237[2] = 0LL;
        if ( !v145 || v146 < 0 )
          goto LABEL_338;
        v56 = ansi_width::ansi_width();
        v58 = uu_ls::display_item_name(
                (unsigned int)v163,
                v8,
                v122,
                0,
                v57,
                (unsigned int)v237,
                v131,
                (__int64)v143,
                v56);
        if ( !v12 )
          break;
        v59 = s2;
        if ( !s2 )
          goto LABEL_338;
        v60 = v165;
        if ( v165 < 0 )
          goto LABEL_338;
        v123.m256i_i32[0] = 0;
        LOBYTE(v58) = 1;
        v142 = v58;
        v61 = (const void *)core::char::methods::encode_utf8_raw(39LL, &v123, 4LL);
        if ( v62 <= v60 && !bcmp(v61, v59, v62) )
        {
          v142 = 0;
          v64 = 1;
          goto LABEL_169;
        }
        v254[0] = v163;
        v254[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v123.m256i_i64[0] = (__int64)&anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
        v123.m256i_i64[1] = 1LL;
        v123.m256i_i64[2] = (__int64)v254;
        v123.m256i_i64[3] = 1LL;
        v124 = 0LL;
        v63 = alloc::fmt::format::format_inner(v307, &v123);
        LOBYTE(v63) = 1;
        v142 = v63;
        v64 = 0;
        v65 = v307;
LABEL_170:
        v179 = *((_QWORD *)v65 + 2);
        v178 = *(_OWORD *)v65;
        if ( (*(_BYTE *)(v122 + 238) & 1) != 0 )
        {
          v66 = v148[1];
          if ( !v66 )
            goto LABEL_338;
          if ( (v66 & 7) != 0 )
            goto LABEL_338;
          v67 = v148[2];
          if ( v67 >> 59 )
            goto LABEL_338;
          v68 = v146;
          if ( v67 )
          {
            v69 = *(_QWORD *)(16 * v67 + v66 - 8) + 1LL;
            if ( *(_QWORD *)(16 * v67 + v66 - 8) == -1LL )
              goto LABEL_328;
            v68 = v69 + v146;
            if ( __CFADD__(v69, v146) )
            {
              v119 = &anon_899730b44f50ab02bfd9ca63d23e76e8_29_llvm_11807341281290569930;
LABEL_327:
              v149 = v119;
LABEL_328:
              core::panicking::panic_const::panic_const_add_overflow(v149);
            }
          }
          v70 = v68 + v179;
          if ( __CFADD__(v68, v179) )
          {
            v119 = &anon_899730b44f50ab02bfd9ca63d23e76e8_30_llvm_11807341281290569930;
            goto LABEL_327;
          }
          v71 = v148[6];
          v38 = __CFADD__(v71, v68);
          v72 = v71 + v68;
          if ( v38 )
          {
            v119 = &anon_899730b44f50ab02bfd9ca63d23e76e8_53_llvm_11807341281290569930;
            goto LABEL_327;
          }
          v38 = __CFADD__(v71, v70);
          v73 = v71 + v70;
          if ( v38 )
          {
            v119 = &anon_899730b44f50ab02bfd9ca63d23e76e8_54_llvm_11807341281290569930;
            goto LABEL_327;
          }
          v74 = v148;
          if ( v67 == *v148 )
          {
            alloc::raw_vec::RawVec<T,A>::grow_one();
            v74 = v148;
            v66 = v148[1];
          }
          v75 = 16 * v67;
          *(_QWORD *)(v66 + v75) = v72;
          *(_QWORD *)(v66 + v75 + 8) = v73;
          v74[2] = v67 + 1;
          v74[6] = 0LL;
        }
        v272[0] = &v178;
        v272[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v272[2] = v160;
        v272[3] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v296[0] = "\x01";
        v296[1] = 2LL;
        v296[4] = 0LL;
        v296[2] = v272;
        v296[3] = 2LL;
        if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v144, v296) )
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v121, &unk_1FE5D8, &off_1FF680);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v178);
        if ( v123.m256i_i64[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v179,
            v123.m256i_i64[0],
            v123.m256i_i64[1],
            v123.m256i_i64[2]);
        if ( !v64 )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v163);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v165,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
        }
LABEL_190:
        v260[0] = &v144;
        v260[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v304[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
        v304[1] = 1LL;
        v304[4] = 0LL;
        v304[2] = v260;
        v304[3] = 1LL;
        v76 = std::io::Write::write_fmt(v131, v304);
        if ( v76 )
        {
          v123.m256i_i64[0] = 0x8000000000000000LL;
          v123.m256i_i64[3] = v76;
          v82 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          v15 = (__int64)v82;
          if ( !v82 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v83 = *(_OWORD *)v123.m256i_i8;
          v82[1] = *(_OWORD *)&v123.m256i_u64[2];
          *v82 = v83;
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v144);
          v84 = v123.m256i_i64[1];
          if ( v123.m256i_i64[1] )
          {
            v85 = v123.m256i_i64[0];
            v86 = v123.m256i_i64[2];
            v87 = &v146;
            goto LABEL_281;
          }
          return v15;
        }
        alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v144);
        v77 = v147;
        if ( v123.m256i_i64[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v146,
            v123.m256i_i64[0],
            v123.m256i_i64[1],
            v123.m256i_i64[2]);
        v8 += 304LL;
        v13 = (__int64)(v77 - 38);
        if ( v77 == (char **)&off_130 )
          return 0LL;
      }
      v64 = 1;
      v142 = 0;
LABEL_169:
      v65 = v163;
      goto LABEL_170;
    }
    return 0LL;
  }
  if ( (*(_BYTE *)(v122 + 235) & 1) != 0 )
  {
    v6 = 1LL;
    if ( a2 )
    {
      v147 = (char **)(&dword_0 + 1);
      if ( a1 )
      {
        v147 = (char **)(&dword_0 + 1);
        v81 = 0LL;
        do
        {
          if ( *(_QWORD *)(a1 + v81 + 64) > v6 )
            v6 = *(_QWORD *)(a1 + v81 + 64);
          v81 += 304LL;
        }
        while ( v9 != v81 );
      }
    }
    else
    {
      v147 = (char **)(&dword_0 + 1);
    }
  }
  else
  {
    v147 = 0LL;
  }
  uu_ls::calculate_padding_collection(v308, a1, a2, v122, v131);
  if ( *((_BYTE *)v143 + 29) == 2 )
  {
LABEL_222:
    v150 = 0LL;
    v151 = 8LL;
    v152 = 0LL;
    if ( a2 )
    {
      if ( a1 )
      {
        do
        {
          uu_ls::display_additional_leading_info((__int64)&v264, v8, v308, v122, v131);
          v15 = v265;
          if ( v264 == 0x8000000000000000LL )
          {
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v150);
            return v15;
          }
          v269[0] = v264;
          v269[1] = v265;
          v269[2] = v266;
          uu_ls::display_item_name(
            (unsigned int)&v267,
            v8,
            v122,
            (_DWORD)v147,
            v6,
            (unsigned int)v269,
            v131,
            (__int64)v143,
            0LL);
          v94 = v152;
          if ( v152 == v150 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v150);
          v8 += 304LL;
          v91 = v151;
          v92 = 3 * v94;
          v93 = v267;
          *(_QWORD *)(v151 + 8 * v92 + 16) = v268;
          *(_OWORD *)(v91 + 8 * v92) = v93;
          v88 = v94 + 1;
          v152 = v88;
          v9 -= 304LL;
        }
        while ( v9 );
      }
      else
      {
        v88 = 0LL;
      }
      v89 = v150;
      v90 = v151;
    }
    else
    {
      v90 = 8LL;
      v88 = 0LL;
      v89 = 0LL;
    }
    *(_QWORD *)&v154 = v90;
    *(_QWORD *)&v155 = v89;
    *((_QWORD *)&v154 + 1) = v90;
    *((_QWORD *)&v155 + 1) = v90 + 24 * v88;
    v96 = *(unsigned __int8 *)(v122 + 248);
    if ( v96 == 4 )
    {
      if ( v88 && (*((_QWORD *)&v154 + 1) = v90 + 24, *(_QWORD *)v90 != 0x8000000000000000LL) )
      {
        v166 = *(_QWORD *)v90;
        v167 = *(_OWORD *)(v90 + 8);
        v241[0] = &v166;
        v241[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v282[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
        v282[1] = 1LL;
        v282[4] = 0LL;
        v282[2] = v241;
        v282[3] = 1LL;
        v115 = std::io::Write::write_fmt(v131, v282);
        if ( v115 )
        {
          v15 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v115,
                  &off_1FF3F8);
          core::ptr::drop_in_place<alloc::string::String>(&v166);
          <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v154);
          return v15;
        }
        if ( !(_QWORD)v167 || v167 < 0 )
LABEL_338:
          core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
        v118 = ansi_width::ansi_width();
        v102 = v118 + 2;
        if ( v118 >= 0xFFFEu )
          core::panicking::panic_const::panic_const_add_overflow(&off_1FF3E0);
        core::ptr::drop_in_place<alloc::string::String>(&v166);
      }
      else
      {
        v102 = 0;
      }
      v172 = v154;
      v173 = v155;
      v103 = (__int64 *)*((_QWORD *)&v154 + 1);
      if ( *((_QWORD *)&v154 + 1) != *((_QWORD *)&v155 + 1) )
      {
        v143 = &off_1FF480;
        v147 = &off_1FF428;
        do
        {
          *((_QWORD *)&v172 + 1) = v103 + 3;
          if ( *v103 == 0x8000000000000000LL )
            break;
          v168 = *v103;
          v169 = *(_OWORD *)(v103 + 1);
          if ( !(_QWORD)v169 || v169 < 0 )
            goto LABEL_338;
          v104 = ansi_width::ansi_width();
          v105 = *(_WORD *)(v122 + 228);
          if ( !v105 )
            goto LABEL_264;
          if ( __CFADD__(v104, v102) || v104 + v102 == 0xFFFF )
            goto LABEL_346;
          if ( (unsigned __int16)(v104 + v102 + 1) > v105 )
          {
            v38 = __CFADD__(v104, 2);
            v106 = v104 + 2;
            if ( v38 )
            {
              v120 = &off_1FF498;
              goto LABEL_345;
            }
            v102 = v106;
            v242[0] = &v168;
            v242[1] = <alloc::string::String as core::fmt::Display>::fmt;
            v283[0] = &off_1FF4B0;
            v283[1] = 1LL;
            v283[4] = 0LL;
            v283[2] = v242;
            v283[3] = 1LL;
            v107 = std::io::Write::write_fmt(v131, v283);
            if ( v107 )
            {
              v143 = &off_1FF4C0;
LABEL_299:
              v15 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                      v107,
                      v143);
              core::ptr::drop_in_place<alloc::string::String>(&v168);
              <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v172);
              return v15;
            }
          }
          else
          {
LABEL_264:
            v38 = __CFADD__(v104, 2);
            v108 = v104 + 2;
            if ( v38 )
            {
              v120 = &off_1FF440;
LABEL_345:
              v147 = v120;
LABEL_346:
              core::panicking::panic_const::panic_const_add_overflow(v147);
            }
            v38 = __CFADD__(v108, v102);
            v102 += v108;
            if ( v38 )
            {
              v120 = &off_1FF458;
              goto LABEL_345;
            }
            v243[0] = &v168;
            v243[1] = <alloc::string::String as core::fmt::Display>::fmt;
            v284[0] = &off_1FF470;
            v284[1] = 1LL;
            v284[4] = 0LL;
            v284[2] = v243;
            v284[3] = 1LL;
            v107 = std::io::Write::write_fmt(v131, v284);
            if ( v107 )
              goto LABEL_299;
          }
          alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v168);
          if ( v123.m256i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              (char *)&v169 + 8,
              v123.m256i_i64[0],
              v123.m256i_i64[1],
              v123.m256i_i64[2]);
          v103 = (__int64 *)*((_QWORD *)&v172 + 1);
        }
        while ( *((_QWORD *)&v172 + 1) != *((_QWORD *)&v173 + 1) );
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v172);
      if ( !v102 )
        return 0LL;
      v244[0] = v122 + 250;
      v244[1] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
      v285[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
      v285[1] = 1LL;
      v285[4] = 0LL;
      v285[2] = v244;
      v285[3] = 1LL;
      v113 = std::io::Write::write_fmt(v131, v285);
      if ( !v113 )
        return 0LL;
      return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v113,
               &off_1FF410);
    }
    else if ( v96 == 3 )
    {
      v306[1] = v155;
      v306[0] = v154;
      v97 = uu_ls::display_grid(v306, *(unsigned int *)(v122 + 228), 0LL, v131, v12);
      if ( !v97 )
        return 0LL;
    }
    else
    {
      if ( *(_BYTE *)(v122 + 248) )
      {
        v174 = v154;
        v175 = v155;
        v109 = (__int64 *)*((_QWORD *)&v154 + 1);
        if ( *((_QWORD *)&v154 + 1) != *((_QWORD *)&v155 + 1) )
        {
          v122 += 250LL;
          do
          {
            *((_QWORD *)&v174 + 1) = v109 + 3;
            if ( *v109 == 0x8000000000000000LL )
              break;
            v180 = *v109;
            v181 = *(_OWORD *)(v109 + 1);
            v270[0] = &v180;
            v270[1] = <alloc::string::String as core::fmt::Display>::fmt;
            v270[2] = v122;
            v270[3] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
            v286[0] = "\x01";
            v286[1] = 2LL;
            v286[4] = 0LL;
            v286[2] = v270;
            v286[3] = 2LL;
            v110 = std::io::Write::write_fmt(v131, v286);
            if ( v110 )
            {
              v123.m256i_i64[0] = 0x8000000000000000LL;
              v123.m256i_i64[3] = v110;
              v116 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
              v15 = (__int64)v116;
              if ( !v116 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v117 = *(_OWORD *)v123.m256i_i8;
              v116[1] = *(_OWORD *)&v123.m256i_u64[2];
              *v116 = v117;
              alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v180);
              if ( v123.m256i_i64[1] )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                  (char *)&v181 + 8,
                  v123.m256i_i64[0],
                  v123.m256i_i64[1],
                  v123.m256i_i64[2]);
              <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v174);
              return v15;
            }
            alloc::raw_vec::RawVec<T,A>::current_memory(&v123, &v180);
            if ( v123.m256i_i64[1] )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                (char *)&v181 + 8,
                v123.m256i_i64[0],
                v123.m256i_i64[1],
                v123.m256i_i64[2]);
            v109 = (__int64 *)*((_QWORD *)&v174 + 1);
          }
          while ( *((_QWORD *)&v174 + 1) != *((_QWORD *)&v175 + 1) );
        }
        <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v174);
        return 0LL;
      }
      v305[1] = v155;
      v305[0] = v154;
      v97 = uu_ls::display_grid(v305, *(unsigned int *)(v122 + 228), 1LL, v131, v12);
      if ( !v97 )
        return 0LL;
    }
    return v97;
  }
  v95 = lscolors::LsColors::style_for_indicator(*v143, 0LL);
  if ( v95 && *(_BYTE *)v95 != 2 )
  {
    v123.m256i_i8[0] = *(_BYTE *)v95;
    v98 = *(_OWORD *)(v95 + 1);
    *(__int32 *)((char *)&v123.m256i_i32[4] + 1) = *(_DWORD *)(v95 + 17);
    *(_OWORD *)&v123.m256i_i8[1] = v98;
    uu_ls::colors::StyleManager::get_style_code(v156, v143, &v123);
  }
  else
  {
    v156[0] = 0LL;
    v156[1] = 1LL;
    v157 = 0LL;
  }
  v240[0] = v156;
  v240[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v281[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
  v281[1] = 1LL;
  v281[4] = 0LL;
  v281[2] = v240;
  v281[3] = 1LL;
  v99 = std::io::Write::write_fmt(v131, v281);
  if ( !v99 )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v156);
    if ( v123.m256i_i64[1] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &v157,
        v123.m256i_i64[0],
        v123.m256i_i64[1],
        v123.m256i_i64[2]);
    goto LABEL_222;
  }
  v123.m256i_i64[0] = 0x8000000000000000LL;
  v123.m256i_i64[3] = v99;
  v100 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v15 = (__int64)v100;
  if ( !v100 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v101 = *(_OWORD *)v123.m256i_i8;
  v100[1] = *(_OWORD *)&v123.m256i_u64[2];
  *v100 = v101;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v123, v156);
  v84 = v123.m256i_i64[1];
  if ( v123.m256i_i64[1] )
  {
    v85 = v123.m256i_i64[0];
    v86 = v123.m256i_i64[2];
    v87 = &v157;
LABEL_281:
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v87, v85, v84, v86);
  }
  return v15;
}
