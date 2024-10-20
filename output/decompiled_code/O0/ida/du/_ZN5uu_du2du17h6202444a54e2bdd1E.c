void *__fastcall uu_du::du(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, const __m128i *a5, __int64 a6)
{
  _QWORD *v6; // rbp
  void *v7; // rbx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // r13
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  bool v26; // cf
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // rax
  void *v38; // rbx
  void *v39; // rax
  void *v40; // rbx
  void *v41; // rax
  void *v42; // rbx
  char **v44; // rax
  char **v45; // rax
  char **v46; // [rsp+10h] [rbp-DA8h]
  volatile signed __int64 *v49; // [rsp+28h] [rbp-D90h] BYREF
  char v50; // [rsp+30h] [rbp-D88h]
  char **v51; // [rsp+38h] [rbp-D80h]
  __int64 v52; // [rsp+40h] [rbp-D78h]
  __int64 v53; // [rsp+48h] [rbp-D70h]
  _QWORD *v54; // [rsp+50h] [rbp-D68h]
  volatile signed __int64 *v55; // [rsp+58h] [rbp-D60h] BYREF
  _BYTE *v56; // [rsp+60h] [rbp-D58h] BYREF
  __m128i v57; // [rsp+68h] [rbp-D50h]
  __int64 v58; // [rsp+78h] [rbp-D40h]
  __int64 v59; // [rsp+80h] [rbp-D38h]
  __int64 v60; // [rsp+88h] [rbp-D30h] BYREF
  __int64 v61; // [rsp+90h] [rbp-D28h]
  __int64 v62; // [rsp+98h] [rbp-D20h] BYREF
  __m128i v63[10]; // [rsp+A0h] [rbp-D18h] BYREF
  _BYTE v64[8]; // [rsp+148h] [rbp-C70h] BYREF
  __int64 v65; // [rsp+150h] [rbp-C68h]
  __int64 v66; // [rsp+158h] [rbp-C60h]
  __m128i v67; // [rsp+160h] [rbp-C58h] BYREF
  __int64 v68; // [rsp+170h] [rbp-C48h]
  _QWORD *v69; // [rsp+180h] [rbp-C38h] BYREF
  __int64 v70; // [rsp+188h] [rbp-C30h] BYREF
  __m128i v71; // [rsp+190h] [rbp-C28h]
  _QWORD v72[2]; // [rsp+1A0h] [rbp-C18h] BYREF
  _QWORD v73[3]; // [rsp+1B0h] [rbp-C08h] BYREF
  char v74; // [rsp+1C8h] [rbp-BF0h]
  __m128i v75; // [rsp+1D0h] [rbp-BE8h] BYREF
  __m128i v76; // [rsp+1E0h] [rbp-BD8h]
  __m128i v77; // [rsp+1F0h] [rbp-BC8h]
  __m128i v78; // [rsp+200h] [rbp-BB8h]
  __int64 v79; // [rsp+210h] [rbp-BA8h]
  _OWORD v80[9]; // [rsp+220h] [rbp-B98h] BYREF
  __m128i v81; // [rsp+2B8h] [rbp-B00h] BYREF
  __int64 v82; // [rsp+2C8h] [rbp-AF0h]
  _QWORD v83[6]; // [rsp+2D0h] [rbp-AE8h] BYREF
  __int64 v84; // [rsp+300h] [rbp-AB8h] BYREF
  volatile signed __int64 *v85; // [rsp+308h] [rbp-AB0h]
  __int64 v86; // [rsp+310h] [rbp-AA8h]
  __m128i v87; // [rsp+318h] [rbp-AA0h] BYREF
  __int64 v88; // [rsp+328h] [rbp-A90h]
  _OWORD v89[9]; // [rsp+330h] [rbp-A88h] BYREF
  __m128i v90[9]; // [rsp+3C0h] [rbp-9F8h] BYREF
  __m128i dest; // [rsp+450h] [rbp-968h] BYREF
  __int64 v92; // [rsp+460h] [rbp-958h]
  __m128i v93[7]; // [rsp+468h] [rbp-950h] BYREF
  __int64 v94; // [rsp+4D8h] [rbp-8E0h]
  __m128i v95; // [rsp+4E0h] [rbp-8D8h] BYREF
  _BYTE v96[144]; // [rsp+4F0h] [rbp-8C8h] BYREF
  __int64 v97; // [rsp+580h] [rbp-838h]
  __int64 v98; // [rsp+588h] [rbp-830h]
  __int64 v99; // [rsp+590h] [rbp-828h]
  __int64 (__fastcall **v100)(); // [rsp+598h] [rbp-820h]
  __m128i v101; // [rsp+620h] [rbp-798h] BYREF
  _BYTE v102[144]; // [rsp+630h] [rbp-788h] BYREF
  __m128i v103; // [rsp+6C0h] [rbp-6F8h] BYREF
  _BYTE v104[144]; // [rsp+6D0h] [rbp-6E8h] BYREF
  __m128i v105; // [rsp+760h] [rbp-658h] BYREF
  _BYTE v106[144]; // [rsp+770h] [rbp-648h] BYREF
  __int64 v107; // [rsp+800h] [rbp-5B8h]
  __int64 v108; // [rsp+808h] [rbp-5B0h]
  __int64 v109; // [rsp+810h] [rbp-5A8h]
  __int64 (__fastcall **v110)(); // [rsp+818h] [rbp-5A0h]
  __m128i v111; // [rsp+8A0h] [rbp-518h] BYREF
  _BYTE v112[144]; // [rsp+8B0h] [rbp-508h] BYREF
  __int64 v113; // [rsp+940h] [rbp-478h]
  __int64 v114; // [rsp+948h] [rbp-470h]
  __int64 v115; // [rsp+950h] [rbp-468h]
  __int64 (__fastcall **v116)(); // [rsp+958h] [rbp-460h]
  __m128i v117; // [rsp+9E0h] [rbp-3D8h] BYREF
  _BYTE v118[144]; // [rsp+9F0h] [rbp-3C8h] BYREF
  __m128i v119; // [rsp+A80h] [rbp-338h] BYREF
  _BYTE v120[144]; // [rsp+A90h] [rbp-328h] BYREF
  _BYTE v121[144]; // [rsp+B20h] [rbp-298h] BYREF
  __int64 v122; // [rsp+BB0h] [rbp-208h]
  _BYTE src[144]; // [rsp+BC0h] [rbp-1F8h] BYREF
  _BYTE v124[144]; // [rsp+C50h] [rbp-168h] BYREF
  _BYTE v125[144]; // [rsp+CE0h] [rbp-D8h] BYREF
  __int64 v126; // [rsp+D70h] [rbp-48h]

  v6 = (_QWORD *)a2;
  v7 = a1;
  if ( (*(_BYTE *)(a2 + 128) & 1) == 0 )
  {
LABEL_2:
    memmove(v7, v6, 0x90uLL);
    return v7;
  }
  v53 = a2 + 64;
  v10 = *(_QWORD *)(a2 + 72);
  v11 = *(_QWORD *)(a2 + 80);
  core::slice::raw::from_raw_parts::precondition_check(v10, 1LL, 1LL, v11);
  std::sys::pal::unix::fs::readdir(v63, v10, v11);
  if ( v63[0].m128i_i8[8] == 2 )
  {
    v99 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
            v63[0].m128i_i64[0],
            v53);
    v100 = &off_164C88;
    v98 = 0LL;
    v97 = 2LL;
    std::sync::mpmc::Sender<T>::send(&v95);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v95), (__m128i)xmmword_1DA70)) != 0xFFFF )
    {
      memcpy(&v63[1], v96, 0x90uLL);
      v63[0] = v95;
      v37 = (void *)alloc::alloc::Global::alloc_impl(1LL, 16LL, 160LL, 0LL);
      v38 = v37;
      if ( !v37 )
        alloc::alloc::handle_alloc_error(16LL, 160LL);
      memcpy(v37, v63, 0xA0uLL);
      a1[2] = v38;
      v7 = a1;
      a1[1] = 0LL;
      *a1 = 2LL;
      goto LABEL_94;
    }
    v7 = a1;
    goto LABEL_2;
  }
  v49 = (volatile signed __int64 *)v63[0].m128i_i64[0];
  v50 = v63[0].m128i_i8[8] & 1;
  v52 = a4 + 1;
  v46 = &off_164B10;
  v51 = &off_164BB8;
  v54 = (_QWORD *)a2;
  v59 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v84, &v49);
      if ( !v84 )
      {
        v7 = a1;
        if ( !_InterlockedDecrement64(v49) )
          alloc::sync::Arc<T,A>::drop_slow(&v49);
        goto LABEL_2;
      }
      if ( v85 )
        break;
      v63[0].m128i_i64[0] = 0x8000000000000000LL;
      v63[1].m128i_i64[1] = v86;
      v12 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v12 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v13 = _mm_loadu_si128(v63);
      *(__m128i *)(v12 + 16) = v63[1];
      *(__m128i *)v12 = v13;
      v115 = v12;
      v116 = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
      v114 = 0LL;
      v113 = 2LL;
      std::sync::mpmc::Sender<T>::send(&v111);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v111), (__m128i)xmmword_1DA70)) != 0xFFFF )
      {
        memcpy(&v63[1], v112, 0x90uLL);
        v63[0] = v111;
        v39 = (void *)alloc::alloc::Global::alloc_impl(1LL, 16LL, 160LL, 0LL);
        v40 = v39;
        if ( !v39 )
          alloc::alloc::handle_alloc_error(16LL, 160LL);
        memcpy(v39, v63, 0xA0uLL);
        a1[2] = v40;
        v7 = a1;
        a1[1] = 0LL;
        *a1 = 2LL;
        goto LABEL_92;
      }
    }
    v55 = v85;
    v56 = (_BYTE *)v86;
    v58 = v88;
    v57 = _mm_loadu_si128(&v87);
    std::fs::DirEntry::path(v64, &v55);
    if ( !v65 || v66 < 0 )
LABEL_97:
      core::panicking::panic_nounwind(anon_8085cf7280ca5a7279da5d96bb8c0362_48_llvm_11242443447069085683, 162LL);
    uu_du::Stat::new((__int64)v90, v65, v66, (_QWORD *)a3);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v90), (__m128i)xmmword_1D810)) == 0xFFFF )
    {
      v109 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
               v90[1].m128i_i64[0],
               &v55);
      v110 = &off_164C88;
      v108 = 0LL;
      v107 = 2LL;
      std::sync::mpmc::Sender<T>::send(&v105);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v105), (__m128i)xmmword_1DA70)) != 0xFFFF )
      {
        memcpy(&v63[1], v106, 0x90uLL);
        v63[0] = v105;
        v41 = (void *)alloc::alloc::Global::alloc_impl(1LL, 16LL, 160LL, 0LL);
        v42 = v41;
        if ( !v41 )
          alloc::alloc::handle_alloc_error(16LL, 160LL);
        memcpy(v41, v63, 0xA0uLL);
        a1[2] = v42;
        v7 = a1;
        a1[1] = 0LL;
        *a1 = 2LL;
        goto LABEL_88;
      }
      goto LABEL_13;
    }
    memcpy(v80, v90, sizeof(v80));
    v14 = *(_QWORD *)(a3 + 8);
    if ( !v14 )
      goto LABEL_97;
    if ( (v14 & 7) != 0 )
      goto LABEL_97;
    v15 = *(_QWORD *)(a3 + 16);
    if ( v15 >= 0x24924924924924ALL )
      goto LABEL_97;
    if ( v15 )
    {
      v16 = 56 * v15;
      while ( 1 )
      {
        if ( !*((_QWORD *)&v80[4] + 1) || *(__int64 *)&v80[5] < 0 )
          goto LABEL_97;
        std::sys::os_str::bytes::Slice::to_string_lossy(&v60);
        v17 = v61;
        v18 = v62;
        if ( v60 != 0x8000000000000000LL )
          core::slice::raw::from_raw_parts::precondition_check(v61, 1LL, 1LL, v62);
        v19 = glob::Pattern::matches_from(v14, 1LL, v17, v17 + v18, 0LL, 1LL);
        v21 = v60;
        if ( !v19 )
          break;
        if ( v60 != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(v63, &v60, v20, v60);
          v20 = v63[0].m128i_i64[1];
          if ( v63[0].m128i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v62,
              v63[0].m128i_i64[0],
              v63[0].m128i_i64[1],
              v63[1].m128i_i64[0]);
        }
        std::fs::DirEntry::file_name(&v81, &v55, v20, v21);
        v75 = _mm_loadu_si128(&v81);
        v76.m128i_i64[0] = v82;
        std::sys::os_str::bytes::Buf::into_string(v63, &v75);
        v22 = v63[0].m128i_i64[1];
        v23 = v63[1].m128i_i64[0];
        if ( v63[0].m128i_i64[0] )
        {
          v70 = v63[0].m128i_i64[1];
          v71 = v63[1];
          core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v70, &off_164AF0, &off_164C18);
        }
        if ( !v63[1].m128i_i64[0] || v63[1].m128i_i64[1] < 0 )
          goto LABEL_97;
        if ( !(unsigned __int8)glob::Pattern::matches_from(
                                 v14,
                                 1LL,
                                 v63[1].m128i_i64[0],
                                 v63[1].m128i_i64[0] + v63[1].m128i_i64[1],
                                 0LL,
                                 1LL) )
        {
          v6 = v54;
          if ( v22 )
            _rust_dealloc(v23, v22, 1LL);
          goto LABEL_49;
        }
        if ( v22 )
          _rust_dealloc(v23, v22, 1LL);
        v14 += 56LL;
        v16 -= 56LL;
        if ( !v16 )
          goto LABEL_38;
      }
      v6 = v54;
      if ( v60 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(v63, &v60, v20, v60);
        if ( v63[0].m128i_i64[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            &v62,
            v63[0].m128i_i64[0],
            v63[0].m128i_i64[1],
            v63[1].m128i_i64[0]);
      }
LABEL_49:
      a3 = v59;
      if ( (*(_BYTE *)(v59 + 52) & 1) != 0 )
      {
        if ( !*((_QWORD *)&v80[4] + 1) || *(__int64 *)&v80[5] < 0 )
          goto LABEL_97;
        v73[0] = 1LL;
        v73[1] = *((_QWORD *)&v80[4] + 1);
        v73[2] = *(_QWORD *)&v80[5];
        v74 = 1;
        v69 = v73;
        v72[0] = &v69;
        v72[1] = <&T as core::fmt::Display>::fmt;
        v83[0] = &unk_164C30;
        v83[1] = 2LL;
        v83[4] = 0LL;
        v83[2] = v72;
        v83[3] = 1LL;
        std::io::stdio::_print(v83);
      }
LABEL_73:
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v80[4]);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v64);
      if ( _InterlockedDecrement64(v55) )
        goto LABEL_75;
      goto LABEL_74;
    }
LABEL_38:
    v6 = v54;
    a3 = v59;
    if ( *(_QWORD *)&v80[0] == 1LL )
    {
      v67 = (__m128i)v80[1];
      v68 = *(_QWORD *)&v80[2];
      if ( a5[1].m128i_i64[1] )
      {
        v63[2] = _mm_loadu_si128(a5 + 2);
        memset(v63, 0, 32);
        memset(&v63[3], 0, 24);
        core::hash::sip::Hasher<S>::reset(v63);
        v79 = v63[4].m128i_i64[0];
        v78 = v63[3];
        v77 = v63[2];
        v76 = v63[1];
        v75 = v63[0];
        v63[0] = _mm_load_si128(&v67);
        <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(&v75, v63, 16LL);
        v63[0].m128i_i64[0] = v68;
        <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(&v75, v63, 8LL);
        v24 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(&v75);
        if ( hashbrown::raw::RawTable<T,A>::find(a5, v24, &v67) )
        {
          if ( (*(_BYTE *)(a3 + 51) & 1) != 0 )
          {
            if ( v6[13] == -1LL )
              goto LABEL_105;
            ++v6[13];
          }
          goto LABEL_73;
        }
      }
      hashbrown::map::HashMap<K,V,S,A>::insert();
    }
    if ( (v80[8] & 1) != 0 )
    {
      if ( (*(_BYTE *)(a3 + 50) & 1) != 0 && *(_QWORD *)&v80[0] == 1LL && *v6 == 1LL && *(_QWORD *)&v80[2] != v6[4] )
        goto LABEL_73;
      memcpy(src, v80, sizeof(src));
      if ( a4 == -1 )
        core::panicking::panic_const::panic_const_add_overflow(&off_164BA0);
      uu_du::du(&dest, src, a3, v52, a5, a6);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&dest), (__m128i)xmmword_1D810)) == 0xFFFF )
      {
        v7 = a1;
        a1[2] = v92;
        a1[1] = 0LL;
        *a1 = 2LL;
        goto LABEL_88;
      }
      *((_QWORD *)&v89[8] + 1) = v94;
      *(__m128i *)((char *)&v89[7] + 8) = v93[6];
      *(__m128i *)((char *)&v89[6] + 8) = v93[5];
      *(__m128i *)((char *)&v89[5] + 8) = v93[4];
      v30 = _mm_loadu_si128(v93);
      *(__m128i *)((char *)&v89[4] + 8) = v93[3];
      *(__m128i *)((char *)&v89[3] + 8) = v93[2];
      *(__m128i *)((char *)&v89[2] + 8) = v93[1];
      *(__m128i *)((char *)&v89[1] + 8) = v30;
      v89[0] = dest;
      *(_QWORD *)&v89[1] = v92;
      if ( (*(_BYTE *)(a3 + 49) & 1) == 0 )
      {
        v31 = v6[11];
        v26 = __CFADD__(*((_QWORD *)&v89[5] + 1), v31);
        v32 = *((_QWORD *)&v89[5] + 1) + v31;
        if ( v26 )
          goto LABEL_112;
        v6[11] = v32;
        v33 = v6[12];
        v26 = __CFADD__(*(_QWORD *)&v89[6], v33);
        v34 = *(_QWORD *)&v89[6] + v33;
        if ( v26 )
        {
          v45 = &off_164BD0;
          goto LABEL_111;
        }
        v6[12] = v34;
        v35 = v6[13];
        v26 = __CFADD__(*((_QWORD *)&v89[6] + 1), v35);
        v36 = *((_QWORD *)&v89[6] + 1) + v35;
        if ( v26 )
        {
          v45 = &off_164BE8;
LABEL_111:
          v51 = v45;
LABEL_112:
          core::panicking::panic_const::panic_const_add_overflow(v51);
        }
        v6[13] = v36;
      }
      memcpy(v125, v89, sizeof(v125));
      v126 = v52;
      std::sync::mpmc::Sender<T>::send(&v101);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v101), (__m128i)xmmword_1DA70)) != 0xFFFF )
      {
        memcpy(v118, v102, sizeof(v118));
        v117 = v101;
        v7 = a1;
        <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          a1,
          &v117,
          &off_164C00);
        goto LABEL_88;
      }
      goto LABEL_13;
    }
    v25 = v6[11];
    v26 = __CFADD__(*((_QWORD *)&v80[5] + 1), v25);
    v27 = *((_QWORD *)&v80[5] + 1) + v25;
    if ( v26 )
    {
      v44 = &off_164B28;
      goto LABEL_104;
    }
    v6[11] = v27;
    v28 = v6[12];
    v26 = __CFADD__(*(_QWORD *)&v80[6], v28);
    v29 = *(_QWORD *)&v80[6] + v28;
    if ( v26 )
    {
      v44 = &off_164B40;
      goto LABEL_104;
    }
    v6[12] = v29;
    if ( v6[13] == -1LL )
    {
      v44 = &off_164B58;
LABEL_104:
      v46 = v44;
LABEL_105:
      core::panicking::panic_const::panic_const_add_overflow(v46);
    }
    ++v6[13];
    if ( (*(_BYTE *)(a3 + 48) & 1) == 0 )
    {
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v80[4]);
      goto LABEL_13;
    }
    memcpy(v124, v80, sizeof(v124));
    if ( a4 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(&off_164B70);
    memcpy(v121, v80, sizeof(v121));
    v122 = v52;
    std::sync::mpmc::Sender<T>::send(&v103);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v103), (__m128i)xmmword_1DA70)) != 0xFFFF )
      break;
LABEL_13:
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v64);
    if ( _InterlockedDecrement64(v55) )
      goto LABEL_75;
LABEL_74:
    alloc::sync::Arc<T,A>::drop_slow(&v55);
LABEL_75:
    if ( !v57.m128i_i64[0] )
      goto LABEL_99;
    *v56 = 0;
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v56);
  }
  memcpy(v120, v104, sizeof(v120));
  v119 = v103;
  v7 = a1;
  <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
    a1,
    &v119,
    &off_164B88);
LABEL_88:
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v64);
  if ( !_InterlockedDecrement64(v55) )
    alloc::sync::Arc<T,A>::drop_slow(&v55);
  if ( !v57.m128i_i64[0] )
LABEL_99:
    core::panicking::panic_nounwind(anon_6439b99778f68cb4ecd7011cce46bae8_3_llvm_16942018982332615979, 101LL);
  *v56 = 0;
  <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v56);
LABEL_92:
  if ( !_InterlockedDecrement64(v49) )
    alloc::sync::Arc<T,A>::drop_slow(&v49);
LABEL_94:
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v53);
  return v7;
}
