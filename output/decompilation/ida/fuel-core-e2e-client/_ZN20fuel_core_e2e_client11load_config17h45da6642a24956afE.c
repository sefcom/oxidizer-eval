__int64 __fastcall fuel_core_e2e_client::load_config(__int64 a1)
{
  _QWORD v2[3]; // [rsp+0h] [rbp-E8h] BYREF
  _BYTE v3[208]; // [rsp+18h] [rbp-D0h] BYREF

  std::fs::read(v3);
  core::result::Result<T,E>::unwrap(v2, v3);
  toml::de::from_slice(v3, v2[1], v2[2]);
  core::result::Result<T,E>::unwrap(a1, v3);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v2);
  return a1;
}