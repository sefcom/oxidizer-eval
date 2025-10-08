__int64 __fastcall linera_proxy::grpc::GrpcProxy<S>::worker_client(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  char v3; // r12
  unsigned __int8 v4; // al
  char *v5; // rbx
  __int64 v6; // rax
  char *v7; // r13
  __int64 v8; // rax
  unsigned __int8 v9; // al
  char *v10; // rbx
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // r15
  char *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int128 v18; // kr00_16
  __int64 result; // rax
  __int128 v21; // [rsp+10h] [rbp-2C8h] BYREF
  __int128 v22; // [rsp+20h] [rbp-2B8h]
  __int64 v23; // [rsp+30h] [rbp-2A8h]
  __int128 **v24; // [rsp+38h] [rbp-2A0h] BYREF
  __int128 **v25; // [rsp+40h] [rbp-298h] BYREF
  __int128 *v26; // [rsp+48h] [rbp-290h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+50h] [rbp-288h]
  char *v28; // [rsp+58h] [rbp-280h]
  __int128 v29; // [rsp+60h] [rbp-278h] BYREF
  __int128 v30; // [rsp+70h] [rbp-268h]
  void *v31; // [rsp+80h] [rbp-258h]
  __int128 *v32; // [rsp+88h] [rbp-250h] BYREF
  _OWORD *v33; // [rsp+90h] [rbp-248h]
  void *v34; // [rsp+98h] [rbp-240h]
  _OWORD v35[9]; // [rsp+B0h] [rbp-228h] BYREF
  __int128 *v36; // [rsp+140h] [rbp-198h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+148h] [rbp-190h]
  char *v38; // [rsp+150h] [rbp-188h]
  __int128 v39; // [rsp+160h] [rbp-178h] BYREF
  __int128 v40; // [rsp+170h] [rbp-168h]
  __int64 v41; // [rsp+180h] [rbp-158h]
  _OWORD dest[15]; // [rsp+188h] [rbp-150h] BYREF
  __int64 v43; // [rsp+278h] [rbp-60h]
  void *v44; // [rsp+280h] [rbp-58h]
  __int64 v45; // [rsp+288h] [rbp-50h]
  _OWORD v46[4]; // [rsp+290h] [rbp-48h] BYREF

  v45 = a2;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL, 0LL) > 2
    && (unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS, 0LL) )
  {
    v3 = 0;
  }
  else
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL, 0LL) <= 2
      && (v4 = tracing_core::callsite::DefaultCallsite::interest(&linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE)) != 0
      && (unsigned __int8)tracing::__macro_support::__is_enabled(
                            linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE,
                            v4) )
    {
      v5 = (char *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE;
      v6 = *((_QWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 7);
      v35[1] = *((_OWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 4);
      v35[0] = *((_OWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 3);
      *(_QWORD *)&v35[2] = 0LL;
      *((_QWORD *)&v35[2] + 1) = v6;
      <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(dest, v35);
      if ( !*(_QWORD *)&dest[0]
        || (v41 = *(_QWORD *)&dest[2],
            v40 = dest[1],
            v39 = dest[0],
            tonic::request::Request<T>::remote_addr(&v36, a3[29]),
            v24 = &v36,
            <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(dest, v35),
            !*(_QWORD *)&dest[0]) )
      {
        core::option::expect_failed(aFieldsetCorrup, 34LL, &off_14A9A48);
      }
      v23 = *(_QWORD *)&dest[2];
      v22 = dest[1];
      v21 = dest[0];
      <linera_rpc::grpc::api::ChainInfoQuery as linera_rpc::grpc::server::GrpcProxyable>::chain_id(&v32, a3);
      v25 = &v32;
      *(_QWORD *)&dest[0] = &v39;
      *((_QWORD *)&dest[0] + 1) = &v24;
      *(_QWORD *)&dest[1] = &unk_14A9A60;
      *((_QWORD *)&dest[1] + 1) = &v21;
      *(_QWORD *)&dest[2] = &v25;
      *((_QWORD *)&dest[2] + 1) = &unk_14A9A80;
      v26 = dest;
      v27 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v28 = v5 + 48;
      tracing::span::Span::new(v35, v5, &v26);
    }
    else
    {
      *(_QWORD *)&v29 = 2LL;
      v31 = linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE;
      if ( !(unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS, 0LL) )
      {
        v7 = (char *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE;
        v8 = *((_QWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 7);
        v35[0] = *((_OWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 3);
        v35[1] = *((_OWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 4);
        *(_QWORD *)&v35[2] = 0LL;
        *((_QWORD *)&v35[2] + 1) = v8;
        <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(dest, v35);
        if ( !*(_QWORD *)&dest[0]
          || (v41 = *(_QWORD *)&dest[2],
              v40 = dest[1],
              v39 = dest[0],
              tonic::request::Request<T>::remote_addr(&v36, a3[29]),
              v24 = &v36,
              <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(dest, v35),
              !*(_QWORD *)&dest[0]) )
        {
          core::option::expect_failed(aFieldsetCorrup, 34LL, &off_14A9A48);
        }
        v23 = *(_QWORD *)&dest[2];
        v22 = dest[1];
        v21 = dest[0];
        <linera_rpc::grpc::api::ChainInfoQuery as linera_rpc::grpc::server::GrpcProxyable>::chain_id(&v32, a3);
        v25 = &v32;
        *(_QWORD *)&dest[0] = &v39;
        *((_QWORD *)&dest[0] + 1) = &v24;
        *(_QWORD *)&dest[1] = &unk_14A9A60;
        *((_QWORD *)&dest[1] + 1) = &v21;
        *(_QWORD *)&dest[2] = &v25;
        *((_QWORD *)&dest[2] + 1) = &unk_14A9A80;
        v26 = dest;
        v27 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v28 = v7 + 48;
        tracing::span::Span::record_all(&v29, &v26);
      }
      *(_QWORD *)&v35[2] = v31;
      v35[1] = v30;
      v35[0] = v29;
    }
    v31 = *(void **)&v35[2];
    v30 = v35[1];
    v29 = v35[0];
    v3 = 1;
    tracing::span::Span::do_enter(&v29);
  }
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL, 0LL) <= 1 )
  {
    v9 = tracing_core::callsite::DefaultCallsite::interest(&linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE);
    if ( v9 )
    {
      if ( (unsigned __int8)tracing::__macro_support::__is_enabled(
                              linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE,
                              v9) )
      {
        v10 = (char *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE;
        v11 = *((_QWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 7);
        v35[0] = *((_OWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 3);
        v35[1] = *((_OWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 4);
        *(_QWORD *)&v35[2] = 0LL;
        *((_QWORD *)&v35[2] + 1) = v11;
        <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(dest, v35);
        if ( *(_QWORD *)&dest[0] )
        {
          v23 = *(_QWORD *)&dest[2];
          v22 = dest[1];
          v21 = dest[0];
          tonic::request::Request<T>::remote_addr(&v39, a3[29]);
          v36 = &v39;
          v37 = <core::option::Option<T> as core::fmt::Debug>::fmt;
          *(_QWORD *)&dest[0] = &off_14A9A38;
          *((_QWORD *)&dest[0] + 1) = 1LL;
          *(_QWORD *)&dest[2] = 0LL;
          *(_QWORD *)&dest[1] = &v36;
          *((_QWORD *)&dest[1] + 1) = 1LL;
          v32 = &v21;
          v33 = dest;
          v34 = &unk_149B698;
          *(_QWORD *)&v35[0] = &v32;
          *((_QWORD *)&v35[0] + 1) = 1LL;
          *(_QWORD *)&v35[1] = v10 + 48;
          linera_proxy::grpc::GrpcProxy<S>::worker_client::{{closure}}(v35);
          goto LABEL_26;
        }
LABEL_36:
        core::option::expect_failed(aFieldsetCorrup, 34LL, &off_14A9AA0);
      }
    }
  }
  if ( !(unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS, 0LL)
    && (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
  {
    v44 = linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE;
    v12 = *((_OWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 2);
    *(_QWORD *)&v46[0] = 4LL;
    *(_OWORD *)((char *)v46 + 8) = v12;
    v43 = log::logger();
    v14 = v13;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _OWORD *))(v13 + 24))(v43, v46) )
    {
      v15 = (char *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE;
      v16 = *((_QWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 7);
      v35[0] = *((_OWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 3);
      v35[1] = *((_OWORD *)linera_proxy::grpc::GrpcProxy<S>::worker_client::__CALLSITE + 4);
      *(_QWORD *)&v35[2] = 0LL;
      *((_QWORD *)&v35[2] + 1) = v16;
      <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(dest, v35);
      if ( !*(_QWORD *)&dest[0] )
        goto LABEL_36;
      v23 = *(_QWORD *)&dest[2];
      v22 = dest[1];
      v21 = dest[0];
      tonic::request::Request<T>::remote_addr(&v39, a3[29]);
      v26 = &v39;
      v27 = <core::option::Option<T> as core::fmt::Debug>::fmt;
      *(_QWORD *)&dest[0] = &off_14A9A38;
      *((_QWORD *)&dest[0] + 1) = 1LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = &v26;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      v32 = &v21;
      v33 = dest;
      v34 = &unk_149B698;
      v36 = (__int128 *)&v32;
      v37 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v38 = v15 + 48;
      *(_QWORD *)&v35[1] = *(_QWORD *)&v46[1];
      v35[0] = v46[0];
      tracing::__macro_support::__tracing_log(v44, v43, v14, v35, &v36);
    }
  }
LABEL_26:
  memcpy(dest, a3, sizeof(dest));
  tonic::request::Request<T>::into_inner(v35, dest);
  v17 = v45;
  linera_proxy::grpc::GrpcProxy<S>::shard_for(dest, v45, v35);
  if ( __OFSUB__(-*(_QWORD *)&dest[0], 1LL) )
  {
    a1[1] = tonic::status::Status::new(5LL, aCouldNotFindSh, 32LL, -*(_QWORD *)&dest[0]);
    *a1 = 2LL;
  }
  else
  {
    v22 = dest[1];
    v21 = dest[0];
    linera_proxy::grpc::GrpcProxy<S>::worker_client_for_shard((__int64 *)dest, v17, (__int64)&v21);
    v18 = dest[0];
    if ( *(_QWORD *)&dest[0] != 2LL )
    {
      memcpy(a1 + 2, &dest[1], 0x98uLL);
      memcpy(a1 + 21, v35, 0x88uLL);
      *(_OWORD *)a1 = v18;
      result = core::ptr::drop_in_place<linera_rpc::config::ValidatorPublicNetworkPreConfig<linera_rpc::config::NetworkProtocol>>(&v21);
      if ( !v3 )
        return result;
      goto LABEL_33;
    }
    a1[1] = linera_proxy::grpc::GrpcProxy<S>::worker_client::{{closure}}(*((_QWORD *)&dest[0] + 1));
    *a1 = 2LL;
    core::ptr::drop_in_place<linera_rpc::config::ValidatorPublicNetworkPreConfig<linera_rpc::config::NetworkProtocol>>(&v21);
  }
  result = core::ptr::drop_in_place<linera_rpc::grpc::api::ChainInfoQuery>(v35);
  if ( !v3 )
    return result;
LABEL_33:
  core::ptr::drop_in_place<tracing::span::Entered>(&v29);
  return core::ptr::drop_in_place<tracing::span::Span>(&v29);
}