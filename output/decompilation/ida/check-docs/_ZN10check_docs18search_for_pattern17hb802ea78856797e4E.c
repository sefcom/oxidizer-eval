_QWORD *__fastcall check_docs::search_for_pattern(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  _QWORD v10[2]; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 v11; // [rsp+10h] [rbp-198h] BYREF
  __int64 v12; // [rsp+20h] [rbp-188h]
  _BYTE v13[24]; // [rsp+48h] [rbp-160h] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-148h] BYREF
  int v15; // [rsp+78h] [rbp-130h]
  __int64 v16; // [rsp+80h] [rbp-128h] BYREF
  __int128 v17; // [rsp+88h] [rbp-120h]
  __int64 v18; // [rsp+98h] [rbp-110h]
  __int64 v19; // [rsp+A0h] [rbp-108h]
  _BYTE v20[72]; // [rsp+160h] [rbp-48h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  std::process::Command::new(&v16, aGrep);
  std::process::Command::arg(&v16, asc_480ED, 2LL);
  std::process::Command::arg(&v16, aN_1, 2LL);
  std::process::Command::arg(&v16, aR_1, 2LL);
  std::process::Command::arg(&v16, aBinaryFilesWit, 28LL);
  std::process::Command::arg(&v16, aExcludeDirChec, 24LL);
  std::process::Command::arg(&v16, a2, a3);
  std::process::Command::arg(&v16, a4, a5);
  std::process::Command::output(&v11, &v16);
  core::result::Result<T,E>::expect(v13, &v11, aFailedGrepComm, 19LL, &off_1D36A8);
  core::ptr::drop_in_place<std::process::Command>(&v16);
  if ( v15 )
  {
    *(_QWORD *)&v11 = v10;
    *((_QWORD *)&v11 + 1) = <&T as core::fmt::Display>::fmt;
    v16 = (__int64)&off_1D3688;
    *(_QWORD *)&v17 = 2LL;
    v19 = 0LL;
    *((_QWORD *)&v17 + 1) = &v11;
    v18 = 1LL;
    core::option::Option<T>::map_or_else(v20, 0LL, v8, &v16);
    a1[1] = anyhow::error::<impl anyhow::Error>::msg(v20);
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v13);
  }
  else
  {
    alloc::string::String::from_utf8(&v16, v13);
    v11 = v17;
    v12 = v18;
    if ( __OFSUB__(-v16, 1LL) )
    {
      a1[2] = v12;
      *(_OWORD *)a1 = v11;
    }
    else
    {
      v18 = v12;
      v17 = v11;
      a1[1] = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v16);
      *a1 = 0x8000000000000000LL;
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14);
  return a1;
}