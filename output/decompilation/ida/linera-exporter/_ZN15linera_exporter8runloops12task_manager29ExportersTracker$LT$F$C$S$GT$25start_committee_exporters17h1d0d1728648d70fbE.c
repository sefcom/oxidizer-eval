__int64 __fastcall linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters(
        __int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // r14
  void *v4; // r13
  __int128 v5; // xmm0
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbp
  char *v9; // r15
  __int64 v10; // rax
  void *v11; // r13
  __int128 v12; // xmm0
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rbp
  char *v16; // r15
  __int64 v17; // rax
  char **v18; // rdx
  __int128 v19; // [rsp+0h] [rbp-1E8h] BYREF
  _BYTE v20[24]; // [rsp+10h] [rbp-1D8h]
  __int128 v21; // [rsp+38h] [rbp-1B0h] BYREF
  __int128 v22; // [rsp+48h] [rbp-1A0h]
  __int128 **v23; // [rsp+58h] [rbp-190h]
  void *v24; // [rsp+60h] [rbp-188h]
  __int128 *v25; // [rsp+68h] [rbp-180h] BYREF
  __int128 v26; // [rsp+70h] [rbp-178h] BYREF
  __int128 v27; // [rsp+80h] [rbp-168h]
  __int64 v28; // [rsp+90h] [rbp-158h]
  __int64 v29; // [rsp+98h] [rbp-150h]
  __int64 v30; // [rsp+A0h] [rbp-148h]
  __int64 v31; // [rsp+A8h] [rbp-140h]
  __int64 v32; // [rsp+B0h] [rbp-138h]
  __int128 *v33; // [rsp+B8h] [rbp-130h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-128h]
  char *v35; // [rsp+C8h] [rbp-120h]
  __int128 v36; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v37; // [rsp+E0h] [rbp-108h]
  _BYTE v38[24]; // [rsp+F0h] [rbp-F8h] BYREF
  _BYTE v39[24]; // [rsp+108h] [rbp-E0h] BYREF
  __int128 v40; // [rsp+120h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+130h] [rbp-B8h]
  __int64 v42; // [rsp+140h] [rbp-A8h]
  __int128 v43; // [rsp+150h] [rbp-98h] BYREF
  __int128 v44; // [rsp+160h] [rbp-88h]
  __int128 **v45; // [rsp+170h] [rbp-78h]
  _OWORD v46[2]; // [rsp+178h] [rbp-70h] BYREF
  _BYTE v47[80]; // [rsp+198h] [rbp-50h] BYREF

  v1 = a1;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v47);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v46, v47);
  if ( !__OFSUB__(0LL, *(_QWORD *)&v46[0]) )
  {
    v3 = a1 + 344;
    v32 = a1 + 392;
    v31 = a1;
    v30 = a1 + 344;
    do
    {
      v37 = v46[1];
      v36 = v46[0];
      if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v3, &v36)
        || hashbrown::map::HashMap<K,V,S,A>::get_inner(v32, &v36) )
      {
        if ( !(unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS, 0LL)
          && (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 5 )
        {
          v4 = linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE;
          v5 = *((_OWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE
               + 2);
          *(_QWORD *)v39 = 5LL;
          *(_OWORD *)&v39[8] = v5;
          v6 = log::logger();
          v8 = v7;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v7 + 24))(v6, v39) )
          {
            v9 = (char *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE;
            v10 = *((_QWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE
                  + 7);
            v26 = *((_OWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE
                  + 3);
            v27 = *((_OWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE
                  + 4);
            v28 = 0LL;
            v29 = v10;
            <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v19, &v26);
            if ( !(_QWORD)v19 )
              goto LABEL_21;
            v42 = *(_QWORD *)&v20[16];
            v41 = *(_OWORD *)v20;
            v40 = v19;
            *(_QWORD *)&v19 = &off_13F1A70;
            *((_QWORD *)&v19 + 1) = 1LL;
            *(_QWORD *)v20 = 8LL;
            *(_OWORD *)&v20[8] = 0LL;
            <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v21, &v26);
            if ( !(_QWORD)v21 )
            {
LABEL_21:
              v18 = &off_13F1A80;
              goto LABEL_22;
            }
            v45 = v23;
            v44 = v22;
            v43 = v21;
            v25 = &v36;
            *(_QWORD *)&v21 = &v40;
            *((_QWORD *)&v21 + 1) = &v19;
            *(_QWORD *)&v22 = &unk_13E5CC0;
            *((_QWORD *)&v22 + 1) = &v43;
            v23 = &v25;
            v24 = &unk_13F1A98;
            v33 = &v21;
            v34 = 2LL;
            v35 = v9 + 48;
            *(_QWORD *)&v27 = *(_QWORD *)&v39[16];
            v26 = *(_OWORD *)v39;
            tracing::__macro_support::__tracing_log(v4, v6, v8, &v26, &v33);
            v1 = v31;
            v3 = v30;
          }
        }
        core::ptr::drop_in_place<linera_service::config::DestinationId>(&v36);
      }
      else
      {
        <alloc::string::String as core::clone::Clone>::clone(&v21, &v36);
        v19 = v21;
        *(_QWORD *)v20 = v22;
        v20[8] = BYTE8(v37);
        hashbrown::map::HashMap<K,V,S,A>::insert(v32, &v19);
        if ( !(unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS, 0LL)
          && (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 5 )
        {
          v11 = linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE;
          v12 = *((_OWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE
                + 2);
          *(_QWORD *)v38 = 5LL;
          *(_OWORD *)&v38[8] = v12;
          v13 = log::logger();
          v15 = v14;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v14 + 24))(v13, v38) )
          {
            v16 = (char *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE;
            v17 = *((_QWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE
                  + 7);
            v26 = *((_OWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE
                  + 3);
            v27 = *((_OWORD *)linera_exporter::runloops::task_manager::ExportersTracker<F,S>::start_committee_exporters::__CALLSITE
                  + 4);
            v28 = 0LL;
            v29 = v17;
            <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v19, &v26);
            if ( !(_QWORD)v19 )
              goto LABEL_23;
            v42 = *(_QWORD *)&v20[16];
            v41 = *(_OWORD *)v20;
            v40 = v19;
            *(_QWORD *)&v19 = &off_13F1A60;
            *((_QWORD *)&v19 + 1) = 1LL;
            *(_QWORD *)v20 = 8LL;
            *(_OWORD *)&v20[8] = 0LL;
            <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v21, &v26);
            if ( !(_QWORD)v21 )
            {
LABEL_23:
              v18 = &off_13F1AB8;
LABEL_22:
              core::option::expect_failed(aFieldsetCorrup, 34LL, v18);
            }
            v45 = v23;
            v44 = v22;
            v43 = v21;
            v25 = &v36;
            *(_QWORD *)&v21 = &v40;
            *((_QWORD *)&v21 + 1) = &v19;
            *(_QWORD *)&v22 = &unk_13E5CC0;
            *((_QWORD *)&v22 + 1) = &v43;
            v23 = &v25;
            v24 = &unk_13F1A98;
            v33 = &v21;
            v34 = 2LL;
            v35 = v16 + 48;
            *(_QWORD *)&v27 = *(_QWORD *)&v38[16];
            v26 = *(_OWORD *)v38;
            tracing::__macro_support::__tracing_log(v11, v13, v15, &v26, &v33);
            v1 = v31;
            v3 = v30;
          }
        }
        *(_OWORD *)v20 = v37;
        v19 = v36;
        linera_exporter::runloops::task_manager::ExportersTracker<F,S>::spawn(v1, &v19);
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v46, v47);
    }
    while ( *(_QWORD *)&v46[0] != 0x8000000000000000LL );
  }
  return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<linera_service::config::DestinationId>>(v47);
}