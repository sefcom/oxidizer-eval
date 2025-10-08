__int64 __fastcall bat::assets::build_assets::acknowledgements::normalize_license_text(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE v5[8]; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+10h] [rbp-98h]
  __int64 v7; // [rsp+18h] [rbp-90h]
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+28h] [rbp-80h]
  __int64 v10; // [rsp+30h] [rbp-78h]
  _BYTE v11[32]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v12[72]; // [rsp+60h] [rbp-48h] BYREF

  regex::regex::string::Regex::new(v8, aS_5, 2LL);
  core::result::Result<T,E>::unwrap(v12, v8, &off_6CDFF0);
  regex::regex::string::Regex::replacen(v5, v12, a2, a3);
  regex::regex::string::Regex::new(v8, asc_9FFA2, 2LL);
  core::result::Result<T,E>::unwrap(v11, v8, &off_6CE008);
  regex::regex::string::Regex::replacen(v8, v11, v6, v7);
  <&str as alloc::string::SpecToString>::spec_to_string(a1, v9, v10);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v11);
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(v5);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v12);
  return core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(v8);
}