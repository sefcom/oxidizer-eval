__int64 __fastcall uu_cksum::cksum(__int64 a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  __m128i *v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __m128i v13; // kr00_16
  __int64 v14; // rbx
  __int64 v15; // r14
  char v16; // r13
  char v17; // al
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 v20; // rbx
  __m128i *v21; // rax
  char v22; // r14
  __int64 (__fastcall **v23)(); // rcx
  __m128i v24; // xmm0
  __m128i v25; // rax
  __int32 v26; // ebx
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // rax
  __m128i v30; // kr10_16
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // r15
  void (__fastcall *v34)(_QWORD); // rax
  __int64 v35; // r13
  __int64 v36; // r15
  int v37; // eax
  __int64 v38; // rax
  const char *v39; // rcx
  unsigned __int8 v40; // r14
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  const char *v44; // rcx
  const char *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int8 v51; // al
  char v52; // cl
  const void *v53; // rbx
  size_t v54; // r15
  __int64 v55; // r14
  __int64 v56; // r12
  _BYTE *v57; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  const char *v60; // rax
  __int64 v61; // rcx
  __m128i si128; // xmm5
  __m128i v63; // xmm6
  __m128i v64; // xmm7
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  __m128i v67; // xmm2
  __m128i v68; // xmm3
  unsigned __int64 v69; // rdx
  __m128i v70; // xmm3
  __m128i v71; // xmm4
  __m128i v72; // xmm5
  __m128i v73; // xmm0
  __m128i v74; // xmm1
  __int64 v75; // rbx
  __int64 v76; // r15
  __int64 v77; // rsi
  __int64 v79; // rax
  unsigned int v80; // rbx^4
  __int64 v81; // rdi
  __int64 v82; // rax
  int v83; // ebx
  __int64 v84; // rax
  char v85; // bp
  __int64 v86; // rax
  __int64 v87; // r12
  __int64 v88; // r13
  __int64 v89; // rsi
  char **v90; // r8
  char **v91; // r8
  __m128i v93; // [rsp+10h] [rbp-338h] BYREF
  _BYTE v94[40]; // [rsp+20h] [rbp-328h]
  __int64 v95; // [rsp+48h] [rbp-300h]
  __m128i v96; // [rsp+50h] [rbp-2F8h] BYREF
  _BYTE dest[48]; // [rsp+60h] [rbp-2E8h] BYREF
  __int64 v98; // [rsp+98h] [rbp-2B0h]
  __int64 v99; // [rsp+A0h] [rbp-2A8h]
  __int64 v100; // [rsp+A8h] [rbp-2A0h]
  __int64 v101; // [rsp+B0h] [rbp-298h]
  char v102; // [rsp+B8h] [rbp-290h]
  __int64 v103; // [rsp+C0h] [rbp-288h]
  __int64 v104; // [rsp+D0h] [rbp-278h]
  __int64 v105; // [rsp+E0h] [rbp-268h]
  __int64 v106; // [rsp+E8h] [rbp-260h]
  char v107; // [rsp+F0h] [rbp-258h]
  __int16 v108; // [rsp+FEh] [rbp-24Ah] BYREF
  __m128i v109; // [rsp+100h] [rbp-248h] BYREF
  _QWORD v110[2]; // [rsp+110h] [rbp-238h] BYREF
  _QWORD v111[3]; // [rsp+120h] [rbp-228h] BYREF
  __int16 v112; // [rsp+138h] [rbp-210h]
  char v113; // [rsp+13Ah] [rbp-20Eh]
  __int64 v114; // [rsp+148h] [rbp-200h]
  __m128i *v115; // [rsp+150h] [rbp-1F8h] BYREF
  __int64 (__fastcall *v116)(); // [rsp+158h] [rbp-1F0h]
  __m128i v117; // [rsp+160h] [rbp-1E8h] BYREF
  __m128i v118[2]; // [rsp+170h] [rbp-1D8h] BYREF
  __m128i v119; // [rsp+190h] [rbp-1B8h] BYREF
  _BYTE v120[23]; // [rsp+1A0h] [rbp-1A8h]
  __int64 v121; // [rsp+1B8h] [rbp-190h] BYREF
  __int64 v122; // [rsp+1C0h] [rbp-188h] BYREF
  __int64 v123; // [rsp+1C8h] [rbp-180h]
  unsigned __int8 v124; // [rsp+1D0h] [rbp-178h]
  __m128i v125; // [rsp+1D1h] [rbp-177h]
  _BYTE v126[23]; // [rsp+1E1h] [rbp-167h]
  __int16 v127; // [rsp+1F8h] [rbp-150h]
  char v128; // [rsp+1FAh] [rbp-14Eh]
  __int64 v129; // [rsp+200h] [rbp-148h] BYREF
  __int64 *v130; // [rsp+208h] [rbp-140h]
  unsigned __int64 v131; // [rsp+210h] [rbp-138h]
  __int64 *v132; // [rsp+218h] [rbp-130h] BYREF
  __int64 *v133; // [rsp+220h] [rbp-128h]
  __int64 v134; // [rsp+228h] [rbp-120h]
  __int64 *v135; // [rsp+230h] [rbp-118h]
  _QWORD *v136; // [rsp+238h] [rbp-110h]
  __m128i *v137; // [rsp+240h] [rbp-108h]
  __int64 v138; // [rsp+248h] [rbp-100h]
  __int64 v139; // [rsp+250h] [rbp-F8h] BYREF
  _QWORD v140[3]; // [rsp+258h] [rbp-F0h] BYREF
  _QWORD v141[3]; // [rsp+270h] [rbp-D8h] BYREF
  __m128i v142; // [rsp+288h] [rbp-C0h] BYREF
  __int64 v143; // [rsp+298h] [rbp-B0h]
  __m128i v144; // [rsp+2A0h] [rbp-A8h] BYREF
  __int64 v145; // [rsp+2B0h] [rbp-98h]
  __m128i v146; // [rsp+2B8h] [rbp-90h] BYREF
  __int64 v147; // [rsp+2C8h] [rbp-80h]
  __m128i v148; // [rsp+2D0h] [rbp-78h] BYREF
  __int64 v149; // [rsp+2E0h] [rbp-68h]
  __m128i v150; // [rsp+2E8h] [rbp-60h] BYREF
  __int64 v151; // [rsp+2F8h] [rbp-50h]
  __m128i v152; // [rsp+300h] [rbp-48h] BYREF
  __int64 v153; // [rsp+310h] [rbp-38h]

  v2 = _mm_loadu_si128(a2);
  v3 = _mm_loadu_si128(a2 + 1);
  v4 = _mm_loadu_si128(a2 + 2);
  *(__m128i *)&dest[32] = _mm_loadu_si128(a2 + 3);
  *(__m128i *)&dest[16] = v4;
  *(__m128i *)dest = v3;
  v96 = v2;
  v137 = &v96;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v129);
  if ( *(_BYTE *)(a1 + 58) == 1 && v131 >= 2 )
  {
    v96.m128i_i64[0] = 0x8000000000000000LL;
    v5 = (__m128i *)_rust_alloc(24LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v6 = (__int64)v5;
    v5[1].m128i_i64[0] = *(_QWORD *)dest;
    *v5 = _mm_loadu_si128(&v96);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v129);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v129);
    goto LABEL_5;
  }
  v10 = v130;
  v132 = v130;
  v133 = v130;
  v134 = v129;
  v135 = &v130[2 * v131];
  if ( !v131 )
  {
LABEL_114:
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v132);
    v75 = *(_QWORD *)(a1 + 32);
    v76 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)v76 )
      (*(void (__fastcall **)(_QWORD))v76)(*(_QWORD *)(a1 + 32));
    v77 = *(_QWORD *)(v76 + 8);
    if ( v77 )
      _rust_dealloc(v75, v77, *(_QWORD *)(v76 + 16));
    return 0LL;
  }
  v138 = a1 + 32;
  v136 = dest;
  while ( 1 )
  {
    v133 = v10 + 2;
    v11 = *v10;
    v12 = *v10;
    v114 = v10[1];
    std::path::Path::components(&v109, v12);
    std::path::Path::components(&v122, asc_60DC0);
    v13 = v109;
    v14 = v122;
    v15 = v123;
    if ( v109.m128i_i64[1] != v123 )
    {
      v16 = v110[0];
      goto LABEL_20;
    }
    v16 = v110[0];
    if ( (_BYTE)v112 != (_BYTE)v127 || HIBYTE(v112) != 2 || HIBYTE(v127) != 2 )
      goto LABEL_20;
    if ( LOBYTE(v110[0]) == 6 )
    {
      if ( v124 <= 2u )
      {
        v17 = 6;
        goto LABEL_22;
      }
LABEL_81:
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              v109.m128i_i64[0],
                              v109.m128i_i64[1],
                              v122,
                              v109.m128i_i64[1]) )
        goto LABEL_25;
LABEL_20:
      v17 = 6;
      if ( v16 == 6 )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( v124 == 6 )
    {
      if ( LOBYTE(v110[0]) >= 3u )
        goto LABEL_81;
    }
    else if ( LOBYTE(v110[0]) < 3u == v124 < 3u )
    {
      goto LABEL_81;
    }
LABEL_21:
    *(_QWORD *)&v120[15] = v111[2];
    v18 = _mm_loadu_si128((const __m128i *)((char *)v110 + 1));
    *(__m128i *)v120 = _mm_loadu_si128((const __m128i *)((char *)v111 + 1));
    v119 = v18;
    v17 = v16;
LABEL_22:
    v93 = v13;
    v94[0] = v17;
    *(_QWORD *)&v94[32] = *(_QWORD *)&v120[15];
    *(_OWORD *)&v94[17] = *(_OWORD *)v120;
    *(__m128i *)&v94[1] = v119;
    LOWORD(v95) = v112;
    BYTE2(v95) = v113;
    if ( v124 != 6 )
    {
      *(__int64 *)((char *)&v118[0].m128i_i64[1] + 7) = *(_QWORD *)&v126[15];
      v118[0] = *(__m128i *)v126;
      v117 = v125;
    }
    v96.m128i_i64[0] = v14;
    v96.m128i_i64[1] = v15;
    dest[0] = v124;
    *(_QWORD *)&dest[32] = *(__int64 *)((char *)&v118[0].m128i_i64[1] + 7);
    v19 = _mm_load_si128(&v117);
    *(__m128i *)&dest[17] = _mm_load_si128(v118);
    *(__m128i *)&dest[1] = v19;
    *(_WORD *)&dest[40] = v127;
    dest[42] = v128;
    if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by(&v93, &v96) )
    {
LABEL_25:
      v20 = std::io::stdio::stdin();
      v21 = (__m128i *)_rust_alloc(8LL, 8LL);
      if ( !v21 )
        alloc::alloc::handle_alloc_error(8LL, 8LL);
      v21->m128i_i64[0] = v20;
      v22 = 1;
      v23 = (__int64 (__fastcall **)())&unk_2C7750;
      goto LABEL_37;
    }
    if ( (unsigned __int8)std::path::Path::is_dir(v11, v114) )
    {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v96, 0x2000LL);
      v21 = (__m128i *)_rust_alloc(40LL, 8LL);
      if ( !v21 )
        alloc::alloc::handle_alloc_error(8LL, 40LL);
      v21[2].m128i_i64[0] = *(_QWORD *)&dest[16];
      v24 = _mm_loadu_si128(&v96);
      v21[1] = _mm_loadu_si128((const __m128i *)dest);
      *v21 = v24;
      v22 = 0;
      v23 = &off_2C76F8;
      goto LABEL_37;
    }
    std::fs::File::open(&v117, v11, v114);
    if ( !v117.m128i_i32[0] )
      break;
    v119.m128i_i64[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                          v117.m128i_i64[1],
                          v11,
                          v114);
    uucore::mods::error::set_exit_code(1LL);
    v25.m128i_i64[0] = uucore::util_name();
    v109 = v25;
    v93.m128i_i64[0] = (__int64)&v109;
    v93.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)v94 = &v119;
    *(_QWORD *)&v94[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v96.m128i_i64[0] = (__int64)&unk_2C76C8;
    v96.m128i_i64[1] = 3LL;
    *(_QWORD *)&dest[16] = 0LL;
    *(_QWORD *)dest = &v93;
    *(_QWORD *)&dest[8] = 2LL;
    std::io::stdio::_eprint(&v96);
    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v119.m128i_i64[0]);
LABEL_11:
    v10 = v133;
    if ( v133 == v135 )
      goto LABEL_114;
  }
  v26 = v117.m128i_i32[1];
  v21 = (__m128i *)_rust_alloc(4LL, 4LL);
  if ( !v21 )
    alloc::alloc::handle_alloc_error(4LL, 4LL);
  v21->m128i_i32[0] = v26;
  v22 = 0;
  v23 = &off_2C7670;
LABEL_37:
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v122, 0x2000LL, v21, v23);
  if ( (unsigned __int8)std::path::Path::is_dir(v11, v114) )
  {
    v93.m128i_i64[0] = v11;
    v93.m128i_i64[1] = v114;
    v109.m128i_i64[0] = (__int64)&v93;
    v109.m128i_i64[1] = (__int64)<std::path::Display as core::fmt::Display>::fmt;
    v96.m128i_i64[0] = (__int64)&unk_2C7910;
    v96.m128i_i64[1] = 2LL;
    *(_QWORD *)&dest[16] = 0LL;
    *(_QWORD *)dest = &v109;
    *(_QWORD *)&dest[8] = 1LL;
    alloc::fmt::format::format_inner(&v142, &v96);
    *(_DWORD *)&dest[8] = 1;
    v96 = v142;
    *(_QWORD *)dest = v143;
    v27 = _rust_alloc(32LL, 8LL);
    if ( !v27 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v28 = _mm_load_si128(&v96);
    *(__m128i *)(v27 + 16) = _mm_load_si128((const __m128i *)dest);
    *(__m128i *)v27 = v28;
    v117.m128i_i64[0] = v27;
    v117.m128i_i64[1] = (__int64)&off_2C7968;
    uucore::mods::error::set_exit_code(*(unsigned int *)(v27 + 24));
    v29.m128i_i64[0] = uucore::util_name();
    v109 = v29;
    v93.m128i_i64[0] = (__int64)&v109;
    v93.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)v94 = &v117;
    *(_QWORD *)&v94[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v96.m128i_i64[0] = (__int64)&unk_2C76C8;
    v96.m128i_i64[1] = 3LL;
    *(_QWORD *)&dest[16] = 0LL;
    *(_QWORD *)dest = &v93;
    *(_QWORD *)&dest[8] = 2LL;
    std::io::stdio::_eprint(&v96);
    v30 = v117;
    if ( *(_QWORD *)v117.m128i_i64[1] )
      (*(void (__fastcall **)(__int64))v117.m128i_i64[1])(v117.m128i_i64[0]);
    v31 = *(_QWORD *)(v30.m128i_i64[1] + 8);
    if ( v31 )
      _rust_dealloc(v30.m128i_i64[0], v31, *(_QWORD *)(v30.m128i_i64[1] + 16));
    if ( v123 )
      _rust_dealloc(v122, v123, 1LL);
    v32 = *(_QWORD *)&v126[7];
    v33 = *(_QWORD *)&v126[15];
    v34 = **(void (__fastcall ***)(_QWORD))&v126[15];
    if ( **(_QWORD **)&v126[15] )
      goto LABEL_77;
    goto LABEL_78;
  }
  uucore::features::checksum::digest_reader(&v96, v138, &v122, 0LL, *(_QWORD *)(a1 + 48));
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v93,
    &v96);
  v6 = v93.m128i_i64[1];
  if ( v93.m128i_i64[0] == 0x8000000000000000LL )
    goto LABEL_135;
  v35 = *(_QWORD *)&v94[8];
  v119 = v93;
  *(_QWORD *)v120 = *(_QWORD *)v94;
  v139 = *(_QWORD *)&v94[8];
  if ( !*(_BYTE *)(a1 + 58) )
  {
    v118[0].m128i_i64[0] = *(_QWORD *)v120;
    v117 = v119;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(a1 + 58) == 2 )
  {
    v36 = *(_QWORD *)&v94[8];
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
      v118[0].m128i_i64[0] = *(_QWORD *)v120;
      v117 = _mm_loadu_si128(&v119);
      v35 = v36;
    }
    else
    {
      v110[0] = (char *)&dword_200 + 2;
      v109 = (__m128i)unk_2C77F0;
      *(_QWORD *)dest = *(_QWORD *)v120;
      v96 = _mm_loadu_si128(&v119);
      <alloc::vec::Vec<u8> as hex::FromHex>::from_hex(&v93, &v96);
      if ( v93.m128i_i64[0] == 0x8000000000000000LL )
      {
        v96 = _mm_loadu_si128((const __m128i *)&v93.m128i_u64[1]);
        core::result::unwrap_failed(aCalledResultUn, 43LL, &v96, &unk_2C7508, &off_2C7808);
      }
      *(_QWORD *)dest = *(_QWORD *)v94;
      v96 = _mm_loadu_si128(&v93);
      data_encoding::Encoding::encode(&v117, &v109, v96.m128i_i64[1]);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v96);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v96);
      if ( v109.m128i_i64[0] != 0x8000000000000000LL )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v109);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v109);
      }
      v35 = v36;
    }
LABEL_55:
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aSysv,
                            4LL) )
    {
      v37 = core::num::<impl core::str::traits::FromStr for u16>::from_str(v117.m128i_i64[1], v118[0].m128i_i64[0]);
      if ( (v37 & 1) != 0 )
      {
        v96.m128i_i8[0] = BYTE1(v37);
        v90 = &off_2C78D8;
        goto LABEL_149;
      }
      LOWORD(v121) = HIWORD(v37);
      v38 = uucore::features::sum::div_ceil(v35, *(_QWORD *)(a1 + 48));
      v39 = asc_6102C;
      if ( v22 )
        v39 = (_BYTE *)(&dword_0 + 1);
      v115 = (__m128i *)v38;
      v40 = v22 ^ 1;
      v109.m128i_i64[0] = (__int64)v39;
      v109.m128i_i64[1] = v40;
      v96.m128i_i64[0] = (__int64)&v121;
      v96.m128i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      *(_QWORD *)dest = &v115;
      *(_QWORD *)&dest[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&dest[16] = &v109;
      *(_QWORD *)&dest[24] = <&T as core::fmt::Display>::fmt;
      v93.m128i_i64[0] = (__int64)&unk_2C7890;
      v93.m128i_i64[1] = 3LL;
      *(_QWORD *)&v94[16] = 0LL;
      *(_QWORD *)v94 = &v96;
      *(_QWORD *)&v94[8] = 3LL;
      alloc::fmt::format::format_inner(&v144, &v93);
      v96 = v144;
      v41 = v145;
      goto LABEL_69;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aBsd,
                            3LL) )
    {
      v42 = core::num::<impl core::str::traits::FromStr for u16>::from_str(v117.m128i_i64[1], v118[0].m128i_i64[0]);
      if ( (v42 & 1) != 0 )
      {
        v96.m128i_i8[0] = BYTE1(v42);
        v90 = &off_2C78C0;
LABEL_149:
        core::result::unwrap_failed(aCalledResultUn, 43LL, &v96, &unk_2C74E8, v90);
      }
      v108 = HIWORD(v42);
      v43 = uucore::features::sum::div_ceil(v35, *(_QWORD *)(a1 + 48));
      v44 = asc_6102C;
      if ( v22 )
        v44 = (_BYTE *)(&dword_0 + 1);
      v121 = v43;
      v40 = v22 ^ 1;
      v115 = (__m128i *)v44;
      v116 = (__int64 (__fastcall *)())v40;
      v93.m128i_i64[0] = (__int64)&v108;
      v93.m128i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      *(_QWORD *)v94 = &v121;
      *(_QWORD *)&v94[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v94[16] = &v115;
      *(_QWORD *)&v94[24] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v94[32] = 5LL;
      v95 = 0LL;
      v96.m128i_i64[0] = 2LL;
      *(_QWORD *)dest = 1LL;
      *(_QWORD *)&dest[8] = 3LL;
      *(_QWORD *)&dest[16] = 0LL;
      *(_QWORD *)&dest[24] = 0x800000020LL;
      dest[32] = 3;
      *(_QWORD *)&dest[40] = 2LL;
      v98 = 1LL;
      v99 = 3LL;
      v100 = 1LL;
      v101 = 32LL;
      v102 = 3;
      v103 = 2LL;
      v104 = 2LL;
      v105 = 2LL;
      v106 = 32LL;
      v107 = 3;
      v109.m128i_i64[0] = (__int64)&unk_2C7890;
      v109.m128i_i64[1] = 3LL;
      v111[0] = &v96;
      v111[1] = 3LL;
      v110[0] = &v93;
      v110[1] = 4LL;
      alloc::fmt::format::format_inner(&v146, &v109);
      v96 = v146;
      v41 = v147;
LABEL_69:
      *(_QWORD *)dest = v41;
      v46 = 1LL;
LABEL_70:
      v47 = 0LL;
      v48 = 0LL;
LABEL_71:
      v110[0] = *(_QWORD *)dest;
      v109 = _mm_load_si128(&v96);
      v93.m128i_i64[0] = v47;
      v93.m128i_i64[1] = v46;
      *(_QWORD *)v94 = v48;
      v115 = &v109;
      v116 = <alloc::string::String as core::fmt::Display>::fmt;
      v96.m128i_i64[0] = (__int64)&anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
      v96.m128i_i64[1] = 1LL;
      *(_QWORD *)&dest[16] = 0LL;
      *(_QWORD *)dest = &v115;
      *(_QWORD *)&dest[8] = 1LL;
      std::io::stdio::_print(&v96);
      if ( v40 )
      {
        v96.m128i_i64[0] = std::io::stdio::stdout();
        v49 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v96, v11, v114);
        if ( v49 )
          core::ptr::drop_in_place<std::io::error::Error>(v49);
      }
      v115 = &v93;
      v116 = <alloc::string::String as core::fmt::Display>::fmt;
      v96.m128i_i64[0] = (__int64)&unk_2C78F0;
      v96.m128i_i64[1] = 2LL;
      *(_QWORD *)&dest[16] = 0LL;
      *(_QWORD *)dest = &v115;
      *(_QWORD *)&dest[8] = 1LL;
      std::io::stdio::_print(&v96);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v93);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v93);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v109);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v109);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v117);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v117);
      if ( v123 )
        _rust_dealloc(v122, v123, 1LL);
      v32 = *(_QWORD *)&v126[7];
      v33 = *(_QWORD *)&v126[15];
      v34 = **(void (__fastcall ***)(_QWORD))&v126[15];
      if ( **(_QWORD **)&v126[15] )
LABEL_77:
        v34(*(_QWORD *)&v126[7]);
LABEL_78:
      v50 = *(_QWORD *)(v33 + 8);
      if ( v50 )
        _rust_dealloc(v32, v50, *(_QWORD *)(v33 + 16));
      goto LABEL_11;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aCrc,
                            3LL) )
    {
      v45 = asc_6102C;
      if ( v22 )
        v45 = (_BYTE *)(&dword_0 + 1);
      v40 = v22 ^ 1;
      v109.m128i_i64[0] = (__int64)v45;
      v109.m128i_i64[1] = v40;
      v96.m128i_i64[0] = (__int64)&v117;
      v96.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &v139;
      *(_QWORD *)&dest[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&dest[16] = &v109;
      *(_QWORD *)&dest[24] = <&T as core::fmt::Display>::fmt;
      v93.m128i_i64[0] = (__int64)&unk_2C7890;
      v93.m128i_i64[1] = 3LL;
      *(_QWORD *)&v94[16] = 0LL;
      *(_QWORD *)v94 = &v96;
      *(_QWORD *)&v94[8] = 3LL;
      alloc::fmt::format::format_inner(&v148, &v93);
      v96 = v148;
      v41 = v149;
      goto LABEL_69;
    }
    v51 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 24),
            aBlake2b_0,
            7LL);
    v52 = *(_BYTE *)(a1 + 56);
    if ( ((v52 != 0) & v51) != 0 )
    {
      if ( *(_QWORD *)a1 )
      {
        v109.m128i_i64[0] = 8LL * *(_QWORD *)(a1 + 8);
        v93.m128i_i64[0] = (__int64)&v109;
        v93.m128i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v96.m128i_i64[0] = (__int64)&off_2C7870;
        v96.m128i_i64[1] = 2LL;
        *(_QWORD *)&dest[16] = 0LL;
        *(_QWORD *)dest = &v93;
        *(_QWORD *)&dest[8] = 1LL;
        alloc::fmt::format::format_inner(&v150, &v96);
        v93 = _mm_loadu_si128(&v150);
        *(_QWORD *)v94 = v151;
      }
      else
      {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v96, 9LL, 0LL);
        v55 = v96.m128i_i64[1];
        if ( v96.m128i_i64[0] )
LABEL_153:
          alloc::raw_vec::handle_error(v55, *v136);
        v59 = *(_QWORD *)dest;
        **(_QWORD **)dest = 0x206232454B414C42LL;
        *(_BYTE *)(v59 + 8) = 40;
        v93.m128i_i64[0] = v55;
        v93.m128i_i64[1] = v59;
        *(_QWORD *)v94 = 9LL;
      }
      v109.m128i_i64[0] = (__int64)&v117;
      v109.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      v96.m128i_i64[0] = (__int64)&off_2C7860;
      v96.m128i_i64[1] = 1LL;
      *(_QWORD *)&dest[16] = 0LL;
      *(_QWORD *)dest = &v109;
      *(_QWORD *)&dest[8] = 1LL;
      alloc::fmt::format::format_inner(v140, &v96);
      v96 = v93;
      *(_QWORD *)dest = *(_QWORD *)v94;
      v47 = v140[0];
      v46 = v140[1];
      v48 = v140[2];
      goto LABEL_113;
    }
    if ( !v52 )
    {
      v60 = asc_6102D;
      if ( !*(_BYTE *)(a1 + 57) )
        v60 = asc_6102C;
      v109.m128i_i64[0] = (__int64)v60;
      v109.m128i_i64[1] = 1LL;
      v93.m128i_i64[0] = (__int64)&v117;
      v93.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v94 = &v109;
      *(_QWORD *)&v94[8] = <&T as core::fmt::Display>::fmt;
      v96.m128i_i64[0] = (__int64)&unk_2C7820;
      v96.m128i_i64[1] = 2LL;
      *(_QWORD *)&dest[16] = 0LL;
      *(_QWORD *)dest = &v93;
      *(_QWORD *)&dest[8] = 2LL;
      alloc::fmt::format::format_inner(&v152, &v96);
      v96 = v152;
      *(_QWORD *)dest = v153;
      v46 = 1LL;
      v40 = 1;
      goto LABEL_70;
    }
    v53 = *(const void **)(a1 + 16);
    v54 = *(_QWORD *)(a1 + 24);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v96, v54, 0LL);
    v55 = v96.m128i_i64[1];
    if ( v96.m128i_i64[0] )
      goto LABEL_153;
    v56 = *(_QWORD *)dest;
    memcpy(*(void **)dest, v53, v54);
    if ( !v54 )
      goto LABEL_112;
    v57 = (_BYTE *)v56;
    if ( v54 >= 8 )
    {
      if ( v54 >= 0x20 )
      {
        v58 = v54 & 0xFFFFFFFFFFFFFFE0LL;
        v61 = 0LL;
        si128 = _mm_load_si128((const __m128i *)&xmmword_5C430);
        v63 = _mm_load_si128((const __m128i *)&xmmword_5C630);
        v64 = _mm_load_si128(xmmword_5D1E0);
        do
        {
          v65 = _mm_loadu_si128((const __m128i *)(v56 + v61));
          v66 = _mm_loadu_si128((const __m128i *)(v56 + v61 + 16));
          v67 = _mm_add_epi8(v65, si128);
          v68 = _mm_add_epi8(v66, si128);
          *(__m128i *)(v56 + v61) = _mm_xor_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v67, v63), v67), v64), v65);
          *(__m128i *)(v56 + v61 + 16) = _mm_xor_si128(
                                           _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v68, v63), v68), v64),
                                           v66);
          v61 += 32LL;
        }
        while ( v58 != v61 );
        if ( v54 == v58 )
          goto LABEL_112;
        if ( (v54 & 0x18) != 0 )
          goto LABEL_106;
        v57 = (_BYTE *)(v56 + v58);
      }
      else
      {
        v58 = 0LL;
LABEL_106:
        v69 = v54 & 0xFFFFFFFFFFFFFFF8LL;
        v57 = (_BYTE *)(v56 + (v54 & 0xFFFFFFFFFFFFFFF8LL));
        v70 = _mm_load_si128((const __m128i *)&xmmword_5C640);
        v71 = _mm_load_si128(xmmword_5CDE0);
        v72 = _mm_load_si128((const __m128i *)&xmmword_5D0D0);
        do
        {
          v73 = _mm_loadl_epi64((const __m128i *)(v56 + v58));
          v74 = _mm_add_epi8(v73, v70);
          *(_QWORD *)(v56 + v58) = _mm_xor_si128(
                                     _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v74, v71), v74), v72),
                                     v73).m128i_u64[0];
          v58 += 8LL;
        }
        while ( v69 != v58 );
        if ( v54 == v69 )
        {
LABEL_112:
          v93.m128i_i64[0] = v55;
          v93.m128i_i64[1] = v56;
          *(_QWORD *)v94 = v54;
          v115 = &v93;
          v116 = <alloc::string::String as core::fmt::Display>::fmt;
          v96.m128i_i64[0] = (__int64)&unk_2C7840;
          v96.m128i_i64[1] = 2LL;
          *(_QWORD *)&dest[16] = 0LL;
          *(_QWORD *)dest = &v115;
          *(_QWORD *)&dest[8] = 1LL;
          alloc::fmt::format::format_inner(&v109, &v96);
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v93);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v93);
          v93 = _mm_loadu_si128(&v109);
          *(_QWORD *)v94 = v110[0];
          v109.m128i_i64[0] = (__int64)&v117;
          v109.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v96.m128i_i64[0] = (__int64)&off_2C7860;
          v96.m128i_i64[1] = 1LL;
          *(_QWORD *)&dest[16] = 0LL;
          *(_QWORD *)dest = &v109;
          *(_QWORD *)&dest[8] = 1LL;
          alloc::fmt::format::format_inner(v141, &v96);
          v96 = v93;
          *(_QWORD *)dest = *(_QWORD *)v94;
          v47 = v141[0];
          v46 = v141[1];
          v48 = v141[2];
LABEL_113:
          v40 = 1;
          goto LABEL_71;
        }
      }
    }
    do
    {
      *v57 ^= 32 * ((unsigned __int8)(*v57 - 97) < 0x1Au);
      ++v57;
    }
    while ( v57 != (_BYTE *)(v56 + v54) );
    goto LABEL_112;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          aCrc,
                          3LL) )
  {
    v79 = core::num::<impl core::str::traits::FromStr for u32>::from_str(v119.m128i_i64[1], *(_QWORD *)v120);
    v80 = HIDWORD(v79);
    if ( (v79 & 1) == 0 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v96, 4LL, 0LL);
      v81 = v96.m128i_i64[1];
      if ( !v96.m128i_i64[0] )
      {
        v82 = *(_QWORD *)dest;
        **(_DWORD **)dest = _byteswap_ulong(v80);
        v96.m128i_i64[0] = v81;
        v96.m128i_i64[1] = v82;
        *(_QWORD *)dest = 4LL;
        goto LABEL_129;
      }
LABEL_154:
      alloc::raw_vec::handle_error(v81, *(_QWORD *)dest);
    }
    v96.m128i_i8[0] = BYTE1(v79);
    v91 = &off_2C77D8;
LABEL_157:
    core::result::unwrap_failed(aCalledResultUn, 43LL, v137, &unk_2C74E8, v91);
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
    v83 = core::num::<impl core::str::traits::FromStr for u16>::from_str(v119.m128i_i64[1], *(_QWORD *)v120);
    if ( (v83 & 1) != 0 )
    {
      v96.m128i_i8[0] = BYTE1(v83);
      v91 = &off_2C77C0;
      goto LABEL_157;
    }
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v96, 2LL, 0LL);
    v81 = v96.m128i_i64[1];
    if ( v96.m128i_i64[0] )
      goto LABEL_154;
    v84 = *(_QWORD *)dest;
    **(_WORD **)dest = __ROL2__(HIWORD(v83), 8);
    v96.m128i_i64[0] = v81;
    v96.m128i_i64[1] = v84;
    *(_QWORD *)dest = 2LL;
LABEL_129:
    v85 = 0;
  }
  else
  {
    *(_QWORD *)dest = *(_QWORD *)v120;
    v96 = _mm_loadu_si128(&v119);
    <alloc::vec::Vec<u8> as hex::FromHex>::from_hex(&v93, &v96);
    if ( v93.m128i_i64[0] == 0x8000000000000000LL )
    {
      v96 = _mm_loadu_si128((const __m128i *)&v93.m128i_u64[1]);
      core::result::unwrap_failed(aCalledResultUn, 43LL, &v96, &unk_2C7508, &off_2C77A8);
    }
    *(_QWORD *)dest = *(_QWORD *)v94;
    v96 = _mm_loadu_si128(&v93);
    v85 = 1;
  }
  v93.m128i_i64[0] = std::io::stdio::stdout();
  v86 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v93, v96.m128i_i64[1], *(_QWORD *)dest);
  if ( v86 )
    v6 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v86);
  else
    v6 = 0LL;
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v96);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v96);
  if ( !v85 )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v119);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v119);
  }
LABEL_135:
  if ( v123 )
    _rust_dealloc(v122, v123, 1LL);
  v87 = *(_QWORD *)&v126[7];
  v88 = *(_QWORD *)&v126[15];
  if ( **(_QWORD **)&v126[15] )
    (**(void (__fastcall ***)(_QWORD))&v126[15])(*(_QWORD *)&v126[7]);
  v89 = *(_QWORD *)(v88 + 8);
  if ( v89 )
    _rust_dealloc(v87, v89, *(_QWORD *)(v88 + 16));
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v132);
LABEL_5:
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)v8 )
    (*(void (__fastcall **)(_QWORD))v8)(*(_QWORD *)(a1 + 32));
  v9 = *(_QWORD *)(v8 + 8);
  if ( v9 )
    _rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16));
  return v6;
}
