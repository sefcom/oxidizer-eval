__int64 __fastcall uu_date::uumain::uumain::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = <std::path::PathBuf as core::ops::deref::Deref>::deref(a2);
  v4 = std::path::Path::as_os_str(v2, v3);
  std::ffi::os_str::OsStr::to_string_lossy(v6, v4);
  <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(a1, v6);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v6);
  return a1;
}
