__int64 __fastcall binary::install::find_library_path(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  char *(**v4)(int); // rdi
  int v5; // eax
  size_t v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+10h] [rbp-D8h]
  const char *v16; // [rsp+18h] [rbp-D0h]
  __int64 v17; // [rsp+20h] [rbp-C8h]
  __int64 v18; // [rsp+28h] [rbp-C0h]
  char **v19; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-B0h]
  _QWORD *v21; // [rsp+40h] [rbp-A8h]
  __int128 v22; // [rsp+48h] [rbp-A0h]
  _BYTE v23[24]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v24[2]; // [rsp+78h] [rbp-70h] BYREF
  int v25; // [rsp+88h] [rbp-60h] BYREF
  __int64 v26; // [rsp+90h] [rbp-58h]
  __int64 v27; // [rsp+98h] [rbp-50h]
  Dl_info info; // [rsp+A0h] [rbp-48h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-20h] BYREF

  if ( (unsigned __int64)core::sync::atomic::atomic_load(a1) >= 3 )
  {
    v19 = &off_18E6DF0;
    v20 = 1LL;
    v21 = (_QWORD *)&byte_8;
    v22 = 0LL;
    v14 = aBinaryInstall;
    v15 = 15LL;
    v16 = aBinaryInstall;
    v17 = 15LL;
    v18 = log::__private_api::loc(&off_18E6E20);
    log::__private_api::log(&v19, 3LL, &v14, aBinaryInstall, v2, v3);
  }
  memset(&info, 0, sizeof(info));
  v4 = &strerror;
  v5 = dladdr(&strerror, &info);
  if ( v5 == 0
    || info.dli_fname == 0LL
    || (v6 = strlen(info.dli_fname),
        v4 = (char *(**)(int))&v25,
        core::ffi::c_str::CStr::to_str(&v25, info.dli_fname, v6 + 1),
        v25 == 1) )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load(v4) > 1 )
    {
      v19 = &off_18E6E10;
      v20 = 1LL;
      v21 = (_QWORD *)&byte_8;
      v22 = 0LL;
      v7 = log::__private_api::loc(&off_18E6E50);
      v14 = aBinaryInstall;
      v15 = 15LL;
      v16 = aBinaryInstall;
      v17 = 15LL;
      v18 = v7;
      log::__private_api::log(&v19, 2LL, &v14, aBinaryInstall, v8, v9);
    }
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aLib, 4LL);
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v23, v26, v27);
    std::path::PathBuf::pop(v23);
    if ( (unsigned __int64)core::sync::atomic::atomic_load(v23) >= 3 )
    {
      v29 = *(_OWORD *)&v23[8];
      v24[0] = &v29;
      v24[1] = <std::path::Display as core::fmt::Display>::fmt;
      v19 = &off_18E6E00;
      v20 = 1LL;
      v21 = v24;
      v22 = 1uLL;
      v11 = log::__private_api::loc(&off_18E6E38);
      v14 = aBinaryInstall;
      v15 = 15LL;
      v16 = aBinaryInstall;
      v17 = 15LL;
      v18 = v11;
      log::__private_api::log(&v19, 3LL, &v14, aBinaryInstall, v12, v13);
    }
    result = *(_QWORD *)&v23[16];
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v23[16];
    *(_OWORD *)a1 = *(_OWORD *)v23;
  }
  return result;
}