__int64 __fastcall check_docs::parse_includes(__int64 a1, __int64 a2)
{
  _OWORD v3[2]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v4[3]; // [rsp+28h] [rbp-30h] BYREF

  regex::regex::string::Regex::new(v3, aSDSSIncludeSSS, 64LL);
  core::result::Result<T,E>::expect(v4, v3, &off_1D3468);
  v3[0] = v4[0];
  v3[1] = v4[1];
  ((void (__fastcall *)(__int64, __int64, _OWORD *))check_docs::parse_includes::{{closure}})(a1, a2, v3);
  core::ptr::drop_in_place<alloc::string::String>(a2);
  return a1;
}