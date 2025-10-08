__int64 linera_summary::main()
{
  unsigned __int8 v0; // al
  char *v1; // rbx
  __int64 v2; // rbx
  __int64 v4; // r14
  int v5; // edi
  unsigned __int8 v6; // al
  char *v7; // r15
  __int64 v8; // rax
  void *v9; // r14
  __int128 v10; // xmm0
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r12
  char *v14; // r13
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+0h] [rbp-EC8h] BYREF
  __int128 v17; // [rsp+10h] [rbp-EB8h] BYREF
  __int128 v18; // [rsp+20h] [rbp-EA8h]
  __int128 v19; // [rsp+30h] [rbp-E98h]
  __int128 v20; // [rsp+40h] [rbp-E88h]
  __int128 v21; // [rsp+50h] [rbp-E78h]
  __int128 *v22; // [rsp+60h] [rbp-E68h] BYREF
  __int128 *v23; // [rsp+68h] [rbp-E60h]
  void *v24; // [rsp+70h] [rbp-E58h]
  __int128 **v25; // [rsp+78h] [rbp-E50h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+80h] [rbp-E48h]
  char *v27; // [rsp+88h] [rbp-E40h]
  __int128 v28; // [rsp+90h] [rbp-E38h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-E28h]
  void *v30; // [rsp+B0h] [rbp-E18h]
  _BYTE v31[24]; // [rsp+B8h] [rbp-E10h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-DF8h] BYREF
  __int128 v33; // [rsp+E0h] [rbp-DE8h]
  __int128 v34; // [rsp+F0h] [rbp-DD8h]
  __int128 v35; // [rsp+100h] [rbp-DC8h]
  __int128 v36; // [rsp+110h] [rbp-DB8h]
  _QWORD v37[2]; // [rsp+120h] [rbp-DA8h] BYREF
  _OWORD v38[2]; // [rsp+130h] [rbp-D98h] BYREF
  __int64 v39; // [rsp+150h] [rbp-D78h]
  _BYTE v40[205]; // [rsp+158h] [rbp-D70h] BYREF
  __int16 v41; // [rsp+225h] [rbp-CA3h]
  __int128 v42; // [rsp+230h] [rbp-C98h] BYREF
  __int128 v43; // [rsp+240h] [rbp-C88h]
  void *v44; // [rsp+250h] [rbp-C78h]
  __int128 v45; // [rsp+258h] [rbp-C70h]
  __int128 v46; // [rsp+268h] [rbp-C60h]
  __int64 v47; // [rsp+278h] [rbp-C50h]
  char v48; // [rsp+2A8h] [rbp-C20h]

  linera_summary::summary_options::SummaryOptions::init(v38);
  linera_base::tracing::init(aSummary, 7LL);
  tokio::runtime::builder::Builder::new_multi_thread(v40);
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL, 0LL) <= 2
    && (v0 = tracing_core::callsite::DefaultCallsite::interest(&linera_summary::main::__CALLSITE)) != 0
    && (unsigned __int8)tracing::__macro_support::__is_enabled(linera_summary::main::__CALLSITE, v0) )
  {
    v42 = 8uLL;
    *(_QWORD *)&v43 = (char *)linera_summary::main::__CALLSITE + 48;
    tracing::span::Span::new(&v28, linera_summary::main::__CALLSITE, &v42);
  }
  else
  {
    v1 = (char *)linera_summary::main::__CALLSITE;
    *(_QWORD *)&v42 = 2LL;
    v44 = linera_summary::main::__CALLSITE;
    if ( !(unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS) )
    {
      v17 = 8uLL;
      *(_QWORD *)&v18 = v1 + 48;
      tracing::span::Span::record_all(&v42, &v17);
    }
    v30 = v44;
    v29 = v43;
    v28 = v42;
  }
  v41 = 257;
  tokio::runtime::builder::Builder::build(&v42, v40);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v17, &v42);
  v2 = *((_QWORD *)&v17 + 1);
  if ( (_QWORD)v17 != 2LL )
  {
    v36 = v21;
    v35 = v20;
    v34 = v19;
    v33 = v18;
    v32 = v17;
    v47 = v39;
    v46 = v38[1];
    v45 = v38[0];
    v42 = v28;
    v43 = v29;
    v44 = v30;
    v48 = 0;
    v4 = tokio::runtime::runtime::Runtime::block_on(&v32, &v42);
    v16[1] = v4;
    core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(&v32);
    v5 = 0;
    if ( !v4 )
      goto LABEL_11;
    v16[0] = v4;
    if ( core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL, 0LL) != 5
      && (v6 = tracing_core::callsite::DefaultCallsite::interest(&linera_summary::main::__CALLSITE)) != 0
      && (unsigned __int8)tracing::__macro_support::__is_enabled(linera_summary::main::__CALLSITE, v6) )
    {
      v7 = (char *)linera_summary::main::__CALLSITE;
      v8 = *((_QWORD *)linera_summary::main::__CALLSITE + 7);
      v17 = *((_OWORD *)linera_summary::main::__CALLSITE + 3);
      v18 = *((_OWORD *)linera_summary::main::__CALLSITE + 4);
      *(_QWORD *)&v19 = 0LL;
      *((_QWORD *)&v19 + 1) = v8;
      <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v42, &v17);
      if ( (_QWORD)v42 )
      {
        *(_QWORD *)&v34 = v44;
        v33 = v43;
        v32 = v42;
        v25 = (__int128 **)v16;
        v26 = anyhow::error::<impl core::fmt::Debug for anyhow::Error>::fmt;
        *(_QWORD *)&v42 = &off_8D0910;
        *((_QWORD *)&v42 + 1) = 1LL;
        v44 = 0LL;
        *(_QWORD *)&v43 = &v25;
        *((_QWORD *)&v43 + 1) = 1LL;
        v22 = &v32;
        v23 = &v42;
        v24 = &unk_8CD5E8;
        *(_QWORD *)&v17 = &v22;
        *((_QWORD *)&v17 + 1) = 1LL;
        *(_QWORD *)&v18 = v7 + 48;
        linera_summary::main::{{closure}}(&v17);
LABEL_15:
        core::ptr::drop_in_place<anyhow::Error>(v16);
        v5 = 2;
LABEL_11:
        std::process::exit(v5);
      }
    }
    else
    {
      if ( (unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS) )
        goto LABEL_15;
      if ( !core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
        goto LABEL_15;
      v9 = linera_summary::main::__CALLSITE;
      v10 = *((_OWORD *)linera_summary::main::__CALLSITE + 2);
      *(_QWORD *)v31 = 1LL;
      *(_OWORD *)&v31[8] = v10;
      v11 = log::logger();
      v13 = v12;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v12 + 24))(v11, v31) )
        goto LABEL_15;
      v14 = (char *)linera_summary::main::__CALLSITE;
      v15 = *((_QWORD *)linera_summary::main::__CALLSITE + 7);
      v17 = *((_OWORD *)linera_summary::main::__CALLSITE + 3);
      v18 = *((_OWORD *)linera_summary::main::__CALLSITE + 4);
      *(_QWORD *)&v19 = 0LL;
      *((_QWORD *)&v19 + 1) = v15;
      <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v42, &v17);
      if ( (_QWORD)v42 )
      {
        *(_QWORD *)&v34 = v44;
        v33 = v43;
        v32 = v42;
        v37[0] = v16;
        v37[1] = anyhow::error::<impl core::fmt::Debug for anyhow::Error>::fmt;
        *(_QWORD *)&v42 = &off_8D0910;
        *((_QWORD *)&v42 + 1) = 1LL;
        v44 = 0LL;
        *(_QWORD *)&v43 = v37;
        *((_QWORD *)&v43 + 1) = 1LL;
        v22 = &v32;
        v23 = &v42;
        v24 = &unk_8CD5E8;
        v25 = &v22;
        v26 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v27 = v14 + 48;
        *(_QWORD *)&v18 = *(_QWORD *)&v31[16];
        v17 = *(_OWORD *)v31;
        tracing::__macro_support::__tracing_log(v9, v11, v13, &v17, &v25);
        goto LABEL_15;
      }
    }
    core::option::expect_failed(aFieldsetCorrup_0, 34LL, &off_8D0938);
  }
  core::ptr::drop_in_place<tracing::span::Span>(&v28);
  core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v40);
  core::ptr::drop_in_place<linera_summary::summary_options::SummaryOptions>(v38);
  return v2;
}