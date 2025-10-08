__int64 __fastcall just::analyzer::Analyzer::justfile(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rdx
  __int64 inner; // rax
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r15
  unsigned __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  char v26; // al
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // rcx
  __int64 v36; // r8
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int128 v49; // xmm3
  __int64 v50; // rax
  __int64 v51; // rbp
  __int64 v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // r14d
  char v56; // r12
  char v57; // r13
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  char v61; // bl
  char v62; // r15
  char v63; // bp
  char v65; // al
  __int64 v66; // rax
  __int64 v67; // r12
  unsigned int v68; // ebp
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm2
  char v72; // al
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm2
  int v79; // edx
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  __int64 v83; // rdx
  __int64 v84; // rcx
  char v85; // al
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm2
  int v92; // edx
  __int128 v93; // kr00_16
  unsigned __int64 v94; // r12
  __int64 v95; // r13
  _QWORD *v96; // rdx
  __int64 v97; // rax
  volatile signed __int64 **v98; // rdx
  volatile signed __int64 **v99; // r12
  volatile signed __int64 *v100; // r12
  __int128 v101; // xmm1
  __int128 v102; // xmm2
  __int128 v103; // xmm3
  __int128 v104; // xmm4
  __int64 v105; // rax
  __int128 v106; // xmm0
  __int128 v107; // xmm1
  __int64 v108; // r12
  __int64 v109; // r15
  __int64 v110; // rbx
  __int64 v111; // r14
  __int128 v112; // xmm0
  __int128 v113; // xmm1
  __int128 v114; // xmm0
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm2
  __int128 v118; // xmm1
  __int128 v119; // xmm2
  __int128 v120; // xmm3
  __int64 v121; // r14
  __int64 v122; // rdx
  __int128 v123; // xmm0
  __int128 v124; // xmm1
  __int128 v125; // xmm2
  char **v126; // rdi
  char v128; // [rsp+34h] [rbp-B64h]
  __int64 v130; // [rsp+40h] [rbp-B58h]
  _QWORD *v131; // [rsp+40h] [rbp-B58h]
  __int64 v132; // [rsp+48h] [rbp-B50h]
  volatile signed __int64 *v133; // [rsp+50h] [rbp-B48h] BYREF
  _QWORD *v134; // [rsp+58h] [rbp-B40h]
  __int128 v135; // [rsp+60h] [rbp-B38h] BYREF
  __int128 v136; // [rsp+70h] [rbp-B28h]
  __int128 v137; // [rsp+80h] [rbp-B18h]
  __int128 v138; // [rsp+90h] [rbp-B08h]
  __int128 v139; // [rsp+A0h] [rbp-AF8h]
  __int128 v140; // [rsp+B0h] [rbp-AE8h]
  __int128 v141; // [rsp+C0h] [rbp-AD8h]
  __int128 v142; // [rsp+D0h] [rbp-AC8h]
  __int128 *v143; // [rsp+E8h] [rbp-AB0h]
  __int128 v144; // [rsp+F0h] [rbp-AA8h] BYREF
  __int128 v145; // [rsp+100h] [rbp-A98h]
  __int128 v146; // [rsp+110h] [rbp-A88h]
  __int128 v147; // [rsp+120h] [rbp-A78h]
  __int64 v148; // [rsp+130h] [rbp-A68h]
  __int64 v149; // [rsp+140h] [rbp-A58h] BYREF
  __int64 v150; // [rsp+148h] [rbp-A50h]
  __int64 v151; // [rsp+150h] [rbp-A48h]
  _QWORD *v152; // [rsp+158h] [rbp-A40h]
  _QWORD *v153; // [rsp+160h] [rbp-A38h]
  __int128 v154; // [rsp+168h] [rbp-A30h] BYREF
  __int64 v155; // [rsp+178h] [rbp-A20h]
  __int128 v156; // [rsp+180h] [rbp-A18h] BYREF
  __int64 v157; // [rsp+190h] [rbp-A08h]
  _QWORD *v158; // [rsp+1A0h] [rbp-9F8h]
  __int64 v159; // [rsp+1A8h] [rbp-9F0h]
  __int128 v160; // [rsp+1B0h] [rbp-9E8h] BYREF
  __int64 v161; // [rsp+1C0h] [rbp-9D8h]
  _QWORD *v162; // [rsp+1D0h] [rbp-9C8h]
  __int128 v163; // [rsp+1D8h] [rbp-9C0h] BYREF
  __int64 v164; // [rsp+1E8h] [rbp-9B0h]
  __int128 v165; // [rsp+1F0h] [rbp-9A8h] BYREF
  __int64 v166; // [rsp+200h] [rbp-998h]
  __int64 v167; // [rsp+208h] [rbp-990h]
  _OWORD v168[2]; // [rsp+210h] [rbp-988h] BYREF
  __int64 v169; // [rsp+230h] [rbp-968h]
  __int64 v170; // [rsp+238h] [rbp-960h]
  __int128 v171; // [rsp+248h] [rbp-950h] BYREF
  __int64 v172; // [rsp+258h] [rbp-940h]
  __int128 v173; // [rsp+260h] [rbp-938h] BYREF
  __int64 v174; // [rsp+270h] [rbp-928h]
  __int64 v175; // [rsp+278h] [rbp-920h]
  __int64 v176; // [rsp+280h] [rbp-918h]
  __int64 v177; // [rsp+288h] [rbp-910h] BYREF
  _OWORD v178[47]; // [rsp+290h] [rbp-908h] BYREF
  _OWORD v179[3]; // [rsp+580h] [rbp-618h] BYREF
  __int128 v180; // [rsp+5B0h] [rbp-5E8h]
  __int64 v181; // [rsp+5C0h] [rbp-5D8h]
  __int128 v182; // [rsp+5D0h] [rbp-5C8h]
  __int64 v183; // [rsp+5E0h] [rbp-5B8h]
  __int128 v184; // [rsp+5F0h] [rbp-5A8h] BYREF
  __int64 v185; // [rsp+600h] [rbp-598h]
  __int128 v186; // [rsp+608h] [rbp-590h] BYREF
  __int64 v187; // [rsp+618h] [rbp-580h]
  __int128 v188; // [rsp+620h] [rbp-578h] BYREF
  __int64 v189; // [rsp+630h] [rbp-568h]
  __int128 v190; // [rsp+638h] [rbp-560h] BYREF
  __int64 v191; // [rsp+648h] [rbp-550h]
  _OWORD v192[6]; // [rsp+650h] [rbp-548h] BYREF
  char v193; // [rsp+6B0h] [rbp-4E8h]
  _DWORD v194[3]; // [rsp+6B1h] [rbp-4E7h]
  _QWORD v195[41]; // [rsp+6C0h] [rbp-4D8h] BYREF
  _QWORD v196[15]; // [rsp+808h] [rbp-390h] BYREF
  __int64 v197; // [rsp+880h] [rbp-318h] BYREF
  __int128 v198; // [rsp+888h] [rbp-310h]
  __int128 v199; // [rsp+898h] [rbp-300h]
  __int128 v200; // [rsp+8A8h] [rbp-2F0h]
  __int128 v201; // [rsp+8B8h] [rbp-2E0h]
  __int128 v202; // [rsp+8C8h] [rbp-2D0h]
  _BYTE dest[656]; // [rsp+8D8h] [rbp-2C0h] BYREF

  v176 = a6;
  v175 = a5;
  v159 = a4;
  v168[1] = xmmword_42BD20;
  v168[0] = *(_OWORD *)&off_42BD10;
  v169 = std::thread::local::LocalKey<T>::with();
  v170 = v12;
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v178);
  v179[2] = v178[2];
  v179[1] = v178[1];
  v179[0] = v178[0];
  *(_QWORD *)&v163 = 0LL;
  v164 = 0LL;
  v149 = 0LL;
  v150 = 8LL;
  v151 = 0LL;
  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a3, a11, a12);
  v14 = inner + 24;
  v15 = inner == 0;
  if ( inner )
    inner += 24LL;
  v158 = (_QWORD *)inner;
  if ( v15 )
  {
    v126 = &off_42D9E0;
LABEL_96:
    core::option::unwrap_failed(v126);
  }
  alloc::vec::Vec<T,A>::push(&v149, v14, &off_42D9F8);
  v143 = (__int128 *)(a2 + 9);
  v152 = a2 + 21;
  v162 = a2 + 3;
  v134 = a2 + 18;
  v153 = a2 + 15;
  while ( 1 )
  {
    v16 = v151;
    if ( !v151 )
    {
      *(_QWORD *)&v178[1] = v152[2];
      v178[0] = *(_OWORD *)v152;
      just::settings::Settings::from_table(v195, v178);
      *(_QWORD *)&v154 = 0LL;
      v155 = 0LL;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v160, a2);
      v128 = BYTE1(v195[39]);
      while ( 1 )
      {
        v50 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v160);
        if ( !v50 )
          break;
        v51 = v50;
        v52 = v50 + 128;
        v132 = just::token::Token::lexeme(v50 + 128);
        v130 = v53;
        if ( (v128 & 1) == 0
          && alloc::collections::btree::map::BTreeMap<K,V,A>::get(v154, *((_QWORD *)&v154 + 1), v132, v53) )
        {
          *((_QWORD *)&v178[0] + 1) = v132;
          *(_QWORD *)&v178[1] = v130;
          *(_QWORD *)&v178[0] = 0x800000000000001FLL;
          just::token::Token::error(&v135, v52, v178);
LABEL_62:
          *(_OWORD *)(a1 + 72) = v139;
          v80 = v135;
          v81 = v136;
          v82 = v137;
          *(_OWORD *)(a1 + 56) = v138;
          *(_OWORD *)(a1 + 40) = v82;
          *(_OWORD *)(a1 + 24) = v81;
          *(_OWORD *)(a1 + 8) = v80;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(&v160);
LABEL_63:
          v63 = 1;
LABEL_64:
          core::ptr::drop_in_place<just::table::Table<just::binding::Binding<just::expression::Expression>>>(&v154);
          core::ptr::drop_in_place<just::settings::Settings>(v195);
          v62 = 0;
          goto LABEL_46;
        }
        v54 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v154, *((_QWORD *)&v154 + 1), v132, v130);
        v55 = *(_DWORD *)(v51 + 200);
        if ( (unsigned __int8)core::option::Option<T>::map_or(v54, v55) )
        {
          v56 = *(_BYTE *)(v51 + 204);
          v57 = *(_BYTE *)(v51 + 205);
          v148 = *(_QWORD *)(v52 + 64);
          v58 = *(_OWORD *)v52;
          v59 = *(_OWORD *)(v52 + 16);
          v60 = *(_OWORD *)(v52 + 32);
          v147 = *(_OWORD *)(v52 + 48);
          v146 = v60;
          v145 = v59;
          v144 = v58;
          v61 = *(_BYTE *)(v51 + 206);
          <just::expression::Expression as core::clone::Clone>::clone(&v135, v51);
          BYTE12(v178[12]) = v56;
          BYTE13(v178[12]) = v57;
          DWORD2(v178[12]) = v55;
          *(_QWORD *)&v178[12] = v148;
          v178[11] = v147;
          v178[10] = v146;
          v178[9] = v145;
          v178[8] = v144;
          BYTE14(v178[12]) = v61;
          v178[0] = v135;
          v178[1] = v136;
          v178[2] = v137;
          v178[3] = v138;
          v178[4] = v139;
          v178[5] = v140;
          v178[6] = v141;
          v178[7] = v142;
          just::table::Table<V>::insert(&v154, v178);
        }
        if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v143, v132, v130) )
        {
          *((_QWORD *)&v178[0] + 1) = v132;
          *(_QWORD *)&v178[1] = v130;
          *(_QWORD *)&v178[0] = 0x8000000000000022LL;
          just::token::Token::error(&v135, v52, v178);
          goto LABEL_62;
        }
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(&v160);
      just::assignment_resolver::AssignmentResolver::resolve_assignments(v178, &v154);
      v65 = BYTE8(v178[4]);
      if ( BYTE8(v178[4]) != 37 )
      {
        *(_QWORD *)(a1 + 72) = *(_QWORD *)&v178[4];
        v76 = v178[0];
        v77 = v178[1];
        v78 = v178[2];
        *(_OWORD *)(a1 + 56) = v178[3];
        *(_OWORD *)(a1 + 40) = v78;
        *(_OWORD *)(a1 + 24) = v77;
        *(_OWORD *)(a1 + 8) = v76;
        v79 = HIDWORD(v178[4]);
        *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v178[4] + 9);
        *(_DWORD *)(a1 + 84) = v79;
        *(_BYTE *)(a1 + 80) = v65;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        goto LABEL_63;
      }
      *(_QWORD *)&v165 = 0LL;
      v166 = 0LL;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v144, v162);
      v66 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v144);
      if ( v66 )
      {
        v67 = v66;
        v68 = LOBYTE(v195[39]);
        while ( 1 )
        {
          *(_QWORD *)&v139 = *(_QWORD *)(v67 + 208);
          v69 = *(_OWORD *)(v67 + 144);
          v70 = *(_OWORD *)(v67 + 160);
          v71 = *(_OWORD *)(v67 + 176);
          v138 = *(_OWORD *)(v67 + 192);
          v137 = v71;
          v136 = v70;
          v135 = v69;
          just::analyzer::Analyzer::define(v178, v168, &v135, aRecipe_0, 6LL, v68);
          v72 = BYTE8(v178[4]);
          if ( BYTE8(v178[4]) != 37 )
            break;
          v73 = just::token::Token::lexeme(v67 + 144);
          v75 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v165, *((_QWORD *)&v165 + 1), v73, v74);
          if ( (unsigned __int8)core::option::Option<T>::map_or(v75, *(unsigned int *)(v67 + 248)) )
          {
            <just::recipe::Recipe<D> as core::clone::Clone>::clone(v178, v67);
            just::table::Table<V>::insert(&v165, v178);
          }
          v67 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v144);
          if ( !v67 )
            goto LABEL_65;
        }
        *(_QWORD *)(a1 + 72) = *(_QWORD *)&v178[4];
        v89 = v178[0];
        v90 = v178[1];
        v91 = v178[2];
        *(_OWORD *)(a1 + 56) = v178[3];
        *(_OWORD *)(a1 + 40) = v91;
        *(_OWORD *)(a1 + 24) = v90;
        *(_OWORD *)(a1 + 8) = v89;
        v92 = HIDWORD(v178[4]);
        *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v178[4] + 9);
        *(_DWORD *)(a1 + 84) = v92;
        *(_BYTE *)(a1 + 80) = v72;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(&v144);
        core::ptr::drop_in_place<just::table::Table<just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>>(&v165);
      }
      else
      {
LABEL_65:
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(&v144);
        v83 = v158[4];
        v84 = v158[5];
        *(_QWORD *)&v145 = v166;
        v144 = v165;
        just::recipe_resolver::RecipeResolver::resolve_recipes(
          (unsigned int)v178,
          (unsigned int)&v154,
          v83,
          v84,
          (_DWORD)v134,
          HIBYTE(v195[39]),
          (__int64)&v144);
        v85 = BYTE8(v178[4]);
        if ( BYTE8(v178[4]) != 37 )
        {
          *(_QWORD *)&v139 = *(_QWORD *)&v178[4];
          v138 = v178[3];
          v137 = v178[2];
          v136 = v178[1];
          v135 = v178[0];
          *(_DWORD *)(a1 + 84) = HIDWORD(v178[4]);
          *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v178[4] + 9);
          *(_QWORD *)(a1 + 72) = v139;
          v86 = v135;
          v87 = v136;
          v88 = v137;
          *(_OWORD *)(a1 + 56) = v138;
          *(_OWORD *)(a1 + 40) = v88;
          *(_OWORD *)(a1 + 24) = v87;
          *(_OWORD *)(a1 + 8) = v86;
          *(_BYTE *)(a1 + 80) = v85;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          v63 = 0;
          goto LABEL_64;
        }
        v131 = v158 + 3;
        v156 = v178[0];
        v157 = *(_QWORD *)&v178[1];
        *(_QWORD *)&v171 = 0LL;
        v172 = 0LL;
        while ( 1 )
        {
          just::table::Table<V>::pop(v196, v153);
          if ( v196[0] == 0x8000000000000000LL )
            break;
          just::analyzer::Analyzer::resolve_alias(v178, v134, &v156, v196);
          if ( LOBYTE(v178[6]) == 37 )
          {
            v139 = v178[4];
            v101 = v178[0];
            v102 = v178[1];
            v103 = v178[2];
            v104 = v178[3];
            v138 = v178[3];
            v137 = v178[2];
            v136 = v178[1];
            v135 = v178[0];
            *(_OWORD *)(a1 + 72) = v178[4];
            *(_OWORD *)(a1 + 56) = v104;
            *(_OWORD *)(a1 + 40) = v103;
            *(_OWORD *)(a1 + 24) = v102;
            *(_OWORD *)(a1 + 8) = v101;
            *(_QWORD *)a1 = 0x8000000000000000LL;
            goto LABEL_92;
          }
          v140 = v178[5];
          v139 = v178[4];
          v138 = v178[3];
          v137 = v178[2];
          v136 = v178[1];
          v135 = v178[0];
          *(_DWORD *)((char *)v194 + 3) = DWORD1(v178[6]);
          v194[0] = *(_DWORD *)((char *)&v178[6] + 1);
          v192[0] = v178[0];
          v192[1] = v178[1];
          v192[2] = v178[2];
          v192[3] = v178[3];
          v192[4] = v178[4];
          v192[5] = v178[5];
          v193 = v178[6];
          just::table::Table<V>::insert(&v171, v192);
        }
        core::ptr::drop_in_place<core::option::Option<just::alias::Alias<just::namepath::Namepath>>>(v196);
        v93 = v156;
        v94 = 0LL;
        v95 = v156;
        if ( (_QWORD)v156 )
          v95 = v157;
        LOBYTE(v94) = (_QWORD)v156 != 0LL;
        v178[0] = v94;
        v178[1] = v156;
        v178[2] = v94;
        v178[3] = v156;
        *(_QWORD *)&v178[4] = v95;
        do
        {
          if ( !<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v178)
            || !v96 )
          {
            goto LABEL_79;
          }
        }
        while ( !(unsigned __int8)just::attribute_set::AttributeSet::contains(*v96 + 232LL, 16LL) );
        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v163, 2LL);
LABEL_79:
        if ( v195[6] != 0x8000000000000000LL )
          alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v163, 3LL);
        std::path::Path::to_path_buf(&v173, a11, a12);
        v97 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a10, a11, a12);
        if ( !v97 )
          core::option::unwrap_failed(&off_42DA88);
        v177 = v97 + 24;
        v133 = 0LL;
        v144 = v94;
        v145 = v93;
        v146 = v94;
        v147 = v93;
        v148 = v95;
        while ( 1 )
        {
          do
          {
            if ( <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v144) )
            {
              v99 = v98;
              if ( v98 )
                continue;
            }
            v105 = core::option::Option<T>::or_else(v133, &v156, &v177);
            v181 = v172;
            v180 = v171;
            v183 = v155;
            v182 = v154;
            v167 = v105;
            core::option::Option<T>::filter(&v184, v159);
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v186, v175, v176);
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v188, a7, a8);
            <alloc::string::String as core::clone::Clone>::clone(&v190, v131);
            v161 = v134[2];
            v160 = *(_OWORD *)v134;
            v106 = *v143;
            v107 = v143[1];
            v137 = v143[2];
            v136 = v107;
            v135 = v106;
            *(_QWORD *)&v145 = v164;
            v144 = v163;
            v108 = a2[6];
            v109 = a2[7];
            v110 = a2[8];
            <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
              v178,
              v158[10],
              v158[11]);
            *(_QWORD *)(a1 + 136) = *(_QWORD *)&v178[1];
            *(_OWORD *)(a1 + 120) = v178[0];
            *(_QWORD *)(a1 + 632) = v181;
            *(_OWORD *)(a1 + 616) = v180;
            *(_OWORD *)(a1 + 640) = v182;
            *(_QWORD *)(a1 + 656) = v183;
            v111 = v167;
            *(_OWORD *)(a1 + 144) = v184;
            *(_QWORD *)(a1 + 160) = v185;
            v178[0] = v186;
            *(_QWORD *)&v178[1] = v187;
            *((_QWORD *)&v178[2] + 1) = v189;
            *(_OWORD *)((char *)&v178[1] + 8) = v188;
            v178[3] = v190;
            *(_QWORD *)&v178[4] = v191;
            *(_QWORD *)(a1 + 688) = v161;
            *(_OWORD *)(a1 + 672) = v160;
            *(_QWORD *)(a1 + 712) = v157;
            *(_OWORD *)(a1 + 696) = v156;
            memcpy((void *)(a1 + 168), v195, 0x148uLL);
            *((_QWORD *)&v178[5] + 1) = v174;
            *(_OWORD *)((char *)&v178[4] + 8) = v173;
            v112 = v135;
            v113 = v136;
            *(_OWORD *)(a1 + 600) = v137;
            *(_OWORD *)(a1 + 584) = v113;
            *(_OWORD *)(a1 + 568) = v112;
            *(_QWORD *)(a1 + 736) = v145;
            *(_OWORD *)(a1 + 720) = v144;
            v114 = v178[0];
            *(_OWORD *)(a1 + 64) = v178[4];
            *(_OWORD *)a1 = v114;
            v115 = v178[1];
            v116 = v178[2];
            v117 = v178[3];
            *(_OWORD *)(a1 + 80) = v178[5];
            *(_OWORD *)(a1 + 48) = v117;
            *(_OWORD *)(a1 + 32) = v116;
            *(_OWORD *)(a1 + 16) = v115;
            *(_QWORD *)(a1 + 96) = v108;
            *(_QWORD *)(a1 + 104) = v109;
            *(_QWORD *)(a1 + 112) = v110;
            v118 = *(_OWORD *)(a9 + 16);
            v119 = *(_OWORD *)(a9 + 32);
            v120 = *(_OWORD *)(a9 + 48);
            *(_OWORD *)(a1 + 496) = *(_OWORD *)a9;
            *(_OWORD *)(a1 + 512) = v118;
            *(_OWORD *)(a1 + 528) = v119;
            *(_OWORD *)(a1 + 544) = v120;
            *(_QWORD *)(a1 + 560) = *(_QWORD *)(a9 + 64);
            *(_QWORD *)(a1 + 664) = v111;
            core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(v149, v150);
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<&std::path::PathBuf>>(
              *(_QWORD *)&v179[0],
              *((_QWORD *)&v179[0] + 1));
            core::ptr::drop_in_place<std::collections::hash::map::HashMap<&str,(&str,just::name::Name)>>(
              *(_QWORD *)&v168[0],
              *((_QWORD *)&v168[0] + 1));
            return core::ptr::drop_in_place<just::table::Table<just::alias::Alias<just::namepath::Namepath>>>(v153);
          }
          while ( !(unsigned __int8)just::attribute_set::AttributeSet::contains(*v98 + 29, 1LL) );
          if ( v133 )
            break;
          if ( _InterlockedIncrement64(*v99) <= 0 )
            BUG();
          v100 = *v99;
          core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<alloc::sync::Arc<just::recipe::Recipe>>>(&v133);
          v133 = v100;
        }
        v121 = (__int64)(*v99 + 20);
        *((_QWORD *)&v178[0] + 1) = just::token::Token::lexeme(v121);
        *(_QWORD *)&v178[1] = v122;
        *(_QWORD *)&v178[0] = 0x800000000000001BLL;
        just::token::Token::error(&v135, v121, v178);
        *(_OWORD *)(a1 + 72) = v139;
        v123 = v135;
        v124 = v136;
        v125 = v137;
        *(_OWORD *)(a1 + 56) = v138;
        *(_OWORD *)(a1 + 40) = v125;
        *(_OWORD *)(a1 + 24) = v124;
        *(_OWORD *)(a1 + 8) = v123;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<alloc::sync::Arc<just::recipe::Recipe>>>(&v133);
        core::ptr::drop_in_place<std::path::PathBuf>(&v173);
LABEL_92:
        core::ptr::drop_in_place<just::table::Table<just::alias::Alias>>(&v171);
        core::ptr::drop_in_place<just::table::Table<alloc::sync::Arc<just::recipe::Recipe>>>(&v156);
      }
      v63 = 0;
      goto LABEL_64;
    }
    --v151;
    v17 = *(_QWORD **)(v150 + 8 * v16 - 8);
    <alloc::collections::btree::set::BTreeSet<T,A> as core::iter::traits::collect::Extend<&T>>::extend(&v163, v17 + 12);
    v18 = v17[2];
    if ( v18 )
      break;
LABEL_5:
    alloc::vec::Vec<T,A>::extend_trusted(a2 + 6, v17[8]);
  }
  v19 = v17[1];
  v20 = v18 << 8;
  v21 = 0LL;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v19 + v21) ^ 0x8000000000000000LL;
    if ( v22 >= 8 )
      v22 = 5LL;
    switch ( v22 )
    {
      case 0uLL:
        *(_QWORD *)&v139 = *(_QWORD *)(v19 + v21 + 96);
        v23 = *(_OWORD *)(v19 + v21 + 32);
        v24 = *(_OWORD *)(v19 + v21 + 48);
        v25 = *(_OWORD *)(v19 + v21 + 64);
        v138 = *(_OWORD *)(v19 + v21 + 80);
        v137 = v25;
        v136 = v24;
        v135 = v23;
        just::analyzer::Analyzer::define(v178, v168, &v135, aAlias_0, 5LL, 0LL);
        v26 = BYTE8(v178[4]);
        if ( BYTE8(v178[4]) != 37 )
          goto LABEL_34;
        <just::alias::Alias<T> as core::clone::Clone>::clone(v178, v19 + v21 + 8);
        just::table::Table<V>::insert(v153, v178);
        goto LABEL_10;
      case 1uLL:
        alloc::vec::Vec<T,A>::push(a2, v19 + v21 + 8);
        goto LABEL_10;
      case 2uLL:
        goto LABEL_10;
      case 3uLL:
        if ( *(_QWORD *)(v19 + v21 + 56) == 0x8000000000000000LL
          || (unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(v179, v19 + v21 + 56) )
        {
          goto LABEL_10;
        }
        v30 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a3, v19 + v21 + 56);
        if ( !v30 )
        {
          v126 = &off_42DA40;
          goto LABEL_96;
        }
        alloc::vec::Vec<T,A>::push(&v149, v30 + 24, &off_42DA58);
LABEL_10:
        v21 += 256LL;
        if ( v20 == v21 )
          goto LABEL_5;
        break;
      case 4uLL:
        if ( *(_QWORD *)(v19 + v21 + 32) == 0x8000000000000000LL )
          goto LABEL_10;
        *(_QWORD *)&v139 = *(_QWORD *)(v19 + v21 + 192);
        v27 = *(_OWORD *)(v19 + v21 + 128);
        v28 = *(_OWORD *)(v19 + v21 + 144);
        v29 = *(_OWORD *)(v19 + v21 + 160);
        v138 = *(_OWORD *)(v19 + v21 + 176);
        v137 = v29;
        v136 = v28;
        v135 = v27;
        just::analyzer::Analyzer::define(v178, v168, &v135, aModule, 6LL, 0LL);
        v26 = BYTE8(v178[4]);
        if ( BYTE8(v178[4]) != 37 )
          goto LABEL_34;
        if ( *(_QWORD *)(v19 + v21 + 56) == 0x8000000000000000LL )
        {
          *(_QWORD *)&v160 = 0x8000000000000000LL;
        }
        else
        {
          <alloc::string::String as core::clone::Clone>::clone(&v144, v19 + v21 + 56);
          v161 = v145;
          v160 = v144;
        }
        v35 = *(_QWORD *)(v19 + v21 + 16);
        v36 = *(_QWORD *)(v19 + v21 + 24);
        v148 = *(_QWORD *)(v19 + v21 + 192);
        v37 = *(_OWORD *)(v19 + v21 + 128);
        v38 = *(_OWORD *)(v19 + v21 + 144);
        v39 = *(_OWORD *)(v19 + v21 + 160);
        v147 = *(_OWORD *)(v19 + v21 + 176);
        v146 = v39;
        v145 = v38;
        v144 = v37;
        just::analyzer::Analyzer::analyze(
          (int)v178,
          a3,
          (int)&v160,
          v35,
          v36,
          a7,
          a8,
          (__int64)&v144,
          a10,
          *(_QWORD *)(v19 + v21 + 40),
          *(_QWORD *)(v19 + v21 + 48));
        v135 = *(_OWORD *)((char *)v178 + 8);
        v136 = *(_OWORD *)((char *)&v178[1] + 8);
        v137 = *(_OWORD *)((char *)&v178[2] + 8);
        v138 = *(_OWORD *)((char *)&v178[3] + 8);
        v139 = *(_OWORD *)((char *)&v178[4] + 8);
        if ( *(_QWORD *)&v178[0] != 0x8000000000000000LL )
        {
          memcpy(dest, (char *)&v178[5] + 8, sizeof(dest));
          v197 = *(_QWORD *)&v178[0];
          v202 = v139;
          v201 = v138;
          v200 = v137;
          v199 = v136;
          v198 = v135;
          just::table::Table<V>::insert(v134, &v197);
          goto LABEL_10;
        }
        v45 = a1;
        *(_OWORD *)(a1 + 72) = v139;
        v46 = v135;
        v47 = v136;
        v48 = v137;
        v49 = v138;
LABEL_44:
        *(_OWORD *)(v45 + 56) = v49;
        *(_OWORD *)(v45 + 40) = v48;
        *(_OWORD *)(v45 + 24) = v47;
        *(_OWORD *)(v45 + 8) = v46;
        *(_QWORD *)v45 = 0x8000000000000000LL;
LABEL_45:
        v62 = 1;
        v63 = 1;
LABEL_46:
        core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(v149, v150);
        core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<just::unstable_feature::UnstableFeature>>(&v163);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<&std::path::PathBuf>>(
          *(_QWORD *)&v179[0],
          *((_QWORD *)&v179[0] + 1));
        core::ptr::drop_in_place<std::collections::hash::map::HashMap<&str,(&str,just::name::Name)>>(
          *(_QWORD *)&v168[0],
          *((_QWORD *)&v168[0] + 1));
        core::ptr::drop_in_place<regex::error::Error>(v159);
        core::ptr::drop_in_place<just::table::Table<just::alias::Alias<just::namepath::Namepath>>>(v153);
        if ( v62 )
          core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(*a2, a2[1]);
        core::ptr::drop_in_place<just::table::Table<just::justfile::Justfile>>(v134);
        if ( v63 )
          core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(a2[3], a2[4]);
        if ( v62 )
          core::ptr::drop_in_place<just::table::Table<just::set::Set>>(v152);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(v143);
        return core::ptr::drop_in_place<alloc::vec::Vec<just::warning::Warning>>(a2[6], a2[7]);
      case 5uLL:
        if ( !(unsigned __int8)just::recipe::Recipe<D>::enabled(v19 + v21) )
          goto LABEL_10;
        just::analyzer::Analyzer::analyze_recipe(v178, v19 + v21);
        v26 = BYTE8(v178[4]);
        if ( BYTE8(v178[4]) != 37 )
        {
LABEL_34:
          *(_QWORD *)(a1 + 72) = *(_QWORD *)&v178[4];
          v40 = v178[0];
          v41 = v178[1];
          v42 = v178[2];
          *(_OWORD *)(a1 + 56) = v178[3];
          *(_OWORD *)(a1 + 40) = v42;
          *(_OWORD *)(a1 + 24) = v41;
          *(_OWORD *)(a1 + 8) = v40;
          v43 = HIDWORD(v178[4]);
          *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v178[4] + 9);
          *(_DWORD *)(a1 + 84) = v43;
          *(_BYTE *)(a1 + 80) = v26;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          goto LABEL_45;
        }
        alloc::vec::Vec<T,A>::push(v162, v19 + v21);
        goto LABEL_10;
      case 6uLL:
        just::analyzer::Analyzer::analyze_set(v178, a2[21], a2[22], v19 + v21 + 8);
        v26 = BYTE8(v178[4]);
        if ( BYTE8(v178[4]) != 37 )
          goto LABEL_34;
        v148 = *(_QWORD *)(v19 + v21 + 152);
        v32 = *(_OWORD *)(v19 + v21 + 88);
        v33 = *(_OWORD *)(v19 + v21 + 104);
        v34 = *(_OWORD *)(v19 + v21 + 120);
        v147 = *(_OWORD *)(v19 + v21 + 136);
        v146 = v34;
        v145 = v33;
        v144 = v32;
        <just::setting::Setting as core::clone::Clone>::clone(&v135, v19 + v21 + 8);
        *(_QWORD *)&v178[9] = v148;
        v178[8] = v147;
        v178[7] = v146;
        v178[6] = v145;
        v178[5] = v144;
        v178[0] = v135;
        v178[1] = v136;
        v178[2] = v137;
        v178[3] = v138;
        v178[4] = v139;
        just::table::Table<V>::insert(v152, v178);
        goto LABEL_10;
      case 7uLL:
        v31 = just::token::Token::lexeme(v19 + v21 + 8);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v178, v31);
        *(_QWORD *)&v136 = *(_QWORD *)&v178[1];
        v135 = v178[0];
        if ( !(unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(v143, &v135) )
          goto LABEL_10;
        *((_QWORD *)&v178[0] + 1) = just::token::Token::lexeme(v19 + v21 + 8);
        *(_QWORD *)&v178[1] = v44;
        *(_QWORD *)&v178[0] = 0x800000000000001ELL;
        just::token::Token::error(&v135, v19 + v21 + 8, v178);
        v45 = a1;
        *(_OWORD *)(a1 + 72) = v139;
        v46 = v135;
        v47 = v136;
        v48 = v137;
        v49 = v138;
        goto LABEL_44;
    }
  }
}