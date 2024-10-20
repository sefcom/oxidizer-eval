__int64 __fastcall uu_cksum::cksum(__int64 a1)
{
  __m128i *v1; // rax
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  __m128i v9; // kr00_16
  __int64 v10; // rbx
  __int64 v11; // r14
  char v12; // r13
  char v13; // al
  __m128i v14; // xmm0
  __int64 v15; // rbx
  __m128i *v16; // rax
  char v17; // r14
  __int64 (__fastcall **v18)(); // rcx
  __m128i v19; // xmm0
  __m128i v20; // rax
  __int32 v21; // ebx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // rax
  __m128i v25; // kr10_16
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // r15
  void (__fastcall *v29)(_QWORD); // rax
  __int64 v30; // r13
  __int64 v31; // r15
  int v32; // eax
  __int64 v33; // rax
  const char *v34; // rcx
  unsigned __int8 v35; // r14
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  const char *v39; // rcx
  const char *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int8 v46; // al
  char v47; // cl
  const void *v48; // rbx
  size_t v49; // r15
  __int64 v50; // r14
  __int64 v51; // r12
  _BYTE *v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  const char *v55; // rax
  __int64 v56; // rcx
  __m128i si128; // xmm5
  __m128i v58; // xmm6
  __m128i v59; // xmm7
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __m128i v62; // xmm2
  __m128i v63; // xmm3
  unsigned __int64 v64; // rdx
  __m128i v65; // xmm3
  __m128i v66; // xmm4
  __m128i v67; // xmm5
  __m128i v68; // xmm0
  __m128i v69; // xmm1
  __int64 v70; // rbx
  __int64 v71; // r15
  __int64 v72; // rsi
  __int64 v74; // rax
  unsigned int v75; // rbx^4
  __int64 v76; // rdi
  __int64 v77; // rax
  int v78; // ebx
  __int64 v79; // rax
  char v80; // bp
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // r13
  __int64 v84; // rsi
  char **v85; // r8
  char **v86; // r8
  __m128i v88; // [rsp+10h] [rbp-338h] BYREF
  _BYTE v89[40]; // [rsp+20h] [rbp-328h]
  __int64 v90; // [rsp+48h] [rbp-300h]
  __m128i v91; // [rsp+50h] [rbp-2F8h] BYREF
  _BYTE dest[40]; // [rsp+60h] [rbp-2E8h] BYREF
  __int64 v93; // [rsp+88h] [rbp-2C0h]
  __int64 v94; // [rsp+98h] [rbp-2B0h]
  __int64 v95; // [rsp+A0h] [rbp-2A8h]
  __int64 v96; // [rsp+A8h] [rbp-2A0h]
  __int64 v97; // [rsp+B0h] [rbp-298h]
  char v98; // [rsp+B8h] [rbp-290h]
  __int64 v99; // [rsp+C0h] [rbp-288h]
  __int64 v100; // [rsp+D0h] [rbp-278h]
  __int64 v101; // [rsp+E0h] [rbp-268h]
  __int64 v102; // [rsp+E8h] [rbp-260h]
  char v103; // [rsp+F0h] [rbp-258h]
  __int16 v104; // [rsp+FEh] [rbp-24Ah] BYREF
  __m128i v105; // [rsp+100h] [rbp-248h] BYREF
  _BYTE v106[40]; // [rsp+110h] [rbp-238h]
  __int16 v107; // [rsp+138h] [rbp-210h]
  char v108; // [rsp+13Ah] [rbp-20Eh]
  __int64 v109; // [rsp+148h] [rbp-200h]
  __m128i *v110; // [rsp+150h] [rbp-1F8h] BYREF
  __int64 (__fastcall *v111)(); // [rsp+158h] [rbp-1F0h]
  __m128i v112; // [rsp+160h] [rbp-1E8h] BYREF
  __m128i v113[2]; // [rsp+170h] [rbp-1D8h] BYREF
  __m128i v114; // [rsp+190h] [rbp-1B8h] BYREF
  _BYTE v115[23]; // [rsp+1A0h] [rbp-1A8h]
  __int64 v116; // [rsp+1B8h] [rbp-190h] BYREF
  __int64 v117; // [rsp+1C0h] [rbp-188h] BYREF
  __int64 v118; // [rsp+1C8h] [rbp-180h]
  unsigned __int8 v119; // [rsp+1D0h] [rbp-178h]
  __m128i v120; // [rsp+1D1h] [rbp-177h]
  _BYTE v121[23]; // [rsp+1E1h] [rbp-167h]
  __int16 v122; // [rsp+1F8h] [rbp-150h]
  char v123; // [rsp+1FAh] [rbp-14Eh]
  __int64 v124; // [rsp+200h] [rbp-148h] BYREF
  __int64 *v125; // [rsp+208h] [rbp-140h]
  unsigned __int64 v126; // [rsp+210h] [rbp-138h]
  __int64 *v127; // [rsp+218h] [rbp-130h] BYREF
  __int64 *v128; // [rsp+220h] [rbp-128h]
  __int64 v129; // [rsp+228h] [rbp-120h]
  __int64 *v130; // [rsp+230h] [rbp-118h]
  __m128i *v131; // [rsp+238h] [rbp-110h]
  _QWORD *v132; // [rsp+240h] [rbp-108h]
  __int64 v133; // [rsp+248h] [rbp-100h]
  __int64 v134; // [rsp+250h] [rbp-F8h] BYREF
  _QWORD v135[3]; // [rsp+258h] [rbp-F0h] BYREF
  _QWORD v136[3]; // [rsp+270h] [rbp-D8h] BYREF
  __m128i v137; // [rsp+288h] [rbp-C0h] BYREF
  __int64 v138; // [rsp+298h] [rbp-B0h]
  __m128i v139; // [rsp+2A0h] [rbp-A8h] BYREF
  __int64 v140; // [rsp+2B0h] [rbp-98h]
  __m128i v141; // [rsp+2B8h] [rbp-90h] BYREF
  __int64 v142; // [rsp+2C8h] [rbp-80h]
  __m128i v143; // [rsp+2D0h] [rbp-78h] BYREF
  __int64 v144; // [rsp+2E0h] [rbp-68h]
  __m128i v145; // [rsp+2E8h] [rbp-60h] BYREF
  __int64 v146; // [rsp+2F8h] [rbp-50h]
  __m128i v147; // [rsp+300h] [rbp-48h] BYREF
  __int64 v148; // [rsp+310h] [rbp-38h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v124, asc_60DC0, 1LL);
  if ( *(_BYTE *)(a1 + 58) == 1 && v126 >= 2 )
  {
    v91.m128i_i64[0] = 0x8000000000000000LL;
    v1 = (__m128i *)_rust_alloc(24LL, 8LL);
    if ( !v1 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v2 = (__int64)v1;
    v1[1].m128i_i64[0] = *(_QWORD *)dest;
    *v1 = _mm_loadu_si128(&v91);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v124);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v124);
    goto LABEL_5;
  }
  v6 = v125;
  v127 = v125;
  v128 = v125;
  v129 = v124;
  v130 = &v125[2 * v126];
  if ( !v126 )
  {
LABEL_114:
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v127);
    v70 = *(_QWORD *)(a1 + 32);
    v71 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)v71 )
      (*(void (__fastcall **)(_QWORD))v71)(*(_QWORD *)(a1 + 32));
    v72 = *(_QWORD *)(v71 + 8);
    if ( v72 )
      _rust_dealloc(v70, v72, *(_QWORD *)(v71 + 16));
    return 0LL;
  }
  v133 = a1 + 32;
  v132 = dest;
  v131 = &v91;
  while ( 1 )
  {
    v128 = v6 + 2;
    v7 = *v6;
    v8 = *v6;
    v109 = v6[1];
    std::path::Path::components(&v105, v8);
    std::path::Path::components(&v117, asc_60DC0);
    v9 = v105;
    v10 = v117;
    v11 = v118;
    if ( v105.m128i_i64[1] != v118 )
    {
      v12 = v106[0];
      goto LABEL_20;
    }
    v12 = v106[0];
    if ( (_BYTE)v107 != (_BYTE)v122 || HIBYTE(v107) != 2 || HIBYTE(v122) != 2 )
      goto LABEL_20;
    if ( v106[0] == 6 )
    {
      if ( v119 <= 2u )
      {
        v13 = 6;
        goto LABEL_22;
      }
LABEL_81:
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              v105.m128i_i64[0],
                              v105.m128i_i64[1],
                              v117,
                              v105.m128i_i64[1]) )
        goto LABEL_25;
LABEL_20:
      v13 = 6;
      if ( v12 == 6 )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( v119 == 6 )
    {
      if ( v106[0] >= 3u )
        goto LABEL_81;
    }
    else if ( v106[0] < 3u == v119 < 3u )
    {
      goto LABEL_81;
    }
LABEL_21:
    *(_QWORD *)&v115[15] = *(_QWORD *)&v106[32];
    *(_OWORD *)v115 = *(_OWORD *)&v106[17];
    v114 = *(__m128i *)&v106[1];
    v13 = v12;
LABEL_22:
    v88 = v9;
    v89[0] = v13;
    *(_QWORD *)&v89[32] = *(_QWORD *)&v115[15];
    *(_OWORD *)&v89[17] = *(_OWORD *)v115;
    *(__m128i *)&v89[1] = v114;
    LOWORD(v90) = v107;
    BYTE2(v90) = v108;
    if ( v119 != 6 )
    {
      *(__int64 *)((char *)&v113[0].m128i_i64[1] + 7) = *(_QWORD *)&v121[15];
      v113[0] = *(__m128i *)v121;
      v112 = v120;
    }
    v91.m128i_i64[0] = v10;
    v91.m128i_i64[1] = v11;
    dest[0] = v119;
    *(_QWORD *)&dest[32] = *(__int64 *)((char *)&v113[0].m128i_i64[1] + 7);
    v14 = _mm_load_si128(&v112);
    *(__m128i *)&dest[17] = _mm_load_si128(v113);
    *(__m128i *)&dest[1] = v14;
    LOWORD(v93) = v122;
    BYTE2(v93) = v123;
    if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by(&v88, &v91) )
    {
LABEL_25:
      v15 = std::io::stdio::stdin();
      v16 = (__m128i *)_rust_alloc(8LL, 8LL);
      if ( !v16 )
        alloc::alloc::handle_alloc_error(8LL, 8LL);
      v16->m128i_i64[0] = v15;
      v17 = 1;
      v18 = (__int64 (__fastcall **)())&unk_2C7750;
      goto LABEL_37;
    }
    if ( (unsigned __int8)std::path::Path::is_dir(v7, v109) )
    {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v91, 0x2000LL);
      v16 = (__m128i *)_rust_alloc(40LL, 8LL);
      if ( !v16 )
        alloc::alloc::handle_alloc_error(8LL, 40LL);
      v16[2].m128i_i64[0] = *(_QWORD *)&dest[16];
      v19 = _mm_loadu_si128(&v91);
      v16[1] = _mm_loadu_si128((const __m128i *)dest);
      *v16 = v19;
      v17 = 0;
      v18 = &off_2C76F8;
      goto LABEL_37;
    }
    std::fs::File::open(&v112, v7, v109);
    if ( !v112.m128i_i32[0] )
      break;
    v114.m128i_i64[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                          v112.m128i_i64[1],
                          v7,
                          v109);
    uucore::mods::error::set_exit_code(1LL);
    v20.m128i_i64[0] = uucore::util_name();
    v105 = v20;
    v88.m128i_i64[0] = (__int64)&v105;
    v88.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)v89 = &v114;
    *(_QWORD *)&v89[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v91.m128i_i64[0] = (__int64)&unk_2C76C8;
    v91.m128i_i64[1] = 3LL;
    *(_QWORD *)&dest[16] = 0LL;
    *(_QWORD *)dest = &v88;
    *(_QWORD *)&dest[8] = 2LL;
    std::io::stdio::_eprint(&v91);
    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v114.m128i_i64[0]);
LABEL_11:
    v6 = v128;
    if ( v128 == v130 )
      goto LABEL_114;
  }
  v21 = v112.m128i_i32[1];
  v16 = (__m128i *)_rust_alloc(4LL, 4LL);
  if ( !v16 )
    alloc::alloc::handle_alloc_error(4LL, 4LL);
  v16->m128i_i32[0] = v21;
  v17 = 0;
  v18 = &off_2C7670;
LABEL_37:
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v117, 0x2000LL, v16, v18);
  if ( (unsigned __int8)std::path::Path::is_dir(v7, v109) )
  {
    v88.m128i_i64[0] = v7;
    v88.m128i_i64[1] = v109;
    v105.m128i_i64[0] = (__int64)&v88;
    v105.m128i_i64[1] = (__int64)<std::path::Display as core::fmt::Display>::fmt;
    v91.m128i_i64[0] = (__int64)&unk_2C7910;
    v91.m128i_i64[1] = 2LL;
    *(_QWORD *)&dest[16] = 0LL;
    *(_QWORD *)dest = &v105;
    *(_QWORD *)&dest[8] = 1LL;
    alloc::fmt::format::format_inner(&v137, &v91);
    *(_DWORD *)&dest[8] = 1;
    v91 = v137;
    *(_QWORD *)dest = v138;
    v22 = _rust_alloc(32LL, 8LL);
    if ( !v22 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v23 = _mm_load_si128(&v91);
    *(__m128i *)(v22 + 16) = _mm_load_si128((const __m128i *)dest);
    *(__m128i *)v22 = v23;
    v112.m128i_i64[0] = v22;
    v112.m128i_i64[1] = (__int64)&off_2C7968;
    uucore::mods::error::set_exit_code(*(unsigned int *)(v22 + 24));
    v24.m128i_i64[0] = uucore::util_name();
    v105 = v24;
    v88.m128i_i64[0] = (__int64)&v105;
    v88.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)v89 = &v112;
    *(_QWORD *)&v89[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v91.m128i_i64[0] = (__int64)&unk_2C76C8;
    v91.m128i_i64[1] = 3LL;
    *(_QWORD *)&dest[16] = 0LL;
    *(_QWORD *)dest = &v88;
    *(_QWORD *)&dest[8] = 2LL;
    std::io::stdio::_eprint(&v91);
    v25 = v112;
    if ( *(_QWORD *)v112.m128i_i64[1] )
      (*(void (__fastcall **)(__int64))v112.m128i_i64[1])(v112.m128i_i64[0]);
    v26 = *(_QWORD *)(v25.m128i_i64[1] + 8);
    if ( v26 )
      _rust_dealloc(v25.m128i_i64[0], v26, *(_QWORD *)(v25.m128i_i64[1] + 16));
    if ( v118 )
      _rust_dealloc(v117, v118, 1LL);
    v27 = *(_QWORD *)&v121[7];
    v28 = *(_QWORD *)&v121[15];
    v29 = **(void (__fastcall ***)(_QWORD))&v121[15];
    if ( **(_QWORD **)&v121[15] )
      goto LABEL_77;
    goto LABEL_78;
  }
  uucore::features::checksum::digest_reader(&v91, v133, &v117, 0LL, *(_QWORD *)(a1 + 48));
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v88,
    &v91);
  v2 = v88.m128i_i64[1];
  if ( v88.m128i_i64[0] == 0x8000000000000000LL )
    goto LABEL_135;
  v30 = *(_QWORD *)&v89[8];
  v114 = v88;
  *(_QWORD *)v115 = *(_QWORD *)v89;
  v134 = *(_QWORD *)&v89[8];
  if ( !*(_BYTE *)(a1 + 58) )
  {
    v113[0].m128i_i64[0] = *(_QWORD *)v115;
    v112 = v114;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(a1 + 58) == 2 )
  {
    v31 = *(_QWORD *)&v89[8];
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aCrc,
                            3LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aSysv,
                            4LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aBsd,
                            3LL) )
    {
      v113[0].m128i_i64[0] = *(_QWORD *)v115;
      v112 = _mm_loadu_si128(&v114);
      v30 = v31;
    }
    else
    {
      *(_QWORD *)v106 = (char *)&dword_200 + 2;
      v105 = (__m128i)unk_2C77F0;
      *(_QWORD *)dest = *(_QWORD *)v115;
      v91 = _mm_loadu_si128(&v114);
      <alloc::vec::Vec<u8> as hex::FromHex>::from_hex(&v88, &v91);
      if ( v88.m128i_i64[0] == 0x8000000000000000LL )
      {
        v91 = _mm_loadu_si128((const __m128i *)&v88.m128i_u64[1]);
        core::result::unwrap_failed(aCalledResultUn, 43LL, &v91, &unk_2C7508, &off_2C7808);
      }
      *(_QWORD *)dest = *(_QWORD *)v89;
      v91 = _mm_loadu_si128(&v88);
      data_encoding::Encoding::encode(&v112, &v105, v91.m128i_i64[1]);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v91);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v91);
      if ( v105.m128i_i64[0] != 0x8000000000000000LL )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v105);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v105);
      }
      v30 = v31;
    }
LABEL_55:
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aSysv,
                            4LL) )
    {
      v32 = core::num::<impl core::str::traits::FromStr for u16>::from_str(v112.m128i_i64[1], v113[0].m128i_i64[0]);
      if ( (v32 & 1) != 0 )
      {
        v91.m128i_i8[0] = BYTE1(v32);
        v85 = &off_2C78D8;
        goto LABEL_149;
      }
      LOWORD(v116) = HIWORD(v32);
      v33 = uucore::features::sum::div_ceil(v30, *(_QWORD *)(a1 + 48));
      v34 = asc_6102C;
      if ( v17 )
        v34 = (_BYTE *)(&dword_0 + 1);
      v110 = (__m128i *)v33;
      v35 = v17 ^ 1;
      v105.m128i_i64[0] = (__int64)v34;
      v105.m128i_i64[1] = v35;
      v91.m128i_i64[0] = (__int64)&v116;
      v91.m128i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      *(_QWORD *)dest = &v110;
      *(_QWORD *)&dest[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&dest[16] = &v105;
      *(_QWORD *)&dest[24] = <&T as core::fmt::Display>::fmt;
      v88.m128i_i64[0] = (__int64)&unk_2C7890;
      v88.m128i_i64[1] = 3LL;
      *(_QWORD *)&v89[16] = 0LL;
      *(_QWORD *)v89 = &v91;
      *(_QWORD *)&v89[8] = 3LL;
      alloc::fmt::format::format_inner(&v139, &v88);
      v91 = v139;
      v36 = v140;
      goto LABEL_69;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aBsd,
                            3LL) )
    {
      v37 = core::num::<impl core::str::traits::FromStr for u16>::from_str(v112.m128i_i64[1], v113[0].m128i_i64[0]);
      if ( (v37 & 1) != 0 )
      {
        v91.m128i_i8[0] = BYTE1(v37);
        v85 = &off_2C78C0;
LABEL_149:
        core::result::unwrap_failed(aCalledResultUn, 43LL, &v91, &unk_2C74E8, v85);
      }
      v104 = HIWORD(v37);
      v38 = uucore::features::sum::div_ceil(v30, *(_QWORD *)(a1 + 48));
      v39 = asc_6102C;
      if ( v17 )
        v39 = (_BYTE *)(&dword_0 + 1);
      v116 = v38;
      v35 = v17 ^ 1;
      v110 = (__m128i *)v39;
      v111 = (__int64 (__fastcall *)())v35;
      v88.m128i_i64[0] = (__int64)&v104;
      v88.m128i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      *(_QWORD *)v89 = &v116;
      *(_QWORD *)&v89[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v89[16] = &v110;
      *(_QWORD *)&v89[24] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v89[32] = 5LL;
      v90 = 0LL;
      v91.m128i_i64[0] = 2LL;
      *(_QWORD *)dest = 1LL;
      *(_QWORD *)&dest[8] = 3LL;
      *(_QWORD *)&dest[16] = 0LL;
      *(_QWORD *)&dest[24] = 0x800000020LL;
      dest[32] = 3;
      v93 = 2LL;
      v94 = 1LL;
      v95 = 3LL;
      v96 = 1LL;
      v97 = 32LL;
      v98 = 3;
      v99 = 2LL;
      v100 = 2LL;
      v101 = 2LL;
      v102 = 32LL;
      v103 = 3;
      v105.m128i_i64[0] = (__int64)&unk_2C7890;
      v105.m128i_i64[1] = 3LL;
      *(_QWORD *)&v106[16] = &v91;
      *(_QWORD *)&v106[24] = 3LL;
      *(_QWORD *)v106 = &v88;
      *(_QWORD *)&v106[8] = 4LL;
      alloc::fmt::format::format_inner(&v141, &v105);
      v91 = v141;
      v36 = v142;
LABEL_69:
      *(_QWORD *)dest = v36;
      v41 = 1LL;
LABEL_70:
      v42 = 0LL;
      v43 = 0LL;
LABEL_71:
      *(_QWORD *)v106 = *(_QWORD *)dest;
      v105 = _mm_load_si128(&v91);
      v88.m128i_i64[0] = v42;
      v88.m128i_i64[1] = v41;
      *(_QWORD *)v89 = v43;
      v110 = &v105;
      v111 = <alloc::string::String as core::fmt::Display>::fmt;
      v91.m128i_i64[0] = (__int64)&anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
      v91.m128i_i64[1] = 1LL;
      *(_QWORD *)&dest[16] = 0LL;
      *(_QWORD *)dest = &v110;
      *(_QWORD *)&dest[8] = 1LL;
      std::io::stdio::_print(&v91);
      if ( v35 )
      {
        v91.m128i_i64[0] = std::io::stdio::stdout();
        v44 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v91, v7, v109);
        if ( v44 )
          core::ptr::drop_in_place<std::io::error::Error>(v44);
      }
      v110 = &v88;
      v111 = <alloc::string::String as core::fmt::Display>::fmt;
      v91.m128i_i64[0] = (__int64)&unk_2C78F0;
      v91.m128i_i64[1] = 2LL;
      *(_QWORD *)&dest[16] = 0LL;
      *(_QWORD *)dest = &v110;
      *(_QWORD *)&dest[8] = 1LL;
      std::io::stdio::_print(&v91);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v88);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v88);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v105);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v105);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v112);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v112);
      if ( v118 )
        _rust_dealloc(v117, v118, 1LL);
      v27 = *(_QWORD *)&v121[7];
      v28 = *(_QWORD *)&v121[15];
      v29 = **(void (__fastcall ***)(_QWORD))&v121[15];
      if ( **(_QWORD **)&v121[15] )
LABEL_77:
        v29(*(_QWORD *)&v121[7]);
LABEL_78:
      v45 = *(_QWORD *)(v28 + 8);
      if ( v45 )
        _rust_dealloc(v27, v45, *(_QWORD *)(v28 + 16));
      goto LABEL_11;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aCrc,
                            3LL) )
    {
      v40 = asc_6102C;
      if ( v17 )
        v40 = (_BYTE *)(&dword_0 + 1);
      v35 = v17 ^ 1;
      v105.m128i_i64[0] = (__int64)v40;
      v105.m128i_i64[1] = v35;
      v91.m128i_i64[0] = (__int64)&v112;
      v91.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &v134;
      *(_QWORD *)&dest[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&dest[16] = &v105;
      *(_QWORD *)&dest[24] = <&T as core::fmt::Display>::fmt;
      v88.m128i_i64[0] = (__int64)&unk_2C7890;
      v88.m128i_i64[1] = 3LL;
      *(_QWORD *)&v89[16] = 0LL;
      *(_QWORD *)v89 = &v91;
      *(_QWORD *)&v89[8] = 3LL;
      alloc::fmt::format::format_inner(&v143, &v88);
      v91 = v143;
      v36 = v144;
      goto LABEL_69;
    }
    v46 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 24),
            aBlake2b_0,
            7LL);
    v47 = *(_BYTE *)(a1 + 56);
    if ( ((v47 != 0) & v46) != 0 )
    {
      if ( *(_QWORD *)a1 )
      {
        v105.m128i_i64[0] = 8LL * *(_QWORD *)(a1 + 8);
        v88.m128i_i64[0] = (__int64)&v105;
        v88.m128i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v91.m128i_i64[0] = (__int64)&off_2C7870;
        v91.m128i_i64[1] = 2LL;
        *(_QWORD *)&dest[16] = 0LL;
        *(_QWORD *)dest = &v88;
        *(_QWORD *)&dest[8] = 1LL;
        alloc::fmt::format::format_inner(&v145, &v91);
        v88 = _mm_loadu_si128(&v145);
        *(_QWORD *)v89 = v146;
      }
      else
      {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v91, 9LL, 0LL);
        v50 = v91.m128i_i64[1];
        if ( v91.m128i_i64[0] )
LABEL_153:
          alloc::raw_vec::handle_error(v50, *v132);
        v54 = *(_QWORD *)dest;
        **(_QWORD **)dest = 0x206232454B414C42LL;
        *(_BYTE *)(v54 + 8) = 40;
        v88.m128i_i64[0] = v50;
        v88.m128i_i64[1] = v54;
        *(_QWORD *)v89 = 9LL;
      }
      v105.m128i_i64[0] = (__int64)&v112;
      v105.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      v91.m128i_i64[0] = (__int64)&off_2C7860;
      v91.m128i_i64[1] = 1LL;
      *(_QWORD *)&dest[16] = 0LL;
      *(_QWORD *)dest = &v105;
      *(_QWORD *)&dest[8] = 1LL;
      alloc::fmt::format::format_inner(v135, &v91);
      v91 = v88;
      *(_QWORD *)dest = *(_QWORD *)v89;
      v42 = v135[0];
      v41 = v135[1];
      v43 = v135[2];
      goto LABEL_113;
    }
    if ( !v47 )
    {
      v55 = asc_6102D;
      if ( !*(_BYTE *)(a1 + 57) )
        v55 = asc_6102C;
      v105.m128i_i64[0] = (__int64)v55;
      v105.m128i_i64[1] = 1LL;
      v88.m128i_i64[0] = (__int64)&v112;
      v88.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v89 = &v105;
      *(_QWORD *)&v89[8] = <&T as core::fmt::Display>::fmt;
      v91.m128i_i64[0] = (__int64)&unk_2C7820;
      v91.m128i_i64[1] = 2LL;
      *(_QWORD *)&dest[16] = 0LL;
      *(_QWORD *)dest = &v88;
      *(_QWORD *)&dest[8] = 2LL;
      alloc::fmt::format::format_inner(&v147, &v91);
      v91 = v147;
      *(_QWORD *)dest = v148;
      v41 = 1LL;
      v35 = 1;
      goto LABEL_70;
    }
    v48 = *(const void **)(a1 + 16);
    v49 = *(_QWORD *)(a1 + 24);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v91, v49, 0LL);
    v50 = v91.m128i_i64[1];
    if ( v91.m128i_i64[0] )
      goto LABEL_153;
    v51 = *(_QWORD *)dest;
    memcpy(*(void **)dest, v48, v49);
    if ( !v49 )
      goto LABEL_112;
    v52 = (_BYTE *)v51;
    if ( v49 >= 8 )
    {
      if ( v49 >= 0x20 )
      {
        v53 = v49 & 0xFFFFFFFFFFFFFFE0LL;
        v56 = 0LL;
        si128 = _mm_load_si128((const __m128i *)&xmmword_5C430);
        v58 = _mm_load_si128((const __m128i *)&xmmword_5C630);
        v59 = _mm_load_si128(xmmword_5D1E0);
        do
        {
          v60 = _mm_loadu_si128((const __m128i *)(v51 + v56));
          v61 = _mm_loadu_si128((const __m128i *)(v51 + v56 + 16));
          v62 = _mm_add_epi8(v60, si128);
          v63 = _mm_add_epi8(v61, si128);
          *(__m128i *)(v51 + v56) = _mm_xor_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v62, v58), v62), v59), v60);
          *(__m128i *)(v51 + v56 + 16) = _mm_xor_si128(
                                           _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v63, v58), v63), v59),
                                           v61);
          v56 += 32LL;
        }
        while ( v53 != v56 );
        if ( v49 == v53 )
          goto LABEL_112;
        if ( (v49 & 0x18) != 0 )
          goto LABEL_106;
        v52 = (_BYTE *)(v51 + v53);
      }
      else
      {
        v53 = 0LL;
LABEL_106:
        v64 = v49 & 0xFFFFFFFFFFFFFFF8LL;
        v52 = (_BYTE *)(v51 + (v49 & 0xFFFFFFFFFFFFFFF8LL));
        v65 = _mm_load_si128((const __m128i *)&xmmword_5C640);
        v66 = _mm_load_si128(xmmword_5CDE0);
        v67 = _mm_load_si128((const __m128i *)&xmmword_5D0D0);
        do
        {
          v68 = _mm_loadl_epi64((const __m128i *)(v51 + v53));
          v69 = _mm_add_epi8(v68, v65);
          *(_QWORD *)(v51 + v53) = _mm_xor_si128(
                                     _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v69, v66), v69), v67),
                                     v68).m128i_u64[0];
          v53 += 8LL;
        }
        while ( v64 != v53 );
        if ( v49 == v64 )
        {
LABEL_112:
          v88.m128i_i64[0] = v50;
          v88.m128i_i64[1] = v51;
          *(_QWORD *)v89 = v49;
          v110 = &v88;
          v111 = <alloc::string::String as core::fmt::Display>::fmt;
          v91.m128i_i64[0] = (__int64)&unk_2C7840;
          v91.m128i_i64[1] = 2LL;
          *(_QWORD *)&dest[16] = 0LL;
          *(_QWORD *)dest = &v110;
          *(_QWORD *)&dest[8] = 1LL;
          alloc::fmt::format::format_inner(&v105, &v91);
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v88);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v88);
          v88 = _mm_loadu_si128(&v105);
          *(_QWORD *)v89 = *(_QWORD *)v106;
          v105.m128i_i64[0] = (__int64)&v112;
          v105.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v91.m128i_i64[0] = (__int64)&off_2C7860;
          v91.m128i_i64[1] = 1LL;
          *(_QWORD *)&dest[16] = 0LL;
          *(_QWORD *)dest = &v105;
          *(_QWORD *)&dest[8] = 1LL;
          alloc::fmt::format::format_inner(v136, &v91);
          v91 = v88;
          *(_QWORD *)dest = *(_QWORD *)v89;
          v42 = v136[0];
          v41 = v136[1];
          v43 = v136[2];
LABEL_113:
          v35 = 1;
          goto LABEL_71;
        }
      }
    }
    do
    {
      *v52 ^= 32 * ((unsigned __int8)(*v52 - 97) < 0x1Au);
      ++v52;
    }
    while ( v52 != (_BYTE *)(v51 + v49) );
    goto LABEL_112;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          aCrc,
                          3LL) )
  {
    v74 = core::num::<impl core::str::traits::FromStr for u32>::from_str(v114.m128i_i64[1], *(_QWORD *)v115);
    v75 = HIDWORD(v74);
    if ( (v74 & 1) == 0 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v91, 4LL, 0LL);
      v76 = v91.m128i_i64[1];
      if ( !v91.m128i_i64[0] )
      {
        v77 = *(_QWORD *)dest;
        **(_DWORD **)dest = _byteswap_ulong(v75);
        v91.m128i_i64[0] = v76;
        v91.m128i_i64[1] = v77;
        *(_QWORD *)dest = 4LL;
        goto LABEL_129;
      }
LABEL_154:
      alloc::raw_vec::handle_error(v76, *(_QWORD *)dest);
    }
    v91.m128i_i8[0] = BYTE1(v74);
    v86 = &off_2C77D8;
LABEL_157:
    core::result::unwrap_failed(aCalledResultUn, 43LL, v131, &unk_2C74E8, v86);
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          aSysv,
                          4LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          aBsd,
                          3LL) )
  {
    v78 = core::num::<impl core::str::traits::FromStr for u16>::from_str(v114.m128i_i64[1], *(_QWORD *)v115);
    if ( (v78 & 1) != 0 )
    {
      v91.m128i_i8[0] = BYTE1(v78);
      v86 = &off_2C77C0;
      goto LABEL_157;
    }
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v91, 2LL, 0LL);
    v76 = v91.m128i_i64[1];
    if ( v91.m128i_i64[0] )
      goto LABEL_154;
    v79 = *(_QWORD *)dest;
    **(_WORD **)dest = __ROL2__(HIWORD(v78), 8);
    v91.m128i_i64[0] = v76;
    v91.m128i_i64[1] = v79;
    *(_QWORD *)dest = 2LL;
LABEL_129:
    v80 = 0;
  }
  else
  {
    *(_QWORD *)dest = *(_QWORD *)v115;
    v91 = _mm_loadu_si128(&v114);
    <alloc::vec::Vec<u8> as hex::FromHex>::from_hex(&v88, &v91);
    if ( v88.m128i_i64[0] == 0x8000000000000000LL )
    {
      v91 = _mm_loadu_si128((const __m128i *)&v88.m128i_u64[1]);
      core::result::unwrap_failed(aCalledResultUn, 43LL, &v91, &unk_2C7508, &off_2C77A8);
    }
    *(_QWORD *)dest = *(_QWORD *)v89;
    v91 = _mm_loadu_si128(&v88);
    v80 = 1;
  }
  v88.m128i_i64[0] = std::io::stdio::stdout();
  v81 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v88, v91.m128i_i64[1], *(_QWORD *)dest);
  if ( v81 )
    v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v81);
  else
    v2 = 0LL;
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v91);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v91);
  if ( !v80 )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v114);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v114);
  }
LABEL_135:
  if ( v118 )
    _rust_dealloc(v117, v118, 1LL);
  v82 = *(_QWORD *)&v121[7];
  v83 = *(_QWORD *)&v121[15];
  if ( **(_QWORD **)&v121[15] )
    (**(void (__fastcall ***)(_QWORD))&v121[15])(*(_QWORD *)&v121[7]);
  v84 = *(_QWORD *)(v83 + 8);
  if ( v84 )
    _rust_dealloc(v82, v84, *(_QWORD *)(v83 + 16));
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v127);
LABEL_5:
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)v4 )
    (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(a1 + 32));
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 )
    _rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16));
  return v2;
}
