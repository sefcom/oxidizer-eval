__int64 __fastcall uu_cksum::cksum::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  std::path::Path::to_string_lossy(v4, a2, a3);
  <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(a1, v4);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v4);
  return a1;
}
