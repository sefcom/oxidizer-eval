__int64 __fastcall uu_df::table::Table::new(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 i; // r12
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // r14
  __int128 *v13; // rbp
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int64 v20; // rbx
  __int128 *v21; // r14
  __int64 v22; // rbx
  __int128 *v23; // r14
  __int64 v24; // rbx
  __int128 *v25; // r14
  __int64 v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r10
  double v33; // xmm0_8
  unsigned __int128 v34; // rax
  __m128i si128; // xmm3
  __m128d v36; // xmm4
  __m128d v37; // xmm1
  double v38; // xmm0_8
  __m128d v39; // xmm1
  __m128d v40; // xmm2
  double v41; // xmm1_8
  __m128d v42; // xmm2
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbx
  unsigned __int64 v48; // rbp
  __int64 v49; // r12
  __int64 v50; // r14
  __int64 v51; // r13
  __int64 v52; // r15
  __int128 *v53; // r12
  __int64 v54; // r15
  __int128 *v55; // r12
  __int64 v56; // r15
  __int128 *v57; // r12
  __int128 *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rcx
  __m128i v63; // xmm1
  __m128d v64; // xmm0
  __m128d v65; // xmm3
  __m128d v66; // xmm0
  __int128 v67; // kr40_16
  __int64 v68; // r13
  _BOOL8 v69; // rbp
  double v70; // xmm0_8
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int128 v74; // xmm0
  unsigned __int64 v75; // rbx
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int128 v79; // xmm0
  double v80; // rcx
  __int64 v81; // rbp
  unsigned __int64 v82; // rax
  __int64 v83; // r15
  __int64 v84; // rbx
  unsigned __int64 v85; // r12
  __int64 v86; // rdi
  __int64 v87; // rsi
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rax
  char **v93; // rdx
  __int64 v94; // r14
  __int64 v95; // r15
  _OWORD *v96; // r12
  int v97; // ebp
  unsigned int v98; // eax
  bool v99; // bl
  __int128 v100; // xmm0
  __int64 v101; // rbx
  char **v103; // rax
  char **v104; // rax
  __int128 v105; // [rsp+0h] [rbp-748h] BYREF
  __int128 *v106; // [rsp+10h] [rbp-738h] BYREF
  __int128 *v107; // [rsp+18h] [rbp-730h]
  __int64 v108; // [rsp+20h] [rbp-728h]
  double v109; // [rsp+30h] [rbp-718h]
  _QWORD *v110; // [rsp+38h] [rbp-710h]
  __int128 v111; // [rsp+40h] [rbp-708h]
  __int64 v112; // [rsp+50h] [rbp-6F8h]
  __int64 v113; // [rsp+58h] [rbp-6F0h]
  __int128 v114; // [rsp+60h] [rbp-6E8h] BYREF
  __int64 v115; // [rsp+70h] [rbp-6D8h]
  __int128 v116; // [rsp+80h] [rbp-6C8h] BYREF
  __int64 v117; // [rsp+90h] [rbp-6B8h]
  char **v118; // [rsp+A0h] [rbp-6A8h]
  __int128 v119; // [rsp+A8h] [rbp-6A0h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-690h]
  __int128 v121; // [rsp+C0h] [rbp-688h] BYREF
  __int64 v122; // [rsp+D0h] [rbp-678h]
  char **v123; // [rsp+E0h] [rbp-668h]
  __int64 v124; // [rsp+E8h] [rbp-660h]
  __int64 v125; // [rsp+F0h] [rbp-658h]
  __int64 v126; // [rsp+F8h] [rbp-650h]
  __int128 v127; // [rsp+100h] [rbp-648h] BYREF
  __int128 *v128; // [rsp+110h] [rbp-638h]
  __int128 v129; // [rsp+120h] [rbp-628h] BYREF
  __int64 v130; // [rsp+130h] [rbp-618h]
  char **v131; // [rsp+140h] [rbp-608h]
  __int64 *v132; // [rsp+148h] [rbp-600h]
  unsigned __int64 v133; // [rsp+150h] [rbp-5F8h]
  __int64 v134; // [rsp+158h] [rbp-5F0h]
  __int128 v135; // [rsp+160h] [rbp-5E8h] BYREF
  __int64 v136; // [rsp+170h] [rbp-5D8h]
  __int128 v137; // [rsp+178h] [rbp-5D0h] BYREF
  unsigned __int64 v138; // [rsp+188h] [rbp-5C0h]
  _QWORD *v139; // [rsp+190h] [rbp-5B8h] BYREF
  _QWORD *v140; // [rsp+198h] [rbp-5B0h]
  __int64 v141; // [rsp+1A0h] [rbp-5A8h]
  _QWORD *v142; // [rsp+1A8h] [rbp-5A0h]
  _QWORD v143[2]; // [rsp+1B0h] [rbp-598h] BYREF
  _BOOL8 v144; // [rsp+1C0h] [rbp-588h]
  double v145; // [rsp+1C8h] [rbp-580h]
  __int128 v146; // [rsp+1D0h] [rbp-578h]
  __int128 v147; // [rsp+1E0h] [rbp-568h]
  __int128 v148; // [rsp+1F0h] [rbp-558h]
  __int128 v149; // [rsp+200h] [rbp-548h]
  __int64 v150; // [rsp+210h] [rbp-538h]
  __int128 v151; // [rsp+218h] [rbp-530h]
  __int64 v152; // [rsp+228h] [rbp-520h]
  __int128 v153; // [rsp+230h] [rbp-518h]
  __int64 v154; // [rsp+240h] [rbp-508h]
  __int128 v155; // [rsp+248h] [rbp-500h]
  __int64 v156; // [rsp+258h] [rbp-4F0h]
  __int128 v157; // [rsp+260h] [rbp-4E8h]
  __int64 v158; // [rsp+270h] [rbp-4D8h]
  __int128 v159; // [rsp+280h] [rbp-4C8h] BYREF
  __int64 v160; // [rsp+290h] [rbp-4B8h]
  __int64 v161; // [rsp+2A0h] [rbp-4A8h]
  __int64 v162; // [rsp+2A8h] [rbp-4A0h]
  __int128 v163; // [rsp+2B0h] [rbp-498h]
  __int64 v164; // [rsp+2C0h] [rbp-488h]
  __int128 v165; // [rsp+2D0h] [rbp-478h]
  __int64 v166; // [rsp+2E0h] [rbp-468h]
  __int128 v167; // [rsp+2F0h] [rbp-458h]
  unsigned __int64 v168; // [rsp+300h] [rbp-448h]
  __m128d v169; // [rsp+310h] [rbp-438h]
  _QWORD v170[2]; // [rsp+328h] [rbp-420h] BYREF
  char v171; // [rsp+338h] [rbp-410h]
  __int128 v172; // [rsp+340h] [rbp-408h] BYREF
  __int64 v173; // [rsp+350h] [rbp-3F8h]
  _QWORD v174[2]; // [rsp+358h] [rbp-3F0h] BYREF
  char v175; // [rsp+368h] [rbp-3E0h]
  __int128 v176; // [rsp+370h] [rbp-3D8h] BYREF
  __int64 v177; // [rsp+380h] [rbp-3C8h]
  _QWORD v178[33]; // [rsp+388h] [rbp-3C0h] BYREF
  _OWORD v179[13]; // [rsp+490h] [rbp-2B8h] BYREF
  _OWORD v180[13]; // [rsp+560h] [rbp-1E8h] BYREF
  _QWORD src[35]; // [rsp+630h] [rbp-118h] BYREF

  v132 = a3;
  v161 = a1;
  *(_QWORD *)&v114 = 0LL;
  *((_QWORD *)&v114 + 1) = 8LL;
  v115 = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( !v6 )
    goto LABEL_137;
  v7 = a2;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 < 0 )
    goto LABEL_137;
  v113 = a2;
  if ( v8 )
  {
    v110 = &v106;
    *(_QWORD *)&v109 = a2 + 72;
    for ( i = 0LL; i != v8; ++i )
    {
      switch ( *(_BYTE *)(v6 + i) )
      {
        case 0:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 10LL, 0LL);
          v12 = *((_QWORD *)&v105 + 1);
          if ( (_QWORD)v105 )
            goto LABEL_143;
          v13 = v106;
          v14 = 10LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21F95, v106, 1LL, 1LL, 10LL);
          qmemcpy(v13, "Filesystem", 10);
          break;
        case 1:
          v15 = *(unsigned __int8 *)(v113 + 85);
          if ( v15 == 1 )
          {
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 4LL, 0LL);
            v12 = *((_QWORD *)&v105 + 1);
            if ( (_QWORD)v105 )
LABEL_143:
              alloc::raw_vec::handle_error(v12, *v110);
            v13 = v106;
            v14 = 4LL;
            core::intrinsics::copy_nonoverlapping::precondition_check(&unk_18998, v106, 1LL, 1LL, 4LL);
            *(_DWORD *)v13 = 1702521171;
          }
          else if ( v15 == 2 )
          {
            *(_QWORD *)&v135 = **(_QWORD **)&v109;
            *(_QWORD *)&v127 = &v135;
            *((_QWORD *)&v127 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            *(_QWORD *)&v105 = &unk_12B818;
            *((_QWORD *)&v105 + 1) = 2LL;
            v106 = &v127;
            v107 = (_OWORD *)(&dword_0 + 1);
            v108 = 0LL;
            ((void (__fastcall *)(__int128 *, __int128 *, __int64 *, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
              &v121,
              &v105,
              a3,
              a4,
              a5,
              a6);
            v13 = (__int128 *)*((_QWORD *)&v121 + 1);
            v12 = v121;
            v14 = v122;
          }
          else
          {
            *(double *)&v129 = v109;
            *((_QWORD *)&v129 + 1) = <uu_df::blocks::BlockSize as core::fmt::Display>::fmt;
            *(_QWORD *)&v105 = &unk_12B818;
            *((_QWORD *)&v105 + 1) = 2LL;
            v106 = &v129;
            v107 = (_OWORD *)(&dword_0 + 1);
            v108 = 0LL;
            ((void (__fastcall *)(__int128 *, __int128 *, __int64 *, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
              &v116,
              &v105,
              a3,
              a4,
              a5,
              a6);
            v13 = (__int128 *)*((_QWORD *)&v116 + 1);
            v12 = v116;
            v14 = v117;
          }
          break;
        case 2:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 4LL, 0LL);
          v12 = *((_QWORD *)&v105 + 1);
          if ( (_QWORD)v105 )
            goto LABEL_143;
          v13 = v106;
          v14 = 4LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_18974, v106, 1LL, 1LL, 4LL);
          *(_DWORD *)v13 = 1684370261;
          break;
        case 3:
          if ( (*(unsigned __int8 *)(v113 + 85) | 2) == 3 )
          {
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 5LL, 0LL);
            v12 = *((_QWORD *)&v105 + 1);
            if ( (_QWORD)v105 )
              goto LABEL_143;
            v13 = v106;
            v14 = 5LL;
            core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21FA6, v106, 1LL, 1LL, 5LL);
            *((_BYTE *)v13 + 4) = 108;
            *(_DWORD *)v13 = 1767994945;
          }
          else
          {
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 9LL, 0LL);
            v12 = *((_QWORD *)&v105 + 1);
            if ( (_QWORD)v105 )
              goto LABEL_143;
            v13 = v106;
            v14 = 9LL;
            core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21FAB, v106, 1LL, 1LL, 9LL);
            *(_QWORD *)v13 = 0x6C62616C69617641LL;
            *((_BYTE *)v13 + 8) = 101;
          }
          break;
        case 4:
          if ( *(_BYTE *)(v113 + 85) == 2 )
          {
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 8LL, 0LL);
            v12 = *((_QWORD *)&v105 + 1);
            if ( (_QWORD)v105 )
              goto LABEL_143;
            v13 = v106;
            v14 = 8LL;
            core::intrinsics::copy_nonoverlapping::precondition_check(aCapacity, v106, 1LL, 1LL, 8LL);
            *(_QWORD *)v13 = 0x7974696361706143LL;
          }
          else
          {
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 4LL, 0LL);
            v12 = *((_QWORD *)&v105 + 1);
            if ( (_QWORD)v105 )
              goto LABEL_143;
            v13 = v106;
            v14 = 4LL;
            core::intrinsics::copy_nonoverlapping::precondition_check(&unk_18988, v106, 1LL, 1LL, 4LL);
            *(_DWORD *)v13 = 627405653;
          }
          break;
        case 5:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 10LL, 0LL);
          v12 = *((_QWORD *)&v105 + 1);
          if ( (_QWORD)v105 )
            goto LABEL_143;
          v13 = v106;
          v14 = 10LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21FB4, v106, 1LL, 1LL, 10LL);
          qmemcpy(v13, "Mounted on", 10);
          break;
        case 6:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 6LL, 0LL);
          v12 = *((_QWORD *)&v105 + 1);
          if ( (_QWORD)v105 )
            goto LABEL_143;
          v13 = v106;
          v14 = 6LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21FBE, v106, 1LL, 1LL, 6LL);
          *((_WORD *)v13 + 2) = 29541;
          *(_DWORD *)v13 = 1685024329;
          break;
        case 7:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 5LL, 0LL);
          v12 = *((_QWORD *)&v105 + 1);
          if ( (_QWORD)v105 )
            goto LABEL_143;
          v13 = v106;
          v14 = 5LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21FC4, v106, 1LL, 1LL, 5LL);
          *((_BYTE *)v13 + 4) = 100;
          *(_DWORD *)v13 = 1702057289;
          break;
        case 8:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 5LL, 0LL);
          v12 = *((_QWORD *)&v105 + 1);
          if ( (_QWORD)v105 )
            goto LABEL_143;
          v13 = v106;
          v14 = 5LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21FC9, v106, 1LL, 1LL, 5LL);
          *((_BYTE *)v13 + 4) = 101;
          *(_DWORD *)v13 = 1701987913;
          break;
        case 9:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 5LL, 0LL);
          v12 = *((_QWORD *)&v105 + 1);
          if ( (_QWORD)v105 )
            goto LABEL_143;
          v13 = v106;
          v14 = 5LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21FCE, v106, 1LL, 1LL, 5LL);
          *((_BYTE *)v13 + 4) = 37;
          *(_DWORD *)v13 = 1702057289;
          break;
        case 0xA:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 4LL, 0LL);
          v12 = *((_QWORD *)&v105 + 1);
          if ( (_QWORD)v105 )
            goto LABEL_143;
          v13 = v106;
          v14 = 4LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_188F0, v106, 1LL, 1LL, 4LL);
          *(_DWORD *)v13 = 1701603654;
          break;
        case 0xB:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 4LL, 0LL);
          v12 = *((_QWORD *)&v105 + 1);
          if ( (_QWORD)v105 )
            goto LABEL_143;
          v13 = v106;
          v14 = 4LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_189CC, v106, 1LL, 1LL, 4LL);
          *(_DWORD *)v13 = 1701869908;
          break;
      }
      *(_QWORD *)&v111 = v12;
      *((_QWORD *)&v111 + 1) = v13;
      v112 = v14;
      v16 = v115;
      if ( v115 == (_QWORD)v114 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v114);
      v10 = *((_QWORD *)&v114 + 1);
      a4 = 3 * v16;
      v11 = v111;
      a3 = (__int64 *)v112;
      *(_QWORD *)(*((_QWORD *)&v114 + 1) + 8 * a4 + 16) = v112;
      *(_OWORD *)(v10 + 8 * a4) = v11;
      v115 = v16 + 1;
    }
    v7 = v113;
    v6 = *(_QWORD *)(v113 + 8);
    v17 = *(_QWORD *)(v113 + 16);
  }
  else
  {
    v17 = 0LL;
  }
  v160 = v115;
  v159 = v114;
  if ( !v6 || v17 < 0 )
    goto LABEL_137;
  *(_QWORD *)&v105 = v6;
  *((_QWORD *)&v105 + 1) = v6 + v17;
  v106 = 0LL;
  v107 = &v159;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v137, &v105);
  v18 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
  if ( !v18 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  if ( (v18 & 7) != 0 )
    core::panicking::panic_misaligned_pointer_dereference(8LL, v18, &off_12B838);
  v19 = v159;
  *(_QWORD *)(v18 + 16) = v160;
  *(_OWORD *)v18 = v19;
  *(_QWORD *)&v119 = 1LL;
  *((_QWORD *)&v119 + 1) = v18;
  v120 = 1LL;
  *(_QWORD *)&v121 = 0x8000000000000000LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 5LL, 0LL);
  v20 = *((_QWORD *)&v105 + 1);
  if ( (_QWORD)v105 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v105 + 1), v106);
  v21 = v106;
  core::intrinsics::copy_nonoverlapping::precondition_check(aTotal, v106, 1LL, 1LL, 5LL);
  *((_BYTE *)v21 + 4) = 108;
  *(_DWORD *)v21 = 1635020660;
  *(_QWORD *)&v116 = v20;
  *((_QWORD *)&v116 + 1) = v21;
  v117 = 5LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 1LL, 0LL);
  v22 = *((_QWORD *)&v105 + 1);
  if ( (_QWORD)v105 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v105 + 1), v106);
  v23 = v106;
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21F8E, v106, 1LL, 1LL, 1LL);
  *(_BYTE *)v23 = 45;
  *(_QWORD *)&v111 = v22;
  *((_QWORD *)&v111 + 1) = v23;
  v112 = 1LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 1LL, 0LL);
  v24 = *((_QWORD *)&v105 + 1);
  if ( (_QWORD)v105 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v105 + 1), v106);
  v25 = v106;
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21F8E, v106, 1LL, 1LL, 1LL);
  *(_BYTE *)v25 = 45;
  v155 = v121;
  v156 = v122;
  v149 = v116;
  v150 = v117;
  v151 = v111;
  v152 = v112;
  *(_QWORD *)&v153 = v24;
  *((_QWORD *)&v153 + 1) = v25;
  v154 = 1LL;
  v143[0] = 0LL;
  v144 = 0LL;
  v148 = 0LL;
  v147 = 0LL;
  v146 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v26 = *v132;
  v28 = v132[2];
  v139 = (_QWORD *)v132[1];
  v27 = v139;
  v140 = v139;
  v141 = v26;
  v142 = &v139[29 * v28];
  if ( v28 )
  {
    v123 = &off_12B798;
    v118 = &off_12B6F0;
    v131 = &off_12B768;
    do
    {
      v140 = v27 + 29;
      if ( *v27 == 0x8000000000000000LL )
        break;
      src[0] = *v27;
      memmove(&src[1], v27 + 1, 0xE0uLL);
      if ( (*(_BYTE *)(v7 + 81) & 1) != 0 || src[23] )
      {
        v29 = (unsigned __int64)src;
        memcpy(v178, src, 0xE8uLL);
        v122 = v178[5];
        v121 = *(_OWORD *)&v178[3];
        v117 = v178[8];
        v116 = *(_OWORD *)&v178[6];
        v112 = v178[14];
        v111 = *(_OWORD *)&v178[12];
        v31 = v178[23] - v178[24];
        if ( v178[23] < v178[24] )
          v31 = 0LL;
        v32 = v178[26] - v178[27];
        if ( v178[26] < v178[27] )
          v32 = 0LL;
        v115 = v178[21];
        v33 = *(double *)&v178[19];
        v114 = *(_OWORD *)&v178[19];
        v34 = v178[23] * (unsigned __int128)v178[22];
        if ( !is_mul_ok(v178[23], v178[22]) )
          goto LABEL_156;
        v30 = v178[23] * v178[22];
        v34 = v31 * (unsigned __int128)v178[22];
        if ( !is_mul_ok(v31, v178[22]) )
        {
          v104 = &off_12B7B0;
          goto LABEL_155;
        }
        v29 = v31 * v178[22];
        v34 = v178[25] * (unsigned __int128)v178[22];
        if ( !is_mul_ok(v178[25], v178[22]) )
        {
          v104 = &off_12B7C8;
LABEL_155:
          v123 = v104;
LABEL_156:
          core::panicking::panic_const::panic_const_mul_overflow(
            v123,
            v29,
            *((_QWORD *)&v34 + 1),
            v30,
            v178[27],
            v178[26]);
        }
        if ( v178[23] )
        {
          if ( __CFADD__(v31, v178[25]) )
            core::panicking::panic_const::panic_const_add_overflow(
              &off_12B7E0,
              v29,
              *((_QWORD *)&v34 + 1),
              v30,
              v178[27],
              v178[26]);
          si128 = _mm_load_si128((const __m128i *)&xmmword_18320);
          v36 = (__m128d)xmmword_182B0;
          v37 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v31, si128), (__m128d)xmmword_182B0);
          v38 = _mm_unpackhi_pd(v37, v37).m128d_f64[0] + v37.m128d_f64[0];
          v39 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)(v31 + v178[25]), si128), (__m128d)xmmword_182B0);
          v33 = v38 / (_mm_unpackhi_pd(v39, v39).m128d_f64[0] + v39.m128d_f64[0]);
          *((_QWORD *)&v34 + 1) = 1LL;
        }
        else
        {
          *((_QWORD *)&v34 + 1) = 0LL;
          si128 = _mm_load_si128((const __m128i *)&xmmword_18320);
          v36 = (__m128d)xmmword_182B0;
        }
        v40 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v32, si128), v36);
        v41 = _mm_unpackhi_pd(v40, v40).m128d_f64[0] + v40.m128d_f64[0];
        v42 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v178[26], si128), v36);
        *((_QWORD *)&v179[10] + 1) = v178[21];
        *(_OWORD *)((char *)&v179[9] + 8) = *(_OWORD *)&v178[19];
        *(_QWORD *)&v179[6] = v178[5];
        v179[5] = *(_OWORD *)&v178[3];
        *((_QWORD *)&v179[7] + 1) = v178[8];
        *(_OWORD *)((char *)&v179[6] + 8) = *(_OWORD *)&v178[6];
        *(_QWORD *)&v179[9] = v178[14];
        v179[8] = *(_OWORD *)&v178[12];
        *(_QWORD *)&v179[11] = v178[23] * v178[22];
        *((_QWORD *)&v179[11] + 1) = v31 * v178[22];
        *(_QWORD *)&v179[0] = *((_QWORD *)&v34 + 1);
        *(_QWORD *)&v179[12] = v34;
        *((double *)v179 + 1) = v33;
        v179[2] = v178[26];
        v179[3] = v32;
        v179[4] = v178[27];
        *(_QWORD *)&v179[1] = v178[26] != 0LL;
        *((double *)&v179[1] + 1) = v41 / (_mm_unpackhi_pd(v42, v42).m128d_f64[0] + v42.m128d_f64[0]);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v105, v178);
        if ( *((_QWORD *)&v105 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v178[2], v105, *((_QWORD *)&v105 + 1), v106);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v105, &v178[9]);
        if ( *((_QWORD *)&v105 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v178[11], v105, *((_QWORD *)&v105 + 1), v106);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v105, &v178[15]);
        if ( *((_QWORD *)&v105 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v178[17], v105, *((_QWORD *)&v105 + 1), v106);
        v170[0] = v179;
        v170[1] = v7;
        v171 = 0;
        uu_df::table::RowFormatter::get_values((__int64)&v172, (__int64)v170);
        memcpy(v180, v179, sizeof(v180));
        v47 = *(_QWORD *)&v180[11] + v157;
        if ( __CFADD__(*(_QWORD *)&v180[11], (_QWORD)v157) )
          goto LABEL_151;
        v48 = *((_QWORD *)&v180[11] + 1) + *((_QWORD *)&v157 + 1);
        if ( __CFADD__(*((_QWORD *)&v180[11] + 1), *((_QWORD *)&v157 + 1)) )
        {
          v103 = &off_12B708;
          goto LABEL_150;
        }
        v125 = *(_QWORD *)&v180[12] + v158;
        if ( __CFADD__(*(_QWORD *)&v180[12], v158) )
        {
          v103 = &off_12B720;
          goto LABEL_150;
        }
        v49 = (unsigned __int128)(v180[2] + v146) >> 64;
        v50 = *(_QWORD *)&v180[2] + v146;
        if ( __CFADD__(__CFADD__(*(_QWORD *)&v180[2], (_QWORD)v146), *((_QWORD *)&v146 + 1)) | __CFADD__(
                                                                                                 *((_QWORD *)&v180[2] + 1),
                                                                                                 v49) )
        {
          v103 = &off_12B738;
          goto LABEL_150;
        }
        v51 = *(_QWORD *)&v180[3] + v147;
        v110 = (_QWORD *)((unsigned __int128)(v180[3] + v147) >> 64);
        if ( __CFADD__(__CFADD__(*(_QWORD *)&v180[3], (_QWORD)v147), *((_QWORD *)&v147 + 1)) | __CFADD__(
                                                                                                 *((_QWORD *)&v180[3] + 1),
                                                                                                 v110) )
        {
          v103 = &off_12B750;
LABEL_150:
          v118 = v103;
LABEL_151:
          core::panicking::panic_const::panic_const_add_overflow(v118, v179, v43, v44, v45, v46);
        }
        *(_QWORD *)&v121 = 0x8000000000000000LL;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 5LL, 0LL);
        v162 = v49;
        v126 = v51;
        v52 = *((_QWORD *)&v105 + 1);
        if ( (_QWORD)v105 )
          alloc::raw_vec::handle_error(*((_QWORD *)&v105 + 1), v106);
        v53 = v106;
        core::intrinsics::copy_nonoverlapping::precondition_check(aTotal, v106, 1LL, 1LL, 5LL);
        *((_BYTE *)v53 + 4) = 108;
        *(_DWORD *)v53 = 1635020660;
        *(_QWORD *)&v116 = v52;
        *((_QWORD *)&v116 + 1) = v53;
        v117 = 5LL;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 1LL, 0LL);
        v54 = *((_QWORD *)&v105 + 1);
        if ( (_QWORD)v105 )
          alloc::raw_vec::handle_error(*((_QWORD *)&v105 + 1), v106);
        v55 = v106;
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21F8E, v106, 1LL, 1LL, 1LL);
        *(_BYTE *)v55 = 45;
        *(_QWORD *)&v111 = v54;
        *((_QWORD *)&v111 + 1) = v55;
        v112 = 1LL;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v105, 1LL, 0LL);
        v56 = *((_QWORD *)&v105 + 1);
        if ( (_QWORD)v105 )
          alloc::raw_vec::handle_error(*((_QWORD *)&v105 + 1), v106);
        v57 = v106;
        v58 = v106;
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21F8E, v106, 1LL, 1LL, 1LL);
        *(_BYTE *)v57 = 45;
        *(_QWORD *)&v105 = v56;
        *((_QWORD *)&v105 + 1) = v57;
        v106 = (_OWORD *)(&dword_0 + 1);
        if ( v47 )
        {
          v62 = v110;
          if ( __CFADD__(v125, v48) )
            goto LABEL_158;
          v63 = _mm_load_si128((const __m128i *)&xmmword_18320);
          v64 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v48, v63), (__m128d)xmmword_182B0);
          v65 = _mm_unpackhi_pd(v64, v64);
          v65.m128d_f64[0] = v65.m128d_f64[0] + v64.m128d_f64[0];
          v66 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)(v125 + v48), v63), (__m128d)xmmword_182B0);
          v65.m128d_f64[0] = v65.m128d_f64[0] / (_mm_unpackhi_pd(v66, v66).m128d_f64[0] + v66.m128d_f64[0]);
          v169 = v65;
          v124 = 1LL;
        }
        else
        {
          v124 = 0LL;
          v62 = v110;
        }
        v133 = v48;
        v134 = v47;
        v67 = v180[4] + v148;
        if ( __CFADD__(__CFADD__(*(_QWORD *)&v180[4], (_QWORD)v148), *((_QWORD *)&v148 + 1)) | __CFADD__(
                                                                                                 *((_QWORD *)&v180[4] + 1),
                                                                                                 (unsigned __int128)(v180[4] + v148) >> 64) )
        {
          v131 = &off_12B780;
LABEL_158:
          core::panicking::panic_const::panic_const_add_overflow(v131, v58, v59, v62, v60, v61);
        }
        v68 = v162;
        v69 = (v162 | v50) != 0;
        v109 = _floatuntidf(v126, v62);
        v70 = _floatuntidf(v50, v68);
        v109 = v109 / v70;
        v136 = v122;
        v135 = v121;
        v114 = v116;
        v115 = v117;
        v129 = v111;
        v130 = v112;
        v127 = v105;
        v128 = v106;
        core::ptr::drop_in_place<uu_df::table::Row>(v143);
        v143[0] = v124;
        v143[1] = *(_QWORD *)&v169.m128d_f64[0];
        v144 = v69;
        v145 = v109;
        *(_QWORD *)&v146 = v50;
        *((_QWORD *)&v146 + 1) = v68;
        *(_QWORD *)&v147 = v126;
        *((_QWORD *)&v147 + 1) = v110;
        v148 = v67;
        v150 = v115;
        v149 = v114;
        v152 = v130;
        v151 = v129;
        v154 = (__int64)v128;
        v153 = v127;
        v156 = v136;
        v155 = v135;
        *(_QWORD *)&v157 = v134;
        *((_QWORD *)&v157 + 1) = v133;
        v158 = v125;
        core::ptr::drop_in_place<uu_df::table::Row>(v180);
        v163 = v172;
        v164 = v173;
        v71 = v120;
        v7 = v113;
        if ( v120 == (_QWORD)v119 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v119);
        v72 = *((_QWORD *)&v119 + 1);
        v73 = 3 * v71;
        v74 = v163;
        *(_QWORD *)(*((_QWORD *)&v119 + 1) + 8 * v73 + 16) = v164;
        *(_OWORD *)(v72 + 8 * v73) = v74;
        v120 = v71 + 1;
      }
      else
      {
        if ( src[19] != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(&v105, &src[19]);
          if ( *((_QWORD *)&v105 + 1) )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&src[21], v105, *((_QWORD *)&v105 + 1), v106);
        }
        core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(src);
      }
      v27 = v140;
    }
    while ( v140 != v142 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v139);
  if ( (*(_BYTE *)(v7 + 83) & 1) != 0 )
  {
    v174[0] = v143;
    v174[1] = v7;
    v175 = 1;
    uu_df::table::RowFormatter::get_values((__int64)&v176, (__int64)v174);
    v76 = v120;
    if ( v120 == (_QWORD)v119 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v119);
    v77 = *((_QWORD *)&v119 + 1);
    v78 = 3 * v76;
    v79 = v176;
    *(_QWORD *)(*((_QWORD *)&v119 + 1) + 8 * v78 + 16) = v177;
    *(_OWORD *)(v77 + 8 * v78) = v79;
    v75 = v76 + 1;
    v120 = v75;
  }
  else
  {
    v75 = v120;
  }
  v80 = *((double *)&v119 + 1);
  if ( !*((_QWORD *)&v119 + 1) || (BYTE8(v119) & 7) != 0 || v75 > 0x555555555555555LL )
    goto LABEL_137;
  if ( v75 )
  {
    v110 = (_QWORD *)(*((_QWORD *)&v119 + 1) + 24 * v75);
    do
    {
      v81 = *(_QWORD *)(*(_QWORD *)&v80 + 8LL);
      if ( !v81 || (v81 & 7) != 0 || (v82 = *(_QWORD *)(*(_QWORD *)&v80 + 16LL), v82 > 0x555555555555555LL) )
        core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
      v109 = v80;
      if ( v82 )
      {
        v83 = 24 * v82;
        v84 = 0LL;
        v85 = 0LL;
        while ( 1 )
        {
          v86 = *(_QWORD *)(v81 + v84 + 8);
          if ( !v86 )
            goto LABEL_137;
          v87 = *(_QWORD *)(v81 + v84 + 16);
          if ( v87 < 0 )
            goto LABEL_137;
          LOBYTE(v105) = 0;
          v88 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v86, v86 + v87, 0LL, 0LL, &v105);
          if ( !*((_QWORD *)&v137 + 1) || (BYTE8(v137) & 7) != 0 || (v89 = v138, v138 > 0xFFFFFFFFFFFFFFFLL) )
            core::panicking::panic_nounwind(anon_71668def9d6f66a92d9ad7276690856e_13_llvm_9180203369577476064, 162LL);
          if ( v138 <= v85 )
            break;
          if ( v88 > *(_QWORD *)(*((_QWORD *)&v137 + 1) + 8 * v85) )
          {
            v90 = *(_QWORD *)(v81 + v84 + 8);
            if ( !v90 )
              goto LABEL_137;
            v91 = *(_QWORD *)(v81 + v84 + 16);
            if ( v91 < 0 )
              goto LABEL_137;
            LOBYTE(v105) = 0;
            v92 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v90, v90 + v91, 0LL, 0LL, &v105);
            if ( !*((_QWORD *)&v137 + 1) || (BYTE8(v137) & 7) != 0 || (v89 = v138, v138 > 0xFFFFFFFFFFFFFFFLL) )
              core::panicking::panic_nounwind(anon_71668def9d6f66a92d9ad7276690856e_18_llvm_9180203369577476064, 166LL);
            if ( v138 <= v85 )
            {
              v93 = &off_12B868;
              goto LABEL_140;
            }
            *(_QWORD *)(*((_QWORD *)&v137 + 1) + 8 * v85) = v92;
          }
          v84 += 24LL;
          ++v85;
          if ( v83 == v84 )
            goto LABEL_105;
        }
        v93 = &off_12B850;
LABEL_140:
        core::panicking::panic_bounds_check(v85, v89, v93);
      }
LABEL_105:
      *(_QWORD *)&v80 = *(_QWORD *)&v109 + 24LL;
    }
    while ( (_QWORD *)(*(_QWORD *)&v109 + 24LL) != v110 );
  }
  v166 = v120;
  v165 = v119;
  v167 = v137;
  v168 = v138;
  *(_QWORD *)&v105 = 0LL;
  *((_QWORD *)&v105 + 1) = 1LL;
  v106 = 0LL;
  v94 = *(_QWORD *)(v113 + 8);
  if ( !v94 || (v95 = *(_QWORD *)(v113 + 16), v95 < 0) )
LABEL_137:
    core::panicking::panic_nounwind(
      "unsafe precondition(s) violated: slice::from_raw_parts requires the pointer to be aligned and non-null, and the to"
      "tal size of the slice not to exceed `isize::MAX`Error message contains invalid UTF-8",
      162LL);
  if ( v95 )
  {
    v96 = 0LL;
    v97 = 3105;
    do
    {
      v98 = *((unsigned __int8 *)v96 + v94);
      v99 = 1;
      if ( v98 <= 0xB )
        v99 = !_bittest(&v97, v98);
      if ( v96 == (_OWORD *)v105 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v105);
      *((_BYTE *)v96 + *((_QWORD *)&v105 + 1)) = v99;
      v96 = (_OWORD *)((char *)v96 + 1);
      v106 = v96;
    }
    while ( (_OWORD *)v95 != v96 );
  }
  v178[31] = v106;
  v100 = v105;
  *(_OWORD *)&v178[29] = v105;
  v101 = v161;
  *(_QWORD *)(v161 + 16) = v106;
  *(_OWORD *)v101 = v100;
  *(_OWORD *)(v101 + 24) = v165;
  *(_QWORD *)(v101 + 40) = v166;
  *(_OWORD *)(v101 + 48) = v167;
  *(_QWORD *)(v101 + 64) = v168;
  core::ptr::drop_in_place<uu_df::table::Row>(v143);
  return v101;
}
