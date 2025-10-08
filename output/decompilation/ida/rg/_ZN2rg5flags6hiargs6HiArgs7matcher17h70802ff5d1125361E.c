__int64 __fastcall rg::flags::hiargs::HiArgs::matcher(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  const char **v10; // rdi
  __int64 result; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  int v23; // edx
  __int64 v24; // [rsp+0h] [rbp-228h] BYREF
  __int64 v25; // [rsp+8h] [rbp-220h] BYREF
  const char *v26; // [rsp+10h] [rbp-218h] BYREF
  __int64 v27; // [rsp+18h] [rbp-210h]
  const char *v28; // [rsp+20h] [rbp-208h]
  __int64 v29; // [rsp+28h] [rbp-200h]
  void *v30; // [rsp+30h] [rbp-1F8h]
  __int64 v31; // [rsp+38h] [rbp-1F0h]
  __int128 v32; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-1D8h]
  _BYTE v34[24]; // [rsp+60h] [rbp-1C8h] BYREF
  __int128 v35; // [rsp+78h] [rbp-1B0h]
  __int128 v36; // [rsp+88h] [rbp-1A0h]
  __int128 v37; // [rsp+98h] [rbp-190h]
  _BYTE v38[27]; // [rsp+A8h] [rbp-180h]
  unsigned __int8 v39; // [rsp+C3h] [rbp-165h]
  int v40; // [rsp+C4h] [rbp-164h]
  _OWORD v41[6]; // [rsp+C8h] [rbp-160h] BYREF
  __int64 v42; // [rsp+128h] [rbp-100h]
  _OWORD v43[6]; // [rsp+130h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+190h] [rbp-98h]
  _OWORD v45[6]; // [rsp+198h] [rbp-90h] BYREF
  __int64 v46; // [rsp+1F8h] [rbp-30h]
  _BYTE v47[40]; // [rsp+200h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a2 + 916) )
  {
    rg::flags::hiargs::HiArgs::matcher_rust(v41);
    if ( BYTE3(v42) == 2 )
    {
      v26 = *(const char **)&v41[0];
      <T as alloc::string::SpecToString>::spec_to_string(v34, &v26);
      rg::flags::hiargs::suggest_other_engine(v47, v34);
      *(_QWORD *)a1 = anyhow::kind::Adhoc::new(v47);
      *(_BYTE *)(a1 + 99) = 2;
      v10 = &v26;
      return core::ptr::drop_in_place<anyhow::Error>(v10);
    }
    result = v42;
    *(_QWORD *)(a1 + 96) = v42;
    *(_OWORD *)(a1 + 80) = v41[5];
    *(_OWORD *)(a1 + 64) = v41[4];
    v12 = v41[0];
    v13 = v41[1];
    v14 = v41[2];
    v15 = v41[3];
LABEL_12:
    *(_OWORD *)(a1 + 48) = v15;
    *(_OWORD *)(a1 + 32) = v14;
    *(_OWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
    return result;
  }
  if ( *(_BYTE *)(a2 + 916) == 1 )
  {
    rg::flags::hiargs::HiArgs::matcher_rust(v43);
    if ( BYTE3(v44) == 2 )
    {
      v24 = *(_QWORD *)&v43[0];
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
      {
        *(_QWORD *)&v32 = &v24;
        *((_QWORD *)&v32 + 1) = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
        *(_QWORD *)v34 = &off_3EAE40;
        *(_QWORD *)&v34[8] = 1LL;
        *(_QWORD *)&v34[16] = &v32;
        v35 = 1uLL;
        v6 = log::__private_api::loc(&off_3EAE50, 0LL, v2, v3, v4, v5, v24, v25, v26, v27, v28);
        v26 = aRgFlagsHiargs;
        v27 = 17LL;
        v28 = aRgFlagsHiargs;
        v29 = 17LL;
        v30 = (void *)v6;
        log::__private_api::log(v34, 4LL, &v26);
      }
      rg::flags::hiargs::HiArgs::matcher_pcre2(v45);
      if ( BYTE3(v46) == 2 )
      {
        v25 = *(_QWORD *)&v45[0];
        alloc::slice::<impl [T]>::repeat(v34, asc_8758A, 79LL);
        v33 = *(_QWORD *)&v34[16];
        v32 = *(_OWORD *)v34;
        *(_QWORD *)v34 = &v32;
        *(_QWORD *)&v34[8] = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v34[16] = &v24;
        *(_QWORD *)&v35 = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
        *((_QWORD *)&v35 + 1) = &v25;
        *(_QWORD *)&v36 = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
        v26 = (const char *)&off_3EAE68;
        v27 = 4LL;
        v30 = &unk_87618;
        v31 = 4LL;
        v28 = v34;
        v29 = 3LL;
        *(_QWORD *)a1 = ((__int64 (__fastcall *)(const char **, const char *, __int64, __int64 *, __int64, __int64, __int64))anyhow::__private::format_err)(
                          &v26,
                          asc_8758A,
                          v7,
                          &v25,
                          v8,
                          v9,
                          v24);
        *(_BYTE *)(a1 + 99) = 2;
        core::ptr::drop_in_place<alloc::string::String>(&v32);
        core::ptr::drop_in_place<anyhow::Error>(&v25);
      }
      else
      {
        *(_QWORD *)(a1 + 96) = v46;
        *(_OWORD *)(a1 + 80) = v45[5];
        *(_OWORD *)(a1 + 64) = v45[4];
        v16 = v45[0];
        v17 = v45[1];
        v18 = v45[2];
        *(_OWORD *)(a1 + 48) = v45[3];
        *(_OWORD *)(a1 + 32) = v18;
        *(_OWORD *)(a1 + 16) = v17;
        *(_OWORD *)a1 = v16;
      }
      v10 = (const char **)&v24;
      return core::ptr::drop_in_place<anyhow::Error>(v10);
    }
    result = v44;
    *(_QWORD *)(a1 + 96) = v44;
    *(_OWORD *)(a1 + 80) = v43[5];
    *(_OWORD *)(a1 + 64) = v43[4];
    v12 = v43[0];
    v13 = v43[1];
    v14 = v43[2];
    v15 = v43[3];
    goto LABEL_12;
  }
  rg::flags::hiargs::HiArgs::matcher_pcre2(v34);
  result = v39;
  v19 = *(_QWORD *)v34;
  if ( v39 == 2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)v34;
    *(_BYTE *)(a1 + 99) = 2;
  }
  else
  {
    *(_OWORD *)(a1 + 83) = *(_OWORD *)&v38[11];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)v38;
    v20 = *(_OWORD *)&v34[8];
    v21 = v35;
    v22 = v36;
    *(_OWORD *)(a1 + 56) = v37;
    *(_OWORD *)(a1 + 40) = v22;
    *(_OWORD *)(a1 + 24) = v21;
    *(_OWORD *)(a1 + 8) = v20;
    v23 = v40;
    *(_QWORD *)a1 = v19;
    *(_BYTE *)(a1 + 99) = result;
    *(_DWORD *)(a1 + 100) = v23;
  }
  return result;
}