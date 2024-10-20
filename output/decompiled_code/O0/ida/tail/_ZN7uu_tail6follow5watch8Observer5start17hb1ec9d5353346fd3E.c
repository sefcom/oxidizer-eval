_OWORD *__fastcall uu_tail::follow::watch::Observer::start(__m128i *a1, __int64 a2)
{
  __m128i v2; // kr00_16
  __m128i v3; // xmm0
  __int64 v4; // r13
  int v5; // ebp
  bool v6; // zf
  bool v7; // of
  __int64 v8; // rt0
  __m128i *v9; // rax
  __m128i *v10; // rax
  __int64 v11; // r12
  __int64 (__fastcall **v12)(); // rbp
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // kr10_16
  __m128i *v17; // r13
  _OWORD *v18; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rcx
  __m128i v26; // xmm0
  const void *v27; // r12
  signed __int64 v28; // r14
  __int64 v29; // r15
  void *v30; // rbp
  char is_absolute; // al
  __int64 *v32; // r15
  char is_tailable; // al
  bool v34; // cl
  _OWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  __int64 v42; // r14
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rt0
  __int64 v48; // rax
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __int64 v51; // rax
  __int64 v52; // r15
  __int64 v53; // r12
  __m128i v54; // xmm0
  __int64 v55; // rax
  __m128i v56; // xmm0
  __m128i v57; // xmm0
  __m128i v58; // xmm1
  __m128i v59; // xmm0
  __m128i v60; // xmm1
  __int64 v61; // [rsp+8h] [rbp-4A0h]
  __m128i v62; // [rsp+10h] [rbp-498h] BYREF
  void *dest[2]; // [rsp+20h] [rbp-488h] BYREF
  __m128i v64; // [rsp+30h] [rbp-478h]
  __int64 v65; // [rsp+40h] [rbp-468h]
  char v66; // [rsp+48h] [rbp-460h]
  __m128i v67; // [rsp+50h] [rbp-458h] BYREF
  _QWORD v68[2]; // [rsp+60h] [rbp-448h] BYREF
  __m128i v69; // [rsp+70h] [rbp-438h] BYREF
  __int64 v70; // [rsp+80h] [rbp-428h]
  __m128i *v71; // [rsp+90h] [rbp-418h]
  __m128i v72; // [rsp+98h] [rbp-410h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-400h]
  __int64 (__fastcall **v74)(); // [rsp+B0h] [rbp-3F8h]
  __int64 v75; // [rsp+B8h] [rbp-3F0h]
  __m128i v76; // [rsp+C0h] [rbp-3E8h] BYREF
  __m128i v77; // [rsp+D0h] [rbp-3D8h] BYREF
  __m128i v78[2]; // [rsp+E0h] [rbp-3C8h] BYREF
  __int64 v79; // [rsp+100h] [rbp-3A8h]
  __m128i v80; // [rsp+110h] [rbp-398h] BYREF
  __int64 v81; // [rsp+120h] [rbp-388h] BYREF
  __m128i v82; // [rsp+128h] [rbp-380h] BYREF
  __m128i v83; // [rsp+138h] [rbp-370h] BYREF
  __int128 v84; // [rsp+148h] [rbp-360h]
  __int64 v85; // [rsp+158h] [rbp-350h]
  __m128i *v86; // [rsp+160h] [rbp-348h]
  _QWORD v87[2]; // [rsp+168h] [rbp-340h] BYREF
  __int64 v88; // [rsp+178h] [rbp-330h] BYREF
  __m128i v89; // [rsp+180h] [rbp-328h] BYREF
  __int64 v90; // [rsp+190h] [rbp-318h]
  __m128i v91; // [rsp+1A0h] [rbp-308h] BYREF
  __int64 v92; // [rsp+1B0h] [rbp-2F8h]
  __m128i v93; // [rsp+1C0h] [rbp-2E8h]
  _QWORD v94[2]; // [rsp+1D0h] [rbp-2D8h] BYREF
  _QWORD v95[2]; // [rsp+1E0h] [rbp-2C8h] BYREF
  _QWORD v96[2]; // [rsp+1F0h] [rbp-2B8h] BYREF
  __m128i v97; // [rsp+200h] [rbp-2A8h] BYREF
  __m128i v98; // [rsp+210h] [rbp-298h] BYREF
  __int64 v99; // [rsp+220h] [rbp-288h]
  __m128i v100; // [rsp+230h] [rbp-278h] BYREF
  __m128i v101; // [rsp+240h] [rbp-268h] BYREF
  __int64 v102; // [rsp+250h] [rbp-258h]
  __int64 v103; // [rsp+258h] [rbp-250h] BYREF
  int v104; // [rsp+260h] [rbp-248h]
  char v105; // [rsp+268h] [rbp-240h]
  __int64 v106; // [rsp+270h] [rbp-238h] BYREF
  int v107; // [rsp+278h] [rbp-230h]
  char v108; // [rsp+280h] [rbp-228h]
  __int64 v109; // [rsp+288h] [rbp-220h] BYREF
  void *v110; // [rsp+290h] [rbp-218h]
  __int64 v111; // [rsp+298h] [rbp-210h]
  __m128i v112; // [rsp+2A0h] [rbp-208h] BYREF
  __m128i v113; // [rsp+2B0h] [rbp-1F8h] BYREF
  __int128 v114; // [rsp+2C0h] [rbp-1E8h]
  __int64 v115; // [rsp+2D0h] [rbp-1D8h]
  __m128i v116; // [rsp+2D8h] [rbp-1D0h] BYREF
  __m128i v117; // [rsp+2E8h] [rbp-1C0h] BYREF
  __int128 v118; // [rsp+2F8h] [rbp-1B0h]
  __int64 v119; // [rsp+308h] [rbp-1A0h]
  _OWORD v120[3]; // [rsp+310h] [rbp-198h] BYREF
  __int64 v121; // [rsp+340h] [rbp-168h]
  _QWORD v122[6]; // [rsp+348h] [rbp-160h] BYREF
  _QWORD v123[6]; // [rsp+378h] [rbp-130h] BYREF
  __m128i v124; // [rsp+3A8h] [rbp-100h] BYREF
  __int64 v125; // [rsp+3B8h] [rbp-F0h]
  _OWORD v126[3]; // [rsp+3C0h] [rbp-E8h] BYREF
  __int64 v127; // [rsp+3F0h] [rbp-B8h]
  _OWORD v128[3]; // [rsp+400h] [rbp-A8h] BYREF
  __int64 v129; // [rsp+430h] [rbp-78h]
  _OWORD v130[3]; // [rsp+440h] [rbp-68h] BYREF
  __int64 v131; // [rsp+470h] [rbp-38h]

  if ( *(_BYTE *)(a2 + 76) == 2 )
    return 0LL;
  std::sync::mpmc::channel(&v62);
  v2 = v62;
  v3 = _mm_loadu_si128((const __m128i *)dest);
  v93 = v62;
  v76 = v3;
  v4 = *(_QWORD *)(a2 + 48);
  v5 = *(_DWORD *)(a2 + 56);
  v6 = (a1[8].m128i_i8[13] & 1) == 0;
  v71 = a1;
  if ( !v6 )
  {
    a1[8].m128i_i8[13] = 1;
    v106 = v4;
    v107 = v5;
    v108 = 1;
    notify::poll::PollWatcher::new(&v112, v2.m128i_i64[0], v2.m128i_i64[1], &v106);
    if ( v112.m128i_i64[0] != 6 )
    {
      v129 = v115;
      v57 = _mm_loadu_si128(&v112);
      v58 = _mm_loadu_si128(&v113);
      v128[2] = v114;
      v128[1] = v58;
      v128[0] = v57;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, v128, &off_189720, &off_189838);
    }
    v99 = *((_QWORD *)&v114 + 1);
    v13 = _mm_loadu_si128((const __m128i *)&v112.m128i_u64[1]);
    v98 = _mm_loadu_si128((const __m128i *)&v113.m128i_u64[1]);
    v97 = v13;
    v14 = _rust_alloc(40LL, 8LL);
    if ( !v14 )
      alloc::alloc::handle_alloc_error(8LL, 40LL);
    v11 = v14;
    *(_QWORD *)(v14 + 32) = v99;
    v15 = _mm_load_si128(&v97);
    *(__m128i *)(v14 + 16) = _mm_load_si128(&v98);
    *(__m128i *)v14 = v15;
    v73 = v14;
    v12 = &off_189808;
    v74 = &off_189808;
LABEL_15:
    v16 = v76;
    v17 = v71;
    if ( v71->m128i_i64[0] != 3 )
      core::ptr::drop_in_place<uu_tail::follow::watch::WatcherRx>(v71);
    *v17 = v16;
    v17[1].m128i_i64[0] = v11;
    v17[1].m128i_i64[1] = (__int64)v12;
    if ( v16.m128i_i64[0] == 3 )
      return 0LL;
    v61 = *(_QWORD *)(a2 + 32);
    if ( v61 )
    {
      if ( (v61 & 7) == 0 )
      {
        v20 = *(_QWORD *)(a2 + 40);
        if ( v20 < 0x2AAAAAAAAAAAAABLL )
        {
          v86 = v17 + 2;
          v21 = 48 * v20;
          v22 = 0LL;
          v23 = v61;
          v75 = 48 * v20;
          while ( 1 )
          {
            if ( v21 == v22 )
              return 0LL;
            if ( *(_QWORD *)(v23 + 24) != 0x8000000000000000LL )
              break;
LABEL_26:
            v23 += 48LL;
            v22 += 48LL;
          }
          v27 = *(const void **)(v61 + v22 + 32);
          v28 = *(_QWORD *)(v61 + v22 + 40);
          core::slice::raw::from_raw_parts::precondition_check(v27, 1LL, 1LL, v28);
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v62, v28, 0LL);
          v29 = v62.m128i_i64[1];
          if ( v62.m128i_i64[0] )
            alloc::raw_vec::handle_error(v62.m128i_i64[1], dest[0]);
          v30 = dest[0];
          core::intrinsics::copy_nonoverlapping::precondition_check(v27, dest[0], 1LL, 1LL, v28);
          memcpy(v30, v27, v28);
          v67.m128i_i64[0] = v29;
          v67.m128i_i64[1] = (__int64)v30;
          v68[0] = v28;
          if ( !v30 || v28 < 0 )
            goto LABEL_91;
          is_absolute = std::path::Path::is_absolute(v30);
          v32 = (__int64 *)v71;
          if ( !is_absolute )
          {
            std::env::current_dir(&v109, v28);
            if ( v109 == 0x8000000000000000LL )
            {
              v62.m128i_i64[0] = 0x8000000000000000LL;
              dest[1] = v110;
              v48 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
              v18 = (_OWORD *)v48;
              if ( !v48 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v49 = _mm_loadu_si128(&v62);
              *(__m128i *)(v48 + 16) = _mm_loadu_si128((const __m128i *)dest);
              *(__m128i *)v48 = v49;
LABEL_84:
              alloc::raw_vec::RawVec<T,A>::current_memory(&v62, &v67);
              if ( v62.m128i_i64[1] )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                  v68,
                  v62.m128i_i64[0],
                  v62.m128i_i64[1],
                  dest[0]);
              return v18;
            }
            v87[0] = v109;
            v87[1] = v110;
            v88 = v111;
            if ( !v110 || v111 < 0 )
              goto LABEL_91;
            v92 = v68[0];
            v91 = _mm_loadu_si128(&v67);
            std::path::Path::join(&v124, v110, v111, &v91);
            v68[0] = v125;
            v67 = _mm_loadu_si128(&v124);
            alloc::raw_vec::RawVec<T,A>::current_memory(&v62, v87);
            if ( v62.m128i_i64[1] )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                &v88,
                v62.m128i_i64[0],
                v62.m128i_i64[1],
                dest[0]);
          }
          if ( !v67.m128i_i64[1] || v68[0] < 0LL )
            goto LABEL_91;
          is_tailable = uu_tail::paths::path_is_tailable();
          v34 = v67.m128i_i64[1] == 0 || v68[0] < 0;
          if ( is_tailable )
          {
            if ( v34 )
              goto LABEL_91;
            v35 = uu_tail::follow::watch::WatcherRx::watch_with_parent((__int64)v32);
          }
          else
          {
            if ( v34 )
              goto LABEL_91;
            v36 = std::path::Path::parent(v67.m128i_i64[1], v68[0]);
            if ( !v36 || !(unsigned __int8)std::path::Path::is_dir(v36, v37) )
            {
              v70 = v68[0];
              v69 = _mm_load_si128(&v67);
              v42 = v32[6];
              if ( v42 == v32[4] )
                alloc::raw_vec::RawVec<T,A>::grow_one(v86);
              v24 = v32[5];
              v25 = 3 * v42;
              v26 = _mm_load_si128(&v69);
              *(_QWORD *)(v24 + 8 * v25 + 16) = v70;
              *(__m128i *)(v24 + 8 * v25) = v26;
              v32[6] = v42 + 1;
              goto LABEL_25;
            }
            if ( !v67.m128i_i64[1] || v68[0] < 0LL )
              goto LABEL_91;
            v38 = std::path::Path::parent(v67.m128i_i64[1], v68[0]);
            if ( !v38 )
              core::option::unwrap_failed(&off_189850);
            (*(void (__fastcall **)(__m128i *, __int64, __int64, __int64, __int64))(v32[3] + 24))(
              &v77,
              v32[2],
              v38,
              v39,
              1LL);
            if ( v77.m128i_i64[0] == 6 )
            {
LABEL_44:
              alloc::raw_vec::RawVec<T,A>::current_memory(&v62, &v67);
              if ( v62.m128i_i64[1] )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                  v68,
                  v62.m128i_i64[0],
                  v62.m128i_i64[1],
                  dest[0]);
LABEL_25:
              v21 = v75;
              goto LABEL_26;
            }
            v65 = v79;
            v40 = _mm_loadu_si128(&v77);
            v41 = _mm_loadu_si128(v78);
            v64 = v78[1];
            *(__m128i *)dest = v41;
            v62 = v40;
            v35 = uu_tail::follow::watch::WatcherRx::watch::{{closure}}((__int64)&v62);
          }
          v18 = v35;
          if ( v35 )
            goto LABEL_84;
          goto LABEL_44;
        }
      }
    }
LABEL_91:
    core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
  }
  if ( v62.m128i_i64[0] )
  {
    v7 = __OFSUB__(v62.m128i_i64[0], 1LL);
    if ( v62.m128i_i64[0] == 1 )
    {
      v8 = _InterlockedIncrement64((volatile signed __int64 *)(v62.m128i_i64[1] + 384));
      if ( !((v8 < 0) ^ v7 | (v8 == 0)) )
        goto LABEL_6;
LABEL_69:
      std::process::abort();
    }
    v47 = _InterlockedIncrement64((volatile signed __int64 *)(v62.m128i_i64[1] + 112));
    if ( (v47 < 0) ^ __OFSUB__(v2.m128i_i64[0], 1LL) | (v47 == 0) )
      goto LABEL_69;
  }
  else if ( _InterlockedIncrement64((volatile signed __int64 *)(v62.m128i_i64[1] + 512)) <= 0 )
  {
    goto LABEL_69;
  }
LABEL_6:
  v72 = v2;
  v62 = v2;
  v9 = (__m128i *)_rust_alloc(16LL, 8LL);
  if ( !v9 )
    alloc::alloc::handle_alloc_error(8LL, 16LL);
  *v9 = v2;
  notify::inotify::INotifyWatcher::from_event_handler(
    &v82,
    v9,
    &anon_2156c5d2a3a0485dea09dc961889c187_27_llvm_12173439086256078282);
  if ( v82.m128i_i64[0] == 6 )
  {
    v90 = v83.m128i_i64[1];
    v89 = _mm_loadu_si128((const __m128i *)&v82.m128i_u64[1]);
    v10 = (__m128i *)_rust_alloc(24LL, 8LL);
    if ( !v10 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v11 = (__int64)v10;
    v10[1].m128i_i64[0] = v90;
    *v10 = _mm_load_si128(&v89);
    v73 = (__int64)v10;
    v12 = &off_189770;
    v74 = &off_189770;
    if ( v72.m128i_i64[0] )
    {
      if ( v72.m128i_i64[0] == 1 )
        std::sync::mpmc::counter::Sender<C>::release(&v72.m128i_u64[1]);
      else
        std::sync::mpmc::counter::Sender<C>::release(&v72.m128i_u64[1]);
    }
    else
    {
      std::sync::mpmc::counter::Sender<C>::release(&v72.m128i_u64[1]);
    }
    goto LABEL_15;
  }
  v77.m128i_i64[0] = 0LL;
  v77.m128i_i64[1] = 1LL;
  v78[0].m128i_i64[0] = 0LL;
  v65 = 32LL;
  v66 = 3;
  v62.m128i_i64[0] = 0LL;
  dest[0] = 0LL;
  v64.m128i_i64[0] = (__int64)&v77;
  v64.m128i_i64[1] = (__int64)&anon_05a4d4ca64bdea474ebd4b0eb3197a7a_7_llvm_11384070901547909942;
  if ( (unsigned __int8)<notify::error::Error as core::fmt::Display>::fmt(&v82, &v62) )
    core::result::unwrap_failed(
      anon_05a4d4ca64bdea474ebd4b0eb3197a7a_9_llvm_11384070901547909942,
      55LL,
      &v91,
      &anon_20ef18d13cf93ce582f7d0f9a5fb04d7_13_llvm_2907708705472026727,
      &anon_05a4d4ca64bdea474ebd4b0eb3197a7a_11_llvm_11384070901547909942);
  v43 = _mm_loadu_si128(&v77);
  v80 = v43;
  v81 = v78[0].m128i_i64[0];
  if ( !v43.m128i_i64[1] || v78[0].m128i_i64[0] < 0 )
    goto LABEL_91;
  if ( v78[0].m128i_i64[0] >= 0x13uLL
    && _mm_movemask_epi8(
         _mm_and_si128(
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v43.m128i_i64[1]), (__m128i)xmmword_21DC0),
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v43.m128i_i64[1] + 3)), (__m128i)xmmword_21EF0))) == 0xFFFF )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v62, &v80);
    if ( v62.m128i_i64[1] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v81, v62.m128i_i64[0], v62.m128i_i64[1], dest[0]);
    v50 = _mm_loadu_si128(&v83);
    v126[0] = _mm_loadu_si128(&v82);
    v126[1] = v50;
    v126[2] = v84;
    v127 = v85;
    v51 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v52 = *(_QWORD *)(v51 + 8);
    v53 = *(_QWORD *)(v51 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v52, 1LL, 1LL, v53);
    v95[0] = v52;
    v95[1] = v53;
    v94[0] = v95;
    v94[1] = <&T as core::fmt::Display>::fmt;
    v122[0] = &unk_1897A0;
    v122[1] = 2LL;
    v122[4] = 0LL;
    v122[2] = v94;
    v122[3] = 1LL;
    std::io::stdio::_eprint(v122);
    v96[0] = &off_1897E0;
    v96[1] = <&T as core::fmt::Display>::fmt;
    v123[0] = &unk_1897C0;
    v123[1] = 2LL;
    v123[4] = 0LL;
    v123[2] = v96;
    v123[3] = 1LL;
    std::io::stdio::_eprint(v123);
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    v71[8].m128i_i8[13] = 1;
    v103 = v4;
    v104 = v5;
    v105 = 1;
    notify::poll::PollWatcher::new(&v116, v72.m128i_i64[0], v72.m128i_i64[1], &v103);
    if ( v116.m128i_i64[0] != 6 )
    {
      v131 = v119;
      v59 = _mm_loadu_si128(&v116);
      v60 = _mm_loadu_si128(&v117);
      v130[2] = v118;
      v130[1] = v60;
      v130[0] = v59;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, v130, &off_189720, &off_1897F0);
    }
    v102 = *((_QWORD *)&v118 + 1);
    v54 = _mm_loadu_si128((const __m128i *)&v116.m128i_u64[1]);
    v101 = _mm_loadu_si128((const __m128i *)&v117.m128i_u64[1]);
    v100 = v54;
    v55 = _rust_alloc(40LL, 8LL);
    if ( !v55 )
      alloc::alloc::handle_alloc_error(8LL, 40LL);
    v11 = v55;
    *(_QWORD *)(v55 + 32) = v102;
    v56 = _mm_load_si128(&v100);
    *(__m128i *)(v55 + 16) = _mm_load_si128(&v101);
    *(__m128i *)v55 = v56;
    v73 = v55;
    v12 = &off_189808;
    v74 = &off_189808;
    core::ptr::drop_in_place<notify::error::Error>(v126);
    goto LABEL_15;
  }
  alloc::raw_vec::RawVec<T,A>::current_memory(&v62, &v80);
  if ( v62.m128i_i64[1] )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v81, v62.m128i_i64[0], v62.m128i_i64[1], dest[0]);
  v44 = _mm_loadu_si128(&v83);
  v120[0] = _mm_loadu_si128(&v82);
  v120[1] = v44;
  v120[2] = v84;
  v121 = v85;
  v69.m128i_i64[0] = 0LL;
  v69.m128i_i64[1] = 1LL;
  v70 = 0LL;
  v65 = 32LL;
  v66 = 3;
  v62.m128i_i64[0] = 0LL;
  dest[0] = 0LL;
  v64.m128i_i64[0] = (__int64)&v69;
  v64.m128i_i64[1] = (__int64)&anon_05a4d4ca64bdea474ebd4b0eb3197a7a_7_llvm_11384070901547909942;
  if ( (unsigned __int8)<notify::error::Error as core::fmt::Display>::fmt(v120, &v62) )
    core::result::unwrap_failed(
      anon_05a4d4ca64bdea474ebd4b0eb3197a7a_9_llvm_11384070901547909942,
      55LL,
      &v91,
      &anon_20ef18d13cf93ce582f7d0f9a5fb04d7_13_llvm_2907708705472026727,
      &anon_05a4d4ca64bdea474ebd4b0eb3197a7a_11_llvm_11384070901547909942);
  v78[0].m128i_i64[0] = v70;
  v77 = _mm_loadu_si128(&v69);
  v78[0].m128i_i32[2] = 1;
  v45 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v18 = (_OWORD *)v45;
  if ( !v45 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v46 = _mm_load_si128(&v77);
  *(__m128i *)(v45 + 16) = _mm_load_si128(v78);
  *(__m128i *)v45 = v46;
  core::ptr::drop_in_place<notify::error::Error>(v120);
  if ( v72.m128i_i64[0] )
  {
    if ( v72.m128i_i64[0] == 1 )
      std::sync::mpmc::counter::Sender<C>::release(&v72.m128i_u64[1]);
    else
      std::sync::mpmc::counter::Sender<C>::release(&v72.m128i_u64[1]);
  }
  else
  {
    std::sync::mpmc::counter::Sender<C>::release(&v72.m128i_u64[1]);
  }
  if ( v76.m128i_i64[0] )
  {
    if ( v76.m128i_i64[0] == 1 )
      std::sync::mpmc::counter::Receiver<C>::release(&v76.m128i_u64[1]);
    else
      std::sync::mpmc::counter::Receiver<C>::release(&v76.m128i_u64[1]);
  }
  else
  {
    std::sync::mpmc::counter::Receiver<C>::release(&v76.m128i_u64[1]);
  }
  return v18;
}
