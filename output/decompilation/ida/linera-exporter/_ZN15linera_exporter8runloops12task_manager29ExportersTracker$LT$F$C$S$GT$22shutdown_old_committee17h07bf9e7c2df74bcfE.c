__int64 __fastcall linera_exporter::runloops::task_manager::ExportersTracker<F,S>::shutdown_old_committee(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rbp
  __int128 v4; // xmm0
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rbx
  char *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-1C0h] BYREF
  __int128 v13; // [rsp+10h] [rbp-1B8h] BYREF
  _BYTE v14[24]; // [rsp+20h] [rbp-1A8h]
  __int64 *v15; // [rsp+40h] [rbp-188h] BYREF
  __int128 v16; // [rsp+48h] [rbp-180h] BYREF
  __int128 v17; // [rsp+58h] [rbp-170h]
  __int64 **v18; // [rsp+68h] [rbp-160h]
  void *v19; // [rsp+70h] [rbp-158h]
  _BYTE v20[24]; // [rsp+78h] [rbp-150h] BYREF
  __int128 v21; // [rsp+90h] [rbp-138h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-128h]
  __int64 v23; // [rsp+B0h] [rbp-118h]
  __int64 v24; // [rsp+B8h] [rbp-110h]
  _QWORD v25[3]; // [rsp+C8h] [rbp-100h] BYREF
  _OWORD v26[2]; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+100h] [rbp-C8h]
  _OWORD v28[2]; // [rsp+110h] [rbp-B8h] BYREF
  __int64 **v29; // [rsp+130h] [rbp-98h]
  _BYTE v30[48]; // [rsp+138h] [rbp-90h] BYREF
  _BYTE v31[40]; // [rsp+168h] [rbp-60h] BYREF
  _BYTE *v32; // [rsp+190h] [rbp-38h]

  core::iter::traits::iterator::Iterator::collect(
    v30,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 32LL * *(_QWORD *)(a2 + 16));
  hashbrown::map::HashMap<K,V,S,A>::iter(v31, a1 + 392);
  v32 = v30;
  while ( 1 )
  {
    v2 = <std::collections::hash::set::Difference<T,S> as core::iter::traits::iterator::Iterator>::next(v31);
    if ( !v2 )
      break;
    v12 = v2;
    if ( !(unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS, 0LL)
      && (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 5 )
    {
      v3 = linera_exporter::runloops::task_manager::ExportersTracker<F,S>::shutdown_old_committee::__CALLSITE;
      v4 = *((_OWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::shutdown_old_committee::__CALLSITE
           + 2);
      *(_QWORD *)v20 = 5LL;
      *(_OWORD *)&v20[8] = v4;
      v5 = log::logger();
      v7 = v6;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v6 + 24))(v5, v20) )
      {
        v8 = (char *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::shutdown_old_committee::__CALLSITE;
        v9 = *((_QWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::shutdown_old_committee::__CALLSITE
             + 7);
        v21 = *((_OWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::shutdown_old_committee::__CALLSITE
              + 3);
        v22 = *((_OWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::shutdown_old_committee::__CALLSITE
              + 4);
        v23 = 0LL;
        v24 = v9;
        <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v13, &v21);
        if ( !(_QWORD)v13 )
          goto LABEL_12;
        v27 = *(_QWORD *)&v14[16];
        v26[1] = *(_OWORD *)v14;
        v26[0] = v13;
        *(_QWORD *)&v13 = &off_13F1AD0;
        *((_QWORD *)&v13 + 1) = 1LL;
        *(_QWORD *)v14 = 8LL;
        *(_OWORD *)&v14[8] = 0LL;
        <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v16, &v21);
        if ( !(_QWORD)v16 )
LABEL_12:
          core::option::expect_failed(aFieldsetCorrup, 34LL, &off_13F1AE0);
        v29 = v18;
        v28[1] = v17;
        v28[0] = v16;
        v15 = &v12;
        *(_QWORD *)&v16 = v26;
        *((_QWORD *)&v16 + 1) = &v13;
        *(_QWORD *)&v17 = &unk_13E5CC0;
        *((_QWORD *)&v17 + 1) = v28;
        v18 = &v15;
        v19 = &unk_13F1AF8;
        v25[0] = &v16;
        v25[1] = 2LL;
        v25[2] = v8 + 48;
        *(_QWORD *)&v22 = *(_QWORD *)&v20[16];
        v21 = *(_OWORD *)v20;
        tracing::__macro_support::__tracing_log(v3, v5, v7, &v21, v25);
      }
    }
    v10 = hashbrown::map::HashMap<K,V,S,A>::remove(a1 + 440, v12);
    if ( v10 )
    {
      *(_QWORD *)&v13 = v10;
      tokio::runtime::task::harness::<impl tokio::runtime::task::raw::RawTask>::remote_abort(&v13);
      core::ptr::drop_in_place<tokio::runtime::task::join::JoinHandle<core::result::Result<(),anyhow::Error>>>(v13);
    }
  }
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<linera_service::config::DestinationId>>(v30);
  return core::ptr::drop_in_place<alloc::vec::Vec<linera_service::config::DestinationId>>(a2);
}