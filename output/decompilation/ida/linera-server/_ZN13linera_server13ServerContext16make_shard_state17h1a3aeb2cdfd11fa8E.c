void *__fastcall linera_server::ServerContext::make_shard_state(
        char *dest,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // rsi
  __int128 *v8; // r14
  unsigned __int8 v9; // al
  char *v10; // r13
  __int64 v11; // rax
  void *v12; // r15
  __int128 v13; // xmm0
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rbp
  char *v17; // r15
  __int64 v18; // rax
  unsigned __int8 v19; // al
  char *v20; // r13
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int64 v25; // rdx
  void *v26; // r13
  __int128 v27; // xmm0
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // r15
  char *v31; // r13
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  unsigned __int64 v39; // r15
  __int16 v40; // r12
  __int16 v41; // bp
  void *result; // rax
  char **v43; // rdx
  __int128 *v44; // [rsp+8h] [rbp-2F0h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+10h] [rbp-2E8h]
  void *v46; // [rsp+18h] [rbp-2E0h]
  void *v47; // [rsp+20h] [rbp-2D8h]
  __int128 **v48; // [rsp+28h] [rbp-2D0h] BYREF
  __int64 (__fastcall *v49)(); // [rsp+30h] [rbp-2C8h]
  char *v50; // [rsp+38h] [rbp-2C0h]
  __int128 v51; // [rsp+40h] [rbp-2B8h] BYREF
  __int128 v52; // [rsp+50h] [rbp-2A8h]
  __int64 v53; // [rsp+60h] [rbp-298h]
  __int64 v54; // [rsp+70h] [rbp-288h]
  unsigned __int64 v55; // [rsp+78h] [rbp-280h] BYREF
  _OWORD src[10]; // [rsp+80h] [rbp-278h] BYREF
  _BYTE desta[40]; // [rsp+120h] [rbp-1D8h] BYREF
  __int128 v58; // [rsp+148h] [rbp-1B0h]
  __int128 v59; // [rsp+158h] [rbp-1A0h]
  __int128 v60; // [rsp+168h] [rbp-190h]
  __int128 v61; // [rsp+178h] [rbp-180h]
  __int128 v62; // [rsp+188h] [rbp-170h]
  __int64 v63; // [rsp+198h] [rbp-160h]
  _BYTE v64[24]; // [rsp+1C0h] [rbp-138h] BYREF
  _BYTE v65[24]; // [rsp+1D8h] [rbp-120h] BYREF
  _QWORD v66[2]; // [rsp+1F0h] [rbp-108h] BYREF
  _QWORD v67[2]; // [rsp+200h] [rbp-F8h] BYREF
  __int128 v68; // [rsp+210h] [rbp-E8h] BYREF
  __int128 v69; // [rsp+220h] [rbp-D8h]
  __int64 v70; // [rsp+230h] [rbp-C8h]
  __int64 v71; // [rsp+238h] [rbp-C0h]
  _BYTE v72[72]; // [rsp+2B0h] [rbp-48h] BYREF

  v54 = a6;
  v66[0] = a3;
  v66[1] = a4;
  v55 = a5;
  v7 = *(_QWORD *)(a2 + 248);
  if ( a5 >= v7 )
    core::panicking::panic_bounds_check(a5, v7, &off_2324F90);
  v8 = (__int128 *)(*(_QWORD *)(a2 + 240) + 32 * a5);
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL, 0LL) <= 2 )
  {
    v9 = tracing_core::callsite::DefaultCallsite::interest(&linera_server::ServerContext::make_shard_state::__CALLSITE);
    if ( v9 )
    {
      if ( (unsigned __int8)tracing::__macro_support::__is_enabled(
                              linera_server::ServerContext::make_shard_state::__CALLSITE,
                              v9) )
      {
        v10 = (char *)linera_server::ServerContext::make_shard_state::__CALLSITE;
        v11 = *((_QWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 7);
        *(_OWORD *)desta = *((_OWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 3);
        *(_OWORD *)&desta[16] = *((_OWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 4);
        *(_QWORD *)&desta[32] = 0LL;
        *(_QWORD *)&v58 = v11;
        <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(src, desta);
        if ( *(_QWORD *)&src[0] )
        {
          v70 = *(_QWORD *)&src[2];
          v69 = src[1];
          v68 = src[0];
          v44 = v8;
          v45 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&src[0] = &off_23391F0;
          *((_QWORD *)&src[0] + 1) = 1LL;
          *(_QWORD *)&src[2] = 0LL;
          *(_QWORD *)&src[1] = &v44;
          *((_QWORD *)&src[1] + 1) = 1LL;
          *(_QWORD *)&v51 = &v68;
          *((_QWORD *)&v51 + 1) = src;
          *(_QWORD *)&v52 = &unk_2324B18;
          *(_QWORD *)desta = &v51;
          *(_QWORD *)&desta[8] = 1LL;
          *(_QWORD *)&desta[16] = v10 + 48;
          linera_server::ServerContext::make_shard_state::{{closure}}(desta);
          goto LABEL_12;
        }
LABEL_26:
        v43 = &off_2339240;
        goto LABEL_28;
      }
    }
  }
  if ( !(unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS, 0LL)
    && (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    v12 = linera_server::ServerContext::make_shard_state::__CALLSITE;
    v13 = *((_OWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 2);
    *(_QWORD *)v64 = 3LL;
    *(_OWORD *)&v64[8] = v13;
    v14 = log::logger();
    v16 = v15;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v15 + 24))(v14, v64) )
    {
      v47 = v12;
      v17 = (char *)linera_server::ServerContext::make_shard_state::__CALLSITE;
      v18 = *((_QWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 7);
      *(_OWORD *)desta = *((_OWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 3);
      *(_OWORD *)&desta[16] = *((_OWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 4);
      *(_QWORD *)&desta[32] = 0LL;
      *(_QWORD *)&v58 = v18;
      <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(src, desta);
      if ( *(_QWORD *)&src[0] )
      {
        v70 = *(_QWORD *)&src[2];
        v69 = src[1];
        v68 = src[0];
        v48 = (__int128 **)v8;
        v49 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&src[0] = &off_23391F0;
        *((_QWORD *)&src[0] + 1) = 1LL;
        *(_QWORD *)&src[2] = 0LL;
        *(_QWORD *)&src[1] = &v48;
        *((_QWORD *)&src[1] + 1) = 1LL;
        *(_QWORD *)&v51 = &v68;
        *((_QWORD *)&v51 + 1) = src;
        *(_QWORD *)&v52 = &unk_2324B18;
        v44 = &v51;
        v45 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v46 = v17 + 48;
        *(_QWORD *)&desta[16] = *(_QWORD *)&v64[16];
        *(_OWORD *)desta = *(_OWORD *)v64;
        tracing::__macro_support::__tracing_log(v47, v14, v16, desta, &v44);
        goto LABEL_12;
      }
      goto LABEL_26;
    }
  }
LABEL_12:
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL, 0LL) <= 2 )
  {
    v19 = tracing_core::callsite::DefaultCallsite::interest(&linera_server::ServerContext::make_shard_state::__CALLSITE);
    if ( v19 )
    {
      if ( (unsigned __int8)tracing::__macro_support::__is_enabled(
                              linera_server::ServerContext::make_shard_state::__CALLSITE,
                              v19) )
      {
        v20 = (char *)linera_server::ServerContext::make_shard_state::__CALLSITE;
        v21 = *((_QWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 7);
        v68 = *((_OWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 3);
        v69 = *((_OWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 4);
        v70 = 0LL;
        v71 = v21;
        <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(src, &v68);
        if ( *(_QWORD *)&src[0] )
        {
          v53 = *(_QWORD *)&src[2];
          v52 = src[1];
          v51 = src[0];
          *(_QWORD *)&src[5] = *(_QWORD *)(a2 + 512);
          src[4] = *(_OWORD *)(a2 + 496);
          v22 = *(_OWORD *)(a2 + 432);
          v23 = *(_OWORD *)(a2 + 448);
          v24 = *(_OWORD *)(a2 + 464);
          src[3] = *(_OWORD *)(a2 + 480);
          src[2] = v24;
          src[1] = v23;
          src[0] = v22;
          v48 = (__int128 **)src;
          v49 = <linera_base::crypto::secp256k1::Secp256k1PublicKey as core::fmt::Display>::fmt;
          *(_QWORD *)desta = &off_2339200;
          *(_QWORD *)&desta[8] = 1LL;
          *(_QWORD *)&desta[32] = 0LL;
          *(_QWORD *)&desta[16] = &v48;
          *(_QWORD *)&desta[24] = 1LL;
          v44 = &v51;
          v45 = (__int64 (__fastcall *)())desta;
          v46 = &unk_2324B18;
          *(_QWORD *)&v68 = &v44;
          *((_QWORD *)&v68 + 1) = 1LL;
          *(_QWORD *)&v69 = v20 + 48;
          linera_server::ServerContext::make_shard_state::{{closure}}(&v68);
          goto LABEL_22;
        }
        goto LABEL_27;
      }
    }
  }
  if ( (unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS, 0LL) )
    goto LABEL_22;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) < 3 )
    goto LABEL_22;
  v26 = linera_server::ServerContext::make_shard_state::__CALLSITE;
  v27 = *((_OWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 2);
  *(_QWORD *)v65 = 3LL;
  *(_OWORD *)&v65[8] = v27;
  v28 = log::logger();
  v30 = v29;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v29 + 24))(v28, v65) )
    goto LABEL_22;
  v47 = v26;
  v31 = (char *)linera_server::ServerContext::make_shard_state::__CALLSITE;
  v32 = *((_QWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 7);
  v68 = *((_OWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 3);
  v69 = *((_OWORD *)linera_server::ServerContext::make_shard_state::__CALLSITE + 4);
  v70 = 0LL;
  v71 = v32;
  <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(src, &v68);
  if ( !*(_QWORD *)&src[0] )
  {
LABEL_27:
    v43 = &off_2339258;
LABEL_28:
    core::option::expect_failed(aFieldsetCorrup_0, 34LL, v43);
  }
  v53 = *(_QWORD *)&src[2];
  v52 = src[1];
  v51 = src[0];
  *(_QWORD *)&src[5] = *(_QWORD *)(a2 + 512);
  src[4] = *(_OWORD *)(a2 + 496);
  v33 = *(_OWORD *)(a2 + 432);
  v34 = *(_OWORD *)(a2 + 448);
  v35 = *(_OWORD *)(a2 + 464);
  src[3] = *(_OWORD *)(a2 + 480);
  src[2] = v35;
  src[1] = v34;
  src[0] = v33;
  v67[0] = src;
  v67[1] = <linera_base::crypto::secp256k1::Secp256k1PublicKey as core::fmt::Display>::fmt;
  *(_QWORD *)desta = &off_2339200;
  *(_QWORD *)&desta[8] = 1LL;
  *(_QWORD *)&desta[32] = 0LL;
  *(_QWORD *)&desta[16] = v67;
  *(_QWORD *)&desta[24] = 1LL;
  v44 = &v51;
  v45 = (__int64 (__fastcall *)())desta;
  v46 = &unk_2324B18;
  v48 = &v44;
  v49 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v50 = v31 + 48;
  *(_QWORD *)&v69 = *(_QWORD *)&v65[16];
  v68 = *(_OWORD *)v65;
  tracing::__macro_support::__tracing_log(v47, v28, v30, &v68, &v48);
LABEL_22:
  *(_QWORD *)&src[0] = &v55;
  *((_QWORD *)&src[0] + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)&src[1] = v66;
  *((_QWORD *)&src[1] + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&src[2] = (char *)v8 + 28;
  *((_QWORD *)&src[2] + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
  *(_QWORD *)desta = &off_2339210;
  *(_QWORD *)&desta[8] = 3LL;
  *(_QWORD *)&desta[32] = 0LL;
  *(_QWORD *)&desta[16] = src;
  *(_QWORD *)&desta[24] = 3LL;
  core::option::Option<T>::map_or_else(v72, 0LL, v25, desta);
  v63 = *(_QWORD *)(a2 + 512);
  v62 = *(_OWORD *)(a2 + 496);
  v61 = *(_OWORD *)(a2 + 480);
  v60 = *(_OWORD *)(a2 + 464);
  v36 = *(_OWORD *)(a2 + 400);
  v37 = *(_OWORD *)(a2 + 416);
  v38 = *(_OWORD *)(a2 + 432);
  v59 = *(_OWORD *)(a2 + 448);
  v58 = v38;
  *(_OWORD *)&desta[24] = v37;
  *(_OWORD *)&desta[8] = v36;
  *(_QWORD *)desta = 1LL;
  linera_core::worker::WorkerState<StorageClient>::new(
    src,
    v72,
    desta,
    v54,
    *(_QWORD *)(a2 + 592),
    *(_QWORD *)(a2 + 600));
  linera_core::worker::WorkerState<StorageClient>::with_allow_inactive_chains(desta, src);
  linera_core::worker::WorkerState<StorageClient>::with_allow_messages_from_deprecated_epochs(src, desta);
  linera_core::worker::WorkerState<StorageClient>::with_grace_period(desta, src);
  linera_core::worker::WorkerState<StorageClient>::with_chain_worker_ttl(&v68, desta);
  linera_core::worker::WorkerState<StorageClient>::with_chain_info_max_received_log_entries(src, &v68);
  v39 = v55;
  <alloc::string::String as core::clone::Clone>::clone(desta, v8);
  v40 = *((_WORD *)v8 + 12);
  v41 = *((_WORD *)v8 + 14);
  if ( (_BYTE)v40 == 1 )
    LOWORD(v8) = *((_WORD *)v8 + 13);
  else
    v40 = 0;
  *((_QWORD *)dest + 23) = *(_QWORD *)&desta[16];
  *(_OWORD *)(dest + 168) = *(_OWORD *)desta;
  result = memcpy(dest, src, 0xA0uLL);
  *((_QWORD *)dest + 20) = v39;
  *((_WORD *)dest + 96) = v40;
  *((_WORD *)dest + 97) = (_WORD)v8;
  *((_WORD *)dest + 98) = v41;
  return result;
}