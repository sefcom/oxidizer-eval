        __int64 a9)
{
  __int64 v10; // r15
  int v11; // eax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 inclusive; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  void *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // rdx
  void *v24; // rbp
  size_t v25; // r15
  unsigned __int64 v26; // rax
  void *v27; // rbx
  void *v28; // r14
  unsigned __int64 v29; // rbx
  void **v30; // rax
  unsigned __int64 v31; // rbx
  size_t v32; // rbp
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r12
  bool v41; // cf
  size_t v42; // r14
  size_t v43; // rdx
  const void *v44; // r13
  size_t v45; // r15
  void *v46; // rbp
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int128 v50; // xmm0
  bool v51; // zf
  size_t v52; // rdx
  char *v53; // rbp
  void *v54; // r15
  size_t v55; // r14
  char *v56; // rbp
  void *v57; // r14
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int128 v60; // xmm0
  unsigned __int64 v61; // rbx
  const void *v62; // r14
  unsigned __int64 v63; // rsi
  __int64 v64; // r12
  unsigned __int16 v65; // si
  char v66; // cl
  char v67; // dl
  __int64 v68; // r14
  void *v69; // rax
  char v70; // bl
  __int64 v71; // r13
  void *v72; // rdx
  __int64 v73; // rax
  int v74; // r9d
  size_t n; // rax
  const char *v76; // rbx
  __int64 v77; // r14
  __int64 v78; // rax
  _OWORD *v79; // rax
  _OWORD *v80; // r14
  __int128 v81; // xmm0
  __int64 v82; // rdx
  unsigned __int16 v83; // ax
  unsigned __int64 v84; // rax
  __int64 v85; // rdi
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rsi
  __int64 v89; // r14
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  unsigned __int64 v103; // rcx
  __int64 v104; // rax
  __int128 v105; // xmm0
  __int64 v106; // rax
  __int128 v107; // xmm0
  __int64 v109; // rax
  char **v110; // rdi
  size_t v112; // [rsp+18h] [rbp-3C0h]
  __int128 v113; // [rsp+20h] [rbp-3B8h] BYREF
  unsigned __int64 v114; // [rsp+30h] [rbp-3A8h]
  int v115; // [rsp+38h] [rbp-3A0h]
  int v116; // [rsp+3Ch] [rbp-39Ch]
  __int128 v117; // [rsp+40h] [rbp-398h] BYREF
  unsigned __int64 v118; // [rsp+50h] [rbp-388h]
  unsigned __int64 v119; // [rsp+58h] [rbp-380h]
  __int64 v120; // [rsp+60h] [rbp-378h]
  __int64 v121; // [rsp+68h] [rbp-370h]
  unsigned __int64 v122; // [rsp+70h] [rbp-368h]
  __int64 v123; // [rsp+78h] [rbp-360h]
  unsigned __int16 v124; // [rsp+80h] [rbp-358h]
  char v125; // [rsp+82h] [rbp-356h]
  char v126; // [rsp+83h] [rbp-355h]
  _OWORD v127[11]; // [rsp+90h] [rbp-348h] BYREF
  const void *v128; // [rsp+140h] [rbp-298h]
  size_t v129; // [rsp+148h] [rbp-290h]
  unsigned __int64 v130; // [rsp+150h] [rbp-288h]
  char **v131; // [rsp+158h] [rbp-280h]
  char *v132; // [rsp+160h] [rbp-278h]
  __int128 v133; // [rsp+168h] [rbp-270h] BYREF
  __int64 v134; // [rsp+178h] [rbp-260h] BYREF
  __int128 v135; // [rsp+180h] [rbp-258h] BYREF
  unsigned __int64 v136; // [rsp+190h] [rbp-248h]
  void **v137; // [rsp+198h] [rbp-240h]
  __int64 v138; // [rsp+1A0h] [rbp-238h] BYREF
  __int64 v139; // [rsp+1A8h] [rbp-230h] BYREF
  __int64 v140; // [rsp+1B0h] [rbp-228h] BYREF
  __int64 v141; // [rsp+1B8h] [rbp-220h] BYREF
  __int64 v142; // [rsp+1C0h] [rbp-218h] BYREF
  __int64 v143; // [rsp+1C8h] [rbp-210h] BYREF
  __int64 v144; // [rsp+1D0h] [rbp-208h] BYREF
  _WORD v145[4]; // [rsp+1D8h] [rbp-200h] BYREF
  __int64 v146; // [rsp+1E0h] [rbp-1F8h]
  int v147; // [rsp+1E8h] [rbp-1F0h] BYREF
  const char *v148; // [rsp+1F0h] [rbp-1E8h]
  __int64 v149; // [rsp+1F8h] [rbp-1E0h] BYREF
  void *src[2]; // [rsp+200h] [rbp-1D8h] BYREF
  unsigned __int64 v151; // [rsp+210h] [rbp-1C8h]
  size_t v152; // [rsp+218h] [rbp-1C0h]
  size_t v153; // [rsp+220h] [rbp-1B8h]
  unsigned __int64 v154; // [rsp+228h] [rbp-1B0h]
  _BYTE v155[8]; // [rsp+230h] [rbp-1A8h] BYREF
  __int64 v156; // [rsp+238h] [rbp-1A0h]
  __int64 v157; // [rsp+240h] [rbp-198h] BYREF
  __int128 v158; // [rsp+248h] [rbp-190h]
  size_t v159; // [rsp+258h] [rbp-180h]
  void *s2[22]; // [rsp+260h] [rbp-178h] BYREF
  __int128 v161; // [rsp+310h] [rbp-C8h] BYREF
  __int64 v162; // [rsp+320h] [rbp-B8h]
  __int64 v163; // [rsp+328h] [rbp-B0h]
  __int64 v164; // [rsp+330h] [rbp-A8h]
  __int64 v165; // [rsp+338h] [rbp-A0h]
  int v166; // [rsp+340h] [rbp-98h]
  int v167; // [rsp+344h] [rbp-94h]
  char v168; // [rsp+348h] [rbp-90h]
  __int16 v169; // [rsp+350h] [rbp-88h]
  char v170[8]; // [rsp+358h] [rbp-80h] BYREF
  _QWORD v171[6]; // [rsp+360h] [rbp-78h] BYREF
  int v172; // [rsp+390h] [rbp-48h]
  int v173; // [rsp+394h] [rbp-44h]
  char v174; // [rsp+398h] [rbp-40h]
  __int16 v175; // [rsp+3A0h] [rbp-38h]
  char v176[48]; // [rsp+3A8h] [rbp-30h] BYREF

  v153 = a6;
  v152 = a5;
  v116 = a4;
  v10 = a1;
  crossterm::terminal::sys::unix::size(v145);
  if ( v145[0] )
  {
    v141 = v146;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v141, &off_1487D8, &off_1489D8);
  }
  if ( *(_WORD *)(a9 + 32) == 1 )
    v11 = *(unsigned __int16 *)(a9 + 34);
  else
    v11 = v145[2];
  v115 = v11;
  v12 = v145[1];
  LODWORD(v127[0]) = 0;
  core::char::methods::encode_utf8_raw(10LL, v127, 4LL);
  if ( v13 >= 0x100 )
    core::result::unwrap_failed(
      "char len should be less than 255\x01",
      32LL,
      s2,
      &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
      &off_1487F8);
  v171[0] = 0LL;
  v171[1] = a2;
  v171[2] = a1;
  v171[3] = a2;
  v171[4] = 0LL;
  v171[5] = a2;
  v172 = v127[0];
  v173 = 10;
  v174 = v13;
  v175 = 0;
  inclusive = core::str::iter::SplitInternal<P>::next_inclusive(v171);
  if ( inclusive )
  {
    v15 = 0LL;
    do
    {
      v16 = inclusive;
      if ( !<core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v176, inclusive) )
        break;
      if ( !++v15 )
        core::panicking::panic_const::panic_const_add_overflow(
          &anon_1ec8c0de840ece16cf19a5e1c33a3e48_1_llvm_9197779023046717743,
          v16,
          v17,
          v18);
      inclusive = core::str::iter::SplitInternal<P>::next_inclusive(v171);
    }
    while ( inclusive );
    v10 = a1;
  }
  else
  {
    v15 = 0LL;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v127, v15, 0LL);
  if ( *(_QWORD *)&v127[0] )
    alloc::raw_vec::handle_error(*((_QWORD *)&v127[0] + 1), *(_QWORD *)&v127[1]);
  v135 = *(_OWORD *)((char *)v127 + 8);
  v136 = 0LL;
  LODWORD(v127[0]) = 0;
  core::char::methods::encode_utf8_raw(10LL, v127, 4LL);
  if ( v19 >= 0x100 )
    core::result::unwrap_failed(
      "char len should be less than 255\x01",
      32LL,
      s2,
      &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
      &off_1487F8);
  *(_QWORD *)&v161 = 0LL;
  *((_QWORD *)&v161 + 1) = a2;
  v162 = v10;
  v163 = a2;
  v164 = 0LL;
  v165 = a2;
  v166 = v127[0];
  v167 = 10;
  v168 = v19;
  v169 = 0;
  v137 = &s2[2];
  v131 = &off_148C88;
  v154 = v12;
  while ( 1 )
  {
    v21 = core::str::iter::SplitInternal<P>::next_inclusive(&v161);
    if ( !v21 )
      break;
    v22 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v170, v21);
    v24 = (void *)v22;
    if ( !v22 )
      break;
    v25 = v23;
    LOBYTE(v127[0]) = 0;
    v26 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v22, v23 + v22, 0LL, 0LL, v127);
    *(_QWORD *)&v113 = 0LL;
    *((_QWORD *)&v113 + 1) = 8LL;
    v114 = 0LL;
    if ( v26 < v12 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v127, v25, 0LL);
      v27 = (void *)*((_QWORD *)&v127[0] + 1);
      if ( *(_QWORD *)&v127[0] )
      {
        v137 = (void **)&v127[1];
LABEL_222:
        alloc::raw_vec::handle_error(v27, *v137);
      }
      v28 = *(void **)&v127[1];
      core::intrinsics::copy_nonoverlapping::precondition_check(v24, *(_QWORD *)&v127[1], 1LL, 1LL, v25);
      memcpy(v28, v24, v25);
      *(_QWORD *)&v127[0] = v27;
      *((_QWORD *)&v127[0] + 1) = v28;
      *(_QWORD *)&v127[1] = v25;
      v29 = v114;
      if ( v114 == (_QWORD)v113 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v113);
      v30 = (void **)v127;
      goto LABEL_45;
    }
    unicode_segmentation::grapheme::GraphemeCursor::new(v127, 0LL, v25, 1LL);
    unicode_segmentation::grapheme::GraphemeCursor::new(&s2[11], v25, v25, 1LL);
    s2[10] = *(void **)&v127[5];
    *(_OWORD *)&s2[8] = v127[4];
    *(_OWORD *)&s2[6] = v127[3];
    *(_OWORD *)&s2[4] = v127[2];
    *(_OWORD *)&s2[2] = v127[1];
    *(_OWORD *)s2 = v127[0];
    memcpy(v127, s2, sizeof(v127));
    v128 = v24;
    v112 = v25;
    v129 = v25;
    v132 = (char *)v24;
    v130 = (unsigned __int64)v24;
    v31 = 0LL;
    v32 = 0LL;
    while ( 1 )
    {
      v33 = <unicode_segmentation::grapheme::Graphemes as core::iter::traits::iterator::Iterator>::next(v127);
      v35 = v33;
      if ( !v33 )
        break;
      v36 = v130;
      if ( v130 > v33 )
        core::panicking::panic_const::panic_const_sub_overflow(&anon_1a911d3edb6b4aa343e194d7b0420439_4_llvm_18445788660129145147);
      LOBYTE(s2[0]) = 0;
      v37 = v33 + v34;
      v40 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v33, v33 + v34, 0LL, 0LL, s2);
      v41 = __CFADD__(v40, v31);
      v31 += v40;
      if ( v41 )
        core::panicking::panic_const::panic_const_add_overflow(&off_148C70, v37, v38, v39);
      if ( v31 > v12 )
      {
        v42 = v35 - v36;
        v44 = (const void *)core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                              v32,
                              v42,
                              v132,
                              v112);
        if ( !v44 )
        {
          v52 = v32;
          goto LABEL_225;
        }
        v45 = v43;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(s2, v43, 0LL);
        v27 = s2[1];
        if ( s2[0] )
          goto LABEL_222;
        v46 = s2[2];
        core::intrinsics::copy_nonoverlapping::precondition_check(v44, s2[2], 1LL, 1LL, v45);
        memcpy(v46, v44, v45);
        *(_QWORD *)&v158 = v27;
        *((_QWORD *)&v158 + 1) = v46;
        v159 = v45;
        v47 = v114;
        if ( v114 == (_QWORD)v113 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v113);
        v48 = *((_QWORD *)&v113 + 1);
        v49 = 3 * v47;
        v50 = v158;
        *(_QWORD *)(*((_QWORD *)&v113 + 1) + 8 * v49 + 16) = v159;
        *(_OWORD *)(v48 + 8 * v49) = v50;
        v114 = v47 + 1;
        v31 = v40;
        v32 = v42;
        v12 = v154;
      }
    }
    if ( v112 != v32 )
    {
      v51 = v32 == 0;
      v52 = v32;
      v53 = v132;
      if ( !v51 && (v112 <= v52 || v132[v52] < -64) )
      {
        v42 = v112;
        v131 = &off_148C58;
LABEL_225:
        core::str::slice_error_fail(v132, v112, v52, v42, v131);
      }
      v54 = (void *)(v112 - v52);
      if ( v112 < v52 )
        core::panicking::panic_nounwind(anon_3b19d6da1157f8a5be874edba1fa8efa_12_llvm_3026733004089231496, 102LL);
      v55 = v52;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(s2, v112 - v52, 0LL);
      v27 = s2[1];
      if ( s2[0] )
        goto LABEL_222;
      v56 = &v53[v55];
      v57 = s2[2];
      core::intrinsics::copy_nonoverlapping::precondition_check(v56, s2[2], 1LL, 1LL, v54);
      memcpy(v57, v56, (size_t)v54);
      s2[0] = v27;
      s2[1] = v57;
      s2[2] = v54;
      v29 = v114;
      if ( v114 == (_QWORD)v113 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v113);
      v30 = s2;
LABEL_45:
      v58 = *((_QWORD *)&v113 + 1);
      v59 = 3 * v29;
      v60 = *(_OWORD *)v30;
      *(_QWORD *)(*((_QWORD *)&v113 + 1) + 8 * v59 + 16) = v30[2];
      *(_OWORD *)(v58 + 8 * v59) = v60;
      v114 = v29 + 1;
    }
    v61 = v114;
    v151 = v114;
    *(_OWORD *)src = v113;
    v62 = (const void *)*((_QWORD *)&v113 + 1);
    if ( !*((_QWORD *)&v113 + 1) || (BYTE8(v113) & 7) != 0 || v114 > 0x555555555555555LL )
LABEL_218:
      core::panicking::panic_nounwind(anon_58afb1559eaf75b12060a08a7f3f0cc6_13_llvm_15235168960913987297, 162LL);
    v63 = v136;
    if ( (unsigned __int64)v135 - v136 < v114 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v135, v136, v114);
      v63 = v136;
    }
    v20 = (void *)(*((_QWORD *)&v135 + 1) + 24 * v63);
    core::intrinsics::copy_nonoverlapping::precondition_check(v62, v20, 24LL, 8LL, v61);
    memcpy(v20, v62, 24 * v61);
    v136 += v61;
    v151 = 0LL;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(src);
  }
  v117 = v135;
  v64 = v136;
  v65 = v115 - 1;
  if ( !(_WORD)v115 )
    v65 = 0;
  v66 = *(_BYTE *)(a9 + 38) & 1;
  v67 = *(_BYTE *)(a9 + 39) & 1;
  v119 = *(_QWORD *)(a9 + 24);
  v124 = v65;
  v118 = v136;
  v120 = a7;
  v121 = a8;
  v122 = v136;
  v125 = v66;
  v126 = v67;
  v123 = 0LL;
  if ( *(_QWORD *)a9 != 0x8000000000000000LL )
  {
    v68 = *((_QWORD *)&v117 + 1);
    if ( !*((_QWORD *)&v117 + 1) || (BYTE8(v117) & 7) != 0 || v136 > 0x555555555555555LL )
LABEL_227:
      core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
    <alloc::string::String as core::clone::Clone>::clone(v127);
    v69 = *(void **)&v127[0];
    v161 = *(_OWORD *)((char *)v127 + 8);
    if ( *(_QWORD *)&v127[0] == 0x8000000000000000LL )
    {
      s2[1] = &dword_0 + 1;
      s2[2] = 0LL;
      v69 = 0LL;
    }
    else
    {
      *(_OWORD *)&s2[1] = v161;
    }
    s2[0] = v69;
    v70 = 1;
    if ( v64 && s2[2] )
    {
      v71 = 24 * v64;
      v64 = -1LL;
      while ( v71 )
      {
        v72 = *(void **)(v68 + 8);
        if ( !v72 || *(__int64 *)(v68 + 16) < 0 || !s2[1] || (__int64)s2[2] < 0 )
          goto LABEL_218;
        v68 += 24LL;
        v71 -= 24LL;
        ++v64;
        if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(s2[1], (size_t)s2[2], v72) )
        {
          v70 = 0;
          goto LABEL_70;
        }
      }
      alloc::raw_vec::RawVec<T,A>::current_memory(v127, s2);
      if ( *((_QWORD *)&v127[0] + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          &s2[2],
          *(_QWORD *)&v127[0],
          *((_QWORD *)&v127[0] + 1),
          *(_QWORD *)&v127[1]);
LABEL_192:
      v127[0] = (unsigned __int64)a3;
      v104 = <std::io::stdio::Stdout as std::io::Write>::write_all(
               a3,
               anon_973acb088a118210f855931270ed248b_50_llvm_4119950667813314017,
               4LL);
      if ( v104 || (v104 = <std::io::stdio::Stdout as std::io::Write>::flush(a3)) != 0 )
      {
        *(_QWORD *)&v127[0] = 0x8000000000000000LL;
        *((_QWORD *)&v127[1] + 1) = v104;
        v80 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v80 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_195:
        v105 = v127[0];
        v80[1] = v127[1];
        *v80 = v105;
        goto LABEL_204;
      }
      v109 = <std::io::stdio::Stdout as std::io::Write>::write_all(
               a3,
               "\rPattern not found\n"
               "\r::::::::::::::\n"
               "\r{}\n"
               "\r::::::::::::::\n"
               "{}\n"
               "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
               19LL);
      if ( v109 )
      {
        *(_QWORD *)&v127[0] = 0x8000000000000000LL;
        *((_QWORD *)&v127[1] + 1) = v109;
        v80 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v80 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_195;
      }
      if ( v124 )
      {
        --v124;
        if ( !(_BYTE)v116 )
          goto LABEL_89;
LABEL_75:
        v127[0] = (unsigned __int64)a3;
        v73 = <std::io::stdio::Stdout as std::io::Write>::write_all(
                a3,
                anon_973acb088a118210f855931270ed248b_50_llvm_4119950667813314017,
                4LL);
        if ( v73 || (v73 = <std::io::stdio::Stdout as std::io::Write>::flush(a3)) != 0 )
        {
          v144 = v73;
          core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v144, &off_1487D8, &off_148A08);
        }
        v74 = 1;
        if ( v152 )
          v74 = v152;
        n = v153;
        if ( !v152 )
          n = 0LL;
        alloc::str::<impl str>::replace(
          (int)&v147,
          (int)"\r::::::::::::::\n"
               "\r{}\n"
               "\r::::::::::::::\n"
               "{}\n"
               "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
          36,
          (int)"{}\n"
               "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
          2,
          v74,
          n);
        v76 = v148;
        v77 = v149;
        core::slice::raw::from_raw_parts::precondition_check(v148, 1LL, 1LL, v149);
        v78 = <std::io::stdio::Stdout as std::io::Write>::write_all(a3, v76, v77);
        if ( v78 )
        {
          *(_QWORD *)&v127[0] = 0x8000000000000000LL;
          *((_QWORD *)&v127[1] + 1) = v78;
          v79 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          v80 = v79;
          if ( !v79 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v81 = v127[0];
          v79[1] = v127[1];
          *v79 = v81;
          alloc::raw_vec::RawVec<T,A>::current_memory(v127, &v147);
          if ( *((_QWORD *)&v127[0] + 1) )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v149,
              *(_QWORD *)&v127[0],
              *((_QWORD *)&v127[0] + 1),
              *(_QWORD *)&v127[1]);
          goto LABEL_204;
        }
        alloc::raw_vec::RawVec<T,A>::current_memory(v127, &v147);
        if ( *((_QWORD *)&v127[0] + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v149,
            *(_QWORD *)&v127[0],
            *((_QWORD *)&v127[0] + 1),
            *(_QWORD *)&v127[1]);
        if ( v124 >= 3u )
        {
          v124 -= 3;
          goto LABEL_89;
        }
        v110 = &off_148A20;
      }
      else
      {
        v110 = &off_1489F0;
      }
      core::panicking::panic_const::panic_const_sub_overflow(v110);
    }
LABEL_70:
    alloc::raw_vec::RawVec<T,A>::current_memory(v127, s2);
    if ( *((_QWORD *)&v127[0] + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &s2[2],
        *(_QWORD *)&v127[0],
        *((_QWORD *)&v127[0] + 1),
        *(_QWORD *)&v127[1]);
    if ( v70 )
      goto LABEL_192;
    v119 = v64;
  }
  if ( (_BYTE)v116 )
    goto LABEL_75;
LABEL_89:
  uu_more::Pager::draw(&v117, a3, 1114112LL);
  v83 = v124;
  if ( (_BYTE)v116 )
  {
    *(_QWORD *)(a9 + 24) = 0LL;
    v41 = __CFADD__(v83, 3);
    v83 += 3;
    if ( v41 )
      core::panicking::panic_const::panic_const_add_overflow(&off_148A38, a3, v82, a9);
    v124 = v83;
  }
  v41 = __CFADD__(v119, v83);
  v84 = v119 + v83;
  if ( v41 )
    v84 = -1LL;
  v80 = 0LL;
  if ( v84 >= v122 && !a7 )
    goto LABEL_204;
  do
  {
LABEL_98:
    crossterm::event::poll_internal(v155, 0LL, 10000000LL, 1LL);
    if ( (v155[0] & 1) != 0 )
    {
      v139 = v156;
      core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v139, &off_1487D8, &off_148A50);
    }
  }
  while ( (v155[1] & 1) == 0 );
  v85 = (__int64)v127;
  crossterm::event::read_internal(v127, 1LL);
  v86 = *((_QWORD *)&v127[0] + 1);
  if ( *(_QWORD *)&v127[0] == 0x8000000000000009LL )
  {
    v140 = *((_QWORD *)&v127[0] + 1);
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v140, &off_1487D8, &off_148A68);
  }
  *(_OWORD *)s2 = v127[0];
  s2[2] = *(void **)&v127[1];
  if ( (unsigned __int64)(*(_QWORD *)&v127[0] + 0x7FFFFFFFFFFFFFF7LL) >= 0xFFFFFFFFFFFFFFFDLL )
    core::panicking::panic(
      anon_d6e0f8116a55a38d502d941949823b54_35_llvm_586890690303824178,
      40LL,
      &anon_d6e0f8116a55a38d502d941949823b54_37_llvm_586890690303824178);
  v133 = v127[0];
  v134 = *(_QWORD *)&v127[1];
  v87 = *(_QWORD *)&v127[0] ^ 0x8000000000000000LL;
  v88 = 4LL;
  if ( (*(_QWORD *)&v127[0] ^ 0x8000000000000000LL) < 6 )
    v88 = *(_QWORD *)&v127[0] ^ 0x8000000000000000LL;
  if ( v88 != 2 )
  {
    if ( v88 == 5 )
    {
      LODWORD(v89) = 1114112;
      if ( *(_WORD *)(a9 + 32) != 1 )
      {
        v86 = HIWORD(DWORD2(v127[0]));
        LOWORD(v86) = WORD5(v127[0]) - 1;
        if ( !WORD5(v127[0]) )
          v86 = 0LL;
        v124 = v86;
      }
LABEL_110:
      if ( ((unsigned __int64)v133 ^ 0x8000000000000000LL) > 5 || ((unsigned __int64)v133 ^ 0x8000000000000000LL) == 4 )
      {
        v85 = (__int64)v127;
        v88 = (unsigned __int64)&v133;
        alloc::raw_vec::RawVec<T,A>::current_memory(v127, &v133);
        v86 = *((_QWORD *)&v127[0] + 1);
        if ( *((_QWORD *)&v127[0] + 1) )
        {
          v88 = *(_QWORD *)&v127[0];
          v85 = (__int64)&v134;
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v134,
            *(_QWORD *)&v127[0],
            *((_QWORD *)&v127[0] + 1),
            *(_QWORD *)&v127[1]);
        }
      }
      if ( (*(_BYTE *)(a9 + 37) & 1) != 0 )
      {
        v157 = std::io::stdio::stdout(v85, v88, v86);
        v92 = crossterm::command::write_command_ansi(&v157, 0LL, 0LL);
        if ( v92
          || (v127[0] = (unsigned __int64)&v157,
              (v92 = <std::io::stdio::Stdout as std::io::Write>::write_all(
                       &v157,
                       anon_973acb088a118210f855931270ed248b_48_llvm_4119950667813314017,
                       3LL)) != 0)
          || (*(_QWORD *)&v127[0] = std::io::stdio::stdout(
                                      &v157,
                                      anon_973acb088a118210f855931270ed248b_48_llvm_4119950667813314017,
                                      v93),
              (v92 = <std::io::stdio::Stdout as std::io::Write>::flush(v127)) != 0) )
        {
          v142 = v92;
          core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v142, &off_1487D8, &off_148A98);
        }
      }
      else if ( (*(_BYTE *)(a9 + 36) & 1) != 0 )
      {
        v138 = std::io::stdio::stdout(v85, v88, v86);
        v127[0] = (unsigned __int64)&v138;
        v90 = <std::io::stdio::Stdout as std::io::Write>::write_all(
                &v138,
                anon_973acb088a118210f855931270ed248b_46_llvm_4119950667813314017,
                4LL);
        if ( v90
          || (v90 = crossterm::command::write_command_ansi(&v138, 0LL, 0LL)) != 0
          || (*(_QWORD *)&v127[0] = std::io::stdio::stdout(&v138, 0LL, v91),
              (v90 = <std::io::stdio::Stdout as std::io::Write>::flush(v127)) != 0) )
        {
          v143 = v90;
          core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v143, &off_1487D8, &off_148A80);
        }
      }
      uu_more::Pager::draw(&v117, a3, (unsigned int)v89);
      goto LABEL_98;
    }
    goto LABEL_157;
  }
  v89 = HIDWORD(*((_QWORD *)&v127[0] + 1));
  v88 = *(_QWORD *)&v127[1] >> 16;
  if ( BYTE2(v127[1]) )
  {
    v88 = BYTE2(v127[1]);
    if ( BYTE2(v127[1]) == 1 )
    {
      v86 = (unsigned int)BYTE8(v127[0]) - 4;
      switch ( BYTE8(v127[0]) )
      {
        case 4:
        case 8:
          goto LABEL_133;
        case 5:
        case 9:
          goto LABEL_156;
        case 0xF:
          if ( LOBYTE(v127[1]) )
            goto LABEL_110;
          switch ( HIDWORD(v127[0]) )
          {
            case ' ':
              goto LABEL_172;
            case 'j':
              goto LABEL_166;
            case 'k':
              goto LABEL_184;
          }
          goto LABEL_110;
        default:
          break;
      }
    }
LABEL_157:
    if ( v87 > 5 || v87 == 4 )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(v127, &v133);
      if ( *((_QWORD *)&v127[0] + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          &v134,
          *(_QWORD *)&v127[0],
          *((_QWORD *)&v127[0] + 1),
          *(_QWORD *)&v127[1]);
    }
    goto LABEL_98;
  }
  v86 = (unsigned int)BYTE8(v127[0]) - 4;
  switch ( BYTE8(v127[0]) )
  {
    case 4:
    case 8:
LABEL_133:
      if ( LOBYTE(v127[1]) )
        goto LABEL_157;
      v94 = v123 + v124;
      v86 = v119;
      if ( __CFADD__(v123, v124) )
        v94 = -1LL;
      v88 = v119 - v94;
      v95 = 0LL;
      if ( v119 >= v94 )
        v95 = v119 - v94;
      v119 = v95;
      if ( (v126 & 1) == 0 )
        goto LABEL_151;
      v88 = *((_QWORD *)&v117 + 1);
      if ( !*((_QWORD *)&v117 + 1) || (BYTE8(v117) & 7) != 0 || v118 > 0x555555555555555LL )
        goto LABEL_227;
      v85 = *((_QWORD *)&v117 + 1) + 24 * v118;
      *(_QWORD *)&v127[0] = *((_QWORD *)&v117 + 1);
      *((_QWORD *)&v127[0] + 1) = v85;
      if ( v86 > v94 )
      {
        do
        {
          *(_QWORD *)&v127[1] = v95 - 1;
          v96 = *((_QWORD *)&v127[0] + 1) - *(_QWORD *)&v127[0];
          if ( *((_QWORD *)&v127[0] + 1) < *(_QWORD *)&v127[0] )
            core::panicking::panic_nounwind(anon_58afb1559eaf75b12060a08a7f3f0cc6_10_llvm_15235168960913987297, 71LL);
          v88 = 0LL;
          if ( v96 / 0x18 >= v95 )
            v88 = v96 / 0x18 - v95;
          v85 = (__int64)v127;
          v97 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::nth_back(
                  v127,
                  v88);
          if ( !v97 || *(_QWORD *)(v97 + 16) )
            break;
          v98 = 0LL;
          if ( v119 )
            v98 = v119 - 1;
          v119 = v98;
          v95 = *(_QWORD *)&v127[1];
        }
        while ( *(_QWORD *)&v127[1] );
      }
LABEL_151:
      LODWORD(v89) = 1114112;
      if ( *(_WORD *)(a9 + 32) != 1 )
        goto LABEL_110;
      v99 = crossterm::command::write_command_ansi(a3, 1LL, v86);
      if ( !v99 )
      {
        v99 = <std::io::stdio::Stdout as std::io::Write>::flush(a3);
        if ( !v99 )
        {
          v85 = a3;
          v88 = (unsigned __int64)aBack1Page;
          v100 = <std::io::stdio::Stdout as std::io::Write>::write_all(a3, aBack1Page, 17LL);
          if ( v100 )
          {
            *(_QWORD *)&v127[0] = 0x8000000000000000LL;
            *((_QWORD *)&v127[1] + 1) = v100;
            v106 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            v80 = (_OWORD *)v106;
            if ( !v106 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            goto LABEL_199;
          }
          goto LABEL_110;
        }
      }
      *(_QWORD *)&v127[0] = 0x8000000000000000LL;
      *((_QWORD *)&v127[1] + 1) = v99;
      v80 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v80 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_199:
      v107 = v127[0];
      v80[1] = v127[1];
      *v80 = v107;
LABEL_200:
      if ( ((unsigned __int64)v133 ^ 0x8000000000000000LL) > 5 || ((unsigned __int64)v133 ^ 0x8000000000000000LL) == 4 )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(v127, &v133);
        if ( *((_QWORD *)&v127[0] + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v134,
            *(_QWORD *)&v127[0],
            *((_QWORD *)&v127[0] + 1),
            *(_QWORD *)&v127[1]);
      }
LABEL_204:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v117);
      return v80;
    case 5:
    case 9:
LABEL_156:
      if ( LOBYTE(v127[1]) )
        goto LABEL_157;
      goto LABEL_172;
    case 0xF:
      if ( LOBYTE(v127[1]) == 2 )
      {
        if ( HIDWORD(v127[0]) == 99 )
          goto LABEL_188;
      }
      else if ( !LOBYTE(v127[1]) )
      {
        if ( SHIDWORD(v127[0]) > 106 )
        {
          if ( HIDWORD(v127[0]) == 107 )
          {
LABEL_184:
            v103 = 0LL;
            if ( v119 )
              v103 = v119 - 1;
            v119 = v103;
            LODWORD(v89) = 1114112;
          }
          else if ( HIDWORD(v127[0]) == 113 )
          {
LABEL_188:
            uu_more::reset_term(a3);
            std::process::exit(0);
          }
        }
        else if ( HIDWORD(v127[0]) == 32 )
        {
LABEL_172:
          v86 = v124 + v119;
          if ( __CFADD__(v124, v119) )
            v86 = -1LL;
          if ( v86 >= v122 )
            goto LABEL_189;
          v85 = 2 * (unsigned int)v124;
          v88 = v85 + v119;
          if ( __CFADD__(v85, v119) )
            v88 = -1LL;
          if ( v88 >= v122 )
          {
            if ( v122 < v124 )
              core::panicking::panic_const::panic_const_sub_overflow(&off_148AB0);
            v86 = v122 - v124;
          }
          v119 = v86;
          LODWORD(v89) = 1114112;
        }
        else if ( HIDWORD(v127[0]) == 106 )
        {
LABEL_166:
          v101 = v119 + v124;
          v86 = -1LL;
          if ( __CFADD__(v119, v124) )
            v101 = -1LL;
          if ( v101 >= v122 )
          {
LABEL_189:
            v80 = 0LL;
            goto LABEL_200;
          }
          v102 = v119 + 1;
          if ( v119 == -1LL )
            v102 = -1LL;
          v119 = v102;
          LODWORD(v89) = 1114112;
        }
      }
      goto LABEL_110;
    default:
      goto LABEL_157;
  }
}
