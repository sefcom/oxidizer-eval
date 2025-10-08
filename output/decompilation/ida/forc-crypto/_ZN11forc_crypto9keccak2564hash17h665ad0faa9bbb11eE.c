__int64 __fastcall forc_crypto::keccak256::hash(_OWORD *a1, __int64 a2)
{
  __int128 v2; // xmm0
  _BYTE v4[24]; // [rsp+0h] [rbp-318h] BYREF
  _OWORD v5[2]; // [rsp+18h] [rbp-300h] BYREF
  _BYTE dest[352]; // [rsp+38h] [rbp-2E0h] BYREF
  _BYTE src[384]; // [rsp+198h] [rbp-180h] BYREF

  <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default(src);
  <T as core::convert::Into<U>>::into(dest, a2);
  <D as digest::digest::Digest>::update(src, dest);
  memcpy(dest, src, sizeof(dest));
  digest::FixedOutput::finalize_fixed(v5, dest);
  hex::encode(v4, v5);
  serde_json::value::to_value(dest, v4);
  core::result::Result<T,E>::unwrap(v5, dest, &off_62C0C0);
  v2 = v5[0];
  a1[1] = v5[1];
  *a1 = v2;
  return core::ptr::drop_in_place<alloc::string::String>(v4);
}