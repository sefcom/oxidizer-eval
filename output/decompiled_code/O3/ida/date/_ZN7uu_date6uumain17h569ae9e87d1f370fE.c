__int64 __fastcall uu_date::uumain(__int64 a1, __int64 a2)
{
  __m128i *v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rbx
  __int64 (__fastcall **v5)(); // rdx
  __m128i v6; // xmm0
  __int64 v7; // rax
  char *v8; // r14
  unsigned __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __int64 v13; // rbx
  _BYTE *v14; // r14
  __int64 v15; // rax
  __int8 v16; // bl
  __int64 v17; // rax
  __m128i v18; // xmm0
  size_t v19; // rbx
  void *v20; // r12
  size_t v21; // rbx
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  const void *v26; // r15
  unsigned __int64 v27; // r14
  __int64 v28; // r12
  char flag; // al
  __m128i v30; // xmm1
  __int64 v31; // rax
  __int64 (__fastcall **v32)(); // rdx
  __int128 v33; // rax
  __int128 v34; // rax
  unsigned int v35; // ebx
  __int128 v36; // kr40_16
  __int64 v37; // rsi
  __int32 v38; // ebp
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __m128i v42; // xmm1
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rax
  __m128i v47; // xmm0
  __m128i v48; // xmm1
  unsigned __int64 v49; // rcx
  __m128i v50; // xmm0
  __int64 v51; // rax
  __int64 v52; // rax
  __m128i v53; // kr50_16
  __int64 v54; // rax
  __m128i v55; // xmm1
  unsigned __int64 v56; // rcx
  __m128i v57; // xmm1
  __m128i v58; // xmm2
  __int64 v59; // rax
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  char *v64; // rcx
  __m128i v65; // xmm0
  __m128i v66; // xmm0
  __m128i v67; // xmm1
  __m128i v68; // xmm0
  __m128i v69; // xmm1
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  __m128i v72; // xmm0
  __int64 v73; // rax
  __m128i v74; // xmm0
  __int64 v75; // rdx
  __m128i v76; // kr60_16
  __int64 v77; // rsi
  __int64 v78; // r13
  unsigned __int64 v79; // r15
  char v80; // al
  __int64 v81; // rbx
  char v82; // bp
  __m128i v83; // xmm2
  __m128i v84; // xmm3
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // r12
  unsigned __int8 v90; // bl
  __int64 v91; // rdx
  __int64 v92; // rdx
  __m128i v93; // kr80_16
  int v94; // edx
  int v95; // ecx
  int v96; // r8d
  int v97; // r9d
  __int64 v98; // rax
  __m128i v99; // xmm0
  __int64 (__fastcall *v100)(); // rsi
  __int64 (__fastcall *v101)(); // rsi
  void **v103; // rax
  char v104; // [rsp+0h] [rbp-718h]
  __int64 (__fastcall **v105)(); // [rsp+8h] [rbp-710h]
  _BYTE v106[24]; // [rsp+10h] [rbp-708h] BYREF
  __int64 (__fastcall *v107)(); // [rsp+28h] [rbp-6F0h]
  int v108; // [rsp+48h] [rbp-6D0h]
  __m128i v109; // [rsp+50h] [rbp-6C8h] BYREF
  void *v110; // [rsp+60h] [rbp-6B8h]
  __int128 v111; // [rsp+68h] [rbp-6B0h]
  __m256i v112; // [rsp+78h] [rbp-6A0h] BYREF
  __int64 (__fastcall **v113)(); // [rsp+98h] [rbp-680h]
  __m128i v114; // [rsp+A0h] [rbp-678h] BYREF
  __m128i v115; // [rsp+B0h] [rbp-668h] BYREF
  __m128i v116; // [rsp+C0h] [rbp-658h] BYREF
  __m128i v117; // [rsp+D0h] [rbp-648h] BYREF
  size_t v118; // [rsp+E0h] [rbp-638h]
  int v119; // [rsp+E8h] [rbp-630h]
  int v120; // [rsp+F0h] [rbp-628h]
  _BYTE *v121; // [rsp+F8h] [rbp-620h] BYREF
  __m128i v122; // [rsp+100h] [rbp-618h]
  __m128i v123; // [rsp+110h] [rbp-608h] BYREF
  __int64 v124; // [rsp+120h] [rbp-5F8h]
  __int32 v125; // [rsp+128h] [rbp-5F0h]
  _BYTE v126[24]; // [rsp+130h] [rbp-5E8h] BYREF
  __m128i v127; // [rsp+148h] [rbp-5D0h]
  void *v128; // [rsp+158h] [rbp-5C0h]
  __m128i v129; // [rsp+160h] [rbp-5B8h] BYREF
  __int64 v130; // [rsp+170h] [rbp-5A8h]
  _BYTE v131[24]; // [rsp+178h] [rbp-5A0h] BYREF
  void *v132; // [rsp+190h] [rbp-588h]
  _OWORD v133[3]; // [rsp+198h] [rbp-580h] BYREF
  __int64 v134; // [rsp+1C8h] [rbp-550h]
  __m128i v135; // [rsp+1D0h] [rbp-548h] BYREF
  void *dest[2]; // [rsp+1E0h] [rbp-538h] BYREF
  __m128i v137[43]; // [rsp+1F0h] [rbp-528h] BYREF
  unsigned __int64 v138; // [rsp+4A0h] [rbp-278h]
  __int64 (__fastcall *v139)(); // [rsp+4A8h] [rbp-270h]
  __int64 v140; // [rsp+4B0h] [rbp-268h] BYREF
  int v141; // [rsp+4B8h] [rbp-260h]
  _BYTE v142[16]; // [rsp+4C0h] [rbp-258h] BYREF
  __m128i v143; // [rsp+4D0h] [rbp-248h] BYREF
  __m128i v144; // [rsp+4E0h] [rbp-238h] BYREF
  __m128i v145; // [rsp+4F0h] [rbp-228h] BYREF
  __m128i v146; // [rsp+500h] [rbp-218h] BYREF
  __m128i v147; // [rsp+510h] [rbp-208h] BYREF
  __m128i v148; // [rsp+520h] [rbp-1F8h] BYREF
  __m128i v149; // [rsp+530h] [rbp-1E8h] BYREF
  __m128i v150; // [rsp+540h] [rbp-1D8h] BYREF
  __m128i v151; // [rsp+550h] [rbp-1C8h] BYREF
  __m128i v152; // [rsp+560h] [rbp-1B8h] BYREF
  __m128i v153; // [rsp+570h] [rbp-1A8h] BYREF
  __m128i v154; // [rsp+580h] [rbp-198h] BYREF
  __m128i v155; // [rsp+590h] [rbp-188h] BYREF
  __m128i v156; // [rsp+5A0h] [rbp-178h] BYREF
  __m128i v157; // [rsp+5B0h] [rbp-168h] BYREF
  __m128i v158; // [rsp+5C0h] [rbp-158h] BYREF
  __m128i v159; // [rsp+5D0h] [rbp-148h] BYREF
  __m128i v160; // [rsp+5E0h] [rbp-138h] BYREF
  __m128i v161; // [rsp+5F8h] [rbp-120h] BYREF
  __int64 v162; // [rsp+608h] [rbp-110h]
  __m128i v163; // [rsp+610h] [rbp-108h] BYREF
  void *v164; // [rsp+620h] [rbp-F8h]
  __m128i v165; // [rsp+628h] [rbp-F0h] BYREF
  void *v166; // [rsp+638h] [rbp-E0h]
  unsigned __int64 v167; // [rsp+640h] [rbp-D8h] BYREF
  __m128i v168; // [rsp+648h] [rbp-D0h] BYREF
  __m128i v169; // [rsp+660h] [rbp-B8h] BYREF
  __m128i v170; // [rsp+670h] [rbp-A8h] BYREF
  void *v171; // [rsp+680h] [rbp-98h]
  __m128i v172; // [rsp+688h] [rbp-90h] BYREF
  void *v173; // [rsp+698h] [rbp-80h]
  __m128i v174; // [rsp+6A0h] [rbp-78h] BYREF
  void *v175; // [rsp+6B0h] [rbp-68h]
  __m128i v176; // [rsp+6B8h] [rbp-60h] BYREF
  __m128i v177; // [rsp+6C8h] [rbp-50h] BYREF
  __m128i v178[4]; // [rsp+6D8h] [rbp-40h] BYREF

  v2 = &v135;
  uu_date::uu_app(&v135);
  clap_builder::builder::command::Command::try_get_matches_from(&v114, &v135, a1, a2);
  v3 = 0x8000000000000000LL;
  if ( v114.m128i_i64[0] == 0x8000000000000000LL )
  {
    v4 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v114.m128i_i64[1]);
    v113 = v5;
    if ( !v4 )
      return (unsigned int)uucore::mods::error::get_exit_code();
    goto LABEL_43;
  }
  v134 = v117.m128i_i64[0];
  v6 = _mm_loadu_si128(&v115);
  v133[2] = _mm_loadu_si128(&v116);
  v133[1] = v6;
  v133[0] = v114;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v135, v133, aFormat, 6LL);
  v7 = clap_builder::parser::error::MatchesError::unwrap(aFormat, 6LL, &v135);
  if ( v7 )
  {
    v8 = *(char **)(v7 + 8);
    v9 = *(_QWORD *)(v7 + 16);
    v135.m128i_i32[0] = 43;
    if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v8) )
    {
      v114.m128i_i64[0] = 0LL;
      v114.m128i_i64[1] = (__int64)v8;
      v115.m128i_i64[0] = v9;
      v115.m128i_i8[8] = 1;
      *(_QWORD *)v106 = &v114;
      *(_QWORD *)&v106[8] = <os_display::Quoted as core::fmt::Display>::fmt;
      v135.m128i_i64[0] = (__int64)&off_28D958;
      v135.m128i_i64[1] = 1LL;
      v137[0].m128i_i64[0] = 0LL;
      dest[0] = v106;
      dest[1] = &dword_0 + 1;
      alloc::fmt::format::format_inner(&v163, &v135);
      LODWORD(dest[1]) = 1;
      v135 = _mm_loadu_si128(&v163);
      dest[0] = v164;
      v17 = _rust_alloc(32LL, 8LL);
      if ( !v17 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v4 = v17;
      v18 = _mm_load_si128(&v135);
      *(__m128i *)(v17 + 16) = _mm_load_si128((const __m128i *)dest);
      *(__m128i *)v17 = v18;
      v113 = &off_28D9A0;
      goto LABEL_42;
    }
    if ( v9 < 2 )
    {
      if ( v9 != 1 )
LABEL_8:
        core::str::slice_error_fail(v8, v9, 1LL, v9, &off_28DA10);
    }
    else if ( v8[1] <= -65 )
    {
      goto LABEL_8;
    }
    v19 = v9 - 1;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v135, v19, 0LL);
    v2 = (__m128i *)v135.m128i_i64[1];
    if ( !v135.m128i_i64[0] )
    {
      v20 = dest[0];
      memcpy(dest[0], v8 + 1, v19);
      v129.m128i_i64[0] = (__int64)v2;
      v129.m128i_i64[1] = (__int64)v20;
      v130 = v19;
      v3 = 0x8000000000000000LL;
      goto LABEL_19;
    }
    v103 = dest;
LABEL_168:
    alloc::raw_vec::handle_error(v2, *v103);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v135, v133, aIso8601, 8LL);
  clap_builder::parser::error::MatchesError::unwrap(&v114, aIso8601, 8LL, &v135);
  if ( v114.m128i_i64[0] )
  {
    v10 = _mm_loadu_si128(&v114);
    v11 = _mm_loadu_si128(&v115);
    v12 = _mm_loadu_si128(&v116);
    v137[1] = _mm_loadu_si128(&v117);
    v137[0] = v12;
    *(__m128i *)dest = v11;
    v135 = v10;
    v13 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v135);
    v14 = v106;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v106, 4LL, 0LL);
    v2 = *(__m128i **)&v106[8];
    if ( *(_QWORD *)v106 )
    {
      v103 = (void **)&v106[16];
      goto LABEL_168;
    }
    v15 = *(_QWORD *)&v106[16];
    **(_DWORD **)&v106[16] = 1702125924;
    *(_QWORD *)v106 = v2;
    *(_QWORD *)&v106[8] = v15;
    *(_QWORD *)&v106[16] = 4LL;
    if ( v13 )
      v14 = (_BYTE *)v13;
    v16 = <uu_date::Iso8601Format as core::convert::From<&str>>::from(*((_QWORD *)v14 + 1), *((_QWORD *)v14 + 2));
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v106);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v106);
    v129.m128i_i8[8] = v16;
    v129.m128i_i64[0] = 0x8000000000000000LL;
  }
  else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v133, aRfcEmail, 9LL) )
  {
    v129.m128i_i64[0] = 0x8000000000000001LL;
  }
  else
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v135, v133, aRfc3339, 8LL);
    v46 = clap_builder::parser::error::MatchesError::unwrap(aRfc3339, 8LL, &v135);
    if ( v46 )
    {
      v129.m128i_i8[8] = <uu_date::Rfc3339Format as core::convert::From<&str>>::from(
                           *(_QWORD *)(v46 + 8),
                           *(_QWORD *)(v46 + 16));
      v129.m128i_i64[0] = 0x8000000000000002LL;
    }
    else
    {
      v129.m128i_i64[0] = 0x8000000000000004LL;
    }
  }
LABEL_19:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v135, v133, "datethur]", 4LL);
  v21 = clap_builder::parser::error::MatchesError::unwrap("datethur]", 4LL, &v135);
  if ( !v21 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v135, v133, "filemode{", 4LL);
    v23 = clap_builder::parser::error::MatchesError::unwrap("filemode{", 4LL, &v135);
    if ( v23 )
    {
      v21 = *(_QWORD *)(v23 + 8);
      v24 = *(_QWORD *)(v23 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v24, asc_5E5FF, 1LL) )
      {
        *(_QWORD *)v131 = 3LL;
      }
      else
      {
        std::sys::os_str::bytes::Slice::to_owned(&v135, v21, v24);
        v132 = dest[0];
        *(__m128i *)&v131[8] = _mm_loadu_si128(&v135);
        *(_QWORD *)v131 = 2LL;
      }
    }
    else
    {
      *(_QWORD *)v131 = 0LL;
    }
    goto LABEL_32;
  }
  chrono::offset::local::Local::now(v142);
  parse_datetime::parse_datetime_at_date(&v114, v142, *(_QWORD *)(v21 + 8), *(_QWORD *)(v21 + 16));
  if ( v114.m128i_i64[0] == 0x8000000000000002LL )
  {
    v158 = _mm_loadu_si128((const __m128i *)&v114.m128i_u64[1]);
    *(_QWORD *)&v131[8] = chrono::naive::datetime::NaiveDateTime::signed_duration_since(&v158, v142);
    *(_DWORD *)&v131[16] = v22;
    *(_QWORD *)v131 = 4LL;
    if ( v114.m128i_i64[0] < (__int64)0x8000000000000003LL )
      goto LABEL_32;
    goto LABEL_27;
  }
  <alloc::string::String as core::clone::Clone>::clone(&v135, v21);
  v132 = dest[0];
  *(__m128i *)&v131[8] = _mm_loadu_si128(&v135);
  *(_QWORD *)v131 = 1LL;
  if ( v114.m128i_i64[0] >= (__int64)0x8000000000000003LL )
  {
LABEL_27:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v114);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v114);
  }
LABEL_32:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v135, v133, aSet, 3LL);
  v25 = clap_builder::parser::error::MatchesError::unwrap(aSet, 3LL, &v135);
  if ( v25 )
  {
    v26 = *(const void **)(v25 + 8);
    v21 = *(_QWORD *)(v25 + 16);
    parse_datetime::parse_datetime(v106, v26, v21);
    if ( *(_QWORD *)v106 == 0x8000000000000002LL )
    {
      LODWORD(v27) = *(_DWORD *)&v106[8];
      v21 = *(_QWORD *)&v106[16];
      v2 = (__m128i *)HIDWORD(*(_QWORD *)&v106[8]);
    }
    else
    {
      v115.m128i_i64[0] = *(_QWORD *)&v106[16];
      v114 = _mm_loadu_si128((const __m128i *)v106);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v135, v21, 0LL);
      v28 = v135.m128i_i64[1];
      if ( v135.m128i_i64[0] )
        alloc::raw_vec::handle_error(v135.m128i_i64[1], dest[0]);
      v27 = (unsigned __int64)dest[0];
      memcpy(dest[0], v26, v21);
      v109 = _mm_loadu_si128((const __m128i *)v106);
      v110 = *(void **)&v106[16];
      v2 = (__m128i *)HIDWORD(v27);
      if ( v28 != 0x8000000000000000LL )
      {
        *(_QWORD *)v126 = v28;
        *(_QWORD *)&v126[8] = v27;
        *(_QWORD *)&v126[16] = v21;
        *(_QWORD *)&v106[16] = v110;
        *(__m128i *)v106 = _mm_load_si128(&v109);
        v114.m128i_i64[0] = 0LL;
        v114.m128i_i64[1] = v27;
        v115.m128i_i64[0] = v21;
        v115.m128i_i8[8] = 1;
        v112.m256i_i64[1] = (__int64)&v114;
        v112.m256i_i64[2] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        v135.m128i_i64[0] = (__int64)&off_28D958;
        v135.m128i_i64[1] = 1LL;
        v137[0].m128i_i64[0] = 0LL;
        dest[0] = &v112.m256i_u64[1];
        dest[1] = &dword_0 + 1;
        alloc::fmt::format::format_inner(&v165, &v135);
        LODWORD(dest[1]) = 1;
        v135 = _mm_loadu_si128(&v165);
        dest[0] = v166;
        v44 = _rust_alloc(32LL, 8LL);
        if ( !v44 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v4 = v44;
        v45 = _mm_load_si128(&v135);
        *(__m128i *)(v44 + 16) = _mm_load_si128((const __m128i *)dest);
        *(__m128i *)v44 = v45;
        if ( *(__int64 *)v106 >= (__int64)0x8000000000000002LL )
        {
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v106);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v106);
        }
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v126);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v126);
        core::ptr::drop_in_place<uu_date::DateSource>(v131);
        v113 = &off_28D9A0;
        if ( (v129.m128i_i64[0] ^ 0x8000000000000000LL) > 4 || (v129.m128i_i64[0] ^ 0x8000000000000000LL) == 3 )
        {
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v129);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v129);
        }
        goto LABEL_42;
      }
      v3 = 0x8000000000000000LL;
    }
  }
  else
  {
    LODWORD(v27) = 0;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v133, aUniversal, 9LL);
  v117.m128i_i64[0] = v130;
  v116 = v129;
  v30 = _mm_loadu_si128((const __m128i *)&v131[16]);
  v114 = _mm_loadu_si128((const __m128i *)v131);
  v115 = v30;
  LOBYTE(v119) = flag;
  v117.m128i_i64[1] = __PAIR64__((unsigned int)v2, v27);
  v118 = v21;
  if ( (_DWORD)v27 )
  {
    v141 = v118;
    v140 = v117.m128i_i64[1];
    v31 = uu_date::set_system_datetime(&v140);
    v113 = v32;
    v4 = v31;
  }
  else
  {
    if ( flag )
    {
      chrono::offset::utc::Utc::now(&v135);
      v125 = v135.m128i_i32[2];
      v124 = v135.m128i_i64[0];
      v38 = 0;
      switch ( v114.m128i_i64[0] )
      {
        case 0LL:
          goto LABEL_54;
        case 1LL:
          goto LABEL_77;
        case 2LL:
          goto LABEL_71;
        case 3LL:
          goto LABEL_73;
        case 4LL:
          goto LABEL_66;
      }
    }
    chrono::offset::local::Local::now(&v135);
    v125 = v135.m128i_i32[2];
    v124 = v135.m128i_i64[0];
    v38 = v135.m128i_i32[3];
    switch ( v114.m128i_i64[0] )
    {
      case 0LL:
LABEL_54:
        v144.m128i_i64[0] = __PAIR64__(v38, v125);
        v143.m128i_i64[1] = v124;
        v143.m128i_i64[0] = 0x8000000000000000LL;
        v39 = _rust_alloc(48LL, 8LL);
        if ( !v39 )
          alloc::alloc::handle_alloc_error(8LL, 48LL);
        v40 = v39;
        v41 = _mm_loadu_si128(&v143);
        v42 = _mm_loadu_si128(&v144);
        *(__m128i *)(v39 + 32) = _mm_loadu_si128(&v145);
        *(__m128i *)(v39 + 16) = v42;
        *(__m128i *)v39 = v41;
        v105 = &off_28DA28;
        v43 = 3LL;
        if ( (v116.m128i_i64[0] ^ 0x8000000000000000LL) < 5 )
          v43 = v116.m128i_i64[0] ^ 0x8000000000000000LL;
        *((_QWORD *)&v111 + 1) = aADHYTZFTFZC;
        *(_QWORD *)&v111 = 18LL;
        switch ( v43 )
        {
          case 0uLL:
            goto LABEL_81;
          case 1uLL:
            goto LABEL_96;
          case 2uLL:
            goto LABEL_91;
          case 3uLL:
            goto LABEL_94;
          case 4uLL:
            goto LABEL_93;
        }
        goto LABEL_96;
      case 1LL:
LABEL_77:
        <alloc::string::String as core::clone::Clone>::clone(&v135, &v114.m128i_u64[1]);
        uu_date::parse_date((__int64)&v176, (__int64)&v135);
        v57 = _mm_loadu_si128(&v177);
        v58 = _mm_loadu_si128(v178);
        v146 = _mm_loadu_si128(&v176);
        v147 = v57;
        v148 = v58;
        v59 = _rust_alloc(48LL, 8LL);
        if ( !v59 )
          alloc::alloc::handle_alloc_error(8LL, 48LL);
        v40 = v59;
        v60 = _mm_load_si128(&v146);
        v61 = _mm_load_si128(&v147);
        *(__m128i *)(v59 + 32) = _mm_load_si128(&v148);
        *(__m128i *)(v59 + 16) = v61;
        *(__m128i *)v59 = v60;
        v105 = &off_28DA28;
        v62 = 3LL;
        if ( (v116.m128i_i64[0] ^ 0x8000000000000000LL) < 5 )
          v62 = v116.m128i_i64[0] ^ 0x8000000000000000LL;
        *((_QWORD *)&v111 + 1) = aADHYTZFTFZC;
        *(_QWORD *)&v111 = 18LL;
        switch ( v62 )
        {
          case 0uLL:
            goto LABEL_81;
          case 1uLL:
            goto LABEL_96;
          case 2uLL:
            goto LABEL_91;
          case 3uLL:
            goto LABEL_94;
          case 4uLL:
            goto LABEL_93;
        }
        goto LABEL_96;
      case 2LL:
LABEL_71:
        if ( (unsigned __int8)std::path::Path::is_dir(v115.m128i_i64[0], v115.m128i_i64[1]) )
        {
          v50 = _mm_load_si128(&v115);
          *(_QWORD *)v106 = 1LL;
          *(__m128i *)&v106[8] = v50;
          LOBYTE(v107) = 1;
          *(_QWORD *)v126 = v106;
          *(_QWORD *)&v126[8] = <os_display::Quoted as core::fmt::Display>::fmt;
          v135.m128i_i64[0] = (__int64)&off_28DA98;
          v135.m128i_i64[1] = 1LL;
          v137[0].m128i_i64[0] = 0LL;
          dest[0] = v126;
          dest[1] = &dword_0 + 1;
          alloc::fmt::format::format_inner(&v172, &v135);
          LODWORD(dest[1]) = 2;
          v135 = _mm_loadu_si128(&v172);
          dest[0] = v173;
          v51 = alloc::alloc::exchange_malloc(32LL);
          goto LABEL_87;
        }
        std::fs::File::open(&v135, &v114.m128i_u64[1]);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          v106,
          &v135,
          &v114.m128i_u64[1]);
        v4 = *(_QWORD *)v106;
        if ( *(_QWORD *)v106 )
        {
          v113 = *(__int64 (__fastcall ***)())&v106[8];
          break;
        }
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v135, 0x2000LL, *(unsigned int *)&v106[8]);
        v66 = _mm_loadu_si128(&v135);
        v67 = _mm_loadu_si128((const __m128i *)dest);
        v151 = _mm_loadu_si128(v137);
        v150 = v67;
        v149 = v66;
        v40 = alloc::alloc::exchange_malloc(48LL);
        v68 = _mm_load_si128(&v149);
        v69 = _mm_load_si128(&v150);
        *(__m128i *)(v40 + 32) = _mm_load_si128(&v151);
        *(__m128i *)(v40 + 16) = v69;
        *(__m128i *)v40 = v68;
        v105 = &off_28DA60;
        v70 = 3LL;
        if ( (v116.m128i_i64[0] ^ 0x8000000000000000LL) < 5 )
          v70 = v116.m128i_i64[0] ^ 0x8000000000000000LL;
        *((_QWORD *)&v111 + 1) = aADHYTZFTFZC;
        *(_QWORD *)&v111 = 18LL;
        switch ( v70 )
        {
          case 0uLL:
            goto LABEL_81;
          case 1uLL:
            goto LABEL_96;
          case 2uLL:
            goto LABEL_91;
          case 3uLL:
            goto LABEL_94;
          case 4uLL:
            goto LABEL_93;
        }
        goto LABEL_96;
      case 3LL:
LABEL_73:
        v52 = std::io::stdio::stdin();
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v135, 0x2000LL, v52);
        v53 = v135;
        v159 = *(__m128i *)dest;
        v160 = _mm_loadu_si128(v137);
        v54 = _rust_alloc(48LL, 8LL);
        if ( !v54 )
          alloc::alloc::handle_alloc_error(8LL, 48LL);
        v40 = v54;
        *(__m128i *)v54 = v53;
        v55 = _mm_load_si128(&v160);
        *(__m128i *)(v54 + 16) = _mm_load_si128(&v159);
        *(__m128i *)(v54 + 32) = v55;
        v105 = &off_28DAA8;
        v56 = 3LL;
        if ( (v116.m128i_i64[0] ^ 0x8000000000000000LL) < 5 )
          v56 = v116.m128i_i64[0] ^ 0x8000000000000000LL;
        *((_QWORD *)&v111 + 1) = aADHYTZFTFZC;
        *(_QWORD *)&v111 = 18LL;
        switch ( v56 )
        {
          case 0uLL:
            goto LABEL_81;
          case 1uLL:
            goto LABEL_96;
          case 2uLL:
            goto LABEL_91;
          case 3uLL:
            goto LABEL_94;
          case 4uLL:
            goto LABEL_93;
        }
        goto LABEL_96;
      case 4LL:
LABEL_66:
        v109.m128i_i64[0] = v114.m128i_i64[1];
        v109.m128i_i32[2] = v115.m128i_i32[0];
        v135.m128i_i64[1] = __PAIR64__(v38, v125);
        v135.m128i_i64[0] = v124;
        chrono::naive::datetime::NaiveDateTime::checked_add_signed(v106, &v135);
        if ( *(_DWORD *)v106 )
        {
          v112.m256i_i32[4] = *(_DWORD *)&v106[8];
          v112.m256i_i64[1] = *(_QWORD *)v106;
          *(_DWORD *)v106 = v38;
          chrono::offset::TimeZone::from_utc_datetime(v126, v106, &v112.m256i_u64[1]);
          if ( *(_DWORD *)v126 )
          {
            v168 = _mm_loadu_si128((const __m128i *)v126);
            v167 = 0x8000000000000000LL;
            v40 = alloc::alloc::exchange_malloc(48LL);
            v47 = _mm_loadu_si128((const __m128i *)&v167);
            v48 = _mm_loadu_si128((const __m128i *)&v168.m128i_u64[1]);
            *(__m128i *)(v40 + 32) = _mm_loadu_si128(&v169);
            *(__m128i *)(v40 + 16) = v48;
            *(__m128i *)v40 = v47;
            v105 = &off_28DA28;
            v49 = 3LL;
            if ( (v116.m128i_i64[0] ^ 0x8000000000000000LL) < 5 )
              v49 = v116.m128i_i64[0] ^ 0x8000000000000000LL;
            *((_QWORD *)&v111 + 1) = aADHYTZFTFZC;
            *(_QWORD *)&v111 = 18LL;
            switch ( v49 )
            {
              case 0uLL:
LABEL_81:
                v63 = v116.m128i_u8[8];
                *(_QWORD *)&v111 = qword_5E640[v116.m128i_u8[8]];
                v64 = (char *)&unk_5E668;
                goto LABEL_92;
              case 1uLL:
                break;
              case 2uLL:
LABEL_91:
                v63 = v116.m128i_u8[8];
                *(_QWORD *)&v111 = qword_5E680[v116.m128i_u8[8]];
                v64 = (char *)&unk_5E698;
LABEL_92:
                *((_QWORD *)&v111 + 1) = &v64[*(int *)&v64[4 * v63]];
                break;
              case 3uLL:
LABEL_94:
                *((_QWORD *)&v111 + 1) = v116.m128i_i64[1];
                v71 = v117.m128i_i64[0];
                goto LABEL_95;
              case 4uLL:
LABEL_93:
                *((_QWORD *)&v111 + 1) = &aADHYTZFTFZC[29];
                v71 = 2LL;
LABEL_95:
                *(_QWORD *)&v111 = v71;
                break;
            }
LABEL_96:
            v139 = v105[3];
            v113 = &off_28D9A0;
            for ( v112.m256i_i64[0] = v40; ; v40 = v112.m256i_i64[0] )
            {
              while ( 1 )
              {
                ((void (__fastcall *)(_BYTE *, __int64))v139)(v126, v40);
                if ( *(_QWORD *)v126 == 0x8000000000000000LL )
                  break;
                if ( *(_QWORD *)v126 == 0x8000000000000001LL )
                {
                  if ( *v105 )
                    ((void (__fastcall *)(__int64))*v105)(v112.m256i_i64[0]);
                  v101 = v105[1];
                  if ( v101 )
                    _rust_dealloc(v112.m256i_i64[0], v101, v105[2]);
                  core::ptr::drop_in_place<uu_date::Settings>(&v114);
                  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v133);
                  return (unsigned int)uucore::mods::error::get_exit_code();
                }
                v112.m256i_i64[1] = *(_QWORD *)v126;
                *(_OWORD *)&v112.m256i_u64[2] = *(_OWORD *)&v126[8];
                v110 = v128;
                v109 = v127;
                v72 = _mm_loadu_si128((const __m128i *)&v112.m256i_u64[2]);
                *(_QWORD *)v106 = 0LL;
                *(__m128i *)&v106[8] = v72;
                LOBYTE(v107) = 1;
                v121 = v106;
                v122.m128i_i64[0] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
                v135.m128i_i64[0] = (__int64)&off_28D958;
                v135.m128i_i64[1] = 1LL;
                v137[0].m128i_i64[0] = 0LL;
                dest[0] = &v121;
                dest[1] = &dword_0 + 1;
                alloc::fmt::format::format_inner(&v174, &v135);
                LODWORD(dest[1]) = 1;
                v135 = _mm_loadu_si128(&v174);
                dest[0] = v175;
                v73 = _rust_alloc(32LL, 8LL);
                if ( !v73 )
                  alloc::alloc::handle_alloc_error(8LL, 32LL);
                v74 = _mm_load_si128(&v135);
                *(__m128i *)(v73 + 16) = _mm_load_si128((const __m128i *)dest);
                *(__m128i *)v73 = v74;
                v123.m128i_i64[0] = v73;
                v123.m128i_i64[1] = (__int64)&off_28D9A0;
                uucore::mods::error::set_exit_code(*(unsigned int *)(v73 + 24));
                v121 = (_BYTE *)uucore::util_name();
                v122.m128i_i64[0] = v75;
                *(_QWORD *)v106 = &v121;
                *(_QWORD *)&v106[8] = <&T as core::fmt::Display>::fmt;
                *(_QWORD *)&v106[16] = &v123;
                v107 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v135.m128i_i64[0] = (__int64)&unk_28DAF0;
                v135.m128i_i64[1] = 3LL;
                v137[0].m128i_i64[0] = 0LL;
                dest[0] = v106;
                dest[1] = &dword_0 + 2;
                std::io::stdio::_eprint(&v135);
                v76 = v123;
                if ( *(_QWORD *)v123.m128i_i64[1] )
                  (*(void (__fastcall **)(__int64))v123.m128i_i64[1])(v123.m128i_i64[0]);
                v77 = *(_QWORD *)(v76.m128i_i64[1] + 8);
                if ( v77 )
                  _rust_dealloc(v76.m128i_i64[0], v77, *(_QWORD *)(v76.m128i_i64[1] + 16));
                if ( v109.m128i_i64[0] >= (__int64)0x8000000000000002LL )
                {
                  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v109);
                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v109);
                }
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v112.m256i_u64[1]);
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v112.m256i_u64[1]);
                v40 = v112.m256i_i64[0];
              }
              v123 = _mm_loadu_si128((const __m128i *)&v126[8]);
              alloc::str::<impl str>::replace(&v121, *((_QWORD *)&v111 + 1), v111, &unk_5E629, &unk_5E62B);
              v79 = v122.m128i_u64[1];
              v78 = v122.m128i_i64[0];
              if ( v122.m128i_i64[1] <= 3uLL )
              {
                if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                        &unk_5E62D,
                                        3LL,
                                        v122.m128i_i64[0],
                                        v122.m128i_i64[1]) )
                  goto LABEL_149;
              }
              else if ( v122.m128i_i64[1] > 0x11uLL )
              {
                v138 = v3;
                v135 = v122;
                dest[0] = aZ;
                dest[1] = &dword_0 + 2;
                if ( v122.m128i_i64[1] < 0x43uLL )
                {
                  v82 = 0;
                  v89 = 0LL;
                }
                else
                {
                  v81 = 0LL;
                  v82 = 0;
                  do
                  {
                    v83 = _mm_loadu_si128((const __m128i *)(v78 + v81 + 16));
                    v84 = _mm_loadu_si128((const __m128i *)(v78 + v81 + 18));
                    v85 = (unsigned int)_mm_movemask_epi8(
                                          _mm_and_si128(
                                            _mm_cmpeq_epi8(
                                              _mm_loadu_si128((const __m128i *)(v78 + v81 + 2)),
                                              (__m128i)xmmword_5A200),
                                            _mm_cmpeq_epi8(
                                              _mm_loadu_si128((const __m128i *)(v78 + v81)),
                                              (__m128i)xmmword_59FB0)));
                    v157 = *(__m128i *)(v78 + v81 + 32);
                    v156 = *(__m128i *)(v78 + v81 + 34);
                    v155 = *(__m128i *)(v78 + v81 + 48);
                    v154 = _mm_loadu_si128((const __m128i *)(v78 + v81 + 50));
                    if ( (_DWORD)v85 )
                    {
                      v152 = v84;
                      v153 = v83;
                      v82 = (core::str::pattern::simd_contains::{{closure}}(&v135, v81, v85, v82 & 1) | v82) & 1;
                      v83 = _mm_load_si128(&v153);
                      v84 = _mm_load_si128(&v152);
                    }
                    v86 = (unsigned int)_mm_movemask_epi8(
                                          _mm_and_si128(
                                            _mm_cmpeq_epi8(v84, (__m128i)xmmword_5A200),
                                            _mm_cmpeq_epi8(v83, (__m128i)xmmword_59FB0)));
                    if ( (_WORD)v86 )
                      v82 = (core::str::pattern::simd_contains::{{closure}}(&v135, v81 + 16, v86, v82 & 1) | v82) & 1;
                    v87 = (unsigned int)_mm_movemask_epi8(
                                          _mm_and_si128(
                                            _mm_cmpeq_epi8(_mm_load_si128(&v156), (__m128i)xmmword_5A200),
                                            _mm_cmpeq_epi8(_mm_load_si128(&v157), (__m128i)xmmword_59FB0)));
                    if ( (_WORD)v87 )
                      v82 = (core::str::pattern::simd_contains::{{closure}}(&v135, v81 + 32, v87, v82 & 1) | v82) & 1;
                    v88 = (unsigned int)_mm_movemask_epi8(
                                          _mm_and_si128(
                                            _mm_cmpeq_epi8(_mm_load_si128(&v154), (__m128i)xmmword_5A200),
                                            _mm_cmpeq_epi8(_mm_load_si128(&v155), (__m128i)xmmword_59FB0)));
                    if ( (_WORD)v88 )
                      v82 = (core::str::pattern::simd_contains::{{closure}}(&v135, v81 + 48, v88, v82 & 1) | v82) & 1;
                    v89 = v81 + 64;
                    if ( v81 + 130 >= v79 )
                      break;
                    v81 += 64LL;
                  }
                  while ( (v82 & 1) == 0 );
                }
                v90 = v82 & 1;
                if ( v89 + 18 < v79 && !v90 )
                {
                  do
                  {
                    v91 = (unsigned int)_mm_movemask_epi8(
                                          _mm_and_si128(
                                            _mm_cmpeq_epi8(
                                              _mm_loadu_si128((const __m128i *)(v78 + v89 + 2)),
                                              (__m128i)xmmword_5A200),
                                            _mm_cmpeq_epi8(
                                              _mm_loadu_si128((const __m128i *)(v78 + v89)),
                                              (__m128i)xmmword_59FB0)));
                    if ( (_DWORD)v91 )
                      v82 = core::str::pattern::simd_contains::{{closure}}(&v135, v89, v91, 0LL);
                    v90 = v82 & 1;
                    if ( v89 + 34 >= v79 )
                      break;
                    v89 += 16LL;
                  }
                  while ( !v90 );
                }
                v92 = (unsigned int)_mm_movemask_epi8(
                                      _mm_and_si128(
                                        _mm_cmpeq_epi8(
                                          _mm_loadu_si128((const __m128i *)(v78 + v79 - 16)),
                                          (__m128i)xmmword_5A200),
                                        _mm_cmpeq_epi8(
                                          _mm_loadu_si128((const __m128i *)(v78 + v79 - 18)),
                                          (__m128i)xmmword_59FB0)));
                v3 = v138;
                if ( (_DWORD)v92 )
                  v82 = core::str::pattern::simd_contains::{{closure}}(&v135, v79 - 18, v92, v90) | (v90 != 0);
                if ( (v82 & 1) != 0 )
                {
LABEL_149:
                  alloc::str::<impl str>::replace(v106, v122.m128i_i64[0], v122.m128i_i64[1], &unk_5E62B, &unk_5E629);
                  v112.m256i_i64[1] = (__int64)v106;
                  v112.m256i_i64[2] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
                  v135.m128i_i64[0] = (__int64)&off_28DAE0;
                  v135.m128i_i64[1] = 1LL;
                  v137[0].m128i_i64[0] = 0LL;
                  dest[0] = &v112.m256i_u64[1];
                  dest[1] = &dword_0 + 1;
                  alloc::fmt::format::format_inner(&v109, &v135);
                  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v106);
                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v106);
                  dest[0] = v110;
                  v135 = _mm_loadu_si128(&v109);
                  LODWORD(dest[1]) = 1;
                  v98 = _rust_alloc(32LL, 8LL);
                  if ( !v98 )
                    alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_152:
                  v4 = v98;
                  v99 = _mm_load_si128(&v135);
                  *(__m128i *)(v98 + 16) = _mm_load_si128((const __m128i *)dest);
                  *(__m128i *)v98 = v99;
                  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
                  if ( *v105 )
                    ((void (__fastcall *)(__int64))*v105)(v112.m256i_i64[0]);
                  v100 = v105[1];
                  if ( v100 )
                    _rust_dealloc(v112.m256i_i64[0], v100, v105[2]);
                  goto LABEL_41;
                }
              }
              else
              {
                while ( v79 >= 3 )
                {
                  v80 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v78++, 3LL, &unk_5E62D, 3LL);
                  --v79;
                  if ( v80 )
                    goto LABEL_149;
                }
              }
              v93 = v122;
              v135 = v122;
              dest[0] = &byte_8;
              dest[1] = 0LL;
              <chrono::format::strftime::StrftimeItems as core::iter::traits::iterator::Iterator>::next(v106, &v135);
              while ( v106[0] != 7 )
              {
                if ( v106[0] == 1 || v106[0] == 3 )
                {
                  if ( *(_QWORD *)&v106[16] )
                    _rust_dealloc(*(_QWORD *)&v106[8], *(_QWORD *)&v106[16], 1LL);
                }
                else if ( v106[0] == 6 )
                {
                  alloc::str::<impl str>::replace(v106, v122.m128i_i64[0], v122.m128i_i64[1], &unk_5E62B, &unk_5E629);
                  v112.m256i_i64[1] = (__int64)v106;
                  v112.m256i_i64[2] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
                  v135.m128i_i64[0] = (__int64)&off_28DAE0;
                  v135.m128i_i64[1] = 1LL;
                  v137[0].m128i_i64[0] = 0LL;
                  dest[0] = &v112.m256i_u64[1];
                  dest[1] = &dword_0 + 1;
                  alloc::fmt::format::format_inner(&v109, &v135);
                  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v106);
                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v106);
                  dest[0] = v110;
                  v135 = v109;
                  LODWORD(dest[1]) = 1;
                  v98 = _rust_alloc(32LL, 8LL);
                  if ( !v98 )
                    alloc::alloc::handle_alloc_error(8LL, 32LL);
                  goto LABEL_152;
                }
                <chrono::format::strftime::StrftimeItems as core::iter::traits::iterator::Iterator>::next(v106, &v135);
              }
              chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(
                &v112.m256i_u64[1],
                &v123,
                v123.m128i_u32[3]);
              *(__int64 *)((char *)v109.m128i_i64 + 4) = *(__int64 *)((char *)&v112.m256i_i64[1] + 4);
              v109.m128i_i32[0] = 1;
              *(__m128i *)v106 = v93;
              *(_QWORD *)&v106[16] = 8LL;
              v107 = 0LL;
              chrono::format::formatting::DelayedFormat<I>::new_with_offset(
                &v135,
                v112.m256i_u32[2],
                &v109,
                (char *)&v123.m128i_u64[1] + 4,
                v106);
              LOBYTE(v108) = 3;
              if ( (unsigned __int8)<chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt(
                                      (unsigned int)&v135,
                                      (unsigned int)v106,
                                      v94,
                                      v95,
                                      v96,
                                      v97,
                                      v104,
                                      (_DWORD)v105,
                                      0,
                                      *(_DWORD *)&v106[8],
                                      0,
                                      (char)v107,
                                      (unsigned int)&v109,
                                      (unsigned int)&off_28D808,
                                      32,
                                      v108,
                                      0,
                                      1,
                                      0,
                                      v111,
                                      *(__int128 *)v112.m256i_i8,
                                      v112.m256i_i32[4],
                                      v112.m256i_i32[6],
                                      (__int64)v113,
                                      v114.m128i_i32[0],
                                      v114.m128i_i32[2],
                                      v115.m128i_i32[0],
                                      v115.m128i_i32[2],
                                      v116.m128i_i64[0],
                                      v116.m128i_i8[8],
                                      v117.m128i_i32[0],
                                      v117.m128i_i32[2],
                                      v118,
                                      v119,
                                      v120,
                                      (_DWORD)v121,
                                      v122.m128i_i32[0],
                                      v122.m128i_i32[2],
                                      v123.m128i_i32[0],
                                      v123.m128i_i32[2],
                                      v124,
                                      v125,
                                      *(_DWORD *)v126,
                                      *(_DWORD *)&v126[8],
                                      *(_DWORD *)&v126[16],
                                      v127.m128i_i32[0],
                                      v127.m128i_i32[2],
                                      (_DWORD)v128,
                                      v129.m128i_i32[0],
                                      v129.m128i_i8[8]) )
                core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v112.m256i_u64[1], &unk_28D898, &off_28D838);
              *(__m128i *)&v112.m256i_u64[1] = _mm_loadu_si128(&v109);
              v112.m256i_i64[3] = (__int64)v110;
              alloc::str::<impl str>::replace(v106, v112.m256i_i64[2], v110, &unk_5E62B, &unk_5E629);
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v112.m256i_u64[1]);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v112.m256i_u64[1]);
              if ( v135.m128i_i64[0] != v3 )
              {
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v135);
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v135);
              }
              v109.m128i_i64[0] = (__int64)v106;
              v109.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
              v135.m128i_i64[0] = (__int64)&unk_28D918;
              v135.m128i_i64[1] = 2LL;
              v137[0].m128i_i64[0] = 0LL;
              dest[0] = &v109;
              dest[1] = &dword_0 + 1;
              std::io::stdio::_print(&v135);
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v106);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v106);
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
            }
          }
        }
        else
        {
          *(_DWORD *)v126 = 0;
        }
        *(_QWORD *)v106 = &v109;
        *(_QWORD *)&v106[8] = <chrono::time_delta::TimeDelta as core::fmt::Display>::fmt;
        v135.m128i_i64[0] = (__int64)&off_28D958;
        v135.m128i_i64[1] = 1LL;
        v137[0].m128i_i64[0] = 0LL;
        dest[0] = v106;
        dest[1] = &dword_0 + 1;
        alloc::fmt::format::format_inner(&v170, &v135);
        LODWORD(dest[1]) = 1;
        v135 = _mm_loadu_si128(&v170);
        dest[0] = v171;
        v51 = alloc::alloc::exchange_malloc(32LL);
LABEL_87:
        v4 = v51;
        v65 = _mm_load_si128(&v135);
        *(__m128i *)(v51 + 16) = _mm_load_si128((const __m128i *)dest);
        *(__m128i *)v51 = v65;
        v113 = &off_28D9A0;
        break;
    }
  }
LABEL_41:
  core::ptr::drop_in_place<uu_date::Settings>(&v114);
LABEL_42:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v133);
  if ( !v4 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_43:
  *(_QWORD *)v126 = v4;
  *(_QWORD *)&v126[8] = v113;
  v114.m128i_i64[0] = (__int64)v126;
  v114.m128i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v135.m128i_i64[0] = (__int64)&anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
  v135.m128i_i64[1] = 1LL;
  v137[0].m128i_i64[0] = 0LL;
  dest[0] = &v114;
  dest[1] = &dword_0 + 1;
  alloc::fmt::format::format_inner(&v161, &v135);
  v114 = _mm_loadu_si128(&v161);
  v115.m128i_i64[0] = v162;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v114.m128i_i64[1], v162, 1LL, 0LL) )
  {
    *(_QWORD *)&v33 = uucore::util_name();
    *(_OWORD *)v106 = v33;
    *(_QWORD *)&v133[0] = v106;
    *((_QWORD *)&v133[0] + 1) = <&T as core::fmt::Display>::fmt;
    v135.m128i_i64[0] = (__int64)&unk_28D8F8;
    v135.m128i_i64[1] = 2LL;
    v137[0].m128i_i64[0] = 0LL;
    dest[0] = v133;
    dest[1] = &dword_0 + 1;
    std::io::stdio::_eprint(&v135);
    *(_QWORD *)v106 = &v114;
    *(_QWORD *)&v106[8] = <alloc::string::String as core::fmt::Display>::fmt;
    v135.m128i_i64[0] = (__int64)&unk_28D918;
    v135.m128i_i64[1] = 2LL;
    v137[0].m128i_i64[0] = 0LL;
    dest[0] = v106;
    dest[1] = &dword_0 + 1;
    std::io::stdio::_eprint(&v135);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)&v126[8] + 104LL))(*(_QWORD *)v126) )
  {
    *(_QWORD *)&v34 = uucore::execution_phrase();
    *(_OWORD *)v106 = v34;
    *(_QWORD *)&v133[0] = v106;
    *((_QWORD *)&v133[0] + 1) = <&T as core::fmt::Display>::fmt;
    v135.m128i_i64[0] = (__int64)&off_28D938;
    v135.m128i_i64[1] = 2LL;
    v137[0].m128i_i64[0] = 0LL;
    dest[0] = v133;
    dest[1] = &dword_0 + 1;
    std::io::stdio::_eprint(&v135);
  }
  v35 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)&v126[8] + 96LL))(*(_QWORD *)v126);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v114);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v114);
  v36 = *(_OWORD *)v126;
  if ( **(_QWORD **)&v126[8] )
    (**(void (__fastcall ***)(_QWORD))&v126[8])(*(_QWORD *)v126);
  v37 = *(_QWORD *)(*((_QWORD *)&v36 + 1) + 8LL);
  if ( v37 )
    _rust_dealloc(v36, v37, *(_QWORD *)(*((_QWORD *)&v36 + 1) + 16LL));
  return v35;
}
