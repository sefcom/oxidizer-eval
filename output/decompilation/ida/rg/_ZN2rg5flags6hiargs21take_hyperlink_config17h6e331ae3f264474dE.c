__int64 __fastcall rg::flags::hiargs::take_hyperlink_config(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int128 v19; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v20; // [rsp+10h] [rbp-D8h]
  __int128 v21; // [rsp+20h] [rbp-C8h]
  __int128 v22; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+40h] [rbp-A8h]
  __int128 *v24; // [rsp+58h] [rbp-90h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+60h] [rbp-88h]
  __int128 v26; // [rsp+68h] [rbp-80h] BYREF
  __int64 v27; // [rsp+78h] [rbp-70h]
  __int128 v28; // [rsp+80h] [rbp-68h] BYREF
  __int128 v29; // [rsp+90h] [rbp-58h]
  __int64 v30; // [rsp+A0h] [rbp-48h]
  __int128 v31; // [rsp+A8h] [rbp-40h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-30h]
  __int128 v33; // [rsp+C8h] [rbp-20h]

  *(_QWORD *)&v31 = 0x8000000000000000LL;
  *((_QWORD *)&v32 + 1) = 0x8000000000000000LL;
  v1 = 0LL;
  if ( !__OFSUB__(0LL, *(_QWORD *)(a1 + 472)) )
    v1 = *(_QWORD *)(a1 + 480);
  rg::flags::hiargs::hostname(&v26, v1, *(_QWORD *)(a1 + 488));
  if ( (_QWORD)v26 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v26);
  }
  else
  {
    *(_QWORD *)&v23 = v27;
    v22 = v26;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
    {
      v24 = &v22;
      v25 = <alloc::string::String as core::fmt::Display>::fmt;
      v6 = log::__private_api::loc(&off_3EB238, 0LL, v2, v3, v4, v5, &off_3EB208, 1LL, &v24, 1LL, 0LL);
      *(_QWORD *)&v28 = aRgFlagsHiargs;
      *((_QWORD *)&v28 + 1) = 17LL;
      *(_QWORD *)&v29 = aRgFlagsHiargs;
      *((_QWORD *)&v29 + 1) = 17LL;
      v30 = v6;
      log::__private_api::log(&v19, 4LL, &v28);
    }
    *(_QWORD *)&v20 = v23;
    v19 = v22;
    ((void (__fastcall *)(__int128 *, __int128 *))grep_printer::hyperlink::HyperlinkEnvironment::host)(&v31, &v19);
  }
  rg::flags::hiargs::wsl_prefix(&v26);
  if ( (_QWORD)v26 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v26);
  }
  else
  {
    *(_QWORD *)&v23 = v27;
    v22 = v26;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
    {
      v24 = &v22;
      v25 = <alloc::string::String as core::fmt::Display>::fmt;
      v11 = log::__private_api::loc(&off_3EB250, 0LL, v7, v8, v9, v10, &off_3EB218, 1LL, &v24, 1LL, 0LL);
      *(_QWORD *)&v28 = aRgFlagsHiargs;
      *((_QWORD *)&v28 + 1) = 17LL;
      *(_QWORD *)&v29 = aRgFlagsHiargs;
      *((_QWORD *)&v29 + 1) = 17LL;
      v30 = v11;
      log::__private_api::log(&v19, 4LL, &v28);
    }
    *(_QWORD *)&v20 = v23;
    v19 = v22;
    ((void (__fastcall *)(__int128 *, __int128 *))grep_printer::hyperlink::HyperlinkEnvironment::wsl_prefix)(&v31, &v19);
  }
  v12 = *(_OWORD *)(a1 + 320);
  v23 = *(_OWORD *)(a1 + 336);
  v22 = v12;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 8LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_BYTE *)(a1 + 344) = 0;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
  {
    <T as alloc::string::SpecToString>::spec_to_string(&v26, &v22);
    v24 = &v26;
    v25 = <alloc::string::String as core::fmt::Debug>::fmt;
    v17 = log::__private_api::loc(&off_3EB268, &v22, v13, v14, v15, v16, &off_3EB228, 1LL, &v24, 1LL, 0LL);
    *(_QWORD *)&v28 = aRgFlagsHiargs;
    *((_QWORD *)&v28 + 1) = 17LL;
    *(_QWORD *)&v29 = aRgFlagsHiargs;
    *((_QWORD *)&v29 + 1) = 17LL;
    v30 = v17;
    log::__private_api::log(&v19, 4LL, &v28);
    core::ptr::drop_in_place<alloc::string::String>(&v26);
  }
  v21 = v33;
  v20 = v32;
  v19 = v31;
  v29 = v23;
  v28 = v22;
  return ((__int64 (__fastcall *)(__int128 *, __int128 *))grep_printer::hyperlink::HyperlinkConfig::new)(&v19, &v28);
}