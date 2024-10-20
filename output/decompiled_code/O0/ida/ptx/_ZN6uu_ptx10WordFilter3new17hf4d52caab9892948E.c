__int64 __fastcall uu_ptx::WordFilter::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v6; // rax
  __int128 *v7; // rax
  __int128 v8; // xmm0
  __int128 *v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  __int128 *v16; // rax
  __int128 *v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  char v21; // bp
  __int128 v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // r14
  char v27; // al
  __int64 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned __int128 v33; // xmm1
  __int128 v34; // xmm2
  unsigned __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int64 v37; // r14
  __int64 v39; // r12
  __int64 v40; // r13
  _QWORD *v41; // rax
  __int128 *v42; // rax
  __int128 v43; // xmm0
  __int64 v44; // r13
  _QWORD *v45; // rax
  __int128 *v46; // rax
  _QWORD *v47; // rax
  __int128 *v48; // rax
  __int128 v49; // xmm0
  __int128 v50; // xmm0
  char **v51; // rsi
  char **v52; // rsi
  int fd; // [rsp+Ch] [rbp-36Ch] BYREF
  _BYTE v54[72]; // [rsp+10h] [rbp-368h] BYREF
  const char *v55; // [rsp+58h] [rbp-320h] BYREF
  __int64 v56; // [rsp+60h] [rbp-318h]
  __int64 v57; // [rsp+68h] [rbp-310h]
  const char **v58; // [rsp+70h] [rbp-308h] BYREF
  __int64 (__fastcall *v59)(); // [rsp+78h] [rbp-300h]
  __m256i *v60; // [rsp+80h] [rbp-2F8h]
  __int64 (__fastcall *v61)(); // [rsp+88h] [rbp-2F0h]
  __m256i v62; // [rsp+90h] [rbp-2E8h] BYREF
  __int128 v63; // [rsp+B0h] [rbp-2C8h]
  __int128 v64; // [rsp+C0h] [rbp-2B8h]
  char **v65; // [rsp+D0h] [rbp-2A8h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-2A0h]
  const char ***v67; // [rsp+E0h] [rbp-298h]
  __int64 v68; // [rsp+E8h] [rbp-290h]
  __int64 v69; // [rsp+F0h] [rbp-288h]
  __int64 v70; // [rsp+100h] [rbp-278h]
  __int128 v71; // [rsp+108h] [rbp-270h] BYREF
  unsigned __int128 v72; // [rsp+118h] [rbp-260h]
  __int128 v73; // [rsp+128h] [rbp-250h]
  __int128 v74; // [rsp+138h] [rbp-240h] BYREF
  unsigned __int128 v75; // [rsp+148h] [rbp-230h]
  __int128 v76; // [rsp+158h] [rbp-220h]
  __int64 v77; // [rsp+168h] [rbp-210h]
  _DWORD v78[2]; // [rsp+170h] [rbp-208h] BYREF
  __int64 v79; // [rsp+178h] [rbp-200h]
  __m256i v80; // [rsp+180h] [rbp-1F8h] BYREF
  __int128 v81; // [rsp+1A0h] [rbp-1D8h]
  __m256i v82; // [rsp+1B0h] [rbp-1C8h]
  __int128 v83; // [rsp+1D0h] [rbp-1A8h]
  _QWORD v84[3]; // [rsp+1E8h] [rbp-190h] BYREF
  _QWORD v85[2]; // [rsp+200h] [rbp-178h] BYREF
  _QWORD v86[2]; // [rsp+210h] [rbp-168h] BYREF
  __int128 v87; // [rsp+220h] [rbp-158h]
  __int64 v88; // [rsp+230h] [rbp-148h]
  __int128 v89; // [rsp+240h] [rbp-138h]
  _BYTE v90[24]; // [rsp+250h] [rbp-128h]
  __int64 v91; // [rsp+268h] [rbp-110h]
  _QWORD v92[3]; // [rsp+270h] [rbp-108h] BYREF
  _QWORD v93[3]; // [rsp+288h] [rbp-F0h] BYREF
  __int128 *v94; // [rsp+2A0h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+2A8h] [rbp-D0h]
  unsigned __int64 v96; // [rsp+2B0h] [rbp-C8h]
  unsigned __int64 v97; // [rsp+2B8h] [rbp-C0h]
  __int128 v98; // [rsp+2C0h] [rbp-B8h]
  __int128 *v99; // [rsp+2D0h] [rbp-A8h] BYREF
  __int64 v100; // [rsp+2D8h] [rbp-A0h]
  unsigned __int64 v101; // [rsp+2E0h] [rbp-98h]
  unsigned __int64 v102; // [rsp+2E8h] [rbp-90h]
  __int128 v103; // [rsp+2F0h] [rbp-88h]
  _OWORD v104[7]; // [rsp+300h] [rbp-78h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
    v54,
    a2,
    anon_8ffa798e1188aa055e40a44719e13e52_45_llvm_11133899800467015185,
    9LL);
  v55 = anon_8ffa798e1188aa055e40a44719e13e52_45_llvm_11133899800467015185;
  v56 = 9LL;
  if ( (v54[0] & 1) != 0 )
  {
    v64 = *(_OWORD *)&v54[56];
    v63 = *(_OWORD *)&v54[40];
    v62 = *(__m256i *)&v54[8];
    v58 = &v55;
    v59 = <&T as core::fmt::Display>::fmt;
    v60 = &v62;
    v61 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v65 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v66 = 2LL;
    v69 = 0LL;
    v67 = &v58;
    v68 = 2LL;
    core::panicking::panic_fmt(&v65, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950);
  }
  if ( (v54[1] & 1) != 0 )
  {
    uu_ptx::read_word_filter_file(
      (__int64)&v94,
      a2,
      (__int64)anon_8ffa798e1188aa055e40a44719e13e52_45_llvm_11133899800467015185,
      9LL);
    v9 = v94;
    v12 = v95;
    if ( !v94 )
    {
      *(_QWORD *)(a1 + 8) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v95);
      *(_QWORD *)(a1 + 16) = &anon_397063f1f014473d61d2154b9752ab14_17_llvm_15845615741859781558;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return a1;
    }
    v11 = v96;
    v10 = v97;
    LOBYTE(v3) = 1;
    v8 = v98;
  }
  else
  {
    v6 = (_QWORD *)(__readfsqword(0) - 64);
    if ( *v6 == 1LL )
    {
      v7 = (__int128 *)(v6 + 1);
    }
    else if ( *v6
           || (v7 = (__int128 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(
                                  __readfsqword(0) - 64,
                                  0LL)) == 0LL )
    {
      core::result::unwrap_failed(
        anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
        70LL,
        v54,
        &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
        &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
    }
    v8 = *v7;
    ++*(_QWORD *)v7;
    v9 = &anon_e82c8c948834e6cbfe07355e3f53d44a_1_llvm_16733197510986136111;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v3 = 0LL;
  }
  *(_QWORD *)&v71 = v9;
  *((_QWORD *)&v71 + 1) = v12;
  v72 = __PAIR128__(v10, v11);
  v73 = v8;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
    v54,
    a2,
    anon_8ffa798e1188aa055e40a44719e13e52_44_llvm_11133899800467015185,
    11LL);
  v55 = anon_8ffa798e1188aa055e40a44719e13e52_44_llvm_11133899800467015185;
  v56 = 11LL;
  if ( (v54[0] & 1) != 0 )
  {
    v64 = *(_OWORD *)&v54[56];
    v63 = *(_OWORD *)&v54[40];
    v62 = *(__m256i *)&v54[8];
    v58 = &v55;
    v59 = <&T as core::fmt::Display>::fmt;
    v60 = &v62;
    v61 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v65 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v66 = 2LL;
    v69 = 0LL;
    v67 = &v58;
    v68 = 2LL;
    core::panicking::panic_fmt(&v65, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950);
  }
  if ( (v54[1] & 1) != 0 )
  {
    uu_ptx::read_word_filter_file(
      (__int64)&v99,
      a2,
      (__int64)anon_8ffa798e1188aa055e40a44719e13e52_44_llvm_11133899800467015185,
      11LL);
    v17 = v99;
    v18 = v100;
    if ( !v99 )
    {
      *(_QWORD *)(a1 + 8) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v100);
      *(_QWORD *)(a1 + 16) = &anon_397063f1f014473d61d2154b9752ab14_17_llvm_15845615741859781558;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      goto LABEL_50;
    }
    v70 = v3;
    v19 = v101;
    v20 = v102;
    v21 = 1;
    v22 = v103;
    goto LABEL_17;
  }
  v13 = (_QWORD *)(__readfsqword(0) - 64);
  v14 = *v13;
  v15 = *v13 == 0LL;
  v70 = v3;
  if ( v15 )
  {
    v16 = (__int128 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 64, 0LL);
    if ( v16 )
      goto LABEL_16;
LABEL_91:
    core::result::unwrap_failed(
      anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
      70LL,
      v54,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
  }
  if ( v14 != 1 )
    goto LABEL_91;
  v16 = (__int128 *)(v13 + 1);
LABEL_16:
  v22 = *v16;
  ++*(_QWORD *)v16;
  v17 = &anon_e82c8c948834e6cbfe07355e3f53d44a_1_llvm_16733197510986136111;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v21 = 0;
LABEL_17:
  *(_QWORD *)&v74 = v17;
  *((_QWORD *)&v74 + 1) = v18;
  v75 = __PAIR128__(v20, v19);
  v76 = v22;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
    v54,
    a2,
    anon_8ffa798e1188aa055e40a44719e13e52_41_llvm_11133899800467015185,
    10LL);
  v55 = anon_8ffa798e1188aa055e40a44719e13e52_41_llvm_11133899800467015185;
  v56 = 10LL;
  if ( (v54[0] & 1) != 0 )
    goto LABEL_87;
  if ( (v54[1] & 1) == 0 )
  {
LABEL_25:
    v82.m256i_i64[0] = 0LL;
    goto LABEL_26;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
    v54,
    a2,
    anon_8ffa798e1188aa055e40a44719e13e52_40_llvm_11133899800467015185,
    11LL);
  v55 = anon_8ffa798e1188aa055e40a44719e13e52_40_llvm_11133899800467015185;
  v56 = 11LL;
  if ( (v54[0] & 1) != 0 )
  {
LABEL_87:
    v64 = *(_OWORD *)&v54[56];
    v63 = *(_OWORD *)&v54[40];
    v62 = *(__m256i *)&v54[8];
    v58 = &v55;
    v59 = <&T as core::fmt::Display>::fmt;
    v60 = &v62;
    v61 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v65 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v51 = &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950;
    goto LABEL_88;
  }
  if ( (v54[1] & 1) != 0 )
    goto LABEL_25;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v54);
  v86[0] = anon_8ffa798e1188aa055e40a44719e13e52_41_llvm_11133899800467015185;
  v86[1] = 10LL;
  if ( *(_QWORD *)v54 )
  {
    v64 = *(_OWORD *)&v54[56];
    v63 = *(_OWORD *)&v54[40];
    v62 = *(__m256i *)&v54[8];
    v58 = (const char **)v86;
    v59 = <&T as core::fmt::Display>::fmt;
    v60 = &v62;
    v61 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v65 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v51 = &off_2AA930;
LABEL_88:
    v66 = 2LL;
    v69 = 0LL;
    v67 = &v58;
    v68 = 2LL;
    core::panicking::panic_fmt(&v65, v51);
  }
  v23 = *(_QWORD *)&v54[8];
  if ( !*(_QWORD *)&v54[8] )
    core::option::expect_failed(aParsingOptions, 23LL, &off_2AA948);
  *(_QWORD *)v54 = 0x1B600000000LL;
  *(_DWORD *)&v54[8] = 1;
  *(_WORD *)&v54[12] = 0;
  core::slice::raw::from_raw_parts::precondition_check(*(_QWORD *)(v23 + 8), 1LL, 1LL, *(_QWORD *)(v23 + 16));
  std::fs::OpenOptions::_open(v78, v54);
  if ( v78[0] )
  {
    v24 = v79;
LABEL_47:
    *(_QWORD *)(a1 + 8) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v24);
    *(_QWORD *)(a1 + 16) = &anon_397063f1f014473d61d2154b9752ab14_17_llvm_15845615741859781558;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    if ( *((_QWORD *)&v74 + 1) )
    {
      hashbrown::raw::RawTableInner::drop_elements(&v74);
      hashbrown::raw::TableLayout::calculate_layout_for(v54, 24LL, 16LL, *((_QWORD *)&v74 + 1) + 1LL);
      if ( *(_QWORD *)&v54[8] )
        _rust_dealloc(v74 - *(_QWORD *)&v54[16], *(_QWORD *)&v54[8], *(_QWORD *)v54);
    }
LABEL_50:
    if ( *((_QWORD *)&v71 + 1) )
    {
      hashbrown::raw::RawTableInner::drop_elements(&v71);
      hashbrown::raw::TableLayout::calculate_layout_for(v54, 24LL, 16LL, *((_QWORD *)&v71 + 1) + 1LL);
      v30 = *(_QWORD *)&v54[8];
      if ( *(_QWORD *)&v54[8] )
      {
        v31 = v71 - *(_QWORD *)&v54[16];
        v32 = *(_QWORD *)v54;
LABEL_60:
        _rust_dealloc(v31, v30, v32);
        return a1;
      }
    }
    return a1;
  }
  fd = v78[1];
  v55 = 0LL;
  v56 = 1LL;
  v57 = 0LL;
  if ( <std::fs::File as std::io::Read>::read_to_string(&fd, &v55) )
  {
    v24 = v29;
    if ( v55 )
      _rust_dealloc(v56, v55, 1LL);
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
    close(fd);
    goto LABEL_47;
  }
  v39 = v56;
  if ( !v56 || (v40 = v57, v57 < 0) )
    core::panicking::panic_nounwind(anon_23a8c89669b7e3966eab8f1d3c4cd90c_23_llvm_2187995499940452454, 162LL);
  v41 = (_QWORD *)(__readfsqword(0) - 64);
  if ( *v41 )
  {
    if ( *v41 == 1LL )
    {
      v42 = (__int128 *)(v41 + 1);
      goto LABEL_71;
    }
LABEL_98:
    core::result::unwrap_failed(
      anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
      70LL,
      v54,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
  }
  v42 = (__int128 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 64, 0LL);
  if ( !v42 )
    goto LABEL_98;
LABEL_71:
  v43 = *v42;
  ++*(_QWORD *)v42;
  *(_OWORD *)&v54[16] = xmmword_2AB680;
  *(_OWORD *)v54 = *(_OWORD *)&anon_23a8c89669b7e3966eab8f1d3c4cd90c_6_llvm_2187995499940452454;
  *(_OWORD *)&v54[32] = v43;
  <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::Extend<(K,V)>>::extend(v54, v39, v39 + v40);
  v24 = *(_QWORD *)&v54[8];
  v44 = *(_QWORD *)v54;
  v77 = *(_QWORD *)&v54[16];
  v87 = *(_OWORD *)&v54[24];
  v88 = *(_QWORD *)&v54[40];
  if ( v55 )
    _rust_dealloc(v56, v55, 1LL);
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
  close(fd);
  if ( !v44 )
    goto LABEL_47;
  v91 = v88;
  *(_OWORD *)&v90[8] = v87;
  *(_QWORD *)&v89 = v44;
  *((_QWORD *)&v89 + 1) = v24;
  *(_QWORD *)v90 = v77;
  if ( (*(_BYTE *)(a3 + 88) & 1) != 0 )
  {
    v47 = (_QWORD *)(__readfsqword(0) - 64);
    if ( *v47 )
    {
      if ( *v47 != 1LL )
        goto LABEL_99;
      v48 = (__int128 *)(v47 + 1);
    }
    else
    {
      v48 = (__int128 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 64, 0LL);
      if ( !v48 )
        goto LABEL_99;
    }
    v50 = *v48;
    ++*(_QWORD *)v48;
    v80 = anon_397063f1f014473d61d2154b9752ab14_42_llvm_15845615741859781558;
    v81 = v50;
    goto LABEL_85;
  }
  v45 = (_QWORD *)(__readfsqword(0) - 64);
  if ( !*v45 )
  {
    v46 = (__int128 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 64, 0LL);
    if ( v46 )
      goto LABEL_82;
LABEL_99:
    core::result::unwrap_failed(
      anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
      70LL,
      v54,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
  }
  if ( *v45 != 1LL )
    goto LABEL_99;
  v46 = (__int128 *)(v45 + 1);
LABEL_82:
  v49 = *v46;
  ++*(_QWORD *)v46;
  *(_OWORD *)&v54[16] = xmmword_2AB680;
  *(_OWORD *)v54 = *(_OWORD *)&anon_23a8c89669b7e3966eab8f1d3c4cd90c_6_llvm_2187995499940452454;
  *(_OWORD *)&v54[32] = v49;
  <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::Extend<(K,V)>>::extend(v54, " ", &unk_62A20);
  v81 = *(_OWORD *)&v54[32];
  v80 = *(__m256i *)v54;
LABEL_85:
  *(_OWORD *)&v62.m256i_u64[2] = *(_OWORD *)v90;
  *(_OWORD *)v62.m256i_i8 = v89;
  <hashbrown::raw::RawTable<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v54, &v62);
  v62 = *(__m256i *)v54;
  v63 = *(_OWORD *)&v54[32];
  v64 = *(_OWORD *)&v54[48];
  <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::Extend<(K,V)>>::extend(&v80, &v62);
  v82 = v80;
  v83 = v81;
LABEL_26:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
    v54,
    a2,
    anon_8ffa798e1188aa055e40a44719e13e52_40_llvm_11133899800467015185,
    11LL);
  v55 = anon_8ffa798e1188aa055e40a44719e13e52_40_llvm_11133899800467015185;
  v56 = 11LL;
  if ( (v54[0] & 1) != 0 )
  {
    v64 = *(_OWORD *)&v54[56];
    v63 = *(_OWORD *)&v54[40];
    v62 = *(__m256i *)&v54[8];
    v58 = &v55;
    v59 = <&T as core::fmt::Display>::fmt;
    v60 = &v62;
    v61 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v65 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v52 = &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950;
    goto LABEL_93;
  }
  if ( (v54[1] & 1) == 0 )
    goto LABEL_32;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v54);
  v55 = anon_8ffa798e1188aa055e40a44719e13e52_40_llvm_11133899800467015185;
  v56 = 11LL;
  if ( *(_QWORD *)v54 )
  {
    v64 = *(_OWORD *)&v54[56];
    v63 = *(_OWORD *)&v54[40];
    v62 = *(__m256i *)&v54[8];
    v58 = &v55;
    v59 = <&T as core::fmt::Display>::fmt;
    v60 = &v62;
    v61 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v65 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v52 = &off_2AA960;
LABEL_93:
    v66 = 2LL;
    v69 = 0LL;
    v67 = &v58;
    v68 = 2LL;
    core::panicking::panic_fmt(&v65, v52);
  }
  if ( *(_QWORD *)&v54[8] )
  {
    if ( *(_QWORD *)(*(_QWORD *)&v54[8] + 16LL) )
    {
      <alloc::string::String as core::clone::Clone>::clone(v92);
      v25 = v92[0];
      if ( v92[0] != 0x8000000000000000LL )
      {
        v26 = v92[1];
        v28 = v92[2];
        goto LABEL_54;
      }
    }
  }
LABEL_32:
  if ( !v82.m256i_i64[0] )
  {
    if ( (*(_BYTE *)(a3 + 88) & 1) != 0 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v54, 3LL, 0LL);
      v25 = *(_QWORD *)&v54[8];
      if ( !*(_QWORD *)v54 )
      {
        v26 = *(_QWORD *)&v54[16];
        v28 = 3LL;
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_629E3, *(_QWORD *)&v54[16], 1LL, 1LL, 3LL);
        *(_BYTE *)(v26 + 2) = 43;
        *(_WORD *)v26 = 30556;
        goto LABEL_54;
      }
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v54, 7LL, 0LL);
      v25 = *(_QWORD *)&v54[8];
      if ( !*(_QWORD *)v54 )
      {
        v26 = *(_QWORD *)&v54[16];
        v28 = 7LL;
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_62A20, *(_QWORD *)&v54[16], 1LL, 1LL, 7LL);
        *(_DWORD *)(v26 + 3) = 727517705;
        *(_DWORD *)v26 = 153116251;
LABEL_54:
        v27 = 0;
        goto LABEL_55;
      }
    }
    alloc::raw_vec::handle_error(v25, *(_QWORD *)&v54[16]);
  }
  v62 = v82;
  <hashbrown::raw::RawTable<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v54, &v62);
  v104[0] = *(_OWORD *)v54;
  v104[1] = *(_OWORD *)&v54[16];
  v104[2] = *(_OWORD *)&v54[32];
  v104[3] = *(_OWORD *)&v54[48];
  <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(v84, v104);
  v85[0] = v84;
  v85[1] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)v54 = &off_2AA978;
  *(_QWORD *)&v54[8] = 2LL;
  *(_QWORD *)&v54[16] = v85;
  *(_QWORD *)&v54[24] = 1LL;
  *(_QWORD *)&v54[32] = 0LL;
  alloc::fmt::format::format_inner(v93, v54);
  if ( v84[0] )
    _rust_dealloc(v84[1], v84[0], 1LL);
  v25 = v93[0];
  v26 = v93[1];
  v27 = 1;
  v28 = v93[2];
LABEL_55:
  *(_QWORD *)a1 = v25;
  *(_QWORD *)(a1 + 8) = v26;
  *(_QWORD *)(a1 + 16) = v28;
  v33 = v72;
  v34 = v73;
  *(_OWORD *)(a1 + 24) = v71;
  *(_OWORD *)(a1 + 40) = v33;
  *(_OWORD *)(a1 + 56) = v34;
  v35 = v75;
  v36 = v76;
  *(_OWORD *)(a1 + 72) = v74;
  *(_OWORD *)(a1 + 88) = v35;
  *(_OWORD *)(a1 + 104) = v36;
  *(_BYTE *)(a1 + 120) = v70;
  *(_BYTE *)(a1 + 121) = v21;
  if ( !v27 )
  {
    v37 = v82.m256i_i64[0];
    if ( v82.m256i_i64[0] )
    {
      if ( v82.m256i_i64[1] )
      {
        hashbrown::raw::TableLayout::calculate_layout_for(v54, 4LL, 16LL, v82.m256i_i64[1] + 1);
        v30 = *(_QWORD *)&v54[8];
        if ( *(_QWORD *)&v54[8] )
        {
          v32 = *(_QWORD *)v54;
          v31 = v37 - *(_QWORD *)&v54[16];
          goto LABEL_60;
        }
      }
    }
  }
  return a1;
}
