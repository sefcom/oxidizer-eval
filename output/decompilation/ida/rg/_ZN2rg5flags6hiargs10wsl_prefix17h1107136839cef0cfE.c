__int64 __fastcall rg::flags::hiargs::wsl_prefix(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+18h] [rbp-A0h]
  __int64 v11; // [rsp+20h] [rbp-98h]
  __int128 v12; // [rsp+30h] [rbp-88h] BYREF
  __int64 v13; // [rsp+40h] [rbp-78h]
  __int128 v14; // [rsp+50h] [rbp-68h] BYREF
  const char *v15; // [rsp+60h] [rbp-58h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+68h] [rbp-50h]
  const char *v17; // [rsp+70h] [rbp-48h]
  __int64 v18; // [rsp+78h] [rbp-40h]
  __int64 v19; // [rsp+80h] [rbp-38h]
  __int128 v20; // [rsp+88h] [rbp-30h] BYREF
  __int64 v21; // [rsp+98h] [rbp-20h]

  std::env::var_os(v9, aWslDistroName, 15LL);
  result = 0LL;
  if ( __OFSUB__(0LL, *(_QWORD *)v9) )
  {
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v13 = *(_QWORD *)&v9[16];
    v12 = *(_OWORD *)v9;
    v2 = *(_QWORD *)&v9[8];
    core::str::converts::from_utf8(v9);
    if ( *(_DWORD *)v9 == 1 )
    {
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
      {
        *(_QWORD *)&v14 = &v12;
        *((_QWORD *)&v14 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        *(_QWORD *)v9 = &off_3EB3E0;
        *(_QWORD *)&v9[8] = 2LL;
        v11 = 0LL;
        *(_QWORD *)&v9[16] = &v14;
        v10 = 1LL;
        v8 = log::__private_api::loc(&off_3EB410, 0LL, v4, v5, v6, v7);
        v15 = aRgFlagsHiargs;
        v16 = (__int64 (__fastcall *)())(&word_10 + 1);
        v17 = aRgFlagsHiargs;
        v18 = 17LL;
        v19 = v8;
        log::__private_api::log(v9, 4LL, &v15);
        v2 = *((_QWORD *)&v12 + 1);
      }
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      v14 = *(_OWORD *)&v9[8];
      v15 = (const char *)&v14;
      v16 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v9 = &off_3EB400;
      *(_QWORD *)&v9[8] = 1LL;
      v11 = 0LL;
      *(_QWORD *)&v9[16] = &v15;
      v10 = 1LL;
      core::option::Option<T>::map_or_else(&v20, 0LL, v3, v9);
      a1[2] = v21;
      *(_OWORD *)a1 = v20;
    }
    return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v12, v2);
  }
  return result;
}