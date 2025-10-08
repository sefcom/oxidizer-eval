__int64 __fastcall alacritty::renderer::gl_debug_log(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6)
{
  size_t v7; // rax
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v11[5]; // [rsp+18h] [rbp-80h] BYREF
  _BYTE v12[24]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v13[8]; // [rsp+58h] [rbp-40h] BYREF

  v7 = strlen(a6);
  alloc::ffi::c_str::<impl core::ffi::c_str::CStr>::to_string_lossy(v12, a6, v7 + 1);
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
  {
    v10[0] = v12;
    v10[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v13[0] = &off_884170;
    v13[1] = 1LL;
    v13[4] = 0LL;
    v13[2] = v10;
    v13[3] = 1LL;
    v8 = log::__private_api::loc(&off_884180);
    v11[0] = aAlacrittyRende_4;
    v11[1] = 19LL;
    v11[2] = aAlacrittyRende_4;
    v11[3] = 19LL;
    v11[4] = v8;
    log::__private_api::log(v13, 4LL, v11);
  }
  return core::ptr::drop_in_place<crossfont::Style>(v12);
}