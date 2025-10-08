__int64 __fastcall just::subcommand::Subcommand::list_module(__int64 a1, _QWORD *a2, __int128 *a3)
{
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  _BOOL8 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  _QWORD *v17; // rdx
  _QWORD *v18; // r14
  _QWORD *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *i; // rax
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // al
  __int64 v32; // rdx
  __int128 *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rdx
  unsigned __int8 v37; // dl
  __int64 v38; // rax
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r13
  __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v59; // r12
  char v60; // bl
  int v61; // r14d
  __int64 v62; // rdx
  int v63; // ecx
  char v64; // dl
  __int64 v65; // rax
  __int64 v66; // rcx
  __int128 *v67; // rdx
  __int128 *v68; // rax
  __int128 *v69; // r14
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 *v77; // rdx
  __int64 *v78; // r13
  __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r15
  __int64 v85; // r14
  int v86; // eax
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 v90; // r13
  int v91; // ebx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 *v100; // rdx
  __int64 *v101; // r13
  __int128 v102; // rax
  __int64 *v103; // rdx
  __int128 v104; // kr10_16
  __int128 v105; // rax
  int v106; // eax
  int v107; // edx
  __int64 v108; // r8
  __int64 v109; // rsi
  __int64 v110; // rcx
  __int64 *v111; // rdx
  char v112; // [rsp+2Eh] [rbp-32Ah]
  char v113; // [rsp+2Fh] [rbp-329h]
  __int128 v114; // [rsp+30h] [rbp-328h] BYREF
  _BYTE v115[24]; // [rsp+40h] [rbp-318h] BYREF
  __int64 v116; // [rsp+58h] [rbp-300h]
  __int128 v117; // [rsp+60h] [rbp-2F8h]
  __int64 v118; // [rsp+70h] [rbp-2E8h]
  __int128 *v119; // [rsp+78h] [rbp-2E0h]
  _QWORD *v120; // [rsp+80h] [rbp-2D8h]
  __int64 v121; // [rsp+88h] [rbp-2D0h]
  _BYTE v122[40]; // [rsp+90h] [rbp-2C8h] BYREF
  __int64 (__fastcall *v123)(); // [rsp+B8h] [rbp-2A0h]
  _BYTE v124[24]; // [rsp+D0h] [rbp-288h] BYREF
  __int64 v125; // [rsp+E8h] [rbp-270h]
  int v126; // [rsp+F0h] [rbp-268h]
  int v127; // [rsp+F4h] [rbp-264h]
  int v128; // [rsp+FCh] [rbp-25Ch]
  __int128 v129; // [rsp+100h] [rbp-258h] BYREF
  _BYTE *v130; // [rsp+110h] [rbp-248h] BYREF
  __int64 (__fastcall *v131)(); // [rsp+118h] [rbp-240h]
  __int64 v132; // [rsp+120h] [rbp-238h]
  __int64 v133; // [rsp+130h] [rbp-228h]
  __int128 v134; // [rsp+138h] [rbp-220h] BYREF
  __int64 v135; // [rsp+148h] [rbp-210h]
  __int64 v136; // [rsp+150h] [rbp-208h]
  int v137; // [rsp+158h] [rbp-200h]
  int v138; // [rsp+15Ch] [rbp-1FCh]
  __int128 v139; // [rsp+160h] [rbp-1F8h] BYREF
  _BYTE *v140; // [rsp+170h] [rbp-1E8h]
  __int64 v141; // [rsp+180h] [rbp-1D8h]
  __int128 *v142; // [rsp+188h] [rbp-1D0h]
  __int128 v143; // [rsp+190h] [rbp-1C8h] BYREF
  __int64 v144; // [rsp+1A0h] [rbp-1B8h]
  __int128 v145; // [rsp+1B0h] [rbp-1A8h] BYREF
  __int64 v146; // [rsp+1C0h] [rbp-198h]
  __int128 v147; // [rsp+1D0h] [rbp-188h] BYREF
  __int64 v148; // [rsp+1E0h] [rbp-178h]
  __int128 v149; // [rsp+1F0h] [rbp-168h] BYREF
  __int64 v150; // [rsp+200h] [rbp-158h]
  __int128 v151; // [rsp+210h] [rbp-148h] BYREF
  __int64 v152; // [rsp+220h] [rbp-138h]
  __int128 v153; // [rsp+230h] [rbp-128h] BYREF
  __int64 v154; // [rsp+240h] [rbp-118h]
  char *v155; // [rsp+250h] [rbp-108h]
  __int128 *v156; // [rsp+258h] [rbp-100h]
  char v157[8]; // [rsp+260h] [rbp-F8h] BYREF
  _QWORD *v158; // [rsp+268h] [rbp-F0h]
  __int64 v159; // [rsp+270h] [rbp-E8h]
  __int128 v160; // [rsp+278h] [rbp-E0h] BYREF
  __int64 v161; // [rsp+288h] [rbp-D0h]
  __int64 v162; // [rsp+298h] [rbp-C0h]
  _BYTE v163[16]; // [rsp+2A0h] [rbp-B8h] BYREF
  __int64 v164; // [rsp+2B0h] [rbp-A8h]
  __int64 v165; // [rsp+2B8h] [rbp-A0h] BYREF
  __int128 v166; // [rsp+2C0h] [rbp-98h]
  __int64 v167; // [rsp+2D0h] [rbp-88h]
  _QWORD v168[2]; // [rsp+2D8h] [rbp-80h] BYREF
  _BYTE v169[32]; // [rsp+2E8h] [rbp-70h] BYREF
  __int64 v170; // [rsp+308h] [rbp-50h]
  __int128 v171; // [rsp+310h] [rbp-48h] BYREF
  __int64 v172; // [rsp+320h] [rbp-38h]

  v121 = a1;
  v3 = *(_BYTE *)(a1 + 414) == 0;
  v120 = a2;
  v142 = a3;
  if ( v3 )
  {
    *(_QWORD *)&v129 = 0LL;
    v130 = 0LL;
    v4 = a2[77];
    v5 = a2[78];
    v6 = v4;
    v7 = v4 != 0;
    if ( v4 )
      v6 = v120[79];
    v114 = v4 != 0;
    *(_QWORD *)v115 = v4;
    *(_QWORD *)&v115[8] = v5;
    *(_QWORD *)&v115[16] = v4 != 0;
    v116 = 0LL;
    *(_QWORD *)&v117 = v4;
    *((_QWORD *)&v117 + 1) = v5;
    v118 = v6;
    while ( 1 )
    {
      v8 = core::iter::traits::iterator::Iterator::try_fold(&v114, v6, v7);
      v9 = v8;
      if ( !v8 )
        break;
      v10 = just::token::Token::lexeme(*(_QWORD *)(v8 + 24) + 160LL);
      alloc::collections::btree::map::BTreeMap<K,V,A>::entry(v122, &v129, v10, v11);
      v12 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(v122);
      v6 = just::token::Token::lexeme(v9 + 32);
      alloc::vec::Vec<T,A>::push(v12, v6, v13, &off_4312F0);
    }
    v139 = v129;
    v140 = v130;
    v133 = *((_QWORD *)&v129 + 1);
    v119 = (__int128 *)v129;
    a2 = v120;
  }
  else
  {
    *(_QWORD *)&v139 = 0LL;
    v140 = 0LL;
    v119 = 0LL;
  }
  *(_QWORD *)&v160 = 0LL;
  v161 = 0LL;
  v14 = a2[87];
  v15 = a2[88];
  v16 = v14;
  if ( v14 )
    v16 = v120[89];
  v114 = v14 != 0;
  *(_QWORD *)v115 = v14;
  *(_QWORD *)&v115[8] = v15;
  *(_QWORD *)&v115[16] = v14 != 0;
  v116 = 0LL;
  *(_QWORD *)&v117 = v14;
  *((_QWORD *)&v117 + 1) = v15;
  v118 = v16;
  while ( 1 )
  {
    v18 = (_QWORD *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v114);
    if ( !v18 )
      break;
    v19 = v17;
    if ( !*(_BYTE *)(*v17 + 268LL)
      && !(unsigned __int8)just::attribute_set::AttributeSet::contains((__int64 *)(*v17 + 232LL), 15) )
    {
      v20 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v119, v133, *v18, v18[1]);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8);
        v22 = *(_QWORD *)(v20 + 16);
      }
      else
      {
        v21 = 8LL;
        v22 = 0LL;
      }
      core::iter::traits::iterator::Iterator::chain(&v129, v18, v21, v22);
      v23 = core::iter::adapters::chain::and_then_or_clear(&v129);
      for ( i = (__int64 *)core::option::Option<T>::or_else(v23, &v130);
            i;
            i = (__int64 *)core::option::Option<T>::or_else(v29, &v130) )
      {
        v25 = *i;
        v26 = i[1];
        v27 = *v19 + 16LL;
        *(_QWORD *)v124 = v25;
        *(_QWORD *)&v124[8] = v26;
        *(_QWORD *)&v124[16] = v27;
        *(_QWORD *)v122 = v124;
        *(_QWORD *)&v122[8] = &unk_431320;
        v122[24] = 0;
        *(_QWORD *)&v122[16] = 0LL;
        *(_QWORD *)&v122[25] = 0xA0000000ALL;
        v122[33] = 2;
        <T as alloc::string::SpecToString>::spec_to_string(&v134, v122);
        v28 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(
                *((_QWORD *)&v134 + 1),
                *((_QWORD *)&v134 + 1) + v135);
        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v160, v25, v26, v28);
        core::ptr::drop_in_place<alloc::string::String>(&v134);
        v29 = core::iter::adapters::chain::and_then_or_clear(&v129);
      }
      core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
        0LL,
        8LL);
    }
  }
  v112 = *(_BYTE *)(v121 + 412);
  if ( !v112 )
  {
    v50 = v120[84];
    v51 = v120[85];
    v52 = v50;
    if ( v50 )
      v52 = v120[86];
    v114 = v50 != 0;
    *(_QWORD *)v115 = v50;
    *(_QWORD *)&v115[8] = v51;
    *(_QWORD *)&v115[16] = v50 != 0;
    v116 = 0LL;
    *(_QWORD *)&v117 = v50;
    *((_QWORD *)&v117 + 1) = v51;
    v118 = v52;
    while ( 1 )
    {
      v53 = (__int64 *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v114);
      if ( !v53 )
        break;
      *(_QWORD *)&v134 = v53;
      v55 = *v53;
      v56 = v53[1];
      *(_QWORD *)v124 = &v134;
      *(_QWORD *)&v124[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v122 = &unk_431210;
      *(_QWORD *)&v122[8] = 2LL;
      *(_QWORD *)&v122[32] = 0LL;
      *(_QWORD *)&v122[16] = v124;
      *(_QWORD *)&v122[24] = 1LL;
      core::option::Option<T>::map_or_else(&v129, 0LL, v54, v122);
      *(_OWORD *)v122 = v129;
      *(_QWORD *)&v122[16] = v130;
      v57 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(
              *((_QWORD *)&v129 + 1),
              &v130[*((_QWORD *)&v129 + 1)]);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v160, v55, v56, v57);
      core::ptr::drop_in_place<alloc::string::String>(v122);
    }
  }
  v30 = v161;
  v146 = v161;
  v145 = v160;
  if ( !(_QWORD)v160 )
    v30 = 0LL;
  v114 = (_QWORD)v160 != 0LL;
  *(_OWORD *)v115 = v160;
  *(_QWORD *)&v115[16] = v160 != 0;
  v116 = 0LL;
  v117 = v160;
  v118 = v30;
  v31 = core::iter::traits::iterator::Iterator::reduce(&v114);
  v33 = v142;
  v34 = 0LL;
  if ( (v31 & 1) != 0 )
    v34 = v32;
  v133 = v34;
  v35 = *(_QWORD *)(v121 + 80);
  v36 = *(_QWORD *)(v121 + 88);
  v155 = (char *)v142 + 1;
  alloc::slice::<impl [T]>::repeat(&v114, v35, v36);
  v148 = *(_QWORD *)v115;
  v147 = v114;
  if ( !v33 )
  {
    *(_QWORD *)v122 = v121 + 48;
    *(_QWORD *)&v122[8] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v114 = asc_65DB0;
    *((_QWORD *)&v114 + 1) = 1LL;
    *(_QWORD *)v115 = v122;
    *(_OWORD *)&v115[8] = 1uLL;
    std::io::stdio::_print(&v114);
  }
  *(_QWORD *)&v134 = 0LL;
  v135 = 0LL;
  v37 = *(_BYTE *)(v121 + 419);
  LODWORD(v119) = v37;
  just::justfile::Justfile::public_recipes((__int64)&v114, v120, v37);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v129, &v114);
  v38 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v129);
  if ( v38 )
  {
    v39 = (_QWORD *)v38;
    do
    {
      just::recipe::Recipe<D>::groups((__int64)v163, v39);
      if ( v164 )
      {
        <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(
          &v114,
          v163);
        while ( 1 )
        {
          <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(v122, &v114);
          if ( *(_QWORD *)v122 == 0x8000000000000000LL )
            break;
          *(_OWORD *)&v124[8] = *(_OWORD *)&v122[8];
          *(_QWORD *)v124 = *(_QWORD *)v122;
          alloc::collections::btree::map::BTreeMap<K,V,A>::entry(v122, &v134, v124);
          v41 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(v122);
          alloc::vec::Vec<T,A>::push(v41, v39, &off_431388);
        }
        core::ptr::drop_in_place<alloc::collections::btree::set::IntoIter<alloc::string::String>>(
          &v114,
          &v114,
          v40,
          0x8000000000000000LL);
      }
      else
      {
        *(_QWORD *)v122 = 0x8000000000000000LL;
        alloc::collections::btree::map::BTreeMap<K,V,A>::entry(&v114, &v134, v122);
        v42 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&v114);
        alloc::vec::Vec<T,A>::push(v42, v39, &off_431370);
        core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::string::String>>(v163);
      }
      v39 = (_QWORD *)<alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v129);
    }
    while ( v39 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(&v129);
  v149 = v134;
  v150 = v135;
  *(_QWORD *)v124 = 0LL;
  *(_QWORD *)&v124[16] = 0LL;
  just::justfile::Justfile::modules((__int64)&v114, v120, (char)v119);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v122, &v114);
  v43 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v122);
  if ( v43 )
  {
    v44 = v43;
    do
    {
      v45 = *(_QWORD *)(v44 + 16);
      if ( v45 )
      {
        v46 = *(_QWORD *)(v44 + 8);
        v47 = v46 + 24 * v45;
        while ( v46 != v47 )
        {
          <alloc::string::String as core::clone::Clone>::clone(&v114, v46);
          v130 = *(_BYTE **)v115;
          v129 = v114;
          alloc::collections::btree::map::BTreeMap<K,V,A>::entry(&v114, v124, &v129);
          v48 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&v114);
          alloc::vec::Vec<T,A>::push(v48, v44, &off_431358);
          v46 += 24LL;
        }
      }
      else
      {
        *(_QWORD *)&v129 = 0x8000000000000000LL;
        alloc::collections::btree::map::BTreeMap<K,V,A>::entry(&v114, v124, &v129);
        v49 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(&v114);
        alloc::vec::Vec<T,A>::push(v49, v44, &off_431340);
      }
      v44 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v122);
    }
    while ( v44 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(v122);
  v151 = *(_OWORD *)v124;
  v152 = *(_QWORD *)&v124[16];
  just::justfile::Justfile::public_groups((__int64)v122, v120, (char)v119);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v114, v122);
  core::iter::traits::iterator::Iterator::collect(v157, &v114);
  if ( alloc::collections::btree::map::BTreeMap<K,V,A>::get(v149, *((_QWORD *)&v149 + 1), &unk_9E600)
    || alloc::collections::btree::map::BTreeMap<K,V,A>::get(v151, *((_QWORD *)&v151 + 1), &unk_9E600) )
  {
    *(_QWORD *)&v114 = 0x8000000000000000LL;
    alloc::vec::Vec<T,A>::insert(v157, &v114);
  }
  v141 = v159;
  if ( v159 == 1 )
  {
    v128 = <core::option::Option<T> as core::cmp::PartialEq>::eq(*v158);
    v141 = (unsigned __int8)v128 ^ 1u;
  }
  else
  {
    v128 = 0;
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v169, v157);
  v170 = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v165, v169);
  v120 = (_QWORD *)0x8000000000000001LL;
  if ( (_QWORD)v166 != 0x8000000000000001LL )
  {
    v59 = v121 + 388;
    v113 = *(_BYTE *)(v121 + 422);
    v141 = -v141;
    while ( 1 )
    {
      v154 = v167;
      v153 = v166;
      if ( v165 )
      {
        *(_QWORD *)&v114 = &off_42DBF8;
        *((_QWORD *)&v114 + 1) = 1LL;
        *(_QWORD *)v115 = 8LL;
        *(_OWORD *)&v115[8] = 0LL;
        std::io::stdio::_print(&v114);
      }
      if ( !((unsigned __int8)v128 | ((_QWORD)v153 == 0x8000000000000000LL)) )
      {
        *(_QWORD *)&v134 = &v153;
        just::color::Color::stdout((__int64)&v114, v59);
        v60 = v114;
        v61 = v115[1];
        *(_QWORD *)v124 = &v134;
        *(_QWORD *)&v124[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v114 = &off_430E00;
        *((_QWORD *)&v114 + 1) = 2LL;
        *(_QWORD *)v115 = v124;
        *(_OWORD *)&v115[8] = 1uLL;
        core::option::Option<T>::map_or_else(&v129, 0LL, v62, &v114);
        *(_OWORD *)v124 = v129;
        *(_QWORD *)&v124[16] = v130;
        v63 = 3;
        v64 = 1;
        if ( v61 && (v61 != 1 || !v60) )
        {
          v63 = 10;
          v64 = 0;
        }
        v122[24] = v64;
        *(_DWORD *)&v122[28] = 0;
        *(_DWORD *)&v122[25] = 0;
        *(_DWORD *)&v122[32] = v63;
        *(_DWORD *)&v122[36] = 10;
        *(_QWORD *)v122 = 0x8000000000000000LL;
        *(_QWORD *)&v122[8] = *(_QWORD *)&v124[8];
        *(_QWORD *)&v122[16] = v130;
        *(_QWORD *)&v129 = &v147;
        *((_QWORD *)&v129 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v130 = v122;
        v131 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
        *(_QWORD *)&v114 = &unk_431060;
        *((_QWORD *)&v114 + 1) = 3LL;
        *(_QWORD *)v115 = &v129;
        *(_OWORD *)&v115[8] = 2uLL;
        std::io::stdio::_print(&v114);
        core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(v122);
        core::ptr::drop_in_place<alloc::string::String>(v124);
      }
      v65 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v149, *((_QWORD *)&v149 + 1), &v153);
      if ( v65 )
      {
        v66 = *(_QWORD *)(v65 + 16);
        if ( v66 )
          break;
      }
LABEL_111:
      v96 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v151, *((_QWORD *)&v151 + 1), &v153);
      if ( v96 )
      {
        v97 = *(_QWORD *)(v96 + 8);
        v98 = v97 + 8LL * *(_QWORD *)(v96 + 16);
        *(_QWORD *)&v129 = v97;
        *((_QWORD *)&v129 + 1) = v98;
        v130 = 0LL;
        v99 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v129);
        if ( v100 )
        {
          v101 = v100;
          if ( v112 )
          {
            do
            {
              if ( ((unsigned __int8)v128 & (v99 != v141)) == 1 )
              {
                *(_QWORD *)&v114 = &off_42DBF8;
                *((_QWORD *)&v114 + 1) = 1LL;
                *(_QWORD *)v115 = 8LL;
                *(_OWORD *)&v115[8] = 0LL;
                std::io::stdio::_print(&v114);
              }
              *(_QWORD *)&v102 = just::justfile::Justfile::name(*v101);
              *(_OWORD *)v124 = v102;
              *(_QWORD *)v122 = &v147;
              *(_QWORD *)&v122[8] = <alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)&v122[16] = v124;
              *(_QWORD *)&v122[24] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v114 = &unk_431290;
              *((_QWORD *)&v114 + 1) = 3LL;
              *(_QWORD *)v115 = v122;
              *(_OWORD *)&v115[8] = 2uLL;
              std::io::stdio::_print(&v114);
              just::subcommand::Subcommand::list_module(v121, *v101, v155);
              v99 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v129);
              v101 = v103;
            }
            while ( v103 );
          }
          else
          {
            v104 = v145;
            do
            {
              *(_QWORD *)&v105 = just::justfile::Justfile::name(*v101);
              *(_OWORD *)v124 = v105;
              *(_QWORD *)v122 = &v147;
              *(_QWORD *)&v122[8] = <alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)&v122[16] = v124;
              *(_QWORD *)&v122[24] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v114 = &unk_4312C0;
              *((_QWORD *)&v114 + 1) = 3LL;
              *(_QWORD *)v115 = v122;
              *(_OWORD *)&v115[8] = 2uLL;
              std::io::stdio::_print(&v114);
              v106 = just::justfile::Justfile::name(*v101);
              v109 = *v101;
              if ( *(_QWORD *)(*v101 + 144) == 0x8000000000000000LL )
              {
                LODWORD(v110) = 0;
              }
              else
              {
                v110 = *(_QWORD *)(v109 + 152);
                v108 = *(_QWORD *)(v109 + 160);
              }
              just::subcommand::Subcommand::list_module::print_doc_and_aliases(
                v121,
                v106,
                v107,
                v110,
                v108,
                8,
                0LL,
                v133,
                v104,
                *((__int64 *)&v104 + 1));
              <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v129);
              v101 = v111;
            }
            while ( v111 );
          }
        }
      }
      core::ptr::drop_in_place<regex::error::Error>(&v153);
      <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v165, v169);
      if ( (_QWORD *)v166 == v120 )
        goto LABEL_58;
    }
    v67 = *(__int128 **)(v65 + 8);
    v156 = (__int128 *)((char *)v67 + 8 * v66);
    v119 = v67;
    v68 = (__int128 *)((char *)v67 + 8);
    while ( 1 )
    {
      v69 = v68;
      if ( v113 == 2 )
      {
        v70 = just::token::Token::lexeme(*(_QWORD *)v119 + 144LL);
        v72 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v139, *((_QWORD *)&v139 + 1), v70, v71);
      }
      else
      {
        v72 = 0LL;
      }
      v168[0] = just::token::Token::lexeme(*(_QWORD *)v119 + 144LL);
      v168[1] = v73;
      v142 = v69;
      if ( v72 )
      {
        v74 = *(_QWORD *)(v72 + 8);
        v75 = *(_QWORD *)(v72 + 16);
      }
      else
      {
        v74 = 8LL;
        v75 = 0LL;
      }
      core::iter::traits::iterator::Iterator::chain(&v160, v168, v74, v75);
      v162 = 0LL;
      v76 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v160);
      if ( v77 )
        break;
LABEL_72:
      core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
        0LL,
        8LL);
      v119 = v142;
      v68 = (__int128 *)((char *)v142 + 8 * (v142 != v156));
      if ( v142 == v156 )
        goto LABEL_111;
    }
    v78 = v77;
    while ( 1 )
    {
      if ( v76 )
      {
        *(_QWORD *)v122 = *(_QWORD *)v119 + 144LL;
        *(_QWORD *)&v122[8] = <just::name::Name as core::fmt::Display>::fmt;
        *(_QWORD *)&v114 = &off_431230;
        *((_QWORD *)&v114 + 1) = 2LL;
        *(_QWORD *)v115 = v122;
        *(_OWORD *)&v115[8] = 1uLL;
        core::option::Option<T>::map_or_else(&v171, 0LL, v77, &v114);
        v143 = v171;
        v144 = v172;
        if ( (_QWORD *)v171 != v120 )
        {
          v69 = (__int128 *)*((_QWORD *)&v143 + 1);
          v79 = v144;
          goto LABEL_86;
        }
      }
      else
      {
        v69 = (__int128 *)just::recipe::Recipe<D>::doc(*(_QWORD **)v119);
        if ( v69 )
        {
          v79 = v80;
          *(_QWORD *)&v143 = 0x8000000000000000LL;
          *((_QWORD *)&v143 + 1) = v69;
          v144 = v80;
LABEL_86:
          <char as core::str::pattern::Pattern>::into_searcher(v115, 10LL, v69, v79);
          *(_QWORD *)&v114 = 0LL;
          *((_QWORD *)&v114 + 1) = v79;
          LOWORD(v118) = 0;
          if ( (unsigned __int64)core::iter::traits::iterator::Iterator::fold(&v114) >= 2 )
          {
            <char as core::str::pattern::Pattern>::into_searcher(v115, 10LL, v69, v79);
            *(_QWORD *)&v114 = 0LL;
            *((_QWORD *)&v114 + 1) = v79;
            LOWORD(v118) = 0;
            while ( 1 )
            {
              v81 = core::str::iter::SplitInternal<P>::next_inclusive(&v114);
              if ( !v81 )
                break;
              v84 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v81, v82);
              if ( !v84 )
                break;
              v85 = v83;
              just::color::Color::stdout((__int64)v122, v59);
              v86 = 4;
              if ( v122[17] && (v122[17] == 2 || !v122[0]) )
                v86 = 10;
              v136 = 0LL;
              v137 = v86;
              v138 = 10;
              *(_QWORD *)&v134 = 0x8000000000000000LL;
              *((_QWORD *)&v134 + 1) = asc_6BFED;
              v135 = 1LL;
              just::color::Color::stdout((__int64)v122, v59);
              v87 = 4;
              if ( v122[17] && (v122[17] == 2 || !v122[0]) )
                v87 = 10;
              v125 = 0LL;
              v126 = v87;
              v127 = 10;
              *(_QWORD *)v124 = 0x8000000000000000LL;
              *(_QWORD *)&v124[8] = v84;
              *(_QWORD *)&v124[16] = v85;
              *(_QWORD *)v122 = &v147;
              *(_QWORD *)&v122[8] = <alloc::string::String as core::fmt::Display>::fmt;
              v69 = &v134;
              *(_QWORD *)&v122[16] = &v134;
              *(_QWORD *)&v122[24] = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
              *(_QWORD *)&v122[32] = v124;
              v123 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
              *(_QWORD *)&v129 = &unk_431250;
              *((_QWORD *)&v129 + 1) = 4LL;
              v132 = 0LL;
              v130 = v122;
              v131 = (__int64 (__fastcall *)())(&dword_0 + 3);
              std::io::stdio::_print(&v129);
              core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(v124);
              core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v134);
            }
          }
          goto LABEL_100;
        }
        *(_QWORD *)&v143 = v120;
      }
LABEL_100:
      v88 = *(_QWORD *)v119;
      *(_OWORD *)v124 = *(_OWORD *)v78;
      *(_QWORD *)&v124[16] = v88;
      just::color::Color::stdout((__int64)&v114, v59);
      *(_QWORD *)v122 = v124;
      *(_QWORD *)&v122[8] = &unk_431320;
      *(_WORD *)&v122[32] = *(_WORD *)v115;
      *(_OWORD *)&v122[16] = v114;
      *(_QWORD *)&v129 = &v147;
      *((_QWORD *)&v129 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v130 = v122;
      v131 = <just::color_display::Wrapper as core::fmt::Display>::fmt;
      *(_QWORD *)&v114 = "\x01";
      *((_QWORD *)&v114 + 1) = 2LL;
      *(_QWORD *)v115 = &v129;
      *(_OWORD *)&v115[8] = 2uLL;
      std::io::stdio::_print(&v114);
      v89 = *v78;
      v90 = v78[1];
      core::option::Option<T>::filter(&v114, &v143);
      if ( __OFSUB__(-(__int64)v114, 1LL) || (_QWORD)v114 != 0x8000000000000001LL )
      {
        v91 = DWORD2(v114);
        LODWORD(v69) = *(_DWORD *)v115;
      }
      else
      {
        v91 = 0;
      }
      v92 = just::token::Token::lexeme(*(_QWORD *)v119 + 144LL);
      v94 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v139, *((_QWORD *)&v139 + 1), v92, v93);
      if ( v94 )
      {
        v95 = *(_QWORD *)(v94 + 8);
        v94 = *(_QWORD *)(v94 + 16);
      }
      else
      {
        v95 = 0LL;
      }
      if ( !v95 )
      {
        v94 = 0LL;
        LODWORD(v95) = 8;
      }
      just::subcommand::Subcommand::list_module::print_doc_and_aliases(
        v121,
        v89,
        v90,
        v91,
        (_DWORD)v69,
        v95,
        v94,
        v133,
        v145,
        *((__int64 *)&v145 + 1));
      core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<str>>>(&v114);
      v76 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v160);
      v78 = v77;
      if ( !v77 )
        goto LABEL_72;
    }
  }
LABEL_58:
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::option::Option<alloc::string::String>>>>(v169);
  core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<core::option::Option<alloc::string::String>,alloc::vec::Vec<&just::recipe::Recipe>>>(&v151);
  core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<core::option::Option<alloc::string::String>,alloc::vec::Vec<&just::recipe::Recipe>>>(&v149);
  core::ptr::drop_in_place<alloc::string::String>(&v147);
  core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<&str,usize>>(&v145);
  return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<&str,alloc::vec::Vec<&str>>>(&v139);
}