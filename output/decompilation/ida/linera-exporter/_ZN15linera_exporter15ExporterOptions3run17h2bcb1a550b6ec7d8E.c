__int64 __fastcall linera_exporter::ExporterOptions::run(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // r13d
  __int64 v3; // r14
  int v4; // r15d
  __int64 v5; // r12
  unsigned __int8 v6; // al
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  char *v14; // [rsp+8h] [rbp-400h]
  __int64 v15; // [rsp+8h] [rbp-400h]
  int v16; // [rsp+10h] [rbp-3F8h]
  int v17; // [rsp+14h] [rbp-3F4h]
  __int64 v18; // [rsp+18h] [rbp-3F0h]
  char *v19; // [rsp+20h] [rbp-3E8h]
  void *v20; // [rsp+28h] [rbp-3E0h]
  __int128 v21; // [rsp+30h] [rbp-3D8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-3C8h]
  __int128 v23; // [rsp+50h] [rbp-3B8h]
  __int128 v24; // [rsp+60h] [rbp-3A8h]
  __int128 v25; // [rsp+70h] [rbp-398h]
  _OWORD src[9]; // [rsp+80h] [rbp-388h] BYREF
  _BYTE v27[8]; // [rsp+110h] [rbp-2F8h] BYREF
  __int64 v28; // [rsp+118h] [rbp-2F0h]
  __int64 v29; // [rsp+120h] [rbp-2E8h]
  _BYTE v30[24]; // [rsp+128h] [rbp-2E0h] BYREF
  __int128 v31; // [rsp+140h] [rbp-2C8h] BYREF
  __int128 v32; // [rsp+150h] [rbp-2B8h]
  __int128 v33; // [rsp+160h] [rbp-2A8h]
  __int128 v34; // [rsp+170h] [rbp-298h]
  __int128 v35; // [rsp+180h] [rbp-288h]
  _QWORD v36[3]; // [rsp+190h] [rbp-278h] BYREF
  __int128 v37; // [rsp+1A8h] [rbp-260h] BYREF
  __m256i v38; // [rsp+1B8h] [rbp-250h]
  __m256i v39; // [rsp+280h] [rbp-188h]
  __int128 v40; // [rsp+2A0h] [rbp-168h] BYREF
  __m256i v41; // [rsp+2B0h] [rbp-158h]
  _OWORD v42[5]; // [rsp+2D0h] [rbp-138h] BYREF
  __int64 v43; // [rsp+320h] [rbp-E8h]
  _BYTE dest[144]; // [rsp+328h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+3B8h] [rbp-50h]
  char v46; // [rsp+3D0h] [rbp-38h]

  fs_err::read_to_string(&v37, a1 + 56);
  core::result::Result<T,E>::expect(v27, &v37);
  <toml::de::Deserializer as serde::de::Deserializer>::deserialize_struct(&v37, v28, v29);
  core::result::Result<T,E>::expect(v42, &v37);
  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_DWORD *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_DWORD *)(a1 + 160);
  v5 = *(_QWORD *)(a1 + 168);
  v17 = *(_DWORD *)(a1 + 176);
  v16 = *(_DWORD *)(a1 + 196);
  if ( *(_BYTE *)(a1 + 192) == 1 )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL, 0LL) < 4 )
    {
      v6 = tracing_core::callsite::DefaultCallsite::interest(&linera_exporter::ExporterOptions::run::__CALLSITE);
      if ( v6 )
      {
        if ( (unsigned __int8)tracing::__macro_support::__is_enabled(
                                linera_exporter::ExporterOptions::run::__CALLSITE,
                                v6) )
        {
          v7 = *((_QWORD *)linera_exporter::ExporterOptions::run::__CALLSITE + 7);
          src[0] = *((_OWORD *)linera_exporter::ExporterOptions::run::__CALLSITE + 3);
          v14 = (char *)linera_exporter::ExporterOptions::run::__CALLSITE;
          src[1] = *((_OWORD *)linera_exporter::ExporterOptions::run::__CALLSITE + 4);
          *(_QWORD *)&src[2] = 0LL;
          *((_QWORD *)&src[2] + 1) = v7;
          <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v37, src);
          if ( (_QWORD)v37 )
          {
            *(_QWORD *)&v33 = v38.m256i_i64[2];
            v32 = *(_OWORD *)v38.m256i_i8;
            v31 = v37;
            *(_QWORD *)&v37 = &off_13F2088;
            *((_QWORD *)&v37 + 1) = 1LL;
            v38.m256i_i64[0] = 8LL;
            *(_OWORD *)&v38.m256i_u64[1] = 0LL;
            *(_QWORD *)&v21 = &v31;
            *((_QWORD *)&v21 + 1) = &v37;
            *(_QWORD *)&v22 = &unk_13E5CC0;
            *(_QWORD *)&src[0] = &v21;
            *((_QWORD *)&src[0] + 1) = 1LL;
            *(_QWORD *)&src[1] = v14 + 48;
            linera_exporter::ExporterOptions::run::{{closure}}(src);
            goto LABEL_12;
          }
LABEL_20:
          core::option::expect_failed(aFieldsetCorrup, 34LL, &off_13F2118);
        }
      }
    }
    if ( !(unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS, 0LL)
      && (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 2 )
    {
      v20 = linera_exporter::ExporterOptions::run::__CALLSITE;
      v8 = *((_OWORD *)linera_exporter::ExporterOptions::run::__CALLSITE + 2);
      *(_QWORD *)v30 = 2LL;
      *(_OWORD *)&v30[8] = v8;
      v15 = log::logger();
      v18 = v9;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v9 + 24))(v15, v30) )
      {
        v10 = *((_QWORD *)linera_exporter::ExporterOptions::run::__CALLSITE + 7);
        src[0] = *((_OWORD *)linera_exporter::ExporterOptions::run::__CALLSITE + 3);
        v19 = (char *)linera_exporter::ExporterOptions::run::__CALLSITE;
        src[1] = *((_OWORD *)linera_exporter::ExporterOptions::run::__CALLSITE + 4);
        *(_QWORD *)&src[2] = 0LL;
        *((_QWORD *)&src[2] + 1) = v10;
        <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v37, src);
        if ( !(_QWORD)v37 )
          goto LABEL_20;
        *(_QWORD *)&v33 = v38.m256i_i64[2];
        v32 = *(_OWORD *)v38.m256i_i8;
        v31 = v37;
        *(_QWORD *)&v37 = &off_13F2088;
        *((_QWORD *)&v37 + 1) = 1LL;
        v38.m256i_i64[0] = 8LL;
        *(_OWORD *)&v38.m256i_u64[1] = 0LL;
        *(_QWORD *)&v21 = &v31;
        *((_QWORD *)&v21 + 1) = &v37;
        *(_QWORD *)&v22 = &unk_13E5CC0;
        v36[0] = &v21;
        v36[1] = 1LL;
        v36[2] = v19 + 48;
        *(_QWORD *)&src[1] = *(_QWORD *)&v30[16];
        src[0] = *(_OWORD *)v30;
        tracing::__macro_support::__tracing_log(v20, v15, v18, src, v36);
      }
    }
  }
LABEL_12:
  *(_QWORD *)&src[5] = v43;
  src[4] = v42[4];
  src[3] = v42[3];
  src[2] = v42[2];
  src[1] = v42[1];
  src[0] = v42[0];
  *((_QWORD *)&src[5] + 1) = v1;
  LODWORD(src[6]) = v2;
  *((_QWORD *)&src[6] + 1) = v3;
  LODWORD(src[7]) = v4;
  *((_QWORD *)&src[7] + 1) = v5;
  LODWORD(src[8]) = v17;
  DWORD2(src[8]) = v16;
  tokio::runtime::builder::Builder::new_multi_thread(&v37);
  tokio::runtime::builder::Builder::thread_name(&v37);
  v11 = tokio::runtime::builder::Builder::worker_threads(&v37, *(_QWORD *)(a1 + 184), &off_13F2130);
  *(_WORD *)(v11 + 205) = 257;
  tokio::runtime::builder::Builder::build(&v31, v11);
  if ( (_QWORD)v31 == 2LL )
  {
    v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*((_QWORD *)&v31 + 1));
    core::ptr::drop_in_place<tokio::runtime::builder::Builder>(&v37);
    core::ptr::drop_in_place<linera_exporter::ExporterContext>(src);
  }
  else
  {
    v25 = v35;
    v24 = v34;
    v23 = v33;
    v22 = v32;
    v21 = v31;
    core::ptr::drop_in_place<tokio::runtime::builder::Builder>(&v37);
    v45 = a1;
    memcpy(dest, src, sizeof(dest));
    v46 = 0;
    tokio::runtime::runtime::Runtime::block_on(&v37, &v21, dest);
    v12 = *((_QWORD *)&v37 + 1);
    if ( (_QWORD)v37 != 0x800000000000001DLL )
    {
      v39 = v38;
      if ( (_QWORD)v37 == 0x800000000000001CLL )
      {
        v12 = 0LL;
      }
      else
      {
        v40 = v37;
        v41 = v39;
        v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v40);
      }
    }
    core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(&v21);
  }
  core::ptr::drop_in_place<alloc::string::String>(v27);
  return v12;
}