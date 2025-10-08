__int64 __fastcall forc_crypto::sha256::hash(_OWORD *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+0h] [rbp-138h] BYREF
  __int128 v5; // [rsp+10h] [rbp-128h]
  __int128 v6; // [rsp+20h] [rbp-118h]
  __int128 v7; // [rsp+30h] [rbp-108h]
  __int128 v8; // [rsp+40h] [rbp-F8h]
  __int128 v9; // [rsp+50h] [rbp-E8h]
  __int128 v10; // [rsp+60h] [rbp-D8h]
  __int128 v11; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+80h] [rbp-B8h]
  __int128 v13; // [rsp+90h] [rbp-A8h]
  __int128 v14; // [rsp+A0h] [rbp-98h]
  __int128 v15; // [rsp+B0h] [rbp-88h]
  __int128 v16; // [rsp+C0h] [rbp-78h]
  __int128 v17; // [rsp+D0h] [rbp-68h]
  _BYTE v18[24]; // [rsp+E8h] [rbp-50h] BYREF
  _OWORD v19[3]; // [rsp+100h] [rbp-38h] BYREF

  <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default(&v4);
  v17 = v10;
  v16 = v9;
  v15 = v8;
  v14 = v7;
  v13 = v6;
  v12 = v5;
  v11 = v4;
  <T as core::convert::Into<U>>::into(&v4, a2);
  <D as digest::digest::Digest>::update(&v11, &v4);
  v10 = v17;
  v9 = v16;
  v8 = v15;
  v7 = v14;
  v6 = v13;
  v5 = v12;
  v4 = v11;
  ((void (__fastcall *)(_OWORD *, __int128 *))fuel_crypto::hasher::Hasher::finalize)(v19, &v4);
  hex::encode(v18, v19);
  serde_json::value::to_value(&v4, v18);
  core::result::Result<T,E>::unwrap(v19, &v4, &off_62C070);
  v2 = v19[0];
  a1[1] = v19[1];
  *a1 = v2;
  return core::ptr::drop_in_place<alloc::string::String>(v18);
}