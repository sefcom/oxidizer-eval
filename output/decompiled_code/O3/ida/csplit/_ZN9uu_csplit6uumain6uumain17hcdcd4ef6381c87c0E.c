__int64 __fastcall uu_csplit::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned __int64 j; // r15
  char v7; // dl
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  int v12; // ecx
  __m256i *v13; // rsi
  __int128 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int128 v17; // kr10_16
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r13
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // r12d
  __int64 v36; // r14
  char v37; // bl
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  void *v41; // rdx
  __int64 v42; // r14
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  unsigned __int64 v46; // r12
  char *v47; // r13
  __int64 v48; // rax
  size_t v49; // rbx
  __int64 v50; // r14
  __int64 v51; // r13
  void *v52; // r14
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  char v56; // cl
  __int64 v57; // rax
  char v58; // bl
  __int64 v59; // rbx
  unsigned __int64 i; // r15
  __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // r12
  __int64 v64; // rax
  int v65; // ecx
  __m256i *v66; // rsi
  __int128 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rbx
  __int128 v70; // kr30_16
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r12
  __int64 v75; // rax
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // r12
  __int64 v80; // r13
  _QWORD *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  int v84; // r12d
  __int64 v85; // r14
  char v86; // bl
  __int64 v87; // rdx
  _QWORD *v88; // rax
  __int64 v89; // rcx
  void *v90; // rdx
  __int64 v91; // r14
  __int64 v92; // rdx
  unsigned __int64 v93; // r12
  char *v94; // r13
  __int64 v95; // rax
  size_t v96; // rbx
  __int64 v97; // r14
  __int64 v98; // r13
  void *v99; // r14
  __int64 v100; // rax
  char v101; // cl
  __int64 v102; // rax
  char v103; // bl
  __int64 v104; // rax
  __int128 v105; // xmm0
  __m256i *v106; // rsi
  __int64 v107; // rdx
  __int64 v108; // rax
  __int128 v109; // xmm0
  __int128 *v111; // rsi
  __int64 v112; // rdx
  char **v113; // rdi
  char **v114; // rsi
  __m256i *v115; // rdi
  char **v116; // rsi
  __m256i *v117; // rdi
  char v118; // [rsp+Ch] [rbp-75Ch]
  char v119; // [rsp+Ch] [rbp-75Ch]
  _BYTE v120[40]; // [rsp+10h] [rbp-758h] BYREF
  __int128 v121; // [rsp+48h] [rbp-720h] BYREF
  void *v122; // [rsp+58h] [rbp-710h]
  __int64 v123; // [rsp+60h] [rbp-708h]
  __int64 v124; // [rsp+68h] [rbp-700h]
  __m256i v125; // [rsp+70h] [rbp-6F8h] BYREF
  __int64 v126; // [rsp+90h] [rbp-6D8h]
  __int128 v127; // [rsp+A0h] [rbp-6C8h] BYREF
  void *v128; // [rsp+B0h] [rbp-6B8h]
  __int64 v129; // [rsp+B8h] [rbp-6B0h]
  __int128 v130; // [rsp+C0h] [rbp-6A8h] BYREF
  size_t n; // [rsp+D0h] [rbp-698h]
  __m256i v132; // [rsp+E0h] [rbp-688h] BYREF
  __int64 v133; // [rsp+100h] [rbp-668h]
  __m256i v134; // [rsp+108h] [rbp-660h] BYREF
  __m256i v135; // [rsp+128h] [rbp-640h] BYREF
  __int64 v136; // [rsp+148h] [rbp-620h]
  void *src; // [rsp+150h] [rbp-618h]
  void *v138; // [rsp+158h] [rbp-610h]
  __m256i v139; // [rsp+160h] [rbp-608h] BYREF
  void *v140; // [rsp+188h] [rbp-5E0h]
  void *v141; // [rsp+190h] [rbp-5D8h]
  int fd; // [rsp+19Ch] [rbp-5CCh] BYREF
  __m256i v143; // [rsp+1A0h] [rbp-5C8h] BYREF
  __int128 v144; // [rsp+1C0h] [rbp-5A8h]
  __int64 v145; // [rsp+1D0h] [rbp-598h]
  void *v146; // [rsp+1D8h] [rbp-590h]
  int v147; // [rsp+1E0h] [rbp-588h]
  int v148; // [rsp+1E4h] [rbp-584h]
  __int128 v149; // [rsp+1E8h] [rbp-580h] BYREF
  _BYTE v150[64]; // [rsp+1F8h] [rbp-570h] BYREF
  __int128 v151; // [rsp+238h] [rbp-530h]
  unsigned __int64 v152; // [rsp+298h] [rbp-4D0h]
  __int128 v153; // [rsp+2A0h] [rbp-4C8h] BYREF
  __int128 v154; // [rsp+2B0h] [rbp-4B8h]
  __int128 v155; // [rsp+2C0h] [rbp-4A8h] BYREF
  size_t v156; // [rsp+2D0h] [rbp-498h]
  int v157; // [rsp+2D8h] [rbp-490h] BYREF
  _BYTE v158[52]; // [rsp+2DCh] [rbp-48Ch]
  __m256i v159; // [rsp+310h] [rbp-458h] BYREF
  __int128 v160; // [rsp+330h] [rbp-438h]
  int v161; // [rsp+340h] [rbp-428h]
  __m256i *v162; // [rsp+350h] [rbp-418h]
  __int64 v163; // [rsp+358h] [rbp-410h]
  __int64 v164; // [rsp+360h] [rbp-408h]
  _BYTE v165[8]; // [rsp+368h] [rbp-400h] BYREF
  __int64 v166; // [rsp+370h] [rbp-3F8h]
  unsigned __int64 v167; // [rsp+378h] [rbp-3F0h]
  __m256i v168; // [rsp+380h] [rbp-3E8h] BYREF
  __m256i v169; // [rsp+3A0h] [rbp-3C8h] BYREF
  __int128 v170; // [rsp+3C0h] [rbp-3A8h]
  __int128 v171; // [rsp+3D0h] [rbp-398h]
  _OWORD v172[3]; // [rsp+650h] [rbp-118h] BYREF
  __int64 v173; // [rsp+680h] [rbp-E8h]
  _BYTE v174[24]; // [rsp+688h] [rbp-E0h] BYREF
  _BYTE v175[72]; // [rsp+6A0h] [rbp-C8h] BYREF
  char v176; // [rsp+6E8h] [rbp-80h]
  _OWORD v177[7]; // [rsp+6F0h] [rbp-78h] BYREF

  uu_csplit::uu_app(&v168);
  clap_builder::builder::command::Command::try_get_matches_from(&v149, &v168, a1, a2);
  if ( (_QWORD)v149 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v149 + 1));
  v173 = *(_QWORD *)&v150[32];
  v172[2] = *(_OWORD *)&v150[16];
  v172[1] = *(_OWORD *)v150;
  v172[0] = v149;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v168, v172, "filemode{", 4LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap("filemode{", 4LL, &v168);
  if ( !v4 )
  {
    v113 = &off_272A78;
    goto LABEL_444;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v168, v172, aPattern, 7LL);
  clap_builder::parser::error::MatchesError::unwrap(&v149, aPattern, 7LL, &v168);
  if ( !(_QWORD)v149 )
  {
    v113 = &off_272A90;
LABEL_444:
    core::option::unwrap_failed(v113);
  }
  v177[3] = *(_OWORD *)&v150[32];
  v177[2] = *(_OWORD *)&v150[16];
  v177[1] = *(_OWORD *)v150;
  v177[0] = v149;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v165, v177);
  uu_csplit::CsplitOptions::new(v174, v172);
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           *(_QWORD *)(v4 + 8),
                           *(_QWORD *)(v4 + 16),
                           asc_5D637,
                           1LL) )
  {
    std::fs::File::open(&v168, v4);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v149,
      &v168,
      v4);
    v3 = v149;
    if ( (_QWORD)v149 )
      goto LABEL_348;
    fd = DWORD2(v149);
    std::fs::File::metadata(&v168, &fd);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v149);
    if ( (_DWORD)v149 == 2 )
    {
      v3 = *((_QWORD *)&v149 + 1);
LABEL_303:
      close(fd);
      goto LABEL_348;
    }
    if ( (*(_WORD *)&v150[40] & 0xF000) != 0x8000 )
    {
      <alloc::string::String as core::clone::Clone>::clone(&v149, v4);
      v168.m256i_i64[3] = *(_QWORD *)v150;
      *(_OWORD *)&v168.m256i_u64[1] = v149;
      v168.m256i_i64[0] = 11LL;
      v104 = _rust_alloc(40LL, 8LL);
      if ( !v104 )
        alloc::alloc::handle_alloc_error(8LL, 40LL);
      v3 = v104;
      *(_QWORD *)(v104 + 32) = v169.m256i_i64[0];
      v105 = *(_OWORD *)v168.m256i_i8;
      *(_OWORD *)(v104 + 16) = *(_OWORD *)&v168.m256i_u64[2];
      *(_OWORD *)v104 = v105;
      goto LABEL_303;
    }
    v59 = v166;
    i = v167;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v143, 0x2000LL, (unsigned int)fd);
    *(_OWORD *)&v150[40] = v144;
    *(__m256i *)&v150[8] = v143;
    *(_QWORD *)&v150[56] = 0LL;
    *(_QWORD *)&v149 = 0LL;
    *((_QWORD *)&v149 + 1) = 8LL;
    *(_QWORD *)v150 = 0LL;
    *(_QWORD *)&v151 = 1LL;
    BYTE8(v151) = 0;
    v135.m256i_i64[0] = (__int64)v174;
    memset(&v135.m256i_u64[1], 0, 17);
    v134.m256i_i64[0] = 0x8000000000000000LL;
    uu_csplit::patterns::get_patterns(&v168, v59, i);
    v61 = v168.m256i_i64[1];
    v62 = v168.m256i_i64[0];
    v63 = v168.m256i_i64[3];
    v145 = v168.m256i_i64[2];
    if ( v168.m256i_i64[0] != 12 )
    {
      i = v169.m256i_i64[0];
      v119 = 1;
      goto LABEL_416;
    }
    *(_QWORD *)&v127 = v168.m256i_i64[2];
    *((_QWORD *)&v127 + 1) = v168.m256i_i64[2];
    v128 = (void *)v168.m256i_i64[1];
    v129 = v168.m256i_i64[2] + 56 * v168.m256i_i64[3];
    v164 = v168.m256i_i64[3];
    if ( !v168.m256i_i64[3] )
      goto LABEL_350;
    v162 = &v168;
    v64 = v145;
LABEL_157:
    *((_QWORD *)&v127 + 1) = v64 + 56;
    v65 = *(_DWORD *)v64;
    v161 = *(_DWORD *)(v64 + 52);
    v160 = *(_OWORD *)(v64 + 36);
    v159 = *(__m256i *)(v64 + 4);
    if ( v65 == 3 )
    {
LABEL_350:
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v127);
      v132.m256i_i64[0] = 12LL;
      goto LABEL_387;
    }
    v157 = v65;
    *(_DWORD *)&v158[48] = v161;
    *(_OWORD *)&v158[32] = v160;
    *(__m256i *)v158 = v159;
    *(_QWORD *)v120 = 0LL;
    *(_QWORD *)&v120[8] = 1LL;
    *(_QWORD *)&v120[16] = 0LL;
    v169.m256i_i64[2] = 32LL;
    v169.m256i_i8[24] = 3;
    v168.m256i_i64[0] = 0LL;
    v168.m256i_i64[2] = 0LL;
    v169.m256i_i64[0] = (__int64)v120;
    v169.m256i_i64[1] = (__int64)&off_2727D8;
    v66 = &v168;
    i = 0x8000000000000000LL;
    if ( (unsigned __int8)<uu_csplit::patterns::Pattern as core::fmt::Display>::fmt(&v157, &v168) )
      core::result::unwrap_failed(aADisplayImplem_3, 55LL, &v139, &unk_272820, &off_272808);
    v155 = *(_OWORD *)v120;
    v156 = *(_QWORD *)&v120[16];
    v148 = v157;
    if ( v157 == 2 || v157 == 1 )
    {
      v154 = *(_OWORD *)&v158[20];
      v153 = *(_OWORD *)&v158[4];
      v141 = *(void **)&v158[36];
      v138 = *(void **)&v158[44];
      v152 = -*(_DWORD *)v158;
      v163 = v152 + 1;
      v136 = *(unsigned int *)v158;
      v147 = *(_DWORD *)v158 + 1;
      v123 = 0LL;
      if ( !*(_QWORD *)&v158[36] )
        goto LABEL_165;
      while ( 1 )
      {
        v140 = &dword_0 + 1;
        if ( (void *)v123 == v138 )
        {
          core::ptr::drop_in_place<regex::regex::string::Regex>(&v153);
          goto LABEL_261;
        }
        if ( v148 != 2 )
          goto LABEL_166;
LABEL_164:
        v135.m256i_i8[24] = 1;
LABEL_167:
        src = (void *)*((_QWORD *)&v155 + 1);
        v69 = v156;
        v70 = v153;
        if ( (int)v136 < 0 )
          break;
        alloc::vec::Vec<T,A>::drain(&v125, &v149);
        *(__m256i *)v120 = v125;
        *(_QWORD *)&v120[32] = v126;
        v71 = (_QWORD *)v125.m256i_i64[0];
        i = 0x8000000000000000LL;
        if ( v125.m256i_i64[0] != v125.m256i_i64[1] )
        {
          while ( 1 )
          {
            *(_QWORD *)v120 = v71 + 4;
            v72 = v71[1];
            if ( v72 == 0x8000000000000001LL )
              goto LABEL_173;
            v66 = (__m256i *)v71[2];
            if ( v72 == 0x8000000000000000LL )
            {
              v139.m256i_i64[0] = v71[2];
              core::result::unwrap_failed(aCalledResultUn, 43LL, &v139, &off_272860, &off_2729B8);
            }
            v73 = v71[3];
            v139.m256i_i64[0] = v71[1];
            v139.m256i_i64[1] = (__int64)v66;
            v139.m256i_i64[2] = v73;
            v74 = uu_csplit::SplitWriter::writeln(&v134, v66, v73);
            if ( v74 )
              break;
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v139);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v139);
            v71 = *(_QWORD **)v120;
            if ( *(_QWORD *)v120 == *(_QWORD *)&v120[8] )
              goto LABEL_173;
          }
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v139);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v139);
          <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
LABEL_237:
          v80 = 0LL;
          v2 = v74;
          goto LABEL_253;
        }
LABEL_173:
        <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
        *(_QWORD *)&v151 = 1LL;
        for ( i = 0x8000000000000000LL; ; i = 0x8000000000000000LL )
        {
          if ( BYTE8(v151) )
          {
            if ( *(_QWORD *)v150 )
            {
              v66 = (__m256i *)&v149;
              alloc::vec::Vec<T,A>::remove(&v139, &v149, 0LL, &off_272920);
              goto LABEL_180;
            }
            BYTE8(v151) = 0;
          }
          v66 = (__m256i *)&v150[8];
          <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(v120, &v150[8]);
          if ( *(_QWORD *)v120 == 0x8000000000000001LL )
            goto LABEL_205;
          v139.m256i_i64[3] = *(_QWORD *)&v120[16];
          *(_OWORD *)&v139.m256i_u64[1] = *(_OWORD *)v120;
          v75 = (*(_QWORD *)&v150[56])++;
          v139.m256i_i64[0] = v75;
LABEL_180:
          *(_QWORD *)&v67 = v139.m256i_i64[1];
          i = 0x8000000000000001LL;
          if ( v139.m256i_i64[1] == 0x8000000000000001LL )
            goto LABEL_205;
          *((_QWORD *)&v67 + 1) = v139.m256i_i64[2];
          if ( v139.m256i_i64[1] == 0x8000000000000000LL )
            goto LABEL_198;
          v76 = v139.m256i_i64[0];
          v130 = v67;
          n = v139.m256i_u64[3];
          v66 = (__m256i *)*((_QWORD *)&v70 + 1);
          if ( (unsigned __int8)regex::regex::string::Regex::is_match_at(v70, *((_QWORD *)&v70 + 1)) )
            break;
          v66 = (__m256i *)*((_QWORD *)&v130 + 1);
          v77 = uu_csplit::SplitWriter::writeln(&v134, *((_QWORD *)&v130 + 1), n);
          if ( v77 )
            goto LABEL_240;
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v130);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v130);
        }
        if ( *(_BYTE *)(v135.m256i_i64[0] + 99) )
          goto LABEL_209;
        if ( (_DWORD)v136 )
        {
          v66 = (__m256i *)*((_QWORD *)&v130 + 1);
          v77 = uu_csplit::SplitWriter::writeln(&v134, *((_QWORD *)&v130 + 1), n);
          if ( v77 )
          {
LABEL_240:
            v80 = 0LL;
            v2 = v77;
            goto LABEL_252;
          }
LABEL_209:
          v84 = v147;
          if ( (int)v136 >= 2 )
          {
            while ( 2 )
            {
              if ( BYTE8(v151) )
              {
                if ( *(_QWORD *)v150 )
                {
                  v66 = (__m256i *)&v149;
                  alloc::vec::Vec<T,A>::remove(v120, &v149, 0LL, &off_272920);
LABEL_216:
                  if ( *(_QWORD *)&v120[8] == 0x8000000000000001LL )
                  {
LABEL_248:
                    uu_csplit::SplitWriter::finish_split(&v134);
                    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v121, v69, 0LL);
                    v2 = *((_QWORD *)&v121 + 1);
                    if ( (_QWORD)v121 )
                      alloc::raw_vec::handle_error(*((_QWORD *)&v121 + 1), v122);
                    v146 = v122;
                    v66 = (__m256i *)src;
                    memcpy(v122, src, v69);
                    v80 = 1LL;
                    v124 = v69;
                    goto LABEL_252;
                  }
                  v85 = *(_QWORD *)&v120[16];
                  if ( *(_QWORD *)&v120[8] == 0x8000000000000000LL )
                    goto LABEL_251;
                  v121 = *(_OWORD *)&v120[8];
                  v122 = *(void **)&v120[24];
                  v66 = *(__m256i **)&v120[16];
                  v85 = uu_csplit::SplitWriter::writeln(&v134, *(_QWORD *)&v120[16], *(_QWORD *)&v120[24]);
                  if ( v85 )
                  {
                    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
                    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
LABEL_251:
                    v80 = 0LL;
                    v2 = v85;
                    goto LABEL_252;
                  }
                  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
                  if ( (unsigned int)--v84 <= 2 )
                    goto LABEL_220;
                  continue;
                }
                BYTE8(v151) = 0;
              }
              break;
            }
            v66 = (__m256i *)&v150[8];
            <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v121, &v150[8]);
            if ( (_QWORD)v121 == 0x8000000000000001LL )
              goto LABEL_248;
            *(_QWORD *)&v120[24] = v122;
            *(_OWORD *)&v120[8] = v121;
            ++*(_QWORD *)&v150[56];
            goto LABEL_216;
          }
LABEL_220:
          v86 = 0;
        }
        else
        {
          *(_QWORD *)&v120[16] = n;
          *(_OWORD *)v120 = v130;
          v66 = (__m256i *)&v149;
          uu_csplit::InputSplitter<I>::add_line_to_buffer(&v121, (__int64)&v149, v76, (__int64)v120);
          if ( (_QWORD)v121 != 0x8000000000000000LL )
          {
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v121);
            *(_QWORD *)v120 = &off_272938;
            *(_QWORD *)&v120[8] = 1LL;
            *(_QWORD *)&v120[16] = 8LL;
            *(_OWORD *)&v120[24] = 0LL;
            core::panicking::panic_fmt(v120, &off_2729A0);
          }
          v86 = 1;
        }
        uu_csplit::SplitWriter::finish_split(&v134);
        v80 = 12LL;
        if ( !v86 )
          goto LABEL_252;
LABEL_253:
        v69 = v124;
LABEL_254:
        v168.m256i_i64[0] = v80;
        v168.m256i_i64[1] = v2;
        v168.m256i_i64[2] = (__int64)v146;
        v168.m256i_i64[3] = v69;
        v169.m256i_i64[1] = (__int64)v140;
        v169.m256i_i64[2] = (__int64)v138;
        if ( v80 != 12 )
        {
          if ( v141 )
          {
            if ( v123 && (_DWORD)v80 == 3 && v138 != (char *)&dword_0 + 1 )
            {
              <alloc::string::String as core::clone::Clone>::clone(v120, &v155);
              v133 = *(_QWORD *)&v120[16];
              *(_OWORD *)&v132.m256i_u64[2] = *(_OWORD *)v120;
              v132.m256i_i64[0] = 4LL;
              v132.m256i_i64[1] = v123;
              if ( v168.m256i_i32[0] == 12 )
                goto LABEL_375;
LABEL_373:
              core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v168);
              goto LABEL_375;
            }
          }
          else if ( (_DWORD)v80 == 3 )
          {
            v132.m256i_i64[0] = 12LL;
            goto LABEL_373;
          }
          v133 = v169.m256i_i64[0];
          v132 = v168;
          goto LABEL_375;
        }
        ++v123;
        v124 = v69;
        if ( !v141 )
        {
LABEL_165:
          v140 = 0LL;
          if ( v148 == 2 )
            goto LABEL_164;
LABEL_166:
          v68 = uu_csplit::SplitWriter::new_writer(&v134, v66, *((_QWORD *)&v67 + 1));
          if ( !v68 )
            goto LABEL_167;
          v132.m256i_i64[0] = 0LL;
          v132.m256i_i64[1] = v68;
LABEL_375:
          core::ptr::drop_in_place<regex::regex::string::Regex>(&v153);
LABEL_386:
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v155);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v155);
          <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v127);
          v62 = v132.m256i_i64[0];
          LOBYTE(i) = 1;
          if ( v132.m256i_i64[0] == 12 )
          {
LABEL_387:
            BYTE8(v151) = 1;
            if ( *(_QWORD *)v150 )
            {
              v111 = &v149;
              alloc::vec::Vec<T,A>::remove(&v159, &v149, 0LL, &off_272920);
            }
            else
            {
              BYTE8(v151) = 0;
              v111 = (__int128 *)&v150[8];
              <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v168, &v150[8]);
              if ( v168.m256i_i64[0] == 0x8000000000000001LL )
              {
                v159.m256i_i64[1] = 0x8000000000000001LL;
              }
              else
              {
                v159.m256i_i64[3] = v168.m256i_i64[2];
                *(_OWORD *)&v159.m256i_u64[1] = *(_OWORD *)v168.m256i_i8;
                ++*(_QWORD *)&v150[56];
              }
            }
            LOBYTE(i) = 1;
            if ( v159.m256i_i64[1] == 0x8000000000000001LL )
            {
LABEL_393:
              v62 = v132.m256i_i64[0];
              goto LABEL_394;
            }
            v125.m256i_i64[2] = v159.m256i_i64[3];
            *(_OWORD *)v125.m256i_i8 = *(_OWORD *)&v159.m256i_u64[1];
            v61 = uu_csplit::SplitWriter::new_writer(&v134, v111, v112);
            if ( v61 )
            {
              if ( v125.m256i_i64[0] == 0x8000000000000000LL )
              {
                LOBYTE(i) = 1;
                core::ptr::drop_in_place<std::io::error::Error>(&v125.m256i_u64[1]);
              }
              else
              {
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v125);
                LOBYTE(i) = 1;
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v125);
              }
              goto LABEL_412;
            }
            v61 = v125.m256i_i64[1];
            if ( v125.m256i_i64[0] == 0x8000000000000000LL )
            {
LABEL_410:
              LOBYTE(i) = 1;
              goto LABEL_412;
            }
            *(_OWORD *)v168.m256i_i8 = *(_OWORD *)v125.m256i_i8;
            v168.m256i_i64[2] = v125.m256i_i64[2];
            v61 = uu_csplit::SplitWriter::writeln(&v134, v125.m256i_i64[1], v125.m256i_i64[2]);
            if ( v61 )
            {
              core::ptr::drop_in_place<alloc::string::String>(&v168);
              goto LABEL_410;
            }
            core::ptr::drop_in_place<alloc::string::String>(&v168);
            v171 = v151;
            v170 = *(_OWORD *)&v150[48];
            v169 = *(__m256i *)&v150[16];
            *(_OWORD *)&v168.m256i_u64[2] = *(_OWORD *)v150;
            *(_OWORD *)v168.m256i_i8 = v149;
            while ( 2 )
            {
              if ( BYTE8(v171) )
              {
                if ( v168.m256i_i64[2] )
                {
                  alloc::vec::Vec<T,A>::remove(&v157, &v168, 0LL, &off_272920);
LABEL_428:
                  if ( *(_QWORD *)&v158[4] == 0x8000000000000001LL )
                  {
LABEL_433:
                    core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(&v168);
                    uu_csplit::SplitWriter::finish_split(&v134);
                    i = 0LL;
                    goto LABEL_393;
                  }
                  v61 = *(_QWORD *)&v158[12];
                  if ( *(_QWORD *)&v158[4] == 0x8000000000000000LL )
                    goto LABEL_438;
                  *(_OWORD *)v120 = *(_OWORD *)&v158[4];
                  *(_QWORD *)&v120[16] = *(_QWORD *)&v158[20];
                  v61 = uu_csplit::SplitWriter::writeln(&v134, *(_QWORD *)&v158[12], *(_QWORD *)&v158[20]);
                  if ( v61 )
                  {
                    core::ptr::drop_in_place<alloc::string::String>(v120);
LABEL_438:
                    core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(&v168);
                    i = 0LL;
LABEL_412:
                    v119 = i;
LABEL_413:
                    if ( v132.m256i_i32[0] != 12 )
                      core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v132);
                    v62 = 0LL;
                    v63 = v164;
LABEL_416:
                    <uu_csplit::SplitWriter as core::ops::drop::Drop>::drop(&v134);
                    core::ptr::drop_in_place<core::option::Option<std::io::buffered::bufwriter::BufWriter<std::fs::File>>>(&v134);
                    if ( v119 )
                    {
                      if ( *(_QWORD *)&v150[16] )
                        _rust_dealloc(*(_QWORD *)&v150[8], *(_QWORD *)&v150[16], 1LL);
                      close(*(int *)&v150[48]);
                      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v149);
                      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v149);
                    }
LABEL_420:
                    v168.m256i_i64[0] = v62;
                    v168.m256i_i64[1] = v61;
                    v168.m256i_i64[2] = v145;
                    v168.m256i_i64[3] = v63;
                    v169.m256i_i64[0] = i;
                    v108 = alloc::alloc::exchange_malloc();
                    goto LABEL_347;
                  }
                  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v120);
                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v120);
                  continue;
                }
                BYTE8(v171) = 0;
              }
              break;
            }
            <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(v120, &v168.m256i_u64[3]);
            if ( *(_QWORD *)v120 == 0x8000000000000001LL )
              goto LABEL_433;
            *(_QWORD *)&v158[20] = *(_QWORD *)&v120[16];
            *(_OWORD *)&v158[4] = *(_OWORD *)v120;
            ++*((_QWORD *)&v170 + 1);
            goto LABEL_428;
          }
LABEL_394:
          v119 = i;
          if ( v62 != 12 && !v176 )
          {
            v61 = uu_csplit::SplitWriter::delete_all_splits(&v134);
            if ( v61 )
              goto LABEL_413;
            v62 = v132.m256i_i64[0];
          }
          v61 = v132.m256i_i64[1];
          v63 = v132.m256i_i64[3];
          v145 = v132.m256i_i64[2];
          i = v133;
          <uu_csplit::SplitWriter as core::ops::drop::Drop>::drop(&v134);
          core::ptr::drop_in_place<core::option::Option<std::io::buffered::bufwriter::BufWriter<std::fs::File>>>(&v134);
          if ( v119 )
          {
            if ( *(_QWORD *)&v150[16] )
              _rust_dealloc(*(_QWORD *)&v150[8], *(_QWORD *)&v150[16], 1LL);
            close(*(int *)&v150[48]);
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v149);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v149);
          }
          if ( v62 != 12 )
            goto LABEL_420;
LABEL_331:
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v174);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v174);
          core::ptr::drop_in_place<uucore::features::format::Format<uucore::features::format::num_format::UnsignedInt>>(v175);
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v165);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v165);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v172);
          return 0LL;
        }
      }
      *(_QWORD *)&v151 = v152;
      i = 0x8000000000000000LL;
      while ( 1 )
      {
        if ( BYTE8(v151) )
        {
          if ( *(_QWORD *)v150 )
          {
            v66 = (__m256i *)&v149;
            alloc::vec::Vec<T,A>::remove(&v139, &v149, 0LL, &off_272920);
            goto LABEL_192;
          }
          BYTE8(v151) = 0;
        }
        v66 = (__m256i *)&v150[8];
        <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(v120, &v150[8]);
        if ( *(_QWORD *)v120 == 0x8000000000000001LL )
          goto LABEL_199;
        v139.m256i_i64[3] = *(_QWORD *)&v120[16];
        *(_OWORD *)&v139.m256i_u64[1] = *(_OWORD *)v120;
        v78 = (*(_QWORD *)&v150[56])++;
        v139.m256i_i64[0] = v78;
LABEL_192:
        *(_QWORD *)&v67 = v139.m256i_i64[1];
        if ( v139.m256i_i64[1] == 0x8000000000000001LL )
        {
LABEL_199:
          alloc::vec::Vec<T,A>::drain(v120, &v149);
          v81 = *(_QWORD **)v120;
          for ( i = (unsigned __int64)&v125; *(_QWORD *)v120 != *(_QWORD *)&v120[8]; v81 = *(_QWORD **)v120 )
          {
            *(_QWORD *)v120 = v81 + 4;
            v82 = v81[1];
            if ( v82 == 0x8000000000000001LL )
              break;
            v66 = (__m256i *)v81[2];
            if ( v82 == 0x8000000000000000LL )
            {
              v125.m256i_i64[0] = v81[2];
              core::result::unwrap_failed(aCalledResultUn, 43LL, &v125, &off_272860, &off_2729B8);
            }
            v83 = v81[3];
            v125.m256i_i64[0] = v81[1];
            v125.m256i_i64[1] = (__int64)v66;
            v125.m256i_i64[2] = v83;
            v2 = uu_csplit::SplitWriter::writeln(&v134, v66, v83);
            if ( v2 )
            {
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v125);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v125);
              <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
              v80 = 0LL;
              goto LABEL_253;
            }
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v125);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v125);
          }
          <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
LABEL_205:
          uu_csplit::SplitWriter::finish_split(&v134);
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(v120, v69, 0LL);
          v2 = *(_QWORD *)&v120[8];
          if ( *(_QWORD *)v120 )
            alloc::raw_vec::handle_error(*(_QWORD *)&v120[8], *(_QWORD *)&v120[16]);
          v146 = *(void **)&v120[16];
          v66 = (__m256i *)src;
          memcpy(*(void **)&v120[16], src, v69);
          v80 = 3LL;
          goto LABEL_254;
        }
        *((_QWORD *)&v67 + 1) = v139.m256i_i64[2];
        if ( v139.m256i_i64[1] == 0x8000000000000000LL )
        {
LABEL_198:
          v80 = 0LL;
          v2 = *((_QWORD *)&v67 + 1);
          goto LABEL_253;
        }
        v79 = v139.m256i_i64[0];
        v130 = v67;
        n = v139.m256i_u64[3];
        if ( (unsigned __int8)regex::regex::string::Regex::is_match_at(v70, *((_QWORD *)&v70 + 1)) )
        {
          v87 = 0LL;
          if ( *(_QWORD *)v150 >= (unsigned __int64)v151 )
            v87 = *(_QWORD *)v150 - v151;
          v66 = (__m256i *)&v149;
          alloc::vec::Vec<T,A>::drain(&v125, &v149, v87);
          *(__m256i *)v120 = v125;
          *(_QWORD *)&v120[32] = v126;
          while ( 1 )
          {
            v88 = *(_QWORD **)v120;
            if ( *(_QWORD *)v120 == *(_QWORD *)&v120[8] )
              break;
            *(_QWORD *)v120 += 32LL;
            v89 = v88[1];
            if ( v89 == 0x8000000000000001LL )
              break;
            v66 = (__m256i *)v88[2];
            if ( v89 == 0x8000000000000000LL )
            {
              *(_QWORD *)&v121 = v88[2];
              core::result::unwrap_failed(aCalledResultUn, 43LL, &v121, &off_272860, &off_272A00);
            }
            v90 = (void *)v88[3];
            *(_QWORD *)&v121 = v88[1];
            *((_QWORD *)&v121 + 1) = v66;
            v122 = v90;
            v91 = uu_csplit::SplitWriter::writeln(&v134, v66, v90);
            if ( v91 )
            {
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
              <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
              v80 = 0LL;
              v2 = v91;
              goto LABEL_252;
            }
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
          }
          <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
          i = *(unsigned __int8 *)(v135.m256i_i64[0] + 99);
          if ( !(_BYTE)i )
          {
            *(_QWORD *)&v151 = v163;
            *(_QWORD *)&v120[16] = n;
            *(_OWORD *)v120 = v130;
            v66 = (__m256i *)&v149;
            uu_csplit::InputSplitter<I>::add_line_to_buffer(&v121, (__int64)&v149, v79, (__int64)v120);
            if ( (_QWORD)v121 != 0x8000000000000000LL )
            {
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
              *(_QWORD *)v120 = &off_272978;
              *(_QWORD *)&v120[8] = 1LL;
              *(_QWORD *)&v120[16] = 8LL;
              *(_OWORD *)&v120[24] = 0LL;
              core::panicking::panic_fmt(v120, &off_272988);
            }
          }
          uu_csplit::SplitWriter::finish_split(&v134);
          v80 = 12LL;
          if ( *(_QWORD *)v150 < v152 )
          {
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(v120, v69, 0LL);
            v2 = *(_QWORD *)&v120[8];
            if ( *(_QWORD *)v120 )
              alloc::raw_vec::handle_error(*(_QWORD *)&v120[8], *(_QWORD *)&v120[16]);
            v146 = *(void **)&v120[16];
            v66 = (__m256i *)src;
            memcpy(*(void **)&v120[16], src, v69);
            v80 = 1LL;
            v124 = v69;
          }
          if ( (_BYTE)i )
          {
LABEL_252:
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v130);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v130);
          }
          goto LABEL_253;
        }
        *(_QWORD *)&v120[16] = n;
        *(_OWORD *)v120 = v130;
        uu_csplit::InputSplitter<I>::add_line_to_buffer(&v125, (__int64)&v149, v79, (__int64)v120);
        if ( v125.m256i_i64[0] != 0x8000000000000000LL )
        {
          *(_OWORD *)v120 = *(_OWORD *)v125.m256i_i8;
          *(_QWORD *)&v120[16] = v125.m256i_i64[2];
          v66 = (__m256i *)v125.m256i_i64[1];
          v74 = uu_csplit::SplitWriter::writeln(&v134, v125.m256i_i64[1], v125.m256i_i64[2]);
          if ( v74 )
          {
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v120);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v120);
            goto LABEL_237;
          }
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v120);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v120);
        }
      }
    }
    v123 = *(_QWORD *)&v158[4];
    v92 = *(_QWORD *)&v158[20];
    v136 = *(_QWORD *)&v158[12];
    if ( *(_QWORD *)&v158[12] && !*(_QWORD *)&v158[20] )
      goto LABEL_261;
    v141 = *(void **)&v158[20];
    v93 = v123;
    v94 = 0LL;
LABEL_264:
    v95 = uu_csplit::SplitWriter::new_writer(&v134, v66, v92);
    if ( v95 )
    {
      v132.m256i_i64[0] = 0LL;
      v132.m256i_i64[1] = v95;
      goto LABEL_386;
    }
    v138 = (void *)*((_QWORD *)&v155 + 1);
    v96 = v156;
    BYTE8(v151) = 1;
    *(_QWORD *)&v151 = 1LL;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v168, v156, 0LL);
    v97 = v168.m256i_i64[1];
    if ( v168.m256i_i64[0] )
      alloc::raw_vec::handle_error(v168.m256i_i64[1], v168.m256i_i64[2]);
    src = v94 + 1;
    v140 = v94;
    v98 = v168.m256i_i64[2];
    memcpy((void *)v168.m256i_i64[2], v138, v96);
    *(_QWORD *)v120 = 1LL;
    *(_QWORD *)&v120[8] = v97;
    *(_QWORD *)&v120[16] = v98;
    v99 = v140;
    *(_QWORD *)&v120[24] = v96;
    while ( 1 )
    {
      if ( BYTE8(v151) )
      {
        if ( *(_QWORD *)v150 )
        {
          v66 = (__m256i *)&v149;
          alloc::vec::Vec<T,A>::remove(&v139, &v149, 0LL, &off_272920);
          goto LABEL_273;
        }
        BYTE8(v151) = 0;
      }
      v66 = (__m256i *)&v150[8];
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v168, &v150[8]);
      if ( v168.m256i_i64[0] == 0x8000000000000001LL )
        goto LABEL_291;
      v139.m256i_i64[3] = v168.m256i_i64[2];
      *(_OWORD *)&v139.m256i_u64[1] = *(_OWORD *)v168.m256i_i8;
      v100 = (*(_QWORD *)&v150[56])++;
      v139.m256i_i64[0] = v100;
LABEL_273:
      if ( v139.m256i_i64[1] == 0x8000000000000001LL )
        goto LABEL_291;
      v66 = (__m256i *)v139.m256i_i64[2];
      if ( v139.m256i_i64[1] == 0x8000000000000000LL )
      {
        v125.m256i_i64[0] = 0LL;
        v125.m256i_i64[1] = v139.m256i_i64[2];
LABEL_383:
        if ( *(_DWORD *)v120 != 12 )
          core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(v120);
LABEL_385:
        v133 = v126;
        v132 = v125;
        goto LABEL_386;
      }
      v121 = *(_OWORD *)&v139.m256i_u64[1];
      v122 = (void *)v139.m256i_i64[3];
      v101 = v139.m256i_i64[0] + 1 != v93;
      if ( v139.m256i_i64[0] + 1 > v93 )
        v101 = -1;
      if ( v101 != 1 )
      {
        if ( !v101 )
        {
          v103 = *(_BYTE *)(v135.m256i_i64[0] + 99);
          if ( v103
            || (v168.m256i_i64[2] = (__int64)v122,
                *(_OWORD *)v168.m256i_i8 = v121,
                v66 = (__m256i *)&v149,
                uu_csplit::InputSplitter<I>::add_line_to_buffer(
                  &v153,
                  (__int64)&v149,
                  v139.m256i_i64[0],
                  (__int64)&v168),
                (_QWORD)v153 == 0x8000000000000000LL) )
          {
            if ( *(_DWORD *)v120 != 12 )
              core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(v120);
            *(_QWORD *)v120 = 12LL;
            if ( v103 )
            {
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
            }
            goto LABEL_291;
          }
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v153);
          v168.m256i_i64[0] = (__int64)&off_272938;
          v116 = &off_272960;
LABEL_469:
          v117 = v162;
          v162->m256i_i64[1] = 1LL;
          v117->m256i_i64[2] = 8LL;
          *(_OWORD *)&v117->m256i_u64[3] = 0LL;
          core::panicking::panic_fmt(v117, v116);
        }
        v168.m256i_i64[2] = (__int64)v122;
        *(_OWORD *)v168.m256i_i8 = v121;
        v66 = (__m256i *)&v149;
        uu_csplit::InputSplitter<I>::add_line_to_buffer(&v153, (__int64)&v149, v139.m256i_i64[0], (__int64)&v168);
        if ( (_QWORD)v153 != 0x8000000000000000LL )
        {
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v153);
          v168.m256i_i64[0] = (__int64)&off_272938;
          v116 = &off_272948;
          goto LABEL_469;
        }
        if ( *(_DWORD *)v120 != 12 )
          core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(v120);
        *(_QWORD *)v120 = 12LL;
LABEL_291:
        uu_csplit::SplitWriter::finish_split(&v134);
        v126 = *(_QWORD *)&v120[32];
        v125 = *(__m256i *)v120;
        if ( *(_QWORD *)v120 != 12LL )
        {
          if ( v99 && *(_QWORD *)v120 == 1LL )
          {
            <alloc::string::String as core::clone::Clone>::clone(&v168, &v155);
            v133 = v168.m256i_i64[2];
            *(_OWORD *)&v132.m256i_u64[2] = *(_OWORD *)v168.m256i_i8;
            v132.m256i_i64[0] = 2LL;
            v132.m256i_i64[1] = (__int64)v140;
            core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v125);
            goto LABEL_386;
          }
          goto LABEL_385;
        }
        v93 += v123;
        v94 = (char *)src;
        if ( v136 )
        {
          v94 = (char *)src;
          if ( src == v141 )
          {
LABEL_261:
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v155);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v155);
            v64 = *((_QWORD *)&v127 + 1);
            if ( *((_QWORD *)&v127 + 1) == v129 )
              goto LABEL_350;
            goto LABEL_157;
          }
        }
        goto LABEL_264;
      }
      v102 = uu_csplit::SplitWriter::writeln(&v134, v139.m256i_i64[2], v139.m256i_i64[3]);
      if ( v102 )
      {
        v125.m256i_i64[0] = 0LL;
        v125.m256i_i64[1] = v102;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
        goto LABEL_383;
      }
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
    }
  }
  *(_QWORD *)&v155 = std::io::stdio::stdin();
  v5 = v166;
  j = v167;
  v135.m256i_i64[0] = std::io::stdio::Stdin::lock(&v155);
  v135.m256i_i8[8] = v7 & 1;
  v134.m256i_i64[0] = 0LL;
  v134.m256i_i64[1] = 8LL;
  *(_OWORD *)&v134.m256i_u64[2] = 0LL;
  v135.m256i_i64[2] = 1LL;
  v135.m256i_i8[24] = 0;
  *(_QWORD *)&v150[16] = v174;
  memset(&v150[24], 0, 17);
  *(_QWORD *)&v149 = 0x8000000000000000LL;
  uu_csplit::patterns::get_patterns(&v168, v5, j);
  v8 = v168.m256i_i64[1];
  v9 = v168.m256i_i64[0];
  v10 = v168.m256i_i64[3];
  v145 = v168.m256i_i64[2];
  if ( v168.m256i_i64[0] != 12 )
  {
    j = v169.m256i_i64[0];
    v118 = 1;
    goto LABEL_344;
  }
  *(_QWORD *)&v153 = v168.m256i_i64[2];
  *((_QWORD *)&v153 + 1) = v168.m256i_i64[2];
  *(_QWORD *)&v154 = v168.m256i_i64[1];
  *((_QWORD *)&v154 + 1) = v168.m256i_i64[2] + 56 * v168.m256i_i64[3];
  v164 = v168.m256i_i64[3];
  if ( !v168.m256i_i64[3] )
    goto LABEL_152;
  v162 = &v168;
  v11 = v145;
  while ( 1 )
  {
    *((_QWORD *)&v153 + 1) = v11 + 56;
    v12 = *(_DWORD *)v11;
    v161 = *(_DWORD *)(v11 + 52);
    v160 = *(_OWORD *)(v11 + 36);
    v159 = *(__m256i *)(v11 + 4);
    if ( v12 == 3 )
    {
LABEL_152:
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v153);
      v125.m256i_i64[0] = 12LL;
      goto LABEL_317;
    }
    v157 = v12;
    *(_DWORD *)&v158[48] = v161;
    *(_OWORD *)&v158[32] = v160;
    *(__m256i *)v158 = v159;
    *(_QWORD *)v120 = 0LL;
    *(_QWORD *)&v120[8] = 1LL;
    *(_QWORD *)&v120[16] = 0LL;
    v169.m256i_i64[2] = 32LL;
    v169.m256i_i8[24] = 3;
    v168.m256i_i64[0] = 0LL;
    v168.m256i_i64[2] = 0LL;
    v169.m256i_i64[0] = (__int64)v120;
    v169.m256i_i64[1] = (__int64)&off_2727D8;
    v13 = &v168;
    j = 0x8000000000000000LL;
    if ( (unsigned __int8)<uu_csplit::patterns::Pattern as core::fmt::Display>::fmt(&v157, &v168) )
      core::result::unwrap_failed(aADisplayImplem_3, 55LL, &v139, &unk_272820, &off_272808);
    v130 = *(_OWORD *)v120;
    n = *(_QWORD *)&v120[16];
    v148 = v157;
    if ( v157 == 2 || v157 == 1 )
      break;
    v123 = *(_QWORD *)&v158[4];
    v45 = *(_QWORD *)&v158[20];
    v136 = *(_QWORD *)&v158[12];
    if ( *(_QWORD *)&v158[12] && !*(_QWORD *)&v158[20] )
      goto LABEL_113;
    v141 = *(void **)&v158[20];
    v46 = v123;
    v47 = 0LL;
    while ( 1 )
    {
      v48 = uu_csplit::SplitWriter::new_writer(&v149, v13, v45);
      if ( v48 )
      {
        v125.m256i_i64[0] = 0LL;
        v125.m256i_i64[1] = v48;
        goto LABEL_316;
      }
      v140 = (void *)*((_QWORD *)&v130 + 1);
      v49 = n;
      v135.m256i_i8[24] = 1;
      v135.m256i_i64[2] = 1LL;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v168, n, 0LL);
      v50 = v168.m256i_i64[1];
      if ( v168.m256i_i64[0] )
        alloc::raw_vec::handle_error(v168.m256i_i64[1], v168.m256i_i64[2]);
      src = v47 + 1;
      v138 = v47;
      v51 = v168.m256i_i64[2];
      memcpy((void *)v168.m256i_i64[2], v140, v49);
      *(_QWORD *)v120 = 1LL;
      *(_QWORD *)&v120[8] = v50;
      *(_QWORD *)&v120[16] = v51;
      v52 = v138;
      *(_QWORD *)&v120[24] = v49;
      while ( 1 )
      {
        if ( v135.m256i_i8[24] )
        {
          if ( v134.m256i_i64[2] )
          {
            v13 = &v134;
            alloc::vec::Vec<T,A>::remove(&v132, &v134, 0LL, &off_272920);
            goto LABEL_125;
          }
          v135.m256i_i8[24] = 0;
        }
        v13 = &v135;
        <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v168, &v135);
        if ( v168.m256i_i64[0] == 0x8000000000000001LL )
          goto LABEL_143;
        v132.m256i_i64[3] = v168.m256i_i64[2];
        *(_OWORD *)&v132.m256i_u64[1] = *(_OWORD *)v168.m256i_i8;
        v55 = v134.m256i_i64[3]++;
        v132.m256i_i64[0] = v55;
LABEL_125:
        if ( v132.m256i_i64[1] == 0x8000000000000001LL )
          goto LABEL_143;
        v13 = (__m256i *)v132.m256i_i64[2];
        if ( v132.m256i_i64[1] == 0x8000000000000000LL )
        {
          v143.m256i_i64[0] = 0LL;
          v143.m256i_i64[1] = v132.m256i_i64[2];
LABEL_313:
          if ( *(_DWORD *)v120 != 12 )
            core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(v120);
LABEL_315:
          v126 = v144;
          v125 = v143;
          goto LABEL_316;
        }
        v127 = *(_OWORD *)&v132.m256i_u64[1];
        v128 = (void *)v132.m256i_i64[3];
        v56 = v132.m256i_i64[0] + 1 != v46;
        if ( v132.m256i_i64[0] + 1 > v46 )
          v56 = -1;
        if ( v56 != 1 )
          break;
        v57 = uu_csplit::SplitWriter::writeln(&v149, v132.m256i_i64[2], v132.m256i_i64[3]);
        if ( v57 )
        {
          v143.m256i_i64[0] = 0LL;
          v143.m256i_i64[1] = v57;
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v127);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v127);
          goto LABEL_313;
        }
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v127);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v127);
      }
      if ( !v56 )
      {
        v58 = *(_BYTE *)(*(_QWORD *)&v150[16] + 99LL);
        if ( v58
          || (v168.m256i_i64[2] = (__int64)v128,
              *(_OWORD *)v168.m256i_i8 = v127,
              v13 = &v134,
              uu_csplit::InputSplitter<I>::add_line_to_buffer(
                &v139,
                (__int64)&v134,
                v132.m256i_i64[0],
                (__int64)&v168,
                v53,
                v54),
              v139.m256i_i64[0] == 0x8000000000000000LL) )
        {
          if ( *(_DWORD *)v120 != 12 )
            core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(v120);
          *(_QWORD *)v120 = 12LL;
          if ( v58 )
          {
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v127);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v127);
          }
          goto LABEL_143;
        }
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v139);
        v168.m256i_i64[0] = (__int64)&off_272938;
        v114 = &off_272960;
LABEL_463:
        v115 = v162;
        v162->m256i_i64[1] = 1LL;
        v115->m256i_i64[2] = 8LL;
        *(_OWORD *)&v115->m256i_u64[3] = 0LL;
        core::panicking::panic_fmt(v115, v114);
      }
      v168.m256i_i64[2] = (__int64)v128;
      *(_OWORD *)v168.m256i_i8 = v127;
      v13 = &v134;
      uu_csplit::InputSplitter<I>::add_line_to_buffer(
        &v139,
        (__int64)&v134,
        v132.m256i_i64[0],
        (__int64)&v168,
        v53,
        v54);
      if ( v139.m256i_i64[0] != 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v139);
        v168.m256i_i64[0] = (__int64)&off_272938;
        v114 = &off_272948;
        goto LABEL_463;
      }
      if ( *(_DWORD *)v120 != 12 )
        core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(v120);
      *(_QWORD *)v120 = 12LL;
LABEL_143:
      uu_csplit::SplitWriter::finish_split(&v149);
      *(_QWORD *)&v144 = *(_QWORD *)&v120[32];
      v143 = *(__m256i *)v120;
      if ( *(_QWORD *)v120 != 12LL )
      {
        if ( v52 && *(_QWORD *)v120 == 1LL )
        {
          <alloc::string::String as core::clone::Clone>::clone(&v168, &v130);
          v126 = v168.m256i_i64[2];
          *(_OWORD *)&v125.m256i_u64[2] = *(_OWORD *)v168.m256i_i8;
          v125.m256i_i64[0] = 2LL;
          v125.m256i_i64[1] = (__int64)v52;
          core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v143);
          goto LABEL_316;
        }
        goto LABEL_315;
      }
      v46 += v123;
      v47 = (char *)src;
      if ( v136 )
      {
        v47 = (char *)src;
        if ( src == v141 )
          break;
      }
    }
LABEL_113:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v130);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v130);
    v11 = *((_QWORD *)&v153 + 1);
    if ( *((_QWORD *)&v153 + 1) == *((_QWORD *)&v154 + 1) )
      goto LABEL_152;
  }
  v139 = *(__m256i *)&v158[4];
  v141 = *(void **)&v158[36];
  v138 = *(void **)&v158[44];
  v152 = -*(_DWORD *)v158;
  v163 = v152 + 1;
  v136 = *(unsigned int *)v158;
  v147 = *(_DWORD *)v158 + 1;
  v123 = 0LL;
  if ( !*(_QWORD *)&v158[36] )
    goto LABEL_17;
  do
  {
    v140 = &dword_0 + 1;
    if ( (void *)v123 == v138 )
    {
      core::ptr::drop_in_place<regex::regex::string::Regex>(&v139);
      goto LABEL_113;
    }
    if ( v148 != 2 )
      goto LABEL_18;
LABEL_16:
    v150[40] = 1;
LABEL_19:
    src = (void *)*((_QWORD *)&v130 + 1);
    v16 = n;
    v17 = *(_OWORD *)v139.m256i_i8;
    if ( (int)v136 < 0 )
    {
      v135.m256i_i64[2] = v152;
      j = 0x8000000000000000LL;
      while ( 1 )
      {
        if ( !v135.m256i_i8[24] )
          goto LABEL_43;
        if ( !v134.m256i_i64[2] )
          break;
        v13 = &v134;
        alloc::vec::Vec<T,A>::remove(&v132, &v134, 0LL, &off_272920);
        *(_QWORD *)&v14 = v132.m256i_i64[1];
        if ( v132.m256i_i64[1] == 0x8000000000000001LL )
          goto LABEL_51;
LABEL_45:
        *((_QWORD *)&v14 + 1) = v132.m256i_i64[2];
        if ( (_QWORD)v14 == 0x8000000000000000LL )
        {
LABEL_50:
          v31 = 0LL;
          v2 = *((_QWORD *)&v14 + 1);
          goto LABEL_105;
        }
        v28 = v132.m256i_i64[0];
        v121 = v14;
        v122 = (void *)v132.m256i_i64[3];
        if ( (unsigned __int8)regex::regex::string::Regex::is_match_at(v17, *((_QWORD *)&v17 + 1)) )
        {
          v38 = 0LL;
          if ( v134.m256i_i64[2] >= (unsigned __int64)v135.m256i_i64[2] )
            v38 = v134.m256i_i64[2] - v135.m256i_i64[2];
          v13 = &v134;
          alloc::vec::Vec<T,A>::drain(&v143, &v134, v38);
          *(__m256i *)v120 = v143;
          *(_QWORD *)&v120[32] = v144;
          while ( 1 )
          {
            v39 = *(_QWORD **)v120;
            if ( *(_QWORD *)v120 == *(_QWORD *)&v120[8] )
              break;
            *(_QWORD *)v120 += 32LL;
            v40 = v39[1];
            if ( v40 == 0x8000000000000001LL )
              break;
            v13 = (__m256i *)v39[2];
            if ( v40 == 0x8000000000000000LL )
            {
              *(_QWORD *)&v127 = v39[2];
              core::result::unwrap_failed(aCalledResultUn, 43LL, &v127, &off_272860, &off_272A00);
            }
            v41 = (void *)v39[3];
            *(_QWORD *)&v127 = v39[1];
            *((_QWORD *)&v127 + 1) = v13;
            v128 = v41;
            v42 = uu_csplit::SplitWriter::writeln(&v149, v13, v41);
            if ( v42 )
            {
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v127);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v127);
              <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
              v31 = 0LL;
              v2 = v42;
              goto LABEL_104;
            }
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v127);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v127);
          }
          <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
          j = *(unsigned __int8 *)(*(_QWORD *)&v150[16] + 99LL);
          if ( !(_BYTE)j )
          {
            v135.m256i_i64[2] = v163;
            *(_QWORD *)&v120[16] = v122;
            *(_OWORD *)v120 = v121;
            v13 = &v134;
            uu_csplit::InputSplitter<I>::add_line_to_buffer(&v127, (__int64)&v134, v28, (__int64)v120, v43, v44);
            if ( (_QWORD)v127 != 0x8000000000000000LL )
            {
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v127);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v127);
              *(_QWORD *)v120 = &off_272978;
              *(_QWORD *)&v120[8] = 1LL;
              *(_QWORD *)&v120[16] = 8LL;
              *(_OWORD *)&v120[24] = 0LL;
              core::panicking::panic_fmt(v120, &off_272988);
            }
          }
          uu_csplit::SplitWriter::finish_split(&v149);
          v31 = 12LL;
          if ( v134.m256i_i64[2] < v152 )
          {
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(v120, v16, 0LL);
            v2 = *(_QWORD *)&v120[8];
            if ( *(_QWORD *)v120 )
              alloc::raw_vec::handle_error(*(_QWORD *)&v120[8], *(_QWORD *)&v120[16]);
            v146 = *(void **)&v120[16];
            v13 = (__m256i *)src;
            memcpy(*(void **)&v120[16], src, v16);
            v31 = 1LL;
            v124 = v16;
          }
          if ( (_BYTE)j )
          {
LABEL_104:
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
          }
          goto LABEL_105;
        }
        *(_QWORD *)&v120[16] = v122;
        *(_OWORD *)v120 = v121;
        uu_csplit::InputSplitter<I>::add_line_to_buffer(&v143, (__int64)&v134, v28, (__int64)v120, v29, v30);
        if ( v143.m256i_i64[0] != 0x8000000000000000LL )
        {
          *(_OWORD *)v120 = *(_OWORD *)v143.m256i_i8;
          *(_QWORD *)&v120[16] = v143.m256i_i64[2];
          v13 = (__m256i *)v143.m256i_i64[1];
          v21 = uu_csplit::SplitWriter::writeln(&v149, v143.m256i_i64[1], v143.m256i_i64[2]);
          if ( v21 )
          {
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v120);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v120);
            goto LABEL_89;
          }
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v120);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v120);
        }
      }
      v135.m256i_i8[24] = 0;
LABEL_43:
      v13 = &v135;
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(v120, &v135);
      if ( *(_QWORD *)v120 == 0x8000000000000001LL )
      {
LABEL_51:
        alloc::vec::Vec<T,A>::drain(v120, &v134);
        v32 = *(_QWORD **)v120;
        for ( j = (unsigned __int64)&v143; *(_QWORD *)v120 != *(_QWORD *)&v120[8]; v32 = *(_QWORD **)v120 )
        {
          *(_QWORD *)v120 = v32 + 4;
          v33 = v32[1];
          if ( v33 == 0x8000000000000001LL )
            break;
          v13 = (__m256i *)v32[2];
          if ( v33 == 0x8000000000000000LL )
          {
            v143.m256i_i64[0] = v32[2];
            core::result::unwrap_failed(aCalledResultUn, 43LL, &v143, &off_272860, &off_2729B8);
          }
          v34 = v32[3];
          v143.m256i_i64[0] = v32[1];
          v143.m256i_i64[1] = (__int64)v13;
          v143.m256i_i64[2] = v34;
          v2 = uu_csplit::SplitWriter::writeln(&v149, v13, v34);
          if ( v2 )
          {
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v143);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v143);
            <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
            v31 = 0LL;
            goto LABEL_105;
          }
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v143);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v143);
        }
        <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
LABEL_57:
        uu_csplit::SplitWriter::finish_split(&v149);
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(v120, v16, 0LL);
        v2 = *(_QWORD *)&v120[8];
        if ( *(_QWORD *)v120 )
          alloc::raw_vec::handle_error(*(_QWORD *)&v120[8], *(_QWORD *)&v120[16]);
        v146 = *(void **)&v120[16];
        v13 = (__m256i *)src;
        memcpy(*(void **)&v120[16], src, v16);
        v31 = 3LL;
        goto LABEL_106;
      }
      v132.m256i_i64[3] = *(_QWORD *)&v120[16];
      *(_OWORD *)&v132.m256i_u64[1] = *(_OWORD *)v120;
      v27 = v134.m256i_i64[3]++;
      v132.m256i_i64[0] = v27;
      *(_QWORD *)&v14 = *(_QWORD *)v120;
      goto LABEL_45;
    }
    alloc::vec::Vec<T,A>::drain(&v143, &v134);
    *(__m256i *)v120 = v143;
    *(_QWORD *)&v120[32] = v144;
    v18 = (_QWORD *)v143.m256i_i64[0];
    j = 0x8000000000000000LL;
    if ( v143.m256i_i64[0] != v143.m256i_i64[1] )
    {
      while ( 1 )
      {
        *(_QWORD *)v120 = v18 + 4;
        v19 = v18[1];
        if ( v19 == 0x8000000000000001LL )
          goto LABEL_25;
        v13 = (__m256i *)v18[2];
        if ( v19 == 0x8000000000000000LL )
        {
          v132.m256i_i64[0] = v18[2];
          core::result::unwrap_failed(aCalledResultUn, 43LL, &v132, &off_272860, &off_2729B8);
        }
        v20 = v18[3];
        v132.m256i_i64[0] = v18[1];
        v132.m256i_i64[1] = (__int64)v13;
        v132.m256i_i64[2] = v20;
        v21 = uu_csplit::SplitWriter::writeln(&v149, v13, v20);
        if ( v21 )
          break;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v132);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v132);
        v18 = *(_QWORD **)v120;
        if ( *(_QWORD *)v120 == *(_QWORD *)&v120[8] )
          goto LABEL_25;
      }
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v132);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v132);
      <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
LABEL_89:
      v31 = 0LL;
      v2 = v21;
      goto LABEL_105;
    }
LABEL_25:
    <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v120);
    v135.m256i_i64[2] = 1LL;
    for ( j = 0x8000000000000000LL; ; j = 0x8000000000000000LL )
    {
      if ( v135.m256i_i8[24] )
      {
        if ( v134.m256i_i64[2] )
        {
          v13 = &v134;
          alloc::vec::Vec<T,A>::remove(&v132, &v134, 0LL, &off_272920);
          goto LABEL_32;
        }
        v135.m256i_i8[24] = 0;
      }
      v13 = &v135;
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(v120, &v135);
      if ( *(_QWORD *)v120 == 0x8000000000000001LL )
        goto LABEL_57;
      v132.m256i_i64[3] = *(_QWORD *)&v120[16];
      *(_OWORD *)&v132.m256i_u64[1] = *(_OWORD *)v120;
      v22 = v134.m256i_i64[3]++;
      v132.m256i_i64[0] = v22;
LABEL_32:
      *(_QWORD *)&v14 = v132.m256i_i64[1];
      j = 0x8000000000000001LL;
      if ( v132.m256i_i64[1] == 0x8000000000000001LL )
        goto LABEL_57;
      *((_QWORD *)&v14 + 1) = v132.m256i_i64[2];
      if ( v132.m256i_i64[1] == 0x8000000000000000LL )
        goto LABEL_50;
      v23 = v132.m256i_i64[0];
      v121 = v14;
      v122 = (void *)v132.m256i_i64[3];
      v13 = (__m256i *)*((_QWORD *)&v17 + 1);
      if ( (unsigned __int8)regex::regex::string::Regex::is_match_at(v17, *((_QWORD *)&v17 + 1)) )
        break;
      v13 = (__m256i *)*((_QWORD *)&v121 + 1);
      v26 = uu_csplit::SplitWriter::writeln(&v149, *((_QWORD *)&v121 + 1), v122);
      if ( v26 )
        goto LABEL_92;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v121);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v121);
    }
    if ( *(_BYTE *)(*(_QWORD *)&v150[16] + 99LL) )
      goto LABEL_61;
    if ( (_DWORD)v136 )
    {
      v13 = (__m256i *)*((_QWORD *)&v121 + 1);
      v26 = uu_csplit::SplitWriter::writeln(&v149, *((_QWORD *)&v121 + 1), v122);
      if ( v26 )
      {
LABEL_92:
        v31 = 0LL;
        v2 = v26;
        goto LABEL_104;
      }
LABEL_61:
      v35 = v147;
      if ( (int)v136 >= 2 )
      {
        while ( 2 )
        {
          if ( v135.m256i_i8[24] )
          {
            if ( v134.m256i_i64[2] )
            {
              v13 = &v134;
              alloc::vec::Vec<T,A>::remove(v120, &v134, 0LL, &off_272920);
LABEL_68:
              if ( *(_QWORD *)&v120[8] == 0x8000000000000001LL )
              {
LABEL_100:
                uu_csplit::SplitWriter::finish_split(&v149);
                alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v127, v16, 0LL);
                v2 = *((_QWORD *)&v127 + 1);
                if ( (_QWORD)v127 )
                  alloc::raw_vec::handle_error(*((_QWORD *)&v127 + 1), v128);
                v146 = v128;
                v13 = (__m256i *)src;
                memcpy(v128, src, v16);
                v31 = 1LL;
                v124 = v16;
                goto LABEL_104;
              }
              v36 = *(_QWORD *)&v120[16];
              if ( *(_QWORD *)&v120[8] == 0x8000000000000000LL )
                goto LABEL_103;
              v127 = *(_OWORD *)&v120[8];
              v128 = *(void **)&v120[24];
              v13 = *(__m256i **)&v120[16];
              v36 = uu_csplit::SplitWriter::writeln(&v149, *(_QWORD *)&v120[16], *(_QWORD *)&v120[24]);
              if ( v36 )
              {
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v127);
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v127);
LABEL_103:
                v31 = 0LL;
                v2 = v36;
                goto LABEL_104;
              }
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v127);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v127);
              if ( (unsigned int)--v35 <= 2 )
                goto LABEL_72;
              continue;
            }
            v135.m256i_i8[24] = 0;
          }
          break;
        }
        v13 = &v135;
        <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v127, &v135);
        if ( (_QWORD)v127 == 0x8000000000000001LL )
          goto LABEL_100;
        *(_QWORD *)&v120[24] = v128;
        *(_OWORD *)&v120[8] = v127;
        ++v134.m256i_i64[3];
        goto LABEL_68;
      }
LABEL_72:
      v37 = 0;
    }
    else
    {
      *(_QWORD *)&v120[16] = v122;
      *(_OWORD *)v120 = v121;
      v13 = &v134;
      uu_csplit::InputSplitter<I>::add_line_to_buffer(&v127, (__int64)&v134, v23, (__int64)v120, v24, v25);
      if ( (_QWORD)v127 != 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v127);
        *(_QWORD *)v120 = &off_272938;
        *(_QWORD *)&v120[8] = 1LL;
        *(_QWORD *)&v120[16] = 8LL;
        *(_OWORD *)&v120[24] = 0LL;
        core::panicking::panic_fmt(v120, &off_2729A0);
      }
      v37 = 1;
    }
    uu_csplit::SplitWriter::finish_split(&v149);
    v31 = 12LL;
    if ( !v37 )
      goto LABEL_104;
LABEL_105:
    v16 = v124;
LABEL_106:
    v168.m256i_i64[0] = v31;
    v168.m256i_i64[1] = v2;
    v168.m256i_i64[2] = (__int64)v146;
    v168.m256i_i64[3] = v16;
    v169.m256i_i64[1] = (__int64)v140;
    v169.m256i_i64[2] = (__int64)v138;
    if ( v31 != 12 )
    {
      if ( v141 )
      {
        if ( v123 && (_DWORD)v31 == 3 && v138 != (char *)&dword_0 + 1 )
        {
          <alloc::string::String as core::clone::Clone>::clone(v120, &v130);
          v126 = *(_QWORD *)&v120[16];
          *(_OWORD *)&v125.m256i_u64[2] = *(_OWORD *)v120;
          v125.m256i_i64[0] = 4LL;
          v125.m256i_i64[1] = v123;
          if ( v168.m256i_i32[0] == 12 )
            goto LABEL_309;
LABEL_307:
          core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v168);
          goto LABEL_309;
        }
      }
      else if ( (_DWORD)v31 == 3 )
      {
        v125.m256i_i64[0] = 12LL;
        goto LABEL_307;
      }
      v126 = v169.m256i_i64[0];
      v125 = v168;
      goto LABEL_309;
    }
    ++v123;
    v124 = v16;
  }
  while ( v141 );
LABEL_17:
  v140 = 0LL;
  if ( v148 == 2 )
    goto LABEL_16;
LABEL_18:
  v15 = uu_csplit::SplitWriter::new_writer(&v149, v13, *((_QWORD *)&v14 + 1));
  if ( !v15 )
    goto LABEL_19;
  v125.m256i_i64[0] = 0LL;
  v125.m256i_i64[1] = v15;
LABEL_309:
  core::ptr::drop_in_place<regex::regex::string::Regex>(&v139);
LABEL_316:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v130);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v130);
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v153);
  v9 = v125.m256i_i64[0];
  LOBYTE(j) = 1;
  if ( v125.m256i_i64[0] != 12 )
  {
LABEL_324:
    v118 = j;
    if ( v9 != 12 && !v176 )
    {
      v8 = uu_csplit::SplitWriter::delete_all_splits(&v149);
      if ( v8 )
        goto LABEL_341;
      v9 = v125.m256i_i64[0];
    }
    v8 = v125.m256i_i64[1];
    v10 = v125.m256i_i64[3];
    v145 = v125.m256i_i64[2];
    j = v126;
    <uu_csplit::SplitWriter as core::ops::drop::Drop>::drop(&v149);
    core::ptr::drop_in_place<core::option::Option<std::io::buffered::bufwriter::BufWriter<std::fs::File>>>(&v149);
    if ( v118 )
      core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(&v134);
    if ( v9 != 12 )
      goto LABEL_346;
    goto LABEL_331;
  }
LABEL_317:
  v135.m256i_i8[24] = 1;
  if ( v134.m256i_i64[2] )
  {
    v106 = &v134;
    alloc::vec::Vec<T,A>::remove(&v159, &v134, 0LL, &off_272920);
  }
  else
  {
    v135.m256i_i8[24] = 0;
    v106 = &v135;
    <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v168, &v135);
    if ( v168.m256i_i64[0] == 0x8000000000000001LL )
    {
      v159.m256i_i64[1] = 0x8000000000000001LL;
    }
    else
    {
      v159.m256i_i64[3] = v168.m256i_i64[2];
      *(_OWORD *)&v159.m256i_u64[1] = *(_OWORD *)v168.m256i_i8;
      ++v134.m256i_i64[3];
    }
  }
  LOBYTE(j) = 1;
  if ( v159.m256i_i64[1] == 0x8000000000000001LL )
  {
LABEL_323:
    v9 = v125.m256i_i64[0];
    goto LABEL_324;
  }
  v143.m256i_i64[2] = v159.m256i_i64[3];
  *(_OWORD *)v143.m256i_i8 = *(_OWORD *)&v159.m256i_u64[1];
  v8 = uu_csplit::SplitWriter::new_writer(&v149, v106, v107);
  if ( v8 )
  {
    if ( v143.m256i_i64[0] == 0x8000000000000000LL )
    {
      LOBYTE(j) = 1;
      core::ptr::drop_in_place<std::io::error::Error>(&v143.m256i_u64[1]);
    }
    else
    {
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v143);
      LOBYTE(j) = 1;
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v143);
    }
    goto LABEL_340;
  }
  v8 = v143.m256i_i64[1];
  if ( v143.m256i_i64[0] == 0x8000000000000000LL )
  {
LABEL_338:
    LOBYTE(j) = 1;
    goto LABEL_340;
  }
  *(_OWORD *)v168.m256i_i8 = *(_OWORD *)v143.m256i_i8;
  v168.m256i_i64[2] = v143.m256i_i64[2];
  v8 = uu_csplit::SplitWriter::writeln(&v149, v143.m256i_i64[1], v143.m256i_i64[2]);
  if ( v8 )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v168);
    goto LABEL_338;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v168);
  v169 = v135;
  v168 = v134;
  while ( 2 )
  {
    if ( !v169.m256i_i8[24] )
    {
LABEL_362:
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(v120, &v169);
      if ( *(_QWORD *)v120 == 0x8000000000000001LL )
        goto LABEL_370;
      *(_QWORD *)&v158[20] = *(_QWORD *)&v120[16];
      *(_OWORD *)&v158[4] = *(_OWORD *)v120;
      ++v168.m256i_i64[3];
      goto LABEL_364;
    }
    if ( !v168.m256i_i64[2] )
    {
      v169.m256i_i8[24] = 0;
      goto LABEL_362;
    }
    alloc::vec::Vec<T,A>::remove(&v157, &v168, 0LL, &off_272920);
LABEL_364:
    if ( *(_QWORD *)&v158[4] == 0x8000000000000001LL )
    {
LABEL_370:
      core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(&v168);
      uu_csplit::SplitWriter::finish_split(&v149);
      j = 0LL;
      goto LABEL_323;
    }
    v8 = *(_QWORD *)&v158[12];
    if ( *(_QWORD *)&v158[4] == 0x8000000000000000LL )
      goto LABEL_380;
    *(_OWORD *)v120 = *(_OWORD *)&v158[4];
    *(_QWORD *)&v120[16] = *(_QWORD *)&v158[20];
    v8 = uu_csplit::SplitWriter::writeln(&v149, *(_QWORD *)&v158[12], *(_QWORD *)&v158[20]);
    if ( !v8 )
    {
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v120);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v120);
      continue;
    }
    break;
  }
  core::ptr::drop_in_place<alloc::string::String>(v120);
LABEL_380:
  core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(&v168);
  j = 0LL;
LABEL_340:
  v118 = j;
LABEL_341:
  if ( v125.m256i_i32[0] != 12 )
    core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v125);
  v9 = 0LL;
  v10 = v164;
LABEL_344:
  <uu_csplit::SplitWriter as core::ops::drop::Drop>::drop(&v149);
  core::ptr::drop_in_place<core::option::Option<std::io::buffered::bufwriter::BufWriter<std::fs::File>>>(&v149);
  if ( v118 )
    core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(&v134);
LABEL_346:
  v168.m256i_i64[0] = v9;
  v168.m256i_i64[1] = v8;
  v168.m256i_i64[2] = v145;
  v168.m256i_i64[3] = v10;
  v169.m256i_i64[0] = j;
  v108 = _rust_alloc(40LL, 8LL);
  if ( !v108 )
    alloc::alloc::handle_alloc_error(8LL, 40LL);
LABEL_347:
  v3 = v108;
  *(_QWORD *)(v108 + 32) = v169.m256i_i64[0];
  v109 = *(_OWORD *)v168.m256i_i8;
  *(_OWORD *)(v108 + 16) = *(_OWORD *)&v168.m256i_u64[2];
  *(_OWORD *)v108 = v109;
LABEL_348:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v174);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v174);
  core::ptr::drop_in_place<uucore::features::format::Format<uucore::features::format::num_format::UnsignedInt>>(v175);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v165);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v165);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v172);
  return v3;
}
