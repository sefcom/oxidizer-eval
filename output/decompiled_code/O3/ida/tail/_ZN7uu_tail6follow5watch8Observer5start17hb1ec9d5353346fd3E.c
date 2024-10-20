__int64 __fastcall uu_tail::follow::watch::Observer::start(__int64 a1, __int64 a2)
{
  __int128 v2; // kr00_16
  __int64 v3; // rbx
  __int64 v4; // r13
  int v5; // ecx
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // r12
  __int128 v9; // xmm0
  __int64 (__fastcall **v10)(); // rbp
  bool v11; // of
  __int64 v12; // rt0
  _OWORD *v13; // rax
  __int64 v14; // rax
  __int128 v15; // kr20_16
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rt0
  signed __int64 v20; // rax
  __int64 v21; // rcx
  signed __int64 v22; // rtt
  char v23; // al
  signed __int64 v24; // rax
  __int64 v25; // rcx
  signed __int64 v26; // rtt
  char v27; // al
  __int64 v28; // rbx
  char v29; // al
  __int64 *v30; // rbp
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int64 *v33; // r15
  __int64 v34; // rax
  __int64 *v35; // rbp
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  const void *v41; // r14
  signed __int64 v42; // r15
  __int64 v43; // r13
  __int64 v44; // rax
  void *v45; // r12
  __int64 v46; // r13
  __int128 v47; // kr40_16
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r14
  _OWORD *v54; // rax
  __int128 v55; // xmm0
  _QWORD *v56; // [rsp+8h] [rbp-1B0h]
  __int64 v57; // [rsp+10h] [rbp-1A8h]
  __int64 v58; // [rsp+18h] [rbp-1A0h]
  __int128 v59; // [rsp+20h] [rbp-198h] BYREF
  __int128 v60; // [rsp+30h] [rbp-188h]
  __int128 v61; // [rsp+40h] [rbp-178h]
  __int64 v62; // [rsp+50h] [rbp-168h]
  char v63; // [rsp+58h] [rbp-160h]
  _BYTE v64[48]; // [rsp+60h] [rbp-158h] BYREF
  __int64 v65; // [rsp+90h] [rbp-128h]
  __int64 *v66; // [rsp+A0h] [rbp-118h]
  __int128 v67; // [rsp+A8h] [rbp-110h] BYREF
  __int128 v68; // [rsp+B8h] [rbp-100h] BYREF
  _QWORD v69[2]; // [rsp+C8h] [rbp-F0h] BYREF
  __m256i v70; // [rsp+D8h] [rbp-E0h] BYREF
  __int128 v71; // [rsp+F8h] [rbp-C0h]
  __int64 v72; // [rsp+108h] [rbp-B0h]
  __m256i v73; // [rsp+110h] [rbp-A8h] BYREF
  __int128 v74; // [rsp+130h] [rbp-88h]
  __int64 v75; // [rsp+140h] [rbp-78h]
  __int64 v76; // [rsp+148h] [rbp-70h] BYREF
  int v77; // [rsp+150h] [rbp-68h]
  char v78; // [rsp+158h] [rbp-60h]
  __int128 v79; // [rsp+160h] [rbp-58h]
  __int128 v80; // [rsp+170h] [rbp-48h]
  __int64 v81; // [rsp+180h] [rbp-38h]

  if ( *(_BYTE *)(a2 + 76) == 2 )
    return 0LL;
  std::sync::mpmc::channel(&v59);
  v2 = v59;
  v4 = *((_QWORD *)&v60 + 1);
  v3 = v60;
  v79 = v59;
  v67 = v60;
  v5 = *(_DWORD *)(a2 + 56);
  v76 = *(_QWORD *)(a2 + 48);
  v77 = v5;
  v78 = 1;
  v6 = *(_BYTE *)(a1 + 141) == 0;
  v66 = (__int64 *)a1;
  if ( v6 )
  {
    if ( (_QWORD)v59 )
    {
      v11 = __OFSUB__((_DWORD)v59, 1);
      if ( (_DWORD)v59 == 1 )
      {
        v12 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)&v59 + 1) + 384LL));
        if ( !((v12 < 0) ^ v11 | (v12 == 0)) )
          goto LABEL_9;
LABEL_28:
        std::process::abort();
      }
      v19 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)&v59 + 1) + 112LL));
      if ( (v19 < 0) ^ __OFSUB__((_DWORD)v2, 1) | (v19 == 0) )
        goto LABEL_28;
    }
    else if ( _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)&v59 + 1) + 512LL)) <= 0 )
    {
      goto LABEL_28;
    }
LABEL_9:
    v68 = v2;
    v59 = v2;
    v13 = (_OWORD *)_rust_alloc(16LL, 8LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *v13 = v2;
    notify::inotify::INotifyWatcher::from_event_handler(&v70, v13, &off_15CB00);
    if ( v70.m256i_i32[0] != 6 )
    {
      *(_QWORD *)v64 = 0LL;
      *(_QWORD *)&v64[8] = 1LL;
      *(_QWORD *)&v64[16] = 0LL;
      v62 = 32LL;
      v63 = 3;
      *(_QWORD *)&v59 = 0LL;
      *(_QWORD *)&v60 = 0LL;
      *(_QWORD *)&v61 = v64;
      *((_QWORD *)&v61 + 1) = &off_15C8E0;
      if ( (unsigned __int8)<notify::error::Error as core::fmt::Display>::fmt(&v70, &v59) )
        core::result::unwrap_failed(aADisplayImplem_1, 55LL, v69, &unk_15C928, &off_15C910);
      if ( *(_QWORD *)&v64[16] < 0x13uLL
        || _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128(*(const __m128i **)&v64[8]), (__m128i)xmmword_19900),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)&v64[8] + 3LL)), (__m128i)xmmword_19A40))) != 0xFFFF )
      {
        if ( *(_QWORD *)v64 )
          _rust_dealloc(*(_QWORD *)&v64[8], *(_QWORD *)v64, 1LL);
        v65 = v72;
        *(_OWORD *)&v64[32] = v71;
        *(__m256i *)v64 = v70;
        v73.m256i_i64[0] = 0LL;
        *(_OWORD *)&v73.m256i_u64[1] = 1uLL;
        v62 = 32LL;
        v63 = 3;
        *(_QWORD *)&v59 = 0LL;
        *(_QWORD *)&v60 = 0LL;
        *(_QWORD *)&v61 = &v73;
        *((_QWORD *)&v61 + 1) = &off_15C8E0;
        if ( (unsigned __int8)<notify::error::Error as core::fmt::Display>::fmt(v64, &v59) )
          core::result::unwrap_failed(aADisplayImplem_1, 55LL, v69, &unk_15C928, &off_15C910);
        v15 = *(_OWORD *)v73.m256i_i8;
        v16 = v73.m256i_i64[2];
        v17 = _rust_alloc(32LL, 8LL);
        if ( !v17 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v18 = v17;
        *(_OWORD *)v17 = v15;
        *(_QWORD *)(v17 + 16) = v16;
        *(_DWORD *)(v17 + 24) = 1;
        core::ptr::drop_in_place<notify::error::Error>(v64);
        if ( (_DWORD)v2 == 2 )
        {
          std::sync::mpmc::counter::Sender<C>::release((char *)&v68 + 8);
        }
        else if ( (_DWORD)v2 == 1 )
        {
          std::sync::mpmc::counter::Sender<C>::release((char *)&v68 + 8);
        }
        else if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v2 + 1) + 512LL)) )
        {
          v24 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 128LL);
          v25 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 400LL);
          do
          {
            v26 = v24;
            v24 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(*((_QWORD *)&v2 + 1) + 128LL),
                    v25 | v24,
                    v24);
          }
          while ( v26 != v24 );
          if ( (v24 & *(_QWORD *)(*((_QWORD *)&v2 + 1) + 400LL)) == 0 )
            std::sync::mpmc::waker::SyncWaker::disconnect(*((_QWORD *)&v2 + 1) + 320LL);
          v27 = *(_BYTE *)(*((_QWORD *)&v2 + 1) + 528LL);
          *(_BYTE *)(*((_QWORD *)&v2 + 1) + 528LL) = 1;
          if ( v27 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<core::result::Result<notify::event::Event,notify::error::Error>>>>>(*((_QWORD *)&v2 + 1));
        }
        if ( (_QWORD)v67 == 2LL )
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v67 + 8);
        }
        else if ( (_DWORD)v67 == 1 )
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v67 + 8);
        }
        else
        {
          v28 = *((_QWORD *)&v67 + 1);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v67 + 1) + 520LL)) )
          {
            std::sync::mpmc::array::Channel<T>::disconnect_receivers(v28);
            v29 = *(_BYTE *)(v28 + 528);
            *(_BYTE *)(v28 + 528) = 1;
            if ( v29 )
              core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<core::result::Result<notify::event::Event,notify::error::Error>>>>>(v28);
          }
        }
        return v18;
      }
      if ( *(_QWORD *)v64 )
        _rust_dealloc(*(_QWORD *)&v64[8], *(_QWORD *)v64, 1LL);
      v75 = v72;
      v74 = v71;
      v73 = v70;
      v30 = v66;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      *(_OWORD *)v64 = xmmword_163010;
      v69[0] = v64;
      v69[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v59 = &unk_15CB50;
      *((_QWORD *)&v59 + 1) = 2LL;
      *(_QWORD *)&v61 = 0LL;
      *(_QWORD *)&v60 = v69;
      *((_QWORD *)&v60 + 1) = 1LL;
      std::io::stdio::_eprint(&v59);
      *(_QWORD *)v64 = &off_15CB70;
      *(_QWORD *)&v64[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v59 = &unk_15CB80;
      *((_QWORD *)&v59 + 1) = 2LL;
      *(_QWORD *)&v61 = 0LL;
      *(_QWORD *)&v60 = v64;
      *((_QWORD *)&v60 + 1) = 1LL;
      std::io::stdio::_eprint(&v59);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      *((_BYTE *)v30 + 141) = 1;
      notify::poll::PollWatcher::new(v64, v68, *((_QWORD *)&v68 + 1), &v76);
      if ( *(_DWORD *)v64 != 6 )
      {
        v62 = v65;
        v61 = *(_OWORD *)&v64[32];
        v60 = *(_OWORD *)&v64[16];
        v59 = *(_OWORD *)v64;
        core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v59, &off_15C948, &off_15CBA0);
      }
      *(_QWORD *)&v61 = *(_QWORD *)&v64[40];
      v60 = *(_OWORD *)&v64[24];
      v59 = *(_OWORD *)&v64[8];
      v31 = _rust_alloc(40LL, 8LL);
      if ( !v31 )
        alloc::alloc::handle_alloc_error(8LL, 40LL);
      v8 = v31;
      *(_QWORD *)(v31 + 32) = v61;
      v32 = v59;
      *(_OWORD *)(v31 + 16) = v60;
      *(_OWORD *)v31 = v32;
      core::ptr::drop_in_place<notify::error::Error>(&v73);
      v10 = &off_15CBB8;
      goto LABEL_60;
    }
    v81 = v70.m256i_i64[3];
    v80 = *(_OWORD *)&v70.m256i_u64[1];
    v14 = _rust_alloc(24LL, 8LL);
    if ( !v14 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v8 = v14;
    *(_QWORD *)(v14 + 16) = v70.m256i_i64[3];
    *(_OWORD *)v14 = *(_OWORD *)&v70.m256i_u64[1];
    if ( (_DWORD)v2 == 2 )
    {
      std::sync::mpmc::counter::Sender<C>::release((char *)&v68 + 8);
    }
    else
    {
      if ( (_DWORD)v2 != 1 )
      {
        v10 = &off_15CB20;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v2 + 1) + 512LL)) )
        {
          v20 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 128LL);
          v21 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 400LL);
          do
          {
            v22 = v20;
            v20 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(*((_QWORD *)&v2 + 1) + 128LL),
                    v21 | v20,
                    v20);
          }
          while ( v22 != v20 );
          if ( (v20 & *(_QWORD *)(*((_QWORD *)&v2 + 1) + 400LL)) == 0 )
            std::sync::mpmc::waker::SyncWaker::disconnect(*((_QWORD *)&v2 + 1) + 320LL);
          v23 = *(_BYTE *)(*((_QWORD *)&v2 + 1) + 528LL);
          *(_BYTE *)(*((_QWORD *)&v2 + 1) + 528LL) = 1;
          if ( v23 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<core::result::Result<notify::event::Event,notify::error::Error>>>>>(*((_QWORD *)&v2 + 1));
        }
        goto LABEL_60;
      }
      std::sync::mpmc::counter::Sender<C>::release((char *)&v68 + 8);
    }
    v10 = &off_15CB20;
LABEL_60:
    v4 = *((_QWORD *)&v67 + 1);
    v3 = v67;
    goto LABEL_61;
  }
  *(_BYTE *)(a1 + 141) = 1;
  notify::poll::PollWatcher::new(v64, v2, *((_QWORD *)&v2 + 1), &v76);
  if ( *(_DWORD *)v64 != 6 )
  {
    v62 = v65;
    v61 = *(_OWORD *)&v64[32];
    v60 = *(_OWORD *)&v64[16];
    v59 = *(_OWORD *)v64;
    core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v59, &off_15C948, &off_15CBE8);
  }
  *(_QWORD *)&v61 = *(_QWORD *)&v64[40];
  v60 = *(_OWORD *)&v64[24];
  v59 = *(_OWORD *)&v64[8];
  v7 = _rust_alloc(40LL, 8LL);
  if ( !v7 )
    alloc::alloc::handle_alloc_error(8LL, 40LL);
  v8 = v7;
  *(_QWORD *)(v7 + 32) = v61;
  v9 = v59;
  *(_OWORD *)(v7 + 16) = v60;
  *(_OWORD *)v7 = v9;
  v10 = &off_15CBB8;
LABEL_61:
  v33 = v66;
  core::ptr::drop_in_place<core::option::Option<uu_tail::follow::watch::WatcherRx>>(v66);
  *v33 = v3;
  v33[1] = v4;
  v33[2] = v8;
  v33[3] = (__int64)v10;
  v34 = *(_QWORD *)(a2 + 40);
  if ( !v34 )
    return 0LL;
  v35 = v33;
  v36 = *(_QWORD *)(a2 + 32);
  v56 = v33 + 4;
  v37 = 48 * v34;
  v38 = 0LL;
  v57 = v36;
  v58 = 48 * v34;
  while ( 1 )
  {
    if ( *(_QWORD *)(v36 + v38 + 24) == 0x8000000000000000LL )
      goto LABEL_64;
    v41 = *(const void **)(v36 + v38 + 32);
    v42 = *(_QWORD *)(v36 + v38 + 40);
    if ( v42 )
    {
      if ( v42 < 0 )
      {
        v43 = 0LL;
LABEL_100:
        alloc::raw_vec::handle_error(v43, v42);
      }
      v43 = 1LL;
      v44 = _rust_alloc(*(_QWORD *)(v36 + v38 + 40), 1LL);
      if ( !v44 )
        goto LABEL_100;
      v45 = (void *)v44;
    }
    else
    {
      v45 = &dword_0 + 1;
    }
    memcpy(v45, v41, v42);
    if ( !(unsigned __int8)std::path::Path::is_absolute(v45, v42) )
      break;
    v46 = v42;
LABEL_79:
    if ( (unsigned __int8)uu_tail::paths::path_is_tailable() )
    {
      v18 = uu_tail::follow::watch::WatcherRx::watch_with_parent(v35[2], v35[3], (__int64)v45, v46);
      v36 = v57;
      if ( v18 )
      {
        if ( !v42 )
          return v18;
        goto LABEL_98;
      }
    }
    else
    {
      v48 = std::path::Path::parent(v45, v46);
      if ( !v48 || !(unsigned __int8)std::path::Path::is_dir(v48, v49) )
      {
        v52 = v35[6];
        if ( v52 == v35[4] )
          alloc::raw_vec::RawVec<T,A>::grow_one(v56);
        v39 = v35[5];
        v40 = 3 * v52;
        *(_QWORD *)(v39 + 8 * v40) = v42;
        *(_QWORD *)(v39 + 8 * v40 + 8) = v45;
        *(_QWORD *)(v39 + 8 * v40 + 16) = v46;
        v35[6] = v52 + 1;
        v36 = v57;
        v37 = v58;
        goto LABEL_64;
      }
      v50 = std::path::Path::parent(v45, v46);
      if ( !v50 )
        core::option::unwrap_failed(&off_15CC00);
      v18 = uu_tail::follow::watch::WatcherRx::watch(v35[2], v35[3], v50, v51);
      v36 = v57;
      if ( v18 )
      {
        if ( !v42 )
          return v18;
        goto LABEL_98;
      }
    }
    v37 = v58;
    if ( v42 )
    {
      _rust_dealloc(v45, v42, 1LL);
      v36 = v57;
    }
LABEL_64:
    v38 += 48LL;
    if ( v37 == v38 )
      return 0LL;
  }
  std::env::current_dir(&v59);
  v47 = v59;
  if ( (_QWORD)v59 != 0x8000000000000000LL )
  {
    std::path::Path::_join(v64, *((_QWORD *)&v59 + 1), v60, v45, v42);
    if ( v42 )
      _rust_dealloc(v45, v42, 1LL);
    v45 = *(void **)&v64[8];
    v42 = *(_QWORD *)v64;
    v46 = *(_QWORD *)&v64[16];
    if ( (_QWORD)v47 )
      _rust_dealloc(*((_QWORD *)&v47 + 1), v47, 1LL);
    v35 = v66;
    goto LABEL_79;
  }
  *(_QWORD *)&v59 = 0x8000000000000000LL;
  *((_QWORD *)&v60 + 1) = *((_QWORD *)&v47 + 1);
  v54 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v54 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v18 = (__int64)v54;
  v55 = v59;
  v54[1] = v60;
  *v54 = v55;
  if ( v42 )
LABEL_98:
    _rust_dealloc(v45, v42, 1LL);
  return v18;
}
