__int64 __fastcall rg::flags::hiargs::hostname(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // [rsp+8h] [rbp-240h] BYREF
  const char *v26; // [rsp+10h] [rbp-238h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+18h] [rbp-230h]
  const char *v28; // [rsp+20h] [rbp-228h]
  __int64 (__fastcall *v29)(); // [rsp+28h] [rbp-220h]
  __int64 v30; // [rsp+30h] [rbp-218h]
  __int128 v31; // [rsp+40h] [rbp-208h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+50h] [rbp-1F8h]
  __int64 (__fastcall *v33)(); // [rsp+58h] [rbp-1F0h]
  __int128 v34; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v35; // [rsp+70h] [rbp-1D8h]
  __m256i v36; // [rsp+78h] [rbp-1D0h] BYREF
  __int128 v37; // [rsp+98h] [rbp-1B0h]
  __int128 v38; // [rsp+A8h] [rbp-1A0h]
  const char *v39; // [rsp+B8h] [rbp-190h] BYREF
  __int128 v40; // [rsp+C0h] [rbp-188h]
  __int64 (__fastcall *v41)(); // [rsp+D0h] [rbp-178h]
  __int64 v42; // [rsp+D8h] [rbp-170h]
  __int128 v43; // [rsp+E0h] [rbp-168h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+F0h] [rbp-158h]
  _QWORD v45[2]; // [rsp+100h] [rbp-148h] BYREF
  __m256i v46; // [rsp+110h] [rbp-138h] BYREF
  __int128 v47; // [rsp+130h] [rbp-118h]
  __int128 v48; // [rsp+140h] [rbp-108h]
  _QWORD v49[31]; // [rsp+150h] [rbp-F8h] BYREF

  if ( !a2 )
    return rg::flags::hiargs::platform_hostname(a1);
  v45[0] = a2;
  v45[1] = a3;
  grep_cli::decompress::resolve_binary(&v39);
  if ( ((unsigned __int8)v39 & 1) == 0 )
  {
    v44 = v41;
    v43 = v40;
    std::process::Command::new(v49, &v43);
    std::process::Command::stdin(v49, 1LL);
    grep_cli::process::CommandReader::new(&v36, v49);
    if ( v36.m256i_i32[0] == 2 )
    {
      v35 = v36.m256i_i64[3];
      v34 = *(_OWORD *)&v36.m256i_u64[1];
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
      {
        *(_QWORD *)&v31 = &v43;
        *((_QWORD *)&v31 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v32 = (__int64 (__fastcall *)())&v34;
        v33 = <grep_cli::process::CommandError as core::fmt::Display>::fmt;
        v26 = (const char *)&off_3EB2C0;
        v27 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v30 = 0LL;
        v28 = (const char *)&v31;
        v29 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v13 = log::__private_api::loc(&off_3EB350, 0LL, v9, v10, v11, v12);
        v39 = aRgFlagsHiargs;
        *(_QWORD *)&v40 = 17LL;
        *((_QWORD *)&v40 + 1) = aRgFlagsHiargs;
        v41 = (__int64 (__fastcall *)())(&word_10 + 1);
        v42 = v13;
        log::__private_api::log(&v26, 4LL, &v39);
      }
      rg::flags::hiargs::platform_hostname(a1);
      core::ptr::drop_in_place<grep_cli::process::CommandError>(&v34);
    }
    else
    {
      v48 = v38;
      v47 = v37;
      v46 = v36;
      std::io::read_to_string(&v31, &v46);
      if ( __OFSUB__(0LL, (_QWORD)v31) )
      {
        v25 = *((_QWORD *)&v31 + 1);
        if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
        {
          v39 = (const char *)&v43;
          *(_QWORD *)&v40 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
          *((_QWORD *)&v40 + 1) = &v25;
          v41 = <std::io::error::Error as core::fmt::Display>::fmt;
          v36.m256i_i64[0] = (__int64)&off_3EB2E0;
          v36.m256i_i64[1] = 2LL;
          *(_QWORD *)&v37 = 0LL;
          v36.m256i_i64[2] = (__int64)&v39;
          v36.m256i_i64[3] = 2LL;
          v18 = log::__private_api::loc(&off_3EB338, 0LL, v14, v15, v16, v17);
          v26 = aRgFlagsHiargs;
          v27 = (__int64 (__fastcall *)())(&word_10 + 1);
          v28 = aRgFlagsHiargs;
          v29 = (__int64 (__fastcall *)())(&word_10 + 1);
          v30 = v18;
          log::__private_api::log(&v36, 4LL, &v26);
        }
        rg::flags::hiargs::platform_hostname(a1);
        core::ptr::drop_in_place<std::io::error::Error>(&v25);
      }
      else
      {
        v35 = (__int64)v32;
        v34 = v31;
        v19 = core::str::<impl str>::trim_matches(*((_QWORD *)&v31 + 1), v32);
        if ( v20 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v36, v19);
          *(_QWORD *)(a1 + 16) = v36.m256i_i64[2];
          *(_OWORD *)a1 = *(_OWORD *)v36.m256i_i8;
          core::ptr::drop_in_place<alloc::string::String>(&v34);
          core::ptr::drop_in_place<std::process::Command>(v49);
          return core::ptr::drop_in_place<std::path::PathBuf>(&v43);
        }
        if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
        {
          v39 = (const char *)&v43;
          *(_QWORD *)&v40 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
          v36.m256i_i64[0] = (__int64)&off_3EB300;
          v36.m256i_i64[1] = 2LL;
          *(_QWORD *)&v37 = 0LL;
          v36.m256i_i64[2] = (__int64)&v39;
          v36.m256i_i64[3] = 1LL;
          v26 = aRgFlagsHiargs;
          v27 = (__int64 (__fastcall *)())(&word_10 + 1);
          v28 = aRgFlagsHiargs;
          v29 = (__int64 (__fastcall *)())(&word_10 + 1);
          v30 = log::__private_api::loc(&off_3EB320, 0LL, v21, v22, v23, v24);
          log::__private_api::log(&v36, 4LL, &v26);
        }
        rg::flags::hiargs::platform_hostname(a1);
        core::ptr::drop_in_place<alloc::string::String>(&v34);
      }
    }
    core::ptr::drop_in_place<std::process::Command>(v49);
    return core::ptr::drop_in_place<std::path::PathBuf>(&v43);
  }
  v32 = v41;
  v31 = v40;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
  {
    v26 = (const char *)v45;
    v27 = <&T as core::fmt::Debug>::fmt;
    v28 = (const char *)&v31;
    v29 = <grep_cli::process::CommandError as core::fmt::Display>::fmt;
    v49[0] = &off_3EB2A0;
    v49[1] = 2LL;
    v49[4] = 0LL;
    v49[2] = &v26;
    v49[3] = 2LL;
    v7 = log::__private_api::loc(&off_3EB368, 0LL, v3, v4, v5, v6);
    v36.m256i_i64[0] = (__int64)aRgFlagsHiargs;
    v36.m256i_i64[1] = 17LL;
    v36.m256i_i64[2] = (__int64)aRgFlagsHiargs;
    v36.m256i_i64[3] = 17LL;
    *(_QWORD *)&v37 = v7;
    log::__private_api::log(v49, 4LL, &v36);
  }
  rg::flags::hiargs::platform_hostname(a1);
  return core::ptr::drop_in_place<grep_cli::process::CommandError>(&v31);
}