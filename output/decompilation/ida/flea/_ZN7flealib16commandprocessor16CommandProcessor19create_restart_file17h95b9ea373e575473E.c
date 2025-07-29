__int64 __fastcall flealib::commandprocessor::CommandProcessor::create_restart_file(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  _QWORD v5[2]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v6; // [rsp+10h] [rbp-88h] BYREF
  _QWORD *v7; // [rsp+20h] [rbp-78h]
  __int64 v8; // [rsp+28h] [rbp-70h]
  __int64 v9; // [rsp+30h] [rbp-68h]
  const char *v10; // [rsp+48h] [rbp-50h] BYREF
  __int64 v11; // [rsp+50h] [rbp-48h]
  const char *v12; // [rsp+58h] [rbp-40h]
  __int64 v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  __int128 v15; // [rsp+70h] [rbp-28h] BYREF
  _QWORD *v16; // [rsp+80h] [rbp-18h]

  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v15, a2, &off_7087B8);
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
  {
    v5[0] = &v15;
    v5[1] = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
    *(_QWORD *)&v6 = &off_7087A8;
    *((_QWORD *)&v6 + 1) = 1LL;
    v9 = 0LL;
    v7 = v5;
    v8 = 1LL;
    v2 = log::__private_api::loc(&off_7087D0);
    v10 = aFlealibCommand;
    v11 = 25LL;
    v12 = aFlealibCommand;
    v13 = 25LL;
    v14 = v2;
    log::__private_api::log(&v6, 4LL, &v10);
  }
  std::path::PathBuf::push(&v15, "flea.rst@", 8LL);
  v7 = v16;
  v6 = v15;
  std::fs::File::create(&v10, &v6);
  if ( (_DWORD)v10 == 1 )
  {
    v3 = v11;
    v5[0] = v11;
    <T as alloc::string::SpecToString>::spec_to_string(&v6, v5);
    *(_QWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
    return core::ptr::drop_in_place<std::io::error::Error>(v3);
  }
  else
  {
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v10);
  }
}