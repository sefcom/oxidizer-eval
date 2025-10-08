__int64 __fastcall rg::flags::hiargs::Paths::from_low_args(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int128 v5; // rax
  const char *i; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r14
  char v21; // bl
  bool v22; // bl
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 result; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int128 v45; // xmm0
  _QWORD *v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // [rsp+0h] [rbp-128h] BYREF
  __int128 v50; // [rsp+8h] [rbp-120h] BYREF
  __int64 v51; // [rsp+18h] [rbp-110h]
  __int128 v52; // [rsp+20h] [rbp-108h]
  __int64 (__fastcall *v53)(); // [rsp+30h] [rbp-F8h]
  const char *v54; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-E8h]
  const char *v56; // [rsp+48h] [rbp-E0h]
  __int64 v57; // [rsp+50h] [rbp-D8h]
  __int64 v58; // [rsp+58h] [rbp-D0h]
  __int64 v59; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD *v60; // [rsp+70h] [rbp-B8h]
  __int128 v61; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+88h] [rbp-A0h]
  __int64 v63; // [rsp+90h] [rbp-98h]
  const char *v64; // [rsp+98h] [rbp-90h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+A0h] [rbp-88h]
  const char *v66; // [rsp+A8h] [rbp-80h]
  __int64 v67; // [rsp+B0h] [rbp-78h]
  __int64 v68; // [rsp+B8h] [rbp-70h]
  __int128 v69; // [rsp+C0h] [rbp-68h]
  __int64 v70; // [rsp+D0h] [rbp-58h]
  __int64 v71; // [rsp+E0h] [rbp-48h] BYREF
  __int128 v72; // [rsp+E8h] [rbp-40h]

  v60 = a1;
  v4 = a3 + 176;
  v63 = a3;
  *(_QWORD *)&v5 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*(_QWORD *)(a3 + 192), 8LL, 24LL, &off_3EB118);
  v61 = v5;
  v62 = 0LL;
  alloc::vec::Vec<T,A>::drain(&v54, v4);
  for ( i = v54; v54 != (const char *)v55; i = v54 )
  {
    v54 = i + 24;
    v7 = *(_QWORD *)i;
    if ( *(_QWORD *)i == 0x8000000000000000LL )
      break;
    v72 = *(_OWORD *)(i + 8);
    v71 = v7;
    if ( *(_BYTE *)(a2 + 25) )
    {
      v8 = *((_QWORD *)&v72 + 1);
      if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq<&std::path::Path>>::eq(
                              v72,
                              *((_QWORD *)&v72 + 1),
                              asc_69BA0,
                              1LL) )
      {
        *(_QWORD *)&v50 = &off_3EB088;
        *((_QWORD *)&v50 + 1) = 1LL;
        v51 = 8LL;
        v52 = 0LL;
        v47 = anyhow::__private::format_err(&v50, v8, v9, v10, v11, v12);
        v48 = v60;
        v60[1] = v47;
        *v48 = 0x8000000000000000LL;
        core::ptr::drop_in_place<std::path::PathBuf>(&v71);
        core::ptr::drop_in_place<alloc::vec::drain::Drain<std::ffi::os_str::OsString>>(&v54);
        return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v61);
      }
    }
    alloc::vec::Vec<T,A>::push(&v61, &v71, &off_3EB1A8);
  }
  core::ptr::drop_in_place<alloc::vec::drain::Drain<std::ffi::os_str::OsString>>(&v54);
  v13 = core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL);
  v18 = v62;
  if ( v13 >= 4 )
  {
    v59 = v62;
    v64 = (const char *)&v59;
    v65 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v52 = 1uLL;
    v19 = log::__private_api::loc(&off_3EB130, 0LL, v14, v15, v16, v17, v49, &off_3EB098, 1LL, &v64, 1LL);
    v54 = aRgFlagsHiargs;
    v55 = 17LL;
    v56 = aRgFlagsHiargs;
    v57 = 17LL;
    v58 = v19;
    log::__private_api::log(&v50, 4LL, &v54);
  }
  if ( v18 )
  {
    if ( v18 == 1 )
    {
      v20 = *((_QWORD *)&v61 + 1);
      v21 = 1;
      if ( !(unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq<&std::path::Path>>::eq(
                               *(_QWORD *)(*((_QWORD *)&v61 + 1) + 8LL),
                               *(_QWORD *)(*((_QWORD *)&v61 + 1) + 16LL),
                               asc_69BA0,
                               1LL) )
        v21 = std::path::Path::is_dir(*(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 16)) ^ 1;
    }
    else
    {
      v21 = 0;
    }
    LOBYTE(v59) = v21;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
    {
      v64 = (const char *)&v59;
      v65 = <bool as core::fmt::Debug>::fmt;
      v52 = 1uLL;
      v36 = log::__private_api::loc(&off_3EB190, 0LL, v32, v33, v34, v35, v49, &off_3EB0A8, 1LL, &v64, 1LL);
      v54 = aRgFlagsHiargs;
      v55 = 17LL;
      v56 = aRgFlagsHiargs;
      v57 = 17LL;
      v58 = v36;
      log::__private_api::log(&v50, 4LL, &v54);
      v21 = v59;
    }
    result = v62;
    v38 = v60;
    v60[2] = v62;
    *(_OWORD *)v38 = v61;
    *((_BYTE *)v38 + 24) = 0;
    *((_BYTE *)v38 + 25) = v21;
  }
  else
  {
    HIBYTE(v49) = grep_cli::is_readable_stdin();
    v22 = 1;
    if ( HIBYTE(v49) && !*(_BYTE *)(a2 + 25) )
      v22 = *(_BYTE *)(v63 + 556) != 0;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
    {
      *(_QWORD *)&v50 = (char *)&v49 + 7;
      *((_QWORD *)&v50 + 1) = <bool as core::fmt::Display>::fmt;
      v51 = a2 + 25;
      *(_QWORD *)&v52 = <bool as core::fmt::Display>::fmt;
      *((_QWORD *)&v52 + 1) = v63 + 556;
      v53 = <rg::flags::lowargs::Mode as core::fmt::Debug>::fmt;
      v54 = (const char *)&off_3EB0B8;
      v55 = 4LL;
      v58 = 0LL;
      v56 = (const char *)&v50;
      v57 = 3LL;
      v26 = ((__int64 (__fastcall *)(char **, _QWORD, __int64, __int64, __int64, __int64, __int64))log::__private_api::loc)(
              &off_3EB148,
              0LL,
              v23,
              v63 + 556,
              v24,
              v25,
              v49);
      v64 = aRgFlagsHiargs;
      v65 = (__int64 (__fastcall *)())(&word_10 + 1);
      v66 = aRgFlagsHiargs;
      v67 = 17LL;
      v68 = v26;
      log::__private_api::log(&v54, 4LL, &v64);
    }
    if ( v22 )
    {
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
      {
        v52 = 0LL;
        v31 = log::__private_api::loc(&off_3EB178, 0LL, v27, v28, v29, v30, v49, &off_3EB0F8, 1LL, 8LL, 0LL);
        v54 = aRgFlagsHiargs;
        v55 = 17LL;
        v56 = aRgFlagsHiargs;
        v57 = 17LL;
        v58 = v31;
        log::__private_api::log(&v50, 4LL, &v54);
      }
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v50, asc_68DA0);
    }
    else
    {
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
      {
        v52 = 0LL;
        v43 = log::__private_api::loc(&off_3EB160, 0LL, v39, v40, v41, v42, v49, &off_3EB108, 1LL, 8LL, 0LL);
        v54 = aRgFlagsHiargs;
        v55 = 17LL;
        v56 = aRgFlagsHiargs;
        v57 = 17LL;
        v58 = v43;
        log::__private_api::log(&v50, 4LL, &v54);
      }
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v50, asc_69BA0);
    }
    v70 = v51;
    v69 = v50;
    v44 = alloc::alloc::Global::alloc_impl(8LL, 24LL, 0LL);
    if ( !v44 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v45 = v69;
    *(_QWORD *)(v44 + 16) = v70;
    *(_OWORD *)v44 = v45;
    v46 = v60;
    *v60 = 1LL;
    v46[1] = v44;
    v46[2] = 1LL;
    *((_BYTE *)v46 + 24) = 1;
    *((_BYTE *)v46 + 25) = !v22;
    return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v61);
  }
  return result;
}