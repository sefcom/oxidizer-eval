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
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int128 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rdx
  __int128 v22; // kr00_16
  __int64 v23; // rbp
  __int64 v24; // rbp
  __int64 v25; // r15
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  _QWORD *v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r15
  __int64 i; // r12
  __int64 *v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // r15
  __int64 v40; // rbp
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rbx
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int128 v49; // xmm0
  __int64 v50; // rax
  __int64 v51; // rcx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rbx
  __int128 v60; // xmm0
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r12
  __int64 v67; // rbx
  __int128 v68; // kr30_16
  __int64 v69; // r14
  __int64 v70; // rax
  unsigned __int64 v71; // r12
  __int64 v72; // rax
  __int64 v73; // rcx
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  __int128 v77; // xmm3
  unsigned __int64 v78; // r13
  __int64 j; // rbx
  __int128 v80; // rax
  __int64 v81; // rcx
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int64 v84; // rcx
  __int64 v85; // rsi
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r12
  __int64 v90; // rbx
  unsigned __int64 v91; // r14
  _QWORD *v92; // rdx
  __int128 v93; // kr40_16
  _QWORD *v94; // rax
  unsigned __int64 v95; // rdx
  _QWORD *v96; // rax
  _QWORD *v98; // rdx
  _QWORD *v99; // rdx
  _QWORD *v100; // rcx
  _QWORD *v101; // rbx
  __int64 v102; // r14
  __int64 v103; // rax
  __m256i v104; // [rsp+0h] [rbp-BD8h] BYREF
  _QWORD *v105; // [rsp+28h] [rbp-BB0h]
  __int128 v106; // [rsp+30h] [rbp-BA8h] BYREF
  _QWORD *v107; // [rsp+40h] [rbp-B98h]
  __int128 v108; // [rsp+48h] [rbp-B90h] BYREF
  unsigned __int64 v109; // [rsp+58h] [rbp-B80h]
  __int128 v110; // [rsp+60h] [rbp-B78h] BYREF
  __int64 v111; // [rsp+70h] [rbp-B68h]
  __int128 v112; // [rsp+78h] [rbp-B60h] BYREF
  __int64 v113; // [rsp+88h] [rbp-B50h]
  __m256i v114; // [rsp+90h] [rbp-B48h] BYREF
  unsigned __int64 v115; // [rsp+B8h] [rbp-B20h]
  __int128 v116; // [rsp+C0h] [rbp-B18h] BYREF
  __m256i v117; // [rsp+D0h] [rbp-B08h] BYREF
  __m256i v118; // [rsp+F0h] [rbp-AE8h] BYREF
  __int128 v119; // [rsp+110h] [rbp-AC8h]
  __int64 v120; // [rsp+120h] [rbp-AB8h]
  __int64 v121; // [rsp+128h] [rbp-AB0h] BYREF
  __int64 v122; // [rsp+130h] [rbp-AA8h]
  __int64 v123; // [rsp+138h] [rbp-AA0h]
  char *v124; // [rsp+140h] [rbp-A98h] BYREF
  __int128 v125; // [rsp+148h] [rbp-A90h] BYREF
  __int128 v126; // [rsp+158h] [rbp-A80h] BYREF
  __int64 v127; // [rsp+168h] [rbp-A70h]
  __int128 v128; // [rsp+170h] [rbp-A68h] BYREF
  __int128 v129; // [rsp+180h] [rbp-A58h]
  __int128 v130; // [rsp+190h] [rbp-A48h]
  __int128 v131; // [rsp+1A0h] [rbp-A38h]
  __int64 v132; // [rsp+1B0h] [rbp-A28h]
  __int64 v133; // [rsp+1B8h] [rbp-A20h] BYREF
  _BYTE v134[24]; // [rsp+1C0h] [rbp-A18h]
  __int64 v135; // [rsp+1D8h] [rbp-A00h]
  __int128 v136; // [rsp+1E0h] [rbp-9F8h] BYREF
  __int64 v137; // [rsp+1F0h] [rbp-9E8h]
  unsigned __int64 v138; // [rsp+1F8h] [rbp-9E0h]
  __m256i v139; // [rsp+200h] [rbp-9D8h]
  __int64 v140; // [rsp+220h] [rbp-9B8h]
  __m256i v141; // [rsp+230h] [rbp-9A8h] BYREF
  _OWORD dest[11]; // [rsp+250h] [rbp-988h] BYREF
  __m256i v143; // [rsp+300h] [rbp-8D8h]
  unsigned __int64 v144; // [rsp+328h] [rbp-8B0h]
  unsigned __int64 v145; // [rsp+330h] [rbp-8A8h]
  unsigned __int64 v146; // [rsp+338h] [rbp-8A0h]
  unsigned __int128 v147; // [rsp+340h] [rbp-898h]
  __int64 v148; // [rsp+350h] [rbp-888h]
  __int128 v149; // [rsp+358h] [rbp-880h] BYREF
  _BYTE v150[40]; // [rsp+368h] [rbp-870h] BYREF
  __m256i v151; // [rsp+390h] [rbp-848h]
  __int128 v152; // [rsp+3B0h] [rbp-828h]
  __int128 v153; // [rsp+3C0h] [rbp-818h]
  __m256i v154; // [rsp+3D0h] [rbp-808h] BYREF
  __int128 v155; // [rsp+3F0h] [rbp-7E8h]
  __int128 v156; // [rsp+400h] [rbp-7D8h]
  __int128 v157; // [rsp+410h] [rbp-7C8h]
  __int128 v158; // [rsp+420h] [rbp-7B8h]
  __int128 v159; // [rsp+430h] [rbp-7A8h]
  __int128 v160; // [rsp+440h] [rbp-798h]
  __m256i v161; // [rsp+450h] [rbp-788h] BYREF
  __int128 v162; // [rsp+470h] [rbp-768h]
  __int128 v163; // [rsp+480h] [rbp-758h]
  __int128 v164; // [rsp+490h] [rbp-748h]
  __int128 v165; // [rsp+4A0h] [rbp-738h]
  __int128 v166; // [rsp+4B0h] [rbp-728h]
  __int64 v167; // [rsp+4C0h] [rbp-718h]
  __int64 v168; // [rsp+4C8h] [rbp-710h] BYREF
  __int64 v169; // [rsp+4D0h] [rbp-708h]
  __int128 v170; // [rsp+4D8h] [rbp-700h]
  __int128 v171; // [rsp+4E8h] [rbp-6F0h] BYREF
  __int128 v172; // [rsp+4F8h] [rbp-6E0h]
  __int128 v173; // [rsp+508h] [rbp-6D0h]
  __int128 v174; // [rsp+518h] [rbp-6C0h]
  __int128 v175; // [rsp+528h] [rbp-6B0h]
  __int128 v176; // [rsp+538h] [rbp-6A0h]
  __int128 v177; // [rsp+548h] [rbp-690h]
  __int64 v178; // [rsp+558h] [rbp-680h]
  __m256i v179; // [rsp+560h] [rbp-678h] BYREF
  __int128 v180; // [rsp+580h] [rbp-658h]
  __int128 v181; // [rsp+590h] [rbp-648h]
  __int128 v182; // [rsp+5A0h] [rbp-638h]
  __int128 v183; // [rsp+5B0h] [rbp-628h]
  __int128 v184; // [rsp+5C0h] [rbp-618h]
  __int128 v185; // [rsp+5D0h] [rbp-608h]
  __m256i v186; // [rsp+5E0h] [rbp-5F8h] BYREF
  __int128 v187; // [rsp+600h] [rbp-5D8h]
  __int128 v188; // [rsp+610h] [rbp-5C8h]
  __int128 v189; // [rsp+620h] [rbp-5B8h]
  __int128 v190; // [rsp+630h] [rbp-5A8h]
  __int128 v191; // [rsp+640h] [rbp-598h]
  __int128 v192; // [rsp+650h] [rbp-588h]
  __int128 v193; // [rsp+660h] [rbp-578h]
  __int64 v194; // [rsp+670h] [rbp-568h]
  _BYTE v195[24]; // [rsp+678h] [rbp-560h]
  __m256i v196; // [rsp+690h] [rbp-548h]
  __int128 v197; // [rsp+6B0h] [rbp-528h]
  __int128 v198; // [rsp+6C0h] [rbp-518h]
  _OWORD v199[2]; // [rsp+6D0h] [rbp-508h] BYREF
  __int64 v200; // [rsp+6F0h] [rbp-4E8h]
  __int128 v201; // [rsp+700h] [rbp-4D8h] BYREF
  __m256i v202; // [rsp+710h] [rbp-4C8h]
  __m256i v203; // [rsp+730h] [rbp-4A8h]
  __int128 v204; // [rsp+750h] [rbp-488h]
  __m256i v205; // [rsp+760h] [rbp-478h] BYREF
  __int128 v206; // [rsp+780h] [rbp-458h]
  _QWORD v207[2]; // [rsp+790h] [rbp-448h] BYREF
  __int128 v208; // [rsp+7A0h] [rbp-438h]
  _BYTE v209[128]; // [rsp+7B0h] [rbp-428h] BYREF
  __int128 v210[2]; // [rsp+830h] [rbp-3A8h] BYREF
  __int64 v211; // [rsp+850h] [rbp-388h]
  void *v212; // [rsp+858h] [rbp-380h]
  _BYTE v213[120]; // [rsp+860h] [rbp-378h] BYREF
  __int64 v214; // [rsp+8D8h] [rbp-300h]
  __int128 v215; // [rsp+8E0h] [rbp-2F8h]
  __int128 v216; // [rsp+8F0h] [rbp-2E8h]
  __int128 v217; // [rsp+908h] [rbp-2D0h] BYREF
  __int64 v218; // [rsp+918h] [rbp-2C0h]
  __int128 v219; // [rsp+920h] [rbp-2B8h]
  __int128 v220; // [rsp+930h] [rbp-2A8h]
  __int128 v221; // [rsp+940h] [rbp-298h] BYREF
  __m256i v222; // [rsp+950h] [rbp-288h]
  __m256i v223; // [rsp+970h] [rbp-268h]
  __int128 v224; // [rsp+990h] [rbp-248h]
  _QWORD v225[6]; // [rsp+9A0h] [rbp-238h] BYREF
  __int64 v226; // [rsp+9D0h] [rbp-208h] BYREF
  __m256i v227; // [rsp+9D8h] [rbp-200h]
  __int128 v228; // [rsp+9F8h] [rbp-1E0h]
  __int128 v229; // [rsp+A08h] [rbp-1D0h]
  __int128 v230; // [rsp+A18h] [rbp-1C0h]
  __int128 v231; // [rsp+A28h] [rbp-1B0h]
  __int128 v232; // [rsp+A38h] [rbp-1A0h]
  __int64 v233; // [rsp+A48h] [rbp-190h]
  _QWORD src[20]; // [rsp+A50h] [rbp-188h] BYREF
  char v235[8]; // [rsp+AF0h] [rbp-E8h] BYREF
  char v236[224]; // [rsp+AF8h] [rbp-E0h] BYREF

  v107 = a1;
  v4 = *((_QWORD *)a2 + 3);
  v5 = v4 < *((_QWORD *)a2 + 1);
  v6 = v4 - *((_QWORD *)a2 + 1);
  if ( v5 )
    goto LABEL_163;
  v8 = v6 / 0x18;
  v9 = a3[14];
  v105 = a3;
  if ( v8 > v9 )
  {
    v137 = a4;
    v10 = *a2;
    v216 = a2[1];
    v215 = v10;
    if ( !v9 )
      core::panicking::panic(
        anon_ff3add0fc2121d489142e144a6a370f6_41_llvm_5182399808099546885,
        27LL,
        &anon_ff3add0fc2121d489142e144a6a370f6_43_llvm_5182399808099546885);
    v11 = v8;
    v12 = *a2;
    *(_OWORD *)&v141.m256i_u64[2] = a2[1];
    *(_OWORD *)v141.m256i_i8 = v12;
    itertools::groupbylazy::new_chunks(v235, &v141);
    v124 = v235;
    v121 = 0LL;
    v122 = 8LL;
    v123 = 0LL;
    v138 = 0x8000000000000002LL;
    v13 = 0x8000000000000001LL;
    v14 = v11;
    v115 = 0x8000000000000001LL;
    while ( 1 )
    {
      v146 = v11;
      v144 = v105[14];
      v15 = v14 - v144;
      if ( v14 < v144 )
        v15 = 0LL;
      v145 = v15;
      <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(
        &v205,
        &v124,
        <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next,
        0LL);
      if ( v205.m256i_i64[0] == v138 )
        core::option::unwrap_failed(&off_1D4C20);
      v197 = v206;
      v196 = v205;
      std::sync::mpmc::channel(&v104);
      v116 = *(_OWORD *)v104.m256i_i8;
      v136 = *(_OWORD *)&v104.m256i_u64[2];
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v104, 0LL, 0LL);
      if ( v104.m256i_i64[0] )
        alloc::raw_vec::handle_error(v104.m256i_i64[1], v104.m256i_i64[2]);
      v112 = *(_OWORD *)&v104.m256i_u64[1];
      v113 = 0LL;
      v16 = 0LL;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v104, 0LL, 0LL);
      if ( v104.m256i_i64[0] )
        alloc::raw_vec::handle_error(v104.m256i_i64[1], v104.m256i_i64[2]);
      v110 = *(_OWORD *)&v104.m256i_u64[1];
      v111 = 0LL;
      v118 = v196;
      v119 = v197;
      v120 = 0LL;
      while ( 1 )
      {
        v104 = v118;
        v118.m256i_i64[0] = v13;
        if ( v104.m256i_i64[0] == v13 )
        {
          core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v104);
          v16 = (__int128 *)v119;
          itertools::groupbylazy::IntoChunks<I>::step(&v114, v119, *((_QWORD *)&v119 + 1));
        }
        else
        {
          v114 = v104;
        }
        v19 = v114.m256i_i64[0];
        if ( v114.m256i_i64[0] == v13 )
          break;
        v143 = v114;
        v20 = v120;
        if ( v120 == -1 )
          core::panicking::panic_const::panic_const_add_overflow(
            &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
            v16,
            v17,
            v18);
        ++v120;
        v117 = v114;
        std::sync::mpmc::sync_channel(&v104, 2LL);
        v22 = *(_OWORD *)&v104.m256i_u64[2];
        v125 = *(_OWORD *)v104.m256i_i8;
        *(_OWORD *)v104.m256i_i8 = *(_OWORD *)&v104.m256i_u64[2];
        v23 = v111;
        if ( v111 == (_QWORD)v110 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v110);
        *(_OWORD *)(*((_QWORD *)&v110 + 1) + 16 * v23) = v22;
        v111 = v23 + 1;
        v25 = v117.m256i_i64[2];
        v24 = v117.m256i_i64[1];
        if ( v19 == 0x8000000000000000LL )
        {
          if ( (_QWORD)v125 )
          {
            if ( (_QWORD)v125 == 1LL )
              std::sync::mpmc::counter::Sender<C>::release((char *)&v125 + 8);
            else
              std::sync::mpmc::counter::Sender<C>::release((char *)&v125 + 8);
          }
          else
          {
            std::sync::mpmc::counter::Sender<C>::release((char *)&v125 + 8);
          }
          v94 = (_QWORD *)v119;
          if ( *(_QWORD *)v119 )
            core::cell::panic_already_borrowed(&anon_106514630be1c9ef1de9e84b8238e531_28_llvm_16179947721019886102);
          v95 = *(_QWORD *)(v119 + 160);
          if ( v95 == -1LL || v95 < *((_QWORD *)&v119 + 1) )
            *(_QWORD *)(v119 + 160) = *((_QWORD *)&v119 + 1);
          *v94 = 0LL;
          core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v118);
          core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v110);
          core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>>(&v112);
          if ( (_QWORD)v136 )
          {
            if ( (_QWORD)v136 == 1LL )
              std::sync::mpmc::counter::Receiver<C>::release((char *)&v136 + 8);
            else
              std::sync::mpmc::counter::Receiver<C>::release((char *)&v136 + 8);
          }
          else
          {
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v136 + 8);
          }
          if ( (_QWORD)v116 )
          {
            if ( (_QWORD)v116 == 1LL )
              std::sync::mpmc::counter::Sender<C>::release((char *)&v116 + 8);
            else
              std::sync::mpmc::counter::Sender<C>::release((char *)&v116 + 8);
          }
          else
          {
            std::sync::mpmc::counter::Sender<C>::release((char *)&v116 + 8);
          }
          goto LABEL_130;
        }
        v128 = v125;
        *(_QWORD *)&v129 = v19;
        *((_QWORD *)&v129 + 1) = v117.m256i_i64[1];
        v130 = *(_OWORD *)&v117.m256i_u64[2];
        *(_QWORD *)&v131 = 0LL;
        *((_QWORD *)&v131 + 1) = 1LL;
        v132 = 0LL;
        v26 = v113;
        if ( v113 == (_QWORD)v112 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v112, 2LL, v21, *((_QWORD *)&v125 + 1));
        v27 = *((_QWORD *)&v112 + 1);
        v28 = 9 * v26;
        v29 = v128;
        v30 = v129;
        v31 = v130;
        v32 = v131;
        *(_QWORD *)(*((_QWORD *)&v112 + 1) + 8 * v28 + 64) = v132;
        *(_OWORD *)(v27 + 8 * v28 + 48) = v32;
        *(_OWORD *)(v27 + 8 * v28 + 32) = v31;
        *(_OWORD *)(v27 + 8 * v28 + 16) = v30;
        *(_OWORD *)(v27 + 8 * v28) = v29;
        v113 = v26 + 1;
        uu_sort::chunks::RecycledChunk::new(&v171, 0x2000LL);
        v13 = v115;
        *(_QWORD *)v213 = v20;
        v214 = v178;
        *(_OWORD *)&v213[104] = v177;
        *(_OWORD *)&v213[88] = v176;
        *(_OWORD *)&v213[72] = v175;
        *(_OWORD *)&v213[56] = v174;
        *(_OWORD *)&v213[40] = v173;
        *(_OWORD *)&v213[24] = v172;
        *(_OWORD *)&v213[8] = v171;
        v16 = &v116;
        std::sync::mpmc::Sender<T>::send(&v186, &v116, v213);
        if ( v186.m256i_i64[1] != 0x8000000000000000LL )
        {
          v160 = v192;
          v159 = v191;
          v158 = v190;
          v157 = v189;
          v156 = v188;
          v155 = v187;
          v154 = v186;
          core::result::unwrap_failed(aCalledResultUn_6, 43LL, &v154, &off_1D4AD8, &off_1D4D18);
        }
      }
      v33 = (_QWORD *)v119;
      if ( *(_QWORD *)v119 )
        core::cell::panic_already_borrowed(&anon_106514630be1c9ef1de9e84b8238e531_28_llvm_16179947721019886102);
      v34 = *(_QWORD *)(v119 + 160);
      if ( v34 == -1LL || v34 < *((_QWORD *)&v119 + 1) )
        *(_QWORD *)(v119 + 160) = *((_QWORD *)&v119 + 1);
      *v33 = 0LL;
      core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v118);
      v35 = v113;
      for ( i = 0LL; v35 != i; ++i )
      {
        uu_sort::chunks::RecycledChunk::new(&v161, 0x2000LL);
        v226 = i;
        v233 = v167;
        v232 = v166;
        v231 = v165;
        v230 = v164;
        v229 = v163;
        v228 = v162;
        v227 = v161;
        std::sync::mpmc::Sender<T>::send(&v179, &v116, &v226);
        if ( v179.m256i_i64[1] != 0x8000000000000000LL )
        {
          *(_OWORD *)&v209[112] = v185;
          *(_OWORD *)&v209[96] = v184;
          *(_OWORD *)&v209[80] = v183;
          *(_OWORD *)&v209[64] = v182;
          *(_OWORD *)&v209[48] = v181;
          *(_OWORD *)&v209[32] = v180;
          *(__m256i *)v209 = v179;
          core::result::unwrap_failed(aCalledResultUn_6, 43LL, v209, &off_1D4AD8, &off_1D4D00);
        }
      }
      <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v105);
      *(_OWORD *)v141.m256i_i8 = v136;
      *(_QWORD *)&dest[0] = v113;
      *(_OWORD *)&v141.m256i_u64[2] = v112;
      memcpy((char *)dest + 8, src, 0xA0uLL);
      v104.m256i_i64[2] = 0x8000000000000000LL;
      v104.m256i_i64[0] = 0LL;
      std::thread::Builder::spawn_unchecked_(&v114, &v104, &v141, 0LL);
      if ( !v114.m256i_i64[0] )
      {
        v114.m256i_i64[0] = v114.m256i_i64[1];
        core::result::unwrap_failed(
          "failed to spawn threadmain",
          22LL,
          &v114,
          &anon_fe38f741e54badf7015918e7aa68e0c9_11_llvm_9495795450009312203,
          &anon_e73ee028dc74ef313b0965e1e543fc57_5_llvm_12031147188011335587);
      }
      v126 = *(_OWORD *)v114.m256i_i8;
      v127 = v114.m256i_i64[2];
      *(_QWORD *)&v108 = 0LL;
      *((_QWORD *)&v108 + 1) = 8LL;
      v109 = 0LL;
      v37 = (__int64 *)*((_QWORD *)&v110 + 1);
      v38 = v111;
      v133 = *((_QWORD *)&v110 + 1);
      *(_QWORD *)v134 = *((_QWORD *)&v110 + 1);
      *(_QWORD *)&v134[8] = v110;
      *(_QWORD *)&v134[16] = *((_QWORD *)&v110 + 1) + 16 * v111;
      v135 = 0LL;
      if ( v111 )
      {
        do
        {
          *(_QWORD *)v134 = v37 + 2;
          v54 = *v37;
          if ( *v37 == 3 )
            break;
          v55 = v37[1];
          v104.m256i_i64[0] = *v37;
          v104.m256i_i64[1] = v55;
          v56 = v135;
          if ( v135 == -1 )
            core::panicking::panic_const::panic_const_add_overflow(
              &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
              v55,
              v38,
              v54);
          ++v135;
          *(_QWORD *)&v106 = v54;
          *((_QWORD *)&v106 + 1) = v55;
          if ( v54 )
          {
            if ( v54 == 1 )
              std::sync::mpmc::list::Channel<T>::recv(&v104, v55, v38, 1000000000LL);
            else
              std::sync::mpmc::zero::Channel<T>::recv(&v104, v55, v38, 1000000000LL);
          }
          else
          {
            std::sync::mpmc::array::Channel<T>::recv(&v104, v55, v38, 1000000000LL);
          }
          if ( (v104.m256i_i8[0] & 1) != 0 || (v57 = v104.m256i_i64[1]) == 0 )
          {
            if ( (_QWORD)v106 )
            {
              if ( (_QWORD)v106 == 1LL )
                std::sync::mpmc::counter::Receiver<C>::release((char *)&v106 + 8);
              else
                std::sync::mpmc::counter::Receiver<C>::release((char *)&v106 + 8);
            }
            else
            {
              std::sync::mpmc::counter::Receiver<C>::release((char *)&v106 + 8);
            }
          }
          else
          {
            v104.m256i_i64[0] = 1LL;
            v104.m256i_i64[1] = 1LL;
            v104.m256i_i64[2] = v57;
            v58 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
            if ( !v58 )
              alloc::alloc::handle_alloc_error(8LL, 24LL);
            *(_QWORD *)(v58 + 16) = v104.m256i_i64[2];
            *(_OWORD *)v58 = *(_OWORD *)v104.m256i_i8;
            *(_OWORD *)&v139.m256i_u64[2] = (unsigned __int64)v58;
            *(_OWORD *)v139.m256i_i8 = v106;
            v140 = v56;
            v59 = v109;
            if ( v109 == (_QWORD)v108 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v108);
            v50 = *((_QWORD *)&v108 + 1);
            v51 = 5 * v59;
            v52 = *(_OWORD *)v139.m256i_i8;
            v53 = *(_OWORD *)&v139.m256i_u64[2];
            v38 = v140;
            *(_QWORD *)(*((_QWORD *)&v108 + 1) + 8 * v51 + 32) = v140;
            *(_OWORD *)(v50 + 8 * v51 + 16) = v53;
            *(_OWORD *)(v50 + 8 * v51) = v52;
            v109 = v59 + 1;
          }
          v37 = *(__int64 **)v134;
        }
        while ( *(_QWORD *)v134 != *(_QWORD *)&v134[16] );
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v133);
      v39 = v109;
      v104.m256i_i64[2] = v109;
      *(_OWORD *)v104.m256i_i8 = v108;
      v104.m256i_i64[3] = (__int64)v105;
      if ( v109 >= 2 )
      {
        v40 = (v109 >> 1) - 1;
        do
        {
          binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(&v104, v40, v39);
          v5 = v40-- != 0;
        }
        while ( v5 );
      }
      v25 = v104.m256i_i64[0];
      v193 = *(_OWORD *)&v104.m256i_u64[1];
      v194 = v104.m256i_i64[3];
      v24 = *((_QWORD *)&v116 + 1);
      *(_QWORD *)&v195[16] = v127;
      *(_OWORD *)v195 = v126;
      if ( (_QWORD)v116 == 3LL )
        break;
      *(_OWORD *)&v203.m256i_u64[1] = *(_OWORD *)&v195[8];
      v202.m256i_i64[3] = v194;
      v203.m256i_i64[0] = *(_QWORD *)v195;
      *(_OWORD *)&v202.m256i_u64[1] = v193;
      v201 = v116;
      v202.m256i_i64[0] = v104.m256i_i64[0];
      v203.m256i_i64[3] = 0LL;
      uu_sort::tmp_dir::TmpDirWrapper::next_file(&v168, v137);
      if ( v169 == 0x8000000000000000LL )
      {
        v42 = *((_QWORD *)&v170 + 1);
        v41 = v170;
LABEL_150:
        v99 = v107;
        v107[1] = v41;
        v99[2] = v42;
        *v99 = 3LL;
        core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v201);
LABEL_131:
        core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v121);
        goto LABEL_132;
      }
      v207[0] = v168;
      v207[1] = v169;
      v208 = v170;
      if ( v105[6] != 0x8000000000000000LL )
        core::slice::raw::from_raw_parts::precondition_check(v105[7], 1LL, 1LL, v105[8]);
      <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v217, v207);
      v41 = *((_QWORD *)&v217 + 1);
      v42 = v218;
      if ( (_QWORD)v217 == 0x8000000000000000LL )
        goto LABEL_150;
      *(_OWORD *)&v150[24] = v220;
      *(_OWORD *)&v150[8] = v219;
      v149 = v217;
      *(_QWORD *)v150 = v218;
      v221 = v201;
      v222 = v202;
      v223 = v203;
      v224 = v204;
      v43 = uu_sort::merge::FileMerger::write_all_to(&v221, v105);
      if ( v43 )
      {
        v100 = v107;
        v107[1] = v43;
        v100[2] = v44;
        *v100 = 3LL;
        alloc::raw_vec::RawVec<T,A>::current_memory(&v141, &v149);
        if ( v141.m256i_i64[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            v150,
            v141.m256i_i64[0],
            v141.m256i_i64[1],
            v141.m256i_i64[2]);
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>(&v150[8]);
        goto LABEL_131;
      }
      v198 = v149;
      v199[0] = *(_OWORD *)v150;
      v200 = *(_QWORD *)&v150[32];
      v199[1] = *(_OWORD *)&v150[16];
      v24 = *((_QWORD *)&v149 + 1);
      v45 = v149;
      v25 = *(_QWORD *)v150;
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>((char *)v199 + 8);
      if ( v45 == 0x8000000000000000LL )
        break;
      v147 = __PAIR128__(v24, v45);
      v148 = v25;
      v46 = v123;
      if ( v123 == v121 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v121);
      v47 = v122;
      v48 = 3 * v46;
      v49 = v147;
      *(_QWORD *)(v122 + 8 * v48 + 16) = v148;
      *(_OWORD *)(v47 + 8 * v48) = v49;
      v123 = v46 + 1;
      v14 = v145;
      v11 = v145;
      v13 = v115;
      if ( v146 <= v144 )
      {
        <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(
          v225,
          &v124,
          <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next,
          0LL);
        v101 = v105;
        v102 = v137;
        if ( v225[0] != v138 )
        {
          core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>>(v225);
          core::panicking::panic(aAssertionFaile_25, 42LL, &off_1D4BE0);
        }
        *(_QWORD *)&v152 = v122;
        *(_QWORD *)&v153 = v121;
        *((_QWORD *)&v152 + 1) = v122;
        *((_QWORD *)&v153 + 1) = v122 + 24 * v123;
        v103 = alloc::alloc::Global::alloc_impl(1LL, 1LL, 0LL, 0LL);
        if ( !v103 )
          alloc::alloc::handle_alloc_error(1LL, 0LL);
        v210[1] = v153;
        v210[0] = v152;
        v211 = v103;
        v212 = &unk_1D4CD8;
        uu_sort::merge::merge_with_file_limit(v107, v210, v101, v102);
LABEL_132:
        core::ptr::drop_in_place<itertools::groupbylazy::GroupInner<usize,core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>,itertools::groupbylazy::ChunkIndex>>(v236);
        return v107;
      }
    }
LABEL_130:
    v96 = v107;
    v107[1] = v24;
    v96[2] = v25;
    *v96 = 3LL;
    goto LABEL_131;
  }
  v60 = *a2;
  *(_OWORD *)&v151.m256i_u64[2] = a2[1];
  *(_OWORD *)v151.m256i_i8 = v60;
  std::sync::mpmc::channel(&v141);
  v106 = *(_OWORD *)v141.m256i_i8;
  v112 = *(_OWORD *)&v141.m256i_u64[2];
  v61 = v151.m256i_i64[3] - v151.m256i_i64[1];
  if ( v151.m256i_i64[3] < (unsigned __int64)v151.m256i_i64[1] )
LABEL_163:
    core::panicking::panic_nounwind(anon_ff3add0fc2121d489142e144a6a370f6_24_llvm_5182399808099546885, 71LL);
  v62 = v61 / 0x18;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v141, v61 / 0x18, 0LL);
  if ( v141.m256i_i64[0] )
    alloc::raw_vec::handle_error(v141.m256i_i64[1], v141.m256i_i64[2]);
  v108 = *(_OWORD *)&v141.m256i_u64[1];
  v109 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v141, v62, 0LL);
  if ( v141.m256i_i64[0] )
    alloc::raw_vec::handle_error(v141.m256i_i64[1], v141.m256i_i64[2]);
  *(_OWORD *)v117.m256i_i8 = *(_OWORD *)&v141.m256i_u64[1];
  v117.m256i_i64[2] = 0LL;
  v118 = v151;
  *(_QWORD *)&v119 = 0LL;
  v115 = 0x8000000000000001LL;
  while ( 1 )
  {
    v63 = v118.m256i_i64[1];
    if ( v118.m256i_i64[1] == v118.m256i_i64[3] )
      break;
    v118.m256i_i64[1] += 24LL;
    v64 = *(_QWORD *)v63;
    if ( *(_QWORD *)v63 == 0x8000000000000000LL )
      break;
    *(_OWORD *)v213 = *(_OWORD *)(v63 + 8);
    *(_QWORD *)v209 = v64;
    *(_OWORD *)&v209[8] = *(_OWORD *)v213;
    <uu_sort::merge::ClosedPlainTmpFile as uu_sort::merge::ClosedTmpFile>::reopen(&v141, v209);
    v66 = v141.m256i_i64[0];
    *(_OWORD *)v154.m256i_i8 = *(_OWORD *)&v141.m256i_u64[1];
    v154.m256i_i64[2] = v141.m256i_i64[3];
    if ( v141.m256i_i64[0] == v115 )
      break;
    src[3] = v154.m256i_i64[2];
    *(_OWORD *)&src[1] = *(_OWORD *)v154.m256i_i8;
    src[0] = v141.m256i_i64[0];
    v67 = v119;
    if ( (_QWORD)v119 == -1LL )
      core::panicking::panic_const::panic_const_add_overflow(
        &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
        v209,
        v65,
        &src[1]);
    *(_QWORD *)&v119 = v119 + 1;
    *(_QWORD *)&v134[16] = v154.m256i_i64[2];
    *(_OWORD *)v134 = *(_OWORD *)v154.m256i_i8;
    v133 = v141.m256i_i64[0];
    std::sync::mpmc::sync_channel(&v141, 2LL);
    v68 = *(_OWORD *)&v141.m256i_u64[2];
    v110 = *(_OWORD *)v141.m256i_i8;
    *(_OWORD *)v141.m256i_i8 = *(_OWORD *)&v141.m256i_u64[2];
    v69 = v117.m256i_i64[2];
    if ( v117.m256i_i64[2] == v117.m256i_i64[0] )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v117);
    *(_OWORD *)(v117.m256i_i64[1] + 16 * v69) = v68;
    v117.m256i_i64[2] = v69 + 1;
    v70 = *(_QWORD *)&v134[8];
    if ( v66 == 0x8000000000000000LL )
    {
      v98 = v107;
      v107[1] = *(_QWORD *)v134;
      v98[2] = v70;
      *v98 = 3LL;
      if ( (_QWORD)v110 )
      {
        if ( (_QWORD)v110 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v110 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v110 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v110 + 8);
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v118);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v117);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>>(&v108);
      if ( (_QWORD)v112 )
      {
        if ( (_QWORD)v112 == 1LL )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v112 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v112 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v112 + 8);
      }
      if ( (_QWORD)v106 )
      {
        if ( (_QWORD)v106 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v106 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v106 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v106 + 8);
      }
      return v107;
    }
    *(_OWORD *)v161.m256i_i8 = v110;
    v161.m256i_i64[2] = v66;
    v161.m256i_i64[3] = *(_QWORD *)v134;
    v162 = *(_OWORD *)&v134[8];
    *(_QWORD *)&v163 = 0LL;
    *((_QWORD *)&v163 + 1) = 1LL;
    *(_QWORD *)&v164 = 0LL;
    v71 = v109;
    if ( v109 == (_QWORD)v108 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v108, *((_QWORD *)&v110 + 1), *(_QWORD *)&v134[16], *(_QWORD *)v134);
    v72 = *((_QWORD *)&v108 + 1);
    v73 = 9 * v71;
    v74 = *(_OWORD *)v161.m256i_i8;
    v75 = *(_OWORD *)&v161.m256i_u64[2];
    v76 = v162;
    v77 = v163;
    *(_QWORD *)(*((_QWORD *)&v108 + 1) + 8 * v73 + 64) = v164;
    *(_OWORD *)(v72 + 8 * v73 + 48) = v77;
    *(_OWORD *)(v72 + 8 * v73 + 32) = v76;
    *(_OWORD *)(v72 + 8 * v73 + 16) = v75;
    *(_OWORD *)(v72 + 8 * v73) = v74;
    v109 = v71 + 1;
    uu_sort::chunks::RecycledChunk::new(&v186, 0x2000LL);
    v226 = v67;
    v233 = v192;
    v232 = v191;
    v231 = v190;
    v230 = v189;
    v229 = v188;
    v228 = v187;
    v227 = v186;
    std::sync::mpmc::Sender<T>::send(&v179, &v106, &v226);
    if ( v179.m256i_i64[1] != 0x8000000000000000LL )
    {
      dest[5] = v185;
      dest[4] = v184;
      dest[3] = v183;
      dest[2] = v182;
      dest[1] = v181;
      dest[0] = v180;
      v141 = v179;
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, &v141, &off_1D4AD8, &off_1D4D18);
    }
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v118);
  v78 = v109;
  for ( j = 0LL; v78 != j; ++j )
  {
    uu_sort::chunks::RecycledChunk::new(v213, 0x2000LL);
    *(_QWORD *)v209 = j;
    *(_QWORD *)&v209[120] = *(_QWORD *)&v213[112];
    *(_OWORD *)&v209[104] = *(_OWORD *)&v213[96];
    *(_OWORD *)&v209[88] = *(_OWORD *)&v213[80];
    *(_OWORD *)&v209[72] = *(_OWORD *)&v213[64];
    *(_OWORD *)&v209[56] = *(_OWORD *)&v213[48];
    *(_OWORD *)&v209[40] = *(_OWORD *)&v213[32];
    *(_OWORD *)&v209[24] = *(_OWORD *)&v213[16];
    *(_OWORD *)&v209[8] = *(_OWORD *)v213;
    std::sync::mpmc::Sender<T>::send(&v154, &v106, v209);
    if ( v154.m256i_i64[1] != 0x8000000000000000LL )
    {
      dest[5] = v160;
      dest[4] = v159;
      dest[3] = v158;
      dest[2] = v157;
      dest[1] = v156;
      dest[0] = v155;
      v141 = v154;
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, &v141, &off_1D4AD8, &off_1D4D00);
    }
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v105);
  *(_OWORD *)v141.m256i_i8 = v112;
  *(_OWORD *)&v141.m256i_u64[2] = v108;
  *(_QWORD *)&dest[0] = v109;
  memcpy((char *)dest + 8, src, 0xA0uLL);
  *(_QWORD *)&v172 = 0x8000000000000000LL;
  *(_QWORD *)&v171 = 0LL;
  std::thread::Builder::spawn_unchecked_(&v128, &v171, &v141, 0LL);
  if ( !(_QWORD)v128 )
  {
    *(_QWORD *)&v128 = *((_QWORD *)&v128 + 1);
    core::result::unwrap_failed(
      "failed to spawn threadmain",
      22LL,
      &v128,
      &anon_fe38f741e54badf7015918e7aa68e0c9_11_llvm_9495795450009312203,
      &anon_e73ee028dc74ef313b0965e1e543fc57_5_llvm_12031147188011335587);
  }
  *(_OWORD *)v143.m256i_i8 = v128;
  v143.m256i_i64[2] = v129;
  v114.m256i_i64[0] = 0LL;
  *(_OWORD *)&v114.m256i_u64[1] = 8uLL;
  v80 = *(_OWORD *)&v117.m256i_u64[1];
  *(_QWORD *)&v128 = v117.m256i_i64[1];
  *((_QWORD *)&v128 + 1) = v117.m256i_i64[1];
  *(_QWORD *)&v129 = v117.m256i_i64[0];
  *((_QWORD *)&v129 + 1) = v117.m256i_i64[1] + 16 * v117.m256i_i64[2];
  *(_QWORD *)&v130 = 0LL;
  if ( v117.m256i_i64[2] )
  {
    do
    {
      *((_QWORD *)&v128 + 1) = v80 + 16;
      v84 = *(_QWORD *)v80;
      if ( *(_QWORD *)v80 == 3LL )
        break;
      v85 = *(_QWORD *)(v80 + 8);
      v104.m256i_i64[0] = *(_QWORD *)v80;
      v104.m256i_i64[1] = v85;
      v86 = v130;
      if ( (_QWORD)v130 == -1LL )
        core::panicking::panic_const::panic_const_add_overflow(
          &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
          v85,
          *((_QWORD *)&v80 + 1),
          v84);
      *(_QWORD *)&v130 = v130 + 1;
      *(_QWORD *)&v126 = v84;
      *((_QWORD *)&v126 + 1) = v85;
      if ( v84 )
      {
        if ( v84 == 1 )
          std::sync::mpmc::list::Channel<T>::recv(&v104, v85, *((_QWORD *)&v80 + 1), 1000000000LL);
        else
          std::sync::mpmc::zero::Channel<T>::recv(&v104, v85, *((_QWORD *)&v80 + 1), 1000000000LL);
      }
      else
      {
        std::sync::mpmc::array::Channel<T>::recv(&v104, v85, *((_QWORD *)&v80 + 1), 1000000000LL);
      }
      if ( (v104.m256i_i8[0] & 1) != 0 || (v87 = v104.m256i_i64[1]) == 0 )
      {
        if ( (_QWORD)v126 )
        {
          if ( (_QWORD)v126 == 1LL )
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v126 + 8);
          else
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v126 + 8);
        }
        else
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v126 + 8);
        }
      }
      else
      {
        v104.m256i_i64[0] = 1LL;
        v104.m256i_i64[1] = 1LL;
        v104.m256i_i64[2] = v87;
        v88 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
        if ( !v88 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        *(_QWORD *)(v88 + 16) = v104.m256i_i64[2];
        *(_OWORD *)v88 = *(_OWORD *)v104.m256i_i8;
        v172 = (unsigned __int64)v88;
        v171 = v126;
        *(_QWORD *)&v173 = v86;
        v89 = v114.m256i_i64[2];
        if ( v114.m256i_i64[2] == v114.m256i_i64[0] )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v114);
        *(_QWORD *)&v80 = v114.m256i_i64[1];
        v81 = 5 * v89;
        v82 = v171;
        v83 = v172;
        *((_QWORD *)&v80 + 1) = v173;
        *(_QWORD *)(v114.m256i_i64[1] + 8 * v81 + 32) = v173;
        *(_OWORD *)(v80 + 8 * v81 + 16) = v83;
        *(_OWORD *)(v80 + 8 * v81) = v82;
        v114.m256i_i64[2] = v89 + 1;
      }
      *(_QWORD *)&v80 = *((_QWORD *)&v128 + 1);
    }
    while ( *((_QWORD *)&v128 + 1) != *((_QWORD *)&v129 + 1) );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v128);
  v90 = v114.m256i_i64[2];
  v104.m256i_i64[2] = v114.m256i_i64[2];
  *(_OWORD *)v104.m256i_i8 = *(_OWORD *)v114.m256i_i8;
  v104.m256i_i64[3] = (__int64)v105;
  if ( v114.m256i_i64[2] >= 2uLL )
  {
    v91 = ((unsigned __int64)v114.m256i_i64[2] >> 1) - 1;
    do
    {
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(&v104, v91, v90);
      v5 = v91-- != 0;
    }
    while ( v5 );
  }
  v139 = v104;
  v92 = v107;
  *(_OWORD *)v107 = v106;
  v93 = *(_OWORD *)&v139.m256i_u64[2];
  *((_OWORD *)v92 + 1) = *(_OWORD *)v139.m256i_i8;
  *((_OWORD *)v92 + 2) = v93;
  *((_OWORD *)v92 + 3) = *(_OWORD *)v143.m256i_i8;
  v92[8] = v143.m256i_i64[2];
  v92[9] = 0LL;
  return v107;
}
