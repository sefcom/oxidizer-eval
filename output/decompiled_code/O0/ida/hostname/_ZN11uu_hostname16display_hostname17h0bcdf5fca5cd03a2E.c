__int64 __fastcall uu_hostname::display_hostname(__int64 a1)
{
  void *v1; // r14
  __int64 v2; // rbx
  void *v3; // r15
  __int64 result; // rax
  __m128i v5; // xmm0
  const void *v6; // r15
  size_t v7; // r14
  __int64 v8; // r12
  void *v9; // r13
  signed __int64 v10; // rbx
  __int64 v11; // r14
  void *v12; // r15
  _QWORD *v13; // rax
  __m128i *v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rbp
  int v17; // edx
  unsigned __int64 v18; // r15
  __int64 v19; // rdi
  signed __int64 v20; // rsi
  char **v21; // r8
  unsigned __int64 v22; // rdx
  __int64 v23; // rbx
  void *v24; // r14
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rbx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r15
  __int128 v32; // xmm0
  __int64 v33; // rax
  __int32 v34; // ecx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i si128; // xmm1
  unsigned __int64 v38; // rbx
  __m128i v39; // xmm0
  size_t v40; // rbp
  __int64 v41; // r12
  void *v42; // r12
  __int64 v43; // rbp
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  unsigned __int64 v47; // rbx
  size_t v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  size_t v51; // rbx
  __int64 v52; // rcx
  __m128i v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  unsigned __int64 v57; // r15
  _QWORD *v58; // rax
  void **v59; // rdi
  char v60; // [rsp+Fh] [rbp-399h] BYREF
  __m128i v61; // [rsp+10h] [rbp-398h] BYREF
  void *dest[2]; // [rsp+20h] [rbp-388h] BYREF
  __m128i v63; // [rsp+30h] [rbp-378h]
  __int128 v64; // [rsp+40h] [rbp-368h]
  __int64 v65; // [rsp+50h] [rbp-358h]
  __m128d v66; // [rsp+60h] [rbp-348h] BYREF
  size_t v67[2]; // [rsp+70h] [rbp-338h]
  __int128 v68; // [rsp+80h] [rbp-328h] BYREF
  signed __int64 v69; // [rsp+90h] [rbp-318h] BYREF
  __int64 v70; // [rsp+98h] [rbp-310h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-308h]
  __int64 v72; // [rsp+A8h] [rbp-300h] BYREF
  __int128 v73; // [rsp+B0h] [rbp-2F8h] BYREF
  signed __int64 v74; // [rsp+C0h] [rbp-2E8h]
  __int128 v75; // [rsp+D0h] [rbp-2D8h] BYREF
  __int128 v76; // [rsp+E0h] [rbp-2C8h]
  __m128i v77; // [rsp+F0h] [rbp-2B8h] BYREF
  __int128 v78; // [rsp+100h] [rbp-2A8h]
  __m128i v79; // [rsp+110h] [rbp-298h]
  unsigned __int64 v80; // [rsp+128h] [rbp-280h]
  __int128 v81; // [rsp+130h] [rbp-278h] BYREF
  signed __int64 v82; // [rsp+140h] [rbp-268h] BYREF
  unsigned __int64 v83; // [rsp+148h] [rbp-260h] BYREF
  unsigned __int64 v84; // [rsp+150h] [rbp-258h]
  unsigned __int64 v85; // [rsp+158h] [rbp-250h]
  void *v86[2]; // [rsp+160h] [rbp-248h] BYREF
  size_t v87[2]; // [rsp+170h] [rbp-238h] BYREF
  void *src[2]; // [rsp+180h] [rbp-228h] BYREF
  size_t n; // [rsp+190h] [rbp-218h]
  _QWORD v90[2]; // [rsp+198h] [rbp-210h] BYREF
  __int64 v91; // [rsp+1A8h] [rbp-200h] BYREF
  __m256i v92; // [rsp+1B0h] [rbp-1F8h] BYREF
  __m256i v93; // [rsp+1D0h] [rbp-1D8h] BYREF
  __int128 v94; // [rsp+1F0h] [rbp-1B8h]
  __m128i v95; // [rsp+200h] [rbp-1A8h] BYREF
  _QWORD v96[2]; // [rsp+210h] [rbp-198h] BYREF
  _QWORD v97[2]; // [rsp+220h] [rbp-188h] BYREF
  _QWORD v98[2]; // [rsp+230h] [rbp-178h] BYREF
  _QWORD v99[2]; // [rsp+240h] [rbp-168h] BYREF
  _QWORD v100[2]; // [rsp+250h] [rbp-158h] BYREF
  _QWORD v101[2]; // [rsp+260h] [rbp-148h] BYREF
  _QWORD v102[2]; // [rsp+270h] [rbp-138h] BYREF
  __int64 v103; // [rsp+280h] [rbp-128h] BYREF
  __int64 v104; // [rsp+288h] [rbp-120h]
  __int64 v105; // [rsp+290h] [rbp-118h]
  _OWORD v106[2]; // [rsp+298h] [rbp-110h] BYREF
  _QWORD v107[6]; // [rsp+2B8h] [rbp-F0h] BYREF
  _QWORD v108[6]; // [rsp+2E8h] [rbp-C0h] BYREF
  void *v109; // [rsp+318h] [rbp-90h] BYREF
  void *v110; // [rsp+348h] [rbp-60h] BYREF

  hostname::nix::get(&v103);
  v1 = (void *)v104;
  if ( v103 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v66.m128d_f64[0] = v104;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v61, 22LL, 0LL);
    v2 = v61.m128i_i64[1];
    if ( v61.m128i_i64[0] )
      alloc::raw_vec::handle_error(v61.m128i_i64[1], dest[0]);
    v3 = dest[0];
    core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1EEEE, dest[0], 1LL, 1LL, 22LL);
    qmemcpy(v3, "failed to get hostname", 22);
    v61.m128i_i64[0] = v2;
    v61.m128i_i64[1] = (__int64)v3;
    dest[0] = &dword_14 + 2;
    dest[1] = v1;
    result = _rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v5 = v61;
    *(__m128i *)(result + 16) = _mm_loadu_si128((const __m128i *)dest);
    *(__m128i *)result = v5;
    return result;
  }
  v90[0] = v103;
  v90[1] = v104;
  v91 = v105;
  if ( !v104 || v105 < 0 )
    goto LABEL_110;
  std::sys::os_str::bytes::Slice::to_string_lossy(src, v104);
  if ( src[0] == (void *)0x8000000000000000LL )
  {
    v6 = src[1];
    v7 = n;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v61, n, 0LL);
    v8 = v61.m128i_i64[1];
    if ( v61.m128i_i64[0] )
      alloc::raw_vec::handle_error(v61.m128i_i64[1], dest[0]);
    v9 = dest[0];
    core::intrinsics::copy_nonoverlapping::precondition_check(v6, dest[0], 1LL, 1LL, v7);
    memcpy(v9, v6, v7);
    *(_QWORD *)&v68 = v8;
    *((_QWORD *)&v68 + 1) = v9;
    v69 = v7;
  }
  else
  {
    v69 = n;
    v68 = *(_OWORD *)src;
  }
  alloc::raw_vec::RawVec<T,A>::current_memory(&v61, v90);
  if ( v61.m128i_i64[1] )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v91, v61.m128i_i64[0], v61.m128i_i64[1], dest[0]);
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a1,
                           aIpAddress,
                           10LL,
                           &off_1073C0) )
  {
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a1,
                             aShort,
                             5LL,
                             &off_1073D8)
      && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a1,
                             aDomain,
                             6LL,
                             &off_1073F0) )
    {
LABEL_40:
      v102[0] = &v68;
      v102[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v108[0] = &unk_107420;
      v108[1] = 2LL;
      v108[4] = 0LL;
      v108[2] = v102;
      v108[3] = 1LL;
      std::io::stdio::_print(v108);
      goto LABEL_104;
    }
    v15 = *((_QWORD *)&v68 + 1);
    if ( !*((_QWORD *)&v68 + 1) || v69 < 0 )
      goto LABEL_110;
    v16 = *((_QWORD *)&v68 + 1) + v69;
    v83 = *((_QWORD *)&v68 + 1);
    v84 = *((_QWORD *)&v68 + 1) + v69;
    v85 = 0LL;
    do
    {
      if ( v16 < v15 )
        goto LABEL_108;
      if ( !(unsigned int)core::str::validations::next_code_point(&v83) )
        goto LABEL_40;
      if ( (v17 ^ 0xD800u) - 2048 >= 0x10F800 )
        core::panicking::panic_nounwind(aUnsafePrecondi_10, 57LL);
      if ( v84 < v83 )
        goto LABEL_108;
      v18 = v85;
      v85 += v83 + v16 - (v84 + v15);
      if ( v17 == 1114112 )
        goto LABEL_40;
      v15 = v83;
      v16 = v84;
    }
    while ( v17 != 46 );
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aShort, 5LL, &off_107408) )
    {
      v19 = *((_QWORD *)&v68 + 1);
      if ( !*((_QWORD *)&v68 + 1) )
        goto LABEL_110;
      v20 = v69;
      if ( v69 < 0 )
        goto LABEL_110;
      if ( v18 )
      {
        if ( v69 <= v18 )
        {
          if ( v69 != v18 )
            goto LABEL_39;
        }
        else if ( *(char *)(*((_QWORD *)&v68 + 1) + v18) < -64 )
        {
LABEL_39:
          v21 = &off_107470;
          v22 = 0LL;
          goto LABEL_96;
        }
      }
      if ( v69 >= v18 )
      {
        v99[0] = *((_QWORD *)&v68 + 1);
        v99[1] = v18;
        v98[0] = v99;
        v98[1] = <&T as core::fmt::Display>::fmt;
        v109 = &unk_107420;
        v58 = v98;
        v59 = &v109;
        goto LABEL_103;
      }
      goto LABEL_120;
    }
    v57 = v18 + 1;
    if ( !v57 )
      core::panicking::panic_const::panic_const_add_overflow(&off_107440);
    v19 = *((_QWORD *)&v68 + 1);
    if ( !*((_QWORD *)&v68 + 1) )
      goto LABEL_110;
    v20 = v69;
    if ( v69 < 0 )
      goto LABEL_110;
    if ( v69 <= v57 )
    {
      if ( v69 != v57 )
        goto LABEL_95;
    }
    else if ( *(char *)(*((_QWORD *)&v68 + 1) + v57) < -64 )
    {
LABEL_95:
      v21 = &off_107458;
      v22 = v57;
      v18 = v69;
LABEL_96:
      core::str::slice_error_fail(v19, v20, v22, v18, v21);
    }
    if ( v69 >= v57 )
    {
      v101[0] = v57 + *((_QWORD *)&v68 + 1);
      v101[1] = v69 - v57;
      v100[0] = v101;
      v100[1] = <&T as core::fmt::Display>::fmt;
      v110 = &unk_107420;
      v58 = v100;
      v59 = &v110;
LABEL_103:
      v59[1] = &dword_0 + 2;
      v59[4] = 0LL;
      v59[2] = v58;
      v59[3] = &dword_0 + 1;
      std::io::stdio::_print(v59);
LABEL_104:
      alloc::raw_vec::RawVec<T,A>::current_memory(&v61, &v68);
      if ( v61.m128i_i64[1] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v69, v61.m128i_i64[0], v61.m128i_i64[1], dest[0]);
      return 0LL;
    }
LABEL_120:
    core::panicking::panic_nounwind(aUnsafePrecondi_9, 102LL);
  }
  v73 = v68;
  v10 = v69;
  v74 = v69;
  if ( (unsigned __int64)(v68 - v69) <= 1 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v73, v69, 2LL);
    v10 = v74;
  }
  v11 = *((_QWORD *)&v73 + 1);
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1EEEC, *((_QWORD *)&v73 + 1) + v10, 1LL, 1LL, 2LL);
  *(_WORD *)(v11 + v10) = 12602;
  v74 += 2LL;
  v81 = v73;
  v82 = v74;
  <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(v106, &v81);
  v12 = (void *)*((_QWORD *)&v106[0] + 1);
  if ( *(_QWORD *)&v106[0] )
  {
    v94 = v106[0];
    v95 = (__m128i)v106[1];
    alloc::raw_vec::RawVec<T,A>::current_memory(&v61, &v81);
    if ( v61.m128i_i64[1] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v82, v61.m128i_i64[0], v61.m128i_i64[1], dest[0]);
    v13 = (_QWORD *)(__readfsqword(0) - 48);
    if ( *v13 )
    {
      if ( *v13 == 1LL )
      {
        v14 = (__m128i *)(v13 + 1);
        goto LABEL_47;
      }
    }
    else
    {
      v14 = (__m128i *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 48, 0LL);
      if ( v14 )
      {
LABEL_47:
        v28 = *v14;
        ++v14->m128i_i64[0];
        v76 = xmmword_1073A0;
        v75 = *(_OWORD *)&off_107390;
        v77 = v28;
        v70 = 0LL;
        v71 = 1LL;
        v72 = 0LL;
        v29 = _mm_loadu_si128(&v95);
        v78 = v94;
        v79 = v29;
        v80 = v29.m128i_u64[1];
        if ( *((_QWORD *)&v94 + 1) != v29.m128i_i64[1] )
        {
          v30 = *((_QWORD *)&v94 + 1) + 32LL;
          while ( *(_WORD *)(v30 - 32) != 2 )
          {
            v31 = v30 - 32;
            v92.m256i_i16[0] = *(_WORD *)(v30 - 32);
            v32 = *(_OWORD *)(v30 - 32 + 2);
            v33 = *(_QWORD *)(v30 - 32 + 18);
            v34 = *(_DWORD *)(v30 - 32 + 26);
            v92.m256i_i16[15] = *(_WORD *)(v30 - 32 + 30);
            *(__int32 *)((char *)&v92.m256i_i32[6] + 2) = v34;
            *(__int64 *)((char *)&v92.m256i_i64[2] + 2) = v33;
            *(_OWORD *)&v92.m256i_i16[1] = v32;
            if ( !*((_QWORD *)&v76 + 1) )
              goto LABEL_53;
            v35 = _mm_load_si128(&v77);
            v61 = _mm_xor_si128(_mm_shuffle_epi32(v35, 68), (__m128i)xmmword_157E0);
            *(__m128i *)dest = _mm_xor_si128(_mm_shuffle_epi32(v35, 238), (__m128i)xmmword_15730);
            v63 = v35;
            v64 = 0LL;
            v65 = 0LL;
            <core::net::socket_addr::SocketAddr as core::hash::Hash>::hash(&v92, &v61);
            v36 = _mm_load_si128(&v61);
            si128 = _mm_load_si128((const __m128i *)dest);
            v67[0] = si128.m128i_i64[0];
            v38 = *((_QWORD *)&v64 + 1) | ((_QWORD)v64 << 56);
            v66 = (__m128d)v36;
            v67[1] = v38 ^ si128.m128i_i64[1];
            <core::hash::sip::Sip13Rounds as core::hash::sip::Sip>::c_rounds(&v66);
            v66 = _mm_xor_pd(_mm_shuffle_pd((__m128d)v38, unk_158E0, 2), v66);
            <core::hash::sip::Sip13Rounds as core::hash::sip::Sip>::d_rounds(&v66);
            if ( !hashbrown::raw::RawTable<T,A>::find(
                    &v75,
                    v67[1] ^ *(_QWORD *)&v66.m128d_f64[1] ^ *(_QWORD *)&v66.m128d_f64[0] ^ v67[0],
                    &v92) )
            {
LABEL_53:
              v66.m128d_f64[0] = 0.0;
              *(_QWORD *)&v66.m128d_f64[1] = 1LL;
              v67[0] = 0LL;
              *(_QWORD *)&v64 = 32LL;
              BYTE8(v64) = 3;
              v61.m128i_i64[0] = 0LL;
              dest[0] = 0LL;
              v63.m128i_i64[0] = (__int64)&v66;
              v63.m128i_i64[1] = (__int64)&off_1072C8;
              if ( (unsigned __int8)<core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt(&v92, &v61) )
              {
                *((_QWORD *)&v78 + 1) = v30;
                core::result::unwrap_failed(
                  aADisplayImplem_0,
                  55LL,
                  &v60,
                  &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                  &off_1072F8);
              }
              v39 = _mm_loadu_si128((const __m128i *)&v66);
              *(__m128i *)v86 = v39;
              v40 = v67[0];
              v87[0] = v67[0];
              if ( !v39.m128i_i64[1] || (v67[0] & 0x8000000000000000LL) != 0LL )
                goto LABEL_110;
              if ( v67[0] >= 2 && *(_WORD *)(v39.m128i_i64[1] + v67[0] - 2) == 12602 )
              {
                v40 = v67[0] - 2;
                if ( v67[0] != 2 && *(char *)(v39.m128i_i64[1] + v40) <= -65 )
                {
                  *((_QWORD *)&v78 + 1) = v30;
                  core::panicking::panic(aAssertionFaile_5, 48LL, &off_107338);
                }
                v87[0] = v67[0] - 2;
              }
              v41 = v72;
              if ( v70 - v72 < v40 )
              {
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v70, v72, v40);
                v41 = v72;
              }
              v42 = (void *)(v71 + v41);
              core::intrinsics::copy_nonoverlapping::precondition_check(v39.m128i_i64[1], v42, 1LL, 1LL, v40);
              memcpy(v42, (const void *)v39.m128i_i64[1], v40);
              v43 = v72 + v40;
              v72 = v43;
              if ( v43 == v70 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v70);
              *(_BYTE *)(v71 + v43) = 32;
              v72 = v43 + 1;
              v93 = v92;
              v44 = _mm_load_si128(&v77);
              v61 = _mm_xor_si128(_mm_shuffle_epi32(v44, 68), (__m128i)xmmword_157E0);
              *(__m128i *)dest = _mm_xor_si128(_mm_shuffle_epi32(v44, 238), (__m128i)xmmword_15730);
              v63 = v44;
              v64 = 0LL;
              v65 = 0LL;
              <core::net::socket_addr::SocketAddr as core::hash::Hash>::hash(&v93, &v61);
              v45 = _mm_load_si128(&v61);
              v46 = _mm_load_si128((const __m128i *)dest);
              v67[0] = v46.m128i_i64[0];
              v47 = *((_QWORD *)&v64 + 1) | ((_QWORD)v64 << 56);
              v66 = (__m128d)v45;
              v67[1] = v47 ^ v46.m128i_i64[1];
              <core::hash::sip::Sip13Rounds as core::hash::sip::Sip>::c_rounds(&v66);
              v66 = _mm_xor_pd(_mm_shuffle_pd((__m128d)v47, unk_158E0, 2), v66);
              <core::hash::sip::Sip13Rounds as core::hash::sip::Sip>::d_rounds(&v66);
              v48 = v67[1] ^ *(_QWORD *)&v66.m128d_f64[1] ^ *(_QWORD *)&v66.m128d_f64[0] ^ v67[0];
              *(_QWORD *)&v66.m128d_f64[0] = &v93;
              if ( !(_QWORD)v76 )
                hashbrown::raw::RawTable<T,A>::reserve_rehash(&v75, 1LL, &v77, 1LL);
              v61.m128i_i64[0] = (__int64)&v66;
              v61.m128i_i64[1] = (__int64)&v75;
              if ( hashbrown::raw::RawTableInner::find_or_find_insert_slot_inner(
                     &v75,
                     v48,
                     &v61,
                     &anon_c66a6b7535d19be649d86e5cd4159176_5_llvm_17844366636954295229) )
              {
                v61 = *(__m128i *)v93.m256i_i8;
                *(_OWORD *)dest = *(_OWORD *)&v93.m256i_u64[2];
                *(_QWORD *)&v76 = v76 - (*(_BYTE *)(v75 + v49) & 1);
                v50 = *((_QWORD *)&v75 + 1) & (v49 - 16);
                v51 = v48 >> 57;
                *(_BYTE *)(v75 + v49) = v51;
                *(_BYTE *)(v75 + v50 + 16) = v51;
                ++*((_QWORD *)&v76 + 1);
                v52 = v75 - 32 * v49;
                v53 = v61;
                *(__m128i *)(v52 - 16) = _mm_load_si128((const __m128i *)dest);
                *(__m128i *)(v52 - 32) = v53;
              }
              alloc::raw_vec::RawVec<T,A>::current_memory(&v61, v86);
              if ( v61.m128i_i64[1] )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                  v87,
                  v61.m128i_i64[0],
                  v61.m128i_i64[1],
                  dest[0]);
            }
            v30 += 32LL;
            if ( v31 + 32 == v80 )
              goto LABEL_72;
          }
          if ( v80 < v30 )
LABEL_108:
            core::panicking::panic_nounwind(aUnsafePrecondi_8, 71LL);
        }
LABEL_72:
        if ( v79.m128i_i64[0] )
        {
          if ( (unsigned __int64)v79.m128i_i64[0] >> 59 )
            core::panicking::panic_nounwind(aUnsafePrecondi_6, 69LL);
          v54 = 32 * v79.m128i_i64[0];
          v61.m128i_i64[0] = v78;
          v61.m128i_i64[1] = 4LL;
          v55 = 2LL;
        }
        else
        {
          v55 = 1LL;
          v54 = 0LL;
        }
        v61.m128i_i64[v55] = v54;
        if ( v61.m128i_i64[1] && dest[0] )
          _rust_dealloc(v61.m128i_i64[0]);
        if ( !v72 )
          goto LABEL_85;
        if ( v72 >= 0 && v71 )
        {
          v56 = v72 - 1;
          if ( v72 != 1 && *(char *)(v71 + v56) <= -65 )
            core::str::slice_error_fail(v71, v72, 0LL, v56, &off_107488);
          v97[0] = v71;
          v97[1] = v72 - 1;
          v96[0] = v97;
          v96[1] = <&T as core::fmt::Display>::fmt;
          v107[0] = &unk_107420;
          v107[1] = 2LL;
          v107[4] = 0LL;
          v107[2] = v96;
          v107[3] = 1LL;
          std::io::stdio::_print(v107);
LABEL_85:
          alloc::raw_vec::RawVec<T,A>::current_memory(&v61, &v70);
          if ( v61.m128i_i64[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              &v72,
              v61.m128i_i64[0],
              v61.m128i_i64[1],
              dest[0]);
          if ( *((_QWORD *)&v75 + 1) )
          {
            hashbrown::raw::TableLayout::calculate_layout_for(&v61, 32LL, 16LL, *((_QWORD *)&v75 + 1) + 1LL);
            if ( v61.m128i_i64[1] )
              _rust_dealloc(v75 - (unsigned __int64)dest[0]);
          }
          return 0LL;
        }
LABEL_110:
        core::panicking::panic_nounwind(aUnsafePrecondi_11, 162LL);
      }
    }
    core::result::unwrap_failed(
      anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
      70LL,
      &v60,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
  }
  v66.m128d_f64[0] = *((double *)v106 + 1);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v61, 34LL, 0LL);
  v23 = v61.m128i_i64[1];
  if ( v61.m128i_i64[0] )
    alloc::raw_vec::handle_error(v61.m128i_i64[1], dest[0]);
  v24 = dest[0];
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1EF04, dest[0], 1LL, 1LL, 34LL);
  qmemcpy(v24, "failed to resolve socket addresses", 34);
  v61.m128i_i64[0] = v23;
  v61.m128i_i64[1] = (__int64)v24;
  dest[0] = &qword_20 + 2;
  dest[1] = v12;
  v25 = _rust_alloc(32LL, 8LL);
  if ( !v25 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v26 = v61;
  *(__m128i *)(v25 + 16) = _mm_loadu_si128((const __m128i *)dest);
  v27 = v25;
  *(__m128i *)v25 = v26;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v61, &v81);
  if ( v61.m128i_i64[1] )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v82, v61.m128i_i64[0], v61.m128i_i64[1], dest[0]);
  return v27;
}
