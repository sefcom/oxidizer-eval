__int64 alacritty::ipc::send_reply()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v3; // [rsp+8h] [rbp-80h] BYREF
  __int64 v4; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v5[2]; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v6[5]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v7[7]; // [rsp+50h] [rbp-38h] BYREF

  v0 = alacritty::ipc::send_reply_fallible();
  v4 = v0;
  if ( !v0 )
    return core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v4);
  v3 = v0;
  if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
  {
    v5[0] = &v3;
    v5[1] = <std::io::error::Error as core::fmt::Display>::fmt;
    v7[0] = &off_882F70;
    v7[1] = 1LL;
    v7[4] = 0LL;
    v7[2] = v5;
    v7[3] = 1LL;
    v1 = log::__private_api::loc(&off_882F80);
    v6[0] = aAlacrittyIpc;
    v6[1] = 14LL;
    v6[2] = aAlacrittyIpc;
    v6[3] = 14LL;
    v6[4] = v1;
    log::__private_api::log(v7, 1LL, v6);
  }
  return core::ptr::drop_in_place<std::io::error::Error>(&v3);
}