__int64 __fastcall uu_cp::copy(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  char is_dir; // bl
  char v11; // al
  __int64 (__fastcall **v12)(); // rbx
  __int64 (__fastcall *v13)(); // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int128 *v16; // rax
  __int128 *v17; // rax
  __int128 v18; // xmm0
  __int128 *v19; // rax
  __int128 *v20; // rax
  bool v21; // zf
  char v22; // r12
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // ecx
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rdx
  void *v46; // rbx
  size_t v47; // r14
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rbx
  __int64 (__fastcall *v51)(); // rax
  __int64 v52; // rbx
  __int64 v53; // r12
  __int64 v54; // r13
  char v55; // al
  const void *v56; // r12
  size_t v57; // rbx
  __int64 v58; // r14
  void *v59; // r15
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned __int8 v63; // [rsp+4h] [rbp-6F4h]
  __int64 v65; // [rsp+10h] [rbp-6E8h]
  char v66; // [rsp+10h] [rbp-6E8h]
  __int128 v68; // [rsp+20h] [rbp-6D8h]
  __int128 v69; // [rsp+20h] [rbp-6D8h]
  __int128 v70; // [rsp+20h] [rbp-6D8h]
  unsigned __int64 v71; // [rsp+20h] [rbp-6D8h]
  __int64 v72; // [rsp+20h] [rbp-6D8h]
  void *src[2]; // [rsp+30h] [rbp-6C8h] BYREF
  size_t n; // [rsp+40h] [rbp-6B8h]
  __int64 v75; // [rsp+48h] [rbp-6B0h]
  __m256i v76; // [rsp+50h] [rbp-6A8h] BYREF
  __int128 v77; // [rsp+70h] [rbp-688h]
  __int128 v78; // [rsp+80h] [rbp-678h]
  __int64 v79; // [rsp+90h] [rbp-668h]
  _BYTE v80[77]; // [rsp+A0h] [rbp-658h] BYREF
  __int128 v81; // [rsp+EDh] [rbp-60Bh]
  __int128 v82; // [rsp+FDh] [rbp-5FBh]
  _OWORD v83[4]; // [rsp+10Dh] [rbp-5EBh]
  __int128 v84; // [rsp+158h] [rbp-5A0h] BYREF
  __int64 v85; // [rsp+168h] [rbp-590h]
  __int128 v86; // [rsp+170h] [rbp-588h] BYREF
  __int64 v87; // [rsp+180h] [rbp-578h]
  _BYTE *v88; // [rsp+190h] [rbp-568h]
  __int64 v89; // [rsp+198h] [rbp-560h]
  char **v90; // [rsp+1A0h] [rbp-558h]
  char v91[8]; // [rsp+1A8h] [rbp-550h] BYREF
  char v92[8]; // [rsp+1B0h] [rbp-548h] BYREF
  int v93; // [rsp+1B8h] [rbp-540h] BYREF
  char v94; // [rsp+1BCh] [rbp-53Ch]
  __int64 (__fastcall *v95)(); // [rsp+1C0h] [rbp-538h] BYREF
  __int64 (__fastcall *v96)(); // [rsp+1C8h] [rbp-530h]
  __int64 *v97; // [rsp+1D0h] [rbp-528h]
  __int64 (__fastcall *v98)(); // [rsp+1D8h] [rbp-520h]
  __int128 v99; // [rsp+1E0h] [rbp-518h] BYREF
  __int128 v100; // [rsp+1F0h] [rbp-508h]
  __int128 v101; // [rsp+200h] [rbp-4F8h] BYREF
  __int128 v102; // [rsp+210h] [rbp-4E8h] BYREF
  __int64 v103; // [rsp+220h] [rbp-4D8h]
  __int128 v104; // [rsp+230h] [rbp-4C8h] BYREF
  __int64 v105; // [rsp+240h] [rbp-4B8h]
  __int64 *v106; // [rsp+248h] [rbp-4B0h] BYREF
  __int64 (__fastcall *v107)(); // [rsp+250h] [rbp-4A8h]
  __int64 v108; // [rsp+258h] [rbp-4A0h]
  _BYTE v109[64]; // [rsp+260h] [rbp-498h] BYREF
  __int128 v110; // [rsp+2A0h] [rbp-458h] BYREF
  __int128 v111; // [rsp+2B0h] [rbp-448h]
  __int128 v112; // [rsp+2C0h] [rbp-438h] BYREF
  __int128 v113; // [rsp+2D8h] [rbp-420h] BYREF
  __int64 v114; // [rsp+2E8h] [rbp-410h]
  __int64 v115; // [rsp+2F0h] [rbp-408h] BYREF
  __int128 v116; // [rsp+2F8h] [rbp-400h]
  __int64 v117; // [rsp+308h] [rbp-3F0h]
  __int128 v118; // [rsp+310h] [rbp-3E8h]
  __int128 v119; // [rsp+320h] [rbp-3D8h]
  _OWORD v120[2]; // [rsp+330h] [rbp-3C8h] BYREF
  __int128 v121; // [rsp+350h] [rbp-3A8h] BYREF
  _OWORD v122[2]; // [rsp+360h] [rbp-398h] BYREF
  __int128 v123; // [rsp+380h] [rbp-378h] BYREF
  __int128 v124; // [rsp+390h] [rbp-368h] BYREF
  __int64 v125; // [rsp+3A0h] [rbp-358h]
  __int128 v126; // [rsp+3A8h] [rbp-350h] BYREF
  __int64 v127; // [rsp+3B8h] [rbp-340h]
  _QWORD v128[2]; // [rsp+3C0h] [rbp-338h] BYREF
  _QWORD v129[2]; // [rsp+3D0h] [rbp-328h] BYREF
  _QWORD v130[2]; // [rsp+3E0h] [rbp-318h] BYREF
  _QWORD v131[2]; // [rsp+3F0h] [rbp-308h] BYREF
  _QWORD v132[2]; // [rsp+400h] [rbp-2F8h] BYREF
  __int128 v133; // [rsp+410h] [rbp-2E8h] BYREF
  __int64 v134; // [rsp+420h] [rbp-2D8h]
  _QWORD v135[3]; // [rsp+428h] [rbp-2D0h] BYREF
  _QWORD v136[3]; // [rsp+440h] [rbp-2B8h] BYREF
  char v137; // [rsp+458h] [rbp-2A0h]
  _QWORD v138[4]; // [rsp+460h] [rbp-298h] BYREF
  __int128 v139; // [rsp+480h] [rbp-278h]
  __int128 v140; // [rsp+490h] [rbp-268h]
  __int128 v141; // [rsp+4A0h] [rbp-258h]
  __int128 v142; // [rsp+4B0h] [rbp-248h]
  __int128 v143; // [rsp+4C0h] [rbp-238h]
  __int128 v144; // [rsp+4D0h] [rbp-228h]
  _OWORD v145[2]; // [rsp+4E0h] [rbp-218h]
  __int128 v146; // [rsp+500h] [rbp-1F8h]
  __int64 (__fastcall *v147)(); // [rsp+510h] [rbp-1E8h]
  __int64 v148; // [rsp+518h] [rbp-1E0h]
  __int128 v149; // [rsp+520h] [rbp-1D8h]
  __int64 v150; // [rsp+530h] [rbp-1C8h]
  _OWORD v151[4]; // [rsp+540h] [rbp-1B8h] BYREF
  _QWORD v152[6]; // [rsp+588h] [rbp-170h] BYREF
  _QWORD v153[6]; // [rsp+5B8h] [rbp-140h] BYREF
  __int128 v154; // [rsp+5E8h] [rbp-110h] BYREF
  __int64 v155; // [rsp+5F8h] [rbp-100h]
  __m256i v156; // [rsp+600h] [rbp-F8h] BYREF
  __int128 v157; // [rsp+620h] [rbp-D8h]
  __int128 v158; // [rsp+630h] [rbp-C8h]
  __int64 v159; // [rsp+640h] [rbp-B8h] BYREF
  int v160; // [rsp+648h] [rbp-B0h]
  char v161; // [rsp+64Ch] [rbp-ACh]
  __int128 v162; // [rsp+64Dh] [rbp-ABh]
  __int128 v163; // [rsp+65Dh] [rbp-9Bh]
  __int128 v164; // [rsp+66Dh] [rbp-8Bh]
  __int128 v165; // [rsp+67Dh] [rbp-7Bh]
  __int128 v166; // [rsp+68Dh] [rbp-6Bh]
  __int128 v167; // [rsp+69Dh] [rbp-5Bh]
  _OWORD v168[4]; // [rsp+6ADh] [rbp-4Bh]

  v6 = a5;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a3 >= 2 )
  {
    if ( (unsigned __int8)std::path::Path::is_dir(a4, a5) )
    {
LABEL_3:
      v63 = 0;
      goto LABEL_10;
    }
    goto LABEL_6;
  }
  is_dir = std::path::Path::is_dir(a4, a5);
  v11 = std::path::Path::is_dir(v7, v6);
  if ( is_dir )
  {
    v8 = a3;
    if ( v11 )
      goto LABEL_3;
LABEL_6:
    v115 = 1LL;
    *(_QWORD *)&v116 = v7;
    *((_QWORD *)&v116 + 1) = v6;
    LOBYTE(v117) = 1;
    v106 = &v115;
    v107 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v80 = &off_1824B0;
    *(_QWORD *)&v80[8] = 2LL;
    *(_QWORD *)&v80[16] = &v106;
    *(_QWORD *)&v80[24] = 1LL;
    *(_QWORD *)&v80[32] = 0LL;
    v12 = (__int64 (__fastcall **)())&v104;
LABEL_9:
    alloc::fmt::format::format_inner(v12, v80);
    v147 = v12[2];
    v146 = *(_OWORD *)v12;
    *(_QWORD *)a1 = 4LL;
    v13 = v147;
    v14 = v148;
    v15 = v149;
    *(_OWORD *)(a1 + 8) = v146;
    *(_QWORD *)(a1 + 24) = v13;
    *(_QWORD *)(a1 + 32) = v14;
    *(_OWORD *)(a1 + 40) = v15;
    *(_QWORD *)(a1 + 56) = v150;
    return a1;
  }
  v63 = 1;
  v8 = a3;
  if ( v11 )
  {
    v76.m256i_i64[0] = 1LL;
    v76.m256i_i64[1] = v7;
    v76.m256i_i64[2] = v6;
    v76.m256i_i8[24] = 1;
    *(_QWORD *)&v84 = &v76;
    *((_QWORD *)&v84 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v80 = &off_182188;
    *(_QWORD *)&v80[8] = 2LL;
    *(_QWORD *)&v80[16] = &v84;
    *(_QWORD *)&v80[24] = 1LL;
    *(_QWORD *)&v80[32] = 0LL;
    v12 = &v95;
    goto LABEL_9;
  }
LABEL_10:
  v16 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
  if ( !v16 )
    core::result::unwrap_failed(
      anon_dd6310c77d121ecce151d075805ee620_13_llvm_1613436602710632571,
      70LL,
      &v76,
      &anon_30ecf5788dc16ea493c1f299142c4ef1_21_llvm_10347183305587337279,
      &anon_dd6310c77d121ecce151d075805ee620_15_llvm_1613436602710632571);
  v68 = *v16;
  ++*(_QWORD *)v16;
  hashbrown::raw::RawTableInner::fallible_with_capacity(v80, &v76, 8LL, 16LL, v8, 1LL);
  v110 = *(_OWORD *)v80;
  v111 = *(_OWORD *)&v80[16];
  v112 = v68;
  v17 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
  if ( !v17 )
    core::result::unwrap_failed(
      anon_e7d63773c8ae8cffa7d6cf299f644269_0_llvm_2867345112236685835,
      70LL,
      &v76,
      &anon_30ecf5788dc16ea493c1f299142c4ef1_21_llvm_10347183305587337279,
      &anon_e7d63773c8ae8cffa7d6cf299f644269_2_llvm_2867345112236685835);
  v18 = *v17;
  ++*(_QWORD *)v17;
  v120[1] = xmmword_183058;
  v120[0] = *(_OWORD *)&anon_d6a1a7366457195d1067c1353ddc908a_30_llvm_6178963345535870772;
  v121 = v18;
  v19 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
  if ( !v19 )
    core::result::unwrap_failed(
      anon_dd6310c77d121ecce151d075805ee620_13_llvm_1613436602710632571,
      70LL,
      &v76,
      &anon_30ecf5788dc16ea493c1f299142c4ef1_21_llvm_10347183305587337279,
      &anon_dd6310c77d121ecce151d075805ee620_15_llvm_1613436602710632571);
  v69 = *v19;
  ++*(_QWORD *)v19;
  hashbrown::raw::RawTableInner::fallible_with_capacity(v80, &v76, 168LL, 16LL, v8, 1LL);
  v122[0] = *(_OWORD *)v80;
  v122[1] = *(_OWORD *)&v80[16];
  v123 = v69;
  v20 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
  if ( !v20 )
    core::result::unwrap_failed(
      anon_dd6310c77d121ecce151d075805ee620_13_llvm_1613436602710632571,
      70LL,
      &v76,
      &anon_30ecf5788dc16ea493c1f299142c4ef1_21_llvm_10347183305587337279,
      &anon_dd6310c77d121ecce151d075805ee620_15_llvm_1613436602710632571);
  v70 = *v20;
  ++*(_QWORD *)v20;
  hashbrown::raw::RawTableInner::fallible_with_capacity(v80, &v76, 24LL, 16LL, v8, 1LL);
  v99 = *(_OWORD *)v80;
  v100 = *(_OWORD *)&v80[16];
  v101 = v70;
  v21 = (a6[73] & 1) == 0;
  v89 = v6;
  v75 = v7;
  if ( v21 )
  {
    *(_QWORD *)&v86 = 0LL;
    goto LABEL_33;
  }
  v22 = a6[70];
  v71 = v8;
  v23 = a2 + 24 * v8;
  v65 = 0LL;
  v90 = &off_1824D0;
  v24 = a2;
LABEL_17:
  v88 = (_BYTE *)v24;
  do
  {
    if ( v24 == v23 || (v25 = v24) == 0 )
    {
      indicatif::progress_bar::ProgressBar::new(&v113, v65);
      indicatif::style::Template::from_str_with_tab_width(&v115, aMsgElapsedPrec, 64LL, 8LL);
      LODWORD(v6) = v89;
      v7 = v75;
      v30 = v116;
      v31 = BYTE4(v116);
      if ( v115 == 0x8000000000000000LL )
        goto LABEL_129;
      v76.m256i_i32[5] = HIDWORD(v116);
      *(__int64 *)((char *)&v76.m256i_i64[1] + 5) = *(_QWORD *)((char *)&v116 + 5);
      v76.m256i_i64[0] = v115;
      v76.m256i_i32[2] = v116;
      v76.m256i_i8[12] = BYTE4(v116);
      indicatif::style::ProgressStyle::new(v80, &v76);
      v30 = *(_DWORD *)&v80[8];
      v31 = v80[12];
      v139 = *(_OWORD *)&v80[13];
      v140 = *(_OWORD *)&v80[29];
      v141 = *(_OWORD *)&v80[45];
      v142 = *(_OWORD *)&v80[61];
      v143 = v81;
      v144 = v82;
      v145[0] = v83[0];
      *(_OWORD *)((char *)v145 + 11) = *(_OWORD *)((char *)v83 + 11);
      if ( *(_QWORD *)v80 == 0x8000000000000000LL )
      {
LABEL_129:
        v93 = v30;
        v94 = v31;
        core::result::unwrap_failed(aCalledResultUn_0, 43LL, &v93, &unk_181B50, &off_182100);
      }
      v159 = *(_QWORD *)v80;
      v160 = *(_DWORD *)&v80[8];
      v161 = v80[12];
      v162 = v139;
      v163 = v140;
      v164 = v141;
      v165 = v142;
      v166 = v143;
      v167 = v144;
      v168[0] = v145[0];
      *(_OWORD *)((char *)v168 + 11) = *(_OWORD *)((char *)v145 + 11);
      indicatif::progress_bar::ProgressBar::set_style(&v113, &v159);
      v134 = v114;
      v133 = v113;
      v32 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v33 = *(_QWORD *)(v32 + 8);
      v34 = *(_QWORD *)(v32 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v33, 1LL, 1LL, v34);
      indicatif::progress_bar::ProgressBar::with_message(&v126, &v133, v33, v34);
      v35 = std::time::Instant::now();
      v8 = v71;
      indicatif::progress_bar::ProgressBar::tick_inner(&v126, v35);
      v87 = v127;
      v86 = v126;
LABEL_33:
      v72 = v9 + 24 * v8;
      v88 = a6 + 48;
      v66 = 0;
      while ( 1 )
      {
        if ( v9 == v72 || !v9 )
        {
          if ( (_QWORD)v86 )
          {
            v125 = v87;
            v124 = v86;
            indicatif::progress_bar::ProgressBar::finish(&v124);
            core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v124);
          }
          *(_QWORD *)a1 = 8LL * ((v66 & 1) == 0) + 5;
          hashbrown::raw::RawTableInner::drop_inner_table(&v99, &v101, 24LL, 16LL);
          hashbrown::raw::RawTableInner::drop_inner_table(v122, &v123, 168LL, 16LL);
          hashbrown::raw::RawTableInner::drop_inner_table(v120, &v121, 144LL, 16LL);
          goto LABEL_116;
        }
        if ( *((_QWORD *)&v111 + 1) )
        {
          *(_OWORD *)&v80[32] = v112;
          memset(v80, 0, 32);
          memset(&v80[48], 0, 24);
          core::hash::sip::Hasher<S>::reset(v80);
          v79 = *(_QWORD *)&v80[64];
          v78 = *(_OWORD *)&v80[48];
          v77 = *(_OWORD *)&v80[32];
          v76 = *(__m256i *)v80;
          v36 = *(_QWORD *)(v9 + 8);
          v37 = *(_QWORD *)(v9 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v36, 1LL, 1LL, v37);
          <std::path::Path as core::hash::Hash>::hash(v36, v37, &v76);
          v38 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(&v76);
          if ( hashbrown::raw::RawTable<T,A>::find(&v110, v38, v9) )
          {
            v39 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            v40 = *(_QWORD *)(v39 + 8);
            v41 = *(_QWORD *)(v39 + 16);
            core::slice::raw::from_raw_parts::precondition_check(v40, 1LL, 1LL, v41);
            v129[0] = v40;
            v129[1] = v41;
            v128[0] = v129;
            v128[1] = <&T as core::fmt::Display>::fmt;
            v152[0] = &unk_182148;
            v152[1] = 2LL;
            v152[4] = 0LL;
            v152[2] = v128;
            v152[3] = 1LL;
            std::io::stdio::_eprint(v152);
            v42 = *(_QWORD *)(v9 + 8);
            if ( !v42 )
              goto LABEL_128;
            v43 = *(_QWORD *)(v9 + 16);
            if ( v43 < 0 )
              goto LABEL_128;
            v136[0] = 1LL;
            v136[1] = v42;
            v136[2] = v43;
            v137 = 1;
            v130[0] = v136;
            v130[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            v153[0] = &off_182168;
            v153[1] = 2LL;
            v153[4] = 0LL;
            v153[2] = v130;
            v153[3] = 1LL;
            std::io::stdio::_eprint(v153);
            goto LABEL_35;
          }
        }
        v44 = *(_QWORD *)(v9 + 8);
        if ( !v44 )
          goto LABEL_128;
        v45 = *(_QWORD *)(v9 + 16);
        if ( v45 < 0 )
          goto LABEL_128;
        uu_cp::construct_dest_path((unsigned int)&v156, v44, v45, v7, v6, v63, (__int64)a6);
        if ( v156.m256i_i64[0] == 13 )
        {
          n = v156.m256i_u64[3];
          *(_OWORD *)src = *(_OWORD *)&v156.m256i_u64[1];
        }
        else
        {
          *(_OWORD *)&v80[48] = v158;
          *(_OWORD *)&v80[32] = v157;
          *(__m256i *)v80 = v156;
          std::path::Path::to_path_buf(src, v7);
          core::ptr::drop_in_place<uu_cp::Error>(v80);
        }
        core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n);
        std::sys::pal::unix::fs::stat(v80);
        if ( *(_QWORD *)v80 == 2LL )
        {
          std::io::error::repr_bitpacked::decode_repr(v80, *(_QWORD *)&v80[8]);
          if ( v80[0] >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v80[8]);
        }
        else
        {
          core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n);
          std::sys::pal::unix::fs::lstat(v80);
          if ( *(_QWORD *)v80 == 2LL )
            goto LABEL_107;
          if ( (*(_WORD *)&v80[56] & 0xF000) != 0xA000 )
            goto LABEL_59;
        }
        core::slice::raw::from_raw_parts::precondition_check(*(_QWORD *)(v9 + 8), 1LL, 1LL, *(_QWORD *)(v9 + 16));
        std::sys::pal::unix::fs::stat(v80);
        if ( *(_QWORD *)v80 == 2LL )
        {
          std::io::error::repr_bitpacked::decode_repr(v80, *(_QWORD *)&v80[8]);
          if ( v80[0] >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v80[8]);
        }
        else
        {
          core::slice::raw::from_raw_parts::precondition_check(*(_QWORD *)(v9 + 8), 1LL, 1LL, *(_QWORD *)(v9 + 16));
          std::sys::pal::unix::fs::lstat(v80);
          if ( *(_QWORD *)v80 == 2LL )
          {
LABEL_107:
            v60 = *(_QWORD *)&v80[8];
            *(_QWORD *)a1 = 2LL;
            *(_QWORD *)(a1 + 8) = v60;
LABEL_113:
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
            if ( (_QWORD)v86 )
              core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v86);
            goto LABEL_115;
          }
          if ( (*(_WORD *)&v80[56] & 0xF000) == 0xA000 )
          {
LABEL_59:
            if ( *((_QWORD *)&v100 + 1) )
            {
              *(_OWORD *)&v80[32] = v101;
              memset(v80, 0, 32);
              memset(&v80[48], 0, 24);
              core::hash::sip::Hasher<S>::reset(v80);
              v79 = *(_QWORD *)&v80[64];
              v78 = *(_OWORD *)&v80[48];
              v77 = *(_OWORD *)&v80[32];
              v76 = *(__m256i *)v80;
              v46 = src[1];
              v47 = n;
              core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n);
              <std::path::Path as core::hash::Hash>::hash(v46, v47, &v76);
              v48 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(&v76);
              if ( hashbrown::raw::RawTable<T,A>::find(&v99, v48, src) )
              {
                if ( a6[76] != 2 )
                {
                  if ( src[1] )
                  {
                    if ( (n & 0x8000000000000000LL) == 0LL )
                    {
                      v131[0] = src[1];
                      v131[1] = n;
                      if ( *(_QWORD *)(v9 + 8) )
                      {
                        v61 = *(_QWORD *)(v9 + 16);
                        if ( v61 >= 0 )
                        {
                          v132[0] = *(_QWORD *)(v9 + 8);
                          v132[1] = v61;
                          v138[0] = v131;
                          v138[1] = <std::path::Display as core::fmt::Display>::fmt;
                          v138[2] = v132;
                          v138[3] = <std::path::Display as core::fmt::Display>::fmt;
                          *(_QWORD *)v80 = &off_182118;
                          *(_QWORD *)&v80[8] = 3LL;
                          *(_QWORD *)&v80[16] = v138;
                          *(_QWORD *)&v80[24] = 2LL;
                          *(_QWORD *)&v80[32] = 0LL;
                          alloc::fmt::format::format_inner(&v154, v80);
                          *(_QWORD *)a1 = 4LL;
                          *(_OWORD *)(a1 + 8) = v154;
                          *(_QWORD *)(a1 + 24) = v155;
                          goto LABEL_113;
                        }
                      }
                    }
                  }
LABEL_128:
                  core::panicking::panic_nounwind(
                    anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571,
                    162LL);
                }
              }
            }
            goto LABEL_62;
          }
        }
        if ( a6[78] == 1 )
          goto LABEL_59;
LABEL_62:
        v49 = *(_QWORD *)(v9 + 8);
        if ( !v49 )
          goto LABEL_128;
        v50 = *(_QWORD *)(v9 + 16);
        if ( v50 < 0 )
          goto LABEL_128;
        if ( (unsigned __int8)std::path::Path::is_dir(*(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16)) )
        {
          uu_cp::copydir::copy_directory(
            (unsigned int)v109,
            (unsigned int)&v86,
            v49,
            v50,
            v75,
            v6,
            (__int64)a6,
            (__int64)v120,
            (__int64)&v99,
            (__int64)v122,
            1);
        }
        else
        {
          uu_cp::construct_dest_path((unsigned int)&v115, v49, v50, v75, v6, v63, (__int64)a6);
          if ( v115 == 13 )
          {
            v102 = v116;
            v103 = v117;
            if ( !*((_QWORD *)&v116 + 1) || v117 < 0 )
              goto LABEL_128;
            uu_cp::copy_file(&v76, &v86, v49, v50, *((_QWORD *)&v116 + 1), v117, a6, v120, &v99, v122, 1LL);
            if ( (a6[68] & 1) != 0 )
            {
              if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                goto LABEL_128;
              uu_cp::aligned_ancestors(&v106, v49, v50);
              v51 = v107;
              v95 = v107;
              v96 = v107;
              v97 = v106;
              v98 = (__int64 (__fastcall *)())((char *)v107 + 32 * v108);
              if ( v108 )
              {
                do
                {
                  v96 = (__int64 (__fastcall *)())((char *)v51 + 32);
                  if ( !*(_QWORD *)v51 )
                    break;
                  v52 = *((_QWORD *)v51 + 2);
                  v53 = *((_QWORD *)v51 + 3);
                  uucore::features::fs::canonicalize(&v84, *(_QWORD *)v51, *((_QWORD *)v51 + 1), 0LL, 1LL);
                  if ( (_QWORD)v84 == 0x8000000000000000LL )
                    goto LABEL_83;
                  v104 = v84;
                  v105 = v85;
                  if ( !*((_QWORD *)&v84 + 1) || v85 < 0 )
                    goto LABEL_128;
                  uu_cp::copy_attributes(v80, *((_QWORD *)&v84 + 1), v85, v52, v53, v88);
                  if ( *(_QWORD *)v80 != 13LL )
                  {
                    *(_QWORD *)v109 = *(_QWORD *)v80;
                    *(_QWORD *)&v109[56] = *(_QWORD *)&v80[56];
                    *(_OWORD *)&v109[40] = *(_OWORD *)&v80[40];
                    *(_OWORD *)&v109[24] = *(_OWORD *)&v80[24];
                    *(_OWORD *)&v109[8] = *(_OWORD *)&v80[8];
                    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v104);
                    if ( (_QWORD)v84 == 0x8000000000000000LL )
                    {
                      std::io::error::repr_bitpacked::decode_repr(v91, *((_QWORD *)&v84 + 1));
                      if ( v91[0] >= 3u )
                        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v92);
                    }
                    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v95);
                    if ( v76.m256i_i64[0] != 13 )
                      core::ptr::drop_in_place<uu_cp::Error>(&v76);
                    goto LABEL_75;
                  }
                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v104);
                  if ( (_QWORD)v84 == 0x8000000000000000LL )
                  {
LABEL_83:
                    std::io::error::repr_bitpacked::decode_repr(v91, *((_QWORD *)&v84 + 1));
                    if ( v91[0] >= 3u )
                      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v92);
                  }
                  v51 = v96;
                }
                while ( v96 != v98 );
              }
              <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v95);
            }
            *(_OWORD *)&v109[48] = v78;
            *(_OWORD *)&v109[32] = v77;
            *(__m256i *)v109 = v76;
LABEL_75:
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v102);
          }
          else
          {
            *(_QWORD *)v109 = v115;
            *(_QWORD *)&v109[24] = v117;
            *(_OWORD *)&v109[8] = v116;
            *(_OWORD *)&v109[48] = v119;
            *(_OWORD *)&v109[32] = v118;
          }
        }
        v54 = *(_QWORD *)v109;
        if ( *(_QWORD *)v109 == 13LL )
        {
          v56 = src[1];
          v57 = n;
          core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n);
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(v80, v57, 0LL);
          v58 = *(_QWORD *)&v80[8];
          if ( *(_QWORD *)v80 )
            alloc::raw_vec::handle_error(*(_QWORD *)&v80[8], *(_QWORD *)&v80[16]);
          v59 = *(void **)&v80[16];
          core::intrinsics::copy_nonoverlapping::precondition_check(v56, *(_QWORD *)&v80[16], 1LL, 1LL, v57);
          memcpy(v59, v56, v57);
          v135[0] = v58;
          v135[1] = v59;
          v135[2] = v57;
          hashbrown::map::HashMap<K,V,S,A>::insert(&v99, v135);
        }
        else
        {
          v151[3] = *(_OWORD *)&v109[48];
          v151[2] = *(_OWORD *)&v109[32];
          v151[1] = *(_OWORD *)&v109[16];
          v151[0] = *(_OWORD *)v109;
          uu_cp::show_error_if_needed(v151);
          v55 = v66;
          if ( (BYTE8(v151[0]) & 1) != 0 )
            v55 = 1;
          if ( *(_QWORD *)&v151[0] != 8LL )
            v55 = 1;
          v66 = v55;
          core::ptr::drop_in_place<uu_cp::Error>(v151);
        }
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
        v7 = v75;
        if ( v54 == 13 )
        {
          LODWORD(v6) = v89;
          if ( *(_QWORD *)v109 != 13LL )
            core::ptr::drop_in_place<uu_cp::Error>(v109);
        }
        else
        {
          LODWORD(v6) = v89;
        }
LABEL_35:
        hashbrown::map::HashMap<K,V,S,A>::insert(&v110, v9);
        v9 += 24LL;
      }
    }
    v26 = *(_QWORD *)(v24 + 8);
    core::slice::raw::from_raw_parts::precondition_check(v26, 1LL, 1LL, *(_QWORD *)(v24 + 16));
    v27 = v26;
    std::sys::pal::unix::fs::stat(v80);
    if ( *(_QWORD *)v80 == 2LL )
    {
      v28 = *(_QWORD *)&v80[8];
      goto LABEL_106;
    }
    if ( (*(_WORD *)&v80[56] & 0xF000) != 0x4000 )
    {
      v29 = *(_QWORD *)((char *)&v81 + 3) + v65;
      if ( __CFADD__(*(_QWORD *)((char *)&v81 + 3), v65) )
LABEL_131:
        core::panicking::panic_const::panic_const_add_overflow(v90, v27);
LABEL_29:
      v65 = v29;
      v24 = v25 + 24;
      goto LABEL_17;
    }
    v24 = v25 + 24;
  }
  while ( (v22 & 1) == 0 );
  if ( !*((_QWORD *)v88 + 1) )
    goto LABEL_128;
  v27 = *((_QWORD *)v88 + 2);
  if ( v27 < 0 )
    goto LABEL_128;
  if ( !uu_cp::disk_usage_directory() )
  {
    v29 = v28 + v65;
    if ( __CFADD__(v28, v65) )
    {
      v90 = &off_1824E8;
      goto LABEL_131;
    }
    goto LABEL_29;
  }
LABEL_106:
  *(_QWORD *)a1 = 2LL;
  *(_QWORD *)(a1 + 8) = v28;
LABEL_115:
  hashbrown::raw::RawTableInner::drop_inner_table(&v99, &v101, 24LL, 16LL);
  hashbrown::raw::RawTableInner::drop_inner_table(v122, &v123, 168LL, 16LL);
  hashbrown::raw::RawTableInner::drop_inner_table(v120, &v121, 144LL, 16LL);
LABEL_116:
  hashbrown::raw::RawTableInner::drop_inner_table(&v110, &v112, 8LL, 16LL);
  return a1;
}
