        __int64 a8)
{
  __int64 v8; // r15
  const void *v9; // r13
  size_t v10; // r12
  void *v11; // rbp
  void *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdx
  char *v15; // r13
  char *v16; // r12
  __int64 v17; // rbx
  bool v18; // bp
  const void *v19; // rbx
  void *v20; // r15
  const void *v21; // rax
  size_t v22; // rdx
  void *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r15
  const void *v27; // rbp
  void *v28; // r13
  void *v29; // rbx
  void *v30; // r15
  const void *v31; // r13
  size_t v32; // rbp
  void *v33; // r15
  __int64 v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r15
  char v38; // al
  unsigned __int64 v39; // rbx
  _BYTE *v40; // r12
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 *v44; // rbx
  unsigned __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  bool v51; // cf
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rtt
  __int64 v55; // rax
  _OWORD *v56; // rax
  __int128 v57; // xmm0
  void *v58; // rax
  _OWORD *v59; // rax
  __int128 v60; // xmm0
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rbx
  __int64 v66; // r13
  __int64 v67; // rax
  void *v68; // r15
  const void *v69; // r13
  size_t v70; // rbx
  void *v71; // rbp
  void *v72; // r12
  char v73; // al
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // r14
  __int64 v78; // rax
  const void *v79; // r13
  size_t v80; // rbx
  void *v81; // r14
  void *v82; // rbp
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // r14
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rbx
  __int64 v90; // rbx
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v97; // [rsp+18h] [rbp-BD0h] BYREF
  void *v98; // [rsp+20h] [rbp-BC8h]
  unsigned __int64 v99; // [rsp+28h] [rbp-BC0h]
  __int128 v100; // [rsp+30h] [rbp-BB8h] BYREF
  signed __int64 v101; // [rsp+40h] [rbp-BA8h] BYREF
  char **v102; // [rsp+48h] [rbp-BA0h]
  volatile signed __int64 *v103; // [rsp+50h] [rbp-B98h] BYREF
  char v104; // [rsp+58h] [rbp-B90h]
  volatile signed __int64 *v105; // [rsp+60h] [rbp-B88h] BYREF
  char v106; // [rsp+68h] [rbp-B80h]
  void *s2[2]; // [rsp+70h] [rbp-B78h] BYREF
  void *dest[2]; // [rsp+80h] [rbp-B68h] BYREF
  __int64 v109; // [rsp+90h] [rbp-B58h]
  __int64 v110; // [rsp+108h] [rbp-AE0h]
  _QWORD *v111; // [rsp+110h] [rbp-AD8h]
  void *v112; // [rsp+118h] [rbp-AD0h] BYREF
  void *v113[2]; // [rsp+120h] [rbp-AC8h] BYREF
  size_t n; // [rsp+130h] [rbp-AB8h] BYREF
  __int128 v115; // [rsp+138h] [rbp-AB0h] BYREF
  __int128 v116; // [rsp+148h] [rbp-AA0h]
  __int64 v117; // [rsp+158h] [rbp-A90h]
  volatile signed __int64 *v118; // [rsp+160h] [rbp-A88h]
  char v119; // [rsp+168h] [rbp-A80h]
  __int64 v120; // [rsp+170h] [rbp-A78h]
  void **v121; // [rsp+178h] [rbp-A70h] BYREF
  __int64 (__fastcall *v122)(); // [rsp+180h] [rbp-A68h]
  _QWORD v123[2]; // [rsp+188h] [rbp-A60h] BYREF
  __int128 v124; // [rsp+198h] [rbp-A50h] BYREF
  signed __int64 v125; // [rsp+1A8h] [rbp-A40h] BYREF
  char v126[8]; // [rsp+1B0h] [rbp-A38h] BYREF
  __int64 v127; // [rsp+1B8h] [rbp-A30h]
  __int64 v128; // [rsp+1C0h] [rbp-A28h] BYREF
  _QWORD v129[2]; // [rsp+1C8h] [rbp-A20h] BYREF
  __int64 v130; // [rsp+1D8h] [rbp-A10h] BYREF
  _QWORD v131[3]; // [rsp+1E0h] [rbp-A08h] BYREF
  void *v132; // [rsp+1F8h] [rbp-9F0h] BYREF
  __int128 v133; // [rsp+200h] [rbp-9E8h] BYREF
  size_t v134; // [rsp+210h] [rbp-9D8h]
  _QWORD v135[2]; // [rsp+218h] [rbp-9D0h] BYREF
  _QWORD v136[2]; // [rsp+228h] [rbp-9C0h] BYREF
  _QWORD v137[2]; // [rsp+238h] [rbp-9B0h] BYREF
  _QWORD v138[2]; // [rsp+248h] [rbp-9A0h] BYREF
  _QWORD v139[2]; // [rsp+258h] [rbp-990h] BYREF
  _QWORD v140[4]; // [rsp+268h] [rbp-980h] BYREF
  _QWORD v141[4]; // [rsp+288h] [rbp-960h] BYREF
  _QWORD v142[4]; // [rsp+2A8h] [rbp-940h] BYREF
  _BYTE v143[8]; // [rsp+2C8h] [rbp-920h] BYREF
  void *v144; // [rsp+2D0h] [rbp-918h]
  void *v145; // [rsp+2D8h] [rbp-910h]
  void *v146; // [rsp+2E0h] [rbp-908h]
  size_t v147; // [rsp+2E8h] [rbp-900h]
  __int128 v148; // [rsp+300h] [rbp-8E8h] BYREF
  void *v149; // [rsp+310h] [rbp-8D8h]
  __int128 v150; // [rsp+320h] [rbp-8C8h] BYREF
  void *v151; // [rsp+330h] [rbp-8B8h]
  __int128 v152; // [rsp+340h] [rbp-8A8h] BYREF
  _QWORD v153[6]; // [rsp+358h] [rbp-890h] BYREF
  _QWORD v154[6]; // [rsp+388h] [rbp-860h] BYREF
  _QWORD v155[6]; // [rsp+3B8h] [rbp-830h] BYREF
  _QWORD v156[6]; // [rsp+3E8h] [rbp-800h] BYREF
  char v157[8]; // [rsp+418h] [rbp-7D0h] BYREF
  void *v158; // [rsp+420h] [rbp-7C8h]
  void *v159; // [rsp+428h] [rbp-7C0h]
  size_t v160; // [rsp+430h] [rbp-7B8h]
  __int64 v161; // [rsp+450h] [rbp-798h] BYREF
  __int128 v162; // [rsp+458h] [rbp-790h]
  __int128 v163; // [rsp+468h] [rbp-780h]
  __int64 v164; // [rsp+478h] [rbp-770h]
  _QWORD v165[3]; // [rsp+480h] [rbp-768h] BYREF
  __int128 v166; // [rsp+498h] [rbp-750h]
  _QWORD v167[3]; // [rsp+4B0h] [rbp-738h] BYREF
  __int128 v168; // [rsp+4C8h] [rbp-720h]
  __int64 v169[6]; // [rsp+4E0h] [rbp-708h] BYREF
  __int64 v170[6]; // [rsp+510h] [rbp-6D8h] BYREF
  __int128 v171; // [rsp+540h] [rbp-6A8h] BYREF
  __int64 v172[3]; // [rsp+558h] [rbp-690h] BYREF
  char v173; // [rsp+570h] [rbp-678h] BYREF
  __int64 v174; // [rsp+578h] [rbp-670h]
  __int64 v175; // [rsp+5A8h] [rbp-640h] BYREF
  __int128 v176; // [rsp+5B0h] [rbp-638h]
  __int128 v177; // [rsp+5C0h] [rbp-628h]
  __int64 v178; // [rsp+5D0h] [rbp-618h]
  __int64 v179; // [rsp+5D8h] [rbp-610h] BYREF
  __int64 v180; // [rsp+5E0h] [rbp-608h]
  _BYTE v181[136]; // [rsp+5E8h] [rbp-600h] BYREF
  __int64 v182; // [rsp+670h] [rbp-578h] BYREF
  __int64 v183; // [rsp+678h] [rbp-570h]
  _BYTE v184[136]; // [rsp+680h] [rbp-568h] BYREF
  __int64 v185; // [rsp+708h] [rbp-4E0h] BYREF
  _BYTE v186[136]; // [rsp+710h] [rbp-4D8h] BYREF
  __int64 v187; // [rsp+798h] [rbp-450h] BYREF
  _BYTE v188[136]; // [rsp+7A0h] [rbp-448h] BYREF
  _BYTE src[304]; // [rsp+828h] [rbp-3C0h] BYREF
  _BYTE v190[304]; // [rsp+958h] [rbp-290h] BYREF
  _BYTE v191[352]; // [rsp+A88h] [rbp-160h] BYREF

  v110 = a6;
  v118 = a2;
  v119 = a3;
  if ( *(_BYTE *)(a4 + 240) )
  {
    v97 = 0LL;
    v98 = &byte_8;
    v99 = 0LL;
  }
  else
  {
    v8 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 608LL, 0LL);
    if ( !v8 )
      alloc::alloc::handle_alloc_error(8LL, 608LL);
    v9 = *(const void **)(a1 + 32);
    v10 = *(_QWORD *)(a1 + 40);
    core::slice::raw::from_raw_parts::precondition_check(v9, 1LL, 1LL, v10);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(s2, v10, 0LL);
    v11 = s2[1];
    if ( s2[0] )
      alloc::raw_vec::handle_error(s2[1], dest[0]);
    v12 = dest[0];
    core::intrinsics::copy_nonoverlapping::precondition_check(v9, dest[0], 1LL, 1LL, v10);
    memcpy(v12, v9, v10);
    *(_QWORD *)&v133 = v11;
    *((_QWORD *)&v133 + 1) = v12;
    v134 = v10;
    v169[0] = 0LL;
    std::sys::os_str::bytes::Slice::to_owned(s2, asc_3ABB7, 1LL);
    v149 = dest[0];
    v148 = *(_OWORD *)s2;
    uu_ls::PathData::new((__int64)src, &v133, (__int64)v169, (__int64 *)&v148, a4, 0);
    v13 = *(_QWORD *)(a1 + 32);
    if ( !v13 )
      goto LABEL_162;
    v14 = *(_QWORD *)(a1 + 40);
    if ( v14 < 0 )
      goto LABEL_162;
    std::path::Path::_join(&v152, v13, v14, asc_3ABB8, 2LL);
    v170[0] = 0LL;
    std::sys::os_str::bytes::Slice::to_owned(s2, asc_3ABB8, 2LL);
    v151 = dest[0];
    v150 = *(_OWORD *)s2;
    uu_ls::PathData::new((__int64)v191, &v152, (__int64)v170, (__int64 *)&v150, a4, 0);
    if ( (v8 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v8, &off_1FF268);
    memcpy((void *)v8, src, 0x130uLL);
    memcpy((void *)(v8 + 304), v191, 0x130uLL);
    v97 = 2LL;
    v98 = (void *)v8;
    v99 = 2LL;
    a2 = v118;
    a3 = v119;
  }
  v105 = a2;
  v106 = a3 & 1;
  v102 = (char **)dest;
  v111 = a5 + 4;
  v15 = &v173;
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v161, &v105);
    if ( !v161 )
      break;
    v16 = v15;
    v17 = *((_QWORD *)&v162 + 1);
    if ( (_QWORD)v162 )
    {
      v117 = v164;
      v116 = v163;
      v115 = v162;
      if ( *(_BYTE *)(a4 + 240) == 2 )
      {
        std::fs::DirEntry::file_name(&v121, &v115);
        if ( !v122 || v123[0] < 0LL )
          goto LABEL_162;
        std::sys::os_str::bytes::Slice::to_str(s2);
        v18 = 0;
        if ( !s2[0] )
        {
          v19 = s2[1];
          if ( s2[1] )
          {
            v20 = dest[0];
            LODWORD(s2[0]) = 0;
            v21 = (const void *)core::char::methods::encode_utf8_raw(46LL, s2, 4LL);
            v18 = (unsigned __int64)v20 >= v22 && bcmp(v21, v19, v22) == 0;
          }
        }
        alloc::raw_vec::RawVec<T,A>::current_memory(s2, &v121);
        if ( s2[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v123, s2[0], s2[1], dest[0]);
        if ( v18 )
          goto LABEL_189;
      }
      std::fs::DirEntry::file_name(v126, &v115);
      if ( !v127 || v128 < 0 )
        goto LABEL_162;
      std::sys::os_str::bytes::Slice::to_str(s2);
      if ( s2[0] || (v27 = s2[1]) == 0LL )
      {
        if ( !v127 || v128 < 0 )
          goto LABEL_162;
        std::sys::os_str::bytes::Slice::to_string_lossy(v113);
        if ( v113[0] == (void *)0x8000000000000000LL )
        {
          v31 = v113[1];
          v32 = n;
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(s2, n, 0LL);
          v29 = s2[1];
          if ( s2[0] )
LABEL_166:
            alloc::raw_vec::handle_error(v29, *v102);
          v33 = dest[0];
          core::intrinsics::copy_nonoverlapping::precondition_check(v31, dest[0], 1LL, 1LL, v32);
          memcpy(v33, v31, v32);
          *(_QWORD *)&v100 = v29;
          *((_QWORD *)&v100 + 1) = v33;
          v101 = v32;
        }
        else
        {
          v101 = n;
          v100 = *(_OWORD *)v113;
        }
      }
      else
      {
        v28 = dest[0];
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(s2, dest[0], 0LL);
        v29 = s2[1];
        if ( s2[0] )
          goto LABEL_166;
        v30 = dest[0];
        core::intrinsics::copy_nonoverlapping::precondition_check(v27, dest[0], 1LL, 1LL, v28);
        memcpy(v30, v27, (size_t)v28);
        *(_QWORD *)&v100 = v29;
        *((_QWORD *)&v100 + 1) = v30;
        v101 = (signed __int64)v28;
      }
      v34 = *(_QWORD *)(a4 + 8);
      if ( !v34 || (v34 & 7) != 0 || (v35 = *(_QWORD *)(a4 + 16), v35 >= 0x24924924924924ALL) )
        core::panicking::panic_nounwind(anon_b28fd7e98b12a24e0e73292b43fb9a8b_19_llvm_2868389831502404180, 162LL);
      v36 = 56 * v35;
      do
      {
        v37 = v36;
        if ( !v36 )
          break;
        if ( !*((_QWORD *)&v100 + 1) || v101 < 0 )
          goto LABEL_162;
        v38 = glob::Pattern::matches_from(v34, 1LL, *((_QWORD *)&v100 + 1), *((_QWORD *)&v100 + 1) + v101, 0LL, 65537LL);
        v34 += 56LL;
        v36 = v37 - 56;
      }
      while ( v38 );
      alloc::raw_vec::RawVec<T,A>::current_memory(s2, &v100);
      v15 = v16;
      if ( s2[1] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v101, s2[0], s2[1], dest[0]);
      alloc::raw_vec::RawVec<T,A>::current_memory(s2, v126);
      if ( s2[1] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v128, s2[0], s2[1], dest[0]);
      if ( v37 )
      {
LABEL_189:
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v115) )
          alloc::sync::Arc<T,A>::drop_slow(&v115);
        if ( !(_QWORD)v116 )
          core::panicking::panic_nounwind(anon_6439b99778f68cb4ecd7011cce46bae8_3_llvm_16942018982332615979, 101LL);
        **((_BYTE **)&v115 + 1) = 0;
        <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop((char *)&v115 + 8);
      }
      else
      {
        std::fs::DirEntry::path(&v171, &v115);
        v178 = v117;
        v177 = v116;
        v176 = v115;
        v175 = 1LL;
        v172[0] = 0x8000000000000000LL;
        uu_ls::PathData::new((__int64)v190, &v171, (__int64)&v175, v172, a4, 0);
        v39 = v99;
        if ( v99 == v97 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v97);
        memmove((char *)v98 + 304 * v39, v190, 0x130uLL);
        v99 = v39 + 1;
        v15 = v16;
      }
    }
    else
    {
      v120 = *((_QWORD *)&v162 + 1);
      v23 = (void *)std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a5);
      if ( v23 || (v23 = (void *)<std::io::stdio::Stdout as std::io::Write>::flush(v111)) != 0LL )
      {
        s2[0] = (void *)0x8000000000000000LL;
        dest[1] = v23;
        v56 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        v43 = (__int64)v56;
        if ( !v56 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v57 = *(_OWORD *)s2;
        v56[1] = *(_OWORD *)dest;
        *v56 = v57;
        std::io::error::repr_bitpacked::decode_repr(s2, v120);
        if ( LOBYTE(s2[0]) >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&s2[1]);
        if ( !_InterlockedDecrement64(v105) )
          alloc::sync::Arc<T,A>::drop_slow(&v105);
        goto LABEL_112;
      }
      v174 = v17;
      v173 = 1;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      v24 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v25 = *(_QWORD *)(v24 + 8);
      v26 = *(_QWORD *)(v24 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v25, 1LL, 1LL, v26);
      v135[0] = v25;
      v135[1] = v26;
      v140[0] = v135;
      v140[1] = <&T as core::fmt::Display>::fmt;
      v140[2] = v15;
      v140[3] = <uu_ls::LsError as core::fmt::Display>::fmt;
      v153[0] = &unk_1FF1D8;
      v153[1] = 3LL;
      v153[4] = 0LL;
      v153[2] = v140;
      v153[3] = 2LL;
      std::io::stdio::_eprint(v153);
      core::ptr::drop_in_place<uu_ls::LsError>(v15);
    }
  }
  v40 = (_BYTE *)a4;
  if ( !_InterlockedDecrement64(v105) )
    alloc::sync::Arc<T,A>::drop_slow(&v105);
  if ( !v98 || ((unsigned __int8)v98 & 7) != 0 || (v41 = v99, v99 > 0x6BCA1AF286BCA1LL) )
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_29_llvm_13257680528908953851, 166LL);
  uu_ls::sort_entries((char *)v98, v99, (_BYTE *)a4, a5);
  if ( *(_BYTE *)(a4 + 248) != 1 && (*(_BYTE *)(a4 + 234) & 1) == 0 )
  {
LABEL_65:
    if ( v98 && ((unsigned __int8)v98 & 7) == 0 && v99 <= 0x6BCA1AF286BCA1LL )
    {
      v43 = uu_ls::display_items(v98, v99, v40, a5, a7, a8);
      if ( v43 )
        goto LABEL_112;
      if ( (v40[230] & 1) == 0 )
      {
        v43 = 0LL;
        goto LABEL_112;
      }
      if ( v98 && ((unsigned __int8)v98 & 7) == 0 && v99 <= 0x6BCA1AF286BCA1LL )
      {
        v62 = 2 * (unsigned int)(v40[240] == 0);
        v131[0] = v98;
        v131[1] = (char *)v98 + 304 * v99;
        v131[2] = v62;
        v43 = 0LL;
        v102 = &anon_899730b44f50ab02bfd9ca63d23e76e8_48_llvm_11807341281290569930;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v63 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(
                      v131,
                      &v132);
              v64 = v63;
              if ( !v63 )
                goto LABEL_112;
              v65 = *(_QWORD *)(v63 + 32);
              v66 = *(_QWORD *)(v63 + 40);
              core::slice::raw::from_raw_parts::precondition_check(v65, 1LL, 1LL, v66);
              std::sys::pal::unix::fs::readdir(s2, v65, v66);
              if ( LOBYTE(s2[1]) != 2 )
                break;
              v112 = s2[0];
              v67 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a5);
              if ( v67 || (v67 = <std::io::stdio::Stdout as std::io::Write>::flush(v111)) != 0 )
              {
                v43 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                        v67,
                        &off_1FF2F8);
                core::ptr::drop_in_place<std::io::error::Error>(&v112);
                goto LABEL_112;
              }
              v68 = v112;
              v132 = v112;
              v69 = *(const void **)(v64 + 32);
              v70 = *(_QWORD *)(v64 + 40);
              core::slice::raw::from_raw_parts::precondition_check(v69, 1LL, 1LL, v70);
              alloc::raw_vec::RawVec<T,A>::try_allocate_in(s2, v70, 0LL);
              v71 = s2[1];
              if ( s2[0] )
                alloc::raw_vec::handle_error(s2[1], dest[0]);
              v72 = dest[0];
              core::intrinsics::copy_nonoverlapping::precondition_check(v69, dest[0], 1LL, 1LL, v70);
              memcpy(v72, v69, v70);
              v73 = *(_BYTE *)(v64 + 297);
              v144 = v68;
              v145 = v71;
              v146 = v72;
              v147 = v70;
              v74 = v73 & 1;
              v143[1] = v74;
              v143[0] = 2;
              _InterlockedExchange(&uucore::mods::error::EXIT_CODE, v74 + 1);
              v75 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              v76 = *(_QWORD *)(v75 + 8);
              v77 = *(_QWORD *)(v75 + 16);
              core::slice::raw::from_raw_parts::precondition_check(v76, 1LL, 1LL, v77);
              v138[0] = v76;
              v138[1] = v77;
              v141[0] = v138;
              v141[1] = <&T as core::fmt::Display>::fmt;
              v141[2] = v143;
              v141[3] = <uu_ls::LsError as core::fmt::Display>::fmt;
              v155[0] = &unk_1FF1D8;
              v155[1] = 3LL;
              v155[4] = 0LL;
              v155[2] = v141;
              v155[3] = 2LL;
              std::io::stdio::_eprint(v155);
              core::ptr::drop_in_place<uu_ls::LsError>(v143);
              v40 = (_BYTE *)a4;
              v43 = 0LL;
            }
            v103 = (volatile signed __int64 *)s2[0];
            v104 = (__int64)s2[1] & 1;
            uucore::features::fs::FileInformation::from_path(&v179, v64 + 24, *(_BYTE *)(v64 + 296) & 1);
            if ( v179 )
            {
              v94 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                      v180,
                      &off_1FF2E0);
              goto LABEL_156;
            }
            memcpy(v186, v181, sizeof(v186));
            v185 = v180;
            if ( !(unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(v110, &v185) )
              break;
            v78 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a5);
            if ( v78 || (v78 = <std::io::stdio::Stdout as std::io::Write>::flush(v111)) != 0 )
            {
              v94 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                      v78,
                      &off_1FF280);
              goto LABEL_156;
            }
            v79 = *(const void **)(v64 + 32);
            v80 = *(_QWORD *)(v64 + 40);
            core::slice::raw::from_raw_parts::precondition_check(v79, 1LL, 1LL, v80);
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(s2, v80, 0LL);
            v81 = s2[1];
            if ( s2[0] )
              alloc::raw_vec::handle_error(s2[1], dest[0]);
            v82 = dest[0];
            core::intrinsics::copy_nonoverlapping::precondition_check(v79, dest[0], 1LL, 1LL, v80);
            memcpy(v82, v79, v80);
            v158 = v81;
            v159 = v82;
            v160 = v80;
            v157[0] = 5;
            _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 2);
            v83 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            v84 = *(_QWORD *)(v83 + 8);
            v85 = *(_QWORD *)(v83 + 16);
            core::slice::raw::from_raw_parts::precondition_check(v84, 1LL, 1LL, v85);
            v139[0] = v84;
            v139[1] = v85;
            v142[0] = v139;
            v142[1] = <&T as core::fmt::Display>::fmt;
            v142[2] = v157;
            v142[3] = <uu_ls::LsError as core::fmt::Display>::fmt;
            v156[0] = &unk_1FF1D8;
            v156[1] = 3LL;
            v156[4] = 0LL;
            v156[2] = v142;
            v156[3] = 2LL;
            std::io::stdio::_eprint(v156);
            core::ptr::drop_in_place<uu_ls::LsError>(v157);
            v43 = 0LL;
            if ( !_InterlockedDecrement64(v103) )
              alloc::sync::Arc<T,A>::drop_slow(&v103);
          }
          v165[0] = &off_1FF240;
          v165[1] = 1LL;
          v165[2] = 8LL;
          v166 = 0LL;
          v86 = std::io::Write::write_fmt(a5, v165);
          if ( v86 )
          {
            v94 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                    v86,
                    &off_1FF2C8);
            goto LABEL_156;
          }
          if ( (v40[238] & 1) != 0 )
          {
            *(_QWORD *)(a7 + 48) = 2LL;
            v87 = uu_ls::dired::indent(a5);
            if ( v87 )
            {
              v43 = v87;
              goto LABEL_157;
            }
            if ( !*(_QWORD *)(v64 + 32) || *(__int64 *)(v64 + 40) < 0 )
              break;
            std::sys::os_str::bytes::Slice::to_string_lossy(v129);
            v88 = v130;
            if ( v129[0] != 0x8000000000000000LL )
            {
              core::slice::raw::from_raw_parts::precondition_check(v129[1], 1LL, 1LL, v130);
              if ( v129[0] != 0x8000000000000000LL )
              {
                alloc::raw_vec::RawVec<T,A>::current_memory(s2, v129);
                if ( s2[1] )
                  <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v130, s2[0], s2[1], dest[0]);
              }
            }
            uu_ls::dired::calculate_subdired(a7, v88);
            v51 = __CFADD__(v88, 2LL);
            v89 = v88 + 2;
            if ( v51 )
              goto LABEL_185;
            v90 = v89 + 1;
            if ( !v90 )
              goto LABEL_185;
            v51 = __CFADD__(*(_QWORD *)(a7 + 48), v90);
            v91 = *(_QWORD *)(a7 + 48) + v90;
            if ( v51 )
            {
              v102 = &anon_899730b44f50ab02bfd9ca63d23e76e8_49_llvm_11807341281290569930;
LABEL_185:
              core::panicking::panic_const::panic_const_add_overflow(v102);
            }
            *(_QWORD *)(a7 + 48) = v91;
          }
          uu_ls::show_dir_name(v64, (__int64)a5, (__int64)v40);
          v167[0] = &off_1FF240;
          v167[1] = 1LL;
          v167[2] = 8LL;
          v168 = 0LL;
          v92 = std::io::Write::write_fmt(a5, v167);
          if ( v92 )
          {
            v94 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                    v92,
                    &off_1FF2B0);
LABEL_156:
            v43 = v94;
LABEL_157:
            if ( !_InterlockedDecrement64(v103) )
              alloc::sync::Arc<T,A>::drop_slow(&v103);
            goto LABEL_112;
          }
          v93 = uu_ls::enter_directory(v64, (_DWORD)v103, v104 & 1, (_DWORD)v40, (_DWORD)a5, v110, a7, a8);
          if ( v93 )
          {
            v43 = v93;
            goto LABEL_112;
          }
          uucore::features::fs::FileInformation::from_path(&v182, v64 + 24, *(_BYTE *)(v64 + 296) & 1);
          if ( v182 )
          {
            v43 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                    v183,
                    &off_1FF298);
            goto LABEL_112;
          }
          memcpy(v188, v184, sizeof(v188));
          v187 = v183;
          hashbrown::map::HashMap<K,V,S,A>::remove_entry(s2, v110, &v187);
        }
      }
    }
LABEL_162:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  }
  if ( !v98 || ((unsigned __int8)v98 & 7) != 0 || v99 > 0x6BCA1AF286BCA1LL )
    goto LABEL_162;
  if ( v99 )
  {
    v44 = (__int64 *)((char *)v98 + 72);
    v45 = 304 * v99;
    v46 = 0LL;
    while ( 1 )
    {
      v47 = *v44;
      v48 = (__int64)v44;
      if ( *v44 == 3 )
      {
        v41 = (unsigned __int64)(v44 - 9);
        v48 = core::cell::once::OnceCell<T>::try_init(v44, v44 - 9, a5);
        v47 = *(_QWORD *)v48;
      }
      if ( v47 != 2 )
      {
        if ( (*(_DWORD *)(v48 + 56) & 0xB000 | 0x4000) == 0x6000 )
        {
          v49 = 0LL;
        }
        else
        {
          v50 = *(_QWORD *)(v48 + 96);
          if ( v50 >> 55 )
            core::panicking::panic_const::panic_const_mul_overflow(
              &anon_11f7478bcb2f9b4befb7b1d3f51baba0_363_llvm_2775220154043362954,
              v41,
              v42,
              v50 >> 55);
          v49 = v50 << 9;
        }
        if ( *(_BYTE *)(a4 + 241) )
        {
          v51 = __CFADD__(v49, v46);
          v46 += v49;
          if ( v51 )
            goto LABEL_93;
        }
        else
        {
          v52 = *(_QWORD *)(a4 + 216);
          if ( !v52 )
            core::panicking::panic_const::panic_const_div_by_zero(&anon_11f7478bcb2f9b4befb7b1d3f51baba0_364_llvm_2775220154043362954);
          if ( (v52 | v49) >> 32 )
          {
            v54 = v49;
            v53 = v49 / v52;
            v42 = v54 % v52;
            v51 = __CFADD__(v53, v46);
            v46 += v53;
            if ( v51 )
              goto LABEL_93;
          }
          else
          {
            v42 = (unsigned int)v49 % (unsigned int)v52;
            v55 = (unsigned int)v49 / (unsigned int)v52;
            v51 = __CFADD__(v55, v46);
            v46 += v55;
            if ( v51 )
LABEL_93:
              core::panicking::panic_const::panic_const_add_overflow(&off_1FF360);
          }
        }
      }
      v44 += 38;
      v45 -= 304LL;
      if ( !v45 )
        goto LABEL_100;
    }
  }
  v46 = 0LL;
LABEL_100:
  v40 = (_BYTE *)a4;
  if ( (*(_BYTE *)(a4 + 238) & 1) == 0 || (v43 = uu_ls::dired::indent(a5)) == 0 )
  {
    uucore::features::format::human::human_readable(v113, v46, *(unsigned __int8 *)(a4 + 241));
    v121 = v113;
    v122 = <alloc::string::String as core::fmt::Display>::fmt;
    v123[0] = a4 + 250;
    v123[1] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    s2[0] = &off_1FF340;
    s2[1] = &dword_0 + 2;
    dest[0] = &v121;
    dest[1] = &dword_0 + 2;
    v109 = 0LL;
    alloc::fmt::format::format_inner(&v100, s2);
    alloc::raw_vec::RawVec<T,A>::current_memory(s2, v113);
    if ( s2[1] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, s2[0], s2[1], dest[0]);
    v43 = *((_QWORD *)&v100 + 1);
    if ( (_QWORD)v100 != 0x8000000000000000LL )
    {
      v124 = v100;
      v125 = v101;
      if ( !*((_QWORD *)&v100 + 1) || v101 < 0 )
        goto LABEL_162;
      v137[0] = *((_QWORD *)&v100 + 1);
      v137[1] = v101;
      v136[0] = v137;
      v136[1] = <&T as core::fmt::Display>::fmt;
      v154[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
      v154[1] = 1LL;
      v154[4] = 0LL;
      v154[2] = v136;
      v154[3] = 1LL;
      v58 = (void *)std::io::Write::write_fmt(a5, v154);
      if ( !v58 )
      {
        if ( (*(_BYTE *)(a4 + 238) & 1) != 0 )
          uu_ls::dired::add_total(a7, v125);
        alloc::raw_vec::RawVec<T,A>::current_memory(s2, &v124);
        if ( s2[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v125, s2[0], s2[1], dest[0]);
        goto LABEL_65;
      }
      s2[0] = (void *)0x8000000000000000LL;
      dest[1] = v58;
      v59 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v43 = (__int64)v59;
      if ( !v59 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v60 = *(_OWORD *)s2;
      v59[1] = *(_OWORD *)dest;
      *v59 = v60;
      alloc::raw_vec::RawVec<T,A>::current_memory(s2, &v124);
      if ( s2[1] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v125, s2[0], s2[1], dest[0]);
    }
  }
LABEL_112:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v97);
  return v43;
}
