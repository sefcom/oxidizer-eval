_QWORD *__fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int128 v10; // xmm0
  unsigned __int64 v11; // r15
  __int128 v12; // xmm0
  unsigned __int64 v13; // rbx
  __m256i *v14; // r13
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  __int128 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rbx
  __m256i *v22; // r14
  __int128 v23; // kr00_16
  __int64 v24; // rbp
  __int64 v25; // rbp
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int128 v33; // xmm3
  __int128 v34; // xmm4
  __int128 v35; // xmm5
  __int128 v36; // xmm6
  _QWORD *v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 i; // r15
  __int64 *v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // r13
  __int64 v44; // rbp
  __int64 v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rcx
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int64 v65; // r14
  __int64 v66; // rax
  __int128 v67; // xmm0
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int128 v72; // xmm0
  __int64 v73; // rdx
  __int64 v74; // rbp
  __int64 v75; // r13
  __int128 v76; // kr10_16
  __int64 v77; // rbx
  __int64 v78; // rax
  unsigned __int64 v79; // rbp
  __int64 v80; // rax
  __int64 v81; // rcx
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm2
  __int128 v85; // xmm3
  __int128 v86; // xmm4
  __int128 v87; // xmm5
  __int128 v88; // xmm6
  unsigned __int64 v89; // r13
  __int64 j; // rbx
  __int64 *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rcx
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int64 v97; // rcx
  __int64 v98; // rsi
  __int64 v99; // r12
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // r12
  __int64 v103; // rbx
  __int64 v104; // r14
  _QWORD *v105; // rdx
  __int128 v106; // kr20_16
  _QWORD *v107; // rax
  unsigned __int64 v108; // rdx
  _QWORD *v109; // rax
  _QWORD *v111; // rdx
  _QWORD *v112; // rdx
  _QWORD *v113; // rcx
  _QWORD *v114; // [rsp+8h] [rbp-E80h]
  __int128 v115; // [rsp+10h] [rbp-E78h] BYREF
  _QWORD *v116; // [rsp+20h] [rbp-E68h]
  __int128 v117; // [rsp+28h] [rbp-E60h] BYREF
  unsigned __int64 v118; // [rsp+38h] [rbp-E50h]
  __int128 v119; // [rsp+40h] [rbp-E48h] BYREF
  __int64 v120; // [rsp+50h] [rbp-E38h]
  __int128 v121; // [rsp+58h] [rbp-E30h] BYREF
  __int64 v122; // [rsp+68h] [rbp-E20h]
  __m256i v123; // [rsp+70h] [rbp-E18h] BYREF
  __int128 v124; // [rsp+90h] [rbp-DF8h]
  __int128 v125; // [rsp+A0h] [rbp-DE8h]
  __int128 v126; // [rsp+B0h] [rbp-DD8h]
  __int128 v127; // [rsp+C0h] [rbp-DC8h] BYREF
  __int64 v128; // [rsp+D0h] [rbp-DB8h] BYREF
  __int64 v129; // [rsp+D8h] [rbp-DB0h]
  __int64 v130; // [rsp+E0h] [rbp-DA8h]
  __int64 v131; // [rsp+E8h] [rbp-DA0h]
  __int64 v132; // [rsp+F0h] [rbp-D98h]
  __int64 v133; // [rsp+F8h] [rbp-D90h] BYREF
  __int64 v134; // [rsp+100h] [rbp-D88h]
  __int64 v135; // [rsp+108h] [rbp-D80h]
  _BYTE v136[80]; // [rsp+110h] [rbp-D78h] BYREF
  unsigned __int64 v137; // [rsp+168h] [rbp-D20h]
  char *v138; // [rsp+170h] [rbp-D18h] BYREF
  __int128 v139; // [rsp+178h] [rbp-D10h] BYREF
  __int128 v140; // [rsp+188h] [rbp-D00h] BYREF
  __int64 v141; // [rsp+198h] [rbp-CF0h]
  __int128 v142; // [rsp+1A0h] [rbp-CE8h] BYREF
  __m256i v143; // [rsp+1B0h] [rbp-CD8h] BYREF
  __int128 v144; // [rsp+1D0h] [rbp-CB8h]
  __int128 v145; // [rsp+1E0h] [rbp-CA8h]
  __int128 v146; // [rsp+1F0h] [rbp-C98h]
  __int128 v147; // [rsp+200h] [rbp-C88h]
  __int64 v148; // [rsp+210h] [rbp-C78h]
  __int64 v149; // [rsp+220h] [rbp-C68h]
  __int128 v150; // [rsp+228h] [rbp-C60h]
  __int128 v151; // [rsp+238h] [rbp-C50h]
  __int64 v152; // [rsp+248h] [rbp-C40h]
  _BYTE v153[200]; // [rsp+250h] [rbp-C38h] BYREF
  unsigned __int64 v154; // [rsp+318h] [rbp-B70h]
  unsigned __int64 v155; // [rsp+320h] [rbp-B68h]
  unsigned __int64 v156; // [rsp+328h] [rbp-B60h]
  __int128 v157; // [rsp+330h] [rbp-B58h] BYREF
  __int128 v158; // [rsp+340h] [rbp-B48h]
  _BYTE v159[64]; // [rsp+350h] [rbp-B38h] BYREF
  __int128 v160; // [rsp+390h] [rbp-AF8h]
  __int64 v161; // [rsp+3A0h] [rbp-AE8h]
  __int128 v162; // [rsp+3A8h] [rbp-AE0h] BYREF
  __int128 v163; // [rsp+3B8h] [rbp-AD0h]
  _BYTE v164[64]; // [rsp+3C8h] [rbp-AC0h] BYREF
  __int128 v165; // [rsp+408h] [rbp-A80h]
  __int64 v166; // [rsp+418h] [rbp-A70h]
  __m256i v167; // [rsp+420h] [rbp-A68h]
  _BYTE v168[128]; // [rsp+440h] [rbp-A48h] BYREF
  __int128 v169; // [rsp+4C0h] [rbp-9C8h]
  __int128 v170; // [rsp+4D0h] [rbp-9B8h]
  _BYTE v171[24]; // [rsp+4E0h] [rbp-9A8h] BYREF
  __int128 v172; // [rsp+4F8h] [rbp-990h]
  __int128 v173; // [rsp+508h] [rbp-980h]
  __int128 v174; // [rsp+518h] [rbp-970h]
  __int64 v175; // [rsp+528h] [rbp-960h]
  __int64 v176; // [rsp+530h] [rbp-958h] BYREF
  __int64 v177; // [rsp+538h] [rbp-950h]
  __int128 v178; // [rsp+540h] [rbp-948h]
  _BYTE v179[48]; // [rsp+550h] [rbp-938h] BYREF
  __int128 v180; // [rsp+580h] [rbp-908h]
  __int128 v181; // [rsp+590h] [rbp-8F8h]
  __int128 v182; // [rsp+5A0h] [rbp-8E8h]
  __int128 v183; // [rsp+5B0h] [rbp-8D8h]
  __int128 v184; // [rsp+5C0h] [rbp-8C8h]
  __int128 v185; // [rsp+5D0h] [rbp-8B8h]
  __m256i v186; // [rsp+5E0h] [rbp-8A8h]
  __int128 v187; // [rsp+600h] [rbp-888h] BYREF
  __int128 v188; // [rsp+610h] [rbp-878h]
  __int128 v189; // [rsp+620h] [rbp-868h]
  __int128 v190; // [rsp+630h] [rbp-858h]
  __int128 v191; // [rsp+640h] [rbp-848h]
  __int128 v192; // [rsp+650h] [rbp-838h]
  __int128 v193; // [rsp+660h] [rbp-828h]
  __int128 v194; // [rsp+670h] [rbp-818h]
  __int128 v195; // [rsp+680h] [rbp-808h]
  __int128 v196; // [rsp+690h] [rbp-7F8h]
  __int128 v197; // [rsp+6A0h] [rbp-7E8h]
  __int128 v198; // [rsp+6B0h] [rbp-7D8h]
  __int128 v199; // [rsp+6C0h] [rbp-7C8h]
  __int128 v200; // [rsp+6D0h] [rbp-7B8h] BYREF
  __int128 v201; // [rsp+6E0h] [rbp-7A8h]
  __int128 v202; // [rsp+6F0h] [rbp-798h]
  __int128 v203; // [rsp+700h] [rbp-788h]
  __int128 v204; // [rsp+710h] [rbp-778h]
  __int128 v205; // [rsp+720h] [rbp-768h]
  __int128 v206; // [rsp+730h] [rbp-758h]
  __int128 v207; // [rsp+740h] [rbp-748h]
  __int128 v208; // [rsp+750h] [rbp-738h]
  __int64 v209; // [rsp+760h] [rbp-728h]
  _BYTE v210[24]; // [rsp+768h] [rbp-720h]
  __m256i v211; // [rsp+780h] [rbp-708h]
  __int128 v212; // [rsp+7A0h] [rbp-6E8h]
  __int128 v213; // [rsp+7B0h] [rbp-6D8h]
  __int128 v214; // [rsp+7C0h] [rbp-6C8h]
  __int128 v215; // [rsp+7D0h] [rbp-6B8h]
  __int128 v216; // [rsp+7E0h] [rbp-6A8h] BYREF
  __m256i v217; // [rsp+7F0h] [rbp-698h]
  __m256i v218; // [rsp+810h] [rbp-678h]
  __int128 v219; // [rsp+830h] [rbp-658h]
  __int128 v220; // [rsp+840h] [rbp-648h] BYREF
  _BYTE v221[96]; // [rsp+850h] [rbp-638h] BYREF
  _QWORD v222[2]; // [rsp+8B0h] [rbp-5D8h] BYREF
  __int128 v223; // [rsp+8C0h] [rbp-5C8h]
  _BYTE v224[120]; // [rsp+8D0h] [rbp-5B8h] BYREF
  __int64 v225; // [rsp+948h] [rbp-540h]
  _BYTE v226[80]; // [rsp+958h] [rbp-530h] BYREF
  __int128 v227; // [rsp+9A8h] [rbp-4E0h]
  __int128 v228; // [rsp+9B8h] [rbp-4D0h]
  __int64 v229; // [rsp+9C8h] [rbp-4C0h]
  __int128 v230[2]; // [rsp+9D0h] [rbp-4B8h] BYREF
  __int64 v231; // [rsp+9F0h] [rbp-498h]
  void *v232; // [rsp+9F8h] [rbp-490h]
  __int128 v233; // [rsp+A00h] [rbp-488h] BYREF
  __m256i v234; // [rsp+A10h] [rbp-478h]
  __int128 v235; // [rsp+A30h] [rbp-458h]
  __int128 v236; // [rsp+A40h] [rbp-448h]
  __m256i v237; // [rsp+A50h] [rbp-438h] BYREF
  __int128 v238; // [rsp+A70h] [rbp-418h]
  __int128 v239; // [rsp+A80h] [rbp-408h]
  __int128 v240; // [rsp+A90h] [rbp-3F8h]
  __int128 v241; // [rsp+AA0h] [rbp-3E8h]
  __int128 v242; // [rsp+AB0h] [rbp-3D8h] BYREF
  __m256i v243; // [rsp+AC0h] [rbp-3C8h]
  __m256i v244; // [rsp+AE0h] [rbp-3A8h]
  __int128 v245; // [rsp+B00h] [rbp-388h]
  _OWORD v246[7]; // [rsp+B10h] [rbp-378h] BYREF
  __int64 v247; // [rsp+B80h] [rbp-308h] BYREF
  __int128 v248; // [rsp+B88h] [rbp-300h]
  __int128 v249; // [rsp+B98h] [rbp-2F0h]
  __int128 v250; // [rsp+BA8h] [rbp-2E0h]
  __int128 v251; // [rsp+BB8h] [rbp-2D0h]
  __int128 v252; // [rsp+BC8h] [rbp-2C0h]
  __int128 v253; // [rsp+BD8h] [rbp-2B0h]
  __int128 v254; // [rsp+BE8h] [rbp-2A0h]
  __int64 v255; // [rsp+BF8h] [rbp-290h]
  __int128 v256; // [rsp+C00h] [rbp-288h] BYREF
  __int64 v257; // [rsp+C10h] [rbp-278h]
  __int128 v258; // [rsp+C18h] [rbp-270h]
  __int128 v259; // [rsp+C28h] [rbp-260h]
  __int128 v260; // [rsp+C38h] [rbp-250h]
  __int128 v261; // [rsp+C48h] [rbp-240h]
  __int128 v262; // [rsp+C58h] [rbp-230h]
  __int64 v263; // [rsp+C68h] [rbp-220h]
  _QWORD src[20]; // [rsp+C70h] [rbp-218h] BYREF
  _QWORD v265[12]; // [rsp+D10h] [rbp-178h] BYREF
  char v266[8]; // [rsp+D70h] [rbp-118h] BYREF
  char v267[272]; // [rsp+D78h] [rbp-110h] BYREF

  v116 = a1;
  v4 = *((_QWORD *)a2 + 3);
  v5 = v4 < *((_QWORD *)a2 + 1);
  v6 = v4 - *((_QWORD *)a2 + 1);
  if ( v5 )
    goto LABEL_161;
  v8 = v6 / 0x30;
  v9 = a3[14];
  v114 = a3;
  if ( v8 > v9 )
  {
    v149 = a4;
    v10 = *a2;
    v236 = a2[1];
    v235 = v10;
    if ( !v9 )
      core::panicking::panic(
        anon_ff3add0fc2121d489142e144a6a370f6_41_llvm_5182399808099546885,
        27LL,
        &anon_ff3add0fc2121d489142e144a6a370f6_43_llvm_5182399808099546885);
    v11 = v8;
    v12 = *a2;
    *(_OWORD *)&v153[16] = a2[1];
    *(_OWORD *)v153 = v12;
    itertools::groupbylazy::new_chunks(v266, v153);
    v138 = v266;
    v133 = 0LL;
    v134 = 8LL;
    v135 = 0LL;
    v13 = 0x8000000000000002LL;
    v14 = &v123;
    v15 = v11;
    v154 = 0x8000000000000002LL;
    while ( 1 )
    {
      v137 = v11;
      v155 = v114[14];
      v16 = v15 - v155;
      if ( v15 < v155 )
        v16 = 0LL;
      v156 = v16;
      <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(
        &v237,
        &v138,
        <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next,
        0LL);
      if ( v237.m256i_i64[0] == v13 )
        core::option::unwrap_failed(&off_1D4C20);
      v215 = v241;
      v214 = v240;
      v213 = v239;
      v212 = v238;
      v211 = v237;
      std::sync::mpmc::channel(&v123);
      v127 = *(_OWORD *)v123.m256i_i8;
      v142 = *(_OWORD *)&v123.m256i_u64[2];
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v123, 0LL, 0LL);
      if ( v123.m256i_i64[0] )
        alloc::raw_vec::handle_error(v123.m256i_i64[1], v123.m256i_i64[2]);
      v121 = *(_OWORD *)&v123.m256i_u64[1];
      v122 = 0LL;
      v17 = 0LL;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v123, 0LL, 0LL);
      if ( v123.m256i_i64[0] )
        alloc::raw_vec::handle_error(v123.m256i_i64[1], v123.m256i_i64[2]);
      v119 = *(_OWORD *)&v123.m256i_u64[1];
      v120 = 0LL;
      v143 = v211;
      v144 = v212;
      v145 = v213;
      v146 = v214;
      v147 = v215;
      v148 = 0LL;
      while ( 1 )
      {
        v123 = v143;
        v126 = v146;
        v125 = v145;
        v124 = v144;
        v143.m256i_i64[0] = 0x8000000000000001LL;
        if ( v123.m256i_i64[0] == 0x8000000000000001LL )
        {
          core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(v14);
          v17 = (__int128 *)v147;
          itertools::groupbylazy::IntoChunks<I>::step(v136, v147, *((_QWORD *)&v147 + 1));
        }
        else
        {
          *(_OWORD *)&v136[64] = v126;
          *(_OWORD *)&v136[48] = v125;
          *(_OWORD *)&v136[32] = v124;
          *(__m256i *)v136 = v123;
        }
        v20 = *(_QWORD *)v136;
        if ( *(_QWORD *)v136 == 0x8000000000000001LL )
          break;
        v199 = *(_OWORD *)&v136[64];
        v198 = *(_OWORD *)&v136[48];
        v197 = *(_OWORD *)&v136[32];
        v196 = *(_OWORD *)&v136[16];
        v195 = *(_OWORD *)v136;
        v21 = v148;
        if ( v148 == -1 )
          core::panicking::panic_const::panic_const_add_overflow(
            &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
            v17,
            v18,
            v19);
        ++v148;
        v175 = *(_QWORD *)&v136[72];
        v174 = *(_OWORD *)&v136[56];
        v173 = *(_OWORD *)&v136[40];
        v172 = *(_OWORD *)&v136[24];
        *(_OWORD *)&v171[8] = *(_OWORD *)&v136[8];
        *(_QWORD *)v171 = *(_QWORD *)v136;
        v22 = v14;
        std::sync::mpmc::sync_channel(v14, 2LL);
        v23 = *(_OWORD *)&v123.m256i_u64[2];
        v139 = *(_OWORD *)v123.m256i_i8;
        *(_OWORD *)v123.m256i_i8 = *(_OWORD *)&v123.m256i_u64[2];
        v24 = v120;
        if ( v120 == (_QWORD)v119 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v119);
        *(_OWORD *)(*((_QWORD *)&v119 + 1) + 16 * v24) = v23;
        v120 = v24 + 1;
        v25 = *(_QWORD *)&v171[8];
        v26 = *(_QWORD *)&v171[16];
        if ( v20 == 0x8000000000000000LL )
        {
          if ( (_QWORD)v139 )
          {
            if ( (_QWORD)v139 == 1LL )
              std::sync::mpmc::counter::Sender<C>::release((char *)&v139 + 8);
            else
              std::sync::mpmc::counter::Sender<C>::release((char *)&v139 + 8);
          }
          else
          {
            std::sync::mpmc::counter::Sender<C>::release((char *)&v139 + 8);
          }
          v107 = (_QWORD *)v147;
          if ( *(_QWORD *)v147 )
            core::cell::panic_already_borrowed(&anon_106514630be1c9ef1de9e84b8238e531_28_llvm_16179947721019886102);
          v108 = *(_QWORD *)(v147 + 208);
          if ( v108 == -1LL || v108 < *((_QWORD *)&v147 + 1) )
            *(_QWORD *)(v147 + 208) = *((_QWORD *)&v147 + 1);
          *v107 = 0LL;
          core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v143);
          core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v119);
          core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::CompressedTmpMergeInput>>>>(&v121);
          if ( (_QWORD)v142 )
          {
            if ( (_QWORD)v142 == 1LL )
              std::sync::mpmc::counter::Receiver<C>::release((char *)&v142 + 8);
            else
              std::sync::mpmc::counter::Receiver<C>::release((char *)&v142 + 8);
          }
          else
          {
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v142 + 8);
          }
          if ( (_QWORD)v127 )
          {
            if ( (_QWORD)v127 == 1LL )
              std::sync::mpmc::counter::Sender<C>::release((char *)&v127 + 8);
            else
              std::sync::mpmc::counter::Sender<C>::release((char *)&v127 + 8);
          }
          else
          {
            std::sync::mpmc::counter::Sender<C>::release((char *)&v127 + 8);
          }
          goto LABEL_133;
        }
        *(_QWORD *)&v159[56] = v175;
        *(_OWORD *)&v159[40] = v174;
        *(_OWORD *)&v159[24] = v173;
        *(_OWORD *)&v159[8] = v172;
        v157 = v139;
        *(_QWORD *)&v158 = v20;
        *((_QWORD *)&v158 + 1) = *(_QWORD *)&v171[8];
        *(_QWORD *)v159 = *(_QWORD *)&v171[16];
        *(_QWORD *)&v160 = 0LL;
        *((_QWORD *)&v160 + 1) = 1LL;
        v161 = 0LL;
        v27 = v122;
        if ( v122 == (_QWORD)v121 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v121, 2LL, &v159[8], &v171[8]);
        v28 = *((_QWORD *)&v121 + 1);
        v29 = 120 * v27;
        v30 = v157;
        v31 = v158;
        v32 = *(_OWORD *)v159;
        v33 = *(_OWORD *)&v159[16];
        v34 = *(_OWORD *)&v159[32];
        v35 = *(_OWORD *)&v159[48];
        v36 = v160;
        *(_QWORD *)(*((_QWORD *)&v121 + 1) + v29 + 112) = v161;
        *(_OWORD *)(v28 + v29 + 96) = v36;
        *(_OWORD *)(v28 + v29 + 80) = v35;
        *(_OWORD *)(v28 + v29 + 64) = v34;
        *(_OWORD *)(v28 + v29 + 48) = v33;
        *(_OWORD *)(v28 + v29 + 32) = v32;
        *(_OWORD *)(v28 + v29 + 16) = v31;
        *(_OWORD *)(v28 + v29) = v30;
        v122 = v27 + 1;
        uu_sort::chunks::RecycledChunk::new(v226, 0x2000LL);
        v14 = v22;
        *(_QWORD *)v224 = v21;
        v225 = v229;
        *(_OWORD *)&v224[104] = v228;
        *(_OWORD *)&v224[88] = v227;
        *(_OWORD *)&v224[72] = *(_OWORD *)&v226[64];
        *(_OWORD *)&v224[56] = *(_OWORD *)&v226[48];
        *(_OWORD *)&v224[40] = *(_OWORD *)&v226[32];
        *(_OWORD *)&v224[24] = *(_OWORD *)&v226[16];
        *(_OWORD *)&v224[8] = *(_OWORD *)v226;
        v17 = &v127;
        std::sync::mpmc::Sender<T>::send(&v200, &v127, v224);
        if ( *((_QWORD *)&v200 + 1) != 0x8000000000000000LL )
        {
          v184 = v207;
          v183 = v206;
          v182 = v205;
          v181 = v204;
          v180 = v203;
          *(_OWORD *)&v179[32] = v202;
          *(_OWORD *)&v179[16] = v201;
          *(_OWORD *)v179 = v200;
          core::result::unwrap_failed(aCalledResultUn_6, 43LL, v179, &off_1D4AD8, &off_1D4D18);
        }
      }
      v37 = (_QWORD *)v147;
      if ( *(_QWORD *)v147 )
        core::cell::panic_already_borrowed(&anon_106514630be1c9ef1de9e84b8238e531_28_llvm_16179947721019886102);
      v38 = *(_QWORD *)(v147 + 208);
      if ( v38 == -1LL || v38 < *((_QWORD *)&v147 + 1) )
        *(_QWORD *)(v147 + 208) = *((_QWORD *)&v147 + 1);
      *v37 = 0LL;
      core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v143);
      v39 = v122;
      for ( i = 0LL; v39 != i; ++i )
      {
        uu_sort::chunks::RecycledChunk::new(&v162, 0x2000LL);
        v247 = i;
        v255 = v166;
        v254 = v165;
        v253 = *(_OWORD *)&v164[48];
        v252 = *(_OWORD *)&v164[32];
        v251 = *(_OWORD *)&v164[16];
        v250 = *(_OWORD *)v164;
        v249 = v163;
        v248 = v162;
        std::sync::mpmc::Sender<T>::send(&v187, &v127, &v247);
        if ( *((_QWORD *)&v187 + 1) != 0x8000000000000000LL )
        {
          *(_OWORD *)&v168[112] = v194;
          *(_OWORD *)&v168[96] = v193;
          *(_OWORD *)&v168[80] = v192;
          *(_OWORD *)&v168[64] = v191;
          *(_OWORD *)&v168[48] = v190;
          *(_OWORD *)&v168[32] = v189;
          *(_OWORD *)&v168[16] = v188;
          *(_OWORD *)v168 = v187;
          core::result::unwrap_failed(aCalledResultUn_6, 43LL, v168, &off_1D4AD8, &off_1D4D00);
        }
      }
      <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v114);
      *(_OWORD *)v153 = v142;
      *(_QWORD *)&v153[32] = v122;
      *(_OWORD *)&v153[16] = v121;
      memcpy(&v153[40], src, 0xA0uLL);
      v123.m256i_i64[2] = 0x8000000000000000LL;
      v123.m256i_i64[0] = 0LL;
      std::thread::Builder::spawn_unchecked_(v136, v14, v153, 0LL);
      if ( !*(_QWORD *)v136 )
      {
        *(_QWORD *)v136 = *(_QWORD *)&v136[8];
        core::result::unwrap_failed(
          "failed to spawn threadmain",
          22LL,
          v136,
          &anon_fe38f741e54badf7015918e7aa68e0c9_11_llvm_9495795450009312203,
          &anon_e73ee028dc74ef313b0965e1e543fc57_5_llvm_12031147188011335587);
      }
      v140 = *(_OWORD *)v136;
      v141 = *(_QWORD *)&v136[16];
      *(_QWORD *)&v117 = 0LL;
      *((_QWORD *)&v117 + 1) = 8LL;
      v118 = 0LL;
      v41 = (__int64 *)*((_QWORD *)&v119 + 1);
      v42 = v120;
      v128 = *((_QWORD *)&v119 + 1);
      v129 = *((_QWORD *)&v119 + 1);
      v130 = v119;
      v131 = *((_QWORD *)&v119 + 1) + 16 * v120;
      v132 = 0LL;
      if ( v120 )
      {
        do
        {
          v129 = (__int64)(v41 + 2);
          v50 = *v41;
          if ( *v41 == 3 )
            break;
          v51 = v41[1];
          v123.m256i_i64[0] = *v41;
          v123.m256i_i64[1] = v51;
          v52 = v132;
          if ( v132 == -1 )
            core::panicking::panic_const::panic_const_add_overflow(
              &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
              v51,
              v42,
              v50);
          ++v132;
          *(_QWORD *)&v115 = v50;
          *((_QWORD *)&v115 + 1) = v51;
          if ( v50 )
          {
            if ( v50 == 1 )
              std::sync::mpmc::list::Channel<T>::recv(v14, v51, v42, 1000000000LL);
            else
              std::sync::mpmc::zero::Channel<T>::recv(v14, v51, v42, 1000000000LL);
          }
          else
          {
            std::sync::mpmc::array::Channel<T>::recv(v14, v51, v42, 1000000000LL);
          }
          if ( (v123.m256i_i8[0] & 1) != 0 || (v53 = v123.m256i_i64[1]) == 0 )
          {
            if ( (_QWORD)v115 )
            {
              if ( (_QWORD)v115 == 1LL )
                std::sync::mpmc::counter::Receiver<C>::release((char *)&v115 + 8);
              else
                std::sync::mpmc::counter::Receiver<C>::release((char *)&v115 + 8);
            }
            else
            {
              std::sync::mpmc::counter::Receiver<C>::release((char *)&v115 + 8);
            }
          }
          else
          {
            v123.m256i_i64[0] = 1LL;
            v123.m256i_i64[1] = 1LL;
            v123.m256i_i64[2] = v53;
            v54 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
            if ( !v54 )
              alloc::alloc::handle_alloc_error(8LL, 24LL);
            *(_QWORD *)(v54 + 16) = v123.m256i_i64[2];
            *(_OWORD *)v54 = *(_OWORD *)v123.m256i_i8;
            v151 = (unsigned __int64)v54;
            v150 = v115;
            v152 = v52;
            v55 = v118;
            if ( v118 == (_QWORD)v117 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v117);
            v46 = *((_QWORD *)&v117 + 1);
            v47 = 5 * v55;
            v48 = v150;
            v49 = v151;
            v42 = v152;
            *(_QWORD *)(*((_QWORD *)&v117 + 1) + 8 * v47 + 32) = v152;
            *(_OWORD *)(v46 + 8 * v47 + 16) = v49;
            *(_OWORD *)(v46 + 8 * v47) = v48;
            v118 = v55 + 1;
          }
          v41 = (__int64 *)v129;
        }
        while ( v129 != v131 );
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v128);
      v43 = v118;
      v123.m256i_i64[2] = v118;
      *(_OWORD *)v123.m256i_i8 = v117;
      v123.m256i_i64[3] = (__int64)v114;
      if ( v118 >= 2 )
      {
        v44 = (v118 >> 1) - 1;
        do
        {
          binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(&v123, v44, v43);
          v5 = v44-- != 0;
        }
        while ( v5 );
      }
      v26 = v123.m256i_i64[0];
      v208 = *(_OWORD *)&v123.m256i_u64[1];
      v209 = v123.m256i_i64[3];
      v25 = *((_QWORD *)&v127 + 1);
      *(_QWORD *)&v210[16] = v141;
      *(_OWORD *)v210 = v140;
      if ( (_QWORD)v127 == 3LL )
        break;
      *(_OWORD *)&v218.m256i_u64[1] = *(_OWORD *)&v210[8];
      v217.m256i_i64[3] = v209;
      v218.m256i_i64[0] = *(_QWORD *)v210;
      *(_OWORD *)&v217.m256i_u64[1] = v208;
      v216 = v127;
      v217.m256i_i64[0] = v123.m256i_i64[0];
      v218.m256i_i64[3] = 0LL;
      uu_sort::tmp_dir::TmpDirWrapper::next_file(&v176, v149);
      if ( v177 == 0x8000000000000000LL )
      {
        v57 = *((_QWORD *)&v178 + 1);
        v56 = v178;
LABEL_153:
        v112 = v116;
        v116[1] = v56;
        v112[2] = v57;
        *v112 = 3LL;
        core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v216);
LABEL_134:
        core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(&v133);
        goto LABEL_135;
      }
      v222[0] = v176;
      v222[1] = v177;
      v223 = v178;
      if ( v114[6] == 0x8000000000000000LL )
      {
        v45 = 0LL;
      }
      else
      {
        v45 = v114[7];
        v26 = v114[8];
        core::slice::raw::from_raw_parts::precondition_check(v45, 1LL, 1LL, v26);
      }
      <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v256, v222, v45, v26);
      v56 = *((_QWORD *)&v256 + 1);
      v57 = v257;
      if ( (_QWORD)v256 == 0x8000000000000000LL )
        goto LABEL_153;
      *(_QWORD *)&v221[88] = v263;
      *(_OWORD *)&v221[72] = v262;
      *(_OWORD *)&v221[56] = v261;
      *(_OWORD *)&v221[40] = v260;
      *(_OWORD *)&v221[24] = v259;
      *(_OWORD *)&v221[8] = v258;
      v220 = v256;
      *(_QWORD *)v221 = v257;
      v242 = v216;
      v243 = v217;
      v244 = v218;
      v245 = v219;
      v58 = uu_sort::merge::FileMerger::write_all_to(&v242, v114, &v221[32]);
      if ( v58 )
      {
        v113 = v116;
        v116[1] = v58;
        v113[2] = v59;
        *v113 = 3LL;
        core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&v220);
        goto LABEL_134;
      }
      v246[6] = *(_OWORD *)&v221[80];
      v246[5] = *(_OWORD *)&v221[64];
      v246[4] = *(_OWORD *)&v221[48];
      v246[3] = *(_OWORD *)&v221[32];
      v246[2] = *(_OWORD *)&v221[16];
      v246[1] = *(_OWORD *)v221;
      v246[0] = v220;
      <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v233, v246);
      v25 = *((_QWORD *)&v233 + 1);
      v26 = v234.m256i_i64[0];
      if ( (_QWORD)v233 == 0x8000000000000000LL )
        break;
      v186 = v234;
      v185 = v233;
      v60 = v135;
      if ( v135 == v133 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v133);
      v61 = v134;
      v62 = 48 * v60;
      v63 = v185;
      v64 = *(_OWORD *)v186.m256i_i8;
      *(_OWORD *)(v134 + v62 + 32) = *(_OWORD *)&v186.m256i_u64[2];
      *(_OWORD *)(v61 + v62 + 16) = v64;
      *(_OWORD *)(v61 + v62) = v63;
      v135 = v60 + 1;
      v15 = v156;
      v11 = v156;
      v13 = v154;
      v14 = &v123;
      if ( v137 <= v155 )
      {
        <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(
          v265,
          &v138,
          <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next,
          0LL);
        v65 = v149;
        if ( v265[0] != v13 )
        {
          core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>>(v265);
          core::panicking::panic(aAssertionFaile_25, 42LL, &off_1D4BE0);
        }
        *(_QWORD *)&v169 = v134;
        *(_QWORD *)&v170 = v133;
        *((_QWORD *)&v169 + 1) = v134;
        *((_QWORD *)&v170 + 1) = v134 + 48 * v135;
        v66 = alloc::alloc::Global::alloc_impl(1LL, 1LL, 0LL, 0LL);
        if ( !v66 )
          alloc::alloc::handle_alloc_error(1LL, 0LL);
        v230[1] = v170;
        v230[0] = v169;
        v231 = v66;
        v232 = &unk_1D4CB0;
        uu_sort::merge::merge_with_file_limit(v116, v230, v114, v65);
LABEL_135:
        core::ptr::drop_in_place<itertools::groupbylazy::GroupInner<usize,core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>,itertools::groupbylazy::ChunkIndex>>(v267);
        return v116;
      }
    }
LABEL_133:
    v109 = v116;
    v116[1] = v25;
    v109[2] = v26;
    *v109 = 3LL;
    goto LABEL_134;
  }
  v67 = *a2;
  *(_OWORD *)&v167.m256i_u64[2] = a2[1];
  *(_OWORD *)v167.m256i_i8 = v67;
  std::sync::mpmc::channel(v153);
  v115 = *(_OWORD *)v153;
  v121 = *(_OWORD *)&v153[16];
  v68 = v167.m256i_i64[3] - v167.m256i_i64[1];
  if ( v167.m256i_i64[3] < (unsigned __int64)v167.m256i_i64[1] )
LABEL_161:
    core::panicking::panic_nounwind(anon_ff3add0fc2121d489142e144a6a370f6_24_llvm_5182399808099546885, 71LL);
  v69 = v68 / 0x30;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v153, v68 / 0x30, 0LL);
  if ( *(_QWORD *)v153 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v153[8], *(_QWORD *)&v153[16]);
  v117 = *(_OWORD *)&v153[8];
  v118 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v153, v69, 0LL);
  if ( *(_QWORD *)v153 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v153[8], *(_QWORD *)&v153[16]);
  v128 = *(_QWORD *)&v153[8];
  v129 = *(_QWORD *)&v153[16];
  v130 = 0LL;
  v123 = v167;
  *(_QWORD *)&v124 = 0LL;
  v137 = 0x8000000000000001LL;
  while ( 1 )
  {
    v70 = v123.m256i_i64[1];
    if ( v123.m256i_i64[1] == v123.m256i_i64[3] )
      break;
    v123.m256i_i64[1] += 48LL;
    v71 = *(_QWORD *)v70;
    if ( *(_QWORD *)v70 == 0x8000000000000000LL )
      break;
    *(_QWORD *)&v224[32] = *(_QWORD *)(v70 + 40);
    v72 = *(_OWORD *)(v70 + 8);
    *(_OWORD *)&v224[16] = *(_OWORD *)(v70 + 24);
    *(_OWORD *)v224 = v72;
    *(_QWORD *)v179 = v71;
    *(_QWORD *)&v179[40] = *(_QWORD *)&v224[32];
    *(_OWORD *)&v179[24] = *(_OWORD *)&v224[16];
    *(_OWORD *)&v179[8] = v72;
    <uu_sort::merge::ClosedCompressedTmpFile as uu_sort::merge::ClosedTmpFile>::reopen(v153, v179);
    v74 = *(_QWORD *)v153;
    *(_OWORD *)v168 = *(_OWORD *)&v153[8];
    *(_OWORD *)&v168[16] = *(_OWORD *)&v153[24];
    *(_OWORD *)&v168[32] = *(_OWORD *)&v153[40];
    *(_OWORD *)&v168[48] = *(_OWORD *)&v153[56];
    *(_QWORD *)&v168[64] = *(_QWORD *)&v153[72];
    if ( *(_QWORD *)v153 == v137 )
      break;
    src[9] = *(_QWORD *)&v168[64];
    *(_OWORD *)&src[7] = *(_OWORD *)&v168[48];
    *(_OWORD *)&src[5] = *(_OWORD *)&v168[32];
    *(_OWORD *)&src[3] = *(_OWORD *)&v168[16];
    *(_OWORD *)&src[1] = *(_OWORD *)v168;
    src[0] = *(_QWORD *)v153;
    v75 = v124;
    if ( (_QWORD)v124 == -1LL )
      core::panicking::panic_const::panic_const_add_overflow(
        &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
        v179,
        v73,
        &src[1]);
    *(_QWORD *)&v124 = v124 + 1;
    *(_QWORD *)&v226[72] = *(_QWORD *)&v168[64];
    *(_OWORD *)&v226[56] = *(_OWORD *)&v168[48];
    *(_OWORD *)&v226[40] = *(_OWORD *)&v168[32];
    *(_OWORD *)&v226[24] = *(_OWORD *)&v168[16];
    *(_OWORD *)&v226[8] = *(_OWORD *)v168;
    *(_QWORD *)v226 = *(_QWORD *)v153;
    std::sync::mpmc::sync_channel(v153, 2LL);
    v76 = *(_OWORD *)&v153[16];
    v119 = *(_OWORD *)v153;
    *(_OWORD *)v153 = *(_OWORD *)&v153[16];
    v77 = v130;
    if ( v130 == v128 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v128);
    *(_OWORD *)(v129 + 16 * v77) = v76;
    v130 = v77 + 1;
    v78 = *(_QWORD *)&v226[16];
    if ( v74 == 0x8000000000000000LL )
    {
      v111 = v116;
      v116[1] = *(_QWORD *)&v226[8];
      v111[2] = v78;
      *v111 = 3LL;
      if ( (_QWORD)v119 )
      {
        if ( (_QWORD)v119 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v119 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v119 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v119 + 8);
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v123);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v128);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::CompressedTmpMergeInput>>>>(&v117);
      if ( (_QWORD)v121 )
      {
        if ( (_QWORD)v121 == 1LL )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v121 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v121 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v121 + 8);
      }
      if ( (_QWORD)v115 )
      {
        if ( (_QWORD)v115 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v115 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v115 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v115 + 8);
      }
      return v116;
    }
    *(_QWORD *)&v164[56] = *(_QWORD *)&v226[72];
    *(_OWORD *)&v164[40] = *(_OWORD *)&v226[56];
    *(_OWORD *)&v164[24] = *(_OWORD *)&v226[40];
    *(_OWORD *)&v164[8] = *(_OWORD *)&v226[24];
    v162 = v119;
    *(_QWORD *)&v163 = v74;
    *((_QWORD *)&v163 + 1) = *(_QWORD *)&v226[8];
    *(_QWORD *)v164 = *(_QWORD *)&v226[16];
    *(_QWORD *)&v165 = 0LL;
    *((_QWORD *)&v165 + 1) = 1LL;
    v166 = 0LL;
    v79 = v118;
    if ( v118 == (_QWORD)v117 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v117, &v164[8], *((_QWORD *)&v119 + 1), *(_QWORD *)&v226[8]);
    v80 = *((_QWORD *)&v117 + 1);
    v81 = 120 * v79;
    v82 = v162;
    v83 = v163;
    v84 = *(_OWORD *)v164;
    v85 = *(_OWORD *)&v164[16];
    v86 = *(_OWORD *)&v164[32];
    v87 = *(_OWORD *)&v164[48];
    v88 = v165;
    *(_QWORD *)(*((_QWORD *)&v117 + 1) + v81 + 112) = v166;
    *(_OWORD *)(v80 + v81 + 96) = v88;
    *(_OWORD *)(v80 + v81 + 80) = v87;
    *(_OWORD *)(v80 + v81 + 64) = v86;
    *(_OWORD *)(v80 + v81 + 48) = v85;
    *(_OWORD *)(v80 + v81 + 32) = v84;
    *(_OWORD *)(v80 + v81 + 16) = v83;
    *(_OWORD *)(v80 + v81) = v82;
    v118 = v79 + 1;
    uu_sort::chunks::RecycledChunk::new(&v200, 0x2000LL);
    v247 = v75;
    v255 = v207;
    v254 = v206;
    v253 = v205;
    v252 = v204;
    v251 = v203;
    v250 = v202;
    v249 = v201;
    v248 = v200;
    std::sync::mpmc::Sender<T>::send(&v187, &v115, &v247);
    if ( *((_QWORD *)&v187 + 1) != 0x8000000000000000LL )
    {
      *(_OWORD *)&v153[112] = v194;
      *(_OWORD *)&v153[96] = v193;
      *(_OWORD *)&v153[80] = v192;
      *(_OWORD *)&v153[64] = v191;
      *(_OWORD *)&v153[48] = v190;
      *(_OWORD *)&v153[32] = v189;
      *(_OWORD *)&v153[16] = v188;
      *(_OWORD *)v153 = v187;
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, v153, &off_1D4AD8, &off_1D4D18);
    }
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v123);
  v89 = v118;
  for ( j = 0LL; v89 != j; ++j )
  {
    uu_sort::chunks::RecycledChunk::new(v224, 0x2000LL);
    *(_QWORD *)v168 = j;
    *(_QWORD *)&v168[120] = *(_QWORD *)&v224[112];
    *(_OWORD *)&v168[104] = *(_OWORD *)&v224[96];
    *(_OWORD *)&v168[88] = *(_OWORD *)&v224[80];
    *(_OWORD *)&v168[72] = *(_OWORD *)&v224[64];
    *(_OWORD *)&v168[56] = *(_OWORD *)&v224[48];
    *(_OWORD *)&v168[40] = *(_OWORD *)&v224[32];
    *(_OWORD *)&v168[24] = *(_OWORD *)&v224[16];
    *(_OWORD *)&v168[8] = *(_OWORD *)v224;
    std::sync::mpmc::Sender<T>::send(v179, &v115, v168);
    if ( *(_QWORD *)&v179[8] != 0x8000000000000000LL )
    {
      *(_OWORD *)&v153[112] = v184;
      *(_OWORD *)&v153[96] = v183;
      *(_OWORD *)&v153[80] = v182;
      *(_OWORD *)&v153[64] = v181;
      *(_OWORD *)&v153[48] = v180;
      *(_OWORD *)&v153[32] = *(_OWORD *)&v179[32];
      *(_OWORD *)&v153[16] = *(_OWORD *)&v179[16];
      *(_OWORD *)v153 = *(_OWORD *)v179;
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, v153, &off_1D4AD8, &off_1D4D00);
    }
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v114);
  *(_OWORD *)v153 = v121;
  *(_OWORD *)&v153[16] = v117;
  *(_QWORD *)&v153[32] = v118;
  memcpy(&v153[40], src, 0xA0uLL);
  *(_QWORD *)&v158 = 0x8000000000000000LL;
  *(_QWORD *)&v157 = 0LL;
  std::thread::Builder::spawn_unchecked_(&v143, &v157, v153, 0LL);
  if ( !v143.m256i_i64[0] )
  {
    v143.m256i_i64[0] = v143.m256i_i64[1];
    core::result::unwrap_failed(
      "failed to spawn threadmain",
      22LL,
      &v143,
      &anon_fe38f741e54badf7015918e7aa68e0c9_11_llvm_9495795450009312203,
      &anon_e73ee028dc74ef313b0965e1e543fc57_5_llvm_12031147188011335587);
  }
  v150 = *(_OWORD *)v143.m256i_i8;
  *(_QWORD *)&v151 = v143.m256i_i64[2];
  *(_QWORD *)v171 = 0LL;
  *(_QWORD *)&v171[8] = 8LL;
  *(_QWORD *)&v171[16] = 0LL;
  v91 = (__int64 *)v129;
  v92 = v130;
  v143.m256i_i64[0] = v129;
  v143.m256i_i64[1] = v129;
  v143.m256i_i64[2] = v128;
  v143.m256i_i64[3] = v129 + 16 * v130;
  *(_QWORD *)&v144 = 0LL;
  if ( v130 )
  {
    do
    {
      v143.m256i_i64[1] = (__int64)(v91 + 2);
      v97 = *v91;
      if ( *v91 == 3 )
        break;
      v98 = v91[1];
      *(_QWORD *)v136 = *v91;
      *(_QWORD *)&v136[8] = v98;
      v99 = v144;
      if ( (_QWORD)v144 == -1LL )
        core::panicking::panic_const::panic_const_add_overflow(
          &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
          v98,
          v92,
          v97);
      *(_QWORD *)&v144 = v144 + 1;
      *(_QWORD *)&v140 = v97;
      *((_QWORD *)&v140 + 1) = v98;
      if ( v97 )
      {
        if ( v97 == 1 )
          std::sync::mpmc::list::Channel<T>::recv(v136, v98, v92, 1000000000LL);
        else
          std::sync::mpmc::zero::Channel<T>::recv(v136, v98, v92, 1000000000LL);
      }
      else
      {
        std::sync::mpmc::array::Channel<T>::recv(v136, v98, v92, 1000000000LL);
      }
      if ( (v136[0] & 1) != 0 || (v100 = *(_QWORD *)&v136[8]) == 0 )
      {
        if ( (_QWORD)v140 )
        {
          if ( (_QWORD)v140 == 1LL )
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v140 + 8);
          else
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v140 + 8);
        }
        else
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v140 + 8);
        }
      }
      else
      {
        *(_QWORD *)v136 = 1LL;
        *(_QWORD *)&v136[8] = 1LL;
        *(_QWORD *)&v136[16] = v100;
        v101 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
        if ( !v101 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        *(_QWORD *)(v101 + 16) = *(_QWORD *)&v136[16];
        *(_OWORD *)v101 = *(_OWORD *)v136;
        v158 = (unsigned __int64)v101;
        v157 = v140;
        *(_QWORD *)v159 = v99;
        v102 = *(_QWORD *)&v171[16];
        if ( *(_QWORD *)&v171[16] == *(_QWORD *)v171 )
          alloc::raw_vec::RawVec<T,A>::grow_one(v171);
        v93 = *(_QWORD *)&v171[8];
        v94 = 5 * v102;
        v95 = v157;
        v96 = v158;
        v92 = *(_QWORD *)v159;
        *(_QWORD *)(*(_QWORD *)&v171[8] + 8 * v94 + 32) = *(_QWORD *)v159;
        *(_OWORD *)(v93 + 8 * v94 + 16) = v96;
        *(_OWORD *)(v93 + 8 * v94) = v95;
        *(_QWORD *)&v171[16] = v102 + 1;
      }
      v91 = (__int64 *)v143.m256i_i64[1];
    }
    while ( v143.m256i_i64[1] != v143.m256i_i64[3] );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v143);
  v103 = *(_QWORD *)&v171[16];
  *(_QWORD *)&v136[16] = *(_QWORD *)&v171[16];
  *(_OWORD *)v136 = *(_OWORD *)v171;
  *(_QWORD *)&v136[24] = v114;
  if ( *(_QWORD *)&v171[16] >= 2uLL )
  {
    v104 = (*(_QWORD *)&v171[16] >> 1) - 1LL;
    do
    {
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(v136, v104, v103);
      v5 = v104-- != 0;
    }
    while ( v5 );
  }
  v196 = *(_OWORD *)&v136[16];
  v195 = *(_OWORD *)v136;
  v105 = v116;
  *(_OWORD *)v116 = v115;
  v106 = v196;
  *((_OWORD *)v105 + 1) = v195;
  *((_OWORD *)v105 + 2) = v106;
  *((_OWORD *)v105 + 3) = v150;
  v105[8] = v151;
  v105[9] = 0LL;
  return v116;
}
